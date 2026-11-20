// DolRecomp output
#include "../generated.h"

static void loop_7F24883C(CPUState* ctx) {
label_7F24883C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F24883Cu;
    // 7F24883C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F248840u;
    // 7F248840: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F248844u;
    // 7F248844: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F248848u;
    // 7F248848: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F24884C: bc    16, 0, 0x7F24883C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24883Cu;
                return;
            }
            goto label_7F24883C;
        }
    }

    ctx->pc = 0x7F248850u;
}

static void loop_7F248968(CPUState* ctx) {
label_7F248968:
    ctx->downcount -= 5;
    ctx->pc = 0x7F248968u;
    // 7F248968: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F24896Cu;
    // 7F24896C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F248970u;
    // 7F248970: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F248974u;
    // 7F248974: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F248978: bc    16, 0, 0x7F248968
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F248968u;
                return;
            }
            goto label_7F248968;
        }
    }

    ctx->pc = 0x7F24897Cu;
}

static void loop_7F24898C(CPUState* ctx) {
label_7F24898C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F24898Cu;
    // 7F24898C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F248990u;
    // 7F248990: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F248994u;
    // 7F248994: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F248998u;
    // 7F248998: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F24899C: bc    16, 0, 0x7F24898C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24898Cu;
                return;
            }
            goto label_7F24898C;
        }
    }

    ctx->pc = 0x7F2489A0u;
}

static void loop_7F2489B0(CPUState* ctx) {
label_7F2489B0:
    ctx->downcount -= 5;
    ctx->pc = 0x7F2489B0u;
    // 7F2489B0: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2489B4u;
    // 7F2489B4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F2489B8u;
    // 7F2489B8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F2489BCu;
    // 7F2489BC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F2489C0: bc    16, 0, 0x7F2489B0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2489B0u;
                return;
            }
            goto label_7F2489B0;
        }
    }

    ctx->pc = 0x7F2489C4u;
}

static void loop_7F248A38(CPUState* ctx) {
label_7F248A38:
    ctx->downcount -= 5;
    ctx->pc = 0x7F248A38u;
    // 7F248A38: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F248A3Cu;
    // 7F248A3C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F248A40u;
    // 7F248A40: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F248A44u;
    // 7F248A44: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F248A48: bc    16, 0, 0x7F248A38
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F248A38u;
                return;
            }
            goto label_7F248A38;
        }
    }

    ctx->pc = 0x7F248A4Cu;
}

static void loop_7F248A5C(CPUState* ctx) {
label_7F248A5C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F248A5Cu;
    // 7F248A5C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F248A60u;
    // 7F248A60: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F248A64u;
    // 7F248A64: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F248A68u;
    // 7F248A68: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F248A6C: bc    16, 0, 0x7F248A5C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F248A5Cu;
                return;
            }
            goto label_7F248A5C;
        }
    }

    ctx->pc = 0x7F248A70u;
}

static void loop_7F248A80(CPUState* ctx) {
label_7F248A80:
    ctx->downcount -= 5;
    ctx->pc = 0x7F248A80u;
    // 7F248A80: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F248A84u;
    // 7F248A84: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F248A88u;
    // 7F248A88: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F248A8Cu;
    // 7F248A8C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F248A90: bc    16, 0, 0x7F248A80
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F248A80u;
                return;
            }
            goto label_7F248A80;
        }
    }

    ctx->pc = 0x7F248A94u;
}

static void loop_7F249778(CPUState* ctx) {
label_7F249778:
    ctx->downcount -= 5;
    ctx->pc = 0x7F249778u;
    // 7F249778: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F24977Cu;
    // 7F24977C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F249780u;
    // 7F249780: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F249784u;
    // 7F249784: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F249788: bc    16, 0, 0x7F249778
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F249778u;
                return;
            }
            goto label_7F249778;
        }
    }

    ctx->pc = 0x7F24978Cu;
}

static void loop_7F24981C(CPUState* ctx) {
label_7F24981C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F24981Cu;
    // 7F24981C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F249820u;
    // 7F249820: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F249824u;
    // 7F249824: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F249828u;
    // 7F249828: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F24982C: bc    16, 0, 0x7F24981C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24981Cu;
                return;
            }
            goto label_7F24981C;
        }
    }

    ctx->pc = 0x7F249830u;
}

static void loop_7F24B744(CPUState* ctx) {
label_7F24B744:
    ctx->downcount -= 10;
    ctx->pc = 0x7F24B744u;
    // 7F24B744: sth     r5, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

    ctx->pc = 0x7F24B748u;
    // 7F24B748: sth     r5, 6(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

    ctx->pc = 0x7F24B74Cu;
    // 7F24B74C: sth     r4, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

    ctx->pc = 0x7F24B750u;
    // 7F24B750: sth     r4, 14(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

    ctx->pc = 0x7F24B754u;
    // 7F24B754: stb     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    ctx->pc = 0x7F24B758u;
    // 7F24B758: stb     r0, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    ctx->pc = 0x7F24B75Cu;
    // 7F24B75C: stb     r0, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    ctx->pc = 0x7F24B760u;
    // 7F24B760: stb     r3, 3(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    // 7F24B764: addi    r6, r6, 16
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(16);

    // 7F24B768: bc    16, 0, 0x7F24B744
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24B744u;
                return;
            }
            goto label_7F24B744;
        }
    }

    ctx->pc = 0x7F24B76Cu;
}

void func_7F2480EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F2480ECu: goto label_7F2480EC;
    case 0x7F2480F0u: goto label_7F2480F0;
    case 0x7F2480F4u: goto label_7F2480F4;
    case 0x7F2480F8u: goto label_7F2480F8;
    case 0x7F2480FCu: goto label_7F2480FC;
    case 0x7F248100u: goto label_7F248100;
    case 0x7F248104u: goto label_7F248104;
    case 0x7F248108u: goto label_7F248108;
    case 0x7F24810Cu: goto label_7F24810C;
    case 0x7F248110u: goto label_7F248110;
    case 0x7F248114u: goto label_7F248114;
    case 0x7F248118u: goto label_7F248118;
    case 0x7F24811Cu: goto label_7F24811C;
    case 0x7F248120u: goto label_7F248120;
    case 0x7F248124u: goto label_7F248124;
    case 0x7F248128u: goto label_7F248128;
    case 0x7F24812Cu: goto label_7F24812C;
    case 0x7F248130u: goto label_7F248130;
    case 0x7F248134u: goto label_7F248134;
    case 0x7F248138u: goto label_7F248138;
    case 0x7F24813Cu: goto label_7F24813C;
    case 0x7F248140u: goto label_7F248140;
    case 0x7F248144u: goto label_7F248144;
    case 0x7F248148u: goto label_7F248148;
    case 0x7F24814Cu: goto label_7F24814C;
    case 0x7F248150u: goto label_7F248150;
    case 0x7F248154u: goto label_7F248154;
    case 0x7F248158u: goto label_7F248158;
    case 0x7F24815Cu: goto label_7F24815C;
    case 0x7F248160u: goto label_7F248160;
    case 0x7F248164u: goto label_7F248164;
    case 0x7F248168u: goto label_7F248168;
    case 0x7F24816Cu: goto label_7F24816C;
    case 0x7F248170u: goto label_7F248170;
    case 0x7F248174u: goto label_7F248174;
    case 0x7F248178u: goto label_7F248178;
    case 0x7F24817Cu: goto label_7F24817C;
    case 0x7F248180u: goto label_7F248180;
    case 0x7F248184u: goto label_7F248184;
    case 0x7F248188u: goto label_7F248188;
    case 0x7F24818Cu: goto label_7F24818C;
    case 0x7F248190u: goto label_7F248190;
    case 0x7F248194u: goto label_7F248194;
    case 0x7F248198u: goto label_7F248198;
    case 0x7F24819Cu: goto label_7F24819C;
    case 0x7F2481A0u: goto label_7F2481A0;
    case 0x7F2481A4u: goto label_7F2481A4;
    case 0x7F2481A8u: goto label_7F2481A8;
    case 0x7F2481ACu: goto label_7F2481AC;
    case 0x7F2481B0u: goto label_7F2481B0;
    case 0x7F2481B4u: goto label_7F2481B4;
    case 0x7F2481B8u: goto label_7F2481B8;
    case 0x7F2481BCu: goto label_7F2481BC;
    case 0x7F2481C0u: goto label_7F2481C0;
    case 0x7F2481C4u: goto label_7F2481C4;
    case 0x7F2481C8u: goto label_7F2481C8;
    case 0x7F2481CCu: goto label_7F2481CC;
    case 0x7F2481D0u: goto label_7F2481D0;
    case 0x7F2481D4u: goto label_7F2481D4;
    case 0x7F2481D8u: goto label_7F2481D8;
    case 0x7F2481DCu: goto label_7F2481DC;
    case 0x7F2481E0u: goto label_7F2481E0;
    case 0x7F2481E4u: goto label_7F2481E4;
    case 0x7F2481E8u: goto label_7F2481E8;
    case 0x7F2481ECu: goto label_7F2481EC;
    case 0x7F2481F0u: goto label_7F2481F0;
    case 0x7F2481F4u: goto label_7F2481F4;
    case 0x7F2481F8u: goto label_7F2481F8;
    case 0x7F2481FCu: goto label_7F2481FC;
    case 0x7F248200u: goto label_7F248200;
    case 0x7F248204u: goto label_7F248204;
    case 0x7F248208u: goto label_7F248208;
    case 0x7F24820Cu: goto label_7F24820C;
    case 0x7F248210u: goto label_7F248210;
    case 0x7F248214u: goto label_7F248214;
    case 0x7F248218u: goto label_7F248218;
    case 0x7F24821Cu: goto label_7F24821C;
    case 0x7F248220u: goto label_7F248220;
    case 0x7F248224u: goto label_7F248224;
    case 0x7F248228u: goto label_7F248228;
    case 0x7F24822Cu: goto label_7F24822C;
    case 0x7F248230u: goto label_7F248230;
    case 0x7F248234u: goto label_7F248234;
    case 0x7F248238u: goto label_7F248238;
    case 0x7F24823Cu: goto label_7F24823C;
    case 0x7F248240u: goto label_7F248240;
    case 0x7F248244u: goto label_7F248244;
    case 0x7F248248u: goto label_7F248248;
    case 0x7F24824Cu: goto label_7F24824C;
    case 0x7F248250u: goto label_7F248250;
    case 0x7F248254u: goto label_7F248254;
    case 0x7F248258u: goto label_7F248258;
    case 0x7F24825Cu: goto label_7F24825C;
    case 0x7F248260u: goto label_7F248260;
    case 0x7F248264u: goto label_7F248264;
    case 0x7F248268u: goto label_7F248268;
    case 0x7F24826Cu: goto label_7F24826C;
    case 0x7F248270u: goto label_7F248270;
    case 0x7F248274u: goto label_7F248274;
    case 0x7F248278u: goto label_7F248278;
    case 0x7F24827Cu: goto label_7F24827C;
    case 0x7F248280u: goto label_7F248280;
    case 0x7F248284u: goto label_7F248284;
    case 0x7F248288u: goto label_7F248288;
    case 0x7F24828Cu: goto label_7F24828C;
    case 0x7F248290u: goto label_7F248290;
    case 0x7F248294u: goto label_7F248294;
    case 0x7F248298u: goto label_7F248298;
    case 0x7F24829Cu: goto label_7F24829C;
    case 0x7F2482A0u: goto label_7F2482A0;
    case 0x7F2482A4u: goto label_7F2482A4;
    case 0x7F2482A8u: goto label_7F2482A8;
    case 0x7F2482ACu: goto label_7F2482AC;
    case 0x7F2482B0u: goto label_7F2482B0;
    case 0x7F2482B4u: goto label_7F2482B4;
    case 0x7F2482B8u: goto label_7F2482B8;
    case 0x7F2482BCu: goto label_7F2482BC;
    case 0x7F2482C0u: goto label_7F2482C0;
    case 0x7F2482C4u: goto label_7F2482C4;
    case 0x7F2482C8u: goto label_7F2482C8;
    case 0x7F2482CCu: goto label_7F2482CC;
    case 0x7F2482D0u: goto label_7F2482D0;
    case 0x7F2482D4u: goto label_7F2482D4;
    case 0x7F2482D8u: goto label_7F2482D8;
    case 0x7F2482DCu: goto label_7F2482DC;
    case 0x7F2482E0u: goto label_7F2482E0;
    case 0x7F2482E4u: goto label_7F2482E4;
    case 0x7F2482E8u: goto label_7F2482E8;
    case 0x7F2482ECu: goto label_7F2482EC;
    case 0x7F2482F0u: goto label_7F2482F0;
    case 0x7F2482F4u: goto label_7F2482F4;
    case 0x7F2482F8u: goto label_7F2482F8;
    case 0x7F2482FCu: goto label_7F2482FC;
    case 0x7F248300u: goto label_7F248300;
    case 0x7F248304u: goto label_7F248304;
    case 0x7F248308u: goto label_7F248308;
    case 0x7F24830Cu: goto label_7F24830C;
    case 0x7F248310u: goto label_7F248310;
    case 0x7F248314u: goto label_7F248314;
    case 0x7F248318u: goto label_7F248318;
    case 0x7F24831Cu: goto label_7F24831C;
    case 0x7F248320u: goto label_7F248320;
    case 0x7F248324u: goto label_7F248324;
    case 0x7F248328u: goto label_7F248328;
    case 0x7F24832Cu: goto label_7F24832C;
    case 0x7F248330u: goto label_7F248330;
    case 0x7F248334u: goto label_7F248334;
    case 0x7F248338u: goto label_7F248338;
    case 0x7F24833Cu: goto label_7F24833C;
    case 0x7F248340u: goto label_7F248340;
    case 0x7F248344u: goto label_7F248344;
    case 0x7F248348u: goto label_7F248348;
    case 0x7F24834Cu: goto label_7F24834C;
    case 0x7F248350u: goto label_7F248350;
    case 0x7F248354u: goto label_7F248354;
    case 0x7F248358u: goto label_7F248358;
    case 0x7F24835Cu: goto label_7F24835C;
    case 0x7F248360u: goto label_7F248360;
    case 0x7F248364u: goto label_7F248364;
    case 0x7F248368u: goto label_7F248368;
    case 0x7F24836Cu: goto label_7F24836C;
    case 0x7F248370u: goto label_7F248370;
    case 0x7F248374u: goto label_7F248374;
    case 0x7F248378u: goto label_7F248378;
    case 0x7F24837Cu: goto label_7F24837C;
    case 0x7F248380u: goto label_7F248380;
    case 0x7F248384u: goto label_7F248384;
    case 0x7F248388u: goto label_7F248388;
    case 0x7F24838Cu: goto label_7F24838C;
    case 0x7F248390u: goto label_7F248390;
    case 0x7F248394u: goto label_7F248394;
    case 0x7F248398u: goto label_7F248398;
    case 0x7F24839Cu: goto label_7F24839C;
    case 0x7F2483A0u: goto label_7F2483A0;
    case 0x7F2483A4u: goto label_7F2483A4;
    case 0x7F2483A8u: goto label_7F2483A8;
    case 0x7F2483ACu: goto label_7F2483AC;
    case 0x7F2483B0u: goto label_7F2483B0;
    case 0x7F2483B4u: goto label_7F2483B4;
    case 0x7F2483B8u: goto label_7F2483B8;
    case 0x7F2483BCu: goto label_7F2483BC;
    case 0x7F2483C0u: goto label_7F2483C0;
    case 0x7F2483C4u: goto label_7F2483C4;
    case 0x7F2483C8u: goto label_7F2483C8;
    case 0x7F2483CCu: goto label_7F2483CC;
    case 0x7F2483D0u: goto label_7F2483D0;
    case 0x7F2483D4u: goto label_7F2483D4;
    case 0x7F2483D8u: goto label_7F2483D8;
    case 0x7F2483DCu: goto label_7F2483DC;
    case 0x7F2483E0u: goto label_7F2483E0;
    case 0x7F2483E4u: goto label_7F2483E4;
    case 0x7F2483E8u: goto label_7F2483E8;
    case 0x7F2483ECu: goto label_7F2483EC;
    case 0x7F2483F0u: goto label_7F2483F0;
    case 0x7F2483F4u: goto label_7F2483F4;
    case 0x7F2483F8u: goto label_7F2483F8;
    case 0x7F2483FCu: goto label_7F2483FC;
    case 0x7F248400u: goto label_7F248400;
    case 0x7F248404u: goto label_7F248404;
    case 0x7F248408u: goto label_7F248408;
    case 0x7F24840Cu: goto label_7F24840C;
    case 0x7F248410u: goto label_7F248410;
    case 0x7F248414u: goto label_7F248414;
    case 0x7F248418u: goto label_7F248418;
    case 0x7F24841Cu: goto label_7F24841C;
    case 0x7F248420u: goto label_7F248420;
    case 0x7F248424u: goto label_7F248424;
    case 0x7F248428u: goto label_7F248428;
    case 0x7F24842Cu: goto label_7F24842C;
    case 0x7F248430u: goto label_7F248430;
    case 0x7F248434u: goto label_7F248434;
    case 0x7F248438u: goto label_7F248438;
    case 0x7F24843Cu: goto label_7F24843C;
    case 0x7F248440u: goto label_7F248440;
    case 0x7F248444u: goto label_7F248444;
    case 0x7F248448u: goto label_7F248448;
    case 0x7F24844Cu: goto label_7F24844C;
    case 0x7F248450u: goto label_7F248450;
    case 0x7F248454u: goto label_7F248454;
    case 0x7F248458u: goto label_7F248458;
    case 0x7F24845Cu: goto label_7F24845C;
    case 0x7F248460u: goto label_7F248460;
    case 0x7F248464u: goto label_7F248464;
    case 0x7F248468u: goto label_7F248468;
    case 0x7F24846Cu: goto label_7F24846C;
    case 0x7F248470u: goto label_7F248470;
    case 0x7F248474u: goto label_7F248474;
    case 0x7F248478u: goto label_7F248478;
    case 0x7F24847Cu: goto label_7F24847C;
    case 0x7F248480u: goto label_7F248480;
    case 0x7F248484u: goto label_7F248484;
    case 0x7F248488u: goto label_7F248488;
    case 0x7F24848Cu: goto label_7F24848C;
    case 0x7F248490u: goto label_7F248490;
    case 0x7F248494u: goto label_7F248494;
    case 0x7F248498u: goto label_7F248498;
    case 0x7F24849Cu: goto label_7F24849C;
    case 0x7F2484A0u: goto label_7F2484A0;
    case 0x7F2484A4u: goto label_7F2484A4;
    case 0x7F2484A8u: goto label_7F2484A8;
    case 0x7F2484ACu: goto label_7F2484AC;
    case 0x7F2484B0u: goto label_7F2484B0;
    case 0x7F2484B4u: goto label_7F2484B4;
    case 0x7F2484B8u: goto label_7F2484B8;
    case 0x7F2484BCu: goto label_7F2484BC;
    case 0x7F2484C0u: goto label_7F2484C0;
    case 0x7F2484C4u: goto label_7F2484C4;
    case 0x7F2484C8u: goto label_7F2484C8;
    case 0x7F2484CCu: goto label_7F2484CC;
    case 0x7F2484D0u: goto label_7F2484D0;
    case 0x7F2484D4u: goto label_7F2484D4;
    case 0x7F2484D8u: goto label_7F2484D8;
    case 0x7F2484DCu: goto label_7F2484DC;
    case 0x7F2484E0u: goto label_7F2484E0;
    case 0x7F2484E4u: goto label_7F2484E4;
    case 0x7F2484E8u: goto label_7F2484E8;
    case 0x7F2484ECu: goto label_7F2484EC;
    case 0x7F2484F0u: goto label_7F2484F0;
    case 0x7F2484F4u: goto label_7F2484F4;
    case 0x7F2484F8u: goto label_7F2484F8;
    case 0x7F2484FCu: goto label_7F2484FC;
    case 0x7F248500u: goto label_7F248500;
    case 0x7F248504u: goto label_7F248504;
    case 0x7F248508u: goto label_7F248508;
    case 0x7F24850Cu: goto label_7F24850C;
    case 0x7F248510u: goto label_7F248510;
    case 0x7F248514u: goto label_7F248514;
    case 0x7F248518u: goto label_7F248518;
    case 0x7F24851Cu: goto label_7F24851C;
    case 0x7F248520u: goto label_7F248520;
    case 0x7F248524u: goto label_7F248524;
    case 0x7F248528u: goto label_7F248528;
    case 0x7F24852Cu: goto label_7F24852C;
    case 0x7F248530u: goto label_7F248530;
    case 0x7F248534u: goto label_7F248534;
    case 0x7F248538u: goto label_7F248538;
    case 0x7F24853Cu: goto label_7F24853C;
    case 0x7F248540u: goto label_7F248540;
    case 0x7F248544u: goto label_7F248544;
    case 0x7F248548u: goto label_7F248548;
    case 0x7F24854Cu: goto label_7F24854C;
    case 0x7F248550u: goto label_7F248550;
    case 0x7F248554u: goto label_7F248554;
    case 0x7F248558u: goto label_7F248558;
    case 0x7F24855Cu: goto label_7F24855C;
    case 0x7F248560u: goto label_7F248560;
    case 0x7F248564u: goto label_7F248564;
    case 0x7F248568u: goto label_7F248568;
    case 0x7F24856Cu: goto label_7F24856C;
    case 0x7F248570u: goto label_7F248570;
    case 0x7F248574u: goto label_7F248574;
    case 0x7F248578u: goto label_7F248578;
    case 0x7F24857Cu: goto label_7F24857C;
    case 0x7F248580u: goto label_7F248580;
    case 0x7F248584u: goto label_7F248584;
    case 0x7F248588u: goto label_7F248588;
    case 0x7F24858Cu: goto label_7F24858C;
    case 0x7F248590u: goto label_7F248590;
    case 0x7F248594u: goto label_7F248594;
    case 0x7F248598u: goto label_7F248598;
    case 0x7F24859Cu: goto label_7F24859C;
    case 0x7F2485A0u: goto label_7F2485A0;
    case 0x7F2485A4u: goto label_7F2485A4;
    case 0x7F2485A8u: goto label_7F2485A8;
    case 0x7F2485ACu: goto label_7F2485AC;
    case 0x7F2485B0u: goto label_7F2485B0;
    case 0x7F2485B4u: goto label_7F2485B4;
    case 0x7F2485B8u: goto label_7F2485B8;
    case 0x7F2485BCu: goto label_7F2485BC;
    case 0x7F2485C0u: goto label_7F2485C0;
    case 0x7F2485C4u: goto label_7F2485C4;
    case 0x7F2485C8u: goto label_7F2485C8;
    case 0x7F2485CCu: goto label_7F2485CC;
    case 0x7F2485D0u: goto label_7F2485D0;
    case 0x7F2485D4u: goto label_7F2485D4;
    case 0x7F2485D8u: goto label_7F2485D8;
    case 0x7F2485DCu: goto label_7F2485DC;
    case 0x7F2485E0u: goto label_7F2485E0;
    case 0x7F2485E4u: goto label_7F2485E4;
    case 0x7F2485E8u: goto label_7F2485E8;
    case 0x7F2485ECu: goto label_7F2485EC;
    case 0x7F2485F0u: goto label_7F2485F0;
    case 0x7F2485F4u: goto label_7F2485F4;
    case 0x7F2485F8u: goto label_7F2485F8;
    case 0x7F2485FCu: goto label_7F2485FC;
    case 0x7F248600u: goto label_7F248600;
    case 0x7F248604u: goto label_7F248604;
    case 0x7F248608u: goto label_7F248608;
    case 0x7F24860Cu: goto label_7F24860C;
    case 0x7F248610u: goto label_7F248610;
    case 0x7F248614u: goto label_7F248614;
    case 0x7F248618u: goto label_7F248618;
    case 0x7F24861Cu: goto label_7F24861C;
    case 0x7F248620u: goto label_7F248620;
    case 0x7F248624u: goto label_7F248624;
    case 0x7F248628u: goto label_7F248628;
    case 0x7F24862Cu: goto label_7F24862C;
    case 0x7F248630u: goto label_7F248630;
    case 0x7F248634u: goto label_7F248634;
    case 0x7F248638u: goto label_7F248638;
    case 0x7F24863Cu: goto label_7F24863C;
    case 0x7F248640u: goto label_7F248640;
    case 0x7F248644u: goto label_7F248644;
    case 0x7F248648u: goto label_7F248648;
    case 0x7F24864Cu: goto label_7F24864C;
    case 0x7F248650u: goto label_7F248650;
    case 0x7F248654u: goto label_7F248654;
    case 0x7F248658u: goto label_7F248658;
    case 0x7F24865Cu: goto label_7F24865C;
    case 0x7F248660u: goto label_7F248660;
    case 0x7F248664u: goto label_7F248664;
    case 0x7F248668u: goto label_7F248668;
    case 0x7F24866Cu: goto label_7F24866C;
    case 0x7F248670u: goto label_7F248670;
    case 0x7F248674u: goto label_7F248674;
    case 0x7F248678u: goto label_7F248678;
    case 0x7F24867Cu: goto label_7F24867C;
    case 0x7F248680u: goto label_7F248680;
    case 0x7F248684u: goto label_7F248684;
    case 0x7F248688u: goto label_7F248688;
    case 0x7F24868Cu: goto label_7F24868C;
    case 0x7F248690u: goto label_7F248690;
    case 0x7F248694u: goto label_7F248694;
    case 0x7F248698u: goto label_7F248698;
    case 0x7F24869Cu: goto label_7F24869C;
    case 0x7F2486A0u: goto label_7F2486A0;
    case 0x7F2486A4u: goto label_7F2486A4;
    case 0x7F2486A8u: goto label_7F2486A8;
    case 0x7F2486ACu: goto label_7F2486AC;
    case 0x7F2486B0u: goto label_7F2486B0;
    case 0x7F2486B4u: goto label_7F2486B4;
    case 0x7F2486B8u: goto label_7F2486B8;
    case 0x7F2486BCu: goto label_7F2486BC;
    case 0x7F2486C0u: goto label_7F2486C0;
    case 0x7F2486C4u: goto label_7F2486C4;
    case 0x7F2486C8u: goto label_7F2486C8;
    case 0x7F2486CCu: goto label_7F2486CC;
    case 0x7F2486D0u: goto label_7F2486D0;
    case 0x7F2486D4u: goto label_7F2486D4;
    case 0x7F2486D8u: goto label_7F2486D8;
    case 0x7F2486DCu: goto label_7F2486DC;
    case 0x7F2486E0u: goto label_7F2486E0;
    case 0x7F2486E4u: goto label_7F2486E4;
    case 0x7F2486E8u: goto label_7F2486E8;
    case 0x7F2486ECu: goto label_7F2486EC;
    case 0x7F2486F0u: goto label_7F2486F0;
    case 0x7F2486F4u: goto label_7F2486F4;
    case 0x7F2486F8u: goto label_7F2486F8;
    case 0x7F2486FCu: goto label_7F2486FC;
    case 0x7F248700u: goto label_7F248700;
    case 0x7F248704u: goto label_7F248704;
    case 0x7F248708u: goto label_7F248708;
    case 0x7F24870Cu: goto label_7F24870C;
    case 0x7F248710u: goto label_7F248710;
    case 0x7F248714u: goto label_7F248714;
    case 0x7F248718u: goto label_7F248718;
    case 0x7F24871Cu: goto label_7F24871C;
    case 0x7F248720u: goto label_7F248720;
    case 0x7F248724u: goto label_7F248724;
    case 0x7F248728u: goto label_7F248728;
    case 0x7F24872Cu: goto label_7F24872C;
    case 0x7F248730u: goto label_7F248730;
    case 0x7F248734u: goto label_7F248734;
    case 0x7F248738u: goto label_7F248738;
    case 0x7F24873Cu: goto label_7F24873C;
    case 0x7F248740u: goto label_7F248740;
    case 0x7F248744u: goto label_7F248744;
    case 0x7F248748u: goto label_7F248748;
    case 0x7F24874Cu: goto label_7F24874C;
    case 0x7F248750u: goto label_7F248750;
    case 0x7F248754u: goto label_7F248754;
    case 0x7F248758u: goto label_7F248758;
    case 0x7F24875Cu: goto label_7F24875C;
    case 0x7F248760u: goto label_7F248760;
    case 0x7F248764u: goto label_7F248764;
    case 0x7F248768u: goto label_7F248768;
    case 0x7F24876Cu: goto label_7F24876C;
    case 0x7F248770u: goto label_7F248770;
    case 0x7F248774u: goto label_7F248774;
    case 0x7F248778u: goto label_7F248778;
    case 0x7F24877Cu: goto label_7F24877C;
    case 0x7F248780u: goto label_7F248780;
    case 0x7F248784u: goto label_7F248784;
    case 0x7F248788u: goto label_7F248788;
    case 0x7F24878Cu: goto label_7F24878C;
    case 0x7F248790u: goto label_7F248790;
    case 0x7F248794u: goto label_7F248794;
    case 0x7F248798u: goto label_7F248798;
    case 0x7F24879Cu: goto label_7F24879C;
    case 0x7F2487A0u: goto label_7F2487A0;
    case 0x7F2487A4u: goto label_7F2487A4;
    case 0x7F2487A8u: goto label_7F2487A8;
    case 0x7F2487ACu: goto label_7F2487AC;
    case 0x7F2487B0u: goto label_7F2487B0;
    case 0x7F2487B4u: goto label_7F2487B4;
    case 0x7F2487B8u: goto label_7F2487B8;
    case 0x7F2487BCu: goto label_7F2487BC;
    case 0x7F2487C0u: goto label_7F2487C0;
    case 0x7F2487C4u: goto label_7F2487C4;
    case 0x7F2487C8u: goto label_7F2487C8;
    case 0x7F2487CCu: goto label_7F2487CC;
    case 0x7F2487D0u: goto label_7F2487D0;
    case 0x7F2487D4u: goto label_7F2487D4;
    case 0x7F2487D8u: goto label_7F2487D8;
    case 0x7F2487DCu: goto label_7F2487DC;
    case 0x7F2487E0u: goto label_7F2487E0;
    case 0x7F2487E4u: goto label_7F2487E4;
    case 0x7F2487E8u: goto label_7F2487E8;
    case 0x7F2487ECu: goto label_7F2487EC;
    case 0x7F2487F0u: goto label_7F2487F0;
    case 0x7F2487F4u: goto label_7F2487F4;
    case 0x7F2487F8u: goto label_7F2487F8;
    case 0x7F2487FCu: goto label_7F2487FC;
    case 0x7F248800u: goto label_7F248800;
    case 0x7F248804u: goto label_7F248804;
    case 0x7F248808u: goto label_7F248808;
    case 0x7F24880Cu: goto label_7F24880C;
    case 0x7F248810u: goto label_7F248810;
    case 0x7F248814u: goto label_7F248814;
    case 0x7F248818u: goto label_7F248818;
    case 0x7F24881Cu: goto label_7F24881C;
    case 0x7F248820u: goto label_7F248820;
    case 0x7F248824u: goto label_7F248824;
    case 0x7F248828u: goto label_7F248828;
    case 0x7F24882Cu: goto label_7F24882C;
    case 0x7F248830u: goto label_7F248830;
    case 0x7F248834u: goto label_7F248834;
    case 0x7F248838u: goto label_7F248838;
    case 0x7F24883Cu: goto label_7F24883C;
    case 0x7F248840u: goto label_7F248840;
    case 0x7F248844u: goto label_7F248844;
    case 0x7F248848u: goto label_7F248848;
    case 0x7F24884Cu: goto label_7F24884C;
    case 0x7F248850u: goto label_7F248850;
    case 0x7F248854u: goto label_7F248854;
    case 0x7F248858u: goto label_7F248858;
    case 0x7F24885Cu: goto label_7F24885C;
    case 0x7F248860u: goto label_7F248860;
    case 0x7F248864u: goto label_7F248864;
    case 0x7F248868u: goto label_7F248868;
    case 0x7F24886Cu: goto label_7F24886C;
    case 0x7F248870u: goto label_7F248870;
    case 0x7F248874u: goto label_7F248874;
    case 0x7F248878u: goto label_7F248878;
    case 0x7F24887Cu: goto label_7F24887C;
    case 0x7F248880u: goto label_7F248880;
    case 0x7F248884u: goto label_7F248884;
    case 0x7F248888u: goto label_7F248888;
    case 0x7F24888Cu: goto label_7F24888C;
    case 0x7F248890u: goto label_7F248890;
    case 0x7F248894u: goto label_7F248894;
    case 0x7F248898u: goto label_7F248898;
    case 0x7F24889Cu: goto label_7F24889C;
    case 0x7F2488A0u: goto label_7F2488A0;
    case 0x7F2488A4u: goto label_7F2488A4;
    case 0x7F2488A8u: goto label_7F2488A8;
    case 0x7F2488ACu: goto label_7F2488AC;
    case 0x7F2488B0u: goto label_7F2488B0;
    case 0x7F2488B4u: goto label_7F2488B4;
    case 0x7F2488B8u: goto label_7F2488B8;
    case 0x7F2488BCu: goto label_7F2488BC;
    case 0x7F2488C0u: goto label_7F2488C0;
    case 0x7F2488C4u: goto label_7F2488C4;
    case 0x7F2488C8u: goto label_7F2488C8;
    case 0x7F2488CCu: goto label_7F2488CC;
    case 0x7F2488D0u: goto label_7F2488D0;
    case 0x7F2488D4u: goto label_7F2488D4;
    case 0x7F2488D8u: goto label_7F2488D8;
    case 0x7F2488DCu: goto label_7F2488DC;
    case 0x7F2488E0u: goto label_7F2488E0;
    case 0x7F2488E4u: goto label_7F2488E4;
    case 0x7F2488E8u: goto label_7F2488E8;
    case 0x7F2488ECu: goto label_7F2488EC;
    case 0x7F2488F0u: goto label_7F2488F0;
    case 0x7F2488F4u: goto label_7F2488F4;
    case 0x7F2488F8u: goto label_7F2488F8;
    case 0x7F2488FCu: goto label_7F2488FC;
    case 0x7F248900u: goto label_7F248900;
    case 0x7F248904u: goto label_7F248904;
    case 0x7F248908u: goto label_7F248908;
    case 0x7F24890Cu: goto label_7F24890C;
    case 0x7F248910u: goto label_7F248910;
    case 0x7F248914u: goto label_7F248914;
    case 0x7F248918u: goto label_7F248918;
    case 0x7F24891Cu: goto label_7F24891C;
    case 0x7F248920u: goto label_7F248920;
    case 0x7F248924u: goto label_7F248924;
    case 0x7F248928u: goto label_7F248928;
    case 0x7F24892Cu: goto label_7F24892C;
    case 0x7F248930u: goto label_7F248930;
    case 0x7F248934u: goto label_7F248934;
    case 0x7F248938u: goto label_7F248938;
    case 0x7F24893Cu: goto label_7F24893C;
    case 0x7F248940u: goto label_7F248940;
    case 0x7F248944u: goto label_7F248944;
    case 0x7F248948u: goto label_7F248948;
    case 0x7F24894Cu: goto label_7F24894C;
    case 0x7F248950u: goto label_7F248950;
    case 0x7F248954u: goto label_7F248954;
    case 0x7F248958u: goto label_7F248958;
    case 0x7F24895Cu: goto label_7F24895C;
    case 0x7F248960u: goto label_7F248960;
    case 0x7F248964u: goto label_7F248964;
    case 0x7F248968u: goto label_7F248968;
    case 0x7F24896Cu: goto label_7F24896C;
    case 0x7F248970u: goto label_7F248970;
    case 0x7F248974u: goto label_7F248974;
    case 0x7F248978u: goto label_7F248978;
    case 0x7F24897Cu: goto label_7F24897C;
    case 0x7F248980u: goto label_7F248980;
    case 0x7F248984u: goto label_7F248984;
    case 0x7F248988u: goto label_7F248988;
    case 0x7F24898Cu: goto label_7F24898C;
    case 0x7F248990u: goto label_7F248990;
    case 0x7F248994u: goto label_7F248994;
    case 0x7F248998u: goto label_7F248998;
    case 0x7F24899Cu: goto label_7F24899C;
    case 0x7F2489A0u: goto label_7F2489A0;
    case 0x7F2489A4u: goto label_7F2489A4;
    case 0x7F2489A8u: goto label_7F2489A8;
    case 0x7F2489ACu: goto label_7F2489AC;
    case 0x7F2489B0u: goto label_7F2489B0;
    case 0x7F2489B4u: goto label_7F2489B4;
    case 0x7F2489B8u: goto label_7F2489B8;
    case 0x7F2489BCu: goto label_7F2489BC;
    case 0x7F2489C0u: goto label_7F2489C0;
    case 0x7F2489C4u: goto label_7F2489C4;
    case 0x7F2489C8u: goto label_7F2489C8;
    case 0x7F2489CCu: goto label_7F2489CC;
    case 0x7F2489D0u: goto label_7F2489D0;
    case 0x7F2489D4u: goto label_7F2489D4;
    case 0x7F2489D8u: goto label_7F2489D8;
    case 0x7F2489DCu: goto label_7F2489DC;
    case 0x7F2489E0u: goto label_7F2489E0;
    case 0x7F2489E4u: goto label_7F2489E4;
    case 0x7F2489E8u: goto label_7F2489E8;
    case 0x7F2489ECu: goto label_7F2489EC;
    case 0x7F2489F0u: goto label_7F2489F0;
    case 0x7F2489F4u: goto label_7F2489F4;
    case 0x7F2489F8u: goto label_7F2489F8;
    case 0x7F2489FCu: goto label_7F2489FC;
    case 0x7F248A00u: goto label_7F248A00;
    case 0x7F248A04u: goto label_7F248A04;
    case 0x7F248A08u: goto label_7F248A08;
    case 0x7F248A0Cu: goto label_7F248A0C;
    case 0x7F248A10u: goto label_7F248A10;
    case 0x7F248A14u: goto label_7F248A14;
    case 0x7F248A18u: goto label_7F248A18;
    case 0x7F248A1Cu: goto label_7F248A1C;
    case 0x7F248A20u: goto label_7F248A20;
    case 0x7F248A24u: goto label_7F248A24;
    case 0x7F248A28u: goto label_7F248A28;
    case 0x7F248A2Cu: goto label_7F248A2C;
    case 0x7F248A30u: goto label_7F248A30;
    case 0x7F248A34u: goto label_7F248A34;
    case 0x7F248A38u: goto label_7F248A38;
    case 0x7F248A3Cu: goto label_7F248A3C;
    case 0x7F248A40u: goto label_7F248A40;
    case 0x7F248A44u: goto label_7F248A44;
    case 0x7F248A48u: goto label_7F248A48;
    case 0x7F248A4Cu: goto label_7F248A4C;
    case 0x7F248A50u: goto label_7F248A50;
    case 0x7F248A54u: goto label_7F248A54;
    case 0x7F248A58u: goto label_7F248A58;
    case 0x7F248A5Cu: goto label_7F248A5C;
    case 0x7F248A60u: goto label_7F248A60;
    case 0x7F248A64u: goto label_7F248A64;
    case 0x7F248A68u: goto label_7F248A68;
    case 0x7F248A6Cu: goto label_7F248A6C;
    case 0x7F248A70u: goto label_7F248A70;
    case 0x7F248A74u: goto label_7F248A74;
    case 0x7F248A78u: goto label_7F248A78;
    case 0x7F248A7Cu: goto label_7F248A7C;
    case 0x7F248A80u: goto label_7F248A80;
    case 0x7F248A84u: goto label_7F248A84;
    case 0x7F248A88u: goto label_7F248A88;
    case 0x7F248A8Cu: goto label_7F248A8C;
    case 0x7F248A90u: goto label_7F248A90;
    case 0x7F248A94u: goto label_7F248A94;
    case 0x7F248A98u: goto label_7F248A98;
    case 0x7F248A9Cu: goto label_7F248A9C;
    case 0x7F248AA0u: goto label_7F248AA0;
    case 0x7F248AA4u: goto label_7F248AA4;
    case 0x7F248AA8u: goto label_7F248AA8;
    case 0x7F248AACu: goto label_7F248AAC;
    case 0x7F248AB0u: goto label_7F248AB0;
    case 0x7F248AB4u: goto label_7F248AB4;
    case 0x7F248AB8u: goto label_7F248AB8;
    case 0x7F248ABCu: goto label_7F248ABC;
    case 0x7F248AC0u: goto label_7F248AC0;
    case 0x7F248AC4u: goto label_7F248AC4;
    case 0x7F248AC8u: goto label_7F248AC8;
    case 0x7F248ACCu: goto label_7F248ACC;
    case 0x7F248AD0u: goto label_7F248AD0;
    case 0x7F248AD4u: goto label_7F248AD4;
    case 0x7F248AD8u: goto label_7F248AD8;
    case 0x7F248ADCu: goto label_7F248ADC;
    case 0x7F248AE0u: goto label_7F248AE0;
    case 0x7F248AE4u: goto label_7F248AE4;
    case 0x7F248AE8u: goto label_7F248AE8;
    case 0x7F248AECu: goto label_7F248AEC;
    case 0x7F248AF0u: goto label_7F248AF0;
    case 0x7F248AF4u: goto label_7F248AF4;
    case 0x7F248AF8u: goto label_7F248AF8;
    case 0x7F248AFCu: goto label_7F248AFC;
    case 0x7F248B00u: goto label_7F248B00;
    case 0x7F248B04u: goto label_7F248B04;
    case 0x7F248B08u: goto label_7F248B08;
    case 0x7F248B0Cu: goto label_7F248B0C;
    case 0x7F248B10u: goto label_7F248B10;
    case 0x7F248B14u: goto label_7F248B14;
    case 0x7F248B18u: goto label_7F248B18;
    case 0x7F248B1Cu: goto label_7F248B1C;
    case 0x7F248B20u: goto label_7F248B20;
    case 0x7F248B24u: goto label_7F248B24;
    case 0x7F248B28u: goto label_7F248B28;
    case 0x7F248B2Cu: goto label_7F248B2C;
    case 0x7F248B30u: goto label_7F248B30;
    case 0x7F248B34u: goto label_7F248B34;
    case 0x7F248B38u: goto label_7F248B38;
    case 0x7F248B3Cu: goto label_7F248B3C;
    case 0x7F248B40u: goto label_7F248B40;
    case 0x7F248B44u: goto label_7F248B44;
    case 0x7F248B48u: goto label_7F248B48;
    case 0x7F248B4Cu: goto label_7F248B4C;
    case 0x7F248B50u: goto label_7F248B50;
    case 0x7F248B54u: goto label_7F248B54;
    case 0x7F248B58u: goto label_7F248B58;
    case 0x7F248B5Cu: goto label_7F248B5C;
    case 0x7F248B60u: goto label_7F248B60;
    case 0x7F248B64u: goto label_7F248B64;
    case 0x7F248B68u: goto label_7F248B68;
    case 0x7F248B6Cu: goto label_7F248B6C;
    case 0x7F248B70u: goto label_7F248B70;
    case 0x7F248B74u: goto label_7F248B74;
    case 0x7F248B78u: goto label_7F248B78;
    case 0x7F248B7Cu: goto label_7F248B7C;
    case 0x7F248B80u: goto label_7F248B80;
    case 0x7F248B84u: goto label_7F248B84;
    case 0x7F248B88u: goto label_7F248B88;
    case 0x7F248B8Cu: goto label_7F248B8C;
    case 0x7F248B90u: goto label_7F248B90;
    case 0x7F248B94u: goto label_7F248B94;
    case 0x7F248B98u: goto label_7F248B98;
    case 0x7F248B9Cu: goto label_7F248B9C;
    case 0x7F248BA0u: goto label_7F248BA0;
    case 0x7F248BA4u: goto label_7F248BA4;
    case 0x7F248BA8u: goto label_7F248BA8;
    case 0x7F248BACu: goto label_7F248BAC;
    case 0x7F248BB0u: goto label_7F248BB0;
    case 0x7F248BB4u: goto label_7F248BB4;
    case 0x7F248BB8u: goto label_7F248BB8;
    case 0x7F248BBCu: goto label_7F248BBC;
    case 0x7F248BC0u: goto label_7F248BC0;
    case 0x7F248BC4u: goto label_7F248BC4;
    case 0x7F248BC8u: goto label_7F248BC8;
    case 0x7F248BCCu: goto label_7F248BCC;
    case 0x7F248BD0u: goto label_7F248BD0;
    case 0x7F248BD4u: goto label_7F248BD4;
    case 0x7F248BD8u: goto label_7F248BD8;
    case 0x7F248BDCu: goto label_7F248BDC;
    case 0x7F248BE0u: goto label_7F248BE0;
    case 0x7F248BE4u: goto label_7F248BE4;
    case 0x7F248BE8u: goto label_7F248BE8;
    case 0x7F248BECu: goto label_7F248BEC;
    case 0x7F248BF0u: goto label_7F248BF0;
    case 0x7F248BF4u: goto label_7F248BF4;
    case 0x7F248BF8u: goto label_7F248BF8;
    case 0x7F248BFCu: goto label_7F248BFC;
    case 0x7F248C00u: goto label_7F248C00;
    case 0x7F248C04u: goto label_7F248C04;
    case 0x7F248C08u: goto label_7F248C08;
    case 0x7F248C0Cu: goto label_7F248C0C;
    case 0x7F248C10u: goto label_7F248C10;
    case 0x7F248C14u: goto label_7F248C14;
    case 0x7F248C18u: goto label_7F248C18;
    case 0x7F248C1Cu: goto label_7F248C1C;
    case 0x7F248C20u: goto label_7F248C20;
    case 0x7F248C24u: goto label_7F248C24;
    case 0x7F248C28u: goto label_7F248C28;
    case 0x7F248C2Cu: goto label_7F248C2C;
    case 0x7F248C30u: goto label_7F248C30;
    case 0x7F248C34u: goto label_7F248C34;
    case 0x7F248C38u: goto label_7F248C38;
    case 0x7F248C3Cu: goto label_7F248C3C;
    case 0x7F248C40u: goto label_7F248C40;
    case 0x7F248C44u: goto label_7F248C44;
    case 0x7F248C48u: goto label_7F248C48;
    case 0x7F248C4Cu: goto label_7F248C4C;
    case 0x7F248C50u: goto label_7F248C50;
    case 0x7F248C54u: goto label_7F248C54;
    case 0x7F248C58u: goto label_7F248C58;
    case 0x7F248C5Cu: goto label_7F248C5C;
    case 0x7F248C60u: goto label_7F248C60;
    case 0x7F248C64u: goto label_7F248C64;
    case 0x7F248C68u: goto label_7F248C68;
    case 0x7F248C6Cu: goto label_7F248C6C;
    case 0x7F248C70u: goto label_7F248C70;
    case 0x7F248C74u: goto label_7F248C74;
    case 0x7F248C78u: goto label_7F248C78;
    case 0x7F248C7Cu: goto label_7F248C7C;
    case 0x7F248C80u: goto label_7F248C80;
    case 0x7F248C84u: goto label_7F248C84;
    case 0x7F248C88u: goto label_7F248C88;
    case 0x7F248C8Cu: goto label_7F248C8C;
    case 0x7F248C90u: goto label_7F248C90;
    case 0x7F248C94u: goto label_7F248C94;
    case 0x7F248C98u: goto label_7F248C98;
    case 0x7F248C9Cu: goto label_7F248C9C;
    case 0x7F248CA0u: goto label_7F248CA0;
    case 0x7F248CA4u: goto label_7F248CA4;
    case 0x7F248CA8u: goto label_7F248CA8;
    case 0x7F248CACu: goto label_7F248CAC;
    case 0x7F248CB0u: goto label_7F248CB0;
    case 0x7F248CB4u: goto label_7F248CB4;
    case 0x7F248CB8u: goto label_7F248CB8;
    case 0x7F248CBCu: goto label_7F248CBC;
    case 0x7F248CC0u: goto label_7F248CC0;
    case 0x7F248CC4u: goto label_7F248CC4;
    case 0x7F248CC8u: goto label_7F248CC8;
    case 0x7F248CCCu: goto label_7F248CCC;
    case 0x7F248CD0u: goto label_7F248CD0;
    case 0x7F248CD4u: goto label_7F248CD4;
    case 0x7F248CD8u: goto label_7F248CD8;
    case 0x7F248CDCu: goto label_7F248CDC;
    case 0x7F248CE0u: goto label_7F248CE0;
    case 0x7F248CE4u: goto label_7F248CE4;
    case 0x7F248CE8u: goto label_7F248CE8;
    case 0x7F248CECu: goto label_7F248CEC;
    case 0x7F248CF0u: goto label_7F248CF0;
    case 0x7F248CF4u: goto label_7F248CF4;
    case 0x7F248CF8u: goto label_7F248CF8;
    case 0x7F248CFCu: goto label_7F248CFC;
    case 0x7F248D00u: goto label_7F248D00;
    case 0x7F248D04u: goto label_7F248D04;
    case 0x7F248D08u: goto label_7F248D08;
    case 0x7F248D0Cu: goto label_7F248D0C;
    case 0x7F248D10u: goto label_7F248D10;
    case 0x7F248D14u: goto label_7F248D14;
    case 0x7F248D18u: goto label_7F248D18;
    case 0x7F248D1Cu: goto label_7F248D1C;
    case 0x7F248D20u: goto label_7F248D20;
    case 0x7F248D24u: goto label_7F248D24;
    case 0x7F248D28u: goto label_7F248D28;
    case 0x7F248D2Cu: goto label_7F248D2C;
    case 0x7F248D30u: goto label_7F248D30;
    case 0x7F248D34u: goto label_7F248D34;
    case 0x7F248D38u: goto label_7F248D38;
    case 0x7F248D3Cu: goto label_7F248D3C;
    case 0x7F248D40u: goto label_7F248D40;
    case 0x7F248D44u: goto label_7F248D44;
    case 0x7F248D48u: goto label_7F248D48;
    case 0x7F248D4Cu: goto label_7F248D4C;
    case 0x7F248D50u: goto label_7F248D50;
    case 0x7F248D54u: goto label_7F248D54;
    case 0x7F248D58u: goto label_7F248D58;
    case 0x7F248D5Cu: goto label_7F248D5C;
    case 0x7F248D60u: goto label_7F248D60;
    case 0x7F248D64u: goto label_7F248D64;
    case 0x7F248D68u: goto label_7F248D68;
    case 0x7F248D6Cu: goto label_7F248D6C;
    case 0x7F248D70u: goto label_7F248D70;
    case 0x7F248D74u: goto label_7F248D74;
    case 0x7F248D78u: goto label_7F248D78;
    case 0x7F248D7Cu: goto label_7F248D7C;
    case 0x7F248D80u: goto label_7F248D80;
    case 0x7F248D84u: goto label_7F248D84;
    case 0x7F248D88u: goto label_7F248D88;
    case 0x7F248D8Cu: goto label_7F248D8C;
    case 0x7F248D90u: goto label_7F248D90;
    case 0x7F248D94u: goto label_7F248D94;
    case 0x7F248D98u: goto label_7F248D98;
    case 0x7F248D9Cu: goto label_7F248D9C;
    case 0x7F248DA0u: goto label_7F248DA0;
    case 0x7F248DA4u: goto label_7F248DA4;
    case 0x7F248DA8u: goto label_7F248DA8;
    case 0x7F248DACu: goto label_7F248DAC;
    case 0x7F248DB0u: goto label_7F248DB0;
    case 0x7F248DB4u: goto label_7F248DB4;
    case 0x7F248DB8u: goto label_7F248DB8;
    case 0x7F248DBCu: goto label_7F248DBC;
    case 0x7F248DC0u: goto label_7F248DC0;
    case 0x7F248DC4u: goto label_7F248DC4;
    case 0x7F248DC8u: goto label_7F248DC8;
    case 0x7F248DCCu: goto label_7F248DCC;
    case 0x7F248DD0u: goto label_7F248DD0;
    case 0x7F248DD4u: goto label_7F248DD4;
    case 0x7F248DD8u: goto label_7F248DD8;
    case 0x7F248DDCu: goto label_7F248DDC;
    case 0x7F248DE0u: goto label_7F248DE0;
    case 0x7F248DE4u: goto label_7F248DE4;
    case 0x7F248DE8u: goto label_7F248DE8;
    case 0x7F248DECu: goto label_7F248DEC;
    case 0x7F248DF0u: goto label_7F248DF0;
    case 0x7F248DF4u: goto label_7F248DF4;
    case 0x7F248DF8u: goto label_7F248DF8;
    case 0x7F248DFCu: goto label_7F248DFC;
    case 0x7F248E00u: goto label_7F248E00;
    case 0x7F248E04u: goto label_7F248E04;
    case 0x7F248E08u: goto label_7F248E08;
    case 0x7F248E0Cu: goto label_7F248E0C;
    case 0x7F248E10u: goto label_7F248E10;
    case 0x7F248E14u: goto label_7F248E14;
    case 0x7F248E18u: goto label_7F248E18;
    case 0x7F248E1Cu: goto label_7F248E1C;
    case 0x7F248E20u: goto label_7F248E20;
    case 0x7F248E24u: goto label_7F248E24;
    case 0x7F248E28u: goto label_7F248E28;
    case 0x7F248E2Cu: goto label_7F248E2C;
    case 0x7F248E30u: goto label_7F248E30;
    case 0x7F248E34u: goto label_7F248E34;
    case 0x7F248E38u: goto label_7F248E38;
    case 0x7F248E3Cu: goto label_7F248E3C;
    case 0x7F248E40u: goto label_7F248E40;
    case 0x7F248E44u: goto label_7F248E44;
    case 0x7F248E48u: goto label_7F248E48;
    case 0x7F248E4Cu: goto label_7F248E4C;
    case 0x7F248E50u: goto label_7F248E50;
    case 0x7F248E54u: goto label_7F248E54;
    case 0x7F248E58u: goto label_7F248E58;
    case 0x7F248E5Cu: goto label_7F248E5C;
    case 0x7F248E60u: goto label_7F248E60;
    case 0x7F248E64u: goto label_7F248E64;
    case 0x7F248E68u: goto label_7F248E68;
    case 0x7F248E6Cu: goto label_7F248E6C;
    case 0x7F248E70u: goto label_7F248E70;
    case 0x7F248E74u: goto label_7F248E74;
    case 0x7F248E78u: goto label_7F248E78;
    case 0x7F248E7Cu: goto label_7F248E7C;
    case 0x7F248E80u: goto label_7F248E80;
    case 0x7F248E84u: goto label_7F248E84;
    case 0x7F248E88u: goto label_7F248E88;
    case 0x7F248E8Cu: goto label_7F248E8C;
    case 0x7F248E90u: goto label_7F248E90;
    case 0x7F248E94u: goto label_7F248E94;
    case 0x7F248E98u: goto label_7F248E98;
    case 0x7F248E9Cu: goto label_7F248E9C;
    case 0x7F248EA0u: goto label_7F248EA0;
    case 0x7F248EA4u: goto label_7F248EA4;
    case 0x7F248EA8u: goto label_7F248EA8;
    case 0x7F248EACu: goto label_7F248EAC;
    case 0x7F248EB0u: goto label_7F248EB0;
    case 0x7F248EB4u: goto label_7F248EB4;
    case 0x7F248EB8u: goto label_7F248EB8;
    case 0x7F248EBCu: goto label_7F248EBC;
    case 0x7F248EC0u: goto label_7F248EC0;
    case 0x7F248EC4u: goto label_7F248EC4;
    case 0x7F248EC8u: goto label_7F248EC8;
    case 0x7F248ECCu: goto label_7F248ECC;
    case 0x7F248ED0u: goto label_7F248ED0;
    case 0x7F248ED4u: goto label_7F248ED4;
    case 0x7F248ED8u: goto label_7F248ED8;
    case 0x7F248EDCu: goto label_7F248EDC;
    case 0x7F248EE0u: goto label_7F248EE0;
    case 0x7F248EE4u: goto label_7F248EE4;
    case 0x7F248EE8u: goto label_7F248EE8;
    case 0x7F248EECu: goto label_7F248EEC;
    case 0x7F248EF0u: goto label_7F248EF0;
    case 0x7F248EF4u: goto label_7F248EF4;
    case 0x7F248EF8u: goto label_7F248EF8;
    case 0x7F248EFCu: goto label_7F248EFC;
    case 0x7F248F00u: goto label_7F248F00;
    case 0x7F248F04u: goto label_7F248F04;
    case 0x7F248F08u: goto label_7F248F08;
    case 0x7F248F0Cu: goto label_7F248F0C;
    case 0x7F248F10u: goto label_7F248F10;
    case 0x7F248F14u: goto label_7F248F14;
    case 0x7F248F18u: goto label_7F248F18;
    case 0x7F248F1Cu: goto label_7F248F1C;
    case 0x7F248F20u: goto label_7F248F20;
    case 0x7F248F24u: goto label_7F248F24;
    case 0x7F248F28u: goto label_7F248F28;
    case 0x7F248F2Cu: goto label_7F248F2C;
    case 0x7F248F30u: goto label_7F248F30;
    case 0x7F248F34u: goto label_7F248F34;
    case 0x7F248F38u: goto label_7F248F38;
    case 0x7F248F3Cu: goto label_7F248F3C;
    case 0x7F248F40u: goto label_7F248F40;
    case 0x7F248F44u: goto label_7F248F44;
    case 0x7F248F48u: goto label_7F248F48;
    case 0x7F248F4Cu: goto label_7F248F4C;
    case 0x7F248F50u: goto label_7F248F50;
    case 0x7F248F54u: goto label_7F248F54;
    case 0x7F248F58u: goto label_7F248F58;
    case 0x7F248F5Cu: goto label_7F248F5C;
    case 0x7F248F60u: goto label_7F248F60;
    case 0x7F248F64u: goto label_7F248F64;
    case 0x7F248F68u: goto label_7F248F68;
    case 0x7F248F6Cu: goto label_7F248F6C;
    case 0x7F248F70u: goto label_7F248F70;
    case 0x7F248F74u: goto label_7F248F74;
    case 0x7F248F78u: goto label_7F248F78;
    case 0x7F248F7Cu: goto label_7F248F7C;
    case 0x7F248F80u: goto label_7F248F80;
    case 0x7F248F84u: goto label_7F248F84;
    case 0x7F248F88u: goto label_7F248F88;
    case 0x7F248F8Cu: goto label_7F248F8C;
    case 0x7F248F90u: goto label_7F248F90;
    case 0x7F248F94u: goto label_7F248F94;
    case 0x7F248F98u: goto label_7F248F98;
    case 0x7F248F9Cu: goto label_7F248F9C;
    case 0x7F248FA0u: goto label_7F248FA0;
    case 0x7F248FA4u: goto label_7F248FA4;
    case 0x7F248FA8u: goto label_7F248FA8;
    case 0x7F248FACu: goto label_7F248FAC;
    case 0x7F248FB0u: goto label_7F248FB0;
    case 0x7F248FB4u: goto label_7F248FB4;
    case 0x7F248FB8u: goto label_7F248FB8;
    case 0x7F248FBCu: goto label_7F248FBC;
    case 0x7F248FC0u: goto label_7F248FC0;
    case 0x7F248FC4u: goto label_7F248FC4;
    case 0x7F248FC8u: goto label_7F248FC8;
    case 0x7F248FCCu: goto label_7F248FCC;
    case 0x7F248FD0u: goto label_7F248FD0;
    case 0x7F248FD4u: goto label_7F248FD4;
    case 0x7F248FD8u: goto label_7F248FD8;
    case 0x7F248FDCu: goto label_7F248FDC;
    case 0x7F248FE0u: goto label_7F248FE0;
    case 0x7F248FE4u: goto label_7F248FE4;
    case 0x7F248FE8u: goto label_7F248FE8;
    case 0x7F248FECu: goto label_7F248FEC;
    case 0x7F248FF0u: goto label_7F248FF0;
    case 0x7F248FF4u: goto label_7F248FF4;
    case 0x7F248FF8u: goto label_7F248FF8;
    case 0x7F248FFCu: goto label_7F248FFC;
    case 0x7F249000u: goto label_7F249000;
    case 0x7F249004u: goto label_7F249004;
    case 0x7F249008u: goto label_7F249008;
    case 0x7F24900Cu: goto label_7F24900C;
    case 0x7F249010u: goto label_7F249010;
    case 0x7F249014u: goto label_7F249014;
    case 0x7F249018u: goto label_7F249018;
    case 0x7F24901Cu: goto label_7F24901C;
    case 0x7F249020u: goto label_7F249020;
    case 0x7F249024u: goto label_7F249024;
    case 0x7F249028u: goto label_7F249028;
    case 0x7F24902Cu: goto label_7F24902C;
    case 0x7F249030u: goto label_7F249030;
    case 0x7F249034u: goto label_7F249034;
    case 0x7F249038u: goto label_7F249038;
    case 0x7F24903Cu: goto label_7F24903C;
    case 0x7F249040u: goto label_7F249040;
    case 0x7F249044u: goto label_7F249044;
    case 0x7F249048u: goto label_7F249048;
    case 0x7F24904Cu: goto label_7F24904C;
    case 0x7F249050u: goto label_7F249050;
    case 0x7F249054u: goto label_7F249054;
    case 0x7F249058u: goto label_7F249058;
    case 0x7F24905Cu: goto label_7F24905C;
    case 0x7F249060u: goto label_7F249060;
    case 0x7F249064u: goto label_7F249064;
    case 0x7F249068u: goto label_7F249068;
    case 0x7F24906Cu: goto label_7F24906C;
    case 0x7F249070u: goto label_7F249070;
    case 0x7F249074u: goto label_7F249074;
    case 0x7F249078u: goto label_7F249078;
    case 0x7F24907Cu: goto label_7F24907C;
    case 0x7F249080u: goto label_7F249080;
    case 0x7F249084u: goto label_7F249084;
    case 0x7F249088u: goto label_7F249088;
    case 0x7F24908Cu: goto label_7F24908C;
    case 0x7F249090u: goto label_7F249090;
    case 0x7F249094u: goto label_7F249094;
    case 0x7F249098u: goto label_7F249098;
    case 0x7F24909Cu: goto label_7F24909C;
    case 0x7F2490A0u: goto label_7F2490A0;
    case 0x7F2490A4u: goto label_7F2490A4;
    case 0x7F2490A8u: goto label_7F2490A8;
    case 0x7F2490ACu: goto label_7F2490AC;
    case 0x7F2490B0u: goto label_7F2490B0;
    case 0x7F2490B4u: goto label_7F2490B4;
    case 0x7F2490B8u: goto label_7F2490B8;
    case 0x7F2490BCu: goto label_7F2490BC;
    case 0x7F2490C0u: goto label_7F2490C0;
    case 0x7F2490C4u: goto label_7F2490C4;
    case 0x7F2490C8u: goto label_7F2490C8;
    case 0x7F2490CCu: goto label_7F2490CC;
    case 0x7F2490D0u: goto label_7F2490D0;
    case 0x7F2490D4u: goto label_7F2490D4;
    case 0x7F2490D8u: goto label_7F2490D8;
    case 0x7F2490DCu: goto label_7F2490DC;
    case 0x7F2490E0u: goto label_7F2490E0;
    case 0x7F2490E4u: goto label_7F2490E4;
    case 0x7F2490E8u: goto label_7F2490E8;
    case 0x7F2490ECu: goto label_7F2490EC;
    case 0x7F2490F0u: goto label_7F2490F0;
    case 0x7F2490F4u: goto label_7F2490F4;
    case 0x7F2490F8u: goto label_7F2490F8;
    case 0x7F2490FCu: goto label_7F2490FC;
    case 0x7F249100u: goto label_7F249100;
    case 0x7F249104u: goto label_7F249104;
    case 0x7F249108u: goto label_7F249108;
    case 0x7F24910Cu: goto label_7F24910C;
    case 0x7F249110u: goto label_7F249110;
    case 0x7F249114u: goto label_7F249114;
    case 0x7F249118u: goto label_7F249118;
    case 0x7F24911Cu: goto label_7F24911C;
    case 0x7F249120u: goto label_7F249120;
    case 0x7F249124u: goto label_7F249124;
    case 0x7F249128u: goto label_7F249128;
    case 0x7F24912Cu: goto label_7F24912C;
    case 0x7F249130u: goto label_7F249130;
    case 0x7F249134u: goto label_7F249134;
    case 0x7F249138u: goto label_7F249138;
    case 0x7F24913Cu: goto label_7F24913C;
    case 0x7F249140u: goto label_7F249140;
    case 0x7F249144u: goto label_7F249144;
    case 0x7F249148u: goto label_7F249148;
    case 0x7F24914Cu: goto label_7F24914C;
    case 0x7F249150u: goto label_7F249150;
    case 0x7F249154u: goto label_7F249154;
    case 0x7F249158u: goto label_7F249158;
    case 0x7F24915Cu: goto label_7F24915C;
    case 0x7F249160u: goto label_7F249160;
    case 0x7F249164u: goto label_7F249164;
    case 0x7F249168u: goto label_7F249168;
    case 0x7F24916Cu: goto label_7F24916C;
    case 0x7F249170u: goto label_7F249170;
    case 0x7F249174u: goto label_7F249174;
    case 0x7F249178u: goto label_7F249178;
    case 0x7F24917Cu: goto label_7F24917C;
    case 0x7F249180u: goto label_7F249180;
    case 0x7F249184u: goto label_7F249184;
    case 0x7F249188u: goto label_7F249188;
    case 0x7F24918Cu: goto label_7F24918C;
    case 0x7F249190u: goto label_7F249190;
    case 0x7F249194u: goto label_7F249194;
    case 0x7F249198u: goto label_7F249198;
    case 0x7F24919Cu: goto label_7F24919C;
    case 0x7F2491A0u: goto label_7F2491A0;
    case 0x7F2491A4u: goto label_7F2491A4;
    case 0x7F2491A8u: goto label_7F2491A8;
    case 0x7F2491ACu: goto label_7F2491AC;
    case 0x7F2491B0u: goto label_7F2491B0;
    case 0x7F2491B4u: goto label_7F2491B4;
    case 0x7F2491B8u: goto label_7F2491B8;
    case 0x7F2491BCu: goto label_7F2491BC;
    case 0x7F2491C0u: goto label_7F2491C0;
    case 0x7F2491C4u: goto label_7F2491C4;
    case 0x7F2491C8u: goto label_7F2491C8;
    case 0x7F2491CCu: goto label_7F2491CC;
    case 0x7F2491D0u: goto label_7F2491D0;
    case 0x7F2491D4u: goto label_7F2491D4;
    case 0x7F2491D8u: goto label_7F2491D8;
    case 0x7F2491DCu: goto label_7F2491DC;
    case 0x7F2491E0u: goto label_7F2491E0;
    case 0x7F2491E4u: goto label_7F2491E4;
    case 0x7F2491E8u: goto label_7F2491E8;
    case 0x7F2491ECu: goto label_7F2491EC;
    case 0x7F2491F0u: goto label_7F2491F0;
    case 0x7F2491F4u: goto label_7F2491F4;
    case 0x7F2491F8u: goto label_7F2491F8;
    case 0x7F2491FCu: goto label_7F2491FC;
    case 0x7F249200u: goto label_7F249200;
    case 0x7F249204u: goto label_7F249204;
    case 0x7F249208u: goto label_7F249208;
    case 0x7F24920Cu: goto label_7F24920C;
    case 0x7F249210u: goto label_7F249210;
    case 0x7F249214u: goto label_7F249214;
    case 0x7F249218u: goto label_7F249218;
    case 0x7F24921Cu: goto label_7F24921C;
    case 0x7F249220u: goto label_7F249220;
    case 0x7F249224u: goto label_7F249224;
    case 0x7F249228u: goto label_7F249228;
    case 0x7F24922Cu: goto label_7F24922C;
    case 0x7F249230u: goto label_7F249230;
    case 0x7F249234u: goto label_7F249234;
    case 0x7F249238u: goto label_7F249238;
    case 0x7F24923Cu: goto label_7F24923C;
    case 0x7F249240u: goto label_7F249240;
    case 0x7F249244u: goto label_7F249244;
    case 0x7F249248u: goto label_7F249248;
    case 0x7F24924Cu: goto label_7F24924C;
    case 0x7F249250u: goto label_7F249250;
    case 0x7F249254u: goto label_7F249254;
    case 0x7F249258u: goto label_7F249258;
    case 0x7F24925Cu: goto label_7F24925C;
    case 0x7F249260u: goto label_7F249260;
    case 0x7F249264u: goto label_7F249264;
    case 0x7F249268u: goto label_7F249268;
    case 0x7F24926Cu: goto label_7F24926C;
    case 0x7F249270u: goto label_7F249270;
    case 0x7F249274u: goto label_7F249274;
    case 0x7F249278u: goto label_7F249278;
    case 0x7F24927Cu: goto label_7F24927C;
    case 0x7F249280u: goto label_7F249280;
    case 0x7F249284u: goto label_7F249284;
    case 0x7F249288u: goto label_7F249288;
    case 0x7F24928Cu: goto label_7F24928C;
    case 0x7F249290u: goto label_7F249290;
    case 0x7F249294u: goto label_7F249294;
    case 0x7F249298u: goto label_7F249298;
    case 0x7F24929Cu: goto label_7F24929C;
    case 0x7F2492A0u: goto label_7F2492A0;
    case 0x7F2492A4u: goto label_7F2492A4;
    case 0x7F2492A8u: goto label_7F2492A8;
    case 0x7F2492ACu: goto label_7F2492AC;
    case 0x7F2492B0u: goto label_7F2492B0;
    case 0x7F2492B4u: goto label_7F2492B4;
    case 0x7F2492B8u: goto label_7F2492B8;
    case 0x7F2492BCu: goto label_7F2492BC;
    case 0x7F2492C0u: goto label_7F2492C0;
    case 0x7F2492C4u: goto label_7F2492C4;
    case 0x7F2492C8u: goto label_7F2492C8;
    case 0x7F2492CCu: goto label_7F2492CC;
    case 0x7F2492D0u: goto label_7F2492D0;
    case 0x7F2492D4u: goto label_7F2492D4;
    case 0x7F2492D8u: goto label_7F2492D8;
    case 0x7F2492DCu: goto label_7F2492DC;
    case 0x7F2492E0u: goto label_7F2492E0;
    case 0x7F2492E4u: goto label_7F2492E4;
    case 0x7F2492E8u: goto label_7F2492E8;
    case 0x7F2492ECu: goto label_7F2492EC;
    case 0x7F2492F0u: goto label_7F2492F0;
    case 0x7F2492F4u: goto label_7F2492F4;
    case 0x7F2492F8u: goto label_7F2492F8;
    case 0x7F2492FCu: goto label_7F2492FC;
    case 0x7F249300u: goto label_7F249300;
    case 0x7F249304u: goto label_7F249304;
    case 0x7F249308u: goto label_7F249308;
    case 0x7F24930Cu: goto label_7F24930C;
    case 0x7F249310u: goto label_7F249310;
    case 0x7F249314u: goto label_7F249314;
    case 0x7F249318u: goto label_7F249318;
    case 0x7F24931Cu: goto label_7F24931C;
    case 0x7F249320u: goto label_7F249320;
    case 0x7F249324u: goto label_7F249324;
    case 0x7F249328u: goto label_7F249328;
    case 0x7F24932Cu: goto label_7F24932C;
    case 0x7F249330u: goto label_7F249330;
    case 0x7F249334u: goto label_7F249334;
    case 0x7F249338u: goto label_7F249338;
    case 0x7F24933Cu: goto label_7F24933C;
    case 0x7F249340u: goto label_7F249340;
    case 0x7F249344u: goto label_7F249344;
    case 0x7F249348u: goto label_7F249348;
    case 0x7F24934Cu: goto label_7F24934C;
    case 0x7F249350u: goto label_7F249350;
    case 0x7F249354u: goto label_7F249354;
    case 0x7F249358u: goto label_7F249358;
    case 0x7F24935Cu: goto label_7F24935C;
    case 0x7F249360u: goto label_7F249360;
    case 0x7F249364u: goto label_7F249364;
    case 0x7F249368u: goto label_7F249368;
    case 0x7F24936Cu: goto label_7F24936C;
    case 0x7F249370u: goto label_7F249370;
    case 0x7F249374u: goto label_7F249374;
    case 0x7F249378u: goto label_7F249378;
    case 0x7F24937Cu: goto label_7F24937C;
    case 0x7F249380u: goto label_7F249380;
    case 0x7F249384u: goto label_7F249384;
    case 0x7F249388u: goto label_7F249388;
    case 0x7F24938Cu: goto label_7F24938C;
    case 0x7F249390u: goto label_7F249390;
    case 0x7F249394u: goto label_7F249394;
    case 0x7F249398u: goto label_7F249398;
    case 0x7F24939Cu: goto label_7F24939C;
    case 0x7F2493A0u: goto label_7F2493A0;
    case 0x7F2493A4u: goto label_7F2493A4;
    case 0x7F2493A8u: goto label_7F2493A8;
    case 0x7F2493ACu: goto label_7F2493AC;
    case 0x7F2493B0u: goto label_7F2493B0;
    case 0x7F2493B4u: goto label_7F2493B4;
    case 0x7F2493B8u: goto label_7F2493B8;
    case 0x7F2493BCu: goto label_7F2493BC;
    case 0x7F2493C0u: goto label_7F2493C0;
    case 0x7F2493C4u: goto label_7F2493C4;
    case 0x7F2493C8u: goto label_7F2493C8;
    case 0x7F2493CCu: goto label_7F2493CC;
    case 0x7F2493D0u: goto label_7F2493D0;
    case 0x7F2493D4u: goto label_7F2493D4;
    case 0x7F2493D8u: goto label_7F2493D8;
    case 0x7F2493DCu: goto label_7F2493DC;
    case 0x7F2493E0u: goto label_7F2493E0;
    case 0x7F2493E4u: goto label_7F2493E4;
    case 0x7F2493E8u: goto label_7F2493E8;
    case 0x7F2493ECu: goto label_7F2493EC;
    case 0x7F2493F0u: goto label_7F2493F0;
    case 0x7F2493F4u: goto label_7F2493F4;
    case 0x7F2493F8u: goto label_7F2493F8;
    case 0x7F2493FCu: goto label_7F2493FC;
    case 0x7F249400u: goto label_7F249400;
    case 0x7F249404u: goto label_7F249404;
    case 0x7F249408u: goto label_7F249408;
    case 0x7F24940Cu: goto label_7F24940C;
    case 0x7F249410u: goto label_7F249410;
    case 0x7F249414u: goto label_7F249414;
    case 0x7F249418u: goto label_7F249418;
    case 0x7F24941Cu: goto label_7F24941C;
    case 0x7F249420u: goto label_7F249420;
    case 0x7F249424u: goto label_7F249424;
    case 0x7F249428u: goto label_7F249428;
    case 0x7F24942Cu: goto label_7F24942C;
    case 0x7F249430u: goto label_7F249430;
    case 0x7F249434u: goto label_7F249434;
    case 0x7F249438u: goto label_7F249438;
    case 0x7F24943Cu: goto label_7F24943C;
    case 0x7F249440u: goto label_7F249440;
    case 0x7F249444u: goto label_7F249444;
    case 0x7F249448u: goto label_7F249448;
    case 0x7F24944Cu: goto label_7F24944C;
    case 0x7F249450u: goto label_7F249450;
    case 0x7F249454u: goto label_7F249454;
    case 0x7F249458u: goto label_7F249458;
    case 0x7F24945Cu: goto label_7F24945C;
    case 0x7F249460u: goto label_7F249460;
    case 0x7F249464u: goto label_7F249464;
    case 0x7F249468u: goto label_7F249468;
    case 0x7F24946Cu: goto label_7F24946C;
    case 0x7F249470u: goto label_7F249470;
    case 0x7F249474u: goto label_7F249474;
    case 0x7F249478u: goto label_7F249478;
    case 0x7F24947Cu: goto label_7F24947C;
    case 0x7F249480u: goto label_7F249480;
    case 0x7F249484u: goto label_7F249484;
    case 0x7F249488u: goto label_7F249488;
    case 0x7F24948Cu: goto label_7F24948C;
    case 0x7F249490u: goto label_7F249490;
    case 0x7F249494u: goto label_7F249494;
    case 0x7F249498u: goto label_7F249498;
    case 0x7F24949Cu: goto label_7F24949C;
    case 0x7F2494A0u: goto label_7F2494A0;
    case 0x7F2494A4u: goto label_7F2494A4;
    case 0x7F2494A8u: goto label_7F2494A8;
    case 0x7F2494ACu: goto label_7F2494AC;
    case 0x7F2494B0u: goto label_7F2494B0;
    case 0x7F2494B4u: goto label_7F2494B4;
    case 0x7F2494B8u: goto label_7F2494B8;
    case 0x7F2494BCu: goto label_7F2494BC;
    case 0x7F2494C0u: goto label_7F2494C0;
    case 0x7F2494C4u: goto label_7F2494C4;
    case 0x7F2494C8u: goto label_7F2494C8;
    case 0x7F2494CCu: goto label_7F2494CC;
    case 0x7F2494D0u: goto label_7F2494D0;
    case 0x7F2494D4u: goto label_7F2494D4;
    case 0x7F2494D8u: goto label_7F2494D8;
    case 0x7F2494DCu: goto label_7F2494DC;
    case 0x7F2494E0u: goto label_7F2494E0;
    case 0x7F2494E4u: goto label_7F2494E4;
    case 0x7F2494E8u: goto label_7F2494E8;
    case 0x7F2494ECu: goto label_7F2494EC;
    case 0x7F2494F0u: goto label_7F2494F0;
    case 0x7F2494F4u: goto label_7F2494F4;
    case 0x7F2494F8u: goto label_7F2494F8;
    case 0x7F2494FCu: goto label_7F2494FC;
    case 0x7F249500u: goto label_7F249500;
    case 0x7F249504u: goto label_7F249504;
    case 0x7F249508u: goto label_7F249508;
    case 0x7F24950Cu: goto label_7F24950C;
    case 0x7F249510u: goto label_7F249510;
    case 0x7F249514u: goto label_7F249514;
    case 0x7F249518u: goto label_7F249518;
    case 0x7F24951Cu: goto label_7F24951C;
    case 0x7F249520u: goto label_7F249520;
    case 0x7F249524u: goto label_7F249524;
    case 0x7F249528u: goto label_7F249528;
    case 0x7F24952Cu: goto label_7F24952C;
    case 0x7F249530u: goto label_7F249530;
    case 0x7F249534u: goto label_7F249534;
    case 0x7F249538u: goto label_7F249538;
    case 0x7F24953Cu: goto label_7F24953C;
    case 0x7F249540u: goto label_7F249540;
    case 0x7F249544u: goto label_7F249544;
    case 0x7F249548u: goto label_7F249548;
    case 0x7F24954Cu: goto label_7F24954C;
    case 0x7F249550u: goto label_7F249550;
    case 0x7F249554u: goto label_7F249554;
    case 0x7F249558u: goto label_7F249558;
    case 0x7F24955Cu: goto label_7F24955C;
    case 0x7F249560u: goto label_7F249560;
    case 0x7F249564u: goto label_7F249564;
    case 0x7F249568u: goto label_7F249568;
    case 0x7F24956Cu: goto label_7F24956C;
    case 0x7F249570u: goto label_7F249570;
    case 0x7F249574u: goto label_7F249574;
    case 0x7F249578u: goto label_7F249578;
    case 0x7F24957Cu: goto label_7F24957C;
    case 0x7F249580u: goto label_7F249580;
    case 0x7F249584u: goto label_7F249584;
    case 0x7F249588u: goto label_7F249588;
    case 0x7F24958Cu: goto label_7F24958C;
    case 0x7F249590u: goto label_7F249590;
    case 0x7F249594u: goto label_7F249594;
    case 0x7F249598u: goto label_7F249598;
    case 0x7F24959Cu: goto label_7F24959C;
    case 0x7F2495A0u: goto label_7F2495A0;
    case 0x7F2495A4u: goto label_7F2495A4;
    case 0x7F2495A8u: goto label_7F2495A8;
    case 0x7F2495ACu: goto label_7F2495AC;
    case 0x7F2495B0u: goto label_7F2495B0;
    case 0x7F2495B4u: goto label_7F2495B4;
    case 0x7F2495B8u: goto label_7F2495B8;
    case 0x7F2495BCu: goto label_7F2495BC;
    case 0x7F2495C0u: goto label_7F2495C0;
    case 0x7F2495C4u: goto label_7F2495C4;
    case 0x7F2495C8u: goto label_7F2495C8;
    case 0x7F2495CCu: goto label_7F2495CC;
    case 0x7F2495D0u: goto label_7F2495D0;
    case 0x7F2495D4u: goto label_7F2495D4;
    case 0x7F2495D8u: goto label_7F2495D8;
    case 0x7F2495DCu: goto label_7F2495DC;
    case 0x7F2495E0u: goto label_7F2495E0;
    case 0x7F2495E4u: goto label_7F2495E4;
    case 0x7F2495E8u: goto label_7F2495E8;
    case 0x7F2495ECu: goto label_7F2495EC;
    case 0x7F2495F0u: goto label_7F2495F0;
    case 0x7F2495F4u: goto label_7F2495F4;
    case 0x7F2495F8u: goto label_7F2495F8;
    case 0x7F2495FCu: goto label_7F2495FC;
    case 0x7F249600u: goto label_7F249600;
    case 0x7F249604u: goto label_7F249604;
    case 0x7F249608u: goto label_7F249608;
    case 0x7F24960Cu: goto label_7F24960C;
    case 0x7F249610u: goto label_7F249610;
    case 0x7F249614u: goto label_7F249614;
    case 0x7F249618u: goto label_7F249618;
    case 0x7F24961Cu: goto label_7F24961C;
    case 0x7F249620u: goto label_7F249620;
    case 0x7F249624u: goto label_7F249624;
    case 0x7F249628u: goto label_7F249628;
    case 0x7F24962Cu: goto label_7F24962C;
    case 0x7F249630u: goto label_7F249630;
    case 0x7F249634u: goto label_7F249634;
    case 0x7F249638u: goto label_7F249638;
    case 0x7F24963Cu: goto label_7F24963C;
    case 0x7F249640u: goto label_7F249640;
    case 0x7F249644u: goto label_7F249644;
    case 0x7F249648u: goto label_7F249648;
    case 0x7F24964Cu: goto label_7F24964C;
    case 0x7F249650u: goto label_7F249650;
    case 0x7F249654u: goto label_7F249654;
    case 0x7F249658u: goto label_7F249658;
    case 0x7F24965Cu: goto label_7F24965C;
    case 0x7F249660u: goto label_7F249660;
    case 0x7F249664u: goto label_7F249664;
    case 0x7F249668u: goto label_7F249668;
    case 0x7F24966Cu: goto label_7F24966C;
    case 0x7F249670u: goto label_7F249670;
    case 0x7F249674u: goto label_7F249674;
    case 0x7F249678u: goto label_7F249678;
    case 0x7F24967Cu: goto label_7F24967C;
    case 0x7F249680u: goto label_7F249680;
    case 0x7F249684u: goto label_7F249684;
    case 0x7F249688u: goto label_7F249688;
    case 0x7F24968Cu: goto label_7F24968C;
    case 0x7F249690u: goto label_7F249690;
    case 0x7F249694u: goto label_7F249694;
    case 0x7F249698u: goto label_7F249698;
    case 0x7F24969Cu: goto label_7F24969C;
    case 0x7F2496A0u: goto label_7F2496A0;
    case 0x7F2496A4u: goto label_7F2496A4;
    case 0x7F2496A8u: goto label_7F2496A8;
    case 0x7F2496ACu: goto label_7F2496AC;
    case 0x7F2496B0u: goto label_7F2496B0;
    case 0x7F2496B4u: goto label_7F2496B4;
    case 0x7F2496B8u: goto label_7F2496B8;
    case 0x7F2496BCu: goto label_7F2496BC;
    case 0x7F2496C0u: goto label_7F2496C0;
    case 0x7F2496C4u: goto label_7F2496C4;
    case 0x7F2496C8u: goto label_7F2496C8;
    case 0x7F2496CCu: goto label_7F2496CC;
    case 0x7F2496D0u: goto label_7F2496D0;
    case 0x7F2496D4u: goto label_7F2496D4;
    case 0x7F2496D8u: goto label_7F2496D8;
    case 0x7F2496DCu: goto label_7F2496DC;
    case 0x7F2496E0u: goto label_7F2496E0;
    case 0x7F2496E4u: goto label_7F2496E4;
    case 0x7F2496E8u: goto label_7F2496E8;
    case 0x7F2496ECu: goto label_7F2496EC;
    case 0x7F2496F0u: goto label_7F2496F0;
    case 0x7F2496F4u: goto label_7F2496F4;
    case 0x7F2496F8u: goto label_7F2496F8;
    case 0x7F2496FCu: goto label_7F2496FC;
    case 0x7F249700u: goto label_7F249700;
    case 0x7F249704u: goto label_7F249704;
    case 0x7F249708u: goto label_7F249708;
    case 0x7F24970Cu: goto label_7F24970C;
    case 0x7F249710u: goto label_7F249710;
    case 0x7F249714u: goto label_7F249714;
    case 0x7F249718u: goto label_7F249718;
    case 0x7F24971Cu: goto label_7F24971C;
    case 0x7F249720u: goto label_7F249720;
    case 0x7F249724u: goto label_7F249724;
    case 0x7F249728u: goto label_7F249728;
    case 0x7F24972Cu: goto label_7F24972C;
    case 0x7F249730u: goto label_7F249730;
    case 0x7F249734u: goto label_7F249734;
    case 0x7F249738u: goto label_7F249738;
    case 0x7F24973Cu: goto label_7F24973C;
    case 0x7F249740u: goto label_7F249740;
    case 0x7F249744u: goto label_7F249744;
    case 0x7F249748u: goto label_7F249748;
    case 0x7F24974Cu: goto label_7F24974C;
    case 0x7F249750u: goto label_7F249750;
    case 0x7F249754u: goto label_7F249754;
    case 0x7F249758u: goto label_7F249758;
    case 0x7F24975Cu: goto label_7F24975C;
    case 0x7F249760u: goto label_7F249760;
    case 0x7F249764u: goto label_7F249764;
    case 0x7F249768u: goto label_7F249768;
    case 0x7F24976Cu: goto label_7F24976C;
    case 0x7F249770u: goto label_7F249770;
    case 0x7F249774u: goto label_7F249774;
    case 0x7F249778u: goto label_7F249778;
    case 0x7F24977Cu: goto label_7F24977C;
    case 0x7F249780u: goto label_7F249780;
    case 0x7F249784u: goto label_7F249784;
    case 0x7F249788u: goto label_7F249788;
    case 0x7F24978Cu: goto label_7F24978C;
    case 0x7F249790u: goto label_7F249790;
    case 0x7F249794u: goto label_7F249794;
    case 0x7F249798u: goto label_7F249798;
    case 0x7F24979Cu: goto label_7F24979C;
    case 0x7F2497A0u: goto label_7F2497A0;
    case 0x7F2497A4u: goto label_7F2497A4;
    case 0x7F2497A8u: goto label_7F2497A8;
    case 0x7F2497ACu: goto label_7F2497AC;
    case 0x7F2497B0u: goto label_7F2497B0;
    case 0x7F2497B4u: goto label_7F2497B4;
    case 0x7F2497B8u: goto label_7F2497B8;
    case 0x7F2497BCu: goto label_7F2497BC;
    case 0x7F2497C0u: goto label_7F2497C0;
    case 0x7F2497C4u: goto label_7F2497C4;
    case 0x7F2497C8u: goto label_7F2497C8;
    case 0x7F2497CCu: goto label_7F2497CC;
    case 0x7F2497D0u: goto label_7F2497D0;
    case 0x7F2497D4u: goto label_7F2497D4;
    case 0x7F2497D8u: goto label_7F2497D8;
    case 0x7F2497DCu: goto label_7F2497DC;
    case 0x7F2497E0u: goto label_7F2497E0;
    case 0x7F2497E4u: goto label_7F2497E4;
    case 0x7F2497E8u: goto label_7F2497E8;
    case 0x7F2497ECu: goto label_7F2497EC;
    case 0x7F2497F0u: goto label_7F2497F0;
    case 0x7F2497F4u: goto label_7F2497F4;
    case 0x7F2497F8u: goto label_7F2497F8;
    case 0x7F2497FCu: goto label_7F2497FC;
    case 0x7F249800u: goto label_7F249800;
    case 0x7F249804u: goto label_7F249804;
    case 0x7F249808u: goto label_7F249808;
    case 0x7F24980Cu: goto label_7F24980C;
    case 0x7F249810u: goto label_7F249810;
    case 0x7F249814u: goto label_7F249814;
    case 0x7F249818u: goto label_7F249818;
    case 0x7F24981Cu: goto label_7F24981C;
    case 0x7F249820u: goto label_7F249820;
    case 0x7F249824u: goto label_7F249824;
    case 0x7F249828u: goto label_7F249828;
    case 0x7F24982Cu: goto label_7F24982C;
    case 0x7F249830u: goto label_7F249830;
    case 0x7F249834u: goto label_7F249834;
    case 0x7F249838u: goto label_7F249838;
    case 0x7F24983Cu: goto label_7F24983C;
    case 0x7F249840u: goto label_7F249840;
    case 0x7F249844u: goto label_7F249844;
    case 0x7F249848u: goto label_7F249848;
    case 0x7F24984Cu: goto label_7F24984C;
    case 0x7F249850u: goto label_7F249850;
    case 0x7F249854u: goto label_7F249854;
    case 0x7F249858u: goto label_7F249858;
    case 0x7F24985Cu: goto label_7F24985C;
    case 0x7F249860u: goto label_7F249860;
    case 0x7F249864u: goto label_7F249864;
    case 0x7F249868u: goto label_7F249868;
    case 0x7F24986Cu: goto label_7F24986C;
    case 0x7F249870u: goto label_7F249870;
    case 0x7F249874u: goto label_7F249874;
    case 0x7F249878u: goto label_7F249878;
    case 0x7F24987Cu: goto label_7F24987C;
    case 0x7F249880u: goto label_7F249880;
    case 0x7F249884u: goto label_7F249884;
    case 0x7F249888u: goto label_7F249888;
    case 0x7F24988Cu: goto label_7F24988C;
    case 0x7F249890u: goto label_7F249890;
    case 0x7F249894u: goto label_7F249894;
    case 0x7F249898u: goto label_7F249898;
    case 0x7F24989Cu: goto label_7F24989C;
    case 0x7F2498A0u: goto label_7F2498A0;
    case 0x7F2498A4u: goto label_7F2498A4;
    case 0x7F2498A8u: goto label_7F2498A8;
    case 0x7F2498ACu: goto label_7F2498AC;
    case 0x7F2498B0u: goto label_7F2498B0;
    case 0x7F2498B4u: goto label_7F2498B4;
    case 0x7F2498B8u: goto label_7F2498B8;
    case 0x7F2498BCu: goto label_7F2498BC;
    case 0x7F2498C0u: goto label_7F2498C0;
    case 0x7F2498C4u: goto label_7F2498C4;
    case 0x7F2498C8u: goto label_7F2498C8;
    case 0x7F2498CCu: goto label_7F2498CC;
    case 0x7F2498D0u: goto label_7F2498D0;
    case 0x7F2498D4u: goto label_7F2498D4;
    case 0x7F2498D8u: goto label_7F2498D8;
    case 0x7F2498DCu: goto label_7F2498DC;
    case 0x7F2498E0u: goto label_7F2498E0;
    case 0x7F2498E4u: goto label_7F2498E4;
    case 0x7F2498E8u: goto label_7F2498E8;
    case 0x7F2498ECu: goto label_7F2498EC;
    case 0x7F2498F0u: goto label_7F2498F0;
    case 0x7F2498F4u: goto label_7F2498F4;
    case 0x7F2498F8u: goto label_7F2498F8;
    case 0x7F2498FCu: goto label_7F2498FC;
    case 0x7F249900u: goto label_7F249900;
    case 0x7F249904u: goto label_7F249904;
    case 0x7F249908u: goto label_7F249908;
    case 0x7F24990Cu: goto label_7F24990C;
    case 0x7F249910u: goto label_7F249910;
    case 0x7F249914u: goto label_7F249914;
    case 0x7F249918u: goto label_7F249918;
    case 0x7F24991Cu: goto label_7F24991C;
    case 0x7F249920u: goto label_7F249920;
    case 0x7F249924u: goto label_7F249924;
    case 0x7F249928u: goto label_7F249928;
    case 0x7F24992Cu: goto label_7F24992C;
    case 0x7F249930u: goto label_7F249930;
    case 0x7F249934u: goto label_7F249934;
    case 0x7F249938u: goto label_7F249938;
    case 0x7F24993Cu: goto label_7F24993C;
    case 0x7F249940u: goto label_7F249940;
    case 0x7F249944u: goto label_7F249944;
    case 0x7F249948u: goto label_7F249948;
    case 0x7F24994Cu: goto label_7F24994C;
    case 0x7F249950u: goto label_7F249950;
    case 0x7F249954u: goto label_7F249954;
    case 0x7F249958u: goto label_7F249958;
    case 0x7F24995Cu: goto label_7F24995C;
    case 0x7F249960u: goto label_7F249960;
    case 0x7F249964u: goto label_7F249964;
    case 0x7F249968u: goto label_7F249968;
    case 0x7F24996Cu: goto label_7F24996C;
    case 0x7F249970u: goto label_7F249970;
    case 0x7F249974u: goto label_7F249974;
    case 0x7F249978u: goto label_7F249978;
    case 0x7F24997Cu: goto label_7F24997C;
    case 0x7F249980u: goto label_7F249980;
    case 0x7F249984u: goto label_7F249984;
    case 0x7F249988u: goto label_7F249988;
    case 0x7F24998Cu: goto label_7F24998C;
    case 0x7F249990u: goto label_7F249990;
    case 0x7F249994u: goto label_7F249994;
    case 0x7F249998u: goto label_7F249998;
    case 0x7F24999Cu: goto label_7F24999C;
    case 0x7F2499A0u: goto label_7F2499A0;
    case 0x7F2499A4u: goto label_7F2499A4;
    case 0x7F2499A8u: goto label_7F2499A8;
    case 0x7F2499ACu: goto label_7F2499AC;
    case 0x7F2499B0u: goto label_7F2499B0;
    case 0x7F2499B4u: goto label_7F2499B4;
    case 0x7F2499B8u: goto label_7F2499B8;
    case 0x7F2499BCu: goto label_7F2499BC;
    case 0x7F2499C0u: goto label_7F2499C0;
    case 0x7F2499C4u: goto label_7F2499C4;
    case 0x7F2499C8u: goto label_7F2499C8;
    case 0x7F2499CCu: goto label_7F2499CC;
    case 0x7F2499D0u: goto label_7F2499D0;
    case 0x7F2499D4u: goto label_7F2499D4;
    case 0x7F2499D8u: goto label_7F2499D8;
    case 0x7F2499DCu: goto label_7F2499DC;
    case 0x7F2499E0u: goto label_7F2499E0;
    case 0x7F2499E4u: goto label_7F2499E4;
    case 0x7F2499E8u: goto label_7F2499E8;
    case 0x7F2499ECu: goto label_7F2499EC;
    case 0x7F2499F0u: goto label_7F2499F0;
    case 0x7F2499F4u: goto label_7F2499F4;
    case 0x7F2499F8u: goto label_7F2499F8;
    case 0x7F2499FCu: goto label_7F2499FC;
    case 0x7F249A00u: goto label_7F249A00;
    case 0x7F249A04u: goto label_7F249A04;
    case 0x7F249A08u: goto label_7F249A08;
    case 0x7F249A0Cu: goto label_7F249A0C;
    case 0x7F249A10u: goto label_7F249A10;
    case 0x7F249A14u: goto label_7F249A14;
    case 0x7F249A18u: goto label_7F249A18;
    case 0x7F249A1Cu: goto label_7F249A1C;
    case 0x7F249A20u: goto label_7F249A20;
    case 0x7F249A24u: goto label_7F249A24;
    case 0x7F249A28u: goto label_7F249A28;
    case 0x7F249A2Cu: goto label_7F249A2C;
    case 0x7F249A30u: goto label_7F249A30;
    case 0x7F249A34u: goto label_7F249A34;
    case 0x7F249A38u: goto label_7F249A38;
    case 0x7F249A3Cu: goto label_7F249A3C;
    case 0x7F249A40u: goto label_7F249A40;
    case 0x7F249A44u: goto label_7F249A44;
    case 0x7F249A48u: goto label_7F249A48;
    case 0x7F249A4Cu: goto label_7F249A4C;
    case 0x7F249A50u: goto label_7F249A50;
    case 0x7F249A54u: goto label_7F249A54;
    case 0x7F249A58u: goto label_7F249A58;
    case 0x7F249A5Cu: goto label_7F249A5C;
    case 0x7F249A60u: goto label_7F249A60;
    case 0x7F249A64u: goto label_7F249A64;
    case 0x7F249A68u: goto label_7F249A68;
    case 0x7F249A6Cu: goto label_7F249A6C;
    case 0x7F249A70u: goto label_7F249A70;
    case 0x7F249A74u: goto label_7F249A74;
    case 0x7F249A78u: goto label_7F249A78;
    case 0x7F249A7Cu: goto label_7F249A7C;
    case 0x7F249A80u: goto label_7F249A80;
    case 0x7F249A84u: goto label_7F249A84;
    case 0x7F249A88u: goto label_7F249A88;
    case 0x7F249A8Cu: goto label_7F249A8C;
    case 0x7F249A90u: goto label_7F249A90;
    case 0x7F249A94u: goto label_7F249A94;
    case 0x7F249A98u: goto label_7F249A98;
    case 0x7F249A9Cu: goto label_7F249A9C;
    case 0x7F249AA0u: goto label_7F249AA0;
    case 0x7F249AA4u: goto label_7F249AA4;
    case 0x7F249AA8u: goto label_7F249AA8;
    case 0x7F249AACu: goto label_7F249AAC;
    case 0x7F249AB0u: goto label_7F249AB0;
    case 0x7F249AB4u: goto label_7F249AB4;
    case 0x7F249AB8u: goto label_7F249AB8;
    case 0x7F249ABCu: goto label_7F249ABC;
    case 0x7F249AC0u: goto label_7F249AC0;
    case 0x7F249AC4u: goto label_7F249AC4;
    case 0x7F249AC8u: goto label_7F249AC8;
    case 0x7F249ACCu: goto label_7F249ACC;
    case 0x7F249AD0u: goto label_7F249AD0;
    case 0x7F249AD4u: goto label_7F249AD4;
    case 0x7F249AD8u: goto label_7F249AD8;
    case 0x7F249ADCu: goto label_7F249ADC;
    case 0x7F249AE0u: goto label_7F249AE0;
    case 0x7F249AE4u: goto label_7F249AE4;
    case 0x7F249AE8u: goto label_7F249AE8;
    case 0x7F249AECu: goto label_7F249AEC;
    case 0x7F249AF0u: goto label_7F249AF0;
    case 0x7F249AF4u: goto label_7F249AF4;
    case 0x7F249AF8u: goto label_7F249AF8;
    case 0x7F249AFCu: goto label_7F249AFC;
    case 0x7F249B00u: goto label_7F249B00;
    case 0x7F249B04u: goto label_7F249B04;
    case 0x7F249B08u: goto label_7F249B08;
    case 0x7F249B0Cu: goto label_7F249B0C;
    case 0x7F249B10u: goto label_7F249B10;
    case 0x7F249B14u: goto label_7F249B14;
    case 0x7F249B18u: goto label_7F249B18;
    case 0x7F249B1Cu: goto label_7F249B1C;
    case 0x7F249B20u: goto label_7F249B20;
    case 0x7F249B24u: goto label_7F249B24;
    case 0x7F249B28u: goto label_7F249B28;
    case 0x7F249B2Cu: goto label_7F249B2C;
    case 0x7F249B30u: goto label_7F249B30;
    case 0x7F249B34u: goto label_7F249B34;
    case 0x7F249B38u: goto label_7F249B38;
    case 0x7F249B3Cu: goto label_7F249B3C;
    case 0x7F249B40u: goto label_7F249B40;
    case 0x7F249B44u: goto label_7F249B44;
    case 0x7F249B48u: goto label_7F249B48;
    case 0x7F249B4Cu: goto label_7F249B4C;
    case 0x7F249B50u: goto label_7F249B50;
    case 0x7F249B54u: goto label_7F249B54;
    case 0x7F249B58u: goto label_7F249B58;
    case 0x7F249B5Cu: goto label_7F249B5C;
    case 0x7F249B60u: goto label_7F249B60;
    case 0x7F249B64u: goto label_7F249B64;
    case 0x7F249B68u: goto label_7F249B68;
    case 0x7F249B6Cu: goto label_7F249B6C;
    case 0x7F249B70u: goto label_7F249B70;
    case 0x7F249B74u: goto label_7F249B74;
    case 0x7F249B78u: goto label_7F249B78;
    case 0x7F249B7Cu: goto label_7F249B7C;
    case 0x7F249B80u: goto label_7F249B80;
    case 0x7F249B84u: goto label_7F249B84;
    case 0x7F249B88u: goto label_7F249B88;
    case 0x7F249B8Cu: goto label_7F249B8C;
    case 0x7F249B90u: goto label_7F249B90;
    case 0x7F249B94u: goto label_7F249B94;
    case 0x7F249B98u: goto label_7F249B98;
    case 0x7F249B9Cu: goto label_7F249B9C;
    case 0x7F249BA0u: goto label_7F249BA0;
    case 0x7F249BA4u: goto label_7F249BA4;
    case 0x7F249BA8u: goto label_7F249BA8;
    case 0x7F249BACu: goto label_7F249BAC;
    case 0x7F249BB0u: goto label_7F249BB0;
    case 0x7F249BB4u: goto label_7F249BB4;
    case 0x7F249BB8u: goto label_7F249BB8;
    case 0x7F249BBCu: goto label_7F249BBC;
    case 0x7F249BC0u: goto label_7F249BC0;
    case 0x7F249BC4u: goto label_7F249BC4;
    case 0x7F249BC8u: goto label_7F249BC8;
    case 0x7F249BCCu: goto label_7F249BCC;
    case 0x7F249BD0u: goto label_7F249BD0;
    case 0x7F249BD4u: goto label_7F249BD4;
    case 0x7F249BD8u: goto label_7F249BD8;
    case 0x7F249BDCu: goto label_7F249BDC;
    case 0x7F249BE0u: goto label_7F249BE0;
    case 0x7F249BE4u: goto label_7F249BE4;
    case 0x7F249BE8u: goto label_7F249BE8;
    case 0x7F249BECu: goto label_7F249BEC;
    case 0x7F249BF0u: goto label_7F249BF0;
    case 0x7F249BF4u: goto label_7F249BF4;
    case 0x7F249BF8u: goto label_7F249BF8;
    case 0x7F249BFCu: goto label_7F249BFC;
    case 0x7F249C00u: goto label_7F249C00;
    case 0x7F249C04u: goto label_7F249C04;
    case 0x7F249C08u: goto label_7F249C08;
    case 0x7F249C0Cu: goto label_7F249C0C;
    case 0x7F249C10u: goto label_7F249C10;
    case 0x7F249C14u: goto label_7F249C14;
    case 0x7F249C18u: goto label_7F249C18;
    case 0x7F249C1Cu: goto label_7F249C1C;
    case 0x7F249C20u: goto label_7F249C20;
    case 0x7F249C24u: goto label_7F249C24;
    case 0x7F249C28u: goto label_7F249C28;
    case 0x7F249C2Cu: goto label_7F249C2C;
    case 0x7F249C30u: goto label_7F249C30;
    case 0x7F249C34u: goto label_7F249C34;
    case 0x7F249C38u: goto label_7F249C38;
    case 0x7F249C3Cu: goto label_7F249C3C;
    case 0x7F249C40u: goto label_7F249C40;
    case 0x7F249C44u: goto label_7F249C44;
    case 0x7F249C48u: goto label_7F249C48;
    case 0x7F249C4Cu: goto label_7F249C4C;
    case 0x7F249C50u: goto label_7F249C50;
    case 0x7F249C54u: goto label_7F249C54;
    case 0x7F249C58u: goto label_7F249C58;
    case 0x7F249C5Cu: goto label_7F249C5C;
    case 0x7F249C60u: goto label_7F249C60;
    case 0x7F249C64u: goto label_7F249C64;
    case 0x7F249C68u: goto label_7F249C68;
    case 0x7F249C6Cu: goto label_7F249C6C;
    case 0x7F249C70u: goto label_7F249C70;
    case 0x7F249C74u: goto label_7F249C74;
    case 0x7F249C78u: goto label_7F249C78;
    case 0x7F249C7Cu: goto label_7F249C7C;
    case 0x7F249C80u: goto label_7F249C80;
    case 0x7F249C84u: goto label_7F249C84;
    case 0x7F249C88u: goto label_7F249C88;
    case 0x7F249C8Cu: goto label_7F249C8C;
    case 0x7F249C90u: goto label_7F249C90;
    case 0x7F249C94u: goto label_7F249C94;
    case 0x7F249C98u: goto label_7F249C98;
    case 0x7F249C9Cu: goto label_7F249C9C;
    case 0x7F249CA0u: goto label_7F249CA0;
    case 0x7F249CA4u: goto label_7F249CA4;
    case 0x7F249CA8u: goto label_7F249CA8;
    case 0x7F249CACu: goto label_7F249CAC;
    case 0x7F249CB0u: goto label_7F249CB0;
    case 0x7F249CB4u: goto label_7F249CB4;
    case 0x7F249CB8u: goto label_7F249CB8;
    case 0x7F249CBCu: goto label_7F249CBC;
    case 0x7F249CC0u: goto label_7F249CC0;
    case 0x7F249CC4u: goto label_7F249CC4;
    case 0x7F249CC8u: goto label_7F249CC8;
    case 0x7F249CCCu: goto label_7F249CCC;
    case 0x7F249CD0u: goto label_7F249CD0;
    case 0x7F249CD4u: goto label_7F249CD4;
    case 0x7F249CD8u: goto label_7F249CD8;
    case 0x7F249CDCu: goto label_7F249CDC;
    case 0x7F249CE0u: goto label_7F249CE0;
    case 0x7F249CE4u: goto label_7F249CE4;
    case 0x7F249CE8u: goto label_7F249CE8;
    case 0x7F249CECu: goto label_7F249CEC;
    case 0x7F249CF0u: goto label_7F249CF0;
    case 0x7F249CF4u: goto label_7F249CF4;
    case 0x7F249CF8u: goto label_7F249CF8;
    case 0x7F249CFCu: goto label_7F249CFC;
    case 0x7F249D00u: goto label_7F249D00;
    case 0x7F249D04u: goto label_7F249D04;
    case 0x7F249D08u: goto label_7F249D08;
    case 0x7F249D0Cu: goto label_7F249D0C;
    case 0x7F249D10u: goto label_7F249D10;
    case 0x7F249D14u: goto label_7F249D14;
    case 0x7F249D18u: goto label_7F249D18;
    case 0x7F249D1Cu: goto label_7F249D1C;
    case 0x7F249D20u: goto label_7F249D20;
    case 0x7F249D24u: goto label_7F249D24;
    case 0x7F249D28u: goto label_7F249D28;
    case 0x7F249D2Cu: goto label_7F249D2C;
    case 0x7F249D30u: goto label_7F249D30;
    case 0x7F249D34u: goto label_7F249D34;
    case 0x7F249D38u: goto label_7F249D38;
    case 0x7F249D3Cu: goto label_7F249D3C;
    case 0x7F249D40u: goto label_7F249D40;
    case 0x7F249D44u: goto label_7F249D44;
    case 0x7F249D48u: goto label_7F249D48;
    case 0x7F249D4Cu: goto label_7F249D4C;
    case 0x7F249D50u: goto label_7F249D50;
    case 0x7F249D54u: goto label_7F249D54;
    case 0x7F249D58u: goto label_7F249D58;
    case 0x7F249D5Cu: goto label_7F249D5C;
    case 0x7F249D60u: goto label_7F249D60;
    case 0x7F249D64u: goto label_7F249D64;
    case 0x7F249D68u: goto label_7F249D68;
    case 0x7F249D6Cu: goto label_7F249D6C;
    case 0x7F249D70u: goto label_7F249D70;
    case 0x7F249D74u: goto label_7F249D74;
    case 0x7F249D78u: goto label_7F249D78;
    case 0x7F249D7Cu: goto label_7F249D7C;
    case 0x7F249D80u: goto label_7F249D80;
    case 0x7F249D84u: goto label_7F249D84;
    case 0x7F249D88u: goto label_7F249D88;
    case 0x7F249D8Cu: goto label_7F249D8C;
    case 0x7F249D90u: goto label_7F249D90;
    case 0x7F249D94u: goto label_7F249D94;
    case 0x7F249D98u: goto label_7F249D98;
    case 0x7F249D9Cu: goto label_7F249D9C;
    case 0x7F249DA0u: goto label_7F249DA0;
    case 0x7F249DA4u: goto label_7F249DA4;
    case 0x7F249DA8u: goto label_7F249DA8;
    case 0x7F249DACu: goto label_7F249DAC;
    case 0x7F249DB0u: goto label_7F249DB0;
    case 0x7F249DB4u: goto label_7F249DB4;
    case 0x7F249DB8u: goto label_7F249DB8;
    case 0x7F249DBCu: goto label_7F249DBC;
    case 0x7F249DC0u: goto label_7F249DC0;
    case 0x7F249DC4u: goto label_7F249DC4;
    case 0x7F249DC8u: goto label_7F249DC8;
    case 0x7F249DCCu: goto label_7F249DCC;
    case 0x7F249DD0u: goto label_7F249DD0;
    case 0x7F249DD4u: goto label_7F249DD4;
    case 0x7F249DD8u: goto label_7F249DD8;
    case 0x7F249DDCu: goto label_7F249DDC;
    case 0x7F249DE0u: goto label_7F249DE0;
    case 0x7F249DE4u: goto label_7F249DE4;
    case 0x7F249DE8u: goto label_7F249DE8;
    case 0x7F249DECu: goto label_7F249DEC;
    case 0x7F249DF0u: goto label_7F249DF0;
    case 0x7F249DF4u: goto label_7F249DF4;
    case 0x7F249DF8u: goto label_7F249DF8;
    case 0x7F249DFCu: goto label_7F249DFC;
    case 0x7F249E00u: goto label_7F249E00;
    case 0x7F249E04u: goto label_7F249E04;
    case 0x7F249E08u: goto label_7F249E08;
    case 0x7F249E0Cu: goto label_7F249E0C;
    case 0x7F249E10u: goto label_7F249E10;
    case 0x7F249E14u: goto label_7F249E14;
    case 0x7F249E18u: goto label_7F249E18;
    case 0x7F249E1Cu: goto label_7F249E1C;
    case 0x7F249E20u: goto label_7F249E20;
    case 0x7F249E24u: goto label_7F249E24;
    case 0x7F249E28u: goto label_7F249E28;
    case 0x7F249E2Cu: goto label_7F249E2C;
    case 0x7F249E30u: goto label_7F249E30;
    case 0x7F249E34u: goto label_7F249E34;
    case 0x7F249E38u: goto label_7F249E38;
    case 0x7F249E3Cu: goto label_7F249E3C;
    case 0x7F249E40u: goto label_7F249E40;
    case 0x7F249E44u: goto label_7F249E44;
    case 0x7F249E48u: goto label_7F249E48;
    case 0x7F249E4Cu: goto label_7F249E4C;
    case 0x7F249E50u: goto label_7F249E50;
    case 0x7F249E54u: goto label_7F249E54;
    case 0x7F249E58u: goto label_7F249E58;
    case 0x7F249E5Cu: goto label_7F249E5C;
    case 0x7F249E60u: goto label_7F249E60;
    case 0x7F249E64u: goto label_7F249E64;
    case 0x7F249E68u: goto label_7F249E68;
    case 0x7F249E6Cu: goto label_7F249E6C;
    case 0x7F249E70u: goto label_7F249E70;
    case 0x7F249E74u: goto label_7F249E74;
    case 0x7F249E78u: goto label_7F249E78;
    case 0x7F249E7Cu: goto label_7F249E7C;
    case 0x7F249E80u: goto label_7F249E80;
    case 0x7F249E84u: goto label_7F249E84;
    case 0x7F249E88u: goto label_7F249E88;
    case 0x7F249E8Cu: goto label_7F249E8C;
    case 0x7F249E90u: goto label_7F249E90;
    case 0x7F249E94u: goto label_7F249E94;
    case 0x7F249E98u: goto label_7F249E98;
    case 0x7F249E9Cu: goto label_7F249E9C;
    case 0x7F249EA0u: goto label_7F249EA0;
    case 0x7F249EA4u: goto label_7F249EA4;
    case 0x7F249EA8u: goto label_7F249EA8;
    case 0x7F249EACu: goto label_7F249EAC;
    case 0x7F249EB0u: goto label_7F249EB0;
    case 0x7F249EB4u: goto label_7F249EB4;
    case 0x7F249EB8u: goto label_7F249EB8;
    case 0x7F249EBCu: goto label_7F249EBC;
    case 0x7F249EC0u: goto label_7F249EC0;
    case 0x7F249EC4u: goto label_7F249EC4;
    case 0x7F249EC8u: goto label_7F249EC8;
    case 0x7F249ECCu: goto label_7F249ECC;
    case 0x7F249ED0u: goto label_7F249ED0;
    case 0x7F249ED4u: goto label_7F249ED4;
    case 0x7F249ED8u: goto label_7F249ED8;
    case 0x7F249EDCu: goto label_7F249EDC;
    case 0x7F249EE0u: goto label_7F249EE0;
    case 0x7F249EE4u: goto label_7F249EE4;
    case 0x7F249EE8u: goto label_7F249EE8;
    case 0x7F249EECu: goto label_7F249EEC;
    case 0x7F249EF0u: goto label_7F249EF0;
    case 0x7F249EF4u: goto label_7F249EF4;
    case 0x7F249EF8u: goto label_7F249EF8;
    case 0x7F249EFCu: goto label_7F249EFC;
    case 0x7F249F00u: goto label_7F249F00;
    case 0x7F249F04u: goto label_7F249F04;
    case 0x7F249F08u: goto label_7F249F08;
    case 0x7F249F0Cu: goto label_7F249F0C;
    case 0x7F249F10u: goto label_7F249F10;
    case 0x7F249F14u: goto label_7F249F14;
    case 0x7F249F18u: goto label_7F249F18;
    case 0x7F249F1Cu: goto label_7F249F1C;
    case 0x7F249F20u: goto label_7F249F20;
    case 0x7F249F24u: goto label_7F249F24;
    case 0x7F249F28u: goto label_7F249F28;
    case 0x7F249F2Cu: goto label_7F249F2C;
    case 0x7F249F30u: goto label_7F249F30;
    case 0x7F249F34u: goto label_7F249F34;
    case 0x7F249F38u: goto label_7F249F38;
    case 0x7F249F3Cu: goto label_7F249F3C;
    case 0x7F249F40u: goto label_7F249F40;
    case 0x7F249F44u: goto label_7F249F44;
    case 0x7F249F48u: goto label_7F249F48;
    case 0x7F249F4Cu: goto label_7F249F4C;
    case 0x7F249F50u: goto label_7F249F50;
    case 0x7F249F54u: goto label_7F249F54;
    case 0x7F249F58u: goto label_7F249F58;
    case 0x7F249F5Cu: goto label_7F249F5C;
    case 0x7F249F60u: goto label_7F249F60;
    case 0x7F249F64u: goto label_7F249F64;
    case 0x7F249F68u: goto label_7F249F68;
    case 0x7F249F6Cu: goto label_7F249F6C;
    case 0x7F249F70u: goto label_7F249F70;
    case 0x7F249F74u: goto label_7F249F74;
    case 0x7F249F78u: goto label_7F249F78;
    case 0x7F249F7Cu: goto label_7F249F7C;
    case 0x7F249F80u: goto label_7F249F80;
    case 0x7F249F84u: goto label_7F249F84;
    case 0x7F249F88u: goto label_7F249F88;
    case 0x7F249F8Cu: goto label_7F249F8C;
    case 0x7F249F90u: goto label_7F249F90;
    case 0x7F249F94u: goto label_7F249F94;
    case 0x7F249F98u: goto label_7F249F98;
    case 0x7F249F9Cu: goto label_7F249F9C;
    case 0x7F249FA0u: goto label_7F249FA0;
    case 0x7F249FA4u: goto label_7F249FA4;
    case 0x7F249FA8u: goto label_7F249FA8;
    case 0x7F249FACu: goto label_7F249FAC;
    case 0x7F249FB0u: goto label_7F249FB0;
    case 0x7F249FB4u: goto label_7F249FB4;
    case 0x7F249FB8u: goto label_7F249FB8;
    case 0x7F249FBCu: goto label_7F249FBC;
    case 0x7F249FC0u: goto label_7F249FC0;
    case 0x7F249FC4u: goto label_7F249FC4;
    case 0x7F249FC8u: goto label_7F249FC8;
    case 0x7F249FCCu: goto label_7F249FCC;
    case 0x7F249FD0u: goto label_7F249FD0;
    case 0x7F249FD4u: goto label_7F249FD4;
    case 0x7F249FD8u: goto label_7F249FD8;
    case 0x7F249FDCu: goto label_7F249FDC;
    case 0x7F249FE0u: goto label_7F249FE0;
    case 0x7F249FE4u: goto label_7F249FE4;
    case 0x7F249FE8u: goto label_7F249FE8;
    case 0x7F249FECu: goto label_7F249FEC;
    case 0x7F249FF0u: goto label_7F249FF0;
    case 0x7F249FF4u: goto label_7F249FF4;
    case 0x7F249FF8u: goto label_7F249FF8;
    case 0x7F249FFCu: goto label_7F249FFC;
    case 0x7F24A000u: goto label_7F24A000;
    case 0x7F24A004u: goto label_7F24A004;
    case 0x7F24A008u: goto label_7F24A008;
    case 0x7F24A00Cu: goto label_7F24A00C;
    case 0x7F24A010u: goto label_7F24A010;
    case 0x7F24A014u: goto label_7F24A014;
    case 0x7F24A018u: goto label_7F24A018;
    case 0x7F24A01Cu: goto label_7F24A01C;
    case 0x7F24A020u: goto label_7F24A020;
    case 0x7F24A024u: goto label_7F24A024;
    case 0x7F24A028u: goto label_7F24A028;
    case 0x7F24A02Cu: goto label_7F24A02C;
    case 0x7F24A030u: goto label_7F24A030;
    case 0x7F24A034u: goto label_7F24A034;
    case 0x7F24A038u: goto label_7F24A038;
    case 0x7F24A03Cu: goto label_7F24A03C;
    case 0x7F24A040u: goto label_7F24A040;
    case 0x7F24A044u: goto label_7F24A044;
    case 0x7F24A048u: goto label_7F24A048;
    case 0x7F24A04Cu: goto label_7F24A04C;
    case 0x7F24A050u: goto label_7F24A050;
    case 0x7F24A054u: goto label_7F24A054;
    case 0x7F24A058u: goto label_7F24A058;
    case 0x7F24A05Cu: goto label_7F24A05C;
    case 0x7F24A060u: goto label_7F24A060;
    case 0x7F24A064u: goto label_7F24A064;
    case 0x7F24A068u: goto label_7F24A068;
    case 0x7F24A06Cu: goto label_7F24A06C;
    case 0x7F24A070u: goto label_7F24A070;
    case 0x7F24A074u: goto label_7F24A074;
    case 0x7F24A078u: goto label_7F24A078;
    case 0x7F24A07Cu: goto label_7F24A07C;
    case 0x7F24A080u: goto label_7F24A080;
    case 0x7F24A084u: goto label_7F24A084;
    case 0x7F24A088u: goto label_7F24A088;
    case 0x7F24A08Cu: goto label_7F24A08C;
    case 0x7F24A090u: goto label_7F24A090;
    case 0x7F24A094u: goto label_7F24A094;
    case 0x7F24A098u: goto label_7F24A098;
    case 0x7F24A09Cu: goto label_7F24A09C;
    case 0x7F24A0A0u: goto label_7F24A0A0;
    case 0x7F24A0A4u: goto label_7F24A0A4;
    case 0x7F24A0A8u: goto label_7F24A0A8;
    case 0x7F24A0ACu: goto label_7F24A0AC;
    case 0x7F24A0B0u: goto label_7F24A0B0;
    case 0x7F24A0B4u: goto label_7F24A0B4;
    case 0x7F24A0B8u: goto label_7F24A0B8;
    case 0x7F24A0BCu: goto label_7F24A0BC;
    case 0x7F24A0C0u: goto label_7F24A0C0;
    case 0x7F24A0C4u: goto label_7F24A0C4;
    case 0x7F24A0C8u: goto label_7F24A0C8;
    case 0x7F24A0CCu: goto label_7F24A0CC;
    case 0x7F24A0D0u: goto label_7F24A0D0;
    case 0x7F24A0D4u: goto label_7F24A0D4;
    case 0x7F24A0D8u: goto label_7F24A0D8;
    case 0x7F24A0DCu: goto label_7F24A0DC;
    case 0x7F24A0E0u: goto label_7F24A0E0;
    case 0x7F24A0E4u: goto label_7F24A0E4;
    case 0x7F24A0E8u: goto label_7F24A0E8;
    case 0x7F24A0ECu: goto label_7F24A0EC;
    case 0x7F24A0F0u: goto label_7F24A0F0;
    case 0x7F24A0F4u: goto label_7F24A0F4;
    case 0x7F24A0F8u: goto label_7F24A0F8;
    case 0x7F24A0FCu: goto label_7F24A0FC;
    case 0x7F24A100u: goto label_7F24A100;
    case 0x7F24A104u: goto label_7F24A104;
    case 0x7F24A108u: goto label_7F24A108;
    case 0x7F24A10Cu: goto label_7F24A10C;
    case 0x7F24A110u: goto label_7F24A110;
    case 0x7F24A114u: goto label_7F24A114;
    case 0x7F24A118u: goto label_7F24A118;
    case 0x7F24A11Cu: goto label_7F24A11C;
    case 0x7F24A120u: goto label_7F24A120;
    case 0x7F24A124u: goto label_7F24A124;
    case 0x7F24A128u: goto label_7F24A128;
    case 0x7F24A12Cu: goto label_7F24A12C;
    case 0x7F24A130u: goto label_7F24A130;
    case 0x7F24A134u: goto label_7F24A134;
    case 0x7F24A138u: goto label_7F24A138;
    case 0x7F24A13Cu: goto label_7F24A13C;
    case 0x7F24A140u: goto label_7F24A140;
    case 0x7F24A144u: goto label_7F24A144;
    case 0x7F24A148u: goto label_7F24A148;
    case 0x7F24A14Cu: goto label_7F24A14C;
    case 0x7F24A150u: goto label_7F24A150;
    case 0x7F24A154u: goto label_7F24A154;
    case 0x7F24A158u: goto label_7F24A158;
    case 0x7F24A15Cu: goto label_7F24A15C;
    case 0x7F24A160u: goto label_7F24A160;
    case 0x7F24A164u: goto label_7F24A164;
    case 0x7F24A168u: goto label_7F24A168;
    case 0x7F24A16Cu: goto label_7F24A16C;
    case 0x7F24A170u: goto label_7F24A170;
    case 0x7F24A174u: goto label_7F24A174;
    case 0x7F24A178u: goto label_7F24A178;
    case 0x7F24A17Cu: goto label_7F24A17C;
    case 0x7F24A180u: goto label_7F24A180;
    case 0x7F24A184u: goto label_7F24A184;
    case 0x7F24A188u: goto label_7F24A188;
    case 0x7F24A18Cu: goto label_7F24A18C;
    case 0x7F24A190u: goto label_7F24A190;
    case 0x7F24A194u: goto label_7F24A194;
    case 0x7F24A198u: goto label_7F24A198;
    case 0x7F24A19Cu: goto label_7F24A19C;
    case 0x7F24A1A0u: goto label_7F24A1A0;
    case 0x7F24A1A4u: goto label_7F24A1A4;
    case 0x7F24A1A8u: goto label_7F24A1A8;
    case 0x7F24A1ACu: goto label_7F24A1AC;
    case 0x7F24A1B0u: goto label_7F24A1B0;
    case 0x7F24A1B4u: goto label_7F24A1B4;
    case 0x7F24A1B8u: goto label_7F24A1B8;
    case 0x7F24A1BCu: goto label_7F24A1BC;
    case 0x7F24A1C0u: goto label_7F24A1C0;
    case 0x7F24A1C4u: goto label_7F24A1C4;
    case 0x7F24A1C8u: goto label_7F24A1C8;
    case 0x7F24A1CCu: goto label_7F24A1CC;
    case 0x7F24A1D0u: goto label_7F24A1D0;
    case 0x7F24A1D4u: goto label_7F24A1D4;
    case 0x7F24A1D8u: goto label_7F24A1D8;
    case 0x7F24A1DCu: goto label_7F24A1DC;
    case 0x7F24A1E0u: goto label_7F24A1E0;
    case 0x7F24A1E4u: goto label_7F24A1E4;
    case 0x7F24A1E8u: goto label_7F24A1E8;
    case 0x7F24A1ECu: goto label_7F24A1EC;
    case 0x7F24A1F0u: goto label_7F24A1F0;
    case 0x7F24A1F4u: goto label_7F24A1F4;
    case 0x7F24A1F8u: goto label_7F24A1F8;
    case 0x7F24A1FCu: goto label_7F24A1FC;
    case 0x7F24A200u: goto label_7F24A200;
    case 0x7F24A204u: goto label_7F24A204;
    case 0x7F24A208u: goto label_7F24A208;
    case 0x7F24A20Cu: goto label_7F24A20C;
    case 0x7F24A210u: goto label_7F24A210;
    case 0x7F24A214u: goto label_7F24A214;
    case 0x7F24A218u: goto label_7F24A218;
    case 0x7F24A21Cu: goto label_7F24A21C;
    case 0x7F24A220u: goto label_7F24A220;
    case 0x7F24A224u: goto label_7F24A224;
    case 0x7F24A228u: goto label_7F24A228;
    case 0x7F24A22Cu: goto label_7F24A22C;
    case 0x7F24A230u: goto label_7F24A230;
    case 0x7F24A234u: goto label_7F24A234;
    case 0x7F24A238u: goto label_7F24A238;
    case 0x7F24A23Cu: goto label_7F24A23C;
    case 0x7F24A240u: goto label_7F24A240;
    case 0x7F24A244u: goto label_7F24A244;
    case 0x7F24A248u: goto label_7F24A248;
    case 0x7F24A24Cu: goto label_7F24A24C;
    case 0x7F24A250u: goto label_7F24A250;
    case 0x7F24A254u: goto label_7F24A254;
    case 0x7F24A258u: goto label_7F24A258;
    case 0x7F24A25Cu: goto label_7F24A25C;
    case 0x7F24A260u: goto label_7F24A260;
    case 0x7F24A264u: goto label_7F24A264;
    case 0x7F24A268u: goto label_7F24A268;
    case 0x7F24A26Cu: goto label_7F24A26C;
    case 0x7F24A270u: goto label_7F24A270;
    case 0x7F24A274u: goto label_7F24A274;
    case 0x7F24A278u: goto label_7F24A278;
    case 0x7F24A27Cu: goto label_7F24A27C;
    case 0x7F24A280u: goto label_7F24A280;
    case 0x7F24A284u: goto label_7F24A284;
    case 0x7F24A288u: goto label_7F24A288;
    case 0x7F24A28Cu: goto label_7F24A28C;
    case 0x7F24A290u: goto label_7F24A290;
    case 0x7F24A294u: goto label_7F24A294;
    case 0x7F24A298u: goto label_7F24A298;
    case 0x7F24A29Cu: goto label_7F24A29C;
    case 0x7F24A2A0u: goto label_7F24A2A0;
    case 0x7F24A2A4u: goto label_7F24A2A4;
    case 0x7F24A2A8u: goto label_7F24A2A8;
    case 0x7F24A2ACu: goto label_7F24A2AC;
    case 0x7F24A2B0u: goto label_7F24A2B0;
    case 0x7F24A2B4u: goto label_7F24A2B4;
    case 0x7F24A2B8u: goto label_7F24A2B8;
    case 0x7F24A2BCu: goto label_7F24A2BC;
    case 0x7F24A2C0u: goto label_7F24A2C0;
    case 0x7F24A2C4u: goto label_7F24A2C4;
    case 0x7F24A2C8u: goto label_7F24A2C8;
    case 0x7F24A2CCu: goto label_7F24A2CC;
    case 0x7F24A2D0u: goto label_7F24A2D0;
    case 0x7F24A2D4u: goto label_7F24A2D4;
    case 0x7F24A2D8u: goto label_7F24A2D8;
    case 0x7F24A2DCu: goto label_7F24A2DC;
    case 0x7F24A2E0u: goto label_7F24A2E0;
    case 0x7F24A2E4u: goto label_7F24A2E4;
    case 0x7F24A2E8u: goto label_7F24A2E8;
    case 0x7F24A2ECu: goto label_7F24A2EC;
    case 0x7F24A2F0u: goto label_7F24A2F0;
    case 0x7F24A2F4u: goto label_7F24A2F4;
    case 0x7F24A2F8u: goto label_7F24A2F8;
    case 0x7F24A2FCu: goto label_7F24A2FC;
    case 0x7F24A300u: goto label_7F24A300;
    case 0x7F24A304u: goto label_7F24A304;
    case 0x7F24A308u: goto label_7F24A308;
    case 0x7F24A30Cu: goto label_7F24A30C;
    case 0x7F24A310u: goto label_7F24A310;
    case 0x7F24A314u: goto label_7F24A314;
    case 0x7F24A318u: goto label_7F24A318;
    case 0x7F24A31Cu: goto label_7F24A31C;
    case 0x7F24A320u: goto label_7F24A320;
    case 0x7F24A324u: goto label_7F24A324;
    case 0x7F24A328u: goto label_7F24A328;
    case 0x7F24A32Cu: goto label_7F24A32C;
    case 0x7F24A330u: goto label_7F24A330;
    case 0x7F24A334u: goto label_7F24A334;
    case 0x7F24A338u: goto label_7F24A338;
    case 0x7F24A33Cu: goto label_7F24A33C;
    case 0x7F24A340u: goto label_7F24A340;
    case 0x7F24A344u: goto label_7F24A344;
    case 0x7F24A348u: goto label_7F24A348;
    case 0x7F24A34Cu: goto label_7F24A34C;
    case 0x7F24A350u: goto label_7F24A350;
    case 0x7F24A354u: goto label_7F24A354;
    case 0x7F24A358u: goto label_7F24A358;
    case 0x7F24A35Cu: goto label_7F24A35C;
    case 0x7F24A360u: goto label_7F24A360;
    case 0x7F24A364u: goto label_7F24A364;
    case 0x7F24A368u: goto label_7F24A368;
    case 0x7F24A36Cu: goto label_7F24A36C;
    case 0x7F24A370u: goto label_7F24A370;
    case 0x7F24A374u: goto label_7F24A374;
    case 0x7F24A378u: goto label_7F24A378;
    case 0x7F24A37Cu: goto label_7F24A37C;
    case 0x7F24A380u: goto label_7F24A380;
    case 0x7F24A384u: goto label_7F24A384;
    case 0x7F24A388u: goto label_7F24A388;
    case 0x7F24A38Cu: goto label_7F24A38C;
    case 0x7F24A390u: goto label_7F24A390;
    case 0x7F24A394u: goto label_7F24A394;
    case 0x7F24A398u: goto label_7F24A398;
    case 0x7F24A39Cu: goto label_7F24A39C;
    case 0x7F24A3A0u: goto label_7F24A3A0;
    case 0x7F24A3A4u: goto label_7F24A3A4;
    case 0x7F24A3A8u: goto label_7F24A3A8;
    case 0x7F24A3ACu: goto label_7F24A3AC;
    case 0x7F24A3B0u: goto label_7F24A3B0;
    case 0x7F24A3B4u: goto label_7F24A3B4;
    case 0x7F24A3B8u: goto label_7F24A3B8;
    case 0x7F24A3BCu: goto label_7F24A3BC;
    case 0x7F24A3C0u: goto label_7F24A3C0;
    case 0x7F24A3C4u: goto label_7F24A3C4;
    case 0x7F24A3C8u: goto label_7F24A3C8;
    case 0x7F24A3CCu: goto label_7F24A3CC;
    case 0x7F24A3D0u: goto label_7F24A3D0;
    case 0x7F24A3D4u: goto label_7F24A3D4;
    case 0x7F24A3D8u: goto label_7F24A3D8;
    case 0x7F24A3DCu: goto label_7F24A3DC;
    case 0x7F24A3E0u: goto label_7F24A3E0;
    case 0x7F24A3E4u: goto label_7F24A3E4;
    case 0x7F24A3E8u: goto label_7F24A3E8;
    case 0x7F24A3ECu: goto label_7F24A3EC;
    case 0x7F24A3F0u: goto label_7F24A3F0;
    case 0x7F24A3F4u: goto label_7F24A3F4;
    case 0x7F24A3F8u: goto label_7F24A3F8;
    case 0x7F24A3FCu: goto label_7F24A3FC;
    case 0x7F24A400u: goto label_7F24A400;
    case 0x7F24A404u: goto label_7F24A404;
    case 0x7F24A408u: goto label_7F24A408;
    case 0x7F24A40Cu: goto label_7F24A40C;
    case 0x7F24A410u: goto label_7F24A410;
    case 0x7F24A414u: goto label_7F24A414;
    case 0x7F24A418u: goto label_7F24A418;
    case 0x7F24A41Cu: goto label_7F24A41C;
    case 0x7F24A420u: goto label_7F24A420;
    case 0x7F24A424u: goto label_7F24A424;
    case 0x7F24A428u: goto label_7F24A428;
    case 0x7F24A42Cu: goto label_7F24A42C;
    case 0x7F24A430u: goto label_7F24A430;
    case 0x7F24A434u: goto label_7F24A434;
    case 0x7F24A438u: goto label_7F24A438;
    case 0x7F24A43Cu: goto label_7F24A43C;
    case 0x7F24A440u: goto label_7F24A440;
    case 0x7F24A444u: goto label_7F24A444;
    case 0x7F24A448u: goto label_7F24A448;
    case 0x7F24A44Cu: goto label_7F24A44C;
    case 0x7F24A450u: goto label_7F24A450;
    case 0x7F24A454u: goto label_7F24A454;
    case 0x7F24A458u: goto label_7F24A458;
    case 0x7F24A45Cu: goto label_7F24A45C;
    case 0x7F24A460u: goto label_7F24A460;
    case 0x7F24A464u: goto label_7F24A464;
    case 0x7F24A468u: goto label_7F24A468;
    case 0x7F24A46Cu: goto label_7F24A46C;
    case 0x7F24A470u: goto label_7F24A470;
    case 0x7F24A474u: goto label_7F24A474;
    case 0x7F24A478u: goto label_7F24A478;
    case 0x7F24A47Cu: goto label_7F24A47C;
    case 0x7F24A480u: goto label_7F24A480;
    case 0x7F24A484u: goto label_7F24A484;
    case 0x7F24A488u: goto label_7F24A488;
    case 0x7F24A48Cu: goto label_7F24A48C;
    case 0x7F24A490u: goto label_7F24A490;
    case 0x7F24A494u: goto label_7F24A494;
    case 0x7F24A498u: goto label_7F24A498;
    case 0x7F24A49Cu: goto label_7F24A49C;
    case 0x7F24A4A0u: goto label_7F24A4A0;
    case 0x7F24A4A4u: goto label_7F24A4A4;
    case 0x7F24A4A8u: goto label_7F24A4A8;
    case 0x7F24A4ACu: goto label_7F24A4AC;
    case 0x7F24A4B0u: goto label_7F24A4B0;
    case 0x7F24A4B4u: goto label_7F24A4B4;
    case 0x7F24A4B8u: goto label_7F24A4B8;
    case 0x7F24A4BCu: goto label_7F24A4BC;
    case 0x7F24A4C0u: goto label_7F24A4C0;
    case 0x7F24A4C4u: goto label_7F24A4C4;
    case 0x7F24A4C8u: goto label_7F24A4C8;
    case 0x7F24A4CCu: goto label_7F24A4CC;
    case 0x7F24A4D0u: goto label_7F24A4D0;
    case 0x7F24A4D4u: goto label_7F24A4D4;
    case 0x7F24A4D8u: goto label_7F24A4D8;
    case 0x7F24A4DCu: goto label_7F24A4DC;
    case 0x7F24A4E0u: goto label_7F24A4E0;
    case 0x7F24A4E4u: goto label_7F24A4E4;
    case 0x7F24A4E8u: goto label_7F24A4E8;
    case 0x7F24A4ECu: goto label_7F24A4EC;
    case 0x7F24A4F0u: goto label_7F24A4F0;
    case 0x7F24A4F4u: goto label_7F24A4F4;
    case 0x7F24A4F8u: goto label_7F24A4F8;
    case 0x7F24A4FCu: goto label_7F24A4FC;
    case 0x7F24A500u: goto label_7F24A500;
    case 0x7F24A504u: goto label_7F24A504;
    case 0x7F24A508u: goto label_7F24A508;
    case 0x7F24A50Cu: goto label_7F24A50C;
    case 0x7F24A510u: goto label_7F24A510;
    case 0x7F24A514u: goto label_7F24A514;
    case 0x7F24A518u: goto label_7F24A518;
    case 0x7F24A51Cu: goto label_7F24A51C;
    case 0x7F24A520u: goto label_7F24A520;
    case 0x7F24A524u: goto label_7F24A524;
    case 0x7F24A528u: goto label_7F24A528;
    case 0x7F24A52Cu: goto label_7F24A52C;
    case 0x7F24A530u: goto label_7F24A530;
    case 0x7F24A534u: goto label_7F24A534;
    case 0x7F24A538u: goto label_7F24A538;
    case 0x7F24A53Cu: goto label_7F24A53C;
    case 0x7F24A540u: goto label_7F24A540;
    case 0x7F24A544u: goto label_7F24A544;
    case 0x7F24A548u: goto label_7F24A548;
    case 0x7F24A54Cu: goto label_7F24A54C;
    case 0x7F24A550u: goto label_7F24A550;
    case 0x7F24A554u: goto label_7F24A554;
    case 0x7F24A558u: goto label_7F24A558;
    case 0x7F24A55Cu: goto label_7F24A55C;
    case 0x7F24A560u: goto label_7F24A560;
    case 0x7F24A564u: goto label_7F24A564;
    case 0x7F24A568u: goto label_7F24A568;
    case 0x7F24A56Cu: goto label_7F24A56C;
    case 0x7F24A570u: goto label_7F24A570;
    case 0x7F24A574u: goto label_7F24A574;
    case 0x7F24A578u: goto label_7F24A578;
    case 0x7F24A57Cu: goto label_7F24A57C;
    case 0x7F24A580u: goto label_7F24A580;
    case 0x7F24A584u: goto label_7F24A584;
    case 0x7F24A588u: goto label_7F24A588;
    case 0x7F24A58Cu: goto label_7F24A58C;
    case 0x7F24A590u: goto label_7F24A590;
    case 0x7F24A594u: goto label_7F24A594;
    case 0x7F24A598u: goto label_7F24A598;
    case 0x7F24A59Cu: goto label_7F24A59C;
    case 0x7F24A5A0u: goto label_7F24A5A0;
    case 0x7F24A5A4u: goto label_7F24A5A4;
    case 0x7F24A5A8u: goto label_7F24A5A8;
    case 0x7F24A5ACu: goto label_7F24A5AC;
    case 0x7F24A5B0u: goto label_7F24A5B0;
    case 0x7F24A5B4u: goto label_7F24A5B4;
    case 0x7F24A5B8u: goto label_7F24A5B8;
    case 0x7F24A5BCu: goto label_7F24A5BC;
    case 0x7F24A5C0u: goto label_7F24A5C0;
    case 0x7F24A5C4u: goto label_7F24A5C4;
    case 0x7F24A5C8u: goto label_7F24A5C8;
    case 0x7F24A5CCu: goto label_7F24A5CC;
    case 0x7F24A5D0u: goto label_7F24A5D0;
    case 0x7F24A5D4u: goto label_7F24A5D4;
    case 0x7F24A5D8u: goto label_7F24A5D8;
    case 0x7F24A5DCu: goto label_7F24A5DC;
    case 0x7F24A5E0u: goto label_7F24A5E0;
    case 0x7F24A5E4u: goto label_7F24A5E4;
    case 0x7F24A5E8u: goto label_7F24A5E8;
    case 0x7F24A5ECu: goto label_7F24A5EC;
    case 0x7F24A5F0u: goto label_7F24A5F0;
    case 0x7F24A5F4u: goto label_7F24A5F4;
    case 0x7F24A5F8u: goto label_7F24A5F8;
    case 0x7F24A5FCu: goto label_7F24A5FC;
    case 0x7F24A600u: goto label_7F24A600;
    case 0x7F24A604u: goto label_7F24A604;
    case 0x7F24A608u: goto label_7F24A608;
    case 0x7F24A60Cu: goto label_7F24A60C;
    case 0x7F24A610u: goto label_7F24A610;
    case 0x7F24A614u: goto label_7F24A614;
    case 0x7F24A618u: goto label_7F24A618;
    case 0x7F24A61Cu: goto label_7F24A61C;
    case 0x7F24A620u: goto label_7F24A620;
    case 0x7F24A624u: goto label_7F24A624;
    case 0x7F24A628u: goto label_7F24A628;
    case 0x7F24A62Cu: goto label_7F24A62C;
    case 0x7F24A630u: goto label_7F24A630;
    case 0x7F24A634u: goto label_7F24A634;
    case 0x7F24A638u: goto label_7F24A638;
    case 0x7F24A63Cu: goto label_7F24A63C;
    case 0x7F24A640u: goto label_7F24A640;
    case 0x7F24A644u: goto label_7F24A644;
    case 0x7F24A648u: goto label_7F24A648;
    case 0x7F24A64Cu: goto label_7F24A64C;
    case 0x7F24A650u: goto label_7F24A650;
    case 0x7F24A654u: goto label_7F24A654;
    case 0x7F24A658u: goto label_7F24A658;
    case 0x7F24A65Cu: goto label_7F24A65C;
    case 0x7F24A660u: goto label_7F24A660;
    case 0x7F24A664u: goto label_7F24A664;
    case 0x7F24A668u: goto label_7F24A668;
    case 0x7F24A66Cu: goto label_7F24A66C;
    case 0x7F24A670u: goto label_7F24A670;
    case 0x7F24A674u: goto label_7F24A674;
    case 0x7F24A678u: goto label_7F24A678;
    case 0x7F24A67Cu: goto label_7F24A67C;
    case 0x7F24A680u: goto label_7F24A680;
    case 0x7F24A684u: goto label_7F24A684;
    case 0x7F24A688u: goto label_7F24A688;
    case 0x7F24A68Cu: goto label_7F24A68C;
    case 0x7F24A690u: goto label_7F24A690;
    case 0x7F24A694u: goto label_7F24A694;
    case 0x7F24A698u: goto label_7F24A698;
    case 0x7F24A69Cu: goto label_7F24A69C;
    case 0x7F24A6A0u: goto label_7F24A6A0;
    case 0x7F24A6A4u: goto label_7F24A6A4;
    case 0x7F24A6A8u: goto label_7F24A6A8;
    case 0x7F24A6ACu: goto label_7F24A6AC;
    case 0x7F24A6B0u: goto label_7F24A6B0;
    case 0x7F24A6B4u: goto label_7F24A6B4;
    case 0x7F24A6B8u: goto label_7F24A6B8;
    case 0x7F24A6BCu: goto label_7F24A6BC;
    case 0x7F24A6C0u: goto label_7F24A6C0;
    case 0x7F24A6C4u: goto label_7F24A6C4;
    case 0x7F24A6C8u: goto label_7F24A6C8;
    case 0x7F24A6CCu: goto label_7F24A6CC;
    case 0x7F24A6D0u: goto label_7F24A6D0;
    case 0x7F24A6D4u: goto label_7F24A6D4;
    case 0x7F24A6D8u: goto label_7F24A6D8;
    case 0x7F24A6DCu: goto label_7F24A6DC;
    case 0x7F24A6E0u: goto label_7F24A6E0;
    case 0x7F24A6E4u: goto label_7F24A6E4;
    case 0x7F24A6E8u: goto label_7F24A6E8;
    case 0x7F24A6ECu: goto label_7F24A6EC;
    case 0x7F24A6F0u: goto label_7F24A6F0;
    case 0x7F24A6F4u: goto label_7F24A6F4;
    case 0x7F24A6F8u: goto label_7F24A6F8;
    case 0x7F24A6FCu: goto label_7F24A6FC;
    case 0x7F24A700u: goto label_7F24A700;
    case 0x7F24A704u: goto label_7F24A704;
    case 0x7F24A708u: goto label_7F24A708;
    case 0x7F24A70Cu: goto label_7F24A70C;
    case 0x7F24A710u: goto label_7F24A710;
    case 0x7F24A714u: goto label_7F24A714;
    case 0x7F24A718u: goto label_7F24A718;
    case 0x7F24A71Cu: goto label_7F24A71C;
    case 0x7F24A720u: goto label_7F24A720;
    case 0x7F24A724u: goto label_7F24A724;
    case 0x7F24A728u: goto label_7F24A728;
    case 0x7F24A72Cu: goto label_7F24A72C;
    case 0x7F24A730u: goto label_7F24A730;
    case 0x7F24A734u: goto label_7F24A734;
    case 0x7F24A738u: goto label_7F24A738;
    case 0x7F24A73Cu: goto label_7F24A73C;
    case 0x7F24A740u: goto label_7F24A740;
    case 0x7F24A744u: goto label_7F24A744;
    case 0x7F24A748u: goto label_7F24A748;
    case 0x7F24A74Cu: goto label_7F24A74C;
    case 0x7F24A750u: goto label_7F24A750;
    case 0x7F24A754u: goto label_7F24A754;
    case 0x7F24A758u: goto label_7F24A758;
    case 0x7F24A75Cu: goto label_7F24A75C;
    case 0x7F24A760u: goto label_7F24A760;
    case 0x7F24A764u: goto label_7F24A764;
    case 0x7F24A768u: goto label_7F24A768;
    case 0x7F24A76Cu: goto label_7F24A76C;
    case 0x7F24A770u: goto label_7F24A770;
    case 0x7F24A774u: goto label_7F24A774;
    case 0x7F24A778u: goto label_7F24A778;
    case 0x7F24A77Cu: goto label_7F24A77C;
    case 0x7F24A780u: goto label_7F24A780;
    case 0x7F24A784u: goto label_7F24A784;
    case 0x7F24A788u: goto label_7F24A788;
    case 0x7F24A78Cu: goto label_7F24A78C;
    case 0x7F24A790u: goto label_7F24A790;
    case 0x7F24A794u: goto label_7F24A794;
    case 0x7F24A798u: goto label_7F24A798;
    case 0x7F24A79Cu: goto label_7F24A79C;
    case 0x7F24A7A0u: goto label_7F24A7A0;
    case 0x7F24A7A4u: goto label_7F24A7A4;
    case 0x7F24A7A8u: goto label_7F24A7A8;
    case 0x7F24A7ACu: goto label_7F24A7AC;
    case 0x7F24A7B0u: goto label_7F24A7B0;
    case 0x7F24A7B4u: goto label_7F24A7B4;
    case 0x7F24A7B8u: goto label_7F24A7B8;
    case 0x7F24A7BCu: goto label_7F24A7BC;
    case 0x7F24A7C0u: goto label_7F24A7C0;
    case 0x7F24A7C4u: goto label_7F24A7C4;
    case 0x7F24A7C8u: goto label_7F24A7C8;
    case 0x7F24A7CCu: goto label_7F24A7CC;
    case 0x7F24A7D0u: goto label_7F24A7D0;
    case 0x7F24A7D4u: goto label_7F24A7D4;
    case 0x7F24A7D8u: goto label_7F24A7D8;
    case 0x7F24A7DCu: goto label_7F24A7DC;
    case 0x7F24A7E0u: goto label_7F24A7E0;
    case 0x7F24A7E4u: goto label_7F24A7E4;
    case 0x7F24A7E8u: goto label_7F24A7E8;
    case 0x7F24A7ECu: goto label_7F24A7EC;
    case 0x7F24A7F0u: goto label_7F24A7F0;
    case 0x7F24A7F4u: goto label_7F24A7F4;
    case 0x7F24A7F8u: goto label_7F24A7F8;
    case 0x7F24A7FCu: goto label_7F24A7FC;
    case 0x7F24A800u: goto label_7F24A800;
    case 0x7F24A804u: goto label_7F24A804;
    case 0x7F24A808u: goto label_7F24A808;
    case 0x7F24A80Cu: goto label_7F24A80C;
    case 0x7F24A810u: goto label_7F24A810;
    case 0x7F24A814u: goto label_7F24A814;
    case 0x7F24A818u: goto label_7F24A818;
    case 0x7F24A81Cu: goto label_7F24A81C;
    case 0x7F24A820u: goto label_7F24A820;
    case 0x7F24A824u: goto label_7F24A824;
    case 0x7F24A828u: goto label_7F24A828;
    case 0x7F24A82Cu: goto label_7F24A82C;
    case 0x7F24A830u: goto label_7F24A830;
    case 0x7F24A834u: goto label_7F24A834;
    case 0x7F24A838u: goto label_7F24A838;
    case 0x7F24A83Cu: goto label_7F24A83C;
    case 0x7F24A840u: goto label_7F24A840;
    case 0x7F24A844u: goto label_7F24A844;
    case 0x7F24A848u: goto label_7F24A848;
    case 0x7F24A84Cu: goto label_7F24A84C;
    case 0x7F24A850u: goto label_7F24A850;
    case 0x7F24A854u: goto label_7F24A854;
    case 0x7F24A858u: goto label_7F24A858;
    case 0x7F24A85Cu: goto label_7F24A85C;
    case 0x7F24A860u: goto label_7F24A860;
    case 0x7F24A864u: goto label_7F24A864;
    case 0x7F24A868u: goto label_7F24A868;
    case 0x7F24A86Cu: goto label_7F24A86C;
    case 0x7F24A870u: goto label_7F24A870;
    case 0x7F24A874u: goto label_7F24A874;
    case 0x7F24A878u: goto label_7F24A878;
    case 0x7F24A87Cu: goto label_7F24A87C;
    case 0x7F24A880u: goto label_7F24A880;
    case 0x7F24A884u: goto label_7F24A884;
    case 0x7F24A888u: goto label_7F24A888;
    case 0x7F24A88Cu: goto label_7F24A88C;
    case 0x7F24A890u: goto label_7F24A890;
    case 0x7F24A894u: goto label_7F24A894;
    case 0x7F24A898u: goto label_7F24A898;
    case 0x7F24A89Cu: goto label_7F24A89C;
    case 0x7F24A8A0u: goto label_7F24A8A0;
    case 0x7F24A8A4u: goto label_7F24A8A4;
    case 0x7F24A8A8u: goto label_7F24A8A8;
    case 0x7F24A8ACu: goto label_7F24A8AC;
    case 0x7F24A8B0u: goto label_7F24A8B0;
    case 0x7F24A8B4u: goto label_7F24A8B4;
    case 0x7F24A8B8u: goto label_7F24A8B8;
    case 0x7F24A8BCu: goto label_7F24A8BC;
    case 0x7F24A8C0u: goto label_7F24A8C0;
    case 0x7F24A8C4u: goto label_7F24A8C4;
    case 0x7F24A8C8u: goto label_7F24A8C8;
    case 0x7F24A8CCu: goto label_7F24A8CC;
    case 0x7F24A8D0u: goto label_7F24A8D0;
    case 0x7F24A8D4u: goto label_7F24A8D4;
    case 0x7F24A8D8u: goto label_7F24A8D8;
    case 0x7F24A8DCu: goto label_7F24A8DC;
    case 0x7F24A8E0u: goto label_7F24A8E0;
    case 0x7F24A8E4u: goto label_7F24A8E4;
    case 0x7F24A8E8u: goto label_7F24A8E8;
    case 0x7F24A8ECu: goto label_7F24A8EC;
    case 0x7F24A8F0u: goto label_7F24A8F0;
    case 0x7F24A8F4u: goto label_7F24A8F4;
    case 0x7F24A8F8u: goto label_7F24A8F8;
    case 0x7F24A8FCu: goto label_7F24A8FC;
    case 0x7F24A900u: goto label_7F24A900;
    case 0x7F24A904u: goto label_7F24A904;
    case 0x7F24A908u: goto label_7F24A908;
    case 0x7F24A90Cu: goto label_7F24A90C;
    case 0x7F24A910u: goto label_7F24A910;
    case 0x7F24A914u: goto label_7F24A914;
    case 0x7F24A918u: goto label_7F24A918;
    case 0x7F24A91Cu: goto label_7F24A91C;
    case 0x7F24A920u: goto label_7F24A920;
    case 0x7F24A924u: goto label_7F24A924;
    case 0x7F24A928u: goto label_7F24A928;
    case 0x7F24A92Cu: goto label_7F24A92C;
    case 0x7F24A930u: goto label_7F24A930;
    case 0x7F24A934u: goto label_7F24A934;
    case 0x7F24A938u: goto label_7F24A938;
    case 0x7F24A93Cu: goto label_7F24A93C;
    case 0x7F24A940u: goto label_7F24A940;
    case 0x7F24A944u: goto label_7F24A944;
    case 0x7F24A948u: goto label_7F24A948;
    case 0x7F24A94Cu: goto label_7F24A94C;
    case 0x7F24A950u: goto label_7F24A950;
    case 0x7F24A954u: goto label_7F24A954;
    case 0x7F24A958u: goto label_7F24A958;
    case 0x7F24A95Cu: goto label_7F24A95C;
    case 0x7F24A960u: goto label_7F24A960;
    case 0x7F24A964u: goto label_7F24A964;
    case 0x7F24A968u: goto label_7F24A968;
    case 0x7F24A96Cu: goto label_7F24A96C;
    case 0x7F24A970u: goto label_7F24A970;
    case 0x7F24A974u: goto label_7F24A974;
    case 0x7F24A978u: goto label_7F24A978;
    case 0x7F24A97Cu: goto label_7F24A97C;
    case 0x7F24A980u: goto label_7F24A980;
    case 0x7F24A984u: goto label_7F24A984;
    case 0x7F24A988u: goto label_7F24A988;
    case 0x7F24A98Cu: goto label_7F24A98C;
    case 0x7F24A990u: goto label_7F24A990;
    case 0x7F24A994u: goto label_7F24A994;
    case 0x7F24A998u: goto label_7F24A998;
    case 0x7F24A99Cu: goto label_7F24A99C;
    case 0x7F24A9A0u: goto label_7F24A9A0;
    case 0x7F24A9A4u: goto label_7F24A9A4;
    case 0x7F24A9A8u: goto label_7F24A9A8;
    case 0x7F24A9ACu: goto label_7F24A9AC;
    case 0x7F24A9B0u: goto label_7F24A9B0;
    case 0x7F24A9B4u: goto label_7F24A9B4;
    case 0x7F24A9B8u: goto label_7F24A9B8;
    case 0x7F24A9BCu: goto label_7F24A9BC;
    case 0x7F24A9C0u: goto label_7F24A9C0;
    case 0x7F24A9C4u: goto label_7F24A9C4;
    case 0x7F24A9C8u: goto label_7F24A9C8;
    case 0x7F24A9CCu: goto label_7F24A9CC;
    case 0x7F24A9D0u: goto label_7F24A9D0;
    case 0x7F24A9D4u: goto label_7F24A9D4;
    case 0x7F24A9D8u: goto label_7F24A9D8;
    case 0x7F24A9DCu: goto label_7F24A9DC;
    case 0x7F24A9E0u: goto label_7F24A9E0;
    case 0x7F24A9E4u: goto label_7F24A9E4;
    case 0x7F24A9E8u: goto label_7F24A9E8;
    case 0x7F24A9ECu: goto label_7F24A9EC;
    case 0x7F24A9F0u: goto label_7F24A9F0;
    case 0x7F24A9F4u: goto label_7F24A9F4;
    case 0x7F24A9F8u: goto label_7F24A9F8;
    case 0x7F24A9FCu: goto label_7F24A9FC;
    case 0x7F24AA00u: goto label_7F24AA00;
    case 0x7F24AA04u: goto label_7F24AA04;
    case 0x7F24AA08u: goto label_7F24AA08;
    case 0x7F24AA0Cu: goto label_7F24AA0C;
    case 0x7F24AA10u: goto label_7F24AA10;
    case 0x7F24AA14u: goto label_7F24AA14;
    case 0x7F24AA18u: goto label_7F24AA18;
    case 0x7F24AA1Cu: goto label_7F24AA1C;
    case 0x7F24AA20u: goto label_7F24AA20;
    case 0x7F24AA24u: goto label_7F24AA24;
    case 0x7F24AA28u: goto label_7F24AA28;
    case 0x7F24AA2Cu: goto label_7F24AA2C;
    case 0x7F24AA30u: goto label_7F24AA30;
    case 0x7F24AA34u: goto label_7F24AA34;
    case 0x7F24AA38u: goto label_7F24AA38;
    case 0x7F24AA3Cu: goto label_7F24AA3C;
    case 0x7F24AA40u: goto label_7F24AA40;
    case 0x7F24AA44u: goto label_7F24AA44;
    case 0x7F24AA48u: goto label_7F24AA48;
    case 0x7F24AA4Cu: goto label_7F24AA4C;
    case 0x7F24AA50u: goto label_7F24AA50;
    case 0x7F24AA54u: goto label_7F24AA54;
    case 0x7F24AA58u: goto label_7F24AA58;
    case 0x7F24AA5Cu: goto label_7F24AA5C;
    case 0x7F24AA60u: goto label_7F24AA60;
    case 0x7F24AA64u: goto label_7F24AA64;
    case 0x7F24AA68u: goto label_7F24AA68;
    case 0x7F24AA6Cu: goto label_7F24AA6C;
    case 0x7F24AA70u: goto label_7F24AA70;
    case 0x7F24AA74u: goto label_7F24AA74;
    case 0x7F24AA78u: goto label_7F24AA78;
    case 0x7F24AA7Cu: goto label_7F24AA7C;
    case 0x7F24AA80u: goto label_7F24AA80;
    case 0x7F24AA84u: goto label_7F24AA84;
    case 0x7F24AA88u: goto label_7F24AA88;
    case 0x7F24AA8Cu: goto label_7F24AA8C;
    case 0x7F24AA90u: goto label_7F24AA90;
    case 0x7F24AA94u: goto label_7F24AA94;
    case 0x7F24AA98u: goto label_7F24AA98;
    case 0x7F24AA9Cu: goto label_7F24AA9C;
    case 0x7F24AAA0u: goto label_7F24AAA0;
    case 0x7F24AAA4u: goto label_7F24AAA4;
    case 0x7F24AAA8u: goto label_7F24AAA8;
    case 0x7F24AAACu: goto label_7F24AAAC;
    case 0x7F24AAB0u: goto label_7F24AAB0;
    case 0x7F24AAB4u: goto label_7F24AAB4;
    case 0x7F24AAB8u: goto label_7F24AAB8;
    case 0x7F24AABCu: goto label_7F24AABC;
    case 0x7F24AAC0u: goto label_7F24AAC0;
    case 0x7F24AAC4u: goto label_7F24AAC4;
    case 0x7F24AAC8u: goto label_7F24AAC8;
    case 0x7F24AACCu: goto label_7F24AACC;
    case 0x7F24AAD0u: goto label_7F24AAD0;
    case 0x7F24AAD4u: goto label_7F24AAD4;
    case 0x7F24AAD8u: goto label_7F24AAD8;
    case 0x7F24AADCu: goto label_7F24AADC;
    case 0x7F24AAE0u: goto label_7F24AAE0;
    case 0x7F24AAE4u: goto label_7F24AAE4;
    case 0x7F24AAE8u: goto label_7F24AAE8;
    case 0x7F24AAECu: goto label_7F24AAEC;
    case 0x7F24AAF0u: goto label_7F24AAF0;
    case 0x7F24AAF4u: goto label_7F24AAF4;
    case 0x7F24AAF8u: goto label_7F24AAF8;
    case 0x7F24AAFCu: goto label_7F24AAFC;
    case 0x7F24AB00u: goto label_7F24AB00;
    case 0x7F24AB04u: goto label_7F24AB04;
    case 0x7F24AB08u: goto label_7F24AB08;
    case 0x7F24AB0Cu: goto label_7F24AB0C;
    case 0x7F24AB10u: goto label_7F24AB10;
    case 0x7F24AB14u: goto label_7F24AB14;
    case 0x7F24AB18u: goto label_7F24AB18;
    case 0x7F24AB1Cu: goto label_7F24AB1C;
    case 0x7F24AB20u: goto label_7F24AB20;
    case 0x7F24AB24u: goto label_7F24AB24;
    case 0x7F24AB28u: goto label_7F24AB28;
    case 0x7F24AB2Cu: goto label_7F24AB2C;
    case 0x7F24AB30u: goto label_7F24AB30;
    case 0x7F24AB34u: goto label_7F24AB34;
    case 0x7F24AB38u: goto label_7F24AB38;
    case 0x7F24AB3Cu: goto label_7F24AB3C;
    case 0x7F24AB40u: goto label_7F24AB40;
    case 0x7F24AB44u: goto label_7F24AB44;
    case 0x7F24AB48u: goto label_7F24AB48;
    case 0x7F24AB4Cu: goto label_7F24AB4C;
    case 0x7F24AB50u: goto label_7F24AB50;
    case 0x7F24AB54u: goto label_7F24AB54;
    case 0x7F24AB58u: goto label_7F24AB58;
    case 0x7F24AB5Cu: goto label_7F24AB5C;
    case 0x7F24AB60u: goto label_7F24AB60;
    case 0x7F24AB64u: goto label_7F24AB64;
    case 0x7F24AB68u: goto label_7F24AB68;
    case 0x7F24AB6Cu: goto label_7F24AB6C;
    case 0x7F24AB70u: goto label_7F24AB70;
    case 0x7F24AB74u: goto label_7F24AB74;
    case 0x7F24AB78u: goto label_7F24AB78;
    case 0x7F24AB7Cu: goto label_7F24AB7C;
    case 0x7F24AB80u: goto label_7F24AB80;
    case 0x7F24AB84u: goto label_7F24AB84;
    case 0x7F24AB88u: goto label_7F24AB88;
    case 0x7F24AB8Cu: goto label_7F24AB8C;
    case 0x7F24AB90u: goto label_7F24AB90;
    case 0x7F24AB94u: goto label_7F24AB94;
    case 0x7F24AB98u: goto label_7F24AB98;
    case 0x7F24AB9Cu: goto label_7F24AB9C;
    case 0x7F24ABA0u: goto label_7F24ABA0;
    case 0x7F24ABA4u: goto label_7F24ABA4;
    case 0x7F24ABA8u: goto label_7F24ABA8;
    case 0x7F24ABACu: goto label_7F24ABAC;
    case 0x7F24ABB0u: goto label_7F24ABB0;
    case 0x7F24ABB4u: goto label_7F24ABB4;
    case 0x7F24ABB8u: goto label_7F24ABB8;
    case 0x7F24ABBCu: goto label_7F24ABBC;
    case 0x7F24ABC0u: goto label_7F24ABC0;
    case 0x7F24ABC4u: goto label_7F24ABC4;
    case 0x7F24ABC8u: goto label_7F24ABC8;
    case 0x7F24ABCCu: goto label_7F24ABCC;
    case 0x7F24ABD0u: goto label_7F24ABD0;
    case 0x7F24ABD4u: goto label_7F24ABD4;
    case 0x7F24ABD8u: goto label_7F24ABD8;
    case 0x7F24ABDCu: goto label_7F24ABDC;
    case 0x7F24ABE0u: goto label_7F24ABE0;
    case 0x7F24ABE4u: goto label_7F24ABE4;
    case 0x7F24ABE8u: goto label_7F24ABE8;
    case 0x7F24ABECu: goto label_7F24ABEC;
    case 0x7F24ABF0u: goto label_7F24ABF0;
    case 0x7F24ABF4u: goto label_7F24ABF4;
    case 0x7F24ABF8u: goto label_7F24ABF8;
    case 0x7F24ABFCu: goto label_7F24ABFC;
    case 0x7F24AC00u: goto label_7F24AC00;
    case 0x7F24AC04u: goto label_7F24AC04;
    case 0x7F24AC08u: goto label_7F24AC08;
    case 0x7F24AC0Cu: goto label_7F24AC0C;
    case 0x7F24AC10u: goto label_7F24AC10;
    case 0x7F24AC14u: goto label_7F24AC14;
    case 0x7F24AC18u: goto label_7F24AC18;
    case 0x7F24AC1Cu: goto label_7F24AC1C;
    case 0x7F24AC20u: goto label_7F24AC20;
    case 0x7F24AC24u: goto label_7F24AC24;
    case 0x7F24AC28u: goto label_7F24AC28;
    case 0x7F24AC2Cu: goto label_7F24AC2C;
    case 0x7F24AC30u: goto label_7F24AC30;
    case 0x7F24AC34u: goto label_7F24AC34;
    case 0x7F24AC38u: goto label_7F24AC38;
    case 0x7F24AC3Cu: goto label_7F24AC3C;
    case 0x7F24AC40u: goto label_7F24AC40;
    case 0x7F24AC44u: goto label_7F24AC44;
    case 0x7F24AC48u: goto label_7F24AC48;
    case 0x7F24AC4Cu: goto label_7F24AC4C;
    case 0x7F24AC50u: goto label_7F24AC50;
    case 0x7F24AC54u: goto label_7F24AC54;
    case 0x7F24AC58u: goto label_7F24AC58;
    case 0x7F24AC5Cu: goto label_7F24AC5C;
    case 0x7F24AC60u: goto label_7F24AC60;
    case 0x7F24AC64u: goto label_7F24AC64;
    case 0x7F24AC68u: goto label_7F24AC68;
    case 0x7F24AC6Cu: goto label_7F24AC6C;
    case 0x7F24AC70u: goto label_7F24AC70;
    case 0x7F24AC74u: goto label_7F24AC74;
    case 0x7F24AC78u: goto label_7F24AC78;
    case 0x7F24AC7Cu: goto label_7F24AC7C;
    case 0x7F24AC80u: goto label_7F24AC80;
    case 0x7F24AC84u: goto label_7F24AC84;
    case 0x7F24AC88u: goto label_7F24AC88;
    case 0x7F24AC8Cu: goto label_7F24AC8C;
    case 0x7F24AC90u: goto label_7F24AC90;
    case 0x7F24AC94u: goto label_7F24AC94;
    case 0x7F24AC98u: goto label_7F24AC98;
    case 0x7F24AC9Cu: goto label_7F24AC9C;
    case 0x7F24ACA0u: goto label_7F24ACA0;
    case 0x7F24ACA4u: goto label_7F24ACA4;
    case 0x7F24ACA8u: goto label_7F24ACA8;
    case 0x7F24ACACu: goto label_7F24ACAC;
    case 0x7F24ACB0u: goto label_7F24ACB0;
    case 0x7F24ACB4u: goto label_7F24ACB4;
    case 0x7F24ACB8u: goto label_7F24ACB8;
    case 0x7F24ACBCu: goto label_7F24ACBC;
    case 0x7F24ACC0u: goto label_7F24ACC0;
    case 0x7F24ACC4u: goto label_7F24ACC4;
    case 0x7F24ACC8u: goto label_7F24ACC8;
    case 0x7F24ACCCu: goto label_7F24ACCC;
    case 0x7F24ACD0u: goto label_7F24ACD0;
    case 0x7F24ACD4u: goto label_7F24ACD4;
    case 0x7F24ACD8u: goto label_7F24ACD8;
    case 0x7F24ACDCu: goto label_7F24ACDC;
    case 0x7F24ACE0u: goto label_7F24ACE0;
    case 0x7F24ACE4u: goto label_7F24ACE4;
    case 0x7F24ACE8u: goto label_7F24ACE8;
    case 0x7F24ACECu: goto label_7F24ACEC;
    case 0x7F24ACF0u: goto label_7F24ACF0;
    case 0x7F24ACF4u: goto label_7F24ACF4;
    case 0x7F24ACF8u: goto label_7F24ACF8;
    case 0x7F24ACFCu: goto label_7F24ACFC;
    case 0x7F24AD00u: goto label_7F24AD00;
    case 0x7F24AD04u: goto label_7F24AD04;
    case 0x7F24AD08u: goto label_7F24AD08;
    case 0x7F24AD0Cu: goto label_7F24AD0C;
    case 0x7F24AD10u: goto label_7F24AD10;
    case 0x7F24AD14u: goto label_7F24AD14;
    case 0x7F24AD18u: goto label_7F24AD18;
    case 0x7F24AD1Cu: goto label_7F24AD1C;
    case 0x7F24AD20u: goto label_7F24AD20;
    case 0x7F24AD24u: goto label_7F24AD24;
    case 0x7F24AD28u: goto label_7F24AD28;
    case 0x7F24AD2Cu: goto label_7F24AD2C;
    case 0x7F24AD30u: goto label_7F24AD30;
    case 0x7F24AD34u: goto label_7F24AD34;
    case 0x7F24AD38u: goto label_7F24AD38;
    case 0x7F24AD3Cu: goto label_7F24AD3C;
    case 0x7F24AD40u: goto label_7F24AD40;
    case 0x7F24AD44u: goto label_7F24AD44;
    case 0x7F24AD48u: goto label_7F24AD48;
    case 0x7F24AD4Cu: goto label_7F24AD4C;
    case 0x7F24AD50u: goto label_7F24AD50;
    case 0x7F24AD54u: goto label_7F24AD54;
    case 0x7F24AD58u: goto label_7F24AD58;
    case 0x7F24AD5Cu: goto label_7F24AD5C;
    case 0x7F24AD60u: goto label_7F24AD60;
    case 0x7F24AD64u: goto label_7F24AD64;
    case 0x7F24AD68u: goto label_7F24AD68;
    case 0x7F24AD6Cu: goto label_7F24AD6C;
    case 0x7F24AD70u: goto label_7F24AD70;
    case 0x7F24AD74u: goto label_7F24AD74;
    case 0x7F24AD78u: goto label_7F24AD78;
    case 0x7F24AD7Cu: goto label_7F24AD7C;
    case 0x7F24AD80u: goto label_7F24AD80;
    case 0x7F24AD84u: goto label_7F24AD84;
    case 0x7F24AD88u: goto label_7F24AD88;
    case 0x7F24AD8Cu: goto label_7F24AD8C;
    case 0x7F24AD90u: goto label_7F24AD90;
    case 0x7F24AD94u: goto label_7F24AD94;
    case 0x7F24AD98u: goto label_7F24AD98;
    case 0x7F24AD9Cu: goto label_7F24AD9C;
    case 0x7F24ADA0u: goto label_7F24ADA0;
    case 0x7F24ADA4u: goto label_7F24ADA4;
    case 0x7F24ADA8u: goto label_7F24ADA8;
    case 0x7F24ADACu: goto label_7F24ADAC;
    case 0x7F24ADB0u: goto label_7F24ADB0;
    case 0x7F24ADB4u: goto label_7F24ADB4;
    case 0x7F24ADB8u: goto label_7F24ADB8;
    case 0x7F24ADBCu: goto label_7F24ADBC;
    case 0x7F24ADC0u: goto label_7F24ADC0;
    case 0x7F24ADC4u: goto label_7F24ADC4;
    case 0x7F24ADC8u: goto label_7F24ADC8;
    case 0x7F24ADCCu: goto label_7F24ADCC;
    case 0x7F24ADD0u: goto label_7F24ADD0;
    case 0x7F24ADD4u: goto label_7F24ADD4;
    case 0x7F24ADD8u: goto label_7F24ADD8;
    case 0x7F24ADDCu: goto label_7F24ADDC;
    case 0x7F24ADE0u: goto label_7F24ADE0;
    case 0x7F24ADE4u: goto label_7F24ADE4;
    case 0x7F24ADE8u: goto label_7F24ADE8;
    case 0x7F24ADECu: goto label_7F24ADEC;
    case 0x7F24ADF0u: goto label_7F24ADF0;
    case 0x7F24ADF4u: goto label_7F24ADF4;
    case 0x7F24ADF8u: goto label_7F24ADF8;
    case 0x7F24ADFCu: goto label_7F24ADFC;
    case 0x7F24AE00u: goto label_7F24AE00;
    case 0x7F24AE04u: goto label_7F24AE04;
    case 0x7F24AE08u: goto label_7F24AE08;
    case 0x7F24AE0Cu: goto label_7F24AE0C;
    case 0x7F24AE10u: goto label_7F24AE10;
    case 0x7F24AE14u: goto label_7F24AE14;
    case 0x7F24AE18u: goto label_7F24AE18;
    case 0x7F24AE1Cu: goto label_7F24AE1C;
    case 0x7F24AE20u: goto label_7F24AE20;
    case 0x7F24AE24u: goto label_7F24AE24;
    case 0x7F24AE28u: goto label_7F24AE28;
    case 0x7F24AE2Cu: goto label_7F24AE2C;
    case 0x7F24AE30u: goto label_7F24AE30;
    case 0x7F24AE34u: goto label_7F24AE34;
    case 0x7F24AE38u: goto label_7F24AE38;
    case 0x7F24AE3Cu: goto label_7F24AE3C;
    case 0x7F24AE40u: goto label_7F24AE40;
    case 0x7F24AE44u: goto label_7F24AE44;
    case 0x7F24AE48u: goto label_7F24AE48;
    case 0x7F24AE4Cu: goto label_7F24AE4C;
    case 0x7F24AE50u: goto label_7F24AE50;
    case 0x7F24AE54u: goto label_7F24AE54;
    case 0x7F24AE58u: goto label_7F24AE58;
    case 0x7F24AE5Cu: goto label_7F24AE5C;
    case 0x7F24AE60u: goto label_7F24AE60;
    case 0x7F24AE64u: goto label_7F24AE64;
    case 0x7F24AE68u: goto label_7F24AE68;
    case 0x7F24AE6Cu: goto label_7F24AE6C;
    case 0x7F24AE70u: goto label_7F24AE70;
    case 0x7F24AE74u: goto label_7F24AE74;
    case 0x7F24AE78u: goto label_7F24AE78;
    case 0x7F24AE7Cu: goto label_7F24AE7C;
    case 0x7F24AE80u: goto label_7F24AE80;
    case 0x7F24AE84u: goto label_7F24AE84;
    case 0x7F24AE88u: goto label_7F24AE88;
    case 0x7F24AE8Cu: goto label_7F24AE8C;
    case 0x7F24AE90u: goto label_7F24AE90;
    case 0x7F24AE94u: goto label_7F24AE94;
    case 0x7F24AE98u: goto label_7F24AE98;
    case 0x7F24AE9Cu: goto label_7F24AE9C;
    case 0x7F24AEA0u: goto label_7F24AEA0;
    case 0x7F24AEA4u: goto label_7F24AEA4;
    case 0x7F24AEA8u: goto label_7F24AEA8;
    case 0x7F24AEACu: goto label_7F24AEAC;
    case 0x7F24AEB0u: goto label_7F24AEB0;
    case 0x7F24AEB4u: goto label_7F24AEB4;
    case 0x7F24AEB8u: goto label_7F24AEB8;
    case 0x7F24AEBCu: goto label_7F24AEBC;
    case 0x7F24AEC0u: goto label_7F24AEC0;
    case 0x7F24AEC4u: goto label_7F24AEC4;
    case 0x7F24AEC8u: goto label_7F24AEC8;
    case 0x7F24AECCu: goto label_7F24AECC;
    case 0x7F24AED0u: goto label_7F24AED0;
    case 0x7F24AED4u: goto label_7F24AED4;
    case 0x7F24AED8u: goto label_7F24AED8;
    case 0x7F24AEDCu: goto label_7F24AEDC;
    case 0x7F24AEE0u: goto label_7F24AEE0;
    case 0x7F24AEE4u: goto label_7F24AEE4;
    case 0x7F24AEE8u: goto label_7F24AEE8;
    case 0x7F24AEECu: goto label_7F24AEEC;
    case 0x7F24AEF0u: goto label_7F24AEF0;
    case 0x7F24AEF4u: goto label_7F24AEF4;
    case 0x7F24AEF8u: goto label_7F24AEF8;
    case 0x7F24AEFCu: goto label_7F24AEFC;
    case 0x7F24AF00u: goto label_7F24AF00;
    case 0x7F24AF04u: goto label_7F24AF04;
    case 0x7F24AF08u: goto label_7F24AF08;
    case 0x7F24AF0Cu: goto label_7F24AF0C;
    case 0x7F24AF10u: goto label_7F24AF10;
    case 0x7F24AF14u: goto label_7F24AF14;
    case 0x7F24AF18u: goto label_7F24AF18;
    case 0x7F24AF1Cu: goto label_7F24AF1C;
    case 0x7F24AF20u: goto label_7F24AF20;
    case 0x7F24AF24u: goto label_7F24AF24;
    case 0x7F24AF28u: goto label_7F24AF28;
    case 0x7F24AF2Cu: goto label_7F24AF2C;
    case 0x7F24AF30u: goto label_7F24AF30;
    case 0x7F24AF34u: goto label_7F24AF34;
    case 0x7F24AF38u: goto label_7F24AF38;
    case 0x7F24AF3Cu: goto label_7F24AF3C;
    case 0x7F24AF40u: goto label_7F24AF40;
    case 0x7F24AF44u: goto label_7F24AF44;
    case 0x7F24AF48u: goto label_7F24AF48;
    case 0x7F24AF4Cu: goto label_7F24AF4C;
    case 0x7F24AF50u: goto label_7F24AF50;
    case 0x7F24AF54u: goto label_7F24AF54;
    case 0x7F24AF58u: goto label_7F24AF58;
    case 0x7F24AF5Cu: goto label_7F24AF5C;
    case 0x7F24AF60u: goto label_7F24AF60;
    case 0x7F24AF64u: goto label_7F24AF64;
    case 0x7F24AF68u: goto label_7F24AF68;
    case 0x7F24AF6Cu: goto label_7F24AF6C;
    case 0x7F24AF70u: goto label_7F24AF70;
    case 0x7F24AF74u: goto label_7F24AF74;
    case 0x7F24AF78u: goto label_7F24AF78;
    case 0x7F24AF7Cu: goto label_7F24AF7C;
    case 0x7F24AF80u: goto label_7F24AF80;
    case 0x7F24AF84u: goto label_7F24AF84;
    case 0x7F24AF88u: goto label_7F24AF88;
    case 0x7F24AF8Cu: goto label_7F24AF8C;
    case 0x7F24AF90u: goto label_7F24AF90;
    case 0x7F24AF94u: goto label_7F24AF94;
    case 0x7F24AF98u: goto label_7F24AF98;
    case 0x7F24AF9Cu: goto label_7F24AF9C;
    case 0x7F24AFA0u: goto label_7F24AFA0;
    case 0x7F24AFA4u: goto label_7F24AFA4;
    case 0x7F24AFA8u: goto label_7F24AFA8;
    case 0x7F24AFACu: goto label_7F24AFAC;
    case 0x7F24AFB0u: goto label_7F24AFB0;
    case 0x7F24AFB4u: goto label_7F24AFB4;
    case 0x7F24AFB8u: goto label_7F24AFB8;
    case 0x7F24AFBCu: goto label_7F24AFBC;
    case 0x7F24AFC0u: goto label_7F24AFC0;
    case 0x7F24AFC4u: goto label_7F24AFC4;
    case 0x7F24AFC8u: goto label_7F24AFC8;
    case 0x7F24AFCCu: goto label_7F24AFCC;
    case 0x7F24AFD0u: goto label_7F24AFD0;
    case 0x7F24AFD4u: goto label_7F24AFD4;
    case 0x7F24AFD8u: goto label_7F24AFD8;
    case 0x7F24AFDCu: goto label_7F24AFDC;
    case 0x7F24AFE0u: goto label_7F24AFE0;
    case 0x7F24AFE4u: goto label_7F24AFE4;
    case 0x7F24AFE8u: goto label_7F24AFE8;
    case 0x7F24AFECu: goto label_7F24AFEC;
    case 0x7F24AFF0u: goto label_7F24AFF0;
    case 0x7F24AFF4u: goto label_7F24AFF4;
    case 0x7F24AFF8u: goto label_7F24AFF8;
    case 0x7F24AFFCu: goto label_7F24AFFC;
    case 0x7F24B000u: goto label_7F24B000;
    case 0x7F24B004u: goto label_7F24B004;
    case 0x7F24B008u: goto label_7F24B008;
    case 0x7F24B00Cu: goto label_7F24B00C;
    case 0x7F24B010u: goto label_7F24B010;
    case 0x7F24B014u: goto label_7F24B014;
    case 0x7F24B018u: goto label_7F24B018;
    case 0x7F24B01Cu: goto label_7F24B01C;
    case 0x7F24B020u: goto label_7F24B020;
    case 0x7F24B024u: goto label_7F24B024;
    case 0x7F24B028u: goto label_7F24B028;
    case 0x7F24B02Cu: goto label_7F24B02C;
    case 0x7F24B030u: goto label_7F24B030;
    case 0x7F24B034u: goto label_7F24B034;
    case 0x7F24B038u: goto label_7F24B038;
    case 0x7F24B03Cu: goto label_7F24B03C;
    case 0x7F24B040u: goto label_7F24B040;
    case 0x7F24B044u: goto label_7F24B044;
    case 0x7F24B048u: goto label_7F24B048;
    case 0x7F24B04Cu: goto label_7F24B04C;
    case 0x7F24B050u: goto label_7F24B050;
    case 0x7F24B054u: goto label_7F24B054;
    case 0x7F24B058u: goto label_7F24B058;
    case 0x7F24B05Cu: goto label_7F24B05C;
    case 0x7F24B060u: goto label_7F24B060;
    case 0x7F24B064u: goto label_7F24B064;
    case 0x7F24B068u: goto label_7F24B068;
    case 0x7F24B06Cu: goto label_7F24B06C;
    case 0x7F24B070u: goto label_7F24B070;
    case 0x7F24B074u: goto label_7F24B074;
    case 0x7F24B078u: goto label_7F24B078;
    case 0x7F24B07Cu: goto label_7F24B07C;
    case 0x7F24B080u: goto label_7F24B080;
    case 0x7F24B084u: goto label_7F24B084;
    case 0x7F24B088u: goto label_7F24B088;
    case 0x7F24B08Cu: goto label_7F24B08C;
    case 0x7F24B090u: goto label_7F24B090;
    case 0x7F24B094u: goto label_7F24B094;
    case 0x7F24B098u: goto label_7F24B098;
    case 0x7F24B09Cu: goto label_7F24B09C;
    case 0x7F24B0A0u: goto label_7F24B0A0;
    case 0x7F24B0A4u: goto label_7F24B0A4;
    case 0x7F24B0A8u: goto label_7F24B0A8;
    case 0x7F24B0ACu: goto label_7F24B0AC;
    case 0x7F24B0B0u: goto label_7F24B0B0;
    case 0x7F24B0B4u: goto label_7F24B0B4;
    case 0x7F24B0B8u: goto label_7F24B0B8;
    case 0x7F24B0BCu: goto label_7F24B0BC;
    case 0x7F24B0C0u: goto label_7F24B0C0;
    case 0x7F24B0C4u: goto label_7F24B0C4;
    case 0x7F24B0C8u: goto label_7F24B0C8;
    case 0x7F24B0CCu: goto label_7F24B0CC;
    case 0x7F24B0D0u: goto label_7F24B0D0;
    case 0x7F24B0D4u: goto label_7F24B0D4;
    case 0x7F24B0D8u: goto label_7F24B0D8;
    case 0x7F24B0DCu: goto label_7F24B0DC;
    case 0x7F24B0E0u: goto label_7F24B0E0;
    case 0x7F24B0E4u: goto label_7F24B0E4;
    case 0x7F24B0E8u: goto label_7F24B0E8;
    case 0x7F24B0ECu: goto label_7F24B0EC;
    case 0x7F24B0F0u: goto label_7F24B0F0;
    case 0x7F24B0F4u: goto label_7F24B0F4;
    case 0x7F24B0F8u: goto label_7F24B0F8;
    case 0x7F24B0FCu: goto label_7F24B0FC;
    case 0x7F24B100u: goto label_7F24B100;
    case 0x7F24B104u: goto label_7F24B104;
    case 0x7F24B108u: goto label_7F24B108;
    case 0x7F24B10Cu: goto label_7F24B10C;
    case 0x7F24B110u: goto label_7F24B110;
    case 0x7F24B114u: goto label_7F24B114;
    case 0x7F24B118u: goto label_7F24B118;
    case 0x7F24B11Cu: goto label_7F24B11C;
    case 0x7F24B120u: goto label_7F24B120;
    case 0x7F24B124u: goto label_7F24B124;
    case 0x7F24B128u: goto label_7F24B128;
    case 0x7F24B12Cu: goto label_7F24B12C;
    case 0x7F24B130u: goto label_7F24B130;
    case 0x7F24B134u: goto label_7F24B134;
    case 0x7F24B138u: goto label_7F24B138;
    case 0x7F24B13Cu: goto label_7F24B13C;
    case 0x7F24B140u: goto label_7F24B140;
    case 0x7F24B144u: goto label_7F24B144;
    case 0x7F24B148u: goto label_7F24B148;
    case 0x7F24B14Cu: goto label_7F24B14C;
    case 0x7F24B150u: goto label_7F24B150;
    case 0x7F24B154u: goto label_7F24B154;
    case 0x7F24B158u: goto label_7F24B158;
    case 0x7F24B15Cu: goto label_7F24B15C;
    case 0x7F24B160u: goto label_7F24B160;
    case 0x7F24B164u: goto label_7F24B164;
    case 0x7F24B168u: goto label_7F24B168;
    case 0x7F24B16Cu: goto label_7F24B16C;
    case 0x7F24B170u: goto label_7F24B170;
    case 0x7F24B174u: goto label_7F24B174;
    case 0x7F24B178u: goto label_7F24B178;
    case 0x7F24B17Cu: goto label_7F24B17C;
    case 0x7F24B180u: goto label_7F24B180;
    case 0x7F24B184u: goto label_7F24B184;
    case 0x7F24B188u: goto label_7F24B188;
    case 0x7F24B18Cu: goto label_7F24B18C;
    case 0x7F24B190u: goto label_7F24B190;
    case 0x7F24B194u: goto label_7F24B194;
    case 0x7F24B198u: goto label_7F24B198;
    case 0x7F24B19Cu: goto label_7F24B19C;
    case 0x7F24B1A0u: goto label_7F24B1A0;
    case 0x7F24B1A4u: goto label_7F24B1A4;
    case 0x7F24B1A8u: goto label_7F24B1A8;
    case 0x7F24B1ACu: goto label_7F24B1AC;
    case 0x7F24B1B0u: goto label_7F24B1B0;
    case 0x7F24B1B4u: goto label_7F24B1B4;
    case 0x7F24B1B8u: goto label_7F24B1B8;
    case 0x7F24B1BCu: goto label_7F24B1BC;
    case 0x7F24B1C0u: goto label_7F24B1C0;
    case 0x7F24B1C4u: goto label_7F24B1C4;
    case 0x7F24B1C8u: goto label_7F24B1C8;
    case 0x7F24B1CCu: goto label_7F24B1CC;
    case 0x7F24B1D0u: goto label_7F24B1D0;
    case 0x7F24B1D4u: goto label_7F24B1D4;
    case 0x7F24B1D8u: goto label_7F24B1D8;
    case 0x7F24B1DCu: goto label_7F24B1DC;
    case 0x7F24B1E0u: goto label_7F24B1E0;
    case 0x7F24B1E4u: goto label_7F24B1E4;
    case 0x7F24B1E8u: goto label_7F24B1E8;
    case 0x7F24B1ECu: goto label_7F24B1EC;
    case 0x7F24B1F0u: goto label_7F24B1F0;
    case 0x7F24B1F4u: goto label_7F24B1F4;
    case 0x7F24B1F8u: goto label_7F24B1F8;
    case 0x7F24B1FCu: goto label_7F24B1FC;
    case 0x7F24B200u: goto label_7F24B200;
    case 0x7F24B204u: goto label_7F24B204;
    case 0x7F24B208u: goto label_7F24B208;
    case 0x7F24B20Cu: goto label_7F24B20C;
    case 0x7F24B210u: goto label_7F24B210;
    case 0x7F24B214u: goto label_7F24B214;
    case 0x7F24B218u: goto label_7F24B218;
    case 0x7F24B21Cu: goto label_7F24B21C;
    case 0x7F24B220u: goto label_7F24B220;
    case 0x7F24B224u: goto label_7F24B224;
    case 0x7F24B228u: goto label_7F24B228;
    case 0x7F24B22Cu: goto label_7F24B22C;
    case 0x7F24B230u: goto label_7F24B230;
    case 0x7F24B234u: goto label_7F24B234;
    case 0x7F24B238u: goto label_7F24B238;
    case 0x7F24B23Cu: goto label_7F24B23C;
    case 0x7F24B240u: goto label_7F24B240;
    case 0x7F24B244u: goto label_7F24B244;
    case 0x7F24B248u: goto label_7F24B248;
    case 0x7F24B24Cu: goto label_7F24B24C;
    case 0x7F24B250u: goto label_7F24B250;
    case 0x7F24B254u: goto label_7F24B254;
    case 0x7F24B258u: goto label_7F24B258;
    case 0x7F24B25Cu: goto label_7F24B25C;
    case 0x7F24B260u: goto label_7F24B260;
    case 0x7F24B264u: goto label_7F24B264;
    case 0x7F24B268u: goto label_7F24B268;
    case 0x7F24B26Cu: goto label_7F24B26C;
    case 0x7F24B270u: goto label_7F24B270;
    case 0x7F24B274u: goto label_7F24B274;
    case 0x7F24B278u: goto label_7F24B278;
    case 0x7F24B27Cu: goto label_7F24B27C;
    case 0x7F24B280u: goto label_7F24B280;
    case 0x7F24B284u: goto label_7F24B284;
    case 0x7F24B288u: goto label_7F24B288;
    case 0x7F24B28Cu: goto label_7F24B28C;
    case 0x7F24B290u: goto label_7F24B290;
    case 0x7F24B294u: goto label_7F24B294;
    case 0x7F24B298u: goto label_7F24B298;
    case 0x7F24B29Cu: goto label_7F24B29C;
    case 0x7F24B2A0u: goto label_7F24B2A0;
    case 0x7F24B2A4u: goto label_7F24B2A4;
    case 0x7F24B2A8u: goto label_7F24B2A8;
    case 0x7F24B2ACu: goto label_7F24B2AC;
    case 0x7F24B2B0u: goto label_7F24B2B0;
    case 0x7F24B2B4u: goto label_7F24B2B4;
    case 0x7F24B2B8u: goto label_7F24B2B8;
    case 0x7F24B2BCu: goto label_7F24B2BC;
    case 0x7F24B2C0u: goto label_7F24B2C0;
    case 0x7F24B2C4u: goto label_7F24B2C4;
    case 0x7F24B2C8u: goto label_7F24B2C8;
    case 0x7F24B2CCu: goto label_7F24B2CC;
    case 0x7F24B2D0u: goto label_7F24B2D0;
    case 0x7F24B2D4u: goto label_7F24B2D4;
    case 0x7F24B2D8u: goto label_7F24B2D8;
    case 0x7F24B2DCu: goto label_7F24B2DC;
    case 0x7F24B2E0u: goto label_7F24B2E0;
    case 0x7F24B2E4u: goto label_7F24B2E4;
    case 0x7F24B2E8u: goto label_7F24B2E8;
    case 0x7F24B2ECu: goto label_7F24B2EC;
    case 0x7F24B2F0u: goto label_7F24B2F0;
    case 0x7F24B2F4u: goto label_7F24B2F4;
    case 0x7F24B2F8u: goto label_7F24B2F8;
    case 0x7F24B2FCu: goto label_7F24B2FC;
    case 0x7F24B300u: goto label_7F24B300;
    case 0x7F24B304u: goto label_7F24B304;
    case 0x7F24B308u: goto label_7F24B308;
    case 0x7F24B30Cu: goto label_7F24B30C;
    case 0x7F24B310u: goto label_7F24B310;
    case 0x7F24B314u: goto label_7F24B314;
    case 0x7F24B318u: goto label_7F24B318;
    case 0x7F24B31Cu: goto label_7F24B31C;
    case 0x7F24B320u: goto label_7F24B320;
    case 0x7F24B324u: goto label_7F24B324;
    case 0x7F24B328u: goto label_7F24B328;
    case 0x7F24B32Cu: goto label_7F24B32C;
    case 0x7F24B330u: goto label_7F24B330;
    case 0x7F24B334u: goto label_7F24B334;
    case 0x7F24B338u: goto label_7F24B338;
    case 0x7F24B33Cu: goto label_7F24B33C;
    case 0x7F24B340u: goto label_7F24B340;
    case 0x7F24B344u: goto label_7F24B344;
    case 0x7F24B348u: goto label_7F24B348;
    case 0x7F24B34Cu: goto label_7F24B34C;
    case 0x7F24B350u: goto label_7F24B350;
    case 0x7F24B354u: goto label_7F24B354;
    case 0x7F24B358u: goto label_7F24B358;
    case 0x7F24B35Cu: goto label_7F24B35C;
    case 0x7F24B360u: goto label_7F24B360;
    case 0x7F24B364u: goto label_7F24B364;
    case 0x7F24B368u: goto label_7F24B368;
    case 0x7F24B36Cu: goto label_7F24B36C;
    case 0x7F24B370u: goto label_7F24B370;
    case 0x7F24B374u: goto label_7F24B374;
    case 0x7F24B378u: goto label_7F24B378;
    case 0x7F24B37Cu: goto label_7F24B37C;
    case 0x7F24B380u: goto label_7F24B380;
    case 0x7F24B384u: goto label_7F24B384;
    case 0x7F24B388u: goto label_7F24B388;
    case 0x7F24B38Cu: goto label_7F24B38C;
    case 0x7F24B390u: goto label_7F24B390;
    case 0x7F24B394u: goto label_7F24B394;
    case 0x7F24B398u: goto label_7F24B398;
    case 0x7F24B39Cu: goto label_7F24B39C;
    case 0x7F24B3A0u: goto label_7F24B3A0;
    case 0x7F24B3A4u: goto label_7F24B3A4;
    case 0x7F24B3A8u: goto label_7F24B3A8;
    case 0x7F24B3ACu: goto label_7F24B3AC;
    case 0x7F24B3B0u: goto label_7F24B3B0;
    case 0x7F24B3B4u: goto label_7F24B3B4;
    case 0x7F24B3B8u: goto label_7F24B3B8;
    case 0x7F24B3BCu: goto label_7F24B3BC;
    case 0x7F24B3C0u: goto label_7F24B3C0;
    case 0x7F24B3C4u: goto label_7F24B3C4;
    case 0x7F24B3C8u: goto label_7F24B3C8;
    case 0x7F24B3CCu: goto label_7F24B3CC;
    case 0x7F24B3D0u: goto label_7F24B3D0;
    case 0x7F24B3D4u: goto label_7F24B3D4;
    case 0x7F24B3D8u: goto label_7F24B3D8;
    case 0x7F24B3DCu: goto label_7F24B3DC;
    case 0x7F24B3E0u: goto label_7F24B3E0;
    case 0x7F24B3E4u: goto label_7F24B3E4;
    case 0x7F24B3E8u: goto label_7F24B3E8;
    case 0x7F24B3ECu: goto label_7F24B3EC;
    case 0x7F24B3F0u: goto label_7F24B3F0;
    case 0x7F24B3F4u: goto label_7F24B3F4;
    case 0x7F24B3F8u: goto label_7F24B3F8;
    case 0x7F24B3FCu: goto label_7F24B3FC;
    case 0x7F24B400u: goto label_7F24B400;
    case 0x7F24B404u: goto label_7F24B404;
    case 0x7F24B408u: goto label_7F24B408;
    case 0x7F24B40Cu: goto label_7F24B40C;
    case 0x7F24B410u: goto label_7F24B410;
    case 0x7F24B414u: goto label_7F24B414;
    case 0x7F24B418u: goto label_7F24B418;
    case 0x7F24B41Cu: goto label_7F24B41C;
    case 0x7F24B420u: goto label_7F24B420;
    case 0x7F24B424u: goto label_7F24B424;
    case 0x7F24B428u: goto label_7F24B428;
    case 0x7F24B42Cu: goto label_7F24B42C;
    case 0x7F24B430u: goto label_7F24B430;
    case 0x7F24B434u: goto label_7F24B434;
    case 0x7F24B438u: goto label_7F24B438;
    case 0x7F24B43Cu: goto label_7F24B43C;
    case 0x7F24B440u: goto label_7F24B440;
    case 0x7F24B444u: goto label_7F24B444;
    case 0x7F24B448u: goto label_7F24B448;
    case 0x7F24B44Cu: goto label_7F24B44C;
    case 0x7F24B450u: goto label_7F24B450;
    case 0x7F24B454u: goto label_7F24B454;
    case 0x7F24B458u: goto label_7F24B458;
    case 0x7F24B45Cu: goto label_7F24B45C;
    case 0x7F24B460u: goto label_7F24B460;
    case 0x7F24B464u: goto label_7F24B464;
    case 0x7F24B468u: goto label_7F24B468;
    case 0x7F24B46Cu: goto label_7F24B46C;
    case 0x7F24B470u: goto label_7F24B470;
    case 0x7F24B474u: goto label_7F24B474;
    case 0x7F24B478u: goto label_7F24B478;
    case 0x7F24B47Cu: goto label_7F24B47C;
    case 0x7F24B480u: goto label_7F24B480;
    case 0x7F24B484u: goto label_7F24B484;
    case 0x7F24B488u: goto label_7F24B488;
    case 0x7F24B48Cu: goto label_7F24B48C;
    case 0x7F24B490u: goto label_7F24B490;
    case 0x7F24B494u: goto label_7F24B494;
    case 0x7F24B498u: goto label_7F24B498;
    case 0x7F24B49Cu: goto label_7F24B49C;
    case 0x7F24B4A0u: goto label_7F24B4A0;
    case 0x7F24B4A4u: goto label_7F24B4A4;
    case 0x7F24B4A8u: goto label_7F24B4A8;
    case 0x7F24B4ACu: goto label_7F24B4AC;
    case 0x7F24B4B0u: goto label_7F24B4B0;
    case 0x7F24B4B4u: goto label_7F24B4B4;
    case 0x7F24B4B8u: goto label_7F24B4B8;
    case 0x7F24B4BCu: goto label_7F24B4BC;
    case 0x7F24B4C0u: goto label_7F24B4C0;
    case 0x7F24B4C4u: goto label_7F24B4C4;
    case 0x7F24B4C8u: goto label_7F24B4C8;
    case 0x7F24B4CCu: goto label_7F24B4CC;
    case 0x7F24B4D0u: goto label_7F24B4D0;
    case 0x7F24B4D4u: goto label_7F24B4D4;
    case 0x7F24B4D8u: goto label_7F24B4D8;
    case 0x7F24B4DCu: goto label_7F24B4DC;
    case 0x7F24B4E0u: goto label_7F24B4E0;
    case 0x7F24B4E4u: goto label_7F24B4E4;
    case 0x7F24B4E8u: goto label_7F24B4E8;
    case 0x7F24B4ECu: goto label_7F24B4EC;
    case 0x7F24B4F0u: goto label_7F24B4F0;
    case 0x7F24B4F4u: goto label_7F24B4F4;
    case 0x7F24B4F8u: goto label_7F24B4F8;
    case 0x7F24B4FCu: goto label_7F24B4FC;
    case 0x7F24B500u: goto label_7F24B500;
    case 0x7F24B504u: goto label_7F24B504;
    case 0x7F24B508u: goto label_7F24B508;
    case 0x7F24B50Cu: goto label_7F24B50C;
    case 0x7F24B510u: goto label_7F24B510;
    case 0x7F24B514u: goto label_7F24B514;
    case 0x7F24B518u: goto label_7F24B518;
    case 0x7F24B51Cu: goto label_7F24B51C;
    case 0x7F24B520u: goto label_7F24B520;
    case 0x7F24B524u: goto label_7F24B524;
    case 0x7F24B528u: goto label_7F24B528;
    case 0x7F24B52Cu: goto label_7F24B52C;
    case 0x7F24B530u: goto label_7F24B530;
    case 0x7F24B534u: goto label_7F24B534;
    case 0x7F24B538u: goto label_7F24B538;
    case 0x7F24B53Cu: goto label_7F24B53C;
    case 0x7F24B540u: goto label_7F24B540;
    case 0x7F24B544u: goto label_7F24B544;
    case 0x7F24B548u: goto label_7F24B548;
    case 0x7F24B54Cu: goto label_7F24B54C;
    case 0x7F24B550u: goto label_7F24B550;
    case 0x7F24B554u: goto label_7F24B554;
    case 0x7F24B558u: goto label_7F24B558;
    case 0x7F24B55Cu: goto label_7F24B55C;
    case 0x7F24B560u: goto label_7F24B560;
    case 0x7F24B564u: goto label_7F24B564;
    case 0x7F24B568u: goto label_7F24B568;
    case 0x7F24B56Cu: goto label_7F24B56C;
    case 0x7F24B570u: goto label_7F24B570;
    case 0x7F24B574u: goto label_7F24B574;
    case 0x7F24B578u: goto label_7F24B578;
    case 0x7F24B57Cu: goto label_7F24B57C;
    case 0x7F24B580u: goto label_7F24B580;
    case 0x7F24B584u: goto label_7F24B584;
    case 0x7F24B588u: goto label_7F24B588;
    case 0x7F24B58Cu: goto label_7F24B58C;
    case 0x7F24B590u: goto label_7F24B590;
    case 0x7F24B594u: goto label_7F24B594;
    case 0x7F24B598u: goto label_7F24B598;
    case 0x7F24B59Cu: goto label_7F24B59C;
    case 0x7F24B5A0u: goto label_7F24B5A0;
    case 0x7F24B5A4u: goto label_7F24B5A4;
    case 0x7F24B5A8u: goto label_7F24B5A8;
    case 0x7F24B5ACu: goto label_7F24B5AC;
    case 0x7F24B5B0u: goto label_7F24B5B0;
    case 0x7F24B5B4u: goto label_7F24B5B4;
    case 0x7F24B5B8u: goto label_7F24B5B8;
    case 0x7F24B5BCu: goto label_7F24B5BC;
    case 0x7F24B5C0u: goto label_7F24B5C0;
    case 0x7F24B5C4u: goto label_7F24B5C4;
    case 0x7F24B5C8u: goto label_7F24B5C8;
    case 0x7F24B5CCu: goto label_7F24B5CC;
    case 0x7F24B5D0u: goto label_7F24B5D0;
    case 0x7F24B5D4u: goto label_7F24B5D4;
    case 0x7F24B5D8u: goto label_7F24B5D8;
    case 0x7F24B5DCu: goto label_7F24B5DC;
    case 0x7F24B5E0u: goto label_7F24B5E0;
    case 0x7F24B5E4u: goto label_7F24B5E4;
    case 0x7F24B5E8u: goto label_7F24B5E8;
    case 0x7F24B5ECu: goto label_7F24B5EC;
    case 0x7F24B5F0u: goto label_7F24B5F0;
    case 0x7F24B5F4u: goto label_7F24B5F4;
    case 0x7F24B5F8u: goto label_7F24B5F8;
    case 0x7F24B5FCu: goto label_7F24B5FC;
    case 0x7F24B600u: goto label_7F24B600;
    case 0x7F24B604u: goto label_7F24B604;
    case 0x7F24B608u: goto label_7F24B608;
    case 0x7F24B60Cu: goto label_7F24B60C;
    case 0x7F24B610u: goto label_7F24B610;
    case 0x7F24B614u: goto label_7F24B614;
    case 0x7F24B618u: goto label_7F24B618;
    case 0x7F24B61Cu: goto label_7F24B61C;
    case 0x7F24B620u: goto label_7F24B620;
    case 0x7F24B624u: goto label_7F24B624;
    case 0x7F24B628u: goto label_7F24B628;
    case 0x7F24B62Cu: goto label_7F24B62C;
    case 0x7F24B630u: goto label_7F24B630;
    case 0x7F24B634u: goto label_7F24B634;
    case 0x7F24B638u: goto label_7F24B638;
    case 0x7F24B63Cu: goto label_7F24B63C;
    case 0x7F24B640u: goto label_7F24B640;
    case 0x7F24B644u: goto label_7F24B644;
    case 0x7F24B648u: goto label_7F24B648;
    case 0x7F24B64Cu: goto label_7F24B64C;
    case 0x7F24B650u: goto label_7F24B650;
    case 0x7F24B654u: goto label_7F24B654;
    case 0x7F24B658u: goto label_7F24B658;
    case 0x7F24B65Cu: goto label_7F24B65C;
    case 0x7F24B660u: goto label_7F24B660;
    case 0x7F24B664u: goto label_7F24B664;
    case 0x7F24B668u: goto label_7F24B668;
    case 0x7F24B66Cu: goto label_7F24B66C;
    case 0x7F24B670u: goto label_7F24B670;
    case 0x7F24B674u: goto label_7F24B674;
    case 0x7F24B678u: goto label_7F24B678;
    case 0x7F24B67Cu: goto label_7F24B67C;
    case 0x7F24B680u: goto label_7F24B680;
    case 0x7F24B684u: goto label_7F24B684;
    case 0x7F24B688u: goto label_7F24B688;
    case 0x7F24B68Cu: goto label_7F24B68C;
    case 0x7F24B690u: goto label_7F24B690;
    case 0x7F24B694u: goto label_7F24B694;
    case 0x7F24B698u: goto label_7F24B698;
    case 0x7F24B69Cu: goto label_7F24B69C;
    case 0x7F24B6A0u: goto label_7F24B6A0;
    case 0x7F24B6A4u: goto label_7F24B6A4;
    case 0x7F24B6A8u: goto label_7F24B6A8;
    case 0x7F24B6ACu: goto label_7F24B6AC;
    case 0x7F24B6B0u: goto label_7F24B6B0;
    case 0x7F24B6B4u: goto label_7F24B6B4;
    case 0x7F24B6B8u: goto label_7F24B6B8;
    case 0x7F24B6BCu: goto label_7F24B6BC;
    case 0x7F24B6C0u: goto label_7F24B6C0;
    case 0x7F24B6C4u: goto label_7F24B6C4;
    case 0x7F24B6C8u: goto label_7F24B6C8;
    case 0x7F24B6CCu: goto label_7F24B6CC;
    case 0x7F24B6D0u: goto label_7F24B6D0;
    case 0x7F24B6D4u: goto label_7F24B6D4;
    case 0x7F24B6D8u: goto label_7F24B6D8;
    case 0x7F24B6DCu: goto label_7F24B6DC;
    case 0x7F24B6E0u: goto label_7F24B6E0;
    case 0x7F24B6E4u: goto label_7F24B6E4;
    case 0x7F24B6E8u: goto label_7F24B6E8;
    case 0x7F24B6ECu: goto label_7F24B6EC;
    case 0x7F24B6F0u: goto label_7F24B6F0;
    case 0x7F24B6F4u: goto label_7F24B6F4;
    case 0x7F24B6F8u: goto label_7F24B6F8;
    case 0x7F24B6FCu: goto label_7F24B6FC;
    case 0x7F24B700u: goto label_7F24B700;
    case 0x7F24B704u: goto label_7F24B704;
    case 0x7F24B708u: goto label_7F24B708;
    case 0x7F24B70Cu: goto label_7F24B70C;
    case 0x7F24B710u: goto label_7F24B710;
    case 0x7F24B714u: goto label_7F24B714;
    case 0x7F24B718u: goto label_7F24B718;
    case 0x7F24B71Cu: goto label_7F24B71C;
    case 0x7F24B720u: goto label_7F24B720;
    case 0x7F24B724u: goto label_7F24B724;
    case 0x7F24B728u: goto label_7F24B728;
    case 0x7F24B72Cu: goto label_7F24B72C;
    case 0x7F24B730u: goto label_7F24B730;
    case 0x7F24B734u: goto label_7F24B734;
    case 0x7F24B738u: goto label_7F24B738;
    case 0x7F24B73Cu: goto label_7F24B73C;
    case 0x7F24B740u: goto label_7F24B740;
    case 0x7F24B744u: goto label_7F24B744;
    case 0x7F24B748u: goto label_7F24B748;
    case 0x7F24B74Cu: goto label_7F24B74C;
    case 0x7F24B750u: goto label_7F24B750;
    case 0x7F24B754u: goto label_7F24B754;
    case 0x7F24B758u: goto label_7F24B758;
    case 0x7F24B75Cu: goto label_7F24B75C;
    case 0x7F24B760u: goto label_7F24B760;
    case 0x7F24B764u: goto label_7F24B764;
    case 0x7F24B768u: goto label_7F24B768;
    case 0x7F24B76Cu: goto label_7F24B76C;
    case 0x7F24B770u: goto label_7F24B770;
    case 0x7F24B774u: goto label_7F24B774;
    case 0x7F24B778u: goto label_7F24B778;
    case 0x7F24B77Cu: goto label_7F24B77C;
    case 0x7F24B780u: goto label_7F24B780;
    case 0x7F24B784u: goto label_7F24B784;
    case 0x7F24B788u: goto label_7F24B788;
    case 0x7F24B78Cu: goto label_7F24B78C;
    case 0x7F24B790u: goto label_7F24B790;
    case 0x7F24B794u: goto label_7F24B794;
    case 0x7F24B798u: goto label_7F24B798;
    case 0x7F24B79Cu: goto label_7F24B79C;
    case 0x7F24B7A0u: goto label_7F24B7A0;
    case 0x7F24B7A4u: goto label_7F24B7A4;
    case 0x7F24B7A8u: goto label_7F24B7A8;
    case 0x7F24B7ACu: goto label_7F24B7AC;
    case 0x7F24B7B0u: goto label_7F24B7B0;
    case 0x7F24B7B4u: goto label_7F24B7B4;
    case 0x7F24B7B8u: goto label_7F24B7B8;
    case 0x7F24B7BCu: goto label_7F24B7BC;
    case 0x7F24B7C0u: goto label_7F24B7C0;
    case 0x7F24B7C4u: goto label_7F24B7C4;
    case 0x7F24B7C8u: goto label_7F24B7C8;
    case 0x7F24B7CCu: goto label_7F24B7CC;
    case 0x7F24B7D0u: goto label_7F24B7D0;
    case 0x7F24B7D4u: goto label_7F24B7D4;
    case 0x7F24B7D8u: goto label_7F24B7D8;
    case 0x7F24B7DCu: goto label_7F24B7DC;
    case 0x7F24B7E0u: goto label_7F24B7E0;
    case 0x7F24B7E4u: goto label_7F24B7E4;
    case 0x7F24B7E8u: goto label_7F24B7E8;
    case 0x7F24B7ECu: goto label_7F24B7EC;
    case 0x7F24B7F0u: goto label_7F24B7F0;
    case 0x7F24B7F4u: goto label_7F24B7F4;
    case 0x7F24B7F8u: goto label_7F24B7F8;
    case 0x7F24B7FCu: goto label_7F24B7FC;
    case 0x7F24B800u: goto label_7F24B800;
    case 0x7F24B804u: goto label_7F24B804;
    case 0x7F24B808u: goto label_7F24B808;
    case 0x7F24B80Cu: goto label_7F24B80C;
    case 0x7F24B810u: goto label_7F24B810;
    case 0x7F24B814u: goto label_7F24B814;
    case 0x7F24B818u: goto label_7F24B818;
    case 0x7F24B81Cu: goto label_7F24B81C;
    case 0x7F24B820u: goto label_7F24B820;
    case 0x7F24B824u: goto label_7F24B824;
    case 0x7F24B828u: goto label_7F24B828;
    case 0x7F24B82Cu: goto label_7F24B82C;
    case 0x7F24B830u: goto label_7F24B830;
    case 0x7F24B834u: goto label_7F24B834;
    case 0x7F24B838u: goto label_7F24B838;
    case 0x7F24B83Cu: goto label_7F24B83C;
    case 0x7F24B840u: goto label_7F24B840;
    case 0x7F24B844u: goto label_7F24B844;
    case 0x7F24B848u: goto label_7F24B848;
    case 0x7F24B84Cu: goto label_7F24B84C;
    case 0x7F24B850u: goto label_7F24B850;
    case 0x7F24B854u: goto label_7F24B854;
    case 0x7F24B858u: goto label_7F24B858;
    case 0x7F24B85Cu: goto label_7F24B85C;
    case 0x7F24B860u: goto label_7F24B860;
    case 0x7F24B864u: goto label_7F24B864;
    case 0x7F24B868u: goto label_7F24B868;
    case 0x7F24B86Cu: goto label_7F24B86C;
    case 0x7F24B870u: goto label_7F24B870;
    case 0x7F24B874u: goto label_7F24B874;
    case 0x7F24B878u: goto label_7F24B878;
    case 0x7F24B87Cu: goto label_7F24B87C;
    case 0x7F24B880u: goto label_7F24B880;
    case 0x7F24B884u: goto label_7F24B884;
    case 0x7F24B888u: goto label_7F24B888;
    case 0x7F24B88Cu: goto label_7F24B88C;
    case 0x7F24B890u: goto label_7F24B890;
    case 0x7F24B894u: goto label_7F24B894;
    case 0x7F24B898u: goto label_7F24B898;
    case 0x7F24B89Cu: goto label_7F24B89C;
    case 0x7F24B8A0u: goto label_7F24B8A0;
    case 0x7F24B8A4u: goto label_7F24B8A4;
    case 0x7F24B8A8u: goto label_7F24B8A8;
    case 0x7F24B8ACu: goto label_7F24B8AC;
    case 0x7F24B8B0u: goto label_7F24B8B0;
    case 0x7F24B8B4u: goto label_7F24B8B4;
    case 0x7F24B8B8u: goto label_7F24B8B8;
    case 0x7F24B8BCu: goto label_7F24B8BC;
    case 0x7F24B8C0u: goto label_7F24B8C0;
    case 0x7F24B8C4u: goto label_7F24B8C4;
    case 0x7F24B8C8u: goto label_7F24B8C8;
    case 0x7F24B8CCu: goto label_7F24B8CC;
    case 0x7F24B8D0u: goto label_7F24B8D0;
    case 0x7F24B8D4u: goto label_7F24B8D4;
    case 0x7F24B8D8u: goto label_7F24B8D8;
    case 0x7F24B8DCu: goto label_7F24B8DC;
    case 0x7F24B8E0u: goto label_7F24B8E0;
    case 0x7F24B8E4u: goto label_7F24B8E4;
    case 0x7F24B8E8u: goto label_7F24B8E8;
    case 0x7F24B8ECu: goto label_7F24B8EC;
    case 0x7F24B8F0u: goto label_7F24B8F0;
    case 0x7F24B8F4u: goto label_7F24B8F4;
    case 0x7F24B8F8u: goto label_7F24B8F8;
    case 0x7F24B8FCu: goto label_7F24B8FC;
    case 0x7F24B900u: goto label_7F24B900;
    case 0x7F24B904u: goto label_7F24B904;
    case 0x7F24B908u: goto label_7F24B908;
    case 0x7F24B90Cu: goto label_7F24B90C;
    case 0x7F24B910u: goto label_7F24B910;
    case 0x7F24B914u: goto label_7F24B914;
    case 0x7F24B918u: goto label_7F24B918;
    case 0x7F24B91Cu: goto label_7F24B91C;
    case 0x7F24B920u: goto label_7F24B920;
    case 0x7F24B924u: goto label_7F24B924;
    case 0x7F24B928u: goto label_7F24B928;
    case 0x7F24B92Cu: goto label_7F24B92C;
    case 0x7F24B930u: goto label_7F24B930;
    case 0x7F24B934u: goto label_7F24B934;
    case 0x7F24B938u: goto label_7F24B938;
    case 0x7F24B93Cu: goto label_7F24B93C;
    case 0x7F24B940u: goto label_7F24B940;
    case 0x7F24B944u: goto label_7F24B944;
    case 0x7F24B948u: goto label_7F24B948;
    case 0x7F24B94Cu: goto label_7F24B94C;
    case 0x7F24B950u: goto label_7F24B950;
    case 0x7F24B954u: goto label_7F24B954;
    case 0x7F24B958u: goto label_7F24B958;
    case 0x7F24B95Cu: goto label_7F24B95C;
    case 0x7F24B960u: goto label_7F24B960;
    case 0x7F24B964u: goto label_7F24B964;
    case 0x7F24B968u: goto label_7F24B968;
    case 0x7F24B96Cu: goto label_7F24B96C;
    case 0x7F24B970u: goto label_7F24B970;
    case 0x7F24B974u: goto label_7F24B974;
    case 0x7F24B978u: goto label_7F24B978;
    case 0x7F24B97Cu: goto label_7F24B97C;
    case 0x7F24B980u: goto label_7F24B980;
    case 0x7F24B984u: goto label_7F24B984;
    case 0x7F24B988u: goto label_7F24B988;
    case 0x7F24B98Cu: goto label_7F24B98C;
    case 0x7F24B990u: goto label_7F24B990;
    case 0x7F24B994u: goto label_7F24B994;
    case 0x7F24B998u: goto label_7F24B998;
    case 0x7F24B99Cu: goto label_7F24B99C;
    case 0x7F24B9A0u: goto label_7F24B9A0;
    case 0x7F24B9A4u: goto label_7F24B9A4;
    case 0x7F24B9A8u: goto label_7F24B9A8;
    case 0x7F24B9ACu: goto label_7F24B9AC;
    case 0x7F24B9B0u: goto label_7F24B9B0;
    case 0x7F24B9B4u: goto label_7F24B9B4;
    case 0x7F24B9B8u: goto label_7F24B9B8;
    case 0x7F24B9BCu: goto label_7F24B9BC;
    case 0x7F24B9C0u: goto label_7F24B9C0;
    case 0x7F24B9C4u: goto label_7F24B9C4;
    case 0x7F24B9C8u: goto label_7F24B9C8;
    case 0x7F24B9CCu: goto label_7F24B9CC;
    case 0x7F24B9D0u: goto label_7F24B9D0;
    case 0x7F24B9D4u: goto label_7F24B9D4;
    case 0x7F24B9D8u: goto label_7F24B9D8;
    case 0x7F24B9DCu: goto label_7F24B9DC;
    case 0x7F24B9E0u: goto label_7F24B9E0;
    case 0x7F24B9E4u: goto label_7F24B9E4;
    case 0x7F24B9E8u: goto label_7F24B9E8;
    case 0x7F24B9ECu: goto label_7F24B9EC;
    case 0x7F24B9F0u: goto label_7F24B9F0;
    case 0x7F24B9F4u: goto label_7F24B9F4;
    case 0x7F24B9F8u: goto label_7F24B9F8;
    case 0x7F24B9FCu: goto label_7F24B9FC;
    case 0x7F24BA00u: goto label_7F24BA00;
    case 0x7F24BA04u: goto label_7F24BA04;
    case 0x7F24BA08u: goto label_7F24BA08;
    case 0x7F24BA0Cu: goto label_7F24BA0C;
    case 0x7F24BA10u: goto label_7F24BA10;
    case 0x7F24BA14u: goto label_7F24BA14;
    case 0x7F24BA18u: goto label_7F24BA18;
    case 0x7F24BA1Cu: goto label_7F24BA1C;
    case 0x7F24BA20u: goto label_7F24BA20;
    case 0x7F24BA24u: goto label_7F24BA24;
    case 0x7F24BA28u: goto label_7F24BA28;
    case 0x7F24BA2Cu: goto label_7F24BA2C;
    case 0x7F24BA30u: goto label_7F24BA30;
    case 0x7F24BA34u: goto label_7F24BA34;
    case 0x7F24BA38u: goto label_7F24BA38;
    case 0x7F24BA3Cu: goto label_7F24BA3C;
    case 0x7F24BA40u: goto label_7F24BA40;
    case 0x7F24BA44u: goto label_7F24BA44;
    case 0x7F24BA48u: goto label_7F24BA48;
    case 0x7F24BA4Cu: goto label_7F24BA4C;
    case 0x7F24BA50u: goto label_7F24BA50;
    case 0x7F24BA54u: goto label_7F24BA54;
    case 0x7F24BA58u: goto label_7F24BA58;
    case 0x7F24BA5Cu: goto label_7F24BA5C;
    case 0x7F24BA60u: goto label_7F24BA60;
    case 0x7F24BA64u: goto label_7F24BA64;
    case 0x7F24BA68u: goto label_7F24BA68;
    case 0x7F24BA6Cu: goto label_7F24BA6C;
    case 0x7F24BA70u: goto label_7F24BA70;
    case 0x7F24BA74u: goto label_7F24BA74;
    case 0x7F24BA78u: goto label_7F24BA78;
    case 0x7F24BA7Cu: goto label_7F24BA7C;
    case 0x7F24BA80u: goto label_7F24BA80;
    case 0x7F24BA84u: goto label_7F24BA84;
    case 0x7F24BA88u: goto label_7F24BA88;
    case 0x7F24BA8Cu: goto label_7F24BA8C;
    case 0x7F24BA90u: goto label_7F24BA90;
    case 0x7F24BA94u: goto label_7F24BA94;
    case 0x7F24BA98u: goto label_7F24BA98;
    case 0x7F24BA9Cu: goto label_7F24BA9C;
    case 0x7F24BAA0u: goto label_7F24BAA0;
    case 0x7F24BAA4u: goto label_7F24BAA4;
    case 0x7F24BAA8u: goto label_7F24BAA8;
    case 0x7F24BAACu: goto label_7F24BAAC;
    case 0x7F24BAB0u: goto label_7F24BAB0;
    case 0x7F24BAB4u: goto label_7F24BAB4;
    case 0x7F24BAB8u: goto label_7F24BAB8;
    case 0x7F24BABCu: goto label_7F24BABC;
    case 0x7F24BAC0u: goto label_7F24BAC0;
    case 0x7F24BAC4u: goto label_7F24BAC4;
    case 0x7F24BAC8u: goto label_7F24BAC8;
    case 0x7F24BACCu: goto label_7F24BACC;
    case 0x7F24BAD0u: goto label_7F24BAD0;
    case 0x7F24BAD4u: goto label_7F24BAD4;
    case 0x7F24BAD8u: goto label_7F24BAD8;
    case 0x7F24BADCu: goto label_7F24BADC;
    case 0x7F24BAE0u: goto label_7F24BAE0;
    case 0x7F24BAE4u: goto label_7F24BAE4;
    case 0x7F24BAE8u: goto label_7F24BAE8;
    case 0x7F24BAECu: goto label_7F24BAEC;
    case 0x7F24BAF0u: goto label_7F24BAF0;
    case 0x7F24BAF4u: goto label_7F24BAF4;
    case 0x7F24BAF8u: goto label_7F24BAF8;
    case 0x7F24BAFCu: goto label_7F24BAFC;
    case 0x7F24BB00u: goto label_7F24BB00;
    case 0x7F24BB04u: goto label_7F24BB04;
    case 0x7F24BB08u: goto label_7F24BB08;
    case 0x7F24BB0Cu: goto label_7F24BB0C;
    case 0x7F24BB10u: goto label_7F24BB10;
    case 0x7F24BB14u: goto label_7F24BB14;
    case 0x7F24BB18u: goto label_7F24BB18;
    case 0x7F24BB1Cu: goto label_7F24BB1C;
    case 0x7F24BB20u: goto label_7F24BB20;
    case 0x7F24BB24u: goto label_7F24BB24;
    case 0x7F24BB28u: goto label_7F24BB28;
    case 0x7F24BB2Cu: goto label_7F24BB2C;
    case 0x7F24BB30u: goto label_7F24BB30;
    case 0x7F24BB34u: goto label_7F24BB34;
    case 0x7F24BB38u: goto label_7F24BB38;
    case 0x7F24BB3Cu: goto label_7F24BB3C;
    case 0x7F24BB40u: goto label_7F24BB40;
    case 0x7F24BB44u: goto label_7F24BB44;
    case 0x7F24BB48u: goto label_7F24BB48;
    case 0x7F24BB4Cu: goto label_7F24BB4C;
    case 0x7F24BB50u: goto label_7F24BB50;
    case 0x7F24BB54u: goto label_7F24BB54;
    case 0x7F24BB58u: goto label_7F24BB58;
    case 0x7F24BB5Cu: goto label_7F24BB5C;
    case 0x7F24BB60u: goto label_7F24BB60;
    case 0x7F24BB64u: goto label_7F24BB64;
    case 0x7F24BB68u: goto label_7F24BB68;
    case 0x7F24BB6Cu: goto label_7F24BB6C;
    case 0x7F24BB70u: goto label_7F24BB70;
    case 0x7F24BB74u: goto label_7F24BB74;
    case 0x7F24BB78u: goto label_7F24BB78;
    case 0x7F24BB7Cu: goto label_7F24BB7C;
    case 0x7F24BB80u: goto label_7F24BB80;
    case 0x7F24BB84u: goto label_7F24BB84;
    case 0x7F24BB88u: goto label_7F24BB88;
    case 0x7F24BB8Cu: goto label_7F24BB8C;
    case 0x7F24BB90u: goto label_7F24BB90;
    case 0x7F24BB94u: goto label_7F24BB94;
    case 0x7F24BB98u: goto label_7F24BB98;
    case 0x7F24BB9Cu: goto label_7F24BB9C;
    case 0x7F24BBA0u: goto label_7F24BBA0;
    case 0x7F24BBA4u: goto label_7F24BBA4;
    case 0x7F24BBA8u: goto label_7F24BBA8;
    case 0x7F24BBACu: goto label_7F24BBAC;
    case 0x7F24BBB0u: goto label_7F24BBB0;
    case 0x7F24BBB4u: goto label_7F24BBB4;
    case 0x7F24BBB8u: goto label_7F24BBB8;
    case 0x7F24BBBCu: goto label_7F24BBBC;
    case 0x7F24BBC0u: goto label_7F24BBC0;
    case 0x7F24BBC4u: goto label_7F24BBC4;
    case 0x7F24BBC8u: goto label_7F24BBC8;
    case 0x7F24BBCCu: goto label_7F24BBCC;
    case 0x7F24BBD0u: goto label_7F24BBD0;
    case 0x7F24BBD4u: goto label_7F24BBD4;
    case 0x7F24BBD8u: goto label_7F24BBD8;
    case 0x7F24BBDCu: goto label_7F24BBDC;
    case 0x7F24BBE0u: goto label_7F24BBE0;
    case 0x7F24BBE4u: goto label_7F24BBE4;
    case 0x7F24BBE8u: goto label_7F24BBE8;
    case 0x7F24BBECu: goto label_7F24BBEC;
    case 0x7F24BBF0u: goto label_7F24BBF0;
    case 0x7F24BBF4u: goto label_7F24BBF4;
    case 0x7F24BBF8u: goto label_7F24BBF8;
    case 0x7F24BBFCu: goto label_7F24BBFC;
    case 0x7F24BC00u: goto label_7F24BC00;
    case 0x7F24BC04u: goto label_7F24BC04;
    case 0x7F24BC08u: goto label_7F24BC08;
    case 0x7F24BC0Cu: goto label_7F24BC0C;
    case 0x7F24BC10u: goto label_7F24BC10;
    case 0x7F24BC14u: goto label_7F24BC14;
    case 0x7F24BC18u: goto label_7F24BC18;
    case 0x7F24BC1Cu: goto label_7F24BC1C;
    case 0x7F24BC20u: goto label_7F24BC20;
    case 0x7F24BC24u: goto label_7F24BC24;
    case 0x7F24BC28u: goto label_7F24BC28;
    case 0x7F24BC2Cu: goto label_7F24BC2C;
    case 0x7F24BC30u: goto label_7F24BC30;
    case 0x7F24BC34u: goto label_7F24BC34;
    case 0x7F24BC38u: goto label_7F24BC38;
    case 0x7F24BC3Cu: goto label_7F24BC3C;
    case 0x7F24BC40u: goto label_7F24BC40;
    case 0x7F24BC44u: goto label_7F24BC44;
    case 0x7F24BC48u: goto label_7F24BC48;
    case 0x7F24BC4Cu: goto label_7F24BC4C;
    case 0x7F24BC50u: goto label_7F24BC50;
    case 0x7F24BC54u: goto label_7F24BC54;
    case 0x7F24BC58u: goto label_7F24BC58;
    case 0x7F24BC5Cu: goto label_7F24BC5C;
    case 0x7F24BC60u: goto label_7F24BC60;
    case 0x7F24BC64u: goto label_7F24BC64;
    case 0x7F24BC68u: goto label_7F24BC68;
    case 0x7F24BC6Cu: goto label_7F24BC6C;
    case 0x7F24BC70u: goto label_7F24BC70;
    case 0x7F24BC74u: goto label_7F24BC74;
    case 0x7F24BC78u: goto label_7F24BC78;
    case 0x7F24BC7Cu: goto label_7F24BC7C;
    case 0x7F24BC80u: goto label_7F24BC80;
    case 0x7F24BC84u: goto label_7F24BC84;
    case 0x7F24BC88u: goto label_7F24BC88;
    case 0x7F24BC8Cu: goto label_7F24BC8C;
    case 0x7F24BC90u: goto label_7F24BC90;
    case 0x7F24BC94u: goto label_7F24BC94;
    case 0x7F24BC98u: goto label_7F24BC98;
    case 0x7F24BC9Cu: goto label_7F24BC9C;
    case 0x7F24BCA0u: goto label_7F24BCA0;
    case 0x7F24BCA4u: goto label_7F24BCA4;
    case 0x7F24BCA8u: goto label_7F24BCA8;
    case 0x7F24BCACu: goto label_7F24BCAC;
    case 0x7F24BCB0u: goto label_7F24BCB0;
    case 0x7F24BCB4u: goto label_7F24BCB4;
    case 0x7F24BCB8u: goto label_7F24BCB8;
    case 0x7F24BCBCu: goto label_7F24BCBC;
    case 0x7F24BCC0u: goto label_7F24BCC0;
    case 0x7F24BCC4u: goto label_7F24BCC4;
    case 0x7F24BCC8u: goto label_7F24BCC8;
    case 0x7F24BCCCu: goto label_7F24BCCC;
    case 0x7F24BCD0u: goto label_7F24BCD0;
    case 0x7F24BCD4u: goto label_7F24BCD4;
    case 0x7F24BCD8u: goto label_7F24BCD8;
    case 0x7F24BCDCu: goto label_7F24BCDC;
    case 0x7F24BCE0u: goto label_7F24BCE0;
    case 0x7F24BCE4u: goto label_7F24BCE4;
    case 0x7F24BCE8u: goto label_7F24BCE8;
    case 0x7F24BCECu: goto label_7F24BCEC;
    case 0x7F24BCF0u: goto label_7F24BCF0;
    case 0x7F24BCF4u: goto label_7F24BCF4;
    case 0x7F24BCF8u: goto label_7F24BCF8;
    case 0x7F24BCFCu: goto label_7F24BCFC;
    case 0x7F24BD00u: goto label_7F24BD00;
    case 0x7F24BD04u: goto label_7F24BD04;
    case 0x7F24BD08u: goto label_7F24BD08;
    case 0x7F24BD0Cu: goto label_7F24BD0C;
    case 0x7F24BD10u: goto label_7F24BD10;
    case 0x7F24BD14u: goto label_7F24BD14;
    case 0x7F24BD18u: goto label_7F24BD18;
    case 0x7F24BD1Cu: goto label_7F24BD1C;
    case 0x7F24BD20u: goto label_7F24BD20;
    case 0x7F24BD24u: goto label_7F24BD24;
    case 0x7F24BD28u: goto label_7F24BD28;
    case 0x7F24BD2Cu: goto label_7F24BD2C;
    case 0x7F24BD30u: goto label_7F24BD30;
    case 0x7F24BD34u: goto label_7F24BD34;
    case 0x7F24BD38u: goto label_7F24BD38;
    case 0x7F24BD3Cu: goto label_7F24BD3C;
    case 0x7F24BD40u: goto label_7F24BD40;
    case 0x7F24BD44u: goto label_7F24BD44;
    case 0x7F24BD48u: goto label_7F24BD48;
    case 0x7F24BD4Cu: goto label_7F24BD4C;
    case 0x7F24BD50u: goto label_7F24BD50;
    case 0x7F24BD54u: goto label_7F24BD54;
    case 0x7F24BD58u: goto label_7F24BD58;
    case 0x7F24BD5Cu: goto label_7F24BD5C;
    case 0x7F24BD60u: goto label_7F24BD60;
    case 0x7F24BD64u: goto label_7F24BD64;
    case 0x7F24BD68u: goto label_7F24BD68;
    case 0x7F24BD6Cu: goto label_7F24BD6C;
    case 0x7F24BD70u: goto label_7F24BD70;
    case 0x7F24BD74u: goto label_7F24BD74;
    case 0x7F24BD78u: goto label_7F24BD78;
    case 0x7F24BD7Cu: goto label_7F24BD7C;
    case 0x7F24BD80u: goto label_7F24BD80;
    case 0x7F24BD84u: goto label_7F24BD84;
    case 0x7F24BD88u: goto label_7F24BD88;
    case 0x7F24BD8Cu: goto label_7F24BD8C;
    case 0x7F24BD90u: goto label_7F24BD90;
    case 0x7F24BD94u: goto label_7F24BD94;
    case 0x7F24BD98u: goto label_7F24BD98;
    case 0x7F24BD9Cu: goto label_7F24BD9C;
    case 0x7F24BDA0u: goto label_7F24BDA0;
    case 0x7F24BDA4u: goto label_7F24BDA4;
    case 0x7F24BDA8u: goto label_7F24BDA8;
    case 0x7F24BDACu: goto label_7F24BDAC;
    case 0x7F24BDB0u: goto label_7F24BDB0;
    case 0x7F24BDB4u: goto label_7F24BDB4;
    case 0x7F24BDB8u: goto label_7F24BDB8;
    case 0x7F24BDBCu: goto label_7F24BDBC;
    case 0x7F24BDC0u: goto label_7F24BDC0;
    case 0x7F24BDC4u: goto label_7F24BDC4;
    case 0x7F24BDC8u: goto label_7F24BDC8;
    case 0x7F24BDCCu: goto label_7F24BDCC;
    case 0x7F24BDD0u: goto label_7F24BDD0;
    case 0x7F24BDD4u: goto label_7F24BDD4;
    case 0x7F24BDD8u: goto label_7F24BDD8;
    case 0x7F24BDDCu: goto label_7F24BDDC;
    case 0x7F24BDE0u: goto label_7F24BDE0;
    case 0x7F24BDE4u: goto label_7F24BDE4;
    case 0x7F24BDE8u: goto label_7F24BDE8;
    case 0x7F24BDECu: goto label_7F24BDEC;
    case 0x7F24BDF0u: goto label_7F24BDF0;
    case 0x7F24BDF4u: goto label_7F24BDF4;
    case 0x7F24BDF8u: goto label_7F24BDF8;
    case 0x7F24BDFCu: goto label_7F24BDFC;
    case 0x7F24BE00u: goto label_7F24BE00;
    case 0x7F24BE04u: goto label_7F24BE04;
    case 0x7F24BE08u: goto label_7F24BE08;
    case 0x7F24BE0Cu: goto label_7F24BE0C;
    case 0x7F24BE10u: goto label_7F24BE10;
    case 0x7F24BE14u: goto label_7F24BE14;
    case 0x7F24BE18u: goto label_7F24BE18;
    case 0x7F24BE1Cu: goto label_7F24BE1C;
    case 0x7F24BE20u: goto label_7F24BE20;
    case 0x7F24BE24u: goto label_7F24BE24;
    case 0x7F24BE28u: goto label_7F24BE28;
    case 0x7F24BE2Cu: goto label_7F24BE2C;
    case 0x7F24BE30u: goto label_7F24BE30;
    case 0x7F24BE34u: goto label_7F24BE34;
    case 0x7F24BE38u: goto label_7F24BE38;
    case 0x7F24BE3Cu: goto label_7F24BE3C;
    case 0x7F24BE40u: goto label_7F24BE40;
    case 0x7F24BE44u: goto label_7F24BE44;
    case 0x7F24BE48u: goto label_7F24BE48;
    case 0x7F24BE4Cu: goto label_7F24BE4C;
    case 0x7F24BE50u: goto label_7F24BE50;
    case 0x7F24BE54u: goto label_7F24BE54;
    case 0x7F24BE58u: goto label_7F24BE58;
    case 0x7F24BE5Cu: goto label_7F24BE5C;
    case 0x7F24BE60u: goto label_7F24BE60;
    case 0x7F24BE64u: goto label_7F24BE64;
    case 0x7F24BE68u: goto label_7F24BE68;
    case 0x7F24BE6Cu: goto label_7F24BE6C;
    case 0x7F24BE70u: goto label_7F24BE70;
    case 0x7F24BE74u: goto label_7F24BE74;
    case 0x7F24BE78u: goto label_7F24BE78;
    case 0x7F24BE7Cu: goto label_7F24BE7C;
    case 0x7F24BE80u: goto label_7F24BE80;
    case 0x7F24BE84u: goto label_7F24BE84;
    case 0x7F24BE88u: goto label_7F24BE88;
    case 0x7F24BE8Cu: goto label_7F24BE8C;
    case 0x7F24BE90u: goto label_7F24BE90;
    case 0x7F24BE94u: goto label_7F24BE94;
    case 0x7F24BE98u: goto label_7F24BE98;
    case 0x7F24BE9Cu: goto label_7F24BE9C;
    case 0x7F24BEA0u: goto label_7F24BEA0;
    case 0x7F24BEA4u: goto label_7F24BEA4;
    case 0x7F24BEA8u: goto label_7F24BEA8;
    case 0x7F24BEACu: goto label_7F24BEAC;
    case 0x7F24BEB0u: goto label_7F24BEB0;
    case 0x7F24BEB4u: goto label_7F24BEB4;
    case 0x7F24BEB8u: goto label_7F24BEB8;
    case 0x7F24BEBCu: goto label_7F24BEBC;
    case 0x7F24BEC0u: goto label_7F24BEC0;
    case 0x7F24BEC4u: goto label_7F24BEC4;
    case 0x7F24BEC8u: goto label_7F24BEC8;
    case 0x7F24BECCu: goto label_7F24BECC;
    case 0x7F24BED0u: goto label_7F24BED0;
    case 0x7F24BED4u: goto label_7F24BED4;
    case 0x7F24BED8u: goto label_7F24BED8;
    case 0x7F24BEDCu: goto label_7F24BEDC;
    case 0x7F24BEE0u: goto label_7F24BEE0;
    case 0x7F24BEE4u: goto label_7F24BEE4;
    case 0x7F24BEE8u: goto label_7F24BEE8;
    case 0x7F24BEECu: goto label_7F24BEEC;
    case 0x7F24BEF0u: goto label_7F24BEF0;
    case 0x7F24BEF4u: goto label_7F24BEF4;
    case 0x7F24BEF8u: goto label_7F24BEF8;
    case 0x7F24BEFCu: goto label_7F24BEFC;
    case 0x7F24BF00u: goto label_7F24BF00;
    case 0x7F24BF04u: goto label_7F24BF04;
    case 0x7F24BF08u: goto label_7F24BF08;
    case 0x7F24BF0Cu: goto label_7F24BF0C;
    case 0x7F24BF10u: goto label_7F24BF10;
    case 0x7F24BF14u: goto label_7F24BF14;
    case 0x7F24BF18u: goto label_7F24BF18;
    case 0x7F24BF1Cu: goto label_7F24BF1C;
    case 0x7F24BF20u: goto label_7F24BF20;
    case 0x7F24BF24u: goto label_7F24BF24;
    case 0x7F24BF28u: goto label_7F24BF28;
    case 0x7F24BF2Cu: goto label_7F24BF2C;
    case 0x7F24BF30u: goto label_7F24BF30;
    case 0x7F24BF34u: goto label_7F24BF34;
    case 0x7F24BF38u: goto label_7F24BF38;
    case 0x7F24BF3Cu: goto label_7F24BF3C;
    case 0x7F24BF40u: goto label_7F24BF40;
    case 0x7F24BF44u: goto label_7F24BF44;
    case 0x7F24BF48u: goto label_7F24BF48;
    case 0x7F24BF4Cu: goto label_7F24BF4C;
    case 0x7F24BF50u: goto label_7F24BF50;
    case 0x7F24BF54u: goto label_7F24BF54;
    case 0x7F24BF58u: goto label_7F24BF58;
    case 0x7F24BF5Cu: goto label_7F24BF5C;
    case 0x7F24BF60u: goto label_7F24BF60;
    case 0x7F24BF64u: goto label_7F24BF64;
    case 0x7F24BF68u: goto label_7F24BF68;
    case 0x7F24BF6Cu: goto label_7F24BF6C;
    case 0x7F24BF70u: goto label_7F24BF70;
    case 0x7F24BF74u: goto label_7F24BF74;
    case 0x7F24BF78u: goto label_7F24BF78;
    case 0x7F24BF7Cu: goto label_7F24BF7C;
    case 0x7F24BF80u: goto label_7F24BF80;
    case 0x7F24BF84u: goto label_7F24BF84;
    case 0x7F24BF88u: goto label_7F24BF88;
    case 0x7F24BF8Cu: goto label_7F24BF8C;
    case 0x7F24BF90u: goto label_7F24BF90;
    case 0x7F24BF94u: goto label_7F24BF94;
    case 0x7F24BF98u: goto label_7F24BF98;
    case 0x7F24BF9Cu: goto label_7F24BF9C;
    case 0x7F24BFA0u: goto label_7F24BFA0;
    case 0x7F24BFA4u: goto label_7F24BFA4;
    case 0x7F24BFA8u: goto label_7F24BFA8;
    case 0x7F24BFACu: goto label_7F24BFAC;
    case 0x7F24BFB0u: goto label_7F24BFB0;
    case 0x7F24BFB4u: goto label_7F24BFB4;
    case 0x7F24BFB8u: goto label_7F24BFB8;
    case 0x7F24BFBCu: goto label_7F24BFBC;
    case 0x7F24BFC0u: goto label_7F24BFC0;
    case 0x7F24BFC4u: goto label_7F24BFC4;
    case 0x7F24BFC8u: goto label_7F24BFC8;
    case 0x7F24BFCCu: goto label_7F24BFCC;
    case 0x7F24BFD0u: goto label_7F24BFD0;
    case 0x7F24BFD4u: goto label_7F24BFD4;
    case 0x7F24BFD8u: goto label_7F24BFD8;
    case 0x7F24BFDCu: goto label_7F24BFDC;
    case 0x7F24BFE0u: goto label_7F24BFE0;
    case 0x7F24BFE4u: goto label_7F24BFE4;
    case 0x7F24BFE8u: goto label_7F24BFE8;
    case 0x7F24BFECu: goto label_7F24BFEC;
    case 0x7F24BFF0u: goto label_7F24BFF0;
    case 0x7F24BFF4u: goto label_7F24BFF4;
    case 0x7F24BFF8u: goto label_7F24BFF8;
    case 0x7F24BFFCu: goto label_7F24BFFC;
    case 0x7F24C000u: goto label_7F24C000;
    case 0x7F24C004u: goto label_7F24C004;
    case 0x7F24C008u: goto label_7F24C008;
    case 0x7F24C00Cu: goto label_7F24C00C;
    case 0x7F24C010u: goto label_7F24C010;
    case 0x7F24C014u: goto label_7F24C014;
    case 0x7F24C018u: goto label_7F24C018;
    case 0x7F24C01Cu: goto label_7F24C01C;
    case 0x7F24C020u: goto label_7F24C020;
    case 0x7F24C024u: goto label_7F24C024;
    case 0x7F24C028u: goto label_7F24C028;
    case 0x7F24C02Cu: goto label_7F24C02C;
    case 0x7F24C030u: goto label_7F24C030;
    case 0x7F24C034u: goto label_7F24C034;
    case 0x7F24C038u: goto label_7F24C038;
    case 0x7F24C03Cu: goto label_7F24C03C;
    case 0x7F24C040u: goto label_7F24C040;
    case 0x7F24C044u: goto label_7F24C044;
    case 0x7F24C048u: goto label_7F24C048;
    case 0x7F24C04Cu: goto label_7F24C04C;
    case 0x7F24C050u: goto label_7F24C050;
    case 0x7F24C054u: goto label_7F24C054;
    case 0x7F24C058u: goto label_7F24C058;
    case 0x7F24C05Cu: goto label_7F24C05C;
    case 0x7F24C060u: goto label_7F24C060;
    case 0x7F24C064u: goto label_7F24C064;
    case 0x7F24C068u: goto label_7F24C068;
    case 0x7F24C06Cu: goto label_7F24C06C;
    case 0x7F24C070u: goto label_7F24C070;
    case 0x7F24C074u: goto label_7F24C074;
    case 0x7F24C078u: goto label_7F24C078;
    case 0x7F24C07Cu: goto label_7F24C07C;
    case 0x7F24C080u: goto label_7F24C080;
    case 0x7F24C084u: goto label_7F24C084;
    case 0x7F24C088u: goto label_7F24C088;
    case 0x7F24C08Cu: goto label_7F24C08C;
    case 0x7F24C090u: goto label_7F24C090;
    case 0x7F24C094u: goto label_7F24C094;
    case 0x7F24C098u: goto label_7F24C098;
    case 0x7F24C09Cu: goto label_7F24C09C;
    case 0x7F24C0A0u: goto label_7F24C0A0;
    case 0x7F24C0A4u: goto label_7F24C0A4;
    case 0x7F24C0A8u: goto label_7F24C0A8;
    case 0x7F24C0ACu: goto label_7F24C0AC;
    case 0x7F24C0B0u: goto label_7F24C0B0;
    case 0x7F24C0B4u: goto label_7F24C0B4;
    case 0x7F24C0B8u: goto label_7F24C0B8;
    case 0x7F24C0BCu: goto label_7F24C0BC;
    case 0x7F24C0C0u: goto label_7F24C0C0;
    case 0x7F24C0C4u: goto label_7F24C0C4;
    case 0x7F24C0C8u: goto label_7F24C0C8;
    case 0x7F24C0CCu: goto label_7F24C0CC;
    case 0x7F24C0D0u: goto label_7F24C0D0;
    case 0x7F24C0D4u: goto label_7F24C0D4;
    case 0x7F24C0D8u: goto label_7F24C0D8;
    case 0x7F24C0DCu: goto label_7F24C0DC;
    case 0x7F24C0E0u: goto label_7F24C0E0;
    case 0x7F24C0E4u: goto label_7F24C0E4;
    case 0x7F24C0E8u: goto label_7F24C0E8;
    default: return;
    }
label_7F2480EC:
    ctx->pc = 0x7F2480ECu;
    ctx->downcount -= 3;
    // 7F2480EC: lwz     r0, 528(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2480F0:
    ctx->pc = 0x7F2480F0u;
    // 7F2480F0: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2480F4:
    ctx->pc = 0x7F2480F4u;
    // 7F2480F4: bc    4, 2, 0x7F248144
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F248144;
        }
    }

label_7F2480F8:
    ctx->pc = 0x7F2480F8u;
    ctx->downcount -= 2;
    // 7F2480F8: lwz     r3, 540(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(540);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2480FC:
    ctx->pc = 0x7F2480FCu;
    // 7F2480FC: bl      0x7F247B6C
    {
            ctx->lr = 0x7F248100u;
            ctx->pc = 0x7F247B6Cu;
            return;
    }

label_7F248100:
    ctx->pc = 0x7F248100u;
    ctx->downcount -= 7;
    // 7F248100: lwz     r3, 512(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(512);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248104:
    ctx->pc = 0x7F248104u;
    // 7F248104: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F248108:
    ctx->pc = 0x7F248108u;
    // 7F248108: lwz     r6, 528(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(528);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24810C:
    ctx->pc = 0x7F24810Cu;
    // 7F24810C: or   r8, r31, r31
    {
        ctx->gpr[8] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F248110:
    ctx->pc = 0x7F248110u;
    // 7F248110: lwz     r7, 524(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(524);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F248114:
    ctx->pc = 0x7F248114u;
    // 7F248114: addi    r5, r28, 280
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(280);

label_7F248118:
    ctx->pc = 0x7F248118u;
    // 7F248118: bl      0x7F24777C
    {
            ctx->lr = 0x7F24811Cu;
            ctx->pc = 0x7F24777Cu;
            return;
    }

label_7F24811C:
    ctx->pc = 0x7F24811Cu;
    ctx->downcount -= 3;
    // 7F24811C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F248120:
    ctx->pc = 0x7F248120u;
    // 7F248120: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F248124:
    ctx->pc = 0x7F248124u;
    // 7F248124: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F248128u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F248128:
    ctx->pc = 0x7F248128u;
    ctx->downcount -= 2;
    // 7F248128: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F24812C:
    ctx->pc = 0x7F24812Cu;
    // 7F24812C: bl      0x7F247DB0
    {
            ctx->lr = 0x7F248130u;
            ctx->pc = 0x7F247DB0u;
            return;
    }

label_7F248130:
    ctx->pc = 0x7F248130u;
    ctx->downcount -= 5;
    // 7F248130: lis     r4, 32548
    ctx->gpr[4] = ((u32)(s32)(32548) << 16);

label_7F248134:
    ctx->pc = 0x7F248134u;
    // 7F248134: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F248138:
    ctx->pc = 0x7F248138u;
    // 7F248138: addi    r0, r4, 32500
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32500);

label_7F24813C:
    ctx->pc = 0x7F24813Cu;
    // 7F24813C: stw     r0, 572(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(572);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F248140:
    ctx->pc = 0x7F248140u;
    // 7F248140: b       0x7F24822C
    {
            goto label_7F24822C;
    }

label_7F248144:
    ctx->pc = 0x7F248144u;
    ctx->downcount -= 4;
    // 7F248144: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F248148:
    ctx->pc = 0x7F248148u;
    // 7F248148: addi    r3, r28, 48
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(48);

label_7F24814C:
    ctx->pc = 0x7F24814Cu;
    // 7F24814C: li      r5, 274
    ctx->gpr[5] = (u32)(s32)(274);

label_7F248150:
    ctx->pc = 0x7F248150u;
    // 7F248150: bl      0x7F04272C
    {
            ctx->lr = 0x7F248154u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F248154:
    ctx->pc = 0x7F248154u;
    ctx->downcount -= 3;
    // 7F248154: addi    r3, r28, 48
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(48);

label_7F248158:
    ctx->pc = 0x7F248158u;
    // 7F248158: addi    r4, r28, 136
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(136);

label_7F24815C:
    ctx->pc = 0x7F24815Cu;
    // 7F24815C: bl      0x7F042B20
    {
            ctx->lr = 0x7F248160u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F248160:
    ctx->pc = 0x7F248160u;
    ctx->downcount -= 8;
    // 7F248160: lwz     r4, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F248164:
    ctx->pc = 0x7F248164u;
    // 7F248164: addi    r3, r28, 92
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(92);

label_7F248168:
    ctx->pc = 0x7F248168u;
    // 7F248168: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F24816C:
    ctx->pc = 0x7F24816Cu;
    // 7F24816C: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F248170:
    ctx->pc = 0x7F248170u;
    // 7F248170: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F248174:
    ctx->pc = 0x7F248174u;
    // 7F248174: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F248178:
    ctx->pc = 0x7F248178u;
    // 7F248178: lwz     r4, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24817C:
    ctx->pc = 0x7F24817Cu;
    // 7F24817C: bl      0x7F04272C
    {
            ctx->lr = 0x7F248180u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F248180:
    ctx->pc = 0x7F248180u;
    ctx->downcount -= 3;
    // 7F248180: addi    r3, r28, 92
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(92);

label_7F248184:
    ctx->pc = 0x7F248184u;
    // 7F248184: addi    r4, r28, 136
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(136);

label_7F248188:
    ctx->pc = 0x7F248188u;
    // 7F248188: bl      0x7F042B20
    {
            ctx->lr = 0x7F24818Cu;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F24818C:
    ctx->pc = 0x7F24818Cu;
    ctx->downcount -= 7;
    // 7F24818C: lwz     r5, 92(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(92);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F248190:
    ctx->pc = 0x7F248190u;
    // 7F248190: addi    r3, r28, 264
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(264);

label_7F248194:
    ctx->pc = 0x7F248194u;
    // 7F248194: addi    r4, r28, 280
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(280);

label_7F248198:
    ctx->pc = 0x7F248198u;
    // 7F248198: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24819C:
    ctx->pc = 0x7F24819Cu;
    // 7F24819C: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F2481A0:
    ctx->pc = 0x7F2481A0u;
    // 7F2481A0: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2481A4:
    ctx->pc = 0x7F2481A4u;
    // 7F2481A4: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F2481A8u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F2481A8:
    ctx->pc = 0x7F2481A8u;
    ctx->downcount -= 2;
    // 7F2481A8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2481AC:
    ctx->pc = 0x7F2481ACu;
    // 7F2481AC: bl      0x7F022304
    {
            ctx->lr = 0x7F2481B0u;
            ctx->pc = 0x7F022304u;
            return;
    }

label_7F2481B0:
    ctx->pc = 0x7F2481B0u;
    ctx->downcount -= 2;
    // 7F2481B0: cmpwi   r3, 0
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

label_7F2481B4:
    ctx->pc = 0x7F2481B4u;
    // 7F2481B4: bc    4, 2, 0x7F2481C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2481C8;
        }
    }

label_7F2481B8:
    ctx->pc = 0x7F2481B8u;
    ctx->downcount -= 3;
    // 7F2481B8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2481BC:
    ctx->pc = 0x7F2481BCu;
    // 7F2481BC: addi    r4, r28, 264
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(264);

label_7F2481C0:
    ctx->pc = 0x7F2481C0u;
    // 7F2481C0: bl      0x7F01BADC
    {
            ctx->lr = 0x7F2481C4u;
            ctx->pc = 0x7F01BADCu;
            return;
    }

label_7F2481C4:
    ctx->pc = 0x7F2481C4u;
    ctx->downcount -= 1;
    // 7F2481C4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2481C8:
    ctx->pc = 0x7F2481C8u;
    ctx->downcount -= 2;
    // 7F2481C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2481CC:
    ctx->pc = 0x7F2481CCu;
    // 7F2481CC: bl      0x7F247B6C
    {
            ctx->lr = 0x7F2481D0u;
            ctx->pc = 0x7F247B6Cu;
            return;
    }

label_7F2481D0:
    ctx->pc = 0x7F2481D0u;
    ctx->downcount -= 2;
    // 7F2481D0: addi    r3, r28, 48
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(48);

label_7F2481D4:
    ctx->pc = 0x7F2481D4u;
    // 7F2481D4: bl      0x7F0427FC
    {
            ctx->lr = 0x7F2481D8u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F2481D8:
    ctx->pc = 0x7F2481D8u;
    ctx->downcount -= 4;
    // 7F2481D8: addi    r3, r28, 264
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(264);

label_7F2481DC:
    ctx->pc = 0x7F2481DCu;
    // 7F2481DC: addi    r4, r28, 136
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(136);

label_7F2481E0:
    ctx->pc = 0x7F2481E0u;
    // 7F2481E0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2481E4:
    ctx->pc = 0x7F2481E4u;
    // 7F2481E4: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F2481E8u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F2481E8:
    ctx->pc = 0x7F2481E8u;
    ctx->downcount -= 11;
    // 7F2481E8: lis     r3, 32548
    ctx->gpr[3] = ((u32)(s32)(32548) << 16);

label_7F2481EC:
    ctx->pc = 0x7F2481ECu;
    // 7F2481EC: stw     r31, 540(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(540);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2481F0:
    ctx->pc = 0x7F2481F0u;
    // 7F2481F0: addi    r0, r3, 32500
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32500);

label_7F2481F4:
    ctx->pc = 0x7F2481F4u;
    // 7F2481F4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2481F8:
    ctx->pc = 0x7F2481F8u;
    // 7F2481F8: stw     r0, 572(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(572);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2481FC:
    ctx->pc = 0x7F2481FCu;
    // 7F2481FC: or   r8, r31, r31
    {
        ctx->gpr[8] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F248200:
    ctx->pc = 0x7F248200u;
    // 7F248200: addi    r5, r28, 280
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(280);

label_7F248204:
    ctx->pc = 0x7F248204u;
    // 7F248204: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F248208:
    ctx->pc = 0x7F248208u;
    // 7F248208: lwz     r3, 512(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(512);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24820C:
    ctx->pc = 0x7F24820Cu;
    // 7F24820C: lwz     r6, 528(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(528);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F248210:
    ctx->pc = 0x7F248210u;
    // 7F248210: bl      0x7F24777C
    {
            ctx->lr = 0x7F248214u;
            ctx->pc = 0x7F24777Cu;
            return;
    }

label_7F248214:
    ctx->pc = 0x7F248214u;
    ctx->downcount -= 3;
    // 7F248214: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F248218:
    ctx->pc = 0x7F248218u;
    // 7F248218: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F24821C:
    ctx->pc = 0x7F24821Cu;
    // 7F24821C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F248220u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F248220:
    ctx->pc = 0x7F248220u;
    ctx->downcount -= 2;
    // 7F248220: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F248224:
    ctx->pc = 0x7F248224u;
    // 7F248224: bl      0x7F247DB0
    {
            ctx->lr = 0x7F248228u;
            ctx->pc = 0x7F247DB0u;
            return;
    }

label_7F248228:
    ctx->pc = 0x7F248228u;
    ctx->downcount -= 1;
    // 7F248228: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F24822C:
    ctx->pc = 0x7F24822Cu;
    ctx->downcount -= 16;
    // 7F24822C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F248230:
    ctx->pc = 0x7F248230u;
    // 7F248230: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F248234:
    ctx->pc = 0x7F248234u;
    // 7F248234: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F248238:
    ctx->pc = 0x7F248238u;
    // 7F248238: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F24823C:
    ctx->pc = 0x7F24823Cu;
    // 7F24823C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F248240:
    ctx->pc = 0x7F248240u;
    ctx->downcount -= 25;
    // 7F248240: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F248244:
    ctx->pc = 0x7F248244u;
    // 7F248244: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F248248:
    ctx->pc = 0x7F248248u;
    // 7F248248: lis     r10, 32548
    ctx->gpr[10] = ((u32)(s32)(32548) << 16);

label_7F24824C:
    ctx->pc = 0x7F24824Cu;
    // 7F24824C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F248250:
    ctx->pc = 0x7F248250u;
    // 7F248250: addi    r0, r10, 31196
    ctx->gpr[0] = ctx->gpr[10] + (u32)(s32)(31196);

label_7F248254:
    ctx->pc = 0x7F248254u;
    // 7F248254: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F248258:
    ctx->pc = 0x7F248258u;
    // 7F248258: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F24825C:
    ctx->pc = 0x7F24825Cu;
    // 7F24825C: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F248260:
    ctx->pc = 0x7F248260u;
    // 7F248260: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F248264:
    ctx->pc = 0x7F248264u;
    // 7F248264: or   r28, r6, r6
    {
        ctx->gpr[28] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F248268:
    ctx->pc = 0x7F248268u;
    // 7F248268: or   r29, r7, r7
    {
        ctx->gpr[29] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F24826C:
    ctx->pc = 0x7F24826Cu;
    // 7F24826C: or   r30, r8, r8
    {
        ctx->gpr[30] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F248270:
    ctx->pc = 0x7F248270u;
    // 7F248270: or   r31, r9, r9
    {
        ctx->gpr[31] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F248274:
    ctx->pc = 0x7F248274u;
    // 7F248274: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F248278:
    ctx->pc = 0x7F248278u;
    // 7F248278: bl      0x7F3C8990
    {
            ctx->lr = 0x7F24827Cu;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F24827C:
    ctx->pc = 0x7F24827Cu;
    ctx->downcount -= 8;
    // 7F24827C: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F248280:
    ctx->pc = 0x7F248280u;
    // 7F248280: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F248284:
    ctx->pc = 0x7F248284u;
    // 7F248284: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F248288:
    ctx->pc = 0x7F248288u;
    // 7F248288: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F24828C:
    ctx->pc = 0x7F24828Cu;
    // 7F24828C: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F248290:
    ctx->pc = 0x7F248290u;
    // 7F248290: or   r8, r30, r30
    {
        ctx->gpr[8] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F248294:
    ctx->pc = 0x7F248294u;
    // 7F248294: or   r9, r31, r31
    {
        ctx->gpr[9] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F248298:
    ctx->pc = 0x7F248298u;
    // 7F248298: bl      0x7F248060
    {
            ctx->lr = 0x7F24829Cu;
            ctx->pc = 0x7F248060u;
            return;
    }

label_7F24829C:
    ctx->pc = 0x7F24829Cu;
    ctx->downcount -= 17;
    // 7F24829C: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2482A0:
    ctx->pc = 0x7F2482A0u;
    // 7F2482A0: srawi r3, r3, 31
    {
        u32 sh = 31u;
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

label_7F2482A4:
    ctx->pc = 0x7F2482A4u;
    // 7F2482A4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2482A8:
    ctx->pc = 0x7F2482A8u;
    // 7F2482A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2482AC:
    ctx->pc = 0x7F2482ACu;
    // 7F2482AC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F2482B0:
    ctx->pc = 0x7F2482B0u;
    // 7F2482B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F2482B4:
    ctx->pc = 0x7F2482B4u;
    ctx->downcount -= 7;
    // 7F2482B4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2482B8:
    ctx->pc = 0x7F2482B8u;
    // 7F2482B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2482BC:
    ctx->pc = 0x7F2482BCu;
    // 7F2482BC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2482C0:
    ctx->pc = 0x7F2482C0u;
    // 7F2482C0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2482C4:
    ctx->pc = 0x7F2482C4u;
    // 7F2482C4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2482C8:
    ctx->pc = 0x7F2482C8u;
    // 7F2482C8: lwz     r3, 540(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(540);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2482CC:
    ctx->pc = 0x7F2482CCu;
    // 7F2482CC: bl      0x7F247B6C
    {
            ctx->lr = 0x7F2482D0u;
            ctx->pc = 0x7F247B6Cu;
            return;
    }

label_7F2482D0:
    ctx->pc = 0x7F2482D0u;
    ctx->downcount -= 3;
    // 7F2482D0: lwz     r0, 528(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2482D4:
    ctx->pc = 0x7F2482D4u;
    // 7F2482D4: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2482D8:
    ctx->pc = 0x7F2482D8u;
    // 7F2482D8: bc    4, 2, 0x7F2482E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2482E4;
        }
    }

label_7F2482DC:
    ctx->pc = 0x7F2482DCu;
    ctx->downcount -= 2;
    // 7F2482DC: lwz     r3, 512(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(512);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2482E0:
    ctx->pc = 0x7F2482E0u;
    // 7F2482E0: bl      0x7F023170
    {
            ctx->lr = 0x7F2482E4u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F2482E4:
    ctx->pc = 0x7F2482E4u;
    ctx->downcount -= 3;
    // 7F2482E4: lwz     r0, 528(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2482E8:
    ctx->pc = 0x7F2482E8u;
    // 7F2482E8: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2482EC:
    ctx->pc = 0x7F2482ECu;
    // 7F2482EC: bc    4, 2, 0x7F248304
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F248304;
        }
    }

label_7F2482F0:
    ctx->pc = 0x7F2482F0u;
    ctx->downcount -= 3;
    // 7F2482F0: lwz     r4, 532(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(532);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2482F4:
    ctx->pc = 0x7F2482F4u;
    // 7F2482F4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2482F8:
    ctx->pc = 0x7F2482F8u;
    // 7F2482F8: bl      0x7F247914
    {
            ctx->lr = 0x7F2482FCu;
            ctx->pc = 0x7F247914u;
            return;
    }

label_7F2482FC:
    ctx->pc = 0x7F2482FCu;
    ctx->downcount -= 2;
    // 7F2482FC: cmpwi   r3, 0
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

label_7F248300:
    ctx->pc = 0x7F248300u;
    // 7F248300: bc    12, 0, 0x7F24831C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24831C;
        }
    }

label_7F248304:
    ctx->pc = 0x7F248304u;
    ctx->downcount -= 5;
    // 7F248304: lwz     r12, 572(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(572);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F248308:
    ctx->pc = 0x7F248308u;
    // 7F248308: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24830C:
    ctx->pc = 0x7F24830Cu;
    // 7F24830C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F248310:
    ctx->pc = 0x7F248310u;
    // 7F248310: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F248314u;
            ctx->pc = target;
            return;
        }
    }

label_7F248314:
    ctx->pc = 0x7F248314u;
    ctx->downcount -= 2;
    // 7F248314: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F248318:
    ctx->pc = 0x7F248318u;
    // 7F248318: bl      0x7F247864
    {
            ctx->lr = 0x7F24831Cu;
            ctx->pc = 0x7F247864u;
            return;
    }

label_7F24831C:
    ctx->pc = 0x7F24831Cu;
    ctx->downcount -= 6;
    // 7F24831C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F248320:
    ctx->pc = 0x7F248320u;
    // 7F248320: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F248324:
    ctx->pc = 0x7F248324u;
    // 7F248324: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F248328:
    ctx->pc = 0x7F248328u;
    // 7F248328: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F24832C:
    ctx->pc = 0x7F24832Cu;
    // 7F24832C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F248330:
    ctx->pc = 0x7F248330u;
    ctx->downcount -= 8;
    // 7F248330: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F248334:
    ctx->pc = 0x7F248334u;
    // 7F248334: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F248338:
    ctx->pc = 0x7F248338u;
    // 7F248338: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24833C:
    ctx->pc = 0x7F24833Cu;
    // 7F24833C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F248340:
    ctx->pc = 0x7F248340u;
    // 7F248340: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F248344:
    ctx->pc = 0x7F248344u;
    // 7F248344: lwz     r0, 536(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(536);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F248348:
    ctx->pc = 0x7F248348u;
    // 7F248348: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24834C:
    ctx->pc = 0x7F24834Cu;
    // 7F24834C: bc    4, 2, 0x7F248364
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F248364;
        }
    }

label_7F248350:
    ctx->pc = 0x7F248350u;
    ctx->downcount -= 3;
    // 7F248350: lwz     r0, 528(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F248354:
    ctx->pc = 0x7F248354u;
    // 7F248354: cmpwi   r0, 1
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

label_7F248358:
    ctx->pc = 0x7F248358u;
    // 7F248358: bc    4, 2, 0x7F248364
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F248364;
        }
    }

label_7F24835C:
    ctx->pc = 0x7F24835Cu;
    ctx->downcount -= 2;
    // 7F24835C: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F248360:
    ctx->pc = 0x7F248360u;
    // 7F248360: bl      0x7F042AAC
    {
            ctx->lr = 0x7F248364u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F248364:
    ctx->pc = 0x7F248364u;
    ctx->downcount -= 3;
    // 7F248364: lwz     r0, 528(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F248368:
    ctx->pc = 0x7F248368u;
    // 7F248368: cmpwi   r0, 1
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

label_7F24836C:
    ctx->pc = 0x7F24836Cu;
    // 7F24836C: bc    4, 2, 0x7F248378
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F248378;
        }
    }

label_7F248370:
    ctx->pc = 0x7F248370u;
    ctx->downcount -= 2;
    // 7F248370: addi    r3, r31, 92
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(92);

label_7F248374:
    ctx->pc = 0x7F248374u;
    // 7F248374: bl      0x7F042AAC
    {
            ctx->lr = 0x7F248378u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F248378:
    ctx->pc = 0x7F248378u;
    ctx->downcount -= 2;
    // 7F248378: addi    r3, r31, 288
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(288);

label_7F24837C:
    ctx->pc = 0x7F24837Cu;
    // 7F24837C: bl      0x7F0150C0
    {
            ctx->lr = 0x7F248380u;
            ctx->pc = 0x7F0150C0u;
            return;
    }

label_7F248380:
    ctx->pc = 0x7F248380u;
    ctx->downcount -= 2;
    // 7F248380: addi    r3, r31, 288
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(288);

label_7F248384:
    ctx->pc = 0x7F248384u;
    // 7F248384: bl      0x7F0146B0
    {
            ctx->lr = 0x7F248388u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F248388:
    ctx->pc = 0x7F248388u;
    ctx->downcount -= 2;
    // 7F248388: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24838C:
    ctx->pc = 0x7F24838Cu;
    // 7F24838C: bl      0x7F247BEC
    {
            ctx->lr = 0x7F248390u;
            ctx->pc = 0x7F247BECu;
            return;
    }

label_7F248390:
    ctx->pc = 0x7F248390u;
    ctx->downcount -= 6;
    // 7F248390: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F248394:
    ctx->pc = 0x7F248394u;
    // 7F248394: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F248398:
    ctx->pc = 0x7F248398u;
    // 7F248398: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24839C:
    ctx->pc = 0x7F24839Cu;
    // 7F24839C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2483A0:
    ctx->pc = 0x7F2483A0u;
    // 7F2483A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F2483A4:
    ctx->pc = 0x7F2483A4u;
    ctx->downcount -= 28;
    // 7F2483A4: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2483A8:
    ctx->pc = 0x7F2483A8u;
    // 7F2483A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2483AC:
    ctx->pc = 0x7F2483ACu;
    // 7F2483AC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2483B0:
    ctx->pc = 0x7F2483B0u;
    // 7F2483B0: stmw     r22, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2483B4:
    ctx->pc = 0x7F2483B4u;
    // 7F2483B4: or   r22, r3, r3
    {
        ctx->gpr[22] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2483B8:
    ctx->pc = 0x7F2483B8u;
    // 7F2483B8: or   r23, r4, r4
    {
        ctx->gpr[23] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2483BC:
    ctx->pc = 0x7F2483BCu;
    // 7F2483BC: or   r24, r5, r5
    {
        ctx->gpr[24] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2483C0:
    ctx->pc = 0x7F2483C0u;
    // 7F2483C0: or   r25, r6, r6
    {
        ctx->gpr[25] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F2483C4:
    ctx->pc = 0x7F2483C4u;
    // 7F2483C4: lwz     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F2483C8:
    ctx->pc = 0x7F2483C8u;
    // 7F2483C8: lwz     r29, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F2483CC:
    ctx->pc = 0x7F2483CCu;
    // 7F2483CC: or   r26, r7, r7
    {
        ctx->gpr[26] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F2483D0:
    ctx->pc = 0x7F2483D0u;
    // 7F2483D0: or   r27, r8, r8
    {
        ctx->gpr[27] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F2483D4:
    ctx->pc = 0x7F2483D4u;
    // 7F2483D4: or   r28, r9, r9
    {
        ctx->gpr[28] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F2483D8:
    ctx->pc = 0x7F2483D8u;
    // 7F2483D8: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F2483DC:
    ctx->pc = 0x7F2483DCu;
    // 7F2483DC: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F2483E0:
    ctx->pc = 0x7F2483E0u;
    // 7F2483E0: li      r5, 576
    ctx->gpr[5] = (u32)(s32)(576);

label_7F2483E4:
    ctx->pc = 0x7F2483E4u;
    // 7F2483E4: li      r6, 64
    ctx->gpr[6] = (u32)(s32)(64);

label_7F2483E8:
    ctx->pc = 0x7F2483E8u;
    // 7F2483E8: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F2483ECu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F2483EC:
    ctx->pc = 0x7F2483ECu;
    ctx->downcount -= 2;
    // 7F2483EC: or.   r31, r3, r3
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

label_7F2483F0:
    ctx->pc = 0x7F2483F0u;
    // 7F2483F0: bc    12, 2, 0x7F248474
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F248474;
        }
    }

label_7F2483F4:
    ctx->pc = 0x7F2483F4u;
    ctx->downcount -= 5;
    // 7F2483F4: lis     r4, 32549
    ctx->gpr[4] = ((u32)(s32)(32549) << 16);

label_7F2483F8:
    ctx->pc = 0x7F2483F8u;
    // 7F2483F8: lis     r5, 32549
    ctx->gpr[5] = ((u32)(s32)(32549) << 16);

label_7F2483FC:
    ctx->pc = 0x7F2483FCu;
    // 7F2483FC: addi    r4, r4, -32076
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32076);

label_7F248400:
    ctx->pc = 0x7F248400u;
    // 7F248400: addi    r5, r5, -31952
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31952);

label_7F248404:
    ctx->pc = 0x7F248404u;
    // 7F248404: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F248408u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F248408:
    ctx->pc = 0x7F248408u;
    ctx->downcount -= 21;
    // 7F248408: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24840C:
    ctx->pc = 0x7F24840Cu;
    // 7F24840C: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F248410:
    ctx->pc = 0x7F248410u;
    // 7F248410: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F248414:
    ctx->pc = 0x7F248414u;
    // 7F248414: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F248418:
    ctx->pc = 0x7F248418u;
    // 7F248418: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F24841C:
    ctx->pc = 0x7F24841Cu;
    // 7F24841C: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F248420:
    ctx->pc = 0x7F248420u;
    // 7F248420: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F248424:
    ctx->pc = 0x7F248424u;
    // 7F248424: or   r4, r22, r22
    {
        ctx->gpr[4] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F248428:
    ctx->pc = 0x7F248428u;
    // 7F248428: or   r5, r23, r23
    {
        ctx->gpr[5] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F24842C:
    ctx->pc = 0x7F24842Cu;
    // 7F24842C: or   r6, r24, r24
    {
        ctx->gpr[6] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F248430:
    ctx->pc = 0x7F248430u;
    // 7F248430: stw     r10, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F248434:
    ctx->pc = 0x7F248434u;
    // 7F248434: or   r7, r25, r25
    {
        ctx->gpr[7] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F248438:
    ctx->pc = 0x7F248438u;
    // 7F248438: or   r8, r26, r26
    {
        ctx->gpr[8] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F24843C:
    ctx->pc = 0x7F24843Cu;
    // 7F24843C: or   r9, r27, r27
    {
        ctx->gpr[9] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F248440:
    ctx->pc = 0x7F248440u;
    // 7F248440: stw     r10, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F248444:
    ctx->pc = 0x7F248444u;
    // 7F248444: stw     r10, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F248448:
    ctx->pc = 0x7F248448u;
    // 7F248448: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24844C:
    ctx->pc = 0x7F24844Cu;
    // 7F24844C: stw     r29, 564(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(564);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F248450:
    ctx->pc = 0x7F248450u;
    // 7F248450: stw     r30, 560(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(560);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F248454:
    ctx->pc = 0x7F248454u;
    // 7F248454: stw     r28, 568(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(568);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F248458:
    ctx->pc = 0x7F248458u;
    // 7F248458: bl      0x7F248240
    {
            ctx->lr = 0x7F24845Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F248240u;
                return;
            }
            goto label_7F248240;
    }

label_7F24845C:
    ctx->pc = 0x7F24845Cu;
    ctx->downcount -= 2;
    // 7F24845C: cmpwi   r3, 0
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

label_7F248460:
    ctx->pc = 0x7F248460u;
    // 7F248460: bc    12, 2, 0x7F248474
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F248474;
        }
    }

label_7F248464:
    ctx->pc = 0x7F248464u;
    ctx->downcount -= 2;
    // 7F248464: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F248468:
    ctx->pc = 0x7F248468u;
    // 7F248468: bl      0x7F3C8210
    {
            ctx->lr = 0x7F24846Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F24846C:
    ctx->pc = 0x7F24846Cu;
    ctx->downcount -= 2;
    // 7F24846C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F248470:
    ctx->pc = 0x7F248470u;
    // 7F248470: b       0x7F248478
    {
            goto label_7F248478;
    }

label_7F248474:
    ctx->pc = 0x7F248474u;
    ctx->downcount -= 1;
    // 7F248474: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F248478:
    ctx->pc = 0x7F248478u;
    ctx->downcount -= 16;
    // 7F248478: lmw     r22, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F24847C:
    ctx->pc = 0x7F24847Cu;
    // 7F24847C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F248480:
    ctx->pc = 0x7F248480u;
    // 7F248480: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F248484:
    ctx->pc = 0x7F248484u;
    // 7F248484: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F248488:
    ctx->pc = 0x7F248488u;
    // 7F248488: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F24848C:
    ctx->pc = 0x7F24848Cu;
    ctx->downcount -= 23;
    // 7F24848C: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F248490:
    ctx->pc = 0x7F248490u;
    // 7F248490: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F248494:
    ctx->pc = 0x7F248494u;
    // 7F248494: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F248498:
    ctx->pc = 0x7F248498u;
    // 7F248498: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24849C:
    ctx->pc = 0x7F24849Cu;
    // 7F24849C: stmw     r26, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2484A0:
    ctx->pc = 0x7F2484A0u;
    // 7F2484A0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2484A4:
    ctx->pc = 0x7F2484A4u;
    // 7F2484A4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2484A8:
    ctx->pc = 0x7F2484A8u;
    // 7F2484A8: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F2484AC:
    ctx->pc = 0x7F2484ACu;
    // 7F2484AC: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2484B0:
    ctx->pc = 0x7F2484B0u;
    // 7F2484B0: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2484B4:
    ctx->pc = 0x7F2484B4u;
    // 7F2484B4: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2484B8:
    ctx->pc = 0x7F2484B8u;
    // 7F2484B8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2484BC:
    ctx->pc = 0x7F2484BCu;
    // 7F2484BC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2484C0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2484C0:
    ctx->pc = 0x7F2484C0u;
    ctx->downcount -= 2;
    // 7F2484C0: cmplwi  r3, 0x0000
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

label_7F2484C4:
    ctx->pc = 0x7F2484C4u;
    // 7F2484C4: bc    12, 2, 0x7F24855C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24855C;
        }
    }

label_7F2484C8:
    ctx->pc = 0x7F2484C8u;
    ctx->downcount -= 1;
    // 7F2484C8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2484CCu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2484CC:
    ctx->pc = 0x7F2484CCu;
    ctx->downcount -= 10;
    // 7F2484CC: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F2484D0:
    ctx->pc = 0x7F2484D0u;
    // 7F2484D0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2484D4:
    ctx->pc = 0x7F2484D4u;
    // 7F2484D4: stw     r3, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2484D8:
    ctx->pc = 0x7F2484D8u;
    // 7F2484D8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2484DC:
    ctx->pc = 0x7F2484DCu;
    // 7F2484DC: lfd     f1, 20720(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2484DCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20720);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2484E0:
    ctx->pc = 0x7F2484E0u;
    // 7F2484E0: stw     r0, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2484E4:
    ctx->pc = 0x7F2484E4u;
    // 7F2484E4: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2484E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2484E8:
    ctx->pc = 0x7F2484E8u;
    // 7F2484E8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2484E8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2484EC:
    ctx->pc = 0x7F2484ECu;
    // 7F2484EC: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2484ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2484F0:
    ctx->pc = 0x7F2484F0u;
    // 7F2484F0: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2484F4u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2484F4:
    ctx->pc = 0x7F2484F4u;
    ctx->downcount -= 10;
    // 7F2484F4: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F2484F8:
    ctx->pc = 0x7F2484F8u;
    // 7F2484F8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2484FC:
    ctx->pc = 0x7F2484FCu;
    // 7F2484FC: stw     r3, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F248500:
    ctx->pc = 0x7F248500u;
    // 7F248500: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F248504:
    ctx->pc = 0x7F248504u;
    // 7F248504: lfd     f1, 20720(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F248504u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20720);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F248508:
    ctx->pc = 0x7F248508u;
    // 7F248508: stw     r0, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24850C:
    ctx->pc = 0x7F24850Cu;
    // 7F24850C: lfd     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24850Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F248510:
    ctx->pc = 0x7F248510u;
    // 7F248510: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F248510u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F248514:
    ctx->pc = 0x7F248514u;
    // 7F248514: stfs     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F248514u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F248518:
    ctx->pc = 0x7F248518u;
    // 7F248518: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F24851Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F24851C:
    ctx->pc = 0x7F24851Cu;
    ctx->downcount -= 10;
    // 7F24851C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F248520:
    ctx->pc = 0x7F248520u;
    // 7F248520: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F248524:
    ctx->pc = 0x7F248524u;
    // 7F248524: stw     r3, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F248528:
    ctx->pc = 0x7F248528u;
    // 7F248528: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F24852C:
    ctx->pc = 0x7F24852Cu;
    // 7F24852C: lfd     f1, 20720(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F24852Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20720);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F248530:
    ctx->pc = 0x7F248530u;
    // 7F248530: stw     r0, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F248534:
    ctx->pc = 0x7F248534u;
    // 7F248534: lfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F248534u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F248538:
    ctx->pc = 0x7F248538u;
    // 7F248538: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F248538u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F24853C:
    ctx->pc = 0x7F24853Cu;
    // 7F24853C: stfs     f0, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24853Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F248540:
    ctx->pc = 0x7F248540u;
    // 7F248540: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F248544u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F248544:
    ctx->pc = 0x7F248544u;
    ctx->downcount -= 2;
    // 7F248544: sth     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F248548:
    ctx->pc = 0x7F248548u;
    // 7F248548: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F24854Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F24854C:
    ctx->pc = 0x7F24854Cu;
    ctx->downcount -= 2;
    // 7F24854C: sth     r3, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F248550:
    ctx->pc = 0x7F248550u;
    // 7F248550: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F248554u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F248554:
    ctx->pc = 0x7F248554u;
    ctx->downcount -= 2;
    // 7F248554: sth     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F248558:
    ctx->pc = 0x7F248558u;
    // 7F248558: b       0x7F248564
    {
            goto label_7F248564;
    }

label_7F24855C:
    ctx->pc = 0x7F24855Cu;
    ctx->downcount -= 2;
    // 7F24855C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F248560:
    ctx->pc = 0x7F248560u;
    // 7F248560: b       0x7F2485E0
    {
            goto label_7F2485E0;
    }

label_7F248564:
    ctx->pc = 0x7F248564u;
    ctx->downcount -= 3;
    // 7F248564: li      r3, 101
    ctx->gpr[3] = (u32)(s32)(101);

label_7F248568:
    ctx->pc = 0x7F248568u;
    // 7F248568: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F24856C:
    ctx->pc = 0x7F24856Cu;
    // 7F24856C: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F248570u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F248570:
    ctx->pc = 0x7F248570u;
    ctx->downcount -= 4;
    // 7F248570: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F248574:
    ctx->pc = 0x7F248574u;
    // 7F248574: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F248578:
    ctx->pc = 0x7F248578u;
    // 7F248578: or   r26, r0, r0
    {
        ctx->gpr[26] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F24857C:
    ctx->pc = 0x7F24857Cu;
    // 7F24857C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F248580u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F248580:
    ctx->pc = 0x7F248580u;
    ctx->downcount -= 4;
    // 7F248580: addi    r28, r1, 40
    ctx->gpr[28] = ctx->gpr[1] + (u32)(s32)(40);

label_7F248584:
    ctx->pc = 0x7F248584u;
    // 7F248584: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F248588:
    ctx->pc = 0x7F248588u;
    // 7F248588: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F24858C:
    ctx->pc = 0x7F24858Cu;
    // 7F24858C: b       0x7F2485A0
    {
            goto label_7F2485A0;
    }

label_7F248590:
    ctx->downcount -= 1;
    // 7F248590: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F248594u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F248594:
    ctx->pc = 0x7F248594u;
    ctx->downcount -= 3;
    // 7F248594: stwx    r3, r28, r29
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[29];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F248598:
    // 7F248598: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F24859C:
    // 7F24859C: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_7F2485A0:
    ctx->downcount -= 1;
    // 7F2485A0: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F2485A4u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F2485A4:
    ctx->downcount -= 2;
    // 7F2485A4: cmplwi  r3, 0x0000
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

label_7F2485A8:
    // 7F2485A8: bc    12, 2, 0x7F2485B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2485B4;
        }
    }

label_7F2485AC:
    ctx->downcount -= 2;
    // 7F2485AC: cmpwi   r27, 3
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

label_7F2485B0:
    // 7F2485B0: bc    12, 0, 0x7F248590
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F248590u;
                return;
            }
            goto label_7F248590;
        }
    }

label_7F2485B4:
    ctx->pc = 0x7F2485B4u;
    ctx->downcount -= 11;
    // 7F2485B4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2485B8:
    ctx->pc = 0x7F2485B8u;
    // 7F2485B8: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2485BC:
    ctx->pc = 0x7F2485BCu;
    // 7F2485BC: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2485C0:
    ctx->pc = 0x7F2485C0u;
    // 7F2485C0: or   r8, r31, r31
    {
        ctx->gpr[8] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2485C4:
    ctx->pc = 0x7F2485C4u;
    // 7F2485C4: or   r9, r26, r26
    {
        ctx->gpr[9] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2485C8:
    ctx->pc = 0x7F2485C8u;
    // 7F2485C8: addi    r3, r1, 52
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(52);

label_7F2485CC:
    ctx->pc = 0x7F2485CCu;
    // 7F2485CC: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2485D0:
    ctx->pc = 0x7F2485D0u;
    // 7F2485D0: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2485D4:
    ctx->pc = 0x7F2485D4u;
    // 7F2485D4: addi    r5, r1, 40
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(40);

label_7F2485D8:
    ctx->pc = 0x7F2485D8u;
    // 7F2485D8: addi    r6, r1, 24
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(24);

label_7F2485DC:
    ctx->pc = 0x7F2485DCu;
    // 7F2485DC: bl      0x7F2483A4
    {
            ctx->lr = 0x7F2485E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2483A4u;
                return;
            }
            goto label_7F2483A4;
    }

label_7F2485E0:
    ctx->pc = 0x7F2485E0u;
    ctx->downcount -= 16;
    // 7F2485E0: lmw     r26, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2485E4:
    ctx->pc = 0x7F2485E4u;
    // 7F2485E4: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2485E8:
    ctx->pc = 0x7F2485E8u;
    // 7F2485E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2485EC:
    ctx->pc = 0x7F2485ECu;
    // 7F2485EC: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F2485F0:
    ctx->pc = 0x7F2485F0u;
    // 7F2485F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F2485F4:
    ctx->pc = 0x7F2485F4u;
    ctx->downcount -= 20;
    // 7F2485F4: stwu     r1, -272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-272);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2485F8:
    ctx->pc = 0x7F2485F8u;
    // 7F2485F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2485FC:
    ctx->pc = 0x7F2485FCu;
    // 7F2485FC: stw     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F248600:
    ctx->pc = 0x7F248600u;
    // 7F248600: stmw     r23, 236(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(236);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F248604:
    ctx->pc = 0x7F248604u;
    // 7F248604: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F248608:
    ctx->pc = 0x7F248608u;
    // 7F248608: lwz     r3, 144(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(144);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24860C:
    ctx->pc = 0x7F24860Cu;
    // 7F24860C: lwz     r25, 176(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(176);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F248610:
    ctx->pc = 0x7F248610u;
    // 7F248610: lwz     r27, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F248614:
    ctx->pc = 0x7F248614u;
    // 7F248614: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248618:
    ctx->pc = 0x7F248618u;
    // 7F248618: bl      0x7F2494E4
    {
            ctx->lr = 0x7F24861Cu;
            goto label_7F2494E4;
    }

label_7F24861C:
    ctx->pc = 0x7F24861Cu;
    ctx->downcount -= 4;
    // 7F24861C: lwz     r4, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F248620:
    ctx->pc = 0x7F248620u;
    // 7F248620: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248624:
    ctx->pc = 0x7F248624u;
    // 7F248624: lwz     r4, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F248628:
    ctx->pc = 0x7F248628u;
    // 7F248628: bl      0x7F2494B0
    {
            ctx->lr = 0x7F24862Cu;
            goto label_7F2494B0;
    }

label_7F24862C:
    ctx->pc = 0x7F24862Cu;
    ctx->downcount -= 10;
    // 7F24862C: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248630:
    ctx->pc = 0x7F248630u;
    // 7F248630: lha     r28, 162(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(162);
        ctx->gpr[28] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F248634:
    ctx->pc = 0x7F248634u;
    // 7F248634: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248638:
    ctx->pc = 0x7F248638u;
    // 7F248638: rlwinm r0, r3, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 16u) & 0x0000FFFFu;
    }

label_7F24863C:
    ctx->pc = 0x7F24863Cu;
    // 7F24863C: rlwinm r26, r3, 0, 16, 31
    {
        ctx->gpr[26] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_7F248640:
    ctx->pc = 0x7F248640u;
    // 7F248640: subfic  r0, r0, 6
    {
        u64 res = (u64)(u32)(s32)(6) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F248644:
    ctx->pc = 0x7F248644u;
    // 7F248644: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_7F248648:
    ctx->pc = 0x7F248648u;
    // 7F248648: cmplwi  r26, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[26]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24864C:
    ctx->pc = 0x7F24864Cu;
    // 7F24864C: rlwinm r24, r0, 27, 5, 31
    {
        ctx->gpr[24] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_7F248650:
    ctx->pc = 0x7F248650u;
    // 7F248650: bc    4, 2, 0x7F248668
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F248668;
        }
    }

label_7F248654:
    ctx->pc = 0x7F248654u;
    ctx->downcount -= 3;
    // 7F248654: lha     r0, 166(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(166);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F248658:
    ctx->pc = 0x7F248658u;
    // 7F248658: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24865C:
    ctx->pc = 0x7F24865Cu;
    // 7F24865C: bc    4, 1, 0x7F248668
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F248668;
        }
    }

label_7F248660:
    ctx->pc = 0x7F248660u;
    ctx->downcount -= 2;
    // 7F248660: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F248664:
    ctx->pc = 0x7F248664u;
    // 7F248664: sth     r0, 166(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(166);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F248668:
    ctx->pc = 0x7F248668u;
    ctx->downcount -= 3;
    // 7F248668: lha     r3, 166(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(166);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F24866C:
    ctx->pc = 0x7F24866Cu;
    // 7F24866C: cmpwi   r3, 0
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

label_7F248670:
    ctx->pc = 0x7F248670u;
    // 7F248670: bc    4, 1, 0x7F24867C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24867C;
        }
    }

label_7F248674:
    ctx->pc = 0x7F248674u;
    ctx->downcount -= 2;
    // 7F248674: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F248678:
    ctx->pc = 0x7F248678u;
    // 7F248678: sth     r0, 166(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(166);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F24867C:
    ctx->pc = 0x7F24867Cu;
    ctx->downcount -= 6;
    // 7F24867C: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F248680:
    ctx->pc = 0x7F248680u;
    // 7F248680: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F248684:
    ctx->pc = 0x7F248684u;
    // 7F248684: addi    r6, r3, -32768
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F248688:
    ctx->pc = 0x7F248688u;
    // 7F248688: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F24868C:
    ctx->pc = 0x7F24868Cu;
    // 7F24868C: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_7F248690:
    ctx->pc = 0x7F248690u;
    // 7F248690: bl      0x7F042E08
    {
            ctx->lr = 0x7F248694u;
            ctx->pc = 0x7F042E08u;
            return;
    }

label_7F248694:
    ctx->pc = 0x7F248694u;
    ctx->downcount -= 3;
    // 7F248694: lha     r0, 166(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(166);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F248698:
    ctx->pc = 0x7F248698u;
    // 7F248698: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24869C:
    ctx->pc = 0x7F24869Cu;
    // 7F24869C: bc    12, 1, 0x7F2486BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2486BC;
        }
    }

label_7F2486A0:
    ctx->pc = 0x7F2486A0u;
    ctx->downcount -= 5;
    // 7F2486A0: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2486A4:
    ctx->pc = 0x7F2486A4u;
    // 7F2486A4: rlwinm r29, r28, 2, 0, 29
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[28], 2u) & 0xFFFFFFFCu;
    }

label_7F2486A8:
    ctx->pc = 0x7F2486A8u;
    // 7F2486A8: addi    r30, r3, 11464
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(11464);

label_7F2486AC:
    ctx->pc = 0x7F2486ACu;
    // 7F2486AC: lwzx    r3, r30, r29
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[29];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2486B0:
    ctx->pc = 0x7F2486B0u;
    // 7F2486B0: bl      0x7F01ED58
    {
            ctx->lr = 0x7F2486B4u;
            ctx->pc = 0x7F01ED58u;
            return;
    }

label_7F2486B4:
    ctx->pc = 0x7F2486B4u;
    ctx->downcount -= 2;
    // 7F2486B4: cmpwi   r3, 0
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

label_7F2486B8:
    ctx->pc = 0x7F2486B8u;
    // 7F2486B8: bc    4, 2, 0x7F248710
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F248710;
        }
    }

label_7F2486BC:
    ctx->pc = 0x7F2486BCu;
    ctx->downcount -= 11;
    // 7F2486BC: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2486C0:
    ctx->pc = 0x7F2486C0u;
    // 7F2486C0: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2486C4:
    ctx->pc = 0x7F2486C4u;
    // 7F2486C4: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F2486C8:
    ctx->pc = 0x7F2486C8u;
    // 7F2486C8: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2486CC:
    ctx->pc = 0x7F2486CCu;
    // 7F2486CC: lwz     r3, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2486D0:
    ctx->pc = 0x7F2486D0u;
    // 7F2486D0: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2486D4:
    ctx->pc = 0x7F2486D4u;
    // 7F2486D4: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F2486D8:
    ctx->pc = 0x7F2486D8u;
    // 7F2486D8: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2486DC:
    ctx->pc = 0x7F2486DCu;
    // 7F2486DC: lwz     r3, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2486E0:
    ctx->pc = 0x7F2486E0u;
    // 7F2486E0: cmplwi  r3, 0x0000
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

label_7F2486E4:
    ctx->pc = 0x7F2486E4u;
    // 7F2486E4: bc    12, 2, 0x7F2486F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2486F4;
        }
    }

label_7F2486E8:
    ctx->pc = 0x7F2486E8u;
    ctx->downcount -= 3;
    // 7F2486E8: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2486EC:
    ctx->pc = 0x7F2486ECu;
    // 7F2486EC: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F2486F0:
    ctx->pc = 0x7F2486F0u;
    // 7F2486F0: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2486F4:
    ctx->pc = 0x7F2486F4u;
    ctx->downcount -= 3;
    // 7F2486F4: lwz     r3, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2486F8:
    ctx->pc = 0x7F2486F8u;
    // 7F2486F8: cmplwi  r3, 0x0000
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

label_7F2486FC:
    ctx->pc = 0x7F2486FCu;
    // 7F2486FC: bc    12, 2, 0x7F24949C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24949C;
        }
    }

label_7F248700:
    ctx->pc = 0x7F248700u;
    ctx->downcount -= 4;
    // 7F248700: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F248704:
    ctx->pc = 0x7F248704u;
    // 7F248704: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F248708:
    ctx->pc = 0x7F248708u;
    // 7F248708: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24870C:
    ctx->pc = 0x7F24870Cu;
    // 7F24870C: b       0x7F24949C
    {
            goto label_7F24949C;
    }

label_7F248710:
    ctx->pc = 0x7F248710u;
    ctx->downcount -= 7;
    // 7F248710: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F248714:
    ctx->pc = 0x7F248714u;
    // 7F248714: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F248718:
    ctx->pc = 0x7F248718u;
    // 7F248718: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24871C:
    ctx->pc = 0x7F24871Cu;
    // 7F24871C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248720:
    ctx->pc = 0x7F248720u;
    // 7F248720: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F248724:
    ctx->pc = 0x7F248724u;
    // 7F248724: and.   r0, r0, r27
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[27];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F248728:
    ctx->pc = 0x7F248728u;
    // 7F248728: bc    12, 2, 0x7F2487AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2487AC;
        }
    }

label_7F24872C:
    ctx->pc = 0x7F24872Cu;
    ctx->downcount -= 6;
    // 7F24872C: lwz     r4, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F248730:
    ctx->pc = 0x7F248730u;
    // 7F248730: addi    r3, r31, 92
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(92);

label_7F248734:
    ctx->pc = 0x7F248734u;
    // 7F248734: lwz     r5, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F248738:
    ctx->pc = 0x7F248738u;
    // 7F248738: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24873C:
    ctx->pc = 0x7F24873Cu;
    // 7F24873C: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F248740:
    ctx->pc = 0x7F248740u;
    // 7F248740: bl      0x7F042B74
    {
            ctx->lr = 0x7F248744u;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F248744:
    ctx->pc = 0x7F248744u;
    ctx->downcount -= 2;
    // 7F248744: cmpwi   r24, 0
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

label_7F248748:
    ctx->pc = 0x7F248748u;
    // 7F248748: bc    12, 2, 0x7F248760
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F248760;
        }
    }

label_7F24874C:
    ctx->pc = 0x7F24874Cu;
    ctx->downcount -= 5;
    // 7F24874C: lwz     r4, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F248750:
    ctx->pc = 0x7F248750u;
    // 7F248750: addi    r3, r31, 92
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(92);

label_7F248754:
    ctx->pc = 0x7F248754u;
    // 7F248754: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F248758:
    ctx->pc = 0x7F248758u;
    // 7F248758: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24875C:
    ctx->pc = 0x7F24875Cu;
    // 7F24875C: bl      0x7F042B74
    {
            ctx->lr = 0x7F248760u;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F248760:
    ctx->pc = 0x7F248760u;
    ctx->downcount -= 19;
    // 7F248760: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F248764:
    ctx->pc = 0x7F248764u;
    // 7F248764: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F248768:
    ctx->pc = 0x7F248768u;
    // 7F248768: lwz     r5, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24876C:
    ctx->pc = 0x7F24876Cu;
    // 7F24876C: slw   r0, r0, r25
    {
        u32 sh = ctx->gpr[25] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_7F248770:
    ctx->pc = 0x7F248770u;
    // 7F248770: lwz     r3, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248774:
    ctx->pc = 0x7F248774u;
    // 7F248774: li      r23, 1
    ctx->gpr[23] = (u32)(s32)(1);

label_7F248778:
    ctx->pc = 0x7F248778u;
    // 7F248778: lwz     r27, 68(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(68);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F24877C:
    ctx->pc = 0x7F24877Cu;
    // 7F24877C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_7F248780:
    ctx->pc = 0x7F248780u;
    // 7F248780: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F248784:
    ctx->pc = 0x7F248784u;
    // 7F248784: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248788:
    ctx->pc = 0x7F248788u;
    // 7F248788: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24878C:
    ctx->pc = 0x7F24878Cu;
    // 7F24878C: rlwinm r0, r0, 0, 19, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFDFFFu;
    }

label_7F248790:
    ctx->pc = 0x7F248790u;
    // 7F248790: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F248794:
    ctx->pc = 0x7F248794u;
    // 7F248794: lwz     r4, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F248798:
    ctx->pc = 0x7F248798u;
    // 7F248798: lwz     r3, 128(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24879C:
    ctx->pc = 0x7F24879Cu;
    // 7F24879C: lwz     r0, 132(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2487A0:
    ctx->pc = 0x7F2487A0u;
    // 7F2487A0: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2487A4:
    ctx->pc = 0x7F2487A4u;
    // 7F2487A4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2487A8:
    ctx->pc = 0x7F2487A8u;
    // 7F2487A8: b       0x7F248824
    {
            goto label_7F248824;
    }

label_7F2487AC:
    ctx->pc = 0x7F2487ACu;
    ctx->downcount -= 6;
    // 7F2487AC: lwz     r4, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2487B0:
    ctx->pc = 0x7F2487B0u;
    // 7F2487B0: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F2487B4:
    ctx->pc = 0x7F2487B4u;
    // 7F2487B4: lwz     r5, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2487B8:
    ctx->pc = 0x7F2487B8u;
    // 7F2487B8: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2487BC:
    ctx->pc = 0x7F2487BCu;
    // 7F2487BC: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2487C0:
    ctx->pc = 0x7F2487C0u;
    // 7F2487C0: bl      0x7F042B74
    {
            ctx->lr = 0x7F2487C4u;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F2487C4:
    ctx->pc = 0x7F2487C4u;
    ctx->downcount -= 2;
    // 7F2487C4: cmpwi   r24, 0
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

label_7F2487C8:
    ctx->pc = 0x7F2487C8u;
    // 7F2487C8: bc    12, 2, 0x7F2487E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2487E0;
        }
    }

label_7F2487CC:
    ctx->pc = 0x7F2487CCu;
    ctx->downcount -= 5;
    // 7F2487CC: lwz     r4, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2487D0:
    ctx->pc = 0x7F2487D0u;
    // 7F2487D0: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F2487D4:
    ctx->pc = 0x7F2487D4u;
    // 7F2487D4: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F2487D8:
    ctx->pc = 0x7F2487D8u;
    // 7F2487D8: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2487DC:
    ctx->pc = 0x7F2487DCu;
    // 7F2487DC: bl      0x7F042B74
    {
            ctx->lr = 0x7F2487E0u;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F2487E0:
    ctx->pc = 0x7F2487E0u;
    ctx->downcount -= 17;
    // 7F2487E0: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2487E4:
    ctx->pc = 0x7F2487E4u;
    // 7F2487E4: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F2487E8:
    ctx->pc = 0x7F2487E8u;
    // 7F2487E8: slw   r0, r0, r25
    {
        u32 sh = ctx->gpr[25] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_7F2487EC:
    ctx->pc = 0x7F2487ECu;
    // 7F2487EC: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F2487F0:
    ctx->pc = 0x7F2487F0u;
    // 7F2487F0: lwz     r3, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2487F4:
    ctx->pc = 0x7F2487F4u;
    // 7F2487F4: lwz     r27, 68(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(68);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F2487F8:
    ctx->pc = 0x7F2487F8u;
    // 7F2487F8: rlwinm r3, r3, 0, 20, 17
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFCFFFu;
    }

label_7F2487FC:
    ctx->pc = 0x7F2487FCu;
    // 7F2487FC: stw     r3, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F248800:
    ctx->pc = 0x7F248800u;
    // 7F248800: lwz     r4, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F248804:
    ctx->pc = 0x7F248804u;
    // 7F248804: lwz     r3, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248808:
    ctx->pc = 0x7F248808u;
    // 7F248808: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_7F24880C:
    ctx->pc = 0x7F24880Cu;
    // 7F24880C: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F248810:
    ctx->pc = 0x7F248810u;
    // 7F248810: lwz     r4, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F248814:
    ctx->pc = 0x7F248814u;
    // 7F248814: lwz     r3, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248818:
    ctx->pc = 0x7F248818u;
    // 7F248818: lwz     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24881C:
    ctx->pc = 0x7F24881Cu;
    // 7F24881C: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F248820:
    ctx->pc = 0x7F248820u;
    // 7F248820: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F248824:
    ctx->pc = 0x7F248824u;
    ctx->downcount -= 3;
    // 7F248824: lwz     r5, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F248828:
    ctx->pc = 0x7F248828u;
    // 7F248828: cmplwi  r5, 0x0000
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

label_7F24882C:
    ctx->pc = 0x7F24882Cu;
    // 7F24882C: bc    12, 2, 0x7F248870
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F248870;
        }
    }

label_7F248830:
    ctx->pc = 0x7F248830u;
    ctx->downcount -= 4;
    // 7F248830: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F248834:
    ctx->pc = 0x7F248834u;
    // 7F248834: addi    r4, r27, -4
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(-4);

label_7F248838:
    ctx->pc = 0x7F248838u;
    // 7F248838: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F24883C:
    loop_7F24883C(ctx);
    if (ctx->pc == 0x7F248850u) goto label_7F248850;
    return;
label_7F248840:
    ctx->pc = 0x7F248840u;
    // 7F248840: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F248844:
    ctx->pc = 0x7F248844u;
    // 7F248844: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F248848:
    ctx->pc = 0x7F248848u;
    // 7F248848: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F24884C:
    // 7F24884C: bc    16, 0, 0x7F24883C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24883Cu;
                return;
            }
            goto label_7F24883C;
        }
    }

label_7F248850:
    ctx->pc = 0x7F248850u;
    ctx->downcount -= 4;
    // 7F248850: lwz     r4, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F248854:
    ctx->pc = 0x7F248854u;
    // 7F248854: lwz     r3, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248858:
    ctx->pc = 0x7F248858u;
    // 7F248858: lwz     r4, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24885C:
    ctx->pc = 0x7F24885Cu;
    // 7F24885C: bl      0x7F2494B0
    {
            ctx->lr = 0x7F248860u;
            goto label_7F2494B0;
    }

label_7F248860:
    ctx->pc = 0x7F248860u;
    ctx->downcount -= 4;
    // 7F248860: lwz     r3, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248864:
    ctx->pc = 0x7F248864u;
    // 7F248864: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F248868:
    ctx->pc = 0x7F248868u;
    // 7F248868: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F24886C:
    ctx->pc = 0x7F24886Cu;
    // 7F24886C: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F248870:
    ctx->pc = 0x7F248870u;
    ctx->downcount -= 2;
    // 7F248870: cmpwi   r24, 0
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

label_7F248874:
    ctx->pc = 0x7F248874u;
    // 7F248874: bc    12, 2, 0x7F24890C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24890C;
        }
    }

label_7F248878:
    ctx->pc = 0x7F248878u;
    ctx->downcount -= 16;
    // 7F248878: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F24887C:
    ctx->pc = 0x7F24887Cu;
    // 7F24887C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F248880:
    ctx->pc = 0x7F248880u;
    // 7F248880: addi    r7, r4, 11600
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(11600);

label_7F248884:
    ctx->pc = 0x7F248884u;
    // 7F248884: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F248888:
    ctx->pc = 0x7F248888u;
    // 7F248888: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F24888C:
    ctx->pc = 0x7F24888Cu;
    // 7F24888C: lwz     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F248890:
    ctx->pc = 0x7F248890u;
    // 7F248890: lwz     r4, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F248894:
    ctx->pc = 0x7F248894u;
    // 7F248894: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F248898:
    ctx->pc = 0x7F248898u;
    // 7F248898: stw     r6, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F24889C:
    ctx->pc = 0x7F24889Cu;
    // 7F24889C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2488A0:
    ctx->pc = 0x7F2488A0u;
    // 7F2488A0: stw     r5, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2488A4:
    ctx->pc = 0x7F2488A4u;
    // 7F2488A4: stw     r4, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2488A8:
    ctx->pc = 0x7F2488A8u;
    // 7F2488A8: stw     r0, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2488AC:
    ctx->pc = 0x7F2488ACu;
    // 7F2488AC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2488B0:
    ctx->pc = 0x7F2488B0u;
    // 7F2488B0: addi    r3, r3, 3684
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3684);

label_7F2488B4:
    ctx->pc = 0x7F2488B4u;
    // 7F2488B4: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F2488B8u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F2488B8:
    ctx->pc = 0x7F2488B8u;
    ctx->downcount -= 2;
    // 7F2488B8: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_7F2488BC:
    ctx->pc = 0x7F2488BCu;
    // 7F2488BC: bl      0x7F3B3134
    {
            ctx->lr = 0x7F2488C0u;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F2488C0:
    ctx->pc = 0x7F2488C0u;
    ctx->downcount -= 3;
    // 7F2488C0: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2488C4:
    ctx->pc = 0x7F2488C4u;
    // 7F2488C4: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F2488C8:
    ctx->pc = 0x7F2488C8u;
    // 7F2488C8: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F2488CCu;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F2488CC:
    ctx->pc = 0x7F2488CCu;
    ctx->downcount -= 6;
    // 7F2488CC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2488D0:
    ctx->pc = 0x7F2488D0u;
    // 7F2488D0: addi    r3, r3, -5668
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5668);

label_7F2488D4:
    ctx->pc = 0x7F2488D4u;
    // 7F2488D4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2488D8:
    ctx->pc = 0x7F2488D8u;
    // 7F2488D8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2488DC:
    ctx->pc = 0x7F2488DCu;
    // 7F2488DC: addi    r3, r3, 3684
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3684);

label_7F2488E0:
    ctx->pc = 0x7F2488E0u;
    // 7F2488E0: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F2488E4u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F2488E4:
    ctx->pc = 0x7F2488E4u;
    ctx->downcount -= 2;
    // 7F2488E4: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_7F2488E8:
    ctx->pc = 0x7F2488E8u;
    // 7F2488E8: bl      0x7F3B3134
    {
            ctx->lr = 0x7F2488ECu;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F2488EC:
    ctx->pc = 0x7F2488ECu;
    ctx->downcount -= 3;
    // 7F2488EC: lwz     r3, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2488F0:
    ctx->pc = 0x7F2488F0u;
    // 7F2488F0: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F2488F4:
    ctx->pc = 0x7F2488F4u;
    // 7F2488F4: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F2488F8u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F2488F8:
    ctx->pc = 0x7F2488F8u;
    ctx->downcount -= 5;
    // 7F2488F8: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2488FC:
    ctx->pc = 0x7F2488FCu;
    // 7F2488FC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F248900:
    ctx->pc = 0x7F248900u;
    // 7F248900: stw     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F248904:
    ctx->pc = 0x7F248904u;
    // 7F248904: lwz     r3, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248908:
    ctx->pc = 0x7F248908u;
    // 7F248908: stw     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24890C:
    ctx->pc = 0x7F24890Cu;
    ctx->downcount -= 3;
    // 7F24890C: lwz     r5, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F248910:
    ctx->pc = 0x7F248910u;
    // 7F248910: cmplwi  r5, 0x0000
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

label_7F248914:
    ctx->pc = 0x7F248914u;
    // 7F248914: bc    12, 2, 0x7F2489E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2489E4;
        }
    }

label_7F248918:
    ctx->pc = 0x7F248918u;
    ctx->downcount -= 3;
    // 7F248918: lwz     r0, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24891C:
    ctx->pc = 0x7F24891Cu;
    // 7F24891C: cmpwi   r0, 1
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

label_7F248920:
    ctx->pc = 0x7F248920u;
    // 7F248920: bc    12, 2, 0x7F24893C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24893C;
        }
    }

label_7F248924:
    ctx->pc = 0x7F248924u;
    ctx->downcount -= 2;
    // 7F248924: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F248928:
    ctx->pc = 0x7F248928u;
    // 7F248928: bc    4, 2, 0x7F24894C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24894C;
        }
    }

label_7F24892C:
    ctx->pc = 0x7F24892Cu;
    ctx->downcount -= 2;
    // 7F24892C: cmplwi  r26, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[26]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F248930:
    ctx->pc = 0x7F248930u;
    // 7F248930: bc    4, 2, 0x7F24894C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24894C;
        }
    }

label_7F248934:
    ctx->pc = 0x7F248934u;
    ctx->downcount -= 2;
    // 7F248934: cmpwi   r23, 0
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

label_7F248938:
    ctx->pc = 0x7F248938u;
    // 7F248938: bc    12, 2, 0x7F24894C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24894C;
        }
    }

label_7F24893C:
    ctx->pc = 0x7F24893Cu;
    ctx->downcount -= 4;
    // 7F24893C: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F248940:
    ctx->pc = 0x7F248940u;
    // 7F248940: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F248944:
    ctx->pc = 0x7F248944u;
    // 7F248944: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F248948:
    ctx->pc = 0x7F248948u;
    // 7F248948: b       0x7F2489E4
    {
            goto label_7F2489E4;
    }

label_7F24894C:
    ctx->pc = 0x7F24894Cu;
    ctx->downcount -= 2;
    // 7F24894C: cmpwi   r24, 0
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

label_7F248950:
    ctx->pc = 0x7F248950u;
    // 7F248950: bc    12, 2, 0x7F2489A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2489A4;
        }
    }

label_7F248954:
    ctx->pc = 0x7F248954u;
    ctx->downcount -= 2;
    // 7F248954: cmpwi   r23, 0
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

label_7F248958:
    ctx->pc = 0x7F248958u;
    // 7F248958: bc    12, 2, 0x7F248980
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F248980;
        }
    }

label_7F24895C:
    ctx->pc = 0x7F24895Cu;
    ctx->downcount -= 4;
    // 7F24895C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F248960:
    ctx->pc = 0x7F248960u;
    // 7F248960: lwz     r4, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F248964:
    ctx->pc = 0x7F248964u;
    // 7F248964: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F248968:
    loop_7F248968(ctx);
    if (ctx->pc == 0x7F24897Cu) goto label_7F24897C;
    return;
label_7F24896C:
    ctx->pc = 0x7F24896Cu;
    // 7F24896C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F248970:
    ctx->pc = 0x7F248970u;
    // 7F248970: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F248974:
    ctx->pc = 0x7F248974u;
    // 7F248974: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F248978:
    // 7F248978: bc    16, 0, 0x7F248968
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F248968u;
                return;
            }
            goto label_7F248968;
        }
    }

label_7F24897C:
    ctx->pc = 0x7F24897Cu;
    ctx->downcount -= 1;
    // 7F24897C: b       0x7F2489C4
    {
            goto label_7F2489C4;
    }

label_7F248980:
    ctx->pc = 0x7F248980u;
    ctx->downcount -= 4;
    // 7F248980: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F248984:
    ctx->pc = 0x7F248984u;
    // 7F248984: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F248988:
    ctx->pc = 0x7F248988u;
    // 7F248988: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F24898C:
    loop_7F24898C(ctx);
    if (ctx->pc == 0x7F2489A0u) goto label_7F2489A0;
    return;
label_7F248990:
    ctx->pc = 0x7F248990u;
    // 7F248990: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F248994:
    ctx->pc = 0x7F248994u;
    // 7F248994: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F248998:
    ctx->pc = 0x7F248998u;
    // 7F248998: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F24899C:
    // 7F24899C: bc    16, 0, 0x7F24898C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24898Cu;
                return;
            }
            goto label_7F24898C;
        }
    }

label_7F2489A0:
    ctx->pc = 0x7F2489A0u;
    ctx->downcount -= 1;
    // 7F2489A0: b       0x7F2489C4
    {
            goto label_7F2489C4;
    }

label_7F2489A4:
    ctx->pc = 0x7F2489A4u;
    ctx->downcount -= 4;
    // 7F2489A4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F2489A8:
    ctx->pc = 0x7F2489A8u;
    // 7F2489A8: addi    r4, r27, -4
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(-4);

label_7F2489AC:
    ctx->pc = 0x7F2489ACu;
    // 7F2489AC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2489B0:
    loop_7F2489B0(ctx);
    if (ctx->pc == 0x7F2489C4u) goto label_7F2489C4;
    return;
label_7F2489B4:
    ctx->pc = 0x7F2489B4u;
    // 7F2489B4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F2489B8:
    ctx->pc = 0x7F2489B8u;
    // 7F2489B8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2489BC:
    ctx->pc = 0x7F2489BCu;
    // 7F2489BC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F2489C0:
    // 7F2489C0: bc    16, 0, 0x7F2489B0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2489B0u;
                return;
            }
            goto label_7F2489B0;
        }
    }

label_7F2489C4:
    ctx->pc = 0x7F2489C4u;
    ctx->downcount -= 4;
    // 7F2489C4: lwz     r4, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2489C8:
    ctx->pc = 0x7F2489C8u;
    // 7F2489C8: lwz     r3, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2489CC:
    ctx->pc = 0x7F2489CCu;
    // 7F2489CC: lwz     r4, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2489D0:
    ctx->pc = 0x7F2489D0u;
    // 7F2489D0: bl      0x7F2494B0
    {
            ctx->lr = 0x7F2489D4u;
            goto label_7F2494B0;
    }

label_7F2489D4:
    ctx->pc = 0x7F2489D4u;
    ctx->downcount -= 4;
    // 7F2489D4: lwz     r3, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2489D8:
    ctx->pc = 0x7F2489D8u;
    // 7F2489D8: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2489DC:
    ctx->pc = 0x7F2489DCu;
    // 7F2489DC: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F2489E0:
    ctx->pc = 0x7F2489E0u;
    // 7F2489E0: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2489E4:
    ctx->pc = 0x7F2489E4u;
    ctx->downcount -= 3;
    // 7F2489E4: lwz     r5, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2489E8:
    ctx->pc = 0x7F2489E8u;
    // 7F2489E8: cmplwi  r5, 0x0000
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

label_7F2489EC:
    ctx->pc = 0x7F2489ECu;
    // 7F2489EC: bc    12, 2, 0x7F248AB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F248AB4;
        }
    }

label_7F2489F0:
    ctx->pc = 0x7F2489F0u;
    ctx->downcount -= 3;
    // 7F2489F0: lwz     r0, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2489F4:
    ctx->pc = 0x7F2489F4u;
    // 7F2489F4: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2489F8:
    ctx->pc = 0x7F2489F8u;
    // 7F2489F8: bc    4, 2, 0x7F248A1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F248A1C;
        }
    }

label_7F2489FC:
    ctx->pc = 0x7F2489FCu;
    ctx->downcount -= 2;
    // 7F2489FC: cmplwi  r26, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[26]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F248A00:
    ctx->pc = 0x7F248A00u;
    // 7F248A00: bc    4, 2, 0x7F248A1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F248A1C;
        }
    }

label_7F248A04:
    ctx->pc = 0x7F248A04u;
    ctx->downcount -= 2;
    // 7F248A04: cmpwi   r23, 0
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

label_7F248A08:
    ctx->pc = 0x7F248A08u;
    // 7F248A08: bc    12, 2, 0x7F248A1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F248A1C;
        }
    }

label_7F248A0C:
    ctx->pc = 0x7F248A0Cu;
    ctx->downcount -= 4;
    // 7F248A0C: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F248A10:
    ctx->pc = 0x7F248A10u;
    // 7F248A10: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F248A14:
    ctx->pc = 0x7F248A14u;
    // 7F248A14: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F248A18:
    ctx->pc = 0x7F248A18u;
    // 7F248A18: b       0x7F248AB4
    {
            goto label_7F248AB4;
    }

label_7F248A1C:
    ctx->pc = 0x7F248A1Cu;
    ctx->downcount -= 2;
    // 7F248A1C: cmpwi   r24, 0
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

label_7F248A20:
    ctx->pc = 0x7F248A20u;
    // 7F248A20: bc    12, 2, 0x7F248A74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F248A74;
        }
    }

label_7F248A24:
    ctx->pc = 0x7F248A24u;
    ctx->downcount -= 2;
    // 7F248A24: cmpwi   r23, 0
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

label_7F248A28:
    ctx->pc = 0x7F248A28u;
    // 7F248A28: bc    12, 2, 0x7F248A50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F248A50;
        }
    }

label_7F248A2C:
    ctx->pc = 0x7F248A2Cu;
    ctx->downcount -= 4;
    // 7F248A2C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F248A30:
    ctx->pc = 0x7F248A30u;
    // 7F248A30: lwz     r4, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F248A34:
    ctx->pc = 0x7F248A34u;
    // 7F248A34: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F248A38:
    loop_7F248A38(ctx);
    if (ctx->pc == 0x7F248A4Cu) goto label_7F248A4C;
    return;
label_7F248A3C:
    ctx->pc = 0x7F248A3Cu;
    // 7F248A3C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F248A40:
    ctx->pc = 0x7F248A40u;
    // 7F248A40: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F248A44:
    ctx->pc = 0x7F248A44u;
    // 7F248A44: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F248A48:
    // 7F248A48: bc    16, 0, 0x7F248A38
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F248A38u;
                return;
            }
            goto label_7F248A38;
        }
    }

label_7F248A4C:
    ctx->pc = 0x7F248A4Cu;
    ctx->downcount -= 1;
    // 7F248A4C: b       0x7F248A94
    {
            goto label_7F248A94;
    }

label_7F248A50:
    ctx->pc = 0x7F248A50u;
    ctx->downcount -= 4;
    // 7F248A50: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F248A54:
    ctx->pc = 0x7F248A54u;
    // 7F248A54: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F248A58:
    ctx->pc = 0x7F248A58u;
    // 7F248A58: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F248A5C:
    loop_7F248A5C(ctx);
    if (ctx->pc == 0x7F248A70u) goto label_7F248A70;
    return;
label_7F248A60:
    ctx->pc = 0x7F248A60u;
    // 7F248A60: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F248A64:
    ctx->pc = 0x7F248A64u;
    // 7F248A64: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F248A68:
    ctx->pc = 0x7F248A68u;
    // 7F248A68: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F248A6C:
    // 7F248A6C: bc    16, 0, 0x7F248A5C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F248A5Cu;
                return;
            }
            goto label_7F248A5C;
        }
    }

label_7F248A70:
    ctx->pc = 0x7F248A70u;
    ctx->downcount -= 1;
    // 7F248A70: b       0x7F248A94
    {
            goto label_7F248A94;
    }

label_7F248A74:
    ctx->pc = 0x7F248A74u;
    ctx->downcount -= 4;
    // 7F248A74: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F248A78:
    ctx->pc = 0x7F248A78u;
    // 7F248A78: addi    r4, r27, -4
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(-4);

label_7F248A7C:
    ctx->pc = 0x7F248A7Cu;
    // 7F248A7C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F248A80:
    loop_7F248A80(ctx);
    if (ctx->pc == 0x7F248A94u) goto label_7F248A94;
    return;
label_7F248A84:
    ctx->pc = 0x7F248A84u;
    // 7F248A84: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F248A88:
    ctx->pc = 0x7F248A88u;
    // 7F248A88: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F248A8C:
    ctx->pc = 0x7F248A8Cu;
    // 7F248A8C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F248A90:
    // 7F248A90: bc    16, 0, 0x7F248A80
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F248A80u;
                return;
            }
            goto label_7F248A80;
        }
    }

label_7F248A94:
    ctx->pc = 0x7F248A94u;
    ctx->downcount -= 4;
    // 7F248A94: lwz     r4, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F248A98:
    ctx->pc = 0x7F248A98u;
    // 7F248A98: lwz     r3, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248A9C:
    ctx->pc = 0x7F248A9Cu;
    // 7F248A9C: lwz     r4, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F248AA0:
    ctx->pc = 0x7F248AA0u;
    // 7F248AA0: bl      0x7F2494B0
    {
            ctx->lr = 0x7F248AA4u;
            goto label_7F2494B0;
    }

label_7F248AA4:
    ctx->pc = 0x7F248AA4u;
    ctx->downcount -= 4;
    // 7F248AA4: lwz     r3, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248AA8:
    ctx->pc = 0x7F248AA8u;
    // 7F248AA8: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F248AAC:
    ctx->pc = 0x7F248AACu;
    // 7F248AAC: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F248AB0:
    ctx->pc = 0x7F248AB0u;
    // 7F248AB0: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F248AB4:
    ctx->pc = 0x7F248AB4u;
    ctx->downcount -= 2;
    // 7F248AB4: cmpwi   r26, 3
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F248AB8:
    ctx->pc = 0x7F248AB8u;
    // 7F248AB8: bc    12, 2, 0x7F248FA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F248FA0;
        }
    }

label_7F248ABC:
    ctx->pc = 0x7F248ABCu;
    ctx->downcount -= 1;
    // 7F248ABC: bc    4, 0, 0x7F248AD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F248AD8;
        }
    }

label_7F248AC0:
    ctx->pc = 0x7F248AC0u;
    ctx->downcount -= 2;
    // 7F248AC0: cmpwi   r26, 1
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

label_7F248AC4:
    ctx->pc = 0x7F248AC4u;
    // 7F248AC4: bc    12, 2, 0x7F248EC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F248EC4;
        }
    }

label_7F248AC8:
    ctx->pc = 0x7F248AC8u;
    ctx->downcount -= 1;
    // 7F248AC8: bc    4, 0, 0x7F249444
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F249444;
        }
    }

label_7F248ACC:
    ctx->pc = 0x7F248ACCu;
    ctx->downcount -= 2;
    // 7F248ACC: cmpwi   r26, 0
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

label_7F248AD0:
    ctx->pc = 0x7F248AD0u;
    // 7F248AD0: bc    4, 0, 0x7F248AEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F248AEC;
        }
    }

label_7F248AD4:
    ctx->pc = 0x7F248AD4u;
    ctx->downcount -= 1;
    // 7F248AD4: b       0x7F249444
    {
            goto label_7F249444;
    }

label_7F248AD8:
    ctx->pc = 0x7F248AD8u;
    ctx->downcount -= 2;
    // 7F248AD8: cmpwi   r26, 17
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(17);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F248ADC:
    ctx->pc = 0x7F248ADCu;
    // 7F248ADC: bc    4, 0, 0x7F249444
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F249444;
        }
    }

label_7F248AE0:
    ctx->pc = 0x7F248AE0u;
    ctx->downcount -= 2;
    // 7F248AE0: cmpwi   r26, 12
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(12);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F248AE4:
    ctx->pc = 0x7F248AE4u;
    // 7F248AE4: bc    4, 0, 0x7F248FA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F248FA0;
        }
    }

label_7F248AE8:
    ctx->pc = 0x7F248AE8u;
    ctx->downcount -= 1;
    // 7F248AE8: b       0x7F249444
    {
            goto label_7F249444;
    }

label_7F248AEC:
    ctx->pc = 0x7F248AECu;
    ctx->downcount -= 3;
    // 7F248AEC: lwz     r0, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F248AF0:
    ctx->pc = 0x7F248AF0u;
    // 7F248AF0: cmpwi   r0, 1
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

label_7F248AF4:
    ctx->pc = 0x7F248AF4u;
    // 7F248AF4: bc    4, 2, 0x7F248E50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F248E50;
        }
    }

label_7F248AF8:
    ctx->pc = 0x7F248AF8u;
    ctx->downcount -= 5;
    // 7F248AF8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F248AFC:
    ctx->pc = 0x7F248AFCu;
    // 7F248AFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F248B00:
    ctx->pc = 0x7F248B00u;
    // 7F248B00: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F248B04:
    ctx->pc = 0x7F248B04u;
    // 7F248B04: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F248B08:
    ctx->pc = 0x7F248B08u;
    // 7F248B08: bl      0x7F012018
    {
            ctx->lr = 0x7F248B0Cu;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F248B0C:
    ctx->pc = 0x7F248B0Cu;
    ctx->downcount -= 5;
    // 7F248B0C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F248B10:
    ctx->pc = 0x7F248B10u;
    // 7F248B10: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F248B14:
    ctx->pc = 0x7F248B14u;
    // 7F248B14: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F248B18:
    ctx->pc = 0x7F248B18u;
    // 7F248B18: or.   r0, r4, r0
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

label_7F248B1C:
    ctx->pc = 0x7F248B1Cu;
    // 7F248B1C: bc    4, 2, 0x7F248B48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F248B48;
        }
    }

label_7F248B20:
    ctx->pc = 0x7F248B20u;
    ctx->downcount -= 5;
    // 7F248B20: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F248B24:
    ctx->pc = 0x7F248B24u;
    // 7F248B24: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F248B28:
    ctx->pc = 0x7F248B28u;
    // 7F248B28: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F248B2C:
    ctx->pc = 0x7F248B2Cu;
    // 7F248B2C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F248B30:
    ctx->pc = 0x7F248B30u;
    // 7F248B30: bl      0x7F012018
    {
            ctx->lr = 0x7F248B34u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F248B34:
    ctx->pc = 0x7F248B34u;
    ctx->downcount -= 5;
    // 7F248B34: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F248B38:
    ctx->pc = 0x7F248B38u;
    // 7F248B38: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F248B3C:
    ctx->pc = 0x7F248B3Cu;
    // 7F248B3C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F248B40:
    ctx->pc = 0x7F248B40u;
    // 7F248B40: or.   r0, r4, r0
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

label_7F248B44:
    ctx->pc = 0x7F248B44u;
    // 7F248B44: bc    12, 2, 0x7F248B60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F248B60;
        }
    }

label_7F248B48:
    ctx->pc = 0x7F248B48u;
    ctx->downcount -= 6;
    // 7F248B48: lwz     r4, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F248B4C:
    ctx->pc = 0x7F248B4Cu;
    // 7F248B4C: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F248B50:
    ctx->pc = 0x7F248B50u;
    // 7F248B50: slw   r0, r0, r25
    {
        u32 sh = ctx->gpr[25] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_7F248B54:
    ctx->pc = 0x7F248B54u;
    // 7F248B54: lwz     r3, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248B58:
    ctx->pc = 0x7F248B58u;
    // 7F248B58: andc   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ~ctx->gpr[0];
    }

label_7F248B5C:
    ctx->pc = 0x7F248B5Cu;
    // 7F248B5C: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F248B60:
    ctx->pc = 0x7F248B60u;
    ctx->downcount -= 5;
    // 7F248B60: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F248B64:
    ctx->pc = 0x7F248B64u;
    // 7F248B64: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F248B68:
    ctx->pc = 0x7F248B68u;
    // 7F248B68: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F248B6C:
    ctx->pc = 0x7F248B6Cu;
    // 7F248B6C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F248B70:
    ctx->pc = 0x7F248B70u;
    // 7F248B70: bl      0x7F012018
    {
            ctx->lr = 0x7F248B74u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F248B74:
    ctx->pc = 0x7F248B74u;
    ctx->downcount -= 5;
    // 7F248B74: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F248B78:
    ctx->pc = 0x7F248B78u;
    // 7F248B78: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F248B7C:
    ctx->pc = 0x7F248B7Cu;
    // 7F248B7C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F248B80:
    ctx->pc = 0x7F248B80u;
    // 7F248B80: or.   r0, r4, r0
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

label_7F248B84:
    ctx->pc = 0x7F248B84u;
    // 7F248B84: bc    4, 2, 0x7F248BA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F248BA4;
        }
    }

label_7F248B88:
    ctx->pc = 0x7F248B88u;
    ctx->downcount -= 1;
    // 7F248B88: bl      0x7F2BBB3C
    {
            ctx->lr = 0x7F248B8Cu;
            ctx->pc = 0x7F2BBB3Cu;
            return;
    }

label_7F248B8C:
    ctx->pc = 0x7F248B8Cu;
    ctx->downcount -= 2;
    // 7F248B8C: cmpwi   r3, 0
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

label_7F248B90:
    ctx->pc = 0x7F248B90u;
    // 7F248B90: bc    12, 2, 0x7F248BA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F248BA4;
        }
    }

label_7F248B94:
    ctx->pc = 0x7F248B94u;
    ctx->downcount -= 2;
    // 7F248B94: lis     r3, 30720
    ctx->gpr[3] = ((u32)(s32)(30720) << 16);

label_7F248B98:
    ctx->pc = 0x7F248B98u;
    // 7F248B98: bl      0x7F012050
    {
            ctx->lr = 0x7F248B9Cu;
            ctx->pc = 0x7F012050u;
            return;
    }

label_7F248B9C:
    ctx->pc = 0x7F248B9Cu;
    ctx->downcount -= 2;
    // 7F248B9C: cmpwi   r3, 0
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

label_7F248BA0:
    ctx->pc = 0x7F248BA0u;
    // 7F248BA0: bc    12, 2, 0x7F248BBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F248BBC;
        }
    }

label_7F248BA4:
    ctx->pc = 0x7F248BA4u;
    ctx->downcount -= 6;
    // 7F248BA4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F248BA8:
    ctx->pc = 0x7F248BA8u;
    // 7F248BA8: li      r0, 300
    ctx->gpr[0] = (u32)(s32)(300);

label_7F248BAC:
    ctx->pc = 0x7F248BACu;
    // 7F248BAC: sth     r3, 166(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(166);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F248BB0:
    ctx->pc = 0x7F248BB0u;
    // 7F248BB0: sth     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F248BB4:
    ctx->pc = 0x7F248BB4u;
    // 7F248BB4: stw     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F248BB8:
    ctx->pc = 0x7F248BB8u;
    // 7F248BB8: b       0x7F249444
    {
            goto label_7F249444;
    }

label_7F248BBC:
    ctx->pc = 0x7F248BBCu;
    ctx->downcount -= 2;
    // 7F248BBC: cmpwi   r28, 2
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

label_7F248BC0:
    ctx->pc = 0x7F248BC0u;
    // 7F248BC0: bc    12, 2, 0x7F249444
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F249444;
        }
    }

label_7F248BC4:
    ctx->pc = 0x7F248BC4u;
    ctx->downcount -= 1;
    // 7F248BC4: bl      0x7F2BBBE0
    {
            ctx->lr = 0x7F248BC8u;
            ctx->pc = 0x7F2BBBE0u;
            return;
    }

label_7F248BC8:
    ctx->pc = 0x7F248BC8u;
    ctx->downcount -= 2;
    // 7F248BC8: cmpwi   r3, 0
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

label_7F248BCC:
    ctx->pc = 0x7F248BCCu;
    // 7F248BCC: bc    4, 2, 0x7F249444
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F249444;
        }
    }

label_7F248BD0:
    ctx->pc = 0x7F248BD0u;
    ctx->downcount -= 6;
    // 7F248BD0: lis     r3, 3
    ctx->gpr[3] = ((u32)(s32)(3) << 16);

label_7F248BD4:
    ctx->pc = 0x7F248BD4u;
    // 7F248BD4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F248BD8:
    ctx->pc = 0x7F248BD8u;
    // 7F248BD8: addi    r3, r3, 256
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(256);

label_7F248BDC:
    ctx->pc = 0x7F248BDCu;
    // 7F248BDC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F248BE0:
    ctx->pc = 0x7F248BE0u;
    // 7F248BE0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F248BE4:
    ctx->pc = 0x7F248BE4u;
    // 7F248BE4: bl      0x7F012018
    {
            ctx->lr = 0x7F248BE8u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F248BE8:
    ctx->pc = 0x7F248BE8u;
    ctx->downcount -= 5;
    // 7F248BE8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F248BEC:
    ctx->pc = 0x7F248BECu;
    // 7F248BEC: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F248BF0:
    ctx->pc = 0x7F248BF0u;
    // 7F248BF0: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F248BF4:
    ctx->pc = 0x7F248BF4u;
    // 7F248BF4: or.   r0, r4, r0
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

label_7F248BF8:
    ctx->pc = 0x7F248BF8u;
    // 7F248BF8: bc    4, 2, 0x7F249444
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F249444;
        }
    }

label_7F248BFC:
    ctx->pc = 0x7F248BFCu;
    ctx->downcount -= 5;
    // 7F248BFC: lis     r4, 16384
    ctx->gpr[4] = ((u32)(s32)(16384) << 16);

label_7F248C00:
    ctx->pc = 0x7F248C00u;
    // 7F248C00: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F248C04:
    ctx->pc = 0x7F248C04u;
    // 7F248C04: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F248C08:
    ctx->pc = 0x7F248C08u;
    // 7F248C08: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F248C0C:
    ctx->pc = 0x7F248C0Cu;
    // 7F248C0C: bl      0x7F012018
    {
            ctx->lr = 0x7F248C10u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F248C10:
    ctx->pc = 0x7F248C10u;
    ctx->downcount -= 5;
    // 7F248C10: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F248C14:
    ctx->pc = 0x7F248C14u;
    // 7F248C14: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F248C18:
    ctx->pc = 0x7F248C18u;
    // 7F248C18: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F248C1C:
    ctx->pc = 0x7F248C1Cu;
    // 7F248C1C: or.   r0, r4, r0
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

label_7F248C20:
    ctx->pc = 0x7F248C20u;
    // 7F248C20: bc    4, 2, 0x7F249444
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F249444;
        }
    }

label_7F248C24:
    ctx->pc = 0x7F248C24u;
    ctx->downcount -= 5;
    // 7F248C24: lha     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F248C28:
    ctx->pc = 0x7F248C28u;
    // 7F248C28: addi    r3, r3, -1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F248C2C:
    ctx->pc = 0x7F248C2Cu;
    // 7F248C2C: extsh. r0, r3
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

label_7F248C30:
    ctx->pc = 0x7F248C30u;
    // 7F248C30: sth     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F248C34:
    ctx->pc = 0x7F248C34u;
    // 7F248C34: bc    4, 2, 0x7F249444
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F249444;
        }
    }

label_7F248C38:
    ctx->pc = 0x7F248C38u;
    ctx->downcount -= 3;
    // 7F248C38: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F248C3C:
    ctx->pc = 0x7F248C3Cu;
    // 7F248C3C: addi    r4, r1, 64
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(64);

label_7F248C40:
    ctx->pc = 0x7F248C40u;
    // 7F248C40: bl      0x7F3CC414
    {
            ctx->lr = 0x7F248C44u;
            ctx->pc = 0x7F3CC414u;
            return;
    }

label_7F248C44:
    ctx->pc = 0x7F248C44u;
    ctx->downcount -= 7;
    // 7F248C44: lwz     r4, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F248C48:
    ctx->pc = 0x7F248C48u;
    // 7F248C48: addi    r5, r1, 64
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(64);

label_7F248C4C:
    ctx->pc = 0x7F248C4Cu;
    // 7F248C4C: li      r6, 79
    ctx->gpr[6] = (u32)(s32)(79);

label_7F248C50:
    ctx->pc = 0x7F248C50u;
    // 7F248C50: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F248C54:
    ctx->pc = 0x7F248C54u;
    // 7F248C54: lwz     r3, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248C58:
    ctx->pc = 0x7F248C58u;
    // 7F248C58: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F248C5C:
    ctx->pc = 0x7F248C5Cu;
    // 7F248C5C: bl      0x7F10B744
    {
            ctx->lr = 0x7F248C60u;
            ctx->pc = 0x7F10B744u;
            return;
    }

label_7F248C60:
    ctx->pc = 0x7F248C60u;
    ctx->downcount -= 2;
    // 7F248C60: cmpwi   r3, 0
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

label_7F248C64:
    ctx->pc = 0x7F248C64u;
    // 7F248C64: bc    12, 2, 0x7F248CC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F248CC0;
        }
    }

label_7F248C68:
    ctx->pc = 0x7F248C68u;
    ctx->downcount -= 2;
    // 7F248C68: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F248C6C:
    ctx->pc = 0x7F248C6Cu;
    // 7F248C6C: bl      0x7F10B7A4
    {
            ctx->lr = 0x7F248C70u;
            ctx->pc = 0x7F10B7A4u;
            return;
    }

label_7F248C70:
    ctx->pc = 0x7F248C70u;
    ctx->downcount -= 2;
    // 7F248C70: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F248C74:
    ctx->pc = 0x7F248C74u;
    // 7F248C74: bl      0x7F3CC594
    {
            ctx->lr = 0x7F248C78u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F248C78:
    ctx->pc = 0x7F248C78u;
    ctx->downcount -= 5;
    // 7F248C78: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F248C7C:
    ctx->pc = 0x7F248C7Cu;
    // 7F248C7C: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F248C7Cu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F248C80:
    ctx->pc = 0x7F248C80u;
    // 7F248C80: lfs     f0, 20780(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F248C80u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20780);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F248C84:
    ctx->pc = 0x7F248C84u;
    // 7F248C84: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F248C84u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F248C88:
    ctx->pc = 0x7F248C88u;
    // 7F248C88: bc    4, 1, 0x7F248CC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F248CC0;
        }
    }

label_7F248C8C:
    ctx->pc = 0x7F248C8Cu;
    ctx->downcount -= 9;
    // 7F248C8C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F248C90:
    ctx->pc = 0x7F248C90u;
    // 7F248C90: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F248C94:
    ctx->pc = 0x7F248C94u;
    // 7F248C94: addi    r4, r3, 20784
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20784);

label_7F248C98:
    ctx->pc = 0x7F248C98u;
    // 7F248C98: lfs     f1, 20760(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F248C98u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20760);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F248C9C:
    ctx->pc = 0x7F248C9Cu;
    // 7F248C9C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F248C9Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F248CA0:
    ctx->pc = 0x7F248CA0u;
    // 7F248CA0: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F248CA4:
    ctx->pc = 0x7F248CA4u;
    // 7F248CA4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F248CA8:
    ctx->pc = 0x7F248CA8u;
    // 7F248CA8: fsubs   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F248CA8u)) return;
    ppc_fsubs(ctx, 2, 2, 0);

label_7F248CAC:
    ctx->pc = 0x7F248CACu;
    // 7F248CAC: bl      0x7F3CC6BC
    {
            ctx->lr = 0x7F248CB0u;
            ctx->pc = 0x7F3CC6BCu;
            return;
    }

label_7F248CB0:
    ctx->pc = 0x7F248CB0u;
    ctx->downcount -= 4;
    // 7F248CB0: lwz     r3, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248CB4:
    ctx->pc = 0x7F248CB4u;
    // 7F248CB4: addi    r4, r1, 48
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(48);

label_7F248CB8:
    ctx->pc = 0x7F248CB8u;
    // 7F248CB8: addi    r5, r1, 64
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(64);

label_7F248CBC:
    ctx->pc = 0x7F248CBCu;
    // 7F248CBC: bl      0x800261B4
    {
            ctx->lr = 0x7F248CC0u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F248CC0:
    ctx->pc = 0x7F248CC0u;
    ctx->downcount -= 2;
    // 7F248CC0: cmpwi   r28, 2
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

label_7F248CC4:
    ctx->pc = 0x7F248CC4u;
    // 7F248CC4: bc    12, 2, 0x7F248DF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F248DF8;
        }
    }

label_7F248CC8:
    ctx->pc = 0x7F248CC8u;
    ctx->downcount -= 1;
    // 7F248CC8: bc    4, 0, 0x7F248CDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F248CDC;
        }
    }

label_7F248CCC:
    ctx->pc = 0x7F248CCCu;
    ctx->downcount -= 2;
    // 7F248CCC: cmpwi   r28, 0
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

label_7F248CD0:
    ctx->pc = 0x7F248CD0u;
    // 7F248CD0: bc    12, 2, 0x7F248D24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F248D24;
        }
    }

label_7F248CD4:
    ctx->pc = 0x7F248CD4u;
    ctx->downcount -= 1;
    // 7F248CD4: bc    4, 0, 0x7F248D6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F248D6C;
        }
    }

label_7F248CD8:
    ctx->pc = 0x7F248CD8u;
    ctx->downcount -= 1;
    // 7F248CD8: b       0x7F248DF8
    {
            goto label_7F248DF8;
    }

label_7F248CDC:
    ctx->pc = 0x7F248CDCu;
    ctx->downcount -= 2;
    // 7F248CDC: cmpwi   r28, 4
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

label_7F248CE0:
    ctx->pc = 0x7F248CE0u;
    // 7F248CE0: bc    4, 0, 0x7F248DF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F248DF8;
        }
    }

label_7F248CE4:
    ctx->pc = 0x7F248CE4u;
    ctx->downcount -= 9;
    // 7F248CE4: lwzx    r9, r30, r29
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[29];
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F248CE8:
    ctx->pc = 0x7F248CE8u;
    // 7F248CE8: addi    r3, r1, 64
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(64);

label_7F248CEC:
    ctx->pc = 0x7F248CECu;
    // 7F248CEC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F248CF0:
    ctx->pc = 0x7F248CF0u;
    // 7F248CF0: li      r5, 1000
    ctx->gpr[5] = (u32)(s32)(1000);

label_7F248CF4:
    ctx->pc = 0x7F248CF4u;
    // 7F248CF4: li      r6, 2000
    ctx->gpr[6] = (u32)(s32)(2000);

label_7F248CF8:
    ctx->pc = 0x7F248CF8u;
    // 7F248CF8: li      r7, 40
    ctx->gpr[7] = (u32)(s32)(40);

label_7F248CFC:
    ctx->pc = 0x7F248CFCu;
    // 7F248CFC: li      r8, 10
    ctx->gpr[8] = (u32)(s32)(10);

label_7F248D00:
    ctx->pc = 0x7F248D00u;
    // 7F248D00: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F248D04:
    ctx->pc = 0x7F248D04u;
    // 7F248D04: bl      0x7F23ADAC
    {
            ctx->lr = 0x7F248D08u;
            ctx->pc = 0x7F23ADACu;
            return;
    }

label_7F248D08:
    ctx->pc = 0x7F248D08u;
    ctx->downcount -= 6;
    // 7F248D08: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F248D0C:
    ctx->pc = 0x7F248D0Cu;
    // 7F248D0C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F248D10:
    ctx->pc = 0x7F248D10u;
    // 7F248D10: addi    r6, r3, -32768
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F248D14:
    ctx->pc = 0x7F248D14u;
    // 7F248D14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F248D18:
    ctx->pc = 0x7F248D18u;
    // 7F248D18: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_7F248D1C:
    ctx->pc = 0x7F248D1Cu;
    // 7F248D1C: bl      0x7F07AA5C
    {
            ctx->lr = 0x7F248D20u;
            ctx->pc = 0x7F07AA5Cu;
            return;
    }

label_7F248D20:
    ctx->pc = 0x7F248D20u;
    ctx->downcount -= 1;
    // 7F248D20: b       0x7F248DF8
    {
            goto label_7F248DF8;
    }

label_7F248D24:
    ctx->pc = 0x7F248D24u;
    ctx->downcount -= 2;
    // 7F248D24: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F248D28:
    ctx->pc = 0x7F248D28u;
    // 7F248D28: bl      0x7F239FD8
    {
            ctx->lr = 0x7F248D2Cu;
            ctx->pc = 0x7F239FD8u;
            return;
    }

label_7F248D2C:
    ctx->pc = 0x7F248D2Cu;
    ctx->downcount -= 9;
    // 7F248D2C: lwzx    r9, r30, r29
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[29];
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F248D30:
    ctx->pc = 0x7F248D30u;
    // 7F248D30: addi    r3, r1, 64
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(64);

label_7F248D34:
    ctx->pc = 0x7F248D34u;
    // 7F248D34: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F248D38:
    ctx->pc = 0x7F248D38u;
    // 7F248D38: li      r5, 1000
    ctx->gpr[5] = (u32)(s32)(1000);

label_7F248D3C:
    ctx->pc = 0x7F248D3Cu;
    // 7F248D3C: li      r6, 2000
    ctx->gpr[6] = (u32)(s32)(2000);

label_7F248D40:
    ctx->pc = 0x7F248D40u;
    // 7F248D40: li      r7, 10
    ctx->gpr[7] = (u32)(s32)(10);

label_7F248D44:
    ctx->pc = 0x7F248D44u;
    // 7F248D44: li      r8, 2
    ctx->gpr[8] = (u32)(s32)(2);

label_7F248D48:
    ctx->pc = 0x7F248D48u;
    // 7F248D48: li      r10, 11
    ctx->gpr[10] = (u32)(s32)(11);

label_7F248D4C:
    ctx->pc = 0x7F248D4Cu;
    // 7F248D4C: bl      0x7F23ADAC
    {
            ctx->lr = 0x7F248D50u;
            ctx->pc = 0x7F23ADACu;
            return;
    }

label_7F248D50:
    ctx->pc = 0x7F248D50u;
    ctx->downcount -= 6;
    // 7F248D50: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F248D54:
    ctx->pc = 0x7F248D54u;
    // 7F248D54: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F248D58:
    ctx->pc = 0x7F248D58u;
    // 7F248D58: addi    r6, r3, -32768
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F248D5C:
    ctx->pc = 0x7F248D5Cu;
    // 7F248D5C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F248D60:
    ctx->pc = 0x7F248D60u;
    // 7F248D60: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_7F248D64:
    ctx->pc = 0x7F248D64u;
    // 7F248D64: bl      0x7F07AA5C
    {
            ctx->lr = 0x7F248D68u;
            ctx->pc = 0x7F07AA5Cu;
            return;
    }

label_7F248D68:
    ctx->pc = 0x7F248D68u;
    ctx->downcount -= 1;
    // 7F248D68: b       0x7F248DF8
    {
            goto label_7F248DF8;
    }

label_7F248D6C:
    ctx->pc = 0x7F248D6Cu;
    ctx->downcount -= 2;
    // 7F248D6C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F248D70:
    ctx->pc = 0x7F248D70u;
    // 7F248D70: bl      0x7F23A104
    {
            ctx->lr = 0x7F248D74u;
            ctx->pc = 0x7F23A104u;
            return;
    }

label_7F248D74:
    ctx->pc = 0x7F248D74u;
    ctx->downcount -= 9;
    // 7F248D74: addi    r3, r1, 64
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(64);

label_7F248D78:
    ctx->pc = 0x7F248D78u;
    // 7F248D78: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F248D7C:
    ctx->pc = 0x7F248D7Cu;
    // 7F248D7C: li      r5, 10000
    ctx->gpr[5] = (u32)(s32)(10000);

label_7F248D80:
    ctx->pc = 0x7F248D80u;
    // 7F248D80: li      r6, 10000
    ctx->gpr[6] = (u32)(s32)(10000);

label_7F248D84:
    ctx->pc = 0x7F248D84u;
    // 7F248D84: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F248D88:
    ctx->pc = 0x7F248D88u;
    // 7F248D88: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F248D8C:
    ctx->pc = 0x7F248D8Cu;
    // 7F248D8C: li      r9, 11
    ctx->gpr[9] = (u32)(s32)(11);

label_7F248D90:
    ctx->pc = 0x7F248D90u;
    // 7F248D90: li      r10, 6
    ctx->gpr[10] = (u32)(s32)(6);

label_7F248D94:
    ctx->pc = 0x7F248D94u;
    // 7F248D94: bl      0x7F23ADAC
    {
            ctx->lr = 0x7F248D98u;
            ctx->pc = 0x7F23ADACu;
            return;
    }

label_7F248D98:
    ctx->pc = 0x7F248D98u;
    ctx->downcount -= 9;
    // 7F248D98: addi    r3, r27, 48
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(48);

label_7F248D9C:
    ctx->pc = 0x7F248D9Cu;
    // 7F248D9C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F248DA0:
    ctx->pc = 0x7F248DA0u;
    // 7F248DA0: li      r5, 20000
    ctx->gpr[5] = (u32)(s32)(20000);

label_7F248DA4:
    ctx->pc = 0x7F248DA4u;
    // 7F248DA4: li      r6, 20000
    ctx->gpr[6] = (u32)(s32)(20000);

label_7F248DA8:
    ctx->pc = 0x7F248DA8u;
    // 7F248DA8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F248DAC:
    ctx->pc = 0x7F248DACu;
    // 7F248DAC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F248DB0:
    ctx->pc = 0x7F248DB0u;
    // 7F248DB0: li      r9, 46
    ctx->gpr[9] = (u32)(s32)(46);

label_7F248DB4:
    ctx->pc = 0x7F248DB4u;
    // 7F248DB4: li      r10, 6
    ctx->gpr[10] = (u32)(s32)(6);

label_7F248DB8:
    ctx->pc = 0x7F248DB8u;
    // 7F248DB8: bl      0x7F23ADAC
    {
            ctx->lr = 0x7F248DBCu;
            ctx->pc = 0x7F23ADACu;
            return;
    }

label_7F248DBC:
    ctx->pc = 0x7F248DBCu;
    ctx->downcount -= 9;
    // 7F248DBC: addi    r3, r1, 64
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(64);

label_7F248DC0:
    ctx->pc = 0x7F248DC0u;
    // 7F248DC0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F248DC4:
    ctx->pc = 0x7F248DC4u;
    // 7F248DC4: li      r5, 1000
    ctx->gpr[5] = (u32)(s32)(1000);

label_7F248DC8:
    ctx->pc = 0x7F248DC8u;
    // 7F248DC8: li      r6, 2000
    ctx->gpr[6] = (u32)(s32)(2000);

label_7F248DCC:
    ctx->pc = 0x7F248DCCu;
    // 7F248DCC: li      r7, 10
    ctx->gpr[7] = (u32)(s32)(10);

label_7F248DD0:
    ctx->pc = 0x7F248DD0u;
    // 7F248DD0: li      r8, 2
    ctx->gpr[8] = (u32)(s32)(2);

label_7F248DD4:
    ctx->pc = 0x7F248DD4u;
    // 7F248DD4: li      r9, 10
    ctx->gpr[9] = (u32)(s32)(10);

label_7F248DD8:
    ctx->pc = 0x7F248DD8u;
    // 7F248DD8: li      r10, 11
    ctx->gpr[10] = (u32)(s32)(11);

label_7F248DDC:
    ctx->pc = 0x7F248DDCu;
    // 7F248DDC: bl      0x7F23ADAC
    {
            ctx->lr = 0x7F248DE0u;
            ctx->pc = 0x7F23ADACu;
            return;
    }

label_7F248DE0:
    ctx->pc = 0x7F248DE0u;
    ctx->downcount -= 6;
    // 7F248DE0: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F248DE4:
    ctx->pc = 0x7F248DE4u;
    // 7F248DE4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F248DE8:
    ctx->pc = 0x7F248DE8u;
    // 7F248DE8: addi    r6, r3, -32768
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F248DEC:
    ctx->pc = 0x7F248DECu;
    // 7F248DEC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F248DF0:
    ctx->pc = 0x7F248DF0u;
    // 7F248DF0: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_7F248DF4:
    ctx->pc = 0x7F248DF4u;
    // 7F248DF4: bl      0x7F07AA5C
    {
            ctx->lr = 0x7F248DF8u;
            ctx->pc = 0x7F07AA5Cu;
            return;
    }

label_7F248DF8:
    ctx->pc = 0x7F248DF8u;
    ctx->downcount -= 3;
    // 7F248DF8: lwzx    r3, r30, r29
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[29];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248DFC:
    ctx->pc = 0x7F248DFCu;
    // 7F248DFC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F248E00:
    ctx->pc = 0x7F248E00u;
    // 7F248E00: bl      0x7F01EC24
    {
            ctx->lr = 0x7F248E04u;
            ctx->pc = 0x7F01EC24u;
            return;
    }

label_7F248E04:
    ctx->pc = 0x7F248E04u;
    ctx->downcount -= 9;
    // 7F248E04: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F248E08:
    ctx->pc = 0x7F248E08u;
    // 7F248E08: addi    r5, r3, 13880
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F248E0C:
    ctx->pc = 0x7F248E0Cu;
    // 7F248E0C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F248E10:
    ctx->pc = 0x7F248E10u;
    // 7F248E10: lha     r3, 360(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(360);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F248E14:
    ctx->pc = 0x7F248E14u;
    // 7F248E14: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F248E18:
    ctx->pc = 0x7F248E18u;
    // 7F248E18: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F248E1C:
    ctx->pc = 0x7F248E1Cu;
    // 7F248E1C: sth     r3, 360(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(360);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F248E20:
    ctx->pc = 0x7F248E20u;
    // 7F248E20: cmpwi   r0, 30000
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(30000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F248E24:
    ctx->pc = 0x7F248E24u;
    // 7F248E24: bc    4, 1, 0x7F248E34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F248E34;
        }
    }

label_7F248E28:
    ctx->pc = 0x7F248E28u;
    ctx->downcount -= 3;
    // 7F248E28: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248E2C:
    ctx->pc = 0x7F248E2Cu;
    // 7F248E2C: li      r0, 30000
    ctx->gpr[0] = (u32)(s32)(30000);

label_7F248E30:
    ctx->pc = 0x7F248E30u;
    // 7F248E30: sth     r0, 360(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(360);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F248E34:
    ctx->pc = 0x7F248E34u;
    ctx->downcount -= 7;
    // 7F248E34: li      r0, 30
    ctx->gpr[0] = (u32)(s32)(30);

label_7F248E38:
    ctx->pc = 0x7F248E38u;
    // 7F248E38: li      r3, 300
    ctx->gpr[3] = (u32)(s32)(300);

label_7F248E3C:
    ctx->pc = 0x7F248E3Cu;
    // 7F248E3C: sth     r0, 166(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(166);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F248E40:
    ctx->pc = 0x7F248E40u;
    // 7F248E40: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F248E44:
    ctx->pc = 0x7F248E44u;
    // 7F248E44: sth     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F248E48:
    ctx->pc = 0x7F248E48u;
    // 7F248E48: stw     r0, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F248E4C:
    ctx->pc = 0x7F248E4Cu;
    // 7F248E4C: b       0x7F249444
    {
            goto label_7F249444;
    }

label_7F248E50:
    ctx->pc = 0x7F248E50u;
    ctx->downcount -= 5;
    // 7F248E50: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F248E54:
    ctx->pc = 0x7F248E54u;
    // 7F248E54: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F248E58:
    ctx->pc = 0x7F248E58u;
    // 7F248E58: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F248E5C:
    ctx->pc = 0x7F248E5Cu;
    // 7F248E5C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F248E60:
    ctx->pc = 0x7F248E60u;
    // 7F248E60: bl      0x7F012018
    {
            ctx->lr = 0x7F248E64u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F248E64:
    ctx->pc = 0x7F248E64u;
    ctx->downcount -= 5;
    // 7F248E64: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F248E68:
    ctx->pc = 0x7F248E68u;
    // 7F248E68: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F248E6C:
    ctx->pc = 0x7F248E6Cu;
    // 7F248E6C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F248E70:
    ctx->pc = 0x7F248E70u;
    // 7F248E70: or.   r0, r4, r0
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

label_7F248E74:
    ctx->pc = 0x7F248E74u;
    // 7F248E74: bc    12, 2, 0x7F249444
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F249444;
        }
    }

label_7F248E78:
    ctx->pc = 0x7F248E78u;
    ctx->downcount -= 9;
    // 7F248E78: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F248E7C:
    ctx->pc = 0x7F248E7Cu;
    // 7F248E7C: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F248E80:
    ctx->pc = 0x7F248E80u;
    // 7F248E80: slw   r0, r0, r25
    {
        u32 sh = ctx->gpr[25] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_7F248E84:
    ctx->pc = 0x7F248E84u;
    // 7F248E84: lwz     r3, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248E88:
    ctx->pc = 0x7F248E88u;
    // 7F248E88: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_7F248E8C:
    ctx->pc = 0x7F248E8Cu;
    // 7F248E8C: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F248E90:
    ctx->pc = 0x7F248E90u;
    // 7F248E90: lwz     r3, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248E94:
    ctx->pc = 0x7F248E94u;
    // 7F248E94: cmplwi  r3, 0x0000
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

label_7F248E98:
    ctx->pc = 0x7F248E98u;
    // 7F248E98: bc    12, 2, 0x7F248EA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F248EA8;
        }
    }

label_7F248E9C:
    ctx->pc = 0x7F248E9Cu;
    ctx->downcount -= 3;
    // 7F248E9C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F248EA0:
    ctx->pc = 0x7F248EA0u;
    // 7F248EA0: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F248EA4:
    ctx->pc = 0x7F248EA4u;
    // 7F248EA4: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F248EA8:
    ctx->pc = 0x7F248EA8u;
    ctx->downcount -= 3;
    // 7F248EA8: lwz     r3, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248EAC:
    ctx->pc = 0x7F248EACu;
    // 7F248EAC: cmplwi  r3, 0x0000
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

label_7F248EB0:
    ctx->pc = 0x7F248EB0u;
    // 7F248EB0: bc    12, 2, 0x7F249444
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F249444;
        }
    }

label_7F248EB4:
    ctx->pc = 0x7F248EB4u;
    ctx->downcount -= 4;
    // 7F248EB4: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F248EB8:
    ctx->pc = 0x7F248EB8u;
    // 7F248EB8: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F248EBC:
    ctx->pc = 0x7F248EBCu;
    // 7F248EBC: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F248EC0:
    ctx->pc = 0x7F248EC0u;
    // 7F248EC0: b       0x7F249444
    {
            goto label_7F249444;
    }

label_7F248EC4:
    ctx->pc = 0x7F248EC4u;
    ctx->downcount -= 5;
    // 7F248EC4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F248EC8:
    ctx->pc = 0x7F248EC8u;
    // 7F248EC8: stw     r0, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F248ECC:
    ctx->pc = 0x7F248ECCu;
    // 7F248ECC: lwz     r0, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F248ED0:
    ctx->pc = 0x7F248ED0u;
    // 7F248ED0: cmplwi  r0, 0x0000
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

label_7F248ED4:
    ctx->pc = 0x7F248ED4u;
    // 7F248ED4: bc    12, 2, 0x7F249444
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F249444;
        }
    }

label_7F248ED8:
    ctx->pc = 0x7F248ED8u;
    ctx->downcount -= 15;
    // 7F248ED8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F248EDC:
    ctx->pc = 0x7F248EDCu;
    // 7F248EDC: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F248EE0:
    ctx->pc = 0x7F248EE0u;
    // 7F248EE0: addi    r10, r3, 20764
    ctx->gpr[10] = ctx->gpr[3] + (u32)(s32)(20764);

label_7F248EE4:
    ctx->pc = 0x7F248EE4u;
    // 7F248EE4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F248EE8:
    ctx->pc = 0x7F248EE8u;
    // 7F248EE8: lwz     r9, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F248EEC:
    ctx->pc = 0x7F248EECu;
    // 7F248EEC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F248EF0:
    ctx->pc = 0x7F248EF0u;
    // 7F248EF0: lwz     r8, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F248EF4:
    ctx->pc = 0x7F248EF4u;
    // 7F248EF4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F248EF8:
    ctx->pc = 0x7F248EF8u;
    // 7F248EF8: lwz     r7, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F248EFC:
    ctx->pc = 0x7F248EFCu;
    // 7F248EFC: lwz     r0, 12(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F248F00:
    ctx->pc = 0x7F248F00u;
    // 7F248F00: stw     r9, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F248F04:
    ctx->pc = 0x7F248F04u;
    // 7F248F04: stw     r8, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F248F08:
    ctx->pc = 0x7F248F08u;
    // 7F248F08: stw     r7, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F248F0C:
    ctx->pc = 0x7F248F0Cu;
    // 7F248F0C: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F248F10:
    ctx->pc = 0x7F248F10u;
    // 7F248F10: bl      0x7F012018
    {
            ctx->lr = 0x7F248F14u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F248F14:
    ctx->pc = 0x7F248F14u;
    ctx->downcount -= 5;
    // 7F248F14: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F248F18:
    ctx->pc = 0x7F248F18u;
    // 7F248F18: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F248F1C:
    ctx->pc = 0x7F248F1Cu;
    // 7F248F1C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F248F20:
    ctx->pc = 0x7F248F20u;
    // 7F248F20: or.   r0, r4, r0
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

label_7F248F24:
    ctx->pc = 0x7F248F24u;
    // 7F248F24: bc    4, 2, 0x7F248F8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F248F8C;
        }
    }

label_7F248F28:
    ctx->pc = 0x7F248F28u;
    ctx->downcount -= 6;
    // 7F248F28: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F248F2C:
    ctx->pc = 0x7F248F2Cu;
    // 7F248F2C: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F248F30:
    ctx->pc = 0x7F248F30u;
    // 7F248F30: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248F34:
    ctx->pc = 0x7F248F34u;
    // 7F248F34: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248F38:
    ctx->pc = 0x7F248F38u;
    // 7F248F38: addi    r3, r3, 4332
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4332);

label_7F248F3C:
    ctx->pc = 0x7F248F3Cu;
    // 7F248F3C: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F248F40u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F248F40:
    ctx->pc = 0x7F248F40u;
    ctx->downcount -= 4;
    // 7F248F40: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F248F44:
    ctx->pc = 0x7F248F44u;
    // 7F248F44: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F248F48:
    ctx->pc = 0x7F248F48u;
    // 7F248F48: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F248F4C:
    ctx->pc = 0x7F248F4Cu;
    // 7F248F4C: bl      0x7F3B3648
    {
            ctx->lr = 0x7F248F50u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F248F50:
    ctx->pc = 0x7F248F50u;
    ctx->downcount -= 15;
    // 7F248F50: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F248F54:
    ctx->pc = 0x7F248F54u;
    // 7F248F54: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F248F58:
    ctx->pc = 0x7F248F58u;
    // 7F248F58: lfs     f1, 20760(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F248F58u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20760);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F248F5C:
    ctx->pc = 0x7F248F5Cu;
    // 7F248F5C: rlwinm r0, r28, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[28], 3u) & 0xFFFFFFF8u;
    }

label_7F248F60:
    ctx->pc = 0x7F248F60u;
    // 7F248F60: lwz     r3, -8612(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8612);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248F64:
    ctx->pc = 0x7F248F64u;
    // 7F248F64: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F248F68:
    ctx->pc = 0x7F248F68u;
    // 7F248F68: lwz     r5, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F248F6C:
    ctx->pc = 0x7F248F6Cu;
    // 7F248F6C: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F248F6Cu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F248F70:
    ctx->pc = 0x7F248F70u;
    // 7F248F70: lwzx    r6, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F248F74:
    ctx->pc = 0x7F248F74u;
    // 7F248F74: addi    r4, r4, 12832
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F248F78:
    ctx->pc = 0x7F248F78u;
    // 7F248F78: addi    r3, r5, 4
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(4);

label_7F248F7C:
    ctx->pc = 0x7F248F7Cu;
    // 7F248F7C: addi    r5, r1, 32
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(32);

label_7F248F80:
    ctx->pc = 0x7F248F80u;
    // 7F248F80: li      r7, 55
    ctx->gpr[7] = (u32)(s32)(55);

label_7F248F84:
    ctx->pc = 0x7F248F84u;
    // 7F248F84: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F248F88:
    ctx->pc = 0x7F248F88u;
    // 7F248F88: bl      0x7F27AEFC
    {
            ctx->lr = 0x7F248F8Cu;
            ctx->pc = 0x7F27AEFCu;
            return;
    }

label_7F248F8C:
    ctx->pc = 0x7F248F8Cu;
    ctx->downcount -= 5;
    // 7F248F8C: lwz     r3, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F248F90:
    ctx->pc = 0x7F248F90u;
    // 7F248F90: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F248F94:
    ctx->pc = 0x7F248F94u;
    // 7F248F94: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F248F98:
    ctx->pc = 0x7F248F98u;
    // 7F248F98: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F248F9C:
    ctx->pc = 0x7F248F9Cu;
    // 7F248F9C: b       0x7F249444
    {
            goto label_7F249444;
    }

label_7F248FA0:
    ctx->pc = 0x7F248FA0u;
    ctx->downcount -= 2;
    // 7F248FA0: cmplwi  r26, 0x0003
    {
        u32 val_a = (u32)(ctx->gpr[26]);
        u32 val_b = (u32)(0x0003u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F248FA4:
    ctx->pc = 0x7F248FA4u;
    // 7F248FA4: bc    12, 2, 0x7F249128
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F249128;
        }
    }

label_7F248FA8:
    ctx->pc = 0x7F248FA8u;
    ctx->downcount -= 3;
    // 7F248FA8: lwz     r0, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F248FAC:
    ctx->pc = 0x7F248FACu;
    // 7F248FAC: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F248FB0:
    ctx->pc = 0x7F248FB0u;
    // 7F248FB0: bc    12, 2, 0x7F249444
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F249444;
        }
    }

label_7F248FB4:
    ctx->pc = 0x7F248FB4u;
    ctx->downcount -= 15;
    // 7F248FB4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F248FB8:
    ctx->pc = 0x7F248FB8u;
    // 7F248FB8: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F248FBC:
    ctx->pc = 0x7F248FBCu;
    // 7F248FBC: addi    r10, r3, 11544
    ctx->gpr[10] = ctx->gpr[3] + (u32)(s32)(11544);

label_7F248FC0:
    ctx->pc = 0x7F248FC0u;
    // 7F248FC0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F248FC4:
    ctx->pc = 0x7F248FC4u;
    // 7F248FC4: lwz     r9, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F248FC8:
    ctx->pc = 0x7F248FC8u;
    // 7F248FC8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F248FCC:
    ctx->pc = 0x7F248FCCu;
    // 7F248FCC: lwz     r8, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F248FD0:
    ctx->pc = 0x7F248FD0u;
    // 7F248FD0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F248FD4:
    ctx->pc = 0x7F248FD4u;
    // 7F248FD4: lwz     r7, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F248FD8:
    ctx->pc = 0x7F248FD8u;
    // 7F248FD8: lwz     r0, 12(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F248FDC:
    ctx->pc = 0x7F248FDCu;
    // 7F248FDC: stw     r9, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F248FE0:
    ctx->pc = 0x7F248FE0u;
    // 7F248FE0: stw     r8, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F248FE4:
    ctx->pc = 0x7F248FE4u;
    // 7F248FE4: stw     r7, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F248FE8:
    ctx->pc = 0x7F248FE8u;
    // 7F248FE8: stw     r0, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F248FEC:
    ctx->pc = 0x7F248FECu;
    // 7F248FEC: bl      0x7F012018
    {
            ctx->lr = 0x7F248FF0u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F248FF0:
    ctx->pc = 0x7F248FF0u;
    ctx->downcount -= 5;
    // 7F248FF0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F248FF4:
    ctx->pc = 0x7F248FF4u;
    // 7F248FF4: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F248FF8:
    ctx->pc = 0x7F248FF8u;
    // 7F248FF8: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F248FFC:
    ctx->pc = 0x7F248FFCu;
    // 7F248FFC: or.   r0, r4, r0
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

label_7F249000:
    ctx->pc = 0x7F249000u;
    // 7F249000: bc    12, 2, 0x7F24907C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24907C;
        }
    }

label_7F249004:
    ctx->pc = 0x7F249004u;
    ctx->downcount -= 30;
    // 7F249004: addi    r8, r26, -12
    ctx->gpr[8] = ctx->gpr[26] + (u32)(s32)(-12);

label_7F249008:
    ctx->pc = 0x7F249008u;
    // 7F249008: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F24900C:
    ctx->pc = 0x7F24900Cu;
    // 7F24900C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F249010:
    ctx->pc = 0x7F249010u;
    // 7F249010: stw     r8, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F249014:
    ctx->pc = 0x7F249014u;
    // 7F249014: addi    r6, r3, 20824
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(20824);

label_7F249018:
    ctx->pc = 0x7F249018u;
    // 7F249018: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F24901C:
    ctx->pc = 0x7F24901Cu;
    // 7F24901C: stw     r0, 208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F249020:
    ctx->pc = 0x7F249020u;
    // 7F249020: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F249024:
    ctx->pc = 0x7F249024u;
    // 7F249024: lfd     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F249024u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F249028:
    ctx->pc = 0x7F249028u;
    // 7F249028: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F24902C:
    ctx->pc = 0x7F24902Cu;
    // 7F24902C: lfd     f1, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24902Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F249030:
    ctx->pc = 0x7F249030u;
    // 7F249030: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F249034:
    ctx->pc = 0x7F249034u;
    // 7F249034: stw     r8, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F249038:
    ctx->pc = 0x7F249038u;
    // 7F249038: fsubs   f4, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F249038u)) return;
    ppc_fsubs(ctx, 4, 1, 2);

label_7F24903C:
    ctx->pc = 0x7F24903Cu;
    // 7F24903C: lfs     f5, 20788(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F24903Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(20788);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F249040:
    ctx->pc = 0x7F249040u;
    // 7F249040: stw     r0, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F249044:
    ctx->pc = 0x7F249044u;
    // 7F249044: lfs     f3, 20744(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F249044u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20744);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F249048:
    ctx->pc = 0x7F249048u;
    // 7F249048: lfd     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F249048u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F24904C:
    ctx->pc = 0x7F24904Cu;
    // 7F24904C: fmadds f3, f5, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x7F24904Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[5], ctx->fpr[4], ctx->fpr[3], true, false, false, &result))
            ctx->fpr[3] = ctx->ps1[3] = result;
    }

label_7F249050:
    ctx->pc = 0x7F249050u;
    // 7F249050: lfs     f4, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F249050u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F249054:
    ctx->pc = 0x7F249054u;
    // 7F249054: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F249054u)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_7F249058:
    ctx->pc = 0x7F249058u;
    // 7F249058: lfs     f2, 20796(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F249058u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20796);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F24905C:
    ctx->pc = 0x7F24905Cu;
    // 7F24905C: lfs     f0, 20792(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24905Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20792);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F249060:
    ctx->pc = 0x7F249060u;
    // 7F249060: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F249060u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F249064:
    ctx->pc = 0x7F249064u;
    // 7F249064: lfs     f1, 116(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F249064u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F249068:
    ctx->pc = 0x7F249068u;
    // 7F249068: fmuls   f2, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x7F249068u)) return;
    ppc_fmuls(ctx, 2, 4, 3);

label_7F24906C:
    ctx->pc = 0x7F24906Cu;
    // 7F24906C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24906Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F249070:
    ctx->pc = 0x7F249070u;
    // 7F249070: stfs     f2, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F249070u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F249074:
    ctx->pc = 0x7F249074u;
    // 7F249074: stfs     f0, 116(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F249074u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F249078:
    ctx->pc = 0x7F249078u;
    // 7F249078: b       0x7F2490E8
    {
            goto label_7F2490E8;
    }

label_7F24907C:
    ctx->pc = 0x7F24907Cu;
    ctx->downcount -= 27;
    // 7F24907C: addi    r7, r26, -12
    ctx->gpr[7] = ctx->gpr[26] + (u32)(s32)(-12);

label_7F249080:
    ctx->pc = 0x7F249080u;
    // 7F249080: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F249084:
    ctx->pc = 0x7F249084u;
    // 7F249084: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F249088:
    ctx->pc = 0x7F249088u;
    // 7F249088: stw     r7, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F24908C:
    ctx->pc = 0x7F24908Cu;
    // 7F24908C: addi    r5, r3, 20824
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(20824);

label_7F249090:
    ctx->pc = 0x7F249090u;
    // 7F249090: lis     r6, 32584
    ctx->gpr[6] = ((u32)(s32)(32584) << 16);

label_7F249094:
    ctx->pc = 0x7F249094u;
    // 7F249094: stw     r0, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F249098:
    ctx->pc = 0x7F249098u;
    // 7F249098: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F24909C:
    ctx->pc = 0x7F24909Cu;
    // 7F24909C: lfd     f5, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F24909Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2490A0:
    ctx->pc = 0x7F2490A0u;
    // 7F2490A0: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2490A4:
    ctx->pc = 0x7F2490A4u;
    // 7F2490A4: lfd     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2490A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2490A8:
    ctx->pc = 0x7F2490A8u;
    // 7F2490A8: stw     r7, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2490AC:
    ctx->pc = 0x7F2490ACu;
    // 7F2490AC: fsubs   f2, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x7F2490ACu)) return;
    ppc_fsubs(ctx, 2, 0, 5);

label_7F2490B0:
    ctx->pc = 0x7F2490B0u;
    // 7F2490B0: lfs     f3, 11576(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2490B0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(11576);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2490B4:
    ctx->pc = 0x7F2490B4u;
    // 7F2490B4: stw     r0, 208(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2490B8:
    ctx->pc = 0x7F2490B8u;
    // 7F2490B8: lfs     f4, 20800(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2490B8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20800);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F2490BC:
    ctx->pc = 0x7F2490BCu;
    // 7F2490BC: lfd     f0, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2490BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2490C0:
    ctx->pc = 0x7F2490C0u;
    // 7F2490C0: fmadds f3, f3, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x7F2490C0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[2], ctx->fpr[4], true, false, false, &result))
            ctx->fpr[3] = ctx->ps1[3] = result;
    }

label_7F2490C4:
    ctx->pc = 0x7F2490C4u;
    // 7F2490C4: lfs     f1, 11580(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2490C4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(11580);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2490C8:
    ctx->pc = 0x7F2490C8u;
    // 7F2490C8: fsubs   f0, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x7F2490C8u)) return;
    ppc_fsubs(ctx, 0, 0, 5);

label_7F2490CC:
    ctx->pc = 0x7F2490CCu;
    // 7F2490CC: lfs     f5, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2490CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F2490D0:
    ctx->pc = 0x7F2490D0u;
    // 7F2490D0: lfs     f2, 116(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2490D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2490D4:
    ctx->pc = 0x7F2490D4u;
    // 7F2490D4: fmuls   f3, f5, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2490D4u)) return;
    ppc_fmuls(ctx, 3, 5, 3);

label_7F2490D8:
    ctx->pc = 0x7F2490D8u;
    // 7F2490D8: fmadds f0, f1, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F2490D8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[0], ctx->fpr[4], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F2490DC:
    ctx->pc = 0x7F2490DCu;
    // 7F2490DC: stfs     f3, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2490DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F2490E0:
    ctx->pc = 0x7F2490E0u;
    // 7F2490E0: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2490E0u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F2490E4:
    ctx->pc = 0x7F2490E4u;
    // 7F2490E4: stfs     f0, 116(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2490E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2490E8:
    ctx->pc = 0x7F2490E8u;
    ctx->downcount -= 5;
    // 7F2490E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2490EC:
    ctx->pc = 0x7F2490ECu;
    // 7F2490EC: li      r3, 1024
    ctx->gpr[3] = (u32)(s32)(1024);

label_7F2490F0:
    ctx->pc = 0x7F2490F0u;
    // 7F2490F0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2490F4:
    ctx->pc = 0x7F2490F4u;
    // 7F2490F4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2490F8:
    ctx->pc = 0x7F2490F8u;
    // 7F2490F8: bl      0x7F012018
    {
            ctx->lr = 0x7F2490FCu;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F2490FC:
    ctx->pc = 0x7F2490FCu;
    ctx->downcount -= 5;
    // 7F2490FC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F249100:
    ctx->pc = 0x7F249100u;
    // 7F249100: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F249104:
    ctx->pc = 0x7F249104u;
    // 7F249104: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F249108:
    ctx->pc = 0x7F249108u;
    // 7F249108: or.   r0, r4, r0
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

label_7F24910C:
    ctx->pc = 0x7F24910Cu;
    // 7F24910C: bc    12, 2, 0x7F24915C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24915C;
        }
    }

label_7F249110:
    ctx->pc = 0x7F249110u;
    ctx->downcount -= 6;
    // 7F249110: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F249114:
    ctx->pc = 0x7F249114u;
    // 7F249114: lfs     f1, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F249114u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F249118:
    ctx->pc = 0x7F249118u;
    // 7F249118: lfs     f0, 20804(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F249118u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20804);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24911C:
    ctx->pc = 0x7F24911Cu;
    // 7F24911C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24911Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F249120:
    ctx->pc = 0x7F249120u;
    // 7F249120: stfs     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F249120u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F249124:
    ctx->pc = 0x7F249124u;
    // 7F249124: b       0x7F24915C
    {
            goto label_7F24915C;
    }

label_7F249128:
    ctx->pc = 0x7F249128u;
    ctx->downcount -= 3;
    // 7F249128: lwz     r0, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24912C:
    ctx->pc = 0x7F24912Cu;
    // 7F24912C: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F249130:
    ctx->pc = 0x7F249130u;
    // 7F249130: bc    12, 2, 0x7F249444
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F249444;
        }
    }

label_7F249134:
    ctx->pc = 0x7F249134u;
    ctx->downcount -= 10;
    // 7F249134: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F249138:
    ctx->pc = 0x7F249138u;
    // 7F249138: addi    r6, r3, 11560
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(11560);

label_7F24913C:
    ctx->pc = 0x7F24913Cu;
    // 7F24913C: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F249140:
    ctx->pc = 0x7F249140u;
    // 7F249140: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F249144:
    ctx->pc = 0x7F249144u;
    // 7F249144: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249148:
    ctx->pc = 0x7F249148u;
    // 7F249148: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24914C:
    ctx->pc = 0x7F24914Cu;
    // 7F24914C: stw     r5, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F249150:
    ctx->pc = 0x7F249150u;
    // 7F249150: stw     r4, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F249154:
    ctx->pc = 0x7F249154u;
    // 7F249154: stw     r3, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F249158:
    ctx->pc = 0x7F249158u;
    // 7F249158: stw     r0, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24915C:
    ctx->pc = 0x7F24915Cu;
    ctx->downcount -= 2;
    // 7F24915C: cmpwi   r28, 2
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

label_7F249160:
    ctx->pc = 0x7F249160u;
    // 7F249160: bc    12, 2, 0x7F249180
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F249180;
        }
    }

label_7F249164:
    ctx->pc = 0x7F249164u;
    ctx->downcount -= 7;
    // 7F249164: lfs     f0, 48(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F249164u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F249168:
    ctx->pc = 0x7F249168u;
    // 7F249168: stfs     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F249168u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F24916C:
    ctx->pc = 0x7F24916Cu;
    // 7F24916C: lfs     f0, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F24916Cu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F249170:
    ctx->pc = 0x7F249170u;
    // 7F249170: stfs     f0, 132(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F249170u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F249174:
    ctx->pc = 0x7F249174u;
    // 7F249174: lfs     f0, 56(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F249174u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F249178:
    ctx->pc = 0x7F249178u;
    // 7F249178: stfs     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F249178u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F24917C:
    ctx->pc = 0x7F24917Cu;
    // 7F24917C: b       0x7F2491AC
    {
            goto label_7F2491AC;
    }

label_7F249180:
    ctx->pc = 0x7F249180u;
    ctx->downcount -= 2;
    // 7F249180: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F249184:
    ctx->pc = 0x7F249184u;
    // 7F249184: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F249188u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F249188:
    ctx->pc = 0x7F249188u;
    ctx->downcount -= 4;
    // 7F249188: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F24918C:
    ctx->pc = 0x7F24918Cu;
    // 7F24918C: addi    r3, r3, -8616
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8616);

label_7F249190:
    ctx->pc = 0x7F249190u;
    // 7F249190: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249194:
    ctx->pc = 0x7F249194u;
    // 7F249194: bl      0x7F3B3134
    {
            ctx->lr = 0x7F249198u;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F249198:
    ctx->pc = 0x7F249198u;
    ctx->downcount -= 2;
    // 7F249198: addi    r3, r1, 144
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(144);

label_7F24919C:
    ctx->pc = 0x7F24919Cu;
    // 7F24919C: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F2491A0u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F2491A0:
    ctx->pc = 0x7F2491A0u;
    ctx->downcount -= 3;
    // 7F2491A0: addi    r3, r1, 144
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(144);

label_7F2491A4:
    ctx->pc = 0x7F2491A4u;
    // 7F2491A4: addi    r4, r1, 128
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(128);

label_7F2491A8:
    ctx->pc = 0x7F2491A8u;
    // 7F2491A8: bl      0x7F3CC414
    {
            ctx->lr = 0x7F2491ACu;
            ctx->pc = 0x7F3CC414u;
            return;
    }

label_7F2491AC:
    ctx->pc = 0x7F2491ACu;
    ctx->downcount -= 7;
    // 7F2491AC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F2491B0:
    ctx->pc = 0x7F2491B0u;
    // 7F2491B0: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F2491B4:
    ctx->pc = 0x7F2491B4u;
    // 7F2491B4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2491B8:
    ctx->pc = 0x7F2491B8u;
    // 7F2491B8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2491BC:
    ctx->pc = 0x7F2491BCu;
    // 7F2491BC: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2491C0:
    ctx->pc = 0x7F2491C0u;
    // 7F2491C0: rlwinm. r0, r0, 0, 19, 19
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

label_7F2491C4:
    ctx->pc = 0x7F2491C4u;
    // 7F2491C4: bc    12, 2, 0x7F2491F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2491F4;
        }
    }

label_7F2491C8:
    ctx->pc = 0x7F2491C8u;
    ctx->downcount -= 11;
    // 7F2491C8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2491CC:
    ctx->pc = 0x7F2491CCu;
    // 7F2491CC: lwz     r4, -5768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5768);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2491D0:
    ctx->pc = 0x7F2491D0u;
    // 7F2491D0: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2491D4:
    ctx->pc = 0x7F2491D4u;
    // 7F2491D4: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2491D8:
    ctx->pc = 0x7F2491D8u;
    // 7F2491D8: stw     r3, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2491DC:
    ctx->pc = 0x7F2491DCu;
    // 7F2491DC: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2491E0:
    ctx->pc = 0x7F2491E0u;
    // 7F2491E0: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2491E4:
    ctx->pc = 0x7F2491E4u;
    // 7F2491E4: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2491E8:
    ctx->pc = 0x7F2491E8u;
    // 7F2491E8: stw     r3, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2491EC:
    ctx->pc = 0x7F2491ECu;
    // 7F2491EC: stw     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2491F0:
    ctx->pc = 0x7F2491F0u;
    // 7F2491F0: b       0x7F249200
    {
            goto label_7F249200;
    }

label_7F2491F4:
    ctx->pc = 0x7F2491F4u;
    ctx->downcount -= 3;
    // 7F2491F4: addi    r3, r3, 4008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4008);

label_7F2491F8:
    ctx->pc = 0x7F2491F8u;
    // 7F2491F8: addi    r4, r1, 96
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(96);

label_7F2491FC:
    ctx->pc = 0x7F2491FCu;
    // 7F2491FC: bl      0x7F3CC414
    {
            ctx->lr = 0x7F249200u;
            ctx->pc = 0x7F3CC414u;
            return;
    }

label_7F249200:
    ctx->pc = 0x7F249200u;
    ctx->downcount -= 8;
    // 7F249200: lwz     r3, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249204:
    ctx->pc = 0x7F249204u;
    // 7F249204: addi    r4, r1, 96
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(96);

label_7F249208:
    ctx->pc = 0x7F249208u;
    // 7F249208: addi    r5, r1, 128
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(128);

label_7F24920C:
    ctx->pc = 0x7F24920Cu;
    // 7F24920C: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F249210:
    ctx->pc = 0x7F249210u;
    // 7F249210: lwz     r3, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249214:
    ctx->pc = 0x7F249214u;
    // 7F249214: li      r7, 132
    ctx->gpr[7] = (u32)(s32)(132);

label_7F249218:
    ctx->pc = 0x7F249218u;
    // 7F249218: li      r8, 132
    ctx->gpr[8] = (u32)(s32)(132);

label_7F24921C:
    ctx->pc = 0x7F24921Cu;
    // 7F24921C: bl      0x7F10B744
    {
            ctx->lr = 0x7F249220u;
            ctx->pc = 0x7F10B744u;
            return;
    }

label_7F249220:
    ctx->pc = 0x7F249220u;
    ctx->downcount -= 2;
    // 7F249220: cmpwi   r3, 0
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

label_7F249224:
    ctx->pc = 0x7F249224u;
    // 7F249224: bc    12, 2, 0x7F249270
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F249270;
        }
    }

label_7F249228:
    ctx->pc = 0x7F249228u;
    ctx->downcount -= 2;
    // 7F249228: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F24922C:
    ctx->pc = 0x7F24922Cu;
    // 7F24922C: bl      0x7F10B7A4
    {
            ctx->lr = 0x7F249230u;
            ctx->pc = 0x7F10B7A4u;
            return;
    }

label_7F249230:
    ctx->pc = 0x7F249230u;
    ctx->downcount -= 2;
    // 7F249230: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F249234:
    ctx->pc = 0x7F249234u;
    // 7F249234: bl      0x7F3CC594
    {
            ctx->lr = 0x7F249238u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F249238:
    ctx->pc = 0x7F249238u;
    ctx->downcount -= 4;
    // 7F249238: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24923C:
    ctx->pc = 0x7F24923Cu;
    // 7F24923C: lfs     f0, 20808(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24923Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20808);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F249240:
    ctx->pc = 0x7F249240u;
    // 7F249240: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F249240u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F249244:
    ctx->pc = 0x7F249244u;
    // 7F249244: bc    4, 1, 0x7F249260
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F249260;
        }
    }

label_7F249248:
    ctx->pc = 0x7F249248u;
    ctx->downcount -= 6;
    // 7F249248: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F24924C:
    ctx->pc = 0x7F24924Cu;
    // 7F24924C: fsubs   f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24924Cu)) return;
    ppc_fsubs(ctx, 2, 1, 0);

label_7F249250:
    ctx->pc = 0x7F249250u;
    // 7F249250: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F249254:
    ctx->pc = 0x7F249254u;
    // 7F249254: lfs     f1, 20760(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F249254u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20760);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F249258:
    ctx->pc = 0x7F249258u;
    // 7F249258: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24925C:
    ctx->pc = 0x7F24925Cu;
    // 7F24925C: bl      0x7F3CC6BC
    {
            ctx->lr = 0x7F249260u;
            ctx->pc = 0x7F3CC6BCu;
            return;
    }

label_7F249260:
    ctx->pc = 0x7F249260u;
    ctx->downcount -= 4;
    // 7F249260: addi    r3, r1, 96
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(96);

label_7F249264:
    ctx->pc = 0x7F249264u;
    // 7F249264: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F249268:
    ctx->pc = 0x7F249268u;
    // 7F249268: addi    r5, r1, 128
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(128);

label_7F24926C:
    ctx->pc = 0x7F24926Cu;
    // 7F24926C: bl      0x800261B4
    {
            ctx->lr = 0x7F249270u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F249270:
    ctx->pc = 0x7F249270u;
    ctx->downcount -= 3;
    // 7F249270: addi    r3, r1, 128
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(128);

label_7F249274:
    ctx->pc = 0x7F249274u;
    // 7F249274: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F249278:
    ctx->pc = 0x7F249278u;
    // 7F249278: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F24927Cu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F24927C:
    ctx->pc = 0x7F24927Cu;
    ctx->downcount -= 2;
    // 7F24927C: addi    r3, r1, 144
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(144);

label_7F249280:
    ctx->pc = 0x7F249280u;
    // 7F249280: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F249284u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F249284:
    ctx->pc = 0x7F249284u;
    ctx->downcount -= 2;
    // 7F249284: lis     r3, 16384
    ctx->gpr[3] = ((u32)(s32)(16384) << 16);

label_7F249288:
    ctx->pc = 0x7F249288u;
    // 7F249288: bl      0x7F012050
    {
            ctx->lr = 0x7F24928Cu;
            ctx->pc = 0x7F012050u;
            return;
    }

label_7F24928C:
    ctx->pc = 0x7F24928Cu;
    ctx->downcount -= 2;
    // 7F24928C: cmpwi   r3, 0
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

label_7F249290:
    ctx->pc = 0x7F249290u;
    // 7F249290: bc    4, 2, 0x7F249300
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F249300;
        }
    }

label_7F249294:
    ctx->pc = 0x7F249294u;
    ctx->downcount -= 70;
    // 7F249294: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F249298:
    ctx->pc = 0x7F249298u;
    // 7F249298: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F24929C:
    ctx->pc = 0x7F24929Cu;
    // 7F24929C: addi    r4, r3, 32304
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(32304);

label_7F2492A0:
    ctx->pc = 0x7F2492A0u;
    // 7F2492A0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2492A4:
    ctx->pc = 0x7F2492A4u;
    // 7F2492A4: lwz     r8, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2492A8:
    ctx->pc = 0x7F2492A8u;
    // 7F2492A8: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_7F2492AC:
    ctx->pc = 0x7F2492ACu;
    // 7F2492AC: addi    r5, r3, 20752
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(20752);

label_7F2492B0:
    ctx->pc = 0x7F2492B0u;
    // 7F2492B0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2492B4:
    ctx->pc = 0x7F2492B4u;
    // 7F2492B4: divw   r6, r8, r7
    {
        s32 dividend = (s32)ctx->gpr[8];
        s32 divisor = (s32)ctx->gpr[7];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[6] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F2492B8:
    ctx->pc = 0x7F2492B8u;
    // 7F2492B8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2492BC:
    ctx->pc = 0x7F2492BCu;
    // 7F2492BC: addi    r9, r4, 20812
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(20812);

label_7F2492C0:
    ctx->pc = 0x7F2492C0u;
    // 7F2492C0: stw     r0, 216(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2492C4:
    ctx->pc = 0x7F2492C4u;
    // 7F2492C4: addi    r4, r3, 20800
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20800);

label_7F2492C8:
    ctx->pc = 0x7F2492C8u;
    // 7F2492C8: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2492C8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2492CC:
    ctx->pc = 0x7F2492CCu;
    // 7F2492CC: mullw   r0, r6, r7
    {
        s64 product = (s64)(s32)ctx->gpr[6] * (s64)(s32)ctx->gpr[7];
        ctx->gpr[0] = (u32)product;
    }

label_7F2492D0:
    ctx->pc = 0x7F2492D0u;
    // 7F2492D0: addi    r3, r1, 112
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(112);

label_7F2492D4:
    ctx->pc = 0x7F2492D4u;
    // 7F2492D4: lfs     f3, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F2492D4u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2492D8:
    ctx->pc = 0x7F2492D8u;
    // 7F2492D8: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2492D8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2492DC:
    ctx->pc = 0x7F2492DCu;
    // 7F2492DC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2492E0:
    ctx->pc = 0x7F2492E0u;
    // 7F2492E0: subf   r5, r0, r8
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_7F2492E4:
    ctx->pc = 0x7F2492E4u;
    // 7F2492E4: addi    r0, r5, -4
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-4);

label_7F2492E8:
    ctx->pc = 0x7F2492E8u;
    // 7F2492E8: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2492EC:
    ctx->pc = 0x7F2492ECu;
    // 7F2492EC: stw     r0, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2492F0:
    ctx->pc = 0x7F2492F0u;
    // 7F2492F0: lfd     f1, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2492F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2492F4:
    ctx->pc = 0x7F2492F4u;
    // 7F2492F4: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2492F4u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F2492F8:
    ctx->pc = 0x7F2492F8u;
    // 7F2492F8: fmadds f1, f3, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2492F8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F2492FC:
    ctx->pc = 0x7F2492FCu;
    // 7F2492FC: bl      0x800261FC
    {
            ctx->lr = 0x7F249300u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F249300:
    ctx->pc = 0x7F249300u;
    ctx->downcount -= 10;
    // 7F249300: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F249304:
    ctx->pc = 0x7F249304u;
    // 7F249304: rlwinm r24, r28, 3, 0, 28
    {
        ctx->gpr[24] = dolrecomp_rotl32(ctx->gpr[28], 3u) & 0xFFFFFFF8u;
    }

label_7F249308:
    ctx->pc = 0x7F249308u;
    // 7F249308: lwz     r5, -8608(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8608);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24930C:
    ctx->pc = 0x7F24930Cu;
    // 7F24930C: addi    r3, r1, 144
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(144);

label_7F249310:
    ctx->pc = 0x7F249310u;
    // 7F249310: lwzx    r6, r30, r29
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[29];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F249314:
    ctx->pc = 0x7F249314u;
    // 7F249314: addi    r4, r1, 112
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(112);

label_7F249318:
    ctx->pc = 0x7F249318u;
    // 7F249318: lwzx    r7, r5, r24
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[24];
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F24931C:
    ctx->pc = 0x7F24931Cu;
    // 7F24931C: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F249320:
    ctx->pc = 0x7F249320u;
    // 7F249320: lha     r8, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[8] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F249324:
    ctx->pc = 0x7F249324u;
    // 7F249324: bl      0x7F23E814
    {
            ctx->lr = 0x7F249328u;
            ctx->pc = 0x7F23E814u;
            return;
    }

label_7F249328:
    ctx->pc = 0x7F249328u;
    ctx->downcount -= 9;
    // 7F249328: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F24932C:
    ctx->pc = 0x7F24932Cu;
    // 7F24932C: addi    r5, r3, 13880
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F249330:
    ctx->pc = 0x7F249330u;
    // 7F249330: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F249334:
    ctx->pc = 0x7F249334u;
    // 7F249334: lha     r3, 360(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(360);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F249338:
    ctx->pc = 0x7F249338u;
    // 7F249338: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F24933C:
    ctx->pc = 0x7F24933Cu;
    // 7F24933C: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F249340:
    ctx->pc = 0x7F249340u;
    // 7F249340: sth     r3, 360(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(360);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F249344:
    ctx->pc = 0x7F249344u;
    // 7F249344: cmpwi   r0, 30000
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(30000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F249348:
    ctx->pc = 0x7F249348u;
    // 7F249348: bc    4, 1, 0x7F249358
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F249358;
        }
    }

label_7F24934C:
    ctx->pc = 0x7F24934Cu;
    ctx->downcount -= 3;
    // 7F24934C: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249350:
    ctx->pc = 0x7F249350u;
    // 7F249350: li      r0, 30000
    ctx->gpr[0] = (u32)(s32)(30000);

label_7F249354:
    ctx->pc = 0x7F249354u;
    // 7F249354: sth     r0, 360(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(360);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F249358:
    ctx->pc = 0x7F249358u;
    ctx->downcount -= 3;
    // 7F249358: lwz     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24935C:
    ctx->pc = 0x7F24935Cu;
    // 7F24935C: cmplwi  r0, 0x0000
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

label_7F249360:
    ctx->pc = 0x7F249360u;
    // 7F249360: bc    12, 2, 0x7F249400
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F249400;
        }
    }

label_7F249364:
    ctx->pc = 0x7F249364u;
    ctx->downcount -= 2;
    // 7F249364: addi    r3, r1, 144
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(144);

label_7F249368:
    ctx->pc = 0x7F249368u;
    // 7F249368: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F24936Cu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F24936C:
    ctx->pc = 0x7F24936Cu;
    ctx->downcount -= 4;
    // 7F24936C: addi    r3, r1, 112
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(112);

label_7F249370:
    ctx->pc = 0x7F249370u;
    // 7F249370: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F249374:
    ctx->pc = 0x7F249374u;
    // 7F249374: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F249378:
    ctx->pc = 0x7F249378u;
    // 7F249378: bl      0x7F3B3648
    {
            ctx->lr = 0x7F24937Cu;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F24937C:
    ctx->pc = 0x7F24937Cu;
    ctx->downcount -= 29;
    // 7F24937C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F249380:
    ctx->pc = 0x7F249380u;
    // 7F249380: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F249384:
    ctx->pc = 0x7F249384u;
    // 7F249384: addi    r6, r4, 20816
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(20816);

label_7F249388:
    ctx->pc = 0x7F249388u;
    // 7F249388: lfs     f2, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F249388u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F24938C:
    ctx->pc = 0x7F24938Cu;
    // 7F24938C: addi    r5, r3, 20820
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(20820);

label_7F249390:
    ctx->pc = 0x7F249390u;
    // 7F249390: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F249390u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F249394:
    ctx->pc = 0x7F249394u;
    // 7F249394: lfs     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F249394u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F249398:
    ctx->pc = 0x7F249398u;
    // 7F249398: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F24939C:
    ctx->pc = 0x7F24939Cu;
    // 7F24939C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F24939Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2493A0:
    ctx->pc = 0x7F2493A0u;
    // 7F2493A0: fmuls   f5, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2493A0u)) return;
    ppc_fmuls(ctx, 5, 2, 1);

label_7F2493A4:
    ctx->pc = 0x7F2493A4u;
    // 7F2493A4: lfs     f4, 116(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2493A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F2493A8:
    ctx->pc = 0x7F2493A8u;
    // 7F2493A8: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2493A8u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F2493AC:
    ctx->pc = 0x7F2493ACu;
    // 7F2493AC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2493B0:
    ctx->pc = 0x7F2493B0u;
    // 7F2493B0: lwz     r0, -8612(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8612);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2493B4:
    ctx->pc = 0x7F2493B4u;
    // 7F2493B4: lfs     f1, 20760(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2493B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20760);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2493B8:
    ctx->pc = 0x7F2493B8u;
    // 7F2493B8: fmuls   f3, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2493B8u)) return;
    ppc_fmuls(ctx, 3, 4, 3);

label_7F2493BC:
    ctx->pc = 0x7F2493BCu;
    // 7F2493BC: stfs     f5, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2493BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F2493C0:
    ctx->pc = 0x7F2493C0u;
    // 7F2493C0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2493C4:
    ctx->pc = 0x7F2493C4u;
    // 7F2493C4: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2493C4u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F2493C8:
    ctx->pc = 0x7F2493C8u;
    // 7F2493C8: addi    r4, r3, 12832
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F2493CC:
    ctx->pc = 0x7F2493CCu;
    // 7F2493CC: stfs     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2493CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2493D0:
    ctx->pc = 0x7F2493D0u;
    // 7F2493D0: stfs     f3, 116(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2493D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F2493D4:
    ctx->pc = 0x7F2493D4u;
    // 7F2493D4: add   r6, r0, r24
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F2493D8:
    ctx->pc = 0x7F2493D8u;
    // 7F2493D8: addi    r3, r1, 144
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(144);

label_7F2493DC:
    ctx->pc = 0x7F2493DCu;
    // 7F2493DC: addi    r5, r1, 112
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(112);

label_7F2493E0:
    ctx->pc = 0x7F2493E0u;
    // 7F2493E0: lwz     r6, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2493E4:
    ctx->pc = 0x7F2493E4u;
    // 7F2493E4: li      r7, 63
    ctx->gpr[7] = (u32)(s32)(63);

label_7F2493E8:
    ctx->pc = 0x7F2493E8u;
    // 7F2493E8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2493EC:
    ctx->pc = 0x7F2493ECu;
    // 7F2493EC: bl      0x7F27AEFC
    {
            ctx->lr = 0x7F2493F0u;
            ctx->pc = 0x7F27AEFCu;
            return;
    }

label_7F2493F0:
    ctx->pc = 0x7F2493F0u;
    ctx->downcount -= 4;
    // 7F2493F0: lwz     r3, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2493F4:
    ctx->pc = 0x7F2493F4u;
    // 7F2493F4: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2493F8:
    ctx->pc = 0x7F2493F8u;
    // 7F2493F8: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F2493FC:
    ctx->pc = 0x7F2493FCu;
    // 7F2493FC: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F249400:
    ctx->pc = 0x7F249400u;
    ctx->downcount -= 3;
    // 7F249400: lwzx    r3, r30, r29
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[29];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249404:
    ctx->pc = 0x7F249404u;
    // 7F249404: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F249408:
    ctx->pc = 0x7F249408u;
    // 7F249408: bl      0x7F01EC24
    {
            ctx->lr = 0x7F24940Cu;
            ctx->pc = 0x7F01EC24u;
            return;
    }

label_7F24940C:
    ctx->pc = 0x7F24940Cu;
    ctx->downcount -= 14;
    // 7F24940C: li      r0, 30
    ctx->gpr[0] = (u32)(s32)(30);

label_7F249410:
    ctx->pc = 0x7F249410u;
    // 7F249410: li      r3, 300
    ctx->gpr[3] = (u32)(s32)(300);

label_7F249414:
    ctx->pc = 0x7F249414u;
    // 7F249414: sth     r0, 166(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(166);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F249418:
    ctx->pc = 0x7F249418u;
    // 7F249418: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24941C:
    ctx->pc = 0x7F24941Cu;
    // 7F24941C: sth     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F249420:
    ctx->pc = 0x7F249420u;
    // 7F249420: stw     r0, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F249424:
    ctx->pc = 0x7F249424u;
    // 7F249424: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249428:
    ctx->pc = 0x7F249428u;
    // 7F249428: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24942C:
    ctx->pc = 0x7F24942Cu;
    // 7F24942C: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F249430:
    ctx->pc = 0x7F249430u;
    // 7F249430: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F249434:
    ctx->pc = 0x7F249434u;
    // 7F249434: lwz     r3, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249438:
    ctx->pc = 0x7F249438u;
    // 7F249438: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24943C:
    ctx->pc = 0x7F24943Cu;
    // 7F24943C: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F249440:
    ctx->pc = 0x7F249440u;
    // 7F249440: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F249444:
    ctx->pc = 0x7F249444u;
    ctx->downcount -= 5;
    // 7F249444: lis     r4, 16384
    ctx->gpr[4] = ((u32)(s32)(16384) << 16);

label_7F249448:
    ctx->pc = 0x7F249448u;
    // 7F249448: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F24944C:
    ctx->pc = 0x7F24944Cu;
    // 7F24944C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F249450:
    ctx->pc = 0x7F249450u;
    // 7F249450: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F249454:
    ctx->pc = 0x7F249454u;
    // 7F249454: bl      0x7F012018
    {
            ctx->lr = 0x7F249458u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F249458:
    ctx->pc = 0x7F249458u;
    ctx->downcount -= 5;
    // 7F249458: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24945C:
    ctx->pc = 0x7F24945Cu;
    // 7F24945C: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F249460:
    ctx->pc = 0x7F249460u;
    // 7F249460: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F249464:
    ctx->pc = 0x7F249464u;
    // 7F249464: or.   r0, r4, r0
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

label_7F249468:
    ctx->pc = 0x7F249468u;
    // 7F249468: bc    12, 2, 0x7F24949C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24949C;
        }
    }

label_7F24946C:
    ctx->pc = 0x7F24946Cu;
    ctx->downcount -= 3;
    // 7F24946C: lwz     r3, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249470:
    ctx->pc = 0x7F249470u;
    // 7F249470: cmplwi  r3, 0x0000
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

label_7F249474:
    ctx->pc = 0x7F249474u;
    // 7F249474: bc    12, 2, 0x7F249484
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F249484;
        }
    }

label_7F249478:
    ctx->pc = 0x7F249478u;
    ctx->downcount -= 3;
    // 7F249478: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24947C:
    ctx->pc = 0x7F24947Cu;
    // 7F24947C: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F249480:
    ctx->pc = 0x7F249480u;
    // 7F249480: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F249484:
    ctx->pc = 0x7F249484u;
    ctx->downcount -= 3;
    // 7F249484: lwz     r3, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249488:
    ctx->pc = 0x7F249488u;
    // 7F249488: cmplwi  r3, 0x0000
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

label_7F24948C:
    ctx->pc = 0x7F24948Cu;
    // 7F24948C: bc    12, 2, 0x7F24949C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24949C;
        }
    }

label_7F249490:
    ctx->pc = 0x7F249490u;
    ctx->downcount -= 3;
    // 7F249490: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F249494:
    ctx->pc = 0x7F249494u;
    // 7F249494: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F249498:
    ctx->pc = 0x7F249498u;
    // 7F249498: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24949C:
    ctx->pc = 0x7F24949Cu;
    ctx->downcount -= 16;
    // 7F24949C: lmw     r23, 236(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(236);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2494A0:
    ctx->pc = 0x7F2494A0u;
    // 7F2494A0: lwz     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2494A4:
    ctx->pc = 0x7F2494A4u;
    // 7F2494A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2494A8:
    ctx->pc = 0x7F2494A8u;
    // 7F2494A8: addi    r1, r1, 272
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(272);

label_7F2494AC:
    ctx->pc = 0x7F2494ACu;
    // 7F2494AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F2494B0:
    ctx->pc = 0x7F2494B0u;
    ctx->downcount -= 7;
    // 7F2494B0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2494B4:
    ctx->pc = 0x7F2494B4u;
    // 7F2494B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2494B8:
    ctx->pc = 0x7F2494B8u;
    // 7F2494B8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2494BC:
    ctx->pc = 0x7F2494BCu;
    // 7F2494BC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2494C0:
    ctx->pc = 0x7F2494C0u;
    // 7F2494C0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2494C4:
    ctx->pc = 0x7F2494C4u;
    // 7F2494C4: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2494C8:
    ctx->pc = 0x7F2494C8u;
    // 7F2494C8: bl      0x7F01B234
    {
            ctx->lr = 0x7F2494CCu;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F2494CC:
    ctx->pc = 0x7F2494CCu;
    ctx->downcount -= 7;
    // 7F2494CC: stw     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2494D0:
    ctx->pc = 0x7F2494D0u;
    // 7F2494D0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2494D4:
    ctx->pc = 0x7F2494D4u;
    // 7F2494D4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2494D8:
    ctx->pc = 0x7F2494D8u;
    // 7F2494D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2494DC:
    ctx->pc = 0x7F2494DCu;
    // 7F2494DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2494E0:
    ctx->pc = 0x7F2494E0u;
    // 7F2494E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F2494E4:
    ctx->pc = 0x7F2494E4u;
    ctx->downcount -= 3;
    // 7F2494E4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F2494E8:
    ctx->pc = 0x7F2494E8u;
    // 7F2494E8: stw     r3, 18312(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18312);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2494EC:
    ctx->pc = 0x7F2494ECu;
    // 7F2494EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F2494F0:
    ctx->pc = 0x7F2494F0u;
    ctx->downcount -= 10;
    // 7F2494F0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2494F4:
    ctx->pc = 0x7F2494F4u;
    // 7F2494F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2494F8:
    ctx->pc = 0x7F2494F8u;
    // 7F2494F8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F2494FC:
    ctx->pc = 0x7F2494FCu;
    // 7F2494FC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F249500:
    ctx->pc = 0x7F249500u;
    // 7F249500: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F249504:
    ctx->pc = 0x7F249504u;
    // 7F249504: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F249508:
    ctx->pc = 0x7F249508u;
    // 7F249508: addi    r3, r4, 22156
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(22156);

label_7F24950C:
    ctx->pc = 0x7F24950Cu;
    // 7F24950C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249510:
    ctx->pc = 0x7F249510u;
    // 7F249510: cmplwi  r3, 0x0000
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

label_7F249514:
    ctx->pc = 0x7F249514u;
    // 7F249514: bc    12, 2, 0x7F249524
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F249524;
        }
    }

label_7F249518:
    ctx->pc = 0x7F249518u;
    ctx->downcount -= 3;
    // 7F249518: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24951C:
    ctx->pc = 0x7F24951Cu;
    // 7F24951C: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F249520:
    ctx->pc = 0x7F249520u;
    // 7F249520: bl      0x7F3B0954
    {
            ctx->lr = 0x7F249524u;
            ctx->pc = 0x7F3B0954u;
            return;
    }

label_7F249524:
    ctx->pc = 0x7F249524u;
    ctx->downcount -= 2;
    // 7F249524: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F249528:
    ctx->pc = 0x7F249528u;
    // 7F249528: bl      0x7F042AAC
    {
            ctx->lr = 0x7F24952Cu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F24952C:
    ctx->pc = 0x7F24952Cu;
    ctx->downcount -= 2;
    // 7F24952C: addi    r3, r31, 92
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(92);

label_7F249530:
    ctx->pc = 0x7F249530u;
    // 7F249530: bl      0x7F042AAC
    {
            ctx->lr = 0x7F249534u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F249534:
    ctx->pc = 0x7F249534u;
    ctx->downcount -= 8;
    // 7F249534: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F249538:
    ctx->pc = 0x7F249538u;
    // 7F249538: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24953C:
    ctx->pc = 0x7F24953Cu;
    // 7F24953C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F249540:
    ctx->pc = 0x7F249540u;
    // 7F249540: stw     r0, -5672(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5672);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F249544:
    ctx->pc = 0x7F249544u;
    // 7F249544: stw     r0, -5676(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5676);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F249548:
    ctx->pc = 0x7F249548u;
    // 7F249548: lwz     r3, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24954C:
    ctx->pc = 0x7F24954Cu;
    // 7F24954C: cmplwi  r3, 0x0000
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

label_7F249550:
    ctx->pc = 0x7F249550u;
    // 7F249550: bc    12, 2, 0x7F249560
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F249560;
        }
    }

label_7F249554:
    ctx->pc = 0x7F249554u;
    ctx->downcount -= 1;
    // 7F249554: bl      0x7F3AEBF0
    {
            ctx->lr = 0x7F249558u;
            ctx->pc = 0x7F3AEBF0u;
            return;
    }

label_7F249558:
    ctx->pc = 0x7F249558u;
    ctx->downcount -= 2;
    // 7F249558: lwz     r3, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24955C:
    ctx->pc = 0x7F24955Cu;
    // 7F24955C: bl      0x7F3B0820
    {
            ctx->lr = 0x7F249560u;
            ctx->pc = 0x7F3B0820u;
            return;
    }

label_7F249560:
    ctx->pc = 0x7F249560u;
    ctx->downcount -= 3;
    // 7F249560: lwz     r3, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249564:
    ctx->pc = 0x7F249564u;
    // 7F249564: cmplwi  r3, 0x0000
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

label_7F249568:
    ctx->pc = 0x7F249568u;
    // 7F249568: bc    12, 2, 0x7F249578
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F249578;
        }
    }

label_7F24956C:
    ctx->pc = 0x7F24956Cu;
    ctx->downcount -= 1;
    // 7F24956C: bl      0x7F3AEBF0
    {
            ctx->lr = 0x7F249570u;
            ctx->pc = 0x7F3AEBF0u;
            return;
    }

label_7F249570:
    ctx->pc = 0x7F249570u;
    ctx->downcount -= 2;
    // 7F249570: lwz     r3, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249574:
    ctx->pc = 0x7F249574u;
    // 7F249574: bl      0x7F3B0820
    {
            ctx->lr = 0x7F249578u;
            ctx->pc = 0x7F3B0820u;
            return;
    }

label_7F249578:
    ctx->pc = 0x7F249578u;
    ctx->downcount -= 6;
    // 7F249578: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F24957C:
    ctx->pc = 0x7F24957Cu;
    // 7F24957C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F249580:
    ctx->pc = 0x7F249580u;
    // 7F249580: addi    r6, r3, -32768
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F249584:
    ctx->pc = 0x7F249584u;
    // 7F249584: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F249588:
    ctx->pc = 0x7F249588u;
    // 7F249588: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_7F24958C:
    ctx->pc = 0x7F24958Cu;
    // 7F24958C: bl      0x7F042E08
    {
            ctx->lr = 0x7F249590u;
            ctx->pc = 0x7F042E08u;
            return;
    }

label_7F249590:
    ctx->pc = 0x7F249590u;
    ctx->downcount -= 6;
    // 7F249590: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F249594:
    ctx->pc = 0x7F249594u;
    // 7F249594: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F249598:
    ctx->pc = 0x7F249598u;
    // 7F249598: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24959C:
    ctx->pc = 0x7F24959Cu;
    // 7F24959C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2495A0:
    ctx->pc = 0x7F2495A0u;
    // 7F2495A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F2495A4:
    ctx->pc = 0x7F2495A4u;
    ctx->downcount -= 26;
    // 7F2495A4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2495A8:
    ctx->pc = 0x7F2495A8u;
    // 7F2495A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2495AC:
    ctx->pc = 0x7F2495ACu;
    // 7F2495AC: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F2495B0:
    ctx->pc = 0x7F2495B0u;
    // 7F2495B0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2495B4:
    ctx->pc = 0x7F2495B4u;
    // 7F2495B4: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2495B8:
    ctx->pc = 0x7F2495B8u;
    // 7F2495B8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2495BC:
    ctx->pc = 0x7F2495BCu;
    // 7F2495BC: addi    r3, r7, -8608
    ctx->gpr[3] = ctx->gpr[7] + (u32)(s32)(-8608);

label_7F2495C0:
    ctx->pc = 0x7F2495C0u;
    // 7F2495C0: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2495C4:
    ctx->pc = 0x7F2495C4u;
    // 7F2495C4: rlwinm r31, r6, 3, 0, 28
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[6], 3u) & 0xFFFFFFF8u;
    }

label_7F2495C8:
    ctx->pc = 0x7F2495C8u;
    // 7F2495C8: addi    r28, r29, 48
    ctx->gpr[28] = ctx->gpr[29] + (u32)(s32)(48);

label_7F2495CC:
    ctx->pc = 0x7F2495CCu;
    // 7F2495CC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2495D0:
    ctx->pc = 0x7F2495D0u;
    // 7F2495D0: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_7F2495D4:
    ctx->pc = 0x7F2495D4u;
    // 7F2495D4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2495D8:
    ctx->pc = 0x7F2495D8u;
    // 7F2495D8: lwzx    r4, r3, r31
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[31];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2495DC:
    ctx->pc = 0x7F2495DCu;
    // 7F2495DC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2495E0:
    ctx->pc = 0x7F2495E0u;
    // 7F2495E0: bl      0x7F04272C
    {
            ctx->lr = 0x7F2495E4u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F2495E4:
    ctx->pc = 0x7F2495E4u;
    ctx->downcount -= 3;
    // 7F2495E4: lwz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2495E8:
    ctx->pc = 0x7F2495E8u;
    // 7F2495E8: cmplwi  r0, 0x0000
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

label_7F2495EC:
    ctx->pc = 0x7F2495ECu;
    // 7F2495EC: bc    4, 2, 0x7F2495F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2495F8;
        }
    }

label_7F2495F0:
    ctx->pc = 0x7F2495F0u;
    ctx->downcount -= 2;
    // 7F2495F0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2495F4:
    ctx->pc = 0x7F2495F4u;
    // 7F2495F4: b       0x7F249874
    {
            goto label_7F249874;
    }

label_7F2495F8:
    ctx->pc = 0x7F2495F8u;
    ctx->downcount -= 6;
    // 7F2495F8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F2495FC:
    ctx->pc = 0x7F2495FCu;
    // 7F2495FC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F249600:
    ctx->pc = 0x7F249600u;
    // 7F249600: addi    r4, r4, 22156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22156);

label_7F249604:
    ctx->pc = 0x7F249604u;
    // 7F249604: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F249608:
    ctx->pc = 0x7F249608u;
    // 7F249608: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24960C:
    ctx->pc = 0x7F24960Cu;
    // 7F24960C: bl      0x7F042B74
    {
            ctx->lr = 0x7F249610u;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F249610:
    ctx->pc = 0x7F249610u;
    ctx->downcount -= 8;
    // 7F249610: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F249614:
    ctx->pc = 0x7F249614u;
    // 7F249614: addi    r28, r29, 92
    ctx->gpr[28] = ctx->gpr[29] + (u32)(s32)(92);

label_7F249618:
    ctx->pc = 0x7F249618u;
    // 7F249618: lwz     r0, -8608(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8608);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24961C:
    ctx->pc = 0x7F24961Cu;
    // 7F24961C: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_7F249620:
    ctx->pc = 0x7F249620u;
    // 7F249620: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F249624:
    ctx->pc = 0x7F249624u;
    // 7F249624: add   r4, r0, r31
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F249628:
    ctx->pc = 0x7F249628u;
    // 7F249628: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24962C:
    ctx->pc = 0x7F24962Cu;
    // 7F24962C: bl      0x7F04272C
    {
            ctx->lr = 0x7F249630u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F249630:
    ctx->pc = 0x7F249630u;
    ctx->downcount -= 3;
    // 7F249630: lwz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F249634:
    ctx->pc = 0x7F249634u;
    // 7F249634: cmplwi  r0, 0x0000
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

label_7F249638:
    ctx->pc = 0x7F249638u;
    // 7F249638: bc    4, 2, 0x7F249644
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F249644;
        }
    }

label_7F24963C:
    ctx->pc = 0x7F24963Cu;
    ctx->downcount -= 2;
    // 7F24963C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F249640:
    ctx->pc = 0x7F249640u;
    // 7F249640: b       0x7F249874
    {
            goto label_7F249874;
    }

label_7F249644:
    ctx->pc = 0x7F249644u;
    ctx->downcount -= 4;
    // 7F249644: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F249648:
    ctx->pc = 0x7F249648u;
    // 7F249648: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F24964C:
    ctx->pc = 0x7F24964Cu;
    // 7F24964C: lwz     r5, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F249650:
    ctx->pc = 0x7F249650u;
    // 7F249650: bl      0x7F042B74
    {
            ctx->lr = 0x7F249654u;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F249654:
    ctx->pc = 0x7F249654u;
    ctx->downcount -= 6;
    // 7F249654: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F249658:
    ctx->pc = 0x7F249658u;
    // 7F249658: lwz     r4, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24965C:
    ctx->pc = 0x7F24965Cu;
    // 7F24965C: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F249660:
    ctx->pc = 0x7F249660u;
    // 7F249660: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249664:
    ctx->pc = 0x7F249664u;
    // 7F249664: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249668:
    ctx->pc = 0x7F249668u;
    // 7F249668: bl      0x7F3B0938
    {
            ctx->lr = 0x7F24966Cu;
            ctx->pc = 0x7F3B0938u;
            return;
    }

label_7F24966C:
    ctx->pc = 0x7F24966Cu;
    ctx->downcount -= 17;
    // 7F24966C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F249670:
    ctx->pc = 0x7F249670u;
    // 7F249670: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F249674:
    ctx->pc = 0x7F249674u;
    // 7F249674: addi    r5, r3, -5852
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5852);

label_7F249678:
    ctx->pc = 0x7F249678u;
    // 7F249678: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24967C:
    ctx->pc = 0x7F24967Cu;
    // 7F24967C: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F249680:
    ctx->pc = 0x7F249680u;
    // 7F249680: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F249684:
    ctx->pc = 0x7F249684u;
    // 7F249684: addi    r4, r4, -5768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5768);

label_7F249688:
    ctx->pc = 0x7F249688u;
    // 7F249688: rlwinm r5, r5, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_7F24968C:
    ctx->pc = 0x7F24968Cu;
    // 7F24968C: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F249690:
    ctx->pc = 0x7F249690u;
    // 7F249690: lwzx    r4, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F249694:
    ctx->pc = 0x7F249694u;
    // 7F249694: stw     r4, 172(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F249698:
    ctx->pc = 0x7F249698u;
    // 7F249698: stw     r0, 168(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24969C:
    ctx->pc = 0x7F24969Cu;
    // 7F24969C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2496A0:
    ctx->pc = 0x7F2496A0u;
    // 7F2496A0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2496A4:
    ctx->pc = 0x7F2496A4u;
    // 7F2496A4: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2496A8:
    ctx->pc = 0x7F2496A8u;
    // 7F2496A8: rlwinm. r0, r0, 0, 19, 19
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

label_7F2496AC:
    ctx->pc = 0x7F2496ACu;
    // 7F2496AC: bc    12, 2, 0x7F2496C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2496C4;
        }
    }

label_7F2496B0:
    ctx->pc = 0x7F2496B0u;
    ctx->downcount -= 5;
    // 7F2496B0: lis     r4, 16384
    ctx->gpr[4] = ((u32)(s32)(16384) << 16);

label_7F2496B4:
    ctx->pc = 0x7F2496B4u;
    // 7F2496B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2496B8:
    ctx->pc = 0x7F2496B8u;
    // 7F2496B8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2496BC:
    ctx->pc = 0x7F2496BCu;
    // 7F2496BC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2496C0:
    ctx->pc = 0x7F2496C0u;
    // 7F2496C0: bl      0x7F07AA5C
    {
            ctx->lr = 0x7F2496C4u;
            ctx->pc = 0x7F07AA5Cu;
            return;
    }

label_7F2496C4:
    ctx->pc = 0x7F2496C4u;
    ctx->downcount -= 28;
    // 7F2496C4: lwz     r10, 92(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(92);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F2496C8:
    ctx->pc = 0x7F2496C8u;
    // 7F2496C8: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F2496CC:
    ctx->pc = 0x7F2496CCu;
    // 7F2496CC: addi    r9, r7, -8608
    ctx->gpr[9] = ctx->gpr[7] + (u32)(s32)(-8608);

label_7F2496D0:
    ctx->pc = 0x7F2496D0u;
    // 7F2496D0: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F2496D4:
    ctx->pc = 0x7F2496D4u;
    // 7F2496D4: lwz     r0, 80(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2496D8:
    ctx->pc = 0x7F2496D8u;
    // 7F2496D8: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F2496DC:
    ctx->pc = 0x7F2496DCu;
    // 7F2496DC: addi    r8, r6, -5688
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(-5688);

label_7F2496E0:
    ctx->pc = 0x7F2496E0u;
    // 7F2496E0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2496E4:
    ctx->pc = 0x7F2496E4u;
    // 7F2496E4: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F2496E8:
    ctx->pc = 0x7F2496E8u;
    // 7F2496E8: addi    r6, r5, -5672
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-5672);

label_7F2496EC:
    ctx->pc = 0x7F2496ECu;
    // 7F2496EC: stw     r0, 80(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2496F0:
    ctx->pc = 0x7F2496F0u;
    // 7F2496F0: addi    r7, r29, 48
    ctx->gpr[7] = ctx->gpr[29] + (u32)(s32)(48);

label_7F2496F4:
    ctx->pc = 0x7F2496F4u;
    // 7F2496F4: addi    r5, r29, 92
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(92);

label_7F2496F8:
    ctx->pc = 0x7F2496F8u;
    // 7F2496F8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2496FC:
    ctx->pc = 0x7F2496FCu;
    // 7F2496FC: lwz     r9, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F249700:
    ctx->pc = 0x7F249700u;
    // 7F249700: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F249704:
    ctx->pc = 0x7F249704u;
    // 7F249704: lwzx    r9, r9, r31
    {
        u32 ea = ctx->gpr[9] + ctx->gpr[31];
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F249708:
    ctx->pc = 0x7F249708u;
    // 7F249708: stw     r9, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F24970C:
    ctx->pc = 0x7F24970Cu;
    // 7F24970C: stw     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F249710:
    ctx->pc = 0x7F249710u;
    // 7F249710: stw     r5, -5676(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5676);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F249714:
    ctx->pc = 0x7F249714u;
    // 7F249714: stw     r0, 140(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F249718:
    ctx->pc = 0x7F249718u;
    // 7F249718: stw     r0, 136(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24971C:
    ctx->pc = 0x7F24971Cu;
    // 7F24971C: lwz     r4, -8612(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8612);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F249720:
    ctx->pc = 0x7F249720u;
    // 7F249720: lwzx    r3, r4, r31
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[31];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249724:
    ctx->pc = 0x7F249724u;
    // 7F249724: add   r4, r4, r31
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F249728:
    ctx->pc = 0x7F249728u;
    // 7F249728: lwz     r28, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F24972C:
    ctx->pc = 0x7F24972Cu;
    // 7F24972C: cmpwi   r3, 0
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

label_7F249730:
    ctx->pc = 0x7F249730u;
    // 7F249730: bc    12, 2, 0x7F2497CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2497CC;
        }
    }

label_7F249734:
    ctx->pc = 0x7F249734u;
    ctx->downcount -= 2;
    // 7F249734: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F249738:
    ctx->pc = 0x7F249738u;
    // 7F249738: bl      0x7F3C8470
    {
            ctx->lr = 0x7F24973Cu;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F24973C:
    ctx->pc = 0x7F24973Cu;
    ctx->downcount -= 1;
    // 7F24973C: bl      0x7F3C8480
    {
            ctx->lr = 0x7F249740u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F249740:
    ctx->pc = 0x7F249740u;
    ctx->downcount -= 3;
    // 7F249740: li      r4, 18
    ctx->gpr[4] = (u32)(s32)(18);

label_7F249744:
    ctx->pc = 0x7F249744u;
    // 7F249744: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F249748:
    ctx->pc = 0x7F249748u;
    // 7F249748: bl      0x7F3AF7BC
    {
            ctx->lr = 0x7F24974Cu;
            ctx->pc = 0x7F3AF7BCu;
            return;
    }

label_7F24974C:
    ctx->pc = 0x7F24974Cu;
    ctx->downcount -= 3;
    // 7F24974C: or.   r31, r3, r3
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

label_7F249750:
    ctx->pc = 0x7F249750u;
    // 7F249750: stw     r3, 136(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F249754:
    ctx->pc = 0x7F249754u;
    // 7F249754: bc    4, 2, 0x7F249760
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F249760;
        }
    }

label_7F249758:
    ctx->pc = 0x7F249758u;
    ctx->downcount -= 2;
    // 7F249758: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F24975C:
    ctx->pc = 0x7F24975Cu;
    // 7F24975C: b       0x7F249874
    {
            goto label_7F249874;
    }

label_7F249760:
    ctx->pc = 0x7F249760u;
    ctx->downcount -= 7;
    // 7F249760: lwz     r3, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249764:
    ctx->pc = 0x7F249764u;
    // 7F249764: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F249768:
    ctx->pc = 0x7F249768u;
    // 7F249768: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24976C:
    ctx->pc = 0x7F24976Cu;
    // 7F24976C: lwz     r3, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249770:
    ctx->pc = 0x7F249770u;
    // 7F249770: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F249774:
    ctx->pc = 0x7F249774u;
    // 7F249774: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F249778:
    loop_7F249778(ctx);
    if (ctx->pc == 0x7F24978Cu) goto label_7F24978C;
    return;
label_7F24977C:
    ctx->pc = 0x7F24977Cu;
    // 7F24977C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F249780:
    ctx->pc = 0x7F249780u;
    // 7F249780: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F249784:
    ctx->pc = 0x7F249784u;
    // 7F249784: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F249788:
    // 7F249788: bc    16, 0, 0x7F249778
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F249778u;
                return;
            }
            goto label_7F249778;
        }
    }

label_7F24978C:
    ctx->pc = 0x7F24978Cu;
    ctx->downcount -= 4;
    // 7F24978C: lwz     r4, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F249790:
    ctx->pc = 0x7F249790u;
    // 7F249790: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F249794:
    ctx->pc = 0x7F249794u;
    // 7F249794: lwz     r4, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F249798:
    ctx->pc = 0x7F249798u;
    // 7F249798: bl      0x7F3BC518
    {
            ctx->lr = 0x7F24979Cu;
            ctx->pc = 0x7F3BC518u;
            return;
    }

label_7F24979C:
    ctx->pc = 0x7F24979Cu;
    ctx->downcount -= 4;
    // 7F24979C: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2497A0:
    ctx->pc = 0x7F2497A0u;
    // 7F2497A0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2497A4:
    ctx->pc = 0x7F2497A4u;
    // 7F2497A4: lwz     r4, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2497A8:
    ctx->pc = 0x7F2497A8u;
    // 7F2497A8: bl      0x7F2494B0
    {
            ctx->lr = 0x7F2497ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2494B0u;
                return;
            }
            goto label_7F2494B0;
    }

label_7F2497AC:
    ctx->pc = 0x7F2497ACu;
    ctx->downcount -= 2;
    // 7F2497AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2497B0:
    ctx->pc = 0x7F2497B0u;
    // 7F2497B0: bl      0x7F3AEBC0
    {
            ctx->lr = 0x7F2497B4u;
            ctx->pc = 0x7F3AEBC0u;
            return;
    }

label_7F2497B4:
    ctx->pc = 0x7F2497B4u;
    ctx->downcount -= 6;
    // 7F2497B4: lwz     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2497B8:
    ctx->pc = 0x7F2497B8u;
    // 7F2497B8: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F2497BC:
    ctx->pc = 0x7F2497BCu;
    // 7F2497BC: stw     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2497C0:
    ctx->pc = 0x7F2497C0u;
    // 7F2497C0: lwz     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2497C4:
    ctx->pc = 0x7F2497C4u;
    // 7F2497C4: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F2497C8:
    ctx->pc = 0x7F2497C8u;
    // 7F2497C8: stw     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2497CC:
    ctx->pc = 0x7F2497CCu;
    ctx->downcount -= 2;
    // 7F2497CC: cmpwi   r28, 0
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

label_7F2497D0:
    ctx->pc = 0x7F2497D0u;
    // 7F2497D0: bc    12, 2, 0x7F249870
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F249870;
        }
    }

label_7F2497D4:
    ctx->pc = 0x7F2497D4u;
    ctx->downcount -= 3;
    // 7F2497D4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2497D8:
    ctx->pc = 0x7F2497D8u;
    // 7F2497D8: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F2497DC:
    ctx->pc = 0x7F2497DCu;
    // 7F2497DC: bl      0x7F3C8470
    {
            ctx->lr = 0x7F2497E0u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F2497E0:
    ctx->pc = 0x7F2497E0u;
    ctx->downcount -= 1;
    // 7F2497E0: bl      0x7F3C8480
    {
            ctx->lr = 0x7F2497E4u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F2497E4:
    ctx->pc = 0x7F2497E4u;
    ctx->downcount -= 3;
    // 7F2497E4: li      r4, 18
    ctx->gpr[4] = (u32)(s32)(18);

label_7F2497E8:
    ctx->pc = 0x7F2497E8u;
    // 7F2497E8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2497EC:
    ctx->pc = 0x7F2497ECu;
    // 7F2497EC: bl      0x7F3AF7BC
    {
            ctx->lr = 0x7F2497F0u;
            ctx->pc = 0x7F3AF7BCu;
            return;
    }

label_7F2497F0:
    ctx->pc = 0x7F2497F0u;
    ctx->downcount -= 3;
    // 7F2497F0: or.   r28, r3, r3
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

label_7F2497F4:
    ctx->pc = 0x7F2497F4u;
    // 7F2497F4: stw     r3, 140(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2497F8:
    ctx->pc = 0x7F2497F8u;
    // 7F2497F8: bc    4, 2, 0x7F249804
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F249804;
        }
    }

label_7F2497FC:
    ctx->pc = 0x7F2497FCu;
    ctx->downcount -= 2;
    // 7F2497FC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F249800:
    ctx->pc = 0x7F249800u;
    // 7F249800: b       0x7F249874
    {
            goto label_7F249874;
    }

label_7F249804:
    ctx->pc = 0x7F249804u;
    ctx->downcount -= 7;
    // 7F249804: lwz     r3, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249808:
    ctx->pc = 0x7F249808u;
    // 7F249808: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F24980C:
    ctx->pc = 0x7F24980Cu;
    // 7F24980C: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F249810:
    ctx->pc = 0x7F249810u;
    // 7F249810: lwz     r3, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249814:
    ctx->pc = 0x7F249814u;
    // 7F249814: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F249818:
    ctx->pc = 0x7F249818u;
    // 7F249818: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F24981C:
    loop_7F24981C(ctx);
    if (ctx->pc == 0x7F249830u) goto label_7F249830;
    return;
label_7F249820:
    ctx->pc = 0x7F249820u;
    // 7F249820: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F249824:
    ctx->pc = 0x7F249824u;
    // 7F249824: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F249828:
    ctx->pc = 0x7F249828u;
    // 7F249828: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F24982C:
    // 7F24982C: bc    16, 0, 0x7F24981C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24981Cu;
                return;
            }
            goto label_7F24981C;
        }
    }

label_7F249830:
    ctx->pc = 0x7F249830u;
    ctx->downcount -= 4;
    // 7F249830: lwz     r4, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F249834:
    ctx->pc = 0x7F249834u;
    // 7F249834: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F249838:
    ctx->pc = 0x7F249838u;
    // 7F249838: lwz     r4, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24983C:
    ctx->pc = 0x7F24983Cu;
    // 7F24983C: bl      0x7F3BC518
    {
            ctx->lr = 0x7F249840u;
            ctx->pc = 0x7F3BC518u;
            return;
    }

label_7F249840:
    ctx->pc = 0x7F249840u;
    ctx->downcount -= 4;
    // 7F249840: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F249844:
    ctx->pc = 0x7F249844u;
    // 7F249844: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F249848:
    ctx->pc = 0x7F249848u;
    // 7F249848: lwz     r4, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24984C:
    ctx->pc = 0x7F24984Cu;
    // 7F24984C: bl      0x7F2494B0
    {
            ctx->lr = 0x7F249850u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2494B0u;
                return;
            }
            goto label_7F2494B0;
    }

label_7F249850:
    ctx->pc = 0x7F249850u;
    ctx->downcount -= 2;
    // 7F249850: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F249854:
    ctx->pc = 0x7F249854u;
    // 7F249854: bl      0x7F3AEBC0
    {
            ctx->lr = 0x7F249858u;
            ctx->pc = 0x7F3AEBC0u;
            return;
    }

label_7F249858:
    ctx->pc = 0x7F249858u;
    ctx->downcount -= 6;
    // 7F249858: lwz     r0, 80(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24985C:
    ctx->pc = 0x7F24985Cu;
    // 7F24985C: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F249860:
    ctx->pc = 0x7F249860u;
    // 7F249860: stw     r0, 80(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F249864:
    ctx->pc = 0x7F249864u;
    // 7F249864: lwz     r0, 80(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F249868:
    ctx->pc = 0x7F249868u;
    // 7F249868: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F24986C:
    ctx->pc = 0x7F24986Cu;
    // 7F24986C: stw     r0, 80(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F249870:
    ctx->pc = 0x7F249870u;
    ctx->downcount -= 1;
    // 7F249870: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F249874:
    ctx->pc = 0x7F249874u;
    ctx->downcount -= 16;
    // 7F249874: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F249878:
    ctx->pc = 0x7F249878u;
    // 7F249878: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24987C:
    ctx->pc = 0x7F24987Cu;
    // 7F24987C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F249880:
    ctx->pc = 0x7F249880u;
    // 7F249880: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F249884:
    ctx->pc = 0x7F249884u;
    // 7F249884: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F249888:
    ctx->pc = 0x7F249888u;
    ctx->downcount -= 37;
    // 7F249888: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24988C:
    ctx->pc = 0x7F24988Cu;
    // 7F24988C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F249890:
    ctx->pc = 0x7F249890u;
    // 7F249890: lis     r12, 32584
    ctx->gpr[12] = ((u32)(s32)(32584) << 16);

label_7F249894:
    ctx->pc = 0x7F249894u;
    // 7F249894: lis     r10, 32584
    ctx->gpr[10] = ((u32)(s32)(32584) << 16);

label_7F249898:
    ctx->pc = 0x7F249898u;
    // 7F249898: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24989C:
    ctx->pc = 0x7F24989Cu;
    // 7F24989C: lis     r11, 32589
    ctx->gpr[11] = ((u32)(s32)(32589) << 16);

label_7F2498A0:
    ctx->pc = 0x7F2498A0u;
    // 7F2498A0: lis     r9, 32589
    ctx->gpr[9] = ((u32)(s32)(32589) << 16);

label_7F2498A4:
    ctx->pc = 0x7F2498A4u;
    // 7F2498A4: addi    r0, r10, 11584
    ctx->gpr[0] = ctx->gpr[10] + (u32)(s32)(11584);

label_7F2498A8:
    ctx->pc = 0x7F2498A8u;
    // 7F2498A8: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2498AC:
    ctx->pc = 0x7F2498ACu;
    // 7F2498AC: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2498B0:
    ctx->pc = 0x7F2498B0u;
    // 7F2498B0: addi    r5, r12, 11512
    ctx->gpr[5] = ctx->gpr[12] + (u32)(s32)(11512);

label_7F2498B4:
    ctx->pc = 0x7F2498B4u;
    // 7F2498B4: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2498B8:
    ctx->pc = 0x7F2498B8u;
    // 7F2498B8: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2498BC:
    ctx->pc = 0x7F2498BCu;
    // 7F2498BC: lis     r31, 32584
    ctx->gpr[31] = ((u32)(s32)(32584) << 16);

label_7F2498C0:
    ctx->pc = 0x7F2498C0u;
    // 7F2498C0: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F2498C4:
    ctx->pc = 0x7F2498C4u;
    // 7F2498C4: lis     r30, 32589
    ctx->gpr[30] = ((u32)(s32)(32589) << 16);

label_7F2498C8:
    ctx->pc = 0x7F2498C8u;
    // 7F2498C8: addi    r6, r31, 11480
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(11480);

label_7F2498CC:
    ctx->pc = 0x7F2498CCu;
    // 7F2498CC: or   r31, r8, r8
    {
        ctx->gpr[31] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F2498D0:
    ctx->pc = 0x7F2498D0u;
    // 7F2498D0: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F2498D4:
    ctx->pc = 0x7F2498D4u;
    // 7F2498D4: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F2498D8:
    ctx->pc = 0x7F2498D8u;
    // 7F2498D8: stw     r6, -8608(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(-8608);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2498DC:
    ctx->pc = 0x7F2498DCu;
    // 7F2498DC: or   r30, r7, r7
    {
        ctx->gpr[30] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F2498E0:
    ctx->pc = 0x7F2498E0u;
    // 7F2498E0: li      r6, 24
    ctx->gpr[6] = (u32)(s32)(24);

label_7F2498E4:
    ctx->pc = 0x7F2498E4u;
    // 7F2498E4: stw     r5, -8612(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(-8612);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2498E8:
    ctx->pc = 0x7F2498E8u;
    // 7F2498E8: li      r5, 184
    ctx->gpr[5] = (u32)(s32)(184);

label_7F2498EC:
    ctx->pc = 0x7F2498ECu;
    // 7F2498EC: stw     r0, -8616(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-8616);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2498F0:
    ctx->pc = 0x7F2498F0u;
    // 7F2498F0: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F2498F4u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F2498F4:
    ctx->pc = 0x7F2498F4u;
    ctx->downcount -= 2;
    // 7F2498F4: or.   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[25];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2498F8:
    ctx->pc = 0x7F2498F8u;
    // 7F2498F8: bc    12, 2, 0x7F249978
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F249978;
        }
    }

label_7F2498FC:
    ctx->pc = 0x7F2498FCu;
    ctx->downcount -= 5;
    // 7F2498FC: lis     r4, 32549
    ctx->gpr[4] = ((u32)(s32)(32549) << 16);

label_7F249900:
    ctx->pc = 0x7F249900u;
    // 7F249900: lis     r5, 32549
    ctx->gpr[5] = ((u32)(s32)(32549) << 16);

label_7F249904:
    ctx->pc = 0x7F249904u;
    // 7F249904: addi    r4, r4, -31244
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-31244);

label_7F249908:
    ctx->pc = 0x7F249908u;
    // 7F249908: addi    r5, r5, -27408
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27408);

label_7F24990C:
    ctx->pc = 0x7F24990Cu;
    // 7F24990C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F249910u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F249910:
    ctx->pc = 0x7F249910u;
    ctx->downcount -= 5;
    // 7F249910: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F249914:
    ctx->pc = 0x7F249914u;
    // 7F249914: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F249918:
    ctx->pc = 0x7F249918u;
    // 7F249918: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F24991C:
    ctx->pc = 0x7F24991Cu;
    // 7F24991C: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F249920:
    ctx->pc = 0x7F249920u;
    // 7F249920: bl      0x7F2495A4
    {
            ctx->lr = 0x7F249924u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2495A4u;
                return;
            }
            goto label_7F2495A4;
    }

label_7F249924:
    ctx->pc = 0x7F249924u;
    ctx->downcount -= 2;
    // 7F249924: cmpwi   r3, 0
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

label_7F249928:
    ctx->pc = 0x7F249928u;
    // 7F249928: bc    4, 0, 0x7F24993C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24993C;
        }
    }

label_7F24992C:
    ctx->pc = 0x7F24992Cu;
    ctx->downcount -= 2;
    // 7F24992C: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F249930:
    ctx->pc = 0x7F249930u;
    // 7F249930: bl      0x7F3C8210
    {
            ctx->lr = 0x7F249934u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F249934:
    ctx->pc = 0x7F249934u;
    ctx->downcount -= 2;
    // 7F249934: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F249938:
    ctx->pc = 0x7F249938u;
    // 7F249938: b       0x7F24997C
    {
            goto label_7F24997C;
    }

label_7F24993C:
    ctx->pc = 0x7F24993Cu;
    ctx->downcount -= 15;
    // 7F24993C: stw     r26, 144(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F249940:
    ctx->pc = 0x7F249940u;
    // 7F249940: li      r0, 300
    ctx->gpr[0] = (u32)(s32)(300);

label_7F249944:
    ctx->pc = 0x7F249944u;
    // 7F249944: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F249948:
    ctx->pc = 0x7F249948u;
    // 7F249948: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_7F24994C:
    ctx->pc = 0x7F24994Cu;
    // 7F24994C: stw     r27, 148(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F249950:
    ctx->pc = 0x7F249950u;
    // 7F249950: stw     r28, 152(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F249954:
    ctx->pc = 0x7F249954u;
    // 7F249954: stw     r29, 156(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F249958:
    ctx->pc = 0x7F249958u;
    // 7F249958: sth     r30, 160(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(160);
        mem_write16(ctx, ea, (u16)ctx->gpr[30]);
    }

label_7F24995C:
    ctx->pc = 0x7F24995Cu;
    // 7F24995C: sth     r0, 164(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(164);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F249960:
    ctx->pc = 0x7F249960u;
    // 7F249960: sth     r31, 162(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(162);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_7F249964:
    ctx->pc = 0x7F249964u;
    // 7F249964: lwz     r0, -5852(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5852);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F249968:
    ctx->pc = 0x7F249968u;
    // 7F249968: stw     r0, 176(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24996C:
    ctx->pc = 0x7F24996Cu;
    // 7F24996C: lwz     r0, 176(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(176);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F249970:
    ctx->pc = 0x7F249970u;
    // 7F249970: slw   r0, r3, r0
    {
        u32 sh = ctx->gpr[0] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[3] << sh);
    }

label_7F249974:
    ctx->pc = 0x7F249974u;
    // 7F249974: stw     r0, 180(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F249978:
    ctx->pc = 0x7F249978u;
    ctx->downcount -= 1;
    // 7F249978: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24997C:
    ctx->pc = 0x7F24997Cu;
    ctx->downcount -= 16;
    // 7F24997C: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F249980:
    ctx->pc = 0x7F249980u;
    // 7F249980: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F249984:
    ctx->pc = 0x7F249984u;
    // 7F249984: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F249988:
    ctx->pc = 0x7F249988u;
    // 7F249988: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F24998C:
    ctx->pc = 0x7F24998Cu;
    // 7F24998C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F249990:
    ctx->pc = 0x7F249990u;
    ctx->downcount -= 5;
    // 7F249990: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F249994:
    ctx->pc = 0x7F249994u;
    // 7F249994: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F249998:
    ctx->pc = 0x7F249998u;
    // 7F249998: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F24999C:
    ctx->pc = 0x7F24999Cu;
    // 7F24999C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2499A0:
    ctx->pc = 0x7F2499A0u;
    // 7F2499A0: bl      0x7F249888
    {
            ctx->lr = 0x7F2499A4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F249888u;
                return;
            }
            goto label_7F249888;
    }

label_7F2499A4:
    ctx->pc = 0x7F2499A4u;
    ctx->downcount -= 5;
    // 7F2499A4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2499A8:
    ctx->pc = 0x7F2499A8u;
    // 7F2499A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2499AC:
    ctx->pc = 0x7F2499ACu;
    // 7F2499AC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2499B0:
    ctx->pc = 0x7F2499B0u;
    // 7F2499B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F2499B4:
    ctx->pc = 0x7F2499B4u;
    ctx->downcount -= 5;
    // 7F2499B4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2499B8:
    ctx->pc = 0x7F2499B8u;
    // 7F2499B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2499BC:
    ctx->pc = 0x7F2499BCu;
    // 7F2499BC: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F2499C0:
    ctx->pc = 0x7F2499C0u;
    // 7F2499C0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2499C4:
    ctx->pc = 0x7F2499C4u;
    // 7F2499C4: bl      0x7F249888
    {
            ctx->lr = 0x7F2499C8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F249888u;
                return;
            }
            goto label_7F249888;
    }

label_7F2499C8:
    ctx->pc = 0x7F2499C8u;
    ctx->downcount -= 5;
    // 7F2499C8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2499CC:
    ctx->pc = 0x7F2499CCu;
    // 7F2499CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2499D0:
    ctx->pc = 0x7F2499D0u;
    // 7F2499D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2499D4:
    ctx->pc = 0x7F2499D4u;
    // 7F2499D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F2499D8:
    ctx->pc = 0x7F2499D8u;
    ctx->downcount -= 5;
    // 7F2499D8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2499DC:
    ctx->pc = 0x7F2499DCu;
    // 7F2499DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2499E0:
    ctx->pc = 0x7F2499E0u;
    // 7F2499E0: li      r8, 2
    ctx->gpr[8] = (u32)(s32)(2);

label_7F2499E4:
    ctx->pc = 0x7F2499E4u;
    // 7F2499E4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2499E8:
    ctx->pc = 0x7F2499E8u;
    // 7F2499E8: bl      0x7F249888
    {
            ctx->lr = 0x7F2499ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F249888u;
                return;
            }
            goto label_7F249888;
    }

label_7F2499EC:
    ctx->pc = 0x7F2499ECu;
    ctx->downcount -= 5;
    // 7F2499EC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2499F0:
    ctx->pc = 0x7F2499F0u;
    // 7F2499F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2499F4:
    ctx->pc = 0x7F2499F4u;
    // 7F2499F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2499F8:
    ctx->pc = 0x7F2499F8u;
    // 7F2499F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F2499FC:
    ctx->pc = 0x7F2499FCu;
    ctx->downcount -= 5;
    // 7F2499FC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F249A00:
    ctx->pc = 0x7F249A00u;
    // 7F249A00: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F249A04:
    ctx->pc = 0x7F249A04u;
    // 7F249A04: li      r8, 3
    ctx->gpr[8] = (u32)(s32)(3);

label_7F249A08:
    ctx->pc = 0x7F249A08u;
    // 7F249A08: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F249A0C:
    ctx->pc = 0x7F249A0Cu;
    // 7F249A0C: bl      0x7F249888
    {
            ctx->lr = 0x7F249A10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F249888u;
                return;
            }
            goto label_7F249888;
    }

label_7F249A10:
    ctx->pc = 0x7F249A10u;
    ctx->downcount -= 5;
    // 7F249A10: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F249A14:
    ctx->pc = 0x7F249A14u;
    // 7F249A14: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F249A18:
    ctx->pc = 0x7F249A18u;
    // 7F249A18: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F249A1C:
    ctx->pc = 0x7F249A1Cu;
    // 7F249A1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F249A20:
    ctx->pc = 0x7F249A20u;
    ctx->downcount -= 12;
    // 7F249A20: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F249A20u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F249A24:
    ctx->pc = 0x7F249A24u;
    // 7F249A24: lis     r6, 32584
    ctx->gpr[6] = ((u32)(s32)(32584) << 16);

label_7F249A28:
    ctx->pc = 0x7F249A28u;
    // 7F249A28: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F249A2C:
    ctx->pc = 0x7F249A2Cu;
    // 7F249A2C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F249A30:
    ctx->pc = 0x7F249A30u;
    // 7F249A30: lfs     f3, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F249A30u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F249A34:
    ctx->pc = 0x7F249A34u;
    // 7F249A34: stfsu     f4, 11544(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F249A34u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(11544);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
        ctx->gpr[6] = ea;
    }

label_7F249A38:
    ctx->pc = 0x7F249A38u;
    // 7F249A38: lfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F249A38u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F249A3C:
    ctx->pc = 0x7F249A3Cu;
    // 7F249A3C: stfs     f3, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F249A3Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F249A40:
    ctx->pc = 0x7F249A40u;
    // 7F249A40: stfs     f0, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F249A40u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F249A44:
    ctx->pc = 0x7F249A44u;
    // 7F249A44: stfs     f1, 11576(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F249A44u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(11576);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F249A48:
    ctx->pc = 0x7F249A48u;
    // 7F249A48: stfs     f2, 11580(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F249A48u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(11580);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F249A4C:
    ctx->pc = 0x7F249A4Cu;
    // 7F249A4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F249A50:
    ctx->pc = 0x7F249A50u;
    ctx->downcount -= 24;
    // 7F249A50: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F249A54:
    ctx->pc = 0x7F249A54u;
    // 7F249A54: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F249A58:
    ctx->pc = 0x7F249A58u;
    // 7F249A58: addi    r10, r7, 20760
    ctx->gpr[10] = ctx->gpr[7] + (u32)(s32)(20760);

label_7F249A5C:
    ctx->pc = 0x7F249A5Cu;
    // 7F249A5C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F249A60:
    ctx->pc = 0x7F249A60u;
    // 7F249A60: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F249A64:
    ctx->pc = 0x7F249A64u;
    // 7F249A64: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F249A68:
    ctx->pc = 0x7F249A68u;
    // 7F249A68: addi    r8, r6, 20832
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(20832);

label_7F249A6C:
    ctx->pc = 0x7F249A6Cu;
    // 7F249A6C: addi    r7, r5, 20836
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(20836);

label_7F249A70:
    ctx->pc = 0x7F249A70u;
    // 7F249A70: addi    r6, r4, 20800
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(20800);

label_7F249A74:
    ctx->pc = 0x7F249A74u;
    // 7F249A74: addi    r4, r3, 20840
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20840);

label_7F249A78:
    ctx->pc = 0x7F249A78u;
    // 7F249A78: lfs     f4, 0(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F249A78u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F249A7C:
    ctx->pc = 0x7F249A7Cu;
    // 7F249A7C: lis     r9, 32584
    ctx->gpr[9] = ((u32)(s32)(32584) << 16);

label_7F249A80:
    ctx->pc = 0x7F249A80u;
    // 7F249A80: lfs     f3, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F249A80u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F249A84:
    ctx->pc = 0x7F249A84u;
    // 7F249A84: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F249A88:
    ctx->pc = 0x7F249A88u;
    // 7F249A88: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F249A88u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F249A8C:
    ctx->pc = 0x7F249A8Cu;
    // 7F249A8C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F249A90:
    ctx->pc = 0x7F249A90u;
    // 7F249A90: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F249A90u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F249A94:
    ctx->pc = 0x7F249A94u;
    // 7F249A94: stfsu     f4, 11544(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F249A94u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(11544);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
        ctx->gpr[9] = ea;
    }

label_7F249A98:
    ctx->pc = 0x7F249A98u;
    // 7F249A98: lfs     f2, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F249A98u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F249A9C:
    ctx->pc = 0x7F249A9Cu;
    // 7F249A9C: stfs     f3, 4(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F249A9Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F249AA0:
    ctx->pc = 0x7F249AA0u;
    // 7F249AA0: stfs     f2, 8(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F249AA0u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F249AA4:
    ctx->pc = 0x7F249AA4u;
    // 7F249AA4: stfs     f1, 11576(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F249AA4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(11576);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F249AA8:
    ctx->pc = 0x7F249AA8u;
    // 7F249AA8: stfs     f0, 11580(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F249AA8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(11580);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F249AAC:
    ctx->pc = 0x7F249AACu;
    // 7F249AAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F249AB0:
    ctx->pc = 0x7F249AB0u;
    ctx->downcount -= 21;
    // 7F249AB0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F249AB4:
    ctx->pc = 0x7F249AB4u;
    // 7F249AB4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F249AB8:
    ctx->pc = 0x7F249AB8u;
    // 7F249AB8: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F249ABC:
    ctx->pc = 0x7F249ABCu;
    // 7F249ABC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F249AC0:
    ctx->pc = 0x7F249AC0u;
    // 7F249AC0: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F249AC4:
    ctx->pc = 0x7F249AC4u;
    // 7F249AC4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F249AC8:
    ctx->pc = 0x7F249AC8u;
    // 7F249AC8: addi    r3, r5, 22156
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(22156);

label_7F249ACC:
    ctx->pc = 0x7F249ACCu;
    // 7F249ACC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F249AD0:
    ctx->pc = 0x7F249AD0u;
    // 7F249AD0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249AD4:
    ctx->pc = 0x7F249AD4u;
    // 7F249AD4: cmplwi  r3, 0x0000
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

label_7F249AD8:
    ctx->pc = 0x7F249AD8u;
    // 7F249AD8: bc    12, 2, 0x7F249B00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F249B00;
        }
    }

label_7F249ADC:
    ctx->pc = 0x7F249ADCu;
    ctx->downcount -= 3;
    // 7F249ADC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249AE0:
    ctx->pc = 0x7F249AE0u;
    // 7F249AE0: lwz     r4, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F249AE4:
    ctx->pc = 0x7F249AE4u;
    // 7F249AE4: bl      0x7F3B0954
    {
            ctx->lr = 0x7F249AE8u;
            ctx->pc = 0x7F3B0954u;
            return;
    }

label_7F249AE8:
    ctx->pc = 0x7F249AE8u;
    ctx->downcount -= 6;
    // 7F249AE8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F249AEC:
    ctx->pc = 0x7F249AECu;
    // 7F249AEC: lwz     r4, 92(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F249AF0:
    ctx->pc = 0x7F249AF0u;
    // 7F249AF0: addi    r3, r3, -5668
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5668);

label_7F249AF4:
    ctx->pc = 0x7F249AF4u;
    // 7F249AF4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249AF8:
    ctx->pc = 0x7F249AF8u;
    // 7F249AF8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249AFC:
    ctx->pc = 0x7F249AFCu;
    // 7F249AFC: bl      0x7F3B0954
    {
            ctx->lr = 0x7F249B00u;
            ctx->pc = 0x7F3B0954u;
            return;
    }

label_7F249B00:
    ctx->pc = 0x7F249B00u;
    ctx->downcount -= 2;
    // 7F249B00: addi    r3, r30, 48
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(48);

label_7F249B04:
    ctx->pc = 0x7F249B04u;
    // 7F249B04: bl      0x7F042AAC
    {
            ctx->lr = 0x7F249B08u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F249B08:
    ctx->pc = 0x7F249B08u;
    ctx->downcount -= 2;
    // 7F249B08: addi    r3, r30, 92
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(92);

label_7F249B0C:
    ctx->pc = 0x7F249B0Cu;
    // 7F249B0C: bl      0x7F042AAC
    {
            ctx->lr = 0x7F249B10u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F249B10:
    ctx->pc = 0x7F249B10u;
    ctx->downcount -= 3;
    // 7F249B10: cmpwi   r31, 10
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

label_7F249B14:
    ctx->pc = 0x7F249B14u;
    // 7F249B14: addi    r28, r30, 48
    ctx->gpr[28] = ctx->gpr[30] + (u32)(s32)(48);

label_7F249B18:
    ctx->pc = 0x7F249B18u;
    // 7F249B18: bc    4, 0, 0x7F249BD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F249BD4;
        }
    }

label_7F249B1C:
    ctx->pc = 0x7F249B1Cu;
    ctx->downcount -= 2;
    // 7F249B1C: cmpwi   r31, 8
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F249B20:
    ctx->pc = 0x7F249B20u;
    // 7F249B20: bc    4, 0, 0x7F249B28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F249B28;
        }
    }

label_7F249B24:
    ctx->pc = 0x7F249B24u;
    ctx->downcount -= 1;
    // 7F249B24: b       0x7F249BD4
    {
            goto label_7F249BD4;
    }

label_7F249B28:
    ctx->pc = 0x7F249B28u;
    ctx->downcount -= 16;
    // 7F249B28: lwz     r0, 584(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(584);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F249B2C:
    ctx->pc = 0x7F249B2Cu;
    // 7F249B2C: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F249B30:
    ctx->pc = 0x7F249B30u;
    // 7F249B30: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F249B34:
    ctx->pc = 0x7F249B34u;
    // 7F249B34: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F249B38:
    ctx->pc = 0x7F249B38u;
    // 7F249B38: addi    r5, r5, 22156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(22156);

label_7F249B3C:
    ctx->pc = 0x7F249B3Cu;
    // 7F249B3C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F249B40:
    ctx->pc = 0x7F249B40u;
    // 7F249B40: addi    r4, r4, 11700
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11700);

label_7F249B44:
    ctx->pc = 0x7F249B44u;
    // 7F249B44: rlwinm r29, r31, 3, 0, 28
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[31], 3u) & 0xFFFFFFF8u;
    }

label_7F249B48:
    ctx->pc = 0x7F249B48u;
    // 7F249B48: addi    r3, r3, 11620
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11620);

label_7F249B4C:
    ctx->pc = 0x7F249B4Cu;
    // 7F249B4C: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F249B50:
    ctx->pc = 0x7F249B50u;
    // 7F249B50: lwzx    r7, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F249B54:
    ctx->pc = 0x7F249B54u;
    // 7F249B54: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F249B58:
    ctx->pc = 0x7F249B58u;
    // 7F249B58: lwzx    r8, r3, r29
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[29];
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F249B5C:
    ctx->pc = 0x7F249B5Cu;
    // 7F249B5C: addi    r3, r30, 464
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(464);

label_7F249B60:
    ctx->pc = 0x7F249B60u;
    // 7F249B60: li      r6, 6
    ctx->gpr[6] = (u32)(s32)(6);

label_7F249B64:
    ctx->pc = 0x7F249B64u;
    // 7F249B64: bl      0x7F25CB2C
    {
            ctx->lr = 0x7F249B68u;
            ctx->pc = 0x7F25CB2Cu;
            return;
    }

label_7F249B68:
    ctx->pc = 0x7F249B68u;
    ctx->downcount -= 16;
    // 7F249B68: lwz     r4, 584(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(584);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F249B6C:
    ctx->pc = 0x7F249B6Cu;
    // 7F249B6C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F249B70:
    ctx->pc = 0x7F249B70u;
    // 7F249B70: addi    r0, r3, 11620
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(11620);

label_7F249B74:
    ctx->pc = 0x7F249B74u;
    // 7F249B74: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F249B78:
    ctx->pc = 0x7F249B78u;
    // 7F249B78: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F249B7C:
    ctx->pc = 0x7F249B7Cu;
    // 7F249B7C: rlwinm r6, r4, 2, 0, 29
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F249B80:
    ctx->pc = 0x7F249B80u;
    // 7F249B80: addi    r5, r5, -5668
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-5668);

label_7F249B84:
    ctx->pc = 0x7F249B84u;
    // 7F249B84: add   r4, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F249B88:
    ctx->pc = 0x7F249B88u;
    // 7F249B88: addi    r3, r3, 11700
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11700);

label_7F249B8C:
    ctx->pc = 0x7F249B8Cu;
    // 7F249B8C: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F249B90:
    ctx->pc = 0x7F249B90u;
    // 7F249B90: lwzx    r7, r3, r6
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[6];
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F249B94:
    ctx->pc = 0x7F249B94u;
    // 7F249B94: addi    r3, r30, 504
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(504);

label_7F249B98:
    ctx->pc = 0x7F249B98u;
    // 7F249B98: lwz     r8, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F249B9C:
    ctx->pc = 0x7F249B9Cu;
    // 7F249B9C: addi    r4, r30, 92
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(92);

label_7F249BA0:
    ctx->pc = 0x7F249BA0u;
    // 7F249BA0: li      r6, 6
    ctx->gpr[6] = (u32)(s32)(6);

label_7F249BA4:
    ctx->pc = 0x7F249BA4u;
    // 7F249BA4: bl      0x7F25CB2C
    {
            ctx->lr = 0x7F249BA8u;
            ctx->pc = 0x7F25CB2Cu;
            return;
    }

label_7F249BA8:
    ctx->pc = 0x7F249BA8u;
    ctx->downcount -= 3;
    // 7F249BA8: lwz     r0, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F249BAC:
    ctx->pc = 0x7F249BACu;
    // 7F249BAC: cmplwi  r0, 0x0000
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

label_7F249BB0:
    ctx->pc = 0x7F249BB0u;
    // 7F249BB0: bc    12, 2, 0x7F249BC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F249BC0;
        }
    }

label_7F249BB4:
    ctx->pc = 0x7F249BB4u;
    ctx->downcount -= 3;
    // 7F249BB4: lwz     r0, 92(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F249BB8:
    ctx->pc = 0x7F249BB8u;
    // 7F249BB8: cmplwi  r0, 0x0000
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

label_7F249BBC:
    ctx->pc = 0x7F249BBCu;
    // 7F249BBC: bc    4, 2, 0x7F249BC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F249BC8;
        }
    }

label_7F249BC0:
    ctx->pc = 0x7F249BC0u;
    ctx->downcount -= 2;
    // 7F249BC0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F249BC4:
    ctx->pc = 0x7F249BC4u;
    // 7F249BC4: b       0x7F249CFC
    {
            goto label_7F249CFC;
    }

label_7F249BC8:
    ctx->pc = 0x7F249BC8u;
    ctx->downcount -= 2;
    // 7F249BC8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F249BCC:
    ctx->pc = 0x7F249BCCu;
    // 7F249BCC: bl      0x7F24BF70
    {
            ctx->lr = 0x7F249BD0u;
            goto label_7F24BF70;
    }

label_7F249BD0:
    ctx->pc = 0x7F249BD0u;
    ctx->downcount -= 1;
    // 7F249BD0: b       0x7F249C70
    {
            goto label_7F249C70;
    }

label_7F249BD4:
    ctx->pc = 0x7F249BD4u;
    ctx->downcount -= 7;
    // 7F249BD4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F249BD8:
    ctx->pc = 0x7F249BD8u;
    // 7F249BD8: rlwinm r29, r31, 3, 0, 28
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[31], 3u) & 0xFFFFFFF8u;
    }

label_7F249BDC:
    ctx->pc = 0x7F249BDCu;
    // 7F249BDC: addi    r4, r3, 11620
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(11620);

label_7F249BE0:
    ctx->pc = 0x7F249BE0u;
    // 7F249BE0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F249BE4:
    ctx->pc = 0x7F249BE4u;
    // 7F249BE4: lwzx    r4, r4, r29
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[29];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F249BE8:
    ctx->pc = 0x7F249BE8u;
    // 7F249BE8: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_7F249BEC:
    ctx->pc = 0x7F249BECu;
    // 7F249BEC: bl      0x7F04272C
    {
            ctx->lr = 0x7F249BF0u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F249BF0:
    ctx->pc = 0x7F249BF0u;
    ctx->downcount -= 3;
    // 7F249BF0: lwz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F249BF4:
    ctx->pc = 0x7F249BF4u;
    // 7F249BF4: cmplwi  r0, 0x0000
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

label_7F249BF8:
    ctx->pc = 0x7F249BF8u;
    // 7F249BF8: bc    4, 2, 0x7F249C04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F249C04;
        }
    }

label_7F249BFC:
    ctx->pc = 0x7F249BFCu;
    ctx->downcount -= 2;
    // 7F249BFC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F249C00:
    ctx->pc = 0x7F249C00u;
    // 7F249C00: b       0x7F249CFC
    {
            goto label_7F249CFC;
    }

label_7F249C04:
    ctx->pc = 0x7F249C04u;
    ctx->downcount -= 6;
    // 7F249C04: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F249C08:
    ctx->pc = 0x7F249C08u;
    // 7F249C08: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F249C0C:
    ctx->pc = 0x7F249C0Cu;
    // 7F249C0C: addi    r4, r4, 22156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22156);

label_7F249C10:
    ctx->pc = 0x7F249C10u;
    // 7F249C10: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F249C14:
    ctx->pc = 0x7F249C14u;
    // 7F249C14: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F249C18:
    ctx->pc = 0x7F249C18u;
    // 7F249C18: bl      0x7F042B74
    {
            ctx->lr = 0x7F249C1Cu;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F249C1C:
    ctx->pc = 0x7F249C1Cu;
    ctx->downcount -= 8;
    // 7F249C1C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F249C20:
    ctx->pc = 0x7F249C20u;
    // 7F249C20: addi    r28, r30, 92
    ctx->gpr[28] = ctx->gpr[30] + (u32)(s32)(92);

label_7F249C24:
    ctx->pc = 0x7F249C24u;
    // 7F249C24: addi    r0, r3, 11620
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(11620);

label_7F249C28:
    ctx->pc = 0x7F249C28u;
    // 7F249C28: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_7F249C2C:
    ctx->pc = 0x7F249C2Cu;
    // 7F249C2C: add   r4, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F249C30:
    ctx->pc = 0x7F249C30u;
    // 7F249C30: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F249C34:
    ctx->pc = 0x7F249C34u;
    // 7F249C34: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F249C38:
    ctx->pc = 0x7F249C38u;
    // 7F249C38: bl      0x7F04272C
    {
            ctx->lr = 0x7F249C3Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F249C3C:
    ctx->pc = 0x7F249C3Cu;
    ctx->downcount -= 3;
    // 7F249C3C: lwz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F249C40:
    ctx->pc = 0x7F249C40u;
    // 7F249C40: cmplwi  r0, 0x0000
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

label_7F249C44:
    ctx->pc = 0x7F249C44u;
    // 7F249C44: bc    4, 2, 0x7F249C50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F249C50;
        }
    }

label_7F249C48:
    ctx->pc = 0x7F249C48u;
    ctx->downcount -= 2;
    // 7F249C48: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F249C4C:
    ctx->pc = 0x7F249C4Cu;
    // 7F249C4C: b       0x7F249CFC
    {
            goto label_7F249CFC;
    }

label_7F249C50:
    ctx->pc = 0x7F249C50u;
    ctx->downcount -= 6;
    // 7F249C50: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F249C54:
    ctx->pc = 0x7F249C54u;
    // 7F249C54: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F249C58:
    ctx->pc = 0x7F249C58u;
    // 7F249C58: addi    r4, r4, 22156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22156);

label_7F249C5C:
    ctx->pc = 0x7F249C5Cu;
    // 7F249C5C: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F249C60:
    ctx->pc = 0x7F249C60u;
    // 7F249C60: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F249C64:
    ctx->pc = 0x7F249C64u;
    // 7F249C64: bl      0x7F042B74
    {
            ctx->lr = 0x7F249C68u;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F249C68:
    ctx->pc = 0x7F249C68u;
    ctx->downcount -= 2;
    // 7F249C68: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F249C6C:
    ctx->pc = 0x7F249C6Cu;
    // 7F249C6C: bl      0x7F24BF70
    {
            ctx->lr = 0x7F249C70u;
            goto label_7F24BF70;
    }

label_7F249C70:
    ctx->pc = 0x7F249C70u;
    ctx->downcount -= 22;
    // 7F249C70: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F249C74:
    ctx->pc = 0x7F249C74u;
    // 7F249C74: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F249C78:
    ctx->pc = 0x7F249C78u;
    // 7F249C78: addi    r10, r4, 11620
    ctx->gpr[10] = ctx->gpr[4] + (u32)(s32)(11620);

label_7F249C7C:
    ctx->pc = 0x7F249C7Cu;
    // 7F249C7C: rlwinm r0, r31, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 3u) & 0xFFFFFFF8u;
    }

label_7F249C80:
    ctx->pc = 0x7F249C80u;
    // 7F249C80: lwz     r11, 22156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22156);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F249C84:
    ctx->pc = 0x7F249C84u;
    // 7F249C84: add   r7, r10, r0
    {
        u32 a = ctx->gpr[10];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F249C88:
    ctx->pc = 0x7F249C88u;
    // 7F249C88: lis     r6, 32584
    ctx->gpr[6] = ((u32)(s32)(32584) << 16);

label_7F249C8C:
    ctx->pc = 0x7F249C8Cu;
    // 7F249C8C: lwz     r9, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F249C90:
    ctx->pc = 0x7F249C90u;
    // 7F249C90: lwzx    r7, r10, r0
    {
        u32 ea = ctx->gpr[10] + ctx->gpr[0];
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F249C94:
    ctx->pc = 0x7F249C94u;
    // 7F249C94: addi    r8, r6, 24804
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(24804);

label_7F249C98:
    ctx->pc = 0x7F249C98u;
    // 7F249C98: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F249C9C:
    ctx->pc = 0x7F249C9Cu;
    // 7F249C9C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F249CA0:
    ctx->pc = 0x7F249CA0u;
    // 7F249CA0: addi    r6, r5, -5688
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-5688);

label_7F249CA4:
    ctx->pc = 0x7F249CA4u;
    // 7F249CA4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F249CA8:
    ctx->pc = 0x7F249CA8u;
    // 7F249CA8: addi    r5, r30, 48
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(48);

label_7F249CAC:
    ctx->pc = 0x7F249CACu;
    // 7F249CAC: addi    r0, r30, 92
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(92);

label_7F249CB0:
    ctx->pc = 0x7F249CB0u;
    // 7F249CB0: cmplwi  r11, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[11]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F249CB4:
    ctx->pc = 0x7F249CB4u;
    // 7F249CB4: stw     r9, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F249CB8:
    ctx->pc = 0x7F249CB8u;
    // 7F249CB8: stw     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F249CBC:
    ctx->pc = 0x7F249CBCu;
    // 7F249CBC: stw     r5, -5672(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5672);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F249CC0:
    ctx->pc = 0x7F249CC0u;
    // 7F249CC0: stw     r0, -5676(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5676);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F249CC4:
    ctx->pc = 0x7F249CC4u;
    // 7F249CC4: bc    12, 2, 0x7F249CEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F249CEC;
        }
    }

label_7F249CC8:
    ctx->pc = 0x7F249CC8u;
    ctx->downcount -= 3;
    // 7F249CC8: lwz     r3, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249CCC:
    ctx->pc = 0x7F249CCCu;
    // 7F249CCC: lwz     r4, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F249CD0:
    ctx->pc = 0x7F249CD0u;
    // 7F249CD0: bl      0x7F3B0938
    {
            ctx->lr = 0x7F249CD4u;
            ctx->pc = 0x7F3B0938u;
            return;
    }

label_7F249CD4:
    ctx->pc = 0x7F249CD4u;
    ctx->downcount -= 6;
    // 7F249CD4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F249CD8:
    ctx->pc = 0x7F249CD8u;
    // 7F249CD8: lwz     r4, 92(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F249CDC:
    ctx->pc = 0x7F249CDCu;
    // 7F249CDC: addi    r3, r3, -5668
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5668);

label_7F249CE0:
    ctx->pc = 0x7F249CE0u;
    // 7F249CE0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249CE4:
    ctx->pc = 0x7F249CE4u;
    // 7F249CE4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249CE8:
    ctx->pc = 0x7F249CE8u;
    // 7F249CE8: bl      0x7F3B0938
    {
            ctx->lr = 0x7F249CECu;
            ctx->pc = 0x7F3B0938u;
            return;
    }

label_7F249CEC:
    ctx->pc = 0x7F249CECu;
    ctx->downcount -= 4;
    // 7F249CEC: stw     r31, 584(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(584);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F249CF0:
    ctx->pc = 0x7F249CF0u;
    // 7F249CF0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F249CF4:
    ctx->pc = 0x7F249CF4u;
    // 7F249CF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F249CF8:
    ctx->pc = 0x7F249CF8u;
    // 7F249CF8: stw     r0, 576(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(576);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F249CFC:
    ctx->pc = 0x7F249CFCu;
    ctx->downcount -= 16;
    // 7F249CFC: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F249D00:
    ctx->pc = 0x7F249D00u;
    // 7F249D00: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F249D04:
    ctx->pc = 0x7F249D04u;
    // 7F249D04: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F249D08:
    ctx->pc = 0x7F249D08u;
    // 7F249D08: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F249D0C:
    ctx->pc = 0x7F249D0Cu;
    // 7F249D0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F249D10:
    ctx->pc = 0x7F249D10u;
    ctx->downcount -= 28;
    // 7F249D10: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F249D14:
    ctx->pc = 0x7F249D14u;
    // 7F249D14: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F249D18:
    ctx->pc = 0x7F249D18u;
    // 7F249D18: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F249D1C:
    ctx->pc = 0x7F249D1Cu;
    // 7F249D1C: li      r7, 68
    ctx->gpr[7] = (u32)(s32)(68);

label_7F249D20:
    ctx->pc = 0x7F249D20u;
    // 7F249D20: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F249D24:
    ctx->pc = 0x7F249D24u;
    // 7F249D24: li      r8, 68
    ctx->gpr[8] = (u32)(s32)(68);

label_7F249D28:
    ctx->pc = 0x7F249D28u;
    // 7F249D28: stmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F249D2C:
    ctx->pc = 0x7F249D2Cu;
    // 7F249D2C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F249D30:
    ctx->pc = 0x7F249D30u;
    // 7F249D30: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F249D34:
    ctx->pc = 0x7F249D34u;
    // 7F249D34: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F249D38:
    ctx->pc = 0x7F249D38u;
    // 7F249D38: lwz     r9, 460(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(460);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F249D3C:
    ctx->pc = 0x7F249D3Cu;
    // 7F249D3C: lwz     r3, 448(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249D40:
    ctx->pc = 0x7F249D40u;
    // 7F249D40: lwz     r0, 180(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F249D44:
    ctx->pc = 0x7F249D44u;
    // 7F249D44: lwz     r3, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249D48:
    ctx->pc = 0x7F249D48u;
    // 7F249D48: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F249D4C:
    ctx->pc = 0x7F249D4Cu;
    // 7F249D4C: add   r9, r9, r0
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_7F249D50:
    ctx->pc = 0x7F249D50u;
    // 7F249D50: lwz     r30, 296(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(296);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F249D54:
    ctx->pc = 0x7F249D54u;
    // 7F249D54: bl      0x7F10B744
    {
            ctx->lr = 0x7F249D58u;
            ctx->pc = 0x7F10B744u;
            return;
    }

label_7F249D58:
    ctx->pc = 0x7F249D58u;
    ctx->downcount -= 2;
    // 7F249D58: cmpwi   r3, 0
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

label_7F249D5C:
    ctx->pc = 0x7F249D5Cu;
    // 7F249D5C: bc    12, 2, 0x7F249D80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F249D80;
        }
    }

label_7F249D60:
    ctx->pc = 0x7F249D60u;
    ctx->downcount -= 2;
    // 7F249D60: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F249D64:
    ctx->pc = 0x7F249D64u;
    // 7F249D64: bl      0x7F10B7A4
    {
            ctx->lr = 0x7F249D68u;
            ctx->pc = 0x7F10B7A4u;
            return;
    }

label_7F249D68:
    ctx->pc = 0x7F249D68u;
    ctx->downcount -= 2;
    // 7F249D68: addi    r3, r31, 352
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(352);

label_7F249D6C:
    ctx->pc = 0x7F249D6Cu;
    // 7F249D6C: bl      0x7F10B7C4
    {
            ctx->lr = 0x7F249D70u;
            ctx->pc = 0x7F10B7C4u;
            return;
    }

label_7F249D70:
    ctx->pc = 0x7F249D70u;
    ctx->downcount -= 4;
    // 7F249D70: lhz     r0, 50(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(50);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F249D74:
    ctx->pc = 0x7F249D74u;
    // 7F249D74: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F249D78:
    ctx->pc = 0x7F249D78u;
    // 7F249D78: sth     r0, 50(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F249D7C:
    ctx->pc = 0x7F249D7Cu;
    // 7F249D7C: b       0x7F249DBC
    {
            goto label_7F249DBC;
    }

label_7F249D80:
    ctx->pc = 0x7F249D80u;
    ctx->downcount -= 4;
    // 7F249D80: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F249D84:
    ctx->pc = 0x7F249D84u;
    // 7F249D84: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F249D88:
    ctx->pc = 0x7F249D88u;
    // 7F249D88: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F249D8C:
    ctx->pc = 0x7F249D8Cu;
    // 7F249D8C: bl      0x800261D8
    {
            ctx->lr = 0x7F249D90u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F249D90:
    ctx->pc = 0x7F249D90u;
    ctx->downcount -= 11;
    // 7F249D90: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249D94:
    ctx->pc = 0x7F249D94u;
    // 7F249D94: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F249D98:
    ctx->pc = 0x7F249D98u;
    // 7F249D98: stw     r3, 352(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(352);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F249D9C:
    ctx->pc = 0x7F249D9Cu;
    // 7F249D9C: stw     r0, 356(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F249DA0:
    ctx->pc = 0x7F249DA0u;
    // 7F249DA0: lwz     r3, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249DA4:
    ctx->pc = 0x7F249DA4u;
    // 7F249DA4: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F249DA8:
    ctx->pc = 0x7F249DA8u;
    // 7F249DA8: stw     r3, 360(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(360);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F249DAC:
    ctx->pc = 0x7F249DACu;
    // 7F249DAC: stw     r0, 364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F249DB0:
    ctx->pc = 0x7F249DB0u;
    // 7F249DB0: lhz     r0, 50(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(50);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F249DB4:
    ctx->pc = 0x7F249DB4u;
    // 7F249DB4: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F249DB8:
    ctx->pc = 0x7F249DB8u;
    // 7F249DB8: sth     r0, 50(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F249DBC:
    ctx->pc = 0x7F249DBCu;
    ctx->downcount -= 2;
    // 7F249DBC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F249DC0:
    ctx->pc = 0x7F249DC0u;
    // 7F249DC0: bl      0x7F3CC594
    {
            ctx->lr = 0x7F249DC4u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F249DC4:
    ctx->pc = 0x7F249DC4u;
    ctx->downcount -= 6;
    // 7F249DC4: stfs     f1, 544(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F249DC4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(544);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F249DC8:
    ctx->pc = 0x7F249DC8u;
    // 7F249DC8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F249DCC:
    ctx->pc = 0x7F249DCCu;
    // 7F249DCC: lfs     f0, 20864(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F249DCCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20864);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F249DD0:
    ctx->pc = 0x7F249DD0u;
    // 7F249DD0: lfs     f1, 544(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F249DD0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(544);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F249DD4:
    ctx->pc = 0x7F249DD4u;
    // 7F249DD4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F249DD4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F249DD8:
    ctx->pc = 0x7F249DD8u;
    // 7F249DD8: bc    4, 0, 0x7F249DE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F249DE8;
        }
    }

label_7F249DDC:
    ctx->pc = 0x7F249DDCu;
    ctx->downcount -= 3;
    // 7F249DDC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F249DE0:
    ctx->pc = 0x7F249DE0u;
    // 7F249DE0: lfs     f0, 20848(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F249DE0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20848);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F249DE4:
    ctx->pc = 0x7F249DE4u;
    // 7F249DE4: stfs     f0, 544(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F249DE4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(544);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F249DE8:
    ctx->pc = 0x7F249DE8u;
    ctx->downcount -= 16;
    // 7F249DE8: lmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F249DEC:
    ctx->pc = 0x7F249DECu;
    // 7F249DEC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F249DF0:
    ctx->pc = 0x7F249DF0u;
    // 7F249DF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F249DF4:
    ctx->pc = 0x7F249DF4u;
    // 7F249DF4: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F249DF8:
    ctx->pc = 0x7F249DF8u;
    // 7F249DF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F249DFC:
    ctx->pc = 0x7F249DFCu;
    ctx->downcount -= 57;
    // 7F249DFC: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F249E00:
    ctx->pc = 0x7F249E00u;
    // 7F249E00: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F249E04:
    ctx->pc = 0x7F249E04u;
    // 7F249E04: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F249E08:
    ctx->pc = 0x7F249E08u;
    // 7F249E08: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F249E0C:
    ctx->pc = 0x7F249E0Cu;
    // 7F249E0C: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F249E10:
    ctx->pc = 0x7F249E10u;
    // 7F249E10: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F249E14:
    ctx->pc = 0x7F249E14u;
    // 7F249E14: lfs     f1, 20868(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F249E14u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20868);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F249E18:
    ctx->pc = 0x7F249E18u;
    // 7F249E18: stmw     r26, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F249E1C:
    ctx->pc = 0x7F249E1Cu;
    // 7F249E1C: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F249E20:
    ctx->pc = 0x7F249E20u;
    // 7F249E20: lfs     f4, 20872(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F249E20u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20872);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F249E24:
    ctx->pc = 0x7F249E24u;
    // 7F249E24: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F249E28:
    ctx->pc = 0x7F249E28u;
    // 7F249E28: lfs     f0, 564(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F249E28u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(564);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F249E2C:
    ctx->pc = 0x7F249E2Cu;
    // 7F249E2C: lwz     r8, 456(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(456);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F249E30:
    ctx->pc = 0x7F249E30u;
    // 7F249E30: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F249E34:
    ctx->pc = 0x7F249E34u;
    // 7F249E34: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F249E34u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F249E38:
    ctx->pc = 0x7F249E38u;
    // 7F249E38: addi    r4, r3, 20856
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20856);

label_7F249E3C:
    ctx->pc = 0x7F249E3Cu;
    // 7F249E3C: lwz     r9, 460(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(460);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F249E40:
    ctx->pc = 0x7F249E40u;
    // 7F249E40: lwz     r3, 180(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249E44:
    ctx->pc = 0x7F249E44u;
    // 7F249E44: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F249E44u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F249E48:
    ctx->pc = 0x7F249E48u;
    // 7F249E48: lwz     r6, 180(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(180);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F249E4C:
    ctx->pc = 0x7F249E4Cu;
    // 7F249E4C: rlwinm r7, r3, 2, 0, 29
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F249E50:
    ctx->pc = 0x7F249E50u;
    // 7F249E50: lfd     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F249E50u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F249E54:
    ctx->pc = 0x7F249E54u;
    // 7F249E54: rlwinm r6, r6, 2, 0, 29
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 2u) & 0xFFFFFFFCu;
    }

label_7F249E58:
    ctx->pc = 0x7F249E58u;
    // 7F249E58: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F249E5C:
    ctx->pc = 0x7F249E5Cu;
    // 7F249E5C: add   r7, r8, r7
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F249E60:
    ctx->pc = 0x7F249E60u;
    // 7F249E60: add   r6, r9, r6
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F249E64:
    ctx->pc = 0x7F249E64u;
    // 7F249E64: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F249E64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F249E68:
    ctx->pc = 0x7F249E68u;
    // 7F249E68: lwz     r29, 192(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(192);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F249E6C:
    ctx->pc = 0x7F249E6Cu;
    // 7F249E6C: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F249E6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F249E70:
    ctx->pc = 0x7F249E70u;
    // 7F249E70: lwz     r28, 192(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(192);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F249E74:
    ctx->pc = 0x7F249E74u;
    // 7F249E74: lwz     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F249E78:
    ctx->pc = 0x7F249E78u;
    // 7F249E78: lwz     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F249E7C:
    ctx->pc = 0x7F249E7Cu;
    // 7F249E7C: sth     r7, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F249E80:
    ctx->pc = 0x7F249E80u;
    // 7F249E80: lfs     f0, 20876(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F249E80u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20876);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F249E84:
    ctx->pc = 0x7F249E84u;
    // 7F249E84: sth     r6, 18(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F249E88:
    ctx->pc = 0x7F249E88u;
    // 7F249E88: lwz     r4, 572(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(572);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F249E8C:
    ctx->pc = 0x7F249E8Cu;
    // 7F249E8C: lfs     f1, 564(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F249E8Cu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(564);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F249E90:
    ctx->pc = 0x7F249E90u;
    // 7F249E90: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F249E94:
    ctx->pc = 0x7F249E94u;
    // 7F249E94: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F249E98:
    ctx->pc = 0x7F249E98u;
    // 7F249E98: lfd     f2, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F249E98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F249E9C:
    ctx->pc = 0x7F249E9Cu;
    // 7F249E9C: fsubs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F249E9Cu)) return;
    ppc_fsubs(ctx, 2, 2, 3);

label_7F249EA0:
    ctx->pc = 0x7F249EA0u;
    // 7F249EA0: fmadds f1, f4, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F249EA0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[2], ctx->fpr[1], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F249EA4:
    ctx->pc = 0x7F249EA4u;
    // 7F249EA4: stfs     f1, 564(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F249EA4u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(564);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F249EA8:
    ctx->pc = 0x7F249EA8u;
    // 7F249EA8: lfs     f1, 564(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F249EA8u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(564);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F249EAC:
    ctx->pc = 0x7F249EACu;
    // 7F249EAC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F249EACu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F249EB0:
    ctx->pc = 0x7F249EB0u;
    // 7F249EB0: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F249EB4:
    ctx->pc = 0x7F249EB4u;
    // 7F249EB4: bc    4, 2, 0x7F249EE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F249EE0;
        }
    }

label_7F249EB8:
    ctx->pc = 0x7F249EB8u;
    ctx->downcount -= 4;
    // 7F249EB8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F249EBC:
    ctx->pc = 0x7F249EBCu;
    // 7F249EBC: lfs     f0, 20848(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F249EBCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20848);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F249EC0:
    ctx->pc = 0x7F249EC0u;
    // 7F249EC0: stfs     f0, 564(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F249EC0u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(564);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F249EC4:
    ctx->pc = 0x7F249EC4u;
    // 7F249EC4: bl      0x800147F8
    {
            ctx->lr = 0x7F249EC8u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F249EC8:
    ctx->pc = 0x7F249EC8u;
    ctx->downcount -= 6;
    // 7F249EC8: rlwinm r4, r3, 1, 31, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
    }

label_7F249ECC:
    ctx->pc = 0x7F249ECCu;
    // 7F249ECC: rlwinm r0, r3, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000001u;
    }

label_7F249ED0:
    ctx->pc = 0x7F249ED0u;
    // 7F249ED0: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F249ED4:
    ctx->pc = 0x7F249ED4u;
    // 7F249ED4: subf   r3, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F249ED8:
    ctx->pc = 0x7F249ED8u;
    // 7F249ED8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F249EDC:
    ctx->pc = 0x7F249EDCu;
    // 7F249EDC: stw     r0, 572(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(572);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F249EE0:
    ctx->pc = 0x7F249EE0u;
    ctx->downcount -= 4;
    // 7F249EE0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F249EE4:
    ctx->pc = 0x7F249EE4u;
    // 7F249EE4: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F249EE8:
    ctx->pc = 0x7F249EE8u;
    // 7F249EE8: addi    r31, r3, 13880
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F249EEC:
    ctx->pc = 0x7F249EECu;
    // 7F249EEC: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F249EF0:
    ctx->downcount -= 12;
    // 7F249EF0: add   r30, r29, r26
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_7F249EF4:
    // 7F249EF4: li      r0, 128
    ctx->gpr[0] = (u32)(s32)(128);

label_7F249EF8:
    ctx->pc = 0x7F249EF8u;
    // 7F249EF8: stb     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F249EFC:
    // 7F249EFC: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F249F00:
    // 7F249F00: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_7F249F04:
    ctx->pc = 0x7F249F04u;
    // 7F249F04: stb     r3, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F249F08:
    ctx->pc = 0x7F249F08u;
    // 7F249F08: stb     r3, 2(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F249F0C:
    ctx->pc = 0x7F249F0Cu;
    // 7F249F0C: stb     r0, 3(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F249F10:
    ctx->pc = 0x7F249F10u;
    // 7F249F10: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249F14:
    ctx->pc = 0x7F249F14u;
    // 7F249F14: lha     r0, 298(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(298);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F249F18:
    // 7F249F18: cmpwi   r0, 11
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

label_7F249F1C:
    // 7F249F1C: bc    4, 2, 0x7F249F7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F249F7C;
        }
    }

label_7F249F20:
    ctx->downcount -= 5;
    // 7F249F20: li      r4, 131
    ctx->gpr[4] = (u32)(s32)(131);

label_7F249F24:
    // 7F249F24: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F249F28:
    // 7F249F28: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F249F2C:
    // 7F249F2C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F249F30:
    // 7F249F30: bl      0x7F012018
    {
            ctx->lr = 0x7F249F34u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F249F34:
    ctx->downcount -= 5;
    // 7F249F34: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F249F38:
    // 7F249F38: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F249F3C:
    // 7F249F3C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F249F40:
    // 7F249F40: or.   r0, r4, r0
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

label_7F249F44:
    // 7F249F44: bc    12, 2, 0x7F249F7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F249F7C;
        }
    }

label_7F249F48:
    ctx->downcount -= 6;
    // 7F249F48: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F249F4C:
    // 7F249F4C: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F249F50:
    ctx->pc = 0x7F249F50u;
    // 7F249F50: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249F54:
    ctx->pc = 0x7F249F54u;
    // 7F249F54: lbz     r0, 3906(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3906);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F249F58:
    // 7F249F58: extsb. r0, r0
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

label_7F249F5C:
    // 7F249F5C: bc    4, 2, 0x7F249F7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F249F7C;
        }
    }

label_7F249F60:
    ctx->downcount -= 7;
    // 7F249F60: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_7F249F64:
    // 7F249F64: li      r3, 64
    ctx->gpr[3] = (u32)(s32)(64);

label_7F249F68:
    ctx->pc = 0x7F249F68u;
    // 7F249F68: stb     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F249F6C:
    // 7F249F6C: li      r0, 100
    ctx->gpr[0] = (u32)(s32)(100);

label_7F249F70:
    ctx->pc = 0x7F249F70u;
    // 7F249F70: stb     r3, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F249F74:
    ctx->pc = 0x7F249F74u;
    // 7F249F74: stb     r3, 2(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F249F78:
    ctx->pc = 0x7F249F78u;
    // 7F249F78: stb     r0, 3(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F249F7C:
    ctx->downcount -= 4;
    // 7F249F7C: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F249F80:
    // 7F249F80: addi    r26, r26, 12
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(12);

label_7F249F84:
    // 7F249F84: cmpwi   r27, 2
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F249F88:
    // 7F249F88: bc    12, 0, 0x7F249EF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F249EF0u;
                return;
            }
            goto label_7F249EF0;
        }
    }

label_7F249F8C:
    ctx->pc = 0x7F249F8Cu;
    ctx->downcount -= 3;
    // 7F249F8C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F249F90:
    ctx->pc = 0x7F249F90u;
    // 7F249F90: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F249F94:
    ctx->pc = 0x7F249F94u;
    // 7F249F94: addi    r26, r3, 13880
    ctx->gpr[26] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F249F98:
    ctx->downcount -= 10;
    // 7F249F98: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F249F9C:
    // 7F249F9C: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_7F249FA0:
    ctx->pc = 0x7F249FA0u;
    // 7F249FA0: stb     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F249FA4:
    ctx->pc = 0x7F249FA4u;
    // 7F249FA4: stb     r0, 1(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F249FA8:
    ctx->pc = 0x7F249FA8u;
    // 7F249FA8: stb     r0, 2(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F249FAC:
    ctx->pc = 0x7F249FACu;
    // 7F249FAC: stb     r3, 3(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F249FB0:
    ctx->pc = 0x7F249FB0u;
    // 7F249FB0: lwz     r3, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249FB4:
    ctx->pc = 0x7F249FB4u;
    // 7F249FB4: lha     r0, 298(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(298);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F249FB8:
    // 7F249FB8: cmpwi   r0, 11
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

label_7F249FBC:
    // 7F249FBC: bc    4, 2, 0x7F24A01C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24A01C;
        }
    }

label_7F249FC0:
    ctx->downcount -= 5;
    // 7F249FC0: li      r4, 131
    ctx->gpr[4] = (u32)(s32)(131);

label_7F249FC4:
    // 7F249FC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F249FC8:
    // 7F249FC8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F249FCC:
    // 7F249FCC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F249FD0:
    // 7F249FD0: bl      0x7F012018
    {
            ctx->lr = 0x7F249FD4u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F249FD4:
    ctx->downcount -= 5;
    // 7F249FD4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F249FD8:
    // 7F249FD8: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F249FDC:
    // 7F249FDC: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F249FE0:
    // 7F249FE0: or.   r0, r4, r0
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

label_7F249FE4:
    // 7F249FE4: bc    12, 2, 0x7F24A01C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24A01C;
        }
    }

label_7F249FE8:
    ctx->downcount -= 6;
    // 7F249FE8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F249FEC:
    // 7F249FEC: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F249FF0:
    ctx->pc = 0x7F249FF0u;
    // 7F249FF0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F249FF4:
    ctx->pc = 0x7F249FF4u;
    // 7F249FF4: lbz     r0, 3906(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3906);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F249FF8:
    // 7F249FF8: extsb. r0, r0
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

label_7F249FFC:
    // 7F249FFC: bc    4, 2, 0x7F24A01C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24A01C;
        }
    }

label_7F24A000:
    ctx->downcount -= 7;
    // 7F24A000: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_7F24A004:
    // 7F24A004: li      r3, 64
    ctx->gpr[3] = (u32)(s32)(64);

label_7F24A008:
    ctx->pc = 0x7F24A008u;
    // 7F24A008: stb     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F24A00C:
    // 7F24A00C: li      r0, 100
    ctx->gpr[0] = (u32)(s32)(100);

label_7F24A010:
    ctx->pc = 0x7F24A010u;
    // 7F24A010: stb     r3, 1(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F24A014:
    ctx->pc = 0x7F24A014u;
    // 7F24A014: stb     r3, 2(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F24A018:
    ctx->pc = 0x7F24A018u;
    // 7F24A018: stb     r0, 3(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F24A01C:
    ctx->downcount -= 4;
    // 7F24A01C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F24A020:
    // 7F24A020: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

label_7F24A024:
    // 7F24A024: cmpwi   r30, 2
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

label_7F24A028:
    // 7F24A028: bc    12, 0, 0x7F249F98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F249F98u;
                return;
            }
            goto label_7F249F98;
        }
    }

label_7F24A02C:
    ctx->pc = 0x7F24A02Cu;
    ctx->downcount -= 16;
    // 7F24A02C: lmw     r26, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F24A030:
    ctx->pc = 0x7F24A030u;
    // 7F24A030: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A034:
    ctx->pc = 0x7F24A034u;
    // 7F24A034: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24A038:
    ctx->pc = 0x7F24A038u;
    // 7F24A038: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F24A03C:
    ctx->pc = 0x7F24A03Cu;
    // 7F24A03C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F24A040:
    ctx->pc = 0x7F24A040u;
    ctx->downcount -= 21;
    // 7F24A040: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24A044:
    ctx->pc = 0x7F24A044u;
    // 7F24A044: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24A048:
    ctx->pc = 0x7F24A048u;
    // 7F24A048: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F24A04C:
    ctx->pc = 0x7F24A04Cu;
    // 7F24A04C: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A050:
    ctx->pc = 0x7F24A050u;
    // 7F24A050: lfs     f1, 20848(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F24A050u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20848);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24A054:
    ctx->pc = 0x7F24A054u;
    // 7F24A054: stmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F24A058:
    ctx->pc = 0x7F24A058u;
    // 7F24A058: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24A05C:
    ctx->pc = 0x7F24A05Cu;
    // 7F24A05C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F24A060:
    ctx->pc = 0x7F24A060u;
    // 7F24A060: lfs     f0, 544(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24A060u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(544);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24A064:
    ctx->pc = 0x7F24A064u;
    // 7F24A064: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24A064u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F24A068:
    ctx->pc = 0x7F24A068u;
    // 7F24A068: bc    4, 2, 0x7F24A090
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24A090;
        }
    }

label_7F24A06C:
    ctx->pc = 0x7F24A06Cu;
    ctx->downcount -= 9;
    // 7F24A06C: lwz     r3, 456(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(456);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A070:
    ctx->pc = 0x7F24A070u;
    // 7F24A070: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A074:
    ctx->pc = 0x7F24A074u;
    // 7F24A074: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F24A078:
    ctx->pc = 0x7F24A078u;
    // 7F24A078: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A07C:
    ctx->pc = 0x7F24A07Cu;
    // 7F24A07C: lwz     r3, 460(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(460);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A080:
    ctx->pc = 0x7F24A080u;
    // 7F24A080: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A084:
    ctx->pc = 0x7F24A084u;
    // 7F24A084: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F24A088:
    ctx->pc = 0x7F24A088u;
    // 7F24A088: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A08C:
    ctx->pc = 0x7F24A08Cu;
    // 7F24A08C: b       0x7F24A1DC
    {
            goto label_7F24A1DC;
    }

label_7F24A090:
    ctx->pc = 0x7F24A090u;
    ctx->downcount -= 3;
    // 7F24A090: addi    r3, r30, 352
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(352);

label_7F24A094:
    ctx->pc = 0x7F24A094u;
    // 7F24A094: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F24A098:
    ctx->pc = 0x7F24A098u;
    // 7F24A098: bl      0x800261D8
    {
            ctx->lr = 0x7F24A09Cu;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F24A09C:
    ctx->pc = 0x7F24A09Cu;
    ctx->downcount -= 2;
    // 7F24A09C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F24A0A0:
    ctx->pc = 0x7F24A0A0u;
    // 7F24A0A0: bl      0x7F3CC594
    {
            ctx->lr = 0x7F24A0A4u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F24A0A4:
    ctx->pc = 0x7F24A0A4u;
    ctx->downcount -= 4;
    // 7F24A0A4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24A0A8:
    ctx->pc = 0x7F24A0A8u;
    // 7F24A0A8: lfs     f0, 20880(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24A0A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20880);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24A0AC:
    ctx->pc = 0x7F24A0ACu;
    // 7F24A0AC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24A0ACu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F24A0B0:
    ctx->pc = 0x7F24A0B0u;
    // 7F24A0B0: bc    4, 1, 0x7F24A0E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24A0E4;
        }
    }

label_7F24A0B4:
    ctx->pc = 0x7F24A0B4u;
    ctx->downcount -= 2;
    // 7F24A0B4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F24A0B8:
    ctx->pc = 0x7F24A0B8u;
    // 7F24A0B8: bl      0x7F3CC594
    {
            ctx->lr = 0x7F24A0BCu;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F24A0BC:
    ctx->pc = 0x7F24A0BCu;
    ctx->downcount -= 10;
    // 7F24A0BC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24A0C0:
    ctx->pc = 0x7F24A0C0u;
    // 7F24A0C0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F24A0C4:
    ctx->pc = 0x7F24A0C4u;
    // 7F24A0C4: addi    r5, r3, 20880
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(20880);

label_7F24A0C8:
    ctx->pc = 0x7F24A0C8u;
    // 7F24A0C8: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F24A0C8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24A0CC:
    ctx->pc = 0x7F24A0CCu;
    // 7F24A0CC: addi    r5, r4, 20848
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(20848);

label_7F24A0D0:
    ctx->pc = 0x7F24A0D0u;
    // 7F24A0D0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F24A0D4:
    ctx->pc = 0x7F24A0D4u;
    // 7F24A0D4: fsubs   f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24A0D4u)) return;
    ppc_fsubs(ctx, 2, 1, 0);

label_7F24A0D8:
    ctx->pc = 0x7F24A0D8u;
    // 7F24A0D8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F24A0D8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24A0DC:
    ctx->pc = 0x7F24A0DCu;
    // 7F24A0DC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24A0E0:
    ctx->pc = 0x7F24A0E0u;
    // 7F24A0E0: bl      0x7F3CC6BC
    {
            ctx->lr = 0x7F24A0E4u;
            ctx->pc = 0x7F3CC6BCu;
            return;
    }

label_7F24A0E4:
    ctx->pc = 0x7F24A0E4u;
    ctx->downcount -= 4;
    // 7F24A0E4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24A0E8:
    ctx->pc = 0x7F24A0E8u;
    // 7F24A0E8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F24A0EC:
    ctx->pc = 0x7F24A0ECu;
    // 7F24A0EC: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F24A0F0:
    ctx->pc = 0x7F24A0F0u;
    // 7F24A0F0: bl      0x800261B4
    {
            ctx->lr = 0x7F24A0F4u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F24A0F4:
    ctx->pc = 0x7F24A0F4u;
    ctx->downcount -= 74;
    // 7F24A0F4: lwz     r8, 456(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(456);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F24A0F8:
    ctx->pc = 0x7F24A0F8u;
    // 7F24A0F8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24A0FC:
    ctx->pc = 0x7F24A0FCu;
    // 7F24A0FC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F24A100:
    ctx->pc = 0x7F24A100u;
    // 7F24A100: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24A104:
    ctx->pc = 0x7F24A104u;
    // 7F24A104: lwz     r5, 180(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(180);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24A108:
    ctx->pc = 0x7F24A108u;
    // 7F24A108: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F24A10C:
    ctx->pc = 0x7F24A10Cu;
    // 7F24A10C: lfs     f0, 20888(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24A10Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20888);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24A110:
    ctx->pc = 0x7F24A110u;
    // 7F24A110: rlwinm r7, r5, 2, 0, 29
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_7F24A114:
    ctx->pc = 0x7F24A114u;
    // 7F24A114: lwz     r5, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24A118:
    ctx->pc = 0x7F24A118u;
    // 7F24A118: add   r7, r8, r7
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F24A11C:
    ctx->pc = 0x7F24A11Cu;
    // 7F24A11C: lfs     f2, 20884(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F24A11Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20884);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F24A120:
    ctx->pc = 0x7F24A120u;
    // 7F24A120: lwz     r7, 184(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(184);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F24A124:
    ctx->pc = 0x7F24A124u;
    // 7F24A124: stw     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F24A128:
    ctx->pc = 0x7F24A128u;
    // 7F24A128: stw     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F24A12C:
    ctx->pc = 0x7F24A12Cu;
    // 7F24A12C: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24A130:
    ctx->pc = 0x7F24A130u;
    // 7F24A130: lwz     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A134:
    ctx->pc = 0x7F24A134u;
    // 7F24A134: stw     r4, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F24A138:
    ctx->pc = 0x7F24A138u;
    // 7F24A138: stw     r3, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F24A13C:
    ctx->pc = 0x7F24A13Cu;
    // 7F24A13C: lwz     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24A140:
    ctx->pc = 0x7F24A140u;
    // 7F24A140: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A144:
    ctx->pc = 0x7F24A144u;
    // 7F24A144: stw     r4, 16(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F24A148:
    ctx->pc = 0x7F24A148u;
    // 7F24A148: stw     r3, 20(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F24A14C:
    ctx->pc = 0x7F24A14Cu;
    // 7F24A14C: lwz     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24A150:
    ctx->pc = 0x7F24A150u;
    // 7F24A150: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A154:
    ctx->pc = 0x7F24A154u;
    // 7F24A154: stw     r4, 24(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F24A158:
    ctx->pc = 0x7F24A158u;
    // 7F24A158: stw     r3, 28(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F24A15C:
    ctx->pc = 0x7F24A15Cu;
    // 7F24A15C: lwz     r6, 460(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(460);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24A160:
    ctx->pc = 0x7F24A160u;
    // 7F24A160: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24A164:
    ctx->pc = 0x7F24A164u;
    // 7F24A164: lwz     r5, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24A168:
    ctx->pc = 0x7F24A168u;
    // 7F24A168: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A16C:
    ctx->pc = 0x7F24A16Cu;
    // 7F24A16C: rlwinm r5, r5, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_7F24A170:
    ctx->pc = 0x7F24A170u;
    // 7F24A170: add   r5, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F24A174:
    ctx->pc = 0x7F24A174u;
    // 7F24A174: lwz     r6, 184(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(184);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24A178:
    ctx->pc = 0x7F24A178u;
    // 7F24A178: lwz     r5, 192(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(192);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24A17C:
    ctx->pc = 0x7F24A17Cu;
    // 7F24A17C: stw     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F24A180:
    ctx->pc = 0x7F24A180u;
    // 7F24A180: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F24A184:
    ctx->pc = 0x7F24A184u;
    // 7F24A184: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24A188:
    ctx->pc = 0x7F24A188u;
    // 7F24A188: lwz     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A18C:
    ctx->pc = 0x7F24A18Cu;
    // 7F24A18C: stw     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F24A190:
    ctx->pc = 0x7F24A190u;
    // 7F24A190: stw     r3, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F24A194:
    ctx->pc = 0x7F24A194u;
    // 7F24A194: lwz     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24A198:
    ctx->pc = 0x7F24A198u;
    // 7F24A198: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A19C:
    ctx->pc = 0x7F24A19Cu;
    // 7F24A19C: stw     r4, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F24A1A0:
    ctx->pc = 0x7F24A1A0u;
    // 7F24A1A0: stw     r3, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F24A1A4:
    ctx->pc = 0x7F24A1A4u;
    // 7F24A1A4: lwz     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24A1A8:
    ctx->pc = 0x7F24A1A8u;
    // 7F24A1A8: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A1AC:
    ctx->pc = 0x7F24A1ACu;
    // 7F24A1AC: stw     r4, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F24A1B0:
    ctx->pc = 0x7F24A1B0u;
    // 7F24A1B0: stw     r3, 28(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F24A1B4:
    ctx->pc = 0x7F24A1B4u;
    // 7F24A1B4: sth     r0, 10(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F24A1B8:
    ctx->pc = 0x7F24A1B8u;
    // 7F24A1B8: sth     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F24A1BC:
    ctx->pc = 0x7F24A1BCu;
    // 7F24A1BC: lfs     f1, 544(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F24A1BCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(544);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24A1C0:
    ctx->pc = 0x7F24A1C0u;
    // 7F24A1C0: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24A1C0u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F24A1C4:
    ctx->pc = 0x7F24A1C4u;
    // 7F24A1C4: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24A1C4u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F24A1C8:
    ctx->pc = 0x7F24A1C8u;
    // 7F24A1C8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24A1C8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F24A1CC:
    ctx->pc = 0x7F24A1CCu;
    // 7F24A1CC: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24A1CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F24A1D0:
    ctx->pc = 0x7F24A1D0u;
    // 7F24A1D0: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A1D4:
    ctx->pc = 0x7F24A1D4u;
    // 7F24A1D4: sth     r0, 26(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F24A1D8:
    ctx->pc = 0x7F24A1D8u;
    // 7F24A1D8: sth     r0, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F24A1DC:
    ctx->pc = 0x7F24A1DCu;
    ctx->downcount -= 16;
    // 7F24A1DC: lmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F24A1E0:
    ctx->pc = 0x7F24A1E0u;
    // 7F24A1E0: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A1E4:
    ctx->pc = 0x7F24A1E4u;
    // 7F24A1E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24A1E8:
    ctx->pc = 0x7F24A1E8u;
    // 7F24A1E8: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F24A1EC:
    ctx->pc = 0x7F24A1ECu;
    // 7F24A1EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F24A1F0:
    ctx->pc = 0x7F24A1F0u;
    ctx->downcount -= 19;
    // 7F24A1F0: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24A1F4:
    ctx->pc = 0x7F24A1F4u;
    // 7F24A1F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24A1F8:
    ctx->pc = 0x7F24A1F8u;
    // 7F24A1F8: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A1FC:
    ctx->pc = 0x7F24A1FCu;
    // 7F24A1FC: stmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F24A200:
    ctx->pc = 0x7F24A200u;
    // 7F24A200: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24A204:
    ctx->pc = 0x7F24A204u;
    // 7F24A204: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F24A208:
    ctx->pc = 0x7F24A208u;
    // 7F24A208: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F24A20C:
    ctx->pc = 0x7F24A20Cu;
    // 7F24A20C: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F24A210:
    ctx->pc = 0x7F24A210u;
    // 7F24A210: bl      0x7F0151A0
    {
            ctx->lr = 0x7F24A214u;
            ctx->pc = 0x7F0151A0u;
            return;
    }

label_7F24A214:
    ctx->pc = 0x7F24A214u;
    ctx->downcount -= 9;
    // 7F24A214: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F24A218:
    ctx->pc = 0x7F24A218u;
    // 7F24A218: addi    r4, r29, 128
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(128);

label_7F24A21C:
    ctx->pc = 0x7F24A21Cu;
    // 7F24A21C: addi    r3, r3, -27956
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27956);

label_7F24A220:
    ctx->pc = 0x7F24A220u;
    // 7F24A220: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F24A224:
    ctx->pc = 0x7F24A224u;
    // 7F24A224: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A228:
    ctx->pc = 0x7F24A228u;
    // 7F24A228: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F24A22C:
    ctx->pc = 0x7F24A22Cu;
    // 7F24A22C: li      r7, 68
    ctx->gpr[7] = (u32)(s32)(68);

label_7F24A230:
    ctx->pc = 0x7F24A230u;
    // 7F24A230: li      r8, 68
    ctx->gpr[8] = (u32)(s32)(68);

label_7F24A234:
    ctx->pc = 0x7F24A234u;
    // 7F24A234: bl      0x7F10B744
    {
            ctx->lr = 0x7F24A238u;
            ctx->pc = 0x7F10B744u;
            return;
    }

label_7F24A238:
    ctx->pc = 0x7F24A238u;
    ctx->downcount -= 2;
    // 7F24A238: cmpwi   r3, 0
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

label_7F24A23C:
    ctx->pc = 0x7F24A23Cu;
    // 7F24A23C: bc    12, 2, 0x7F24A250
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24A250;
        }
    }

label_7F24A240:
    ctx->pc = 0x7F24A240u;
    ctx->downcount -= 3;
    // 7F24A240: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F24A244:
    ctx->pc = 0x7F24A244u;
    // 7F24A244: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F24A248:
    ctx->pc = 0x7F24A248u;
    // 7F24A248: bl      0x7F01521C
    {
            ctx->lr = 0x7F24A24Cu;
            ctx->pc = 0x7F01521Cu;
            return;
    }

label_7F24A24C:
    ctx->pc = 0x7F24A24Cu;
    ctx->downcount -= 1;
    // 7F24A24C: b       0x7F24A2F8
    {
            goto label_7F24A2F8;
    }

label_7F24A250:
    ctx->pc = 0x7F24A250u;
    ctx->downcount -= 4;
    // 7F24A250: addi    r3, r29, 128
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(128);

label_7F24A254:
    ctx->pc = 0x7F24A254u;
    // 7F24A254: addi    r4, r29, 80
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(80);

label_7F24A258:
    ctx->pc = 0x7F24A258u;
    // 7F24A258: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F24A25C:
    ctx->pc = 0x7F24A25Cu;
    // 7F24A25C: bl      0x800261D8
    {
            ctx->lr = 0x7F24A260u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F24A260:
    ctx->pc = 0x7F24A260u;
    ctx->downcount -= 2;
    // 7F24A260: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F24A264:
    ctx->pc = 0x7F24A264u;
    // 7F24A264: bl      0x7F3CC594
    {
            ctx->lr = 0x7F24A268u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F24A268:
    ctx->pc = 0x7F24A268u;
    ctx->downcount -= 14;
    // 7F24A268: stfs     f1, 544(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F24A268u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(544);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F24A26C:
    ctx->pc = 0x7F24A26Cu;
    // 7F24A26C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24A270:
    ctx->pc = 0x7F24A270u;
    // 7F24A270: lfs     f0, 20864(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24A270u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20864);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24A274:
    ctx->pc = 0x7F24A274u;
    // 7F24A274: lwz     r4, 128(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24A278:
    ctx->pc = 0x7F24A278u;
    // 7F24A278: lwz     r0, 132(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A27C:
    ctx->pc = 0x7F24A27Cu;
    // 7F24A27C: stw     r4, 352(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(352);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F24A280:
    ctx->pc = 0x7F24A280u;
    // 7F24A280: stw     r0, 356(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A284:
    ctx->pc = 0x7F24A284u;
    // 7F24A284: lwz     r3, 136(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(136);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A288:
    ctx->pc = 0x7F24A288u;
    // 7F24A288: lwz     r0, 140(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A28C:
    ctx->pc = 0x7F24A28Cu;
    // 7F24A28C: stw     r3, 360(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(360);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F24A290:
    ctx->pc = 0x7F24A290u;
    // 7F24A290: stw     r0, 364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A294:
    ctx->pc = 0x7F24A294u;
    // 7F24A294: lfs     f1, 544(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F24A294u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(544);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24A298:
    ctx->pc = 0x7F24A298u;
    // 7F24A298: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24A298u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F24A29C:
    ctx->pc = 0x7F24A29Cu;
    // 7F24A29C: bc    4, 0, 0x7F24A2C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24A2C4;
        }
    }

label_7F24A2A0:
    ctx->pc = 0x7F24A2A0u;
    ctx->downcount -= 9;
    // 7F24A2A0: lwz     r3, 456(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(456);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A2A4:
    ctx->pc = 0x7F24A2A4u;
    // 7F24A2A4: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A2A8:
    ctx->pc = 0x7F24A2A8u;
    // 7F24A2A8: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F24A2AC:
    ctx->pc = 0x7F24A2ACu;
    // 7F24A2AC: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A2B0:
    ctx->pc = 0x7F24A2B0u;
    // 7F24A2B0: lwz     r3, 460(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(460);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A2B4:
    ctx->pc = 0x7F24A2B4u;
    // 7F24A2B4: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A2B8:
    ctx->pc = 0x7F24A2B8u;
    // 7F24A2B8: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F24A2BC:
    ctx->pc = 0x7F24A2BCu;
    // 7F24A2BC: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A2C0:
    ctx->pc = 0x7F24A2C0u;
    // 7F24A2C0: b       0x7F24A2F8
    {
            goto label_7F24A2F8;
    }

label_7F24A2C4:
    ctx->pc = 0x7F24A2C4u;
    ctx->downcount -= 8;
    // 7F24A2C4: lwz     r6, 460(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(460);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24A2C8:
    ctx->pc = 0x7F24A2C8u;
    // 7F24A2C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24A2CC:
    ctx->pc = 0x7F24A2CCu;
    // 7F24A2CC: addi    r4, r31, 432
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(432);

label_7F24A2D0:
    ctx->pc = 0x7F24A2D0u;
    // 7F24A2D0: addi    r5, r29, 96
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(96);

label_7F24A2D4:
    ctx->pc = 0x7F24A2D4u;
    // 7F24A2D4: lwz     r0, 164(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A2D8:
    ctx->pc = 0x7F24A2D8u;
    // 7F24A2D8: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F24A2DC:
    ctx->pc = 0x7F24A2DCu;
    // 7F24A2DC: stw     r0, 164(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A2E0:
    ctx->pc = 0x7F24A2E0u;
    // 7F24A2E0: bl      0x7F24A040
    {
            ctx->lr = 0x7F24A2E4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24A040u;
                return;
            }
            goto label_7F24A040;
    }

label_7F24A2E4:
    ctx->pc = 0x7F24A2E4u;
    ctx->downcount -= 5;
    // 7F24A2E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F24A2E8:
    ctx->pc = 0x7F24A2E8u;
    // 7F24A2E8: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_7F24A2EC:
    ctx->pc = 0x7F24A2ECu;
    // 7F24A2EC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F24A2F0:
    ctx->pc = 0x7F24A2F0u;
    // 7F24A2F0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24A2F4:
    ctx->pc = 0x7F24A2F4u;
    // 7F24A2F4: bl      0x7F07AA5C
    {
            ctx->lr = 0x7F24A2F8u;
            ctx->pc = 0x7F07AA5Cu;
            return;
    }

label_7F24A2F8:
    ctx->pc = 0x7F24A2F8u;
    ctx->downcount -= 16;
    // 7F24A2F8: lmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F24A2FC:
    ctx->pc = 0x7F24A2FCu;
    // 7F24A2FC: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A300:
    ctx->pc = 0x7F24A300u;
    // 7F24A300: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24A304:
    ctx->pc = 0x7F24A304u;
    // 7F24A304: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F24A308:
    ctx->pc = 0x7F24A308u;
    // 7F24A308: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F24A30C:
    ctx->pc = 0x7F24A30Cu;
    ctx->downcount -= 22;
    // 7F24A30C: stwu     r1, -352(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-352);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24A310:
    ctx->pc = 0x7F24A310u;
    // 7F24A310: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24A314:
    ctx->pc = 0x7F24A314u;
    // 7F24A314: stw     r0, 356(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A318:
    ctx->pc = 0x7F24A318u;
    // 7F24A318: stfd     f31, 336(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24A318u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(336);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F24A31C:
    ctx->pc = 0x7F24A31Cu;
    // 7F24A31C: psq_st   f31, 344(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F24A31Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(344);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F24A31Cu);
        if (ctx->exception) return;
    }

label_7F24A320:
    ctx->pc = 0x7F24A320u;
    // 7F24A320: stmw     r23, 300(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(300);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F24A324:
    ctx->pc = 0x7F24A324u;
    // 7F24A324: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24A328:
    ctx->pc = 0x7F24A328u;
    // 7F24A328: lwz     r29, 584(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(584);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F24A32C:
    ctx->pc = 0x7F24A32Cu;
    // 7F24A32C: lwz     r28, 608(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(608);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F24A330:
    ctx->pc = 0x7F24A330u;
    // 7F24A330: cmpwi   r29, 2
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

label_7F24A334:
    ctx->pc = 0x7F24A334u;
    // 7F24A334: lwz     r30, 604(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(604);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F24A338:
    ctx->pc = 0x7F24A338u;
    // 7F24A338: bc    4, 2, 0x7F24A384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24A384;
        }
    }

label_7F24A33C:
    ctx->pc = 0x7F24A33Cu;
    ctx->downcount -= 1;
    // 7F24A33C: bl      0x7F2BB4C4
    {
            ctx->lr = 0x7F24A340u;
            ctx->pc = 0x7F2BB4C4u;
            return;
    }

label_7F24A340:
    ctx->pc = 0x7F24A340u;
    ctx->downcount -= 2;
    // 7F24A340: cmpwi   r3, 29
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(29);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24A344:
    ctx->pc = 0x7F24A344u;
    // 7F24A344: bc    4, 2, 0x7F24A384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24A384;
        }
    }

label_7F24A348:
    ctx->pc = 0x7F24A348u;
    ctx->downcount -= 3;
    // 7F24A348: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F24A34C:
    ctx->pc = 0x7F24A34Cu;
    // 7F24A34C: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_7F24A350:
    ctx->pc = 0x7F24A350u;
    // 7F24A350: bl      0x7F249AB0
    {
            ctx->lr = 0x7F24A354u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F249AB0u;
                return;
            }
            goto label_7F249AB0;
    }

label_7F24A354:
    ctx->pc = 0x7F24A354u;
    ctx->downcount -= 2;
    // 7F24A354: cmpwi   r3, 0
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

label_7F24A358:
    ctx->pc = 0x7F24A358u;
    // 7F24A358: bc    12, 0, 0x7F24A420
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24A420;
        }
    }

label_7F24A35C:
    ctx->pc = 0x7F24A35Cu;
    ctx->downcount -= 3;
    // 7F24A35C: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_7F24A360:
    ctx->pc = 0x7F24A360u;
    // 7F24A360: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F24A364:
    ctx->pc = 0x7F24A364u;
    // 7F24A364: bl      0x7F01ED0C
    {
            ctx->lr = 0x7F24A368u;
            ctx->pc = 0x7F01ED0Cu;
            return;
    }

label_7F24A368:
    ctx->pc = 0x7F24A368u;
    ctx->downcount -= 7;
    // 7F24A368: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F24A36C:
    ctx->pc = 0x7F24A36Cu;
    // 7F24A36C: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F24A370:
    ctx->pc = 0x7F24A370u;
    // 7F24A370: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A374:
    ctx->pc = 0x7F24A374u;
    // 7F24A374: lha     r0, 312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(312);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F24A378:
    ctx->pc = 0x7F24A378u;
    // 7F24A378: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_7F24A37C:
    ctx->pc = 0x7F24A37Cu;
    // 7F24A37C: sth     r0, 312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(312);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F24A380:
    ctx->pc = 0x7F24A380u;
    // 7F24A380: b       0x7F24A420
    {
            goto label_7F24A420;
    }

label_7F24A384:
    ctx->pc = 0x7F24A384u;
    ctx->downcount -= 2;
    // 7F24A384: cmpwi   r29, 5
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

label_7F24A388:
    ctx->pc = 0x7F24A388u;
    // 7F24A388: bc    4, 2, 0x7F24A3D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24A3D4;
        }
    }

label_7F24A38C:
    ctx->pc = 0x7F24A38Cu;
    ctx->downcount -= 1;
    // 7F24A38C: bl      0x7F2BB4C4
    {
            ctx->lr = 0x7F24A390u;
            ctx->pc = 0x7F2BB4C4u;
            return;
    }

label_7F24A390:
    ctx->pc = 0x7F24A390u;
    ctx->downcount -= 2;
    // 7F24A390: cmpwi   r3, 30
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(30);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24A394:
    ctx->pc = 0x7F24A394u;
    // 7F24A394: bc    4, 2, 0x7F24A3D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24A3D4;
        }
    }

label_7F24A398:
    ctx->pc = 0x7F24A398u;
    ctx->downcount -= 3;
    // 7F24A398: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F24A39C:
    ctx->pc = 0x7F24A39Cu;
    // 7F24A39C: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F24A3A0:
    ctx->pc = 0x7F24A3A0u;
    // 7F24A3A0: bl      0x7F249AB0
    {
            ctx->lr = 0x7F24A3A4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F249AB0u;
                return;
            }
            goto label_7F249AB0;
    }

label_7F24A3A4:
    ctx->pc = 0x7F24A3A4u;
    ctx->downcount -= 2;
    // 7F24A3A4: cmpwi   r3, 0
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

label_7F24A3A8:
    ctx->pc = 0x7F24A3A8u;
    // 7F24A3A8: bc    12, 0, 0x7F24A420
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24A420;
        }
    }

label_7F24A3AC:
    ctx->pc = 0x7F24A3ACu;
    ctx->downcount -= 3;
    // 7F24A3AC: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_7F24A3B0:
    ctx->pc = 0x7F24A3B0u;
    // 7F24A3B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F24A3B4:
    ctx->pc = 0x7F24A3B4u;
    // 7F24A3B4: bl      0x7F01ED0C
    {
            ctx->lr = 0x7F24A3B8u;
            ctx->pc = 0x7F01ED0Cu;
            return;
    }

label_7F24A3B8:
    ctx->pc = 0x7F24A3B8u;
    ctx->downcount -= 7;
    // 7F24A3B8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F24A3BC:
    ctx->pc = 0x7F24A3BCu;
    // 7F24A3BC: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F24A3C0:
    ctx->pc = 0x7F24A3C0u;
    // 7F24A3C0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A3C4:
    ctx->pc = 0x7F24A3C4u;
    // 7F24A3C4: lha     r0, 312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(312);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F24A3C8:
    ctx->pc = 0x7F24A3C8u;
    // 7F24A3C8: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_7F24A3CC:
    ctx->pc = 0x7F24A3CCu;
    // 7F24A3CC: sth     r0, 312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(312);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F24A3D0:
    ctx->pc = 0x7F24A3D0u;
    // 7F24A3D0: b       0x7F24A420
    {
            goto label_7F24A420;
    }

label_7F24A3D4:
    ctx->pc = 0x7F24A3D4u;
    ctx->downcount -= 2;
    // 7F24A3D4: cmpwi   r29, 1
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24A3D8:
    ctx->pc = 0x7F24A3D8u;
    // 7F24A3D8: bc    4, 2, 0x7F24A420
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24A420;
        }
    }

label_7F24A3DC:
    ctx->pc = 0x7F24A3DCu;
    ctx->downcount -= 1;
    // 7F24A3DC: bl      0x7F2BB4C4
    {
            ctx->lr = 0x7F24A3E0u;
            ctx->pc = 0x7F2BB4C4u;
            return;
    }

label_7F24A3E0:
    ctx->pc = 0x7F24A3E0u;
    ctx->downcount -= 2;
    // 7F24A3E0: cmpwi   r3, 35
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(35);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24A3E4:
    ctx->pc = 0x7F24A3E4u;
    // 7F24A3E4: bc    4, 2, 0x7F24A420
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24A420;
        }
    }

label_7F24A3E8:
    ctx->pc = 0x7F24A3E8u;
    ctx->downcount -= 3;
    // 7F24A3E8: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F24A3EC:
    ctx->pc = 0x7F24A3ECu;
    // 7F24A3EC: li      r4, 9
    ctx->gpr[4] = (u32)(s32)(9);

label_7F24A3F0:
    ctx->pc = 0x7F24A3F0u;
    // 7F24A3F0: bl      0x7F249AB0
    {
            ctx->lr = 0x7F24A3F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F249AB0u;
                return;
            }
            goto label_7F249AB0;
    }

label_7F24A3F4:
    ctx->pc = 0x7F24A3F4u;
    ctx->downcount -= 2;
    // 7F24A3F4: cmpwi   r3, 0
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

label_7F24A3F8:
    ctx->pc = 0x7F24A3F8u;
    // 7F24A3F8: bc    12, 0, 0x7F24A420
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24A420;
        }
    }

label_7F24A3FC:
    ctx->pc = 0x7F24A3FCu;
    ctx->downcount -= 3;
    // 7F24A3FC: li      r3, 35
    ctx->gpr[3] = (u32)(s32)(35);

label_7F24A400:
    ctx->pc = 0x7F24A400u;
    // 7F24A400: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F24A404:
    ctx->pc = 0x7F24A404u;
    // 7F24A404: bl      0x7F01ED0C
    {
            ctx->lr = 0x7F24A408u;
            ctx->pc = 0x7F01ED0Cu;
            return;
    }

label_7F24A408:
    ctx->pc = 0x7F24A408u;
    ctx->downcount -= 6;
    // 7F24A408: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F24A40C:
    ctx->pc = 0x7F24A40Cu;
    // 7F24A40C: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F24A410:
    ctx->pc = 0x7F24A410u;
    // 7F24A410: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A414:
    ctx->pc = 0x7F24A414u;
    // 7F24A414: lha     r0, 312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(312);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F24A418:
    ctx->pc = 0x7F24A418u;
    // 7F24A418: ori     r0, r0, 0x0080
    ctx->gpr[0] = ctx->gpr[0] | 0x0080u;

label_7F24A41C:
    ctx->pc = 0x7F24A41Cu;
    // 7F24A41C: sth     r0, 312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(312);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F24A420:
    ctx->pc = 0x7F24A420u;
    ctx->downcount -= 5;
    // 7F24A420: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F24A424:
    ctx->pc = 0x7F24A424u;
    // 7F24A424: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_7F24A428:
    ctx->pc = 0x7F24A428u;
    // 7F24A428: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F24A42C:
    ctx->pc = 0x7F24A42Cu;
    // 7F24A42C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24A430:
    ctx->pc = 0x7F24A430u;
    // 7F24A430: bl      0x7F042E08
    {
            ctx->lr = 0x7F24A434u;
            ctx->pc = 0x7F042E08u;
            return;
    }

label_7F24A434:
    ctx->pc = 0x7F24A434u;
    ctx->downcount -= 2;
    // 7F24A434: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F24A438:
    ctx->pc = 0x7F24A438u;
    // 7F24A438: bl      0x7F24B344
    {
            ctx->lr = 0x7F24A43Cu;
            goto label_7F24B344;
    }

label_7F24A43C:
    ctx->pc = 0x7F24A43Cu;
    ctx->downcount -= 2;
    // 7F24A43C: addi    r3, r1, 168
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(168);

label_7F24A440:
    ctx->pc = 0x7F24A440u;
    // 7F24A440: bl      0x80025A08
    {
            ctx->lr = 0x7F24A444u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F24A444:
    ctx->pc = 0x7F24A444u;
    ctx->downcount -= 7;
    // 7F24A444: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F24A448:
    ctx->pc = 0x7F24A448u;
    // 7F24A448: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F24A44C:
    ctx->pc = 0x7F24A44Cu;
    // 7F24A44C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A450:
    ctx->pc = 0x7F24A450u;
    // 7F24A450: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A454:
    ctx->pc = 0x7F24A454u;
    // 7F24A454: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A458:
    ctx->pc = 0x7F24A458u;
    // 7F24A458: and.   r0, r0, r28
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[28];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F24A45C:
    ctx->pc = 0x7F24A45Cu;
    // 7F24A45C: bc    12, 2, 0x7F24A514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24A514;
        }
    }

label_7F24A460:
    ctx->pc = 0x7F24A460u;
    ctx->downcount -= 6;
    // 7F24A460: lwz     r4, 452(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(452);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24A464:
    ctx->pc = 0x7F24A464u;
    // 7F24A464: addi    r3, r24, 92
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(92);

label_7F24A468:
    ctx->pc = 0x7F24A468u;
    // 7F24A468: lwz     r5, 548(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(548);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24A46C:
    ctx->pc = 0x7F24A46Cu;
    // 7F24A46C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24A470:
    ctx->pc = 0x7F24A470u;
    // 7F24A470: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24A474:
    ctx->pc = 0x7F24A474u;
    // 7F24A474: bl      0x7F042B74
    {
            ctx->lr = 0x7F24A478u;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F24A478:
    ctx->pc = 0x7F24A478u;
    ctx->downcount -= 14;
    // 7F24A478: lwz     r3, 48(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A47C:
    ctx->pc = 0x7F24A47Cu;
    // 7F24A47C: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F24A480:
    ctx->pc = 0x7F24A480u;
    // 7F24A480: lwz     r4, 92(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24A484:
    ctx->pc = 0x7F24A484u;
    // 7F24A484: slw   r5, r0, r30
    {
        u32 sh = ctx->gpr[30] & 0x3Fu;
        ctx->gpr[5] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_7F24A488:
    ctx->pc = 0x7F24A488u;
    // 7F24A488: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A48C:
    ctx->pc = 0x7F24A48Cu;
    // 7F24A48C: lwz     r25, 68(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(68);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F24A490:
    ctx->pc = 0x7F24A490u;
    // 7F24A490: or   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[5];
    }

label_7F24A494:
    ctx->pc = 0x7F24A494u;
    // 7F24A494: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A498:
    ctx->pc = 0x7F24A498u;
    // 7F24A498: lwz     r3, 452(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A49C:
    ctx->pc = 0x7F24A49Cu;
    // 7F24A49C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A4A0:
    ctx->pc = 0x7F24A4A0u;
    // 7F24A4A0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A4A4:
    ctx->pc = 0x7F24A4A4u;
    // 7F24A4A4: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A4A8:
    ctx->pc = 0x7F24A4A8u;
    // 7F24A4A8: and.   r0, r0, r28
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[28];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F24A4AC:
    ctx->pc = 0x7F24A4ACu;
    // 7F24A4AC: bc    12, 2, 0x7F24A4C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24A4C4;
        }
    }

label_7F24A4B0:
    ctx->pc = 0x7F24A4B0u;
    ctx->downcount -= 5;
    // 7F24A4B0: lwz     r3, 92(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A4B4:
    ctx->pc = 0x7F24A4B4u;
    // 7F24A4B4: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A4B8:
    ctx->pc = 0x7F24A4B8u;
    // 7F24A4B8: or   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[5];
    }

label_7F24A4BC:
    ctx->pc = 0x7F24A4BCu;
    // 7F24A4BC: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A4C0:
    ctx->pc = 0x7F24A4C0u;
    // 7F24A4C0: b       0x7F24A4D4
    {
            goto label_7F24A4D4;
    }

label_7F24A4C4:
    ctx->pc = 0x7F24A4C4u;
    ctx->downcount -= 4;
    // 7F24A4C4: lwz     r4, 92(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24A4C8:
    ctx->pc = 0x7F24A4C8u;
    // 7F24A4C8: lwz     r3, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A4CC:
    ctx->pc = 0x7F24A4CCu;
    // 7F24A4CC: andc   r0, r3, r5
    {
        ctx->gpr[0] = ctx->gpr[3] & ~ctx->gpr[5];
    }

label_7F24A4D0:
    ctx->pc = 0x7F24A4D0u;
    // 7F24A4D0: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A4D4:
    ctx->pc = 0x7F24A4D4u;
    ctx->downcount -= 16;
    // 7F24A4D4: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F24A4D8:
    ctx->pc = 0x7F24A4D8u;
    // 7F24A4D8: lis     r3, 1285
    ctx->gpr[3] = ((u32)(s32)(1285) << 16);

label_7F24A4DC:
    ctx->pc = 0x7F24A4DCu;
    // 7F24A4DC: addi    r4, r4, 11824
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11824);

label_7F24A4E0:
    ctx->pc = 0x7F24A4E0u;
    // 7F24A4E0: rlwinm r0, r29, 5, 0, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 5u) & 0xFFFFFFE0u;
    }

label_7F24A4E4:
    ctx->pc = 0x7F24A4E4u;
    // 7F24A4E4: add   r6, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F24A4E8:
    ctx->pc = 0x7F24A4E8u;
    // 7F24A4E8: addi    r30, r3, 16
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(16);

label_7F24A4EC:
    ctx->pc = 0x7F24A4ECu;
    // 7F24A4EC: lwz     r5, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24A4F0:
    ctx->pc = 0x7F24A4F0u;
    // 7F24A4F0: li      r26, 256
    ctx->gpr[26] = (u32)(s32)(256);

label_7F24A4F4:
    ctx->pc = 0x7F24A4F4u;
    // 7F24A4F4: lwz     r4, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24A4F8:
    ctx->pc = 0x7F24A4F8u;
    // 7F24A4F8: lwz     r3, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A4FC:
    ctx->pc = 0x7F24A4FCu;
    // 7F24A4FC: lwz     r0, 28(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A500:
    ctx->pc = 0x7F24A500u;
    // 7F24A500: stw     r5, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F24A504:
    ctx->pc = 0x7F24A504u;
    // 7F24A504: stw     r4, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F24A508:
    ctx->pc = 0x7F24A508u;
    // 7F24A508: stw     r3, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F24A50C:
    ctx->pc = 0x7F24A50Cu;
    // 7F24A50C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A510:
    ctx->pc = 0x7F24A510u;
    // 7F24A510: b       0x7F24A594
    {
            goto label_7F24A594;
    }

label_7F24A514:
    ctx->pc = 0x7F24A514u;
    ctx->downcount -= 6;
    // 7F24A514: lwz     r4, 452(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(452);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24A518:
    ctx->pc = 0x7F24A518u;
    // 7F24A518: addi    r3, r24, 48
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(48);

label_7F24A51C:
    ctx->pc = 0x7F24A51Cu;
    // 7F24A51C: lwz     r5, 548(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(548);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24A520:
    ctx->pc = 0x7F24A520u;
    // 7F24A520: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24A524:
    ctx->pc = 0x7F24A524u;
    // 7F24A524: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24A528:
    ctx->pc = 0x7F24A528u;
    // 7F24A528: bl      0x7F042B74
    {
            ctx->lr = 0x7F24A52Cu;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F24A52C:
    ctx->pc = 0x7F24A52Cu;
    ctx->downcount -= 26;
    // 7F24A52C: lwz     r6, 48(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24A530:
    ctx->pc = 0x7F24A530u;
    // 7F24A530: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F24A534:
    ctx->pc = 0x7F24A534u;
    // 7F24A534: slw   r7, r0, r30
    {
        u32 sh = ctx->gpr[30] & 0x3Fu;
        ctx->gpr[7] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_7F24A538:
    ctx->pc = 0x7F24A538u;
    // 7F24A538: lis     r3, 1281
    ctx->gpr[3] = ((u32)(s32)(1281) << 16);

label_7F24A53C:
    ctx->pc = 0x7F24A53Cu;
    // 7F24A53C: lwz     r5, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24A540:
    ctx->pc = 0x7F24A540u;
    // 7F24A540: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F24A544:
    ctx->pc = 0x7F24A544u;
    // 7F24A544: lwz     r25, 68(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(68);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F24A548:
    ctx->pc = 0x7F24A548u;
    // 7F24A548: addi    r30, r3, 16
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(16);

label_7F24A54C:
    ctx->pc = 0x7F24A54Cu;
    // 7F24A54C: andc   r0, r5, r7
    {
        ctx->gpr[0] = ctx->gpr[5] & ~ctx->gpr[7];
    }

label_7F24A550:
    ctx->pc = 0x7F24A550u;
    // 7F24A550: rlwinm r5, r29, 5, 0, 26
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[29], 5u) & 0xFFFFFFE0u;
    }

label_7F24A554:
    ctx->pc = 0x7F24A554u;
    // 7F24A554: stw     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A558:
    ctx->pc = 0x7F24A558u;
    // 7F24A558: addi    r0, r4, 11824
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(11824);

label_7F24A55C:
    ctx->pc = 0x7F24A55Cu;
    // 7F24A55C: add   r6, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F24A560:
    ctx->pc = 0x7F24A560u;
    // 7F24A560: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F24A564:
    ctx->pc = 0x7F24A564u;
    // 7F24A564: lwz     r3, 92(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A568:
    ctx->pc = 0x7F24A568u;
    // 7F24A568: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A56C:
    ctx->pc = 0x7F24A56Cu;
    // 7F24A56C: or   r0, r0, r7
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[7];
    }

label_7F24A570:
    ctx->pc = 0x7F24A570u;
    // 7F24A570: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A574:
    ctx->pc = 0x7F24A574u;
    // 7F24A574: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24A578:
    ctx->pc = 0x7F24A578u;
    // 7F24A578: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24A57C:
    ctx->pc = 0x7F24A57Cu;
    // 7F24A57C: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A580:
    ctx->pc = 0x7F24A580u;
    // 7F24A580: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A584:
    ctx->pc = 0x7F24A584u;
    // 7F24A584: stw     r5, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F24A588:
    ctx->pc = 0x7F24A588u;
    // 7F24A588: stw     r4, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F24A58C:
    ctx->pc = 0x7F24A58Cu;
    // 7F24A58C: stw     r3, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F24A590:
    ctx->pc = 0x7F24A590u;
    // 7F24A590: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A594:
    ctx->pc = 0x7F24A594u;
    ctx->downcount -= 19;
    // 7F24A594: lwz     r5, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24A598:
    ctx->pc = 0x7F24A598u;
    // 7F24A598: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24A59C:
    ctx->pc = 0x7F24A59Cu;
    // 7F24A59C: lwz     r6, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24A5A0:
    ctx->pc = 0x7F24A5A0u;
    // 7F24A5A0: cmpwi   r29, 3
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

label_7F24A5A4:
    ctx->pc = 0x7F24A5A4u;
    // 7F24A5A4: stw     r5, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F24A5A8:
    ctx->pc = 0x7F24A5A8u;
    // 7F24A5A8: lwz     r4, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24A5AC:
    ctx->pc = 0x7F24A5ACu;
    // 7F24A5AC: lfs     f1, 92(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24A5ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24A5B0:
    ctx->pc = 0x7F24A5B0u;
    // 7F24A5B0: lfs     f0, 20892(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24A5B0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20892);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24A5B4:
    ctx->pc = 0x7F24A5B4u;
    // 7F24A5B4: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A5B8:
    ctx->pc = 0x7F24A5B8u;
    // 7F24A5B8: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24A5B8u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F24A5BC:
    ctx->pc = 0x7F24A5BCu;
    // 7F24A5BC: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F24A5C0:
    ctx->pc = 0x7F24A5C0u;
    // 7F24A5C0: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F24A5C4:
    ctx->pc = 0x7F24A5C4u;
    // 7F24A5C4: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F24A5C8:
    ctx->pc = 0x7F24A5C8u;
    // 7F24A5C8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A5CC:
    ctx->pc = 0x7F24A5CCu;
    // 7F24A5CC: stw     r6, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F24A5D0:
    ctx->pc = 0x7F24A5D0u;
    // 7F24A5D0: stw     r4, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F24A5D4:
    ctx->pc = 0x7F24A5D4u;
    // 7F24A5D4: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A5D8:
    ctx->pc = 0x7F24A5D8u;
    // 7F24A5D8: stfs     f0, 92(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24A5D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F24A5DC:
    ctx->pc = 0x7F24A5DCu;
    // 7F24A5DC: bc    12, 2, 0x7F24A5F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24A5F0;
        }
    }

label_7F24A5E0:
    ctx->pc = 0x7F24A5E0u;
    ctx->downcount -= 2;
    // 7F24A5E0: cmpwi   r29, 5
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

label_7F24A5E4:
    ctx->pc = 0x7F24A5E4u;
    // 7F24A5E4: bc    12, 2, 0x7F24A5F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24A5F0;
        }
    }

label_7F24A5E8:
    ctx->pc = 0x7F24A5E8u;
    ctx->downcount -= 2;
    // 7F24A5E8: cmpwi   r29, 6
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24A5EC:
    ctx->pc = 0x7F24A5ECu;
    // 7F24A5EC: bc    4, 2, 0x7F24A604
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24A604;
        }
    }

label_7F24A5F0:
    ctx->pc = 0x7F24A5F0u;
    ctx->downcount -= 5;
    // 7F24A5F0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24A5F4:
    ctx->pc = 0x7F24A5F4u;
    // 7F24A5F4: lfs     f1, 92(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24A5F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24A5F8:
    ctx->pc = 0x7F24A5F8u;
    // 7F24A5F8: lfs     f0, 20896(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24A5F8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20896);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24A5FC:
    ctx->pc = 0x7F24A5FCu;
    // 7F24A5FC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24A5FCu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F24A600:
    ctx->pc = 0x7F24A600u;
    // 7F24A600: stfs     f0, 92(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24A600u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F24A604:
    ctx->pc = 0x7F24A604u;
    ctx->downcount -= 23;
    // 7F24A604: lwz     r10, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F24A608:
    ctx->pc = 0x7F24A608u;
    // 7F24A608: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F24A60C:
    ctx->pc = 0x7F24A60Cu;
    // 7F24A60C: lwz     r9, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F24A610:
    ctx->pc = 0x7F24A610u;
    // 7F24A610: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F24A614:
    ctx->pc = 0x7F24A614u;
    // 7F24A614: lwz     r8, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F24A618:
    ctx->pc = 0x7F24A618u;
    // 7F24A618: lwz     r7, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F24A61C:
    ctx->pc = 0x7F24A61Cu;
    // 7F24A61C: lwz     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24A620:
    ctx->pc = 0x7F24A620u;
    // 7F24A620: lwz     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24A624:
    ctx->pc = 0x7F24A624u;
    // 7F24A624: lwz     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24A628:
    ctx->pc = 0x7F24A628u;
    // 7F24A628: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A62C:
    ctx->pc = 0x7F24A62Cu;
    // 7F24A62C: stw     r10, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F24A630:
    ctx->pc = 0x7F24A630u;
    // 7F24A630: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A634:
    ctx->pc = 0x7F24A634u;
    // 7F24A634: stw     r9, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F24A638:
    ctx->pc = 0x7F24A638u;
    // 7F24A638: stw     r8, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F24A63C:
    ctx->pc = 0x7F24A63Cu;
    // 7F24A63C: stw     r7, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F24A640:
    ctx->pc = 0x7F24A640u;
    // 7F24A640: stw     r6, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F24A644:
    ctx->pc = 0x7F24A644u;
    // 7F24A644: stw     r5, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F24A648:
    ctx->pc = 0x7F24A648u;
    // 7F24A648: stw     r4, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F24A64C:
    ctx->pc = 0x7F24A64Cu;
    // 7F24A64C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A650:
    ctx->pc = 0x7F24A650u;
    // 7F24A650: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A654:
    ctx->pc = 0x7F24A654u;
    // 7F24A654: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A658:
    ctx->pc = 0x7F24A658u;
    // 7F24A658: and.   r0, r0, r28
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[28];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F24A65C:
    ctx->pc = 0x7F24A65Cu;
    // 7F24A65C: bc    4, 2, 0x7F24A688
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24A688;
        }
    }

label_7F24A660:
    ctx->pc = 0x7F24A660u;
    ctx->downcount -= 5;
    // 7F24A660: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F24A664:
    ctx->pc = 0x7F24A664u;
    // 7F24A664: li      r3, 1024
    ctx->gpr[3] = (u32)(s32)(1024);

label_7F24A668:
    ctx->pc = 0x7F24A668u;
    // 7F24A668: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F24A66C:
    ctx->pc = 0x7F24A66Cu;
    // 7F24A66C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24A670:
    ctx->pc = 0x7F24A670u;
    // 7F24A670: bl      0x7F012018
    {
            ctx->lr = 0x7F24A674u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F24A674:
    ctx->pc = 0x7F24A674u;
    ctx->downcount -= 5;
    // 7F24A674: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24A678:
    ctx->pc = 0x7F24A678u;
    // 7F24A678: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F24A67C:
    ctx->pc = 0x7F24A67Cu;
    // 7F24A67C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F24A680:
    ctx->pc = 0x7F24A680u;
    // 7F24A680: or.   r0, r4, r0
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

label_7F24A684:
    ctx->pc = 0x7F24A684u;
    // 7F24A684: bc    12, 2, 0x7F24A6AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24A6AC;
        }
    }

label_7F24A688:
    ctx->pc = 0x7F24A688u;
    ctx->downcount -= 9;
    // 7F24A688: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F24A68C:
    ctx->pc = 0x7F24A68Cu;
    // 7F24A68C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24A690:
    ctx->pc = 0x7F24A690u;
    // 7F24A690: lfs     f1, 11616(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F24A690u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(11616);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24A694:
    ctx->pc = 0x7F24A694u;
    // 7F24A694: lfs     f0, 20896(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24A694u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20896);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24A698:
    ctx->pc = 0x7F24A698u;
    // 7F24A698: lfs     f2, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24A698u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F24A69C:
    ctx->pc = 0x7F24A69Cu;
    // 7F24A69C: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24A69Cu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F24A6A0:
    ctx->pc = 0x7F24A6A0u;
    // 7F24A6A0: fsubs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24A6A0u)) return;
    ppc_fsubs(ctx, 0, 2, 0);

label_7F24A6A4:
    ctx->pc = 0x7F24A6A4u;
    // 7F24A6A4: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24A6A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F24A6A8:
    ctx->pc = 0x7F24A6A8u;
    // 7F24A6A8: b       0x7F24A6C0
    {
            goto label_7F24A6C0;
    }

label_7F24A6AC:
    ctx->pc = 0x7F24A6ACu;
    ctx->downcount -= 5;
    // 7F24A6AC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24A6B0:
    ctx->pc = 0x7F24A6B0u;
    // 7F24A6B0: lfs     f1, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24A6B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24A6B4:
    ctx->pc = 0x7F24A6B4u;
    // 7F24A6B4: lfs     f0, 20900(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24A6B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20900);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24A6B8:
    ctx->pc = 0x7F24A6B8u;
    // 7F24A6B8: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24A6B8u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F24A6BC:
    ctx->pc = 0x7F24A6BCu;
    // 7F24A6BC: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24A6BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F24A6C0:
    ctx->pc = 0x7F24A6C0u;
    ctx->downcount -= 3;
    // 7F24A6C0: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24A6C4:
    ctx->pc = 0x7F24A6C4u;
    // 7F24A6C4: addi    r4, r1, 232
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(232);

label_7F24A6C8:
    ctx->pc = 0x7F24A6C8u;
    // 7F24A6C8: bl      0x80025A3C
    {
            ctx->lr = 0x7F24A6CCu;
            ctx->pc = 0x80025A3Cu;
            return;
    }

label_7F24A6CC:
    ctx->pc = 0x7F24A6CCu;
    ctx->downcount -= 3;
    // 7F24A6CC: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24A6D0:
    ctx->pc = 0x7F24A6D0u;
    // 7F24A6D0: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F24A6D4:
    ctx->pc = 0x7F24A6D4u;
    // 7F24A6D4: bl      0x7F3CC414
    {
            ctx->lr = 0x7F24A6D8u;
            ctx->pc = 0x7F3CC414u;
            return;
    }

label_7F24A6D8:
    ctx->pc = 0x7F24A6D8u;
    ctx->downcount -= 5;
    // 7F24A6D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F24A6DC:
    ctx->pc = 0x7F24A6DCu;
    // 7F24A6DC: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F24A6E0:
    ctx->pc = 0x7F24A6E0u;
    // 7F24A6E0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F24A6E4:
    ctx->pc = 0x7F24A6E4u;
    // 7F24A6E4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24A6E8:
    ctx->pc = 0x7F24A6E8u;
    // 7F24A6E8: bl      0x7F012018
    {
            ctx->lr = 0x7F24A6ECu;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F24A6EC:
    ctx->pc = 0x7F24A6ECu;
    ctx->downcount -= 5;
    // 7F24A6EC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24A6F0:
    ctx->pc = 0x7F24A6F0u;
    // 7F24A6F0: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F24A6F4:
    ctx->pc = 0x7F24A6F4u;
    // 7F24A6F4: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F24A6F8:
    ctx->pc = 0x7F24A6F8u;
    // 7F24A6F8: or.   r0, r4, r0
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

label_7F24A6FC:
    ctx->pc = 0x7F24A6FCu;
    // 7F24A6FC: bc    12, 2, 0x7F24A728
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24A728;
        }
    }

label_7F24A700:
    ctx->pc = 0x7F24A700u;
    ctx->downcount -= 4;
    // 7F24A700: addi    r4, r1, 232
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(232);

label_7F24A704:
    ctx->pc = 0x7F24A704u;
    // 7F24A704: addi    r3, r1, 168
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(168);

label_7F24A708:
    ctx->pc = 0x7F24A708u;
    // 7F24A708: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F24A70C:
    ctx->pc = 0x7F24A70Cu;
    // 7F24A70C: bl      0x80025A80
    {
            ctx->lr = 0x7F24A710u;
            ctx->pc = 0x80025A80u;
            return;
    }

label_7F24A710:
    ctx->pc = 0x7F24A710u;
    ctx->downcount -= 6;
    // 7F24A710: lfs     f0, 48(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F24A710u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24A714:
    ctx->pc = 0x7F24A714u;
    // 7F24A714: stfs     f0, 280(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24A714u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F24A718:
    ctx->pc = 0x7F24A718u;
    // 7F24A718: lfs     f0, 52(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F24A718u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24A71C:
    ctx->pc = 0x7F24A71Cu;
    // 7F24A71C: stfs     f0, 284(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24A71Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F24A720:
    ctx->pc = 0x7F24A720u;
    // 7F24A720: lfs     f0, 56(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F24A720u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24A724:
    ctx->pc = 0x7F24A724u;
    // 7F24A724: stfs     f0, 288(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24A724u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F24A728:
    ctx->pc = 0x7F24A728u;
    ctx->downcount -= 3;
    // 7F24A728: addi    r3, r1, 232
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(232);

label_7F24A72C:
    ctx->pc = 0x7F24A72Cu;
    // 7F24A72C: addi    r4, r24, 368
    ctx->gpr[4] = ctx->gpr[24] + (u32)(s32)(368);

label_7F24A730:
    ctx->pc = 0x7F24A730u;
    // 7F24A730: bl      0x80025A3C
    {
            ctx->lr = 0x7F24A734u;
            ctx->pc = 0x80025A3Cu;
            return;
    }

label_7F24A734:
    ctx->pc = 0x7F24A734u;
    ctx->downcount -= 2;
    // 7F24A734: addi    r3, r1, 232
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(232);

label_7F24A738:
    ctx->pc = 0x7F24A738u;
    // 7F24A738: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F24A73Cu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F24A73C:
    ctx->pc = 0x7F24A73Cu;
    ctx->downcount -= 12;
    // 7F24A73C: lwz     r3, 456(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(456);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A740:
    ctx->pc = 0x7F24A740u;
    // 7F24A740: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A744:
    ctx->pc = 0x7F24A744u;
    // 7F24A744: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F24A748:
    ctx->pc = 0x7F24A748u;
    // 7F24A748: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A74C:
    ctx->pc = 0x7F24A74Cu;
    // 7F24A74C: lwz     r3, 460(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(460);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A750:
    ctx->pc = 0x7F24A750u;
    // 7F24A750: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A754:
    ctx->pc = 0x7F24A754u;
    // 7F24A754: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F24A758:
    ctx->pc = 0x7F24A758u;
    // 7F24A758: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A75C:
    ctx->pc = 0x7F24A75Cu;
    // 7F24A75C: lwz     r3, 552(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(552);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A760:
    ctx->pc = 0x7F24A760u;
    // 7F24A760: lwz     r27, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F24A764:
    ctx->pc = 0x7F24A764u;
    // 7F24A764: cmplwi  r27, 0x0009
    {
        u32 val_a = (u32)(ctx->gpr[27]);
        u32 val_b = (u32)(0x0009u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24A768:
    ctx->pc = 0x7F24A768u;
    // 7F24A768: bc    12, 1, 0x7F24B044
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24B044;
        }
    }

label_7F24A76C:
    ctx->pc = 0x7F24A76Cu;
    ctx->downcount -= 7;
    // 7F24A76C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F24A770:
    ctx->pc = 0x7F24A770u;
    // 7F24A770: rlwinm r0, r27, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[27], 2u) & 0xFFFFFFFCu;
    }

label_7F24A774:
    ctx->pc = 0x7F24A774u;
    // 7F24A774: addi    r3, r3, 12192
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12192);

label_7F24A778:
    ctx->pc = 0x7F24A778u;
    // 7F24A778: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A77C:
    ctx->pc = 0x7F24A77Cu;
    // 7F24A77C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F24A780:
    ctx->pc = 0x7F24A780u;
    // 7F24A780: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F24A784:
    ctx->pc = 0x7F24A784u;
    ctx->downcount -= 2;
    // 7F24A784: cmpwi   r29, 3
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

label_7F24A788:
    ctx->pc = 0x7F24A788u;
    // 7F24A788: bc    12, 2, 0x7F24A7A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24A7A4;
        }
    }

label_7F24A78C:
    ctx->pc = 0x7F24A78Cu;
    ctx->downcount -= 2;
    // 7F24A78C: cmpwi   r29, 5
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

label_7F24A790:
    ctx->pc = 0x7F24A790u;
    // 7F24A790: bc    12, 2, 0x7F24A7A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24A7A4;
        }
    }

label_7F24A794:
    ctx->pc = 0x7F24A794u;
    ctx->downcount -= 2;
    // 7F24A794: cmpwi   r29, 7
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24A798:
    ctx->pc = 0x7F24A798u;
    // 7F24A798: bc    12, 2, 0x7F24A7A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24A7A4;
        }
    }

label_7F24A79C:
    ctx->pc = 0x7F24A79Cu;
    ctx->downcount -= 2;
    // 7F24A79C: cmpwi   r29, 6
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24A7A0:
    ctx->pc = 0x7F24A7A0u;
    // 7F24A7A0: bc    4, 2, 0x7F24B044
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24B044;
        }
    }

label_7F24A7A4:
    ctx->pc = 0x7F24A7A4u;
    ctx->downcount -= 7;
    // 7F24A7A4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F24A7A8:
    ctx->pc = 0x7F24A7A8u;
    // 7F24A7A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F24A7AC:
    ctx->pc = 0x7F24A7ACu;
    // 7F24A7AC: stw     r0, 588(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(588);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A7B0:
    ctx->pc = 0x7F24A7B0u;
    // 7F24A7B0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24A7B4:
    ctx->pc = 0x7F24A7B4u;
    // 7F24A7B4: stw     r0, 592(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(592);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A7B8:
    ctx->pc = 0x7F24A7B8u;
    // 7F24A7B8: lwz     r3, 616(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(616);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A7BC:
    ctx->pc = 0x7F24A7BCu;
    // 7F24A7BC: bl      0x80051BB0
    {
            ctx->lr = 0x7F24A7C0u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F24A7C0:
    ctx->pc = 0x7F24A7C0u;
    ctx->downcount -= 2;
    // 7F24A7C0: cmpwi   r3, 0
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

label_7F24A7C4:
    ctx->pc = 0x7F24A7C4u;
    // 7F24A7C4: bc    12, 2, 0x7F24B044
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24B044;
        }
    }

label_7F24A7C8:
    ctx->pc = 0x7F24A7C8u;
    ctx->downcount -= 5;
    // 7F24A7C8: lwz     r3, 616(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(616);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24A7CC:
    ctx->pc = 0x7F24A7CCu;
    // 7F24A7CC: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F24A7D0:
    ctx->pc = 0x7F24A7D0u;
    // 7F24A7D0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24A7D4:
    ctx->pc = 0x7F24A7D4u;
    // 7F24A7D4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F24A7D8:
    ctx->pc = 0x7F24A7D8u;
    // 7F24A7D8: bl      0x80051688
    {
            ctx->lr = 0x7F24A7DCu;
            ctx->pc = 0x80051688u;
            return;
    }

label_7F24A7DC:
    ctx->pc = 0x7F24A7DCu;
    ctx->downcount -= 3;
    // 7F24A7DC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24A7E0:
    ctx->pc = 0x7F24A7E0u;
    // 7F24A7E0: stw     r0, 616(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(616);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A7E4:
    ctx->pc = 0x7F24A7E4u;
    // 7F24A7E4: b       0x7F24B044
    {
            goto label_7F24B044;
    }

label_7F24A7E8:
    ctx->pc = 0x7F24A7E8u;
    ctx->downcount -= 2;
    // 7F24A7E8: cmpwi   r29, 3
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

label_7F24A7EC:
    ctx->pc = 0x7F24A7ECu;
    // 7F24A7EC: bc    12, 2, 0x7F24A808
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24A808;
        }
    }

label_7F24A7F0:
    ctx->pc = 0x7F24A7F0u;
    ctx->downcount -= 2;
    // 7F24A7F0: cmpwi   r29, 5
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

label_7F24A7F4:
    ctx->pc = 0x7F24A7F4u;
    // 7F24A7F4: bc    12, 2, 0x7F24A808
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24A808;
        }
    }

label_7F24A7F8:
    ctx->pc = 0x7F24A7F8u;
    ctx->downcount -= 2;
    // 7F24A7F8: cmpwi   r29, 7
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24A7FC:
    ctx->pc = 0x7F24A7FCu;
    // 7F24A7FC: bc    12, 2, 0x7F24A808
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24A808;
        }
    }

label_7F24A800:
    ctx->pc = 0x7F24A800u;
    ctx->downcount -= 2;
    // 7F24A800: cmpwi   r29, 6
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24A804:
    ctx->pc = 0x7F24A804u;
    // 7F24A804: bc    4, 2, 0x7F24A814
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24A814;
        }
    }

label_7F24A808:
    ctx->pc = 0x7F24A808u;
    ctx->downcount -= 3;
    // 7F24A808: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F24A80C:
    ctx->pc = 0x7F24A80Cu;
    // 7F24A80C: stw     r0, 588(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(588);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A810:
    ctx->pc = 0x7F24A810u;
    // 7F24A810: stw     r0, 592(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(592);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A814:
    ctx->pc = 0x7F24A814u;
    ctx->downcount -= 12;
    // 7F24A814: lwz     r6, 456(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(456);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24A818:
    ctx->pc = 0x7F24A818u;
    // 7F24A818: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F24A81C:
    ctx->pc = 0x7F24A81Cu;
    // 7F24A81C: addi    r4, r1, 136
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(136);

label_7F24A820:
    ctx->pc = 0x7F24A820u;
    // 7F24A820: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F24A824:
    ctx->pc = 0x7F24A824u;
    // 7F24A824: lwz     r0, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A828:
    ctx->pc = 0x7F24A828u;
    // 7F24A828: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F24A82C:
    ctx->pc = 0x7F24A82Cu;
    // 7F24A82C: stw     r0, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A830:
    ctx->pc = 0x7F24A830u;
    // 7F24A830: lwz     r6, 460(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(460);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24A834:
    ctx->pc = 0x7F24A834u;
    // 7F24A834: lwz     r0, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A838:
    ctx->pc = 0x7F24A838u;
    // 7F24A838: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F24A83C:
    ctx->pc = 0x7F24A83Cu;
    // 7F24A83C: stw     r0, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A840:
    ctx->pc = 0x7F24A840u;
    // 7F24A840: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F24A844u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F24A844:
    ctx->pc = 0x7F24A844u;
    ctx->downcount -= 4;
    // 7F24A844: addi    r3, r1, 88
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(88);

label_7F24A848:
    ctx->pc = 0x7F24A848u;
    // 7F24A848: addi    r4, r1, 152
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(152);

label_7F24A84C:
    ctx->pc = 0x7F24A84Cu;
    // 7F24A84C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F24A850:
    ctx->pc = 0x7F24A850u;
    // 7F24A850: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F24A854u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F24A854:
    ctx->pc = 0x7F24A854u;
    ctx->downcount -= 4;
    // 7F24A854: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F24A858:
    ctx->pc = 0x7F24A858u;
    // 7F24A858: addi    r4, r1, 120
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(120);

label_7F24A85C:
    ctx->pc = 0x7F24A85Cu;
    // 7F24A85C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F24A860:
    ctx->pc = 0x7F24A860u;
    // 7F24A860: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F24A864u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F24A864:
    ctx->pc = 0x7F24A864u;
    ctx->downcount -= 4;
    // 7F24A864: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F24A868:
    ctx->pc = 0x7F24A868u;
    // 7F24A868: addi    r4, r1, 152
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(152);

label_7F24A86C:
    ctx->pc = 0x7F24A86Cu;
    // 7F24A86C: addi    r5, r1, 120
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(120);

label_7F24A870:
    ctx->pc = 0x7F24A870u;
    // 7F24A870: bl      0x7F249D10
    {
            ctx->lr = 0x7F24A874u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F249D10u;
                return;
            }
            goto label_7F249D10;
    }

label_7F24A874:
    ctx->pc = 0x7F24A874u;
    ctx->downcount -= 20;
    // 7F24A874: lwz     r6, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24A878:
    ctx->pc = 0x7F24A878u;
    // 7F24A878: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F24A87C:
    ctx->pc = 0x7F24A87Cu;
    // 7F24A87C: lwz     r0, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A880:
    ctx->pc = 0x7F24A880u;
    // 7F24A880: addi    r4, r1, 136
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(136);

label_7F24A884:
    ctx->pc = 0x7F24A884u;
    // 7F24A884: addi    r5, r1, 120
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(120);

label_7F24A888:
    ctx->pc = 0x7F24A888u;
    // 7F24A888: stw     r6, 432(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(432);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F24A88C:
    ctx->pc = 0x7F24A88Cu;
    // 7F24A88C: stw     r0, 436(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(436);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A890:
    ctx->pc = 0x7F24A890u;
    // 7F24A890: lwz     r6, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24A894:
    ctx->pc = 0x7F24A894u;
    // 7F24A894: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A898:
    ctx->pc = 0x7F24A898u;
    // 7F24A898: stw     r6, 440(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(440);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F24A89C:
    ctx->pc = 0x7F24A89Cu;
    // 7F24A89C: stw     r0, 444(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(444);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A8A0:
    ctx->pc = 0x7F24A8A0u;
    // 7F24A8A0: lwz     r6, 456(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(456);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24A8A4:
    ctx->pc = 0x7F24A8A4u;
    // 7F24A8A4: lwz     r0, 164(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A8A8:
    ctx->pc = 0x7F24A8A8u;
    // 7F24A8A8: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F24A8AC:
    ctx->pc = 0x7F24A8ACu;
    // 7F24A8AC: stw     r0, 164(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A8B0:
    ctx->pc = 0x7F24A8B0u;
    // 7F24A8B0: lwz     r6, 460(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(460);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24A8B4:
    ctx->pc = 0x7F24A8B4u;
    // 7F24A8B4: lwz     r0, 164(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A8B8:
    ctx->pc = 0x7F24A8B8u;
    // 7F24A8B8: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F24A8BC:
    ctx->pc = 0x7F24A8BCu;
    // 7F24A8BC: stw     r0, 164(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A8C0:
    ctx->pc = 0x7F24A8C0u;
    // 7F24A8C0: bl      0x7F24A040
    {
            ctx->lr = 0x7F24A8C4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24A040u;
                return;
            }
            goto label_7F24A040;
    }

label_7F24A8C4:
    ctx->pc = 0x7F24A8C4u;
    ctx->downcount -= 2;
    // 7F24A8C4: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F24A8C8:
    ctx->pc = 0x7F24A8C8u;
    // 7F24A8C8: bl      0x7F249DFC
    {
            ctx->lr = 0x7F24A8CCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F249DFCu;
                return;
            }
            goto label_7F249DFC;
    }

label_7F24A8CC:
    ctx->pc = 0x7F24A8CCu;
    ctx->downcount -= 7;
    // 7F24A8CC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F24A8D0:
    ctx->pc = 0x7F24A8D0u;
    // 7F24A8D0: addi    r3, r24, 144
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(144);

label_7F24A8D4:
    ctx->pc = 0x7F24A8D4u;
    // 7F24A8D4: addi    r5, r4, 18308
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18308);

label_7F24A8D8:
    ctx->pc = 0x7F24A8D8u;
    // 7F24A8D8: addi    r4, r1, 152
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(152);

label_7F24A8DC:
    ctx->pc = 0x7F24A8DCu;
    // 7F24A8DC: lwz     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24A8E0:
    ctx->pc = 0x7F24A8E0u;
    // 7F24A8E0: addi    r5, r24, 352
    ctx->gpr[5] = ctx->gpr[24] + (u32)(s32)(352);

label_7F24A8E4:
    ctx->pc = 0x7F24A8E4u;
    // 7F24A8E4: bl      0x7F014A08
    {
            ctx->lr = 0x7F24A8E8u;
            ctx->pc = 0x7F014A08u;
            return;
    }

label_7F24A8E8:
    ctx->pc = 0x7F24A8E8u;
    ctx->downcount -= 3;
    // 7F24A8E8: stw     r30, 148(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F24A8EC:
    ctx->pc = 0x7F24A8ECu;
    // 7F24A8EC: addi    r3, r24, 144
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(144);

label_7F24A8F0:
    ctx->pc = 0x7F24A8F0u;
    // 7F24A8F0: bl      0x7F0148A0
    {
            ctx->lr = 0x7F24A8F4u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F24A8F4:
    ctx->pc = 0x7F24A8F4u;
    ctx->downcount -= 9;
    // 7F24A8F4: lfs     f2, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24A8F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F24A8F8:
    ctx->pc = 0x7F24A8F8u;
    // 7F24A8F8: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F24A8FC:
    ctx->pc = 0x7F24A8FCu;
    // 7F24A8FC: lfs     f1, 140(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24A8FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24A900:
    ctx->pc = 0x7F24A900u;
    // 7F24A900: lfs     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24A900u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24A904:
    ctx->pc = 0x7F24A904u;
    // 7F24A904: stfs     f2, 280(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24A904u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F24A908:
    ctx->pc = 0x7F24A908u;
    // 7F24A908: stfs     f1, 284(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24A908u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F24A90C:
    ctx->pc = 0x7F24A90Cu;
    // 7F24A90C: stfs     f0, 288(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24A90Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F24A910:
    ctx->pc = 0x7F24A910u;
    // 7F24A910: stw     r0, 568(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(568);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A914:
    ctx->pc = 0x7F24A914u;
    // 7F24A914: b       0x7F24B044
    {
            goto label_7F24B044;
    }

label_7F24A918:
    ctx->pc = 0x7F24A918u;
    ctx->downcount -= 2;
    // 7F24A918: cmpwi   r29, 3
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

label_7F24A91C:
    ctx->pc = 0x7F24A91Cu;
    // 7F24A91C: bc    12, 2, 0x7F24A938
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24A938;
        }
    }

label_7F24A920:
    ctx->pc = 0x7F24A920u;
    ctx->downcount -= 2;
    // 7F24A920: cmpwi   r29, 5
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

label_7F24A924:
    ctx->pc = 0x7F24A924u;
    // 7F24A924: bc    12, 2, 0x7F24A938
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24A938;
        }
    }

label_7F24A928:
    ctx->pc = 0x7F24A928u;
    ctx->downcount -= 2;
    // 7F24A928: cmpwi   r29, 7
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24A92C:
    ctx->pc = 0x7F24A92Cu;
    // 7F24A92C: bc    12, 2, 0x7F24A938
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24A938;
        }
    }

label_7F24A930:
    ctx->pc = 0x7F24A930u;
    ctx->downcount -= 2;
    // 7F24A930: cmpwi   r29, 6
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24A934:
    ctx->pc = 0x7F24A934u;
    // 7F24A934: bc    4, 2, 0x7F24AA3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24AA3C;
        }
    }

label_7F24A938:
    ctx->pc = 0x7F24A938u;
    ctx->downcount -= 15;
    // 7F24A938: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F24A93C:
    ctx->pc = 0x7F24A93Cu;
    // 7F24A93C: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F24A940:
    ctx->pc = 0x7F24A940u;
    // 7F24A940: stw     r0, 588(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(588);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A944:
    ctx->pc = 0x7F24A944u;
    // 7F24A944: addi    r4, r1, 136
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(136);

label_7F24A948:
    ctx->pc = 0x7F24A948u;
    // 7F24A948: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F24A94C:
    ctx->pc = 0x7F24A94Cu;
    // 7F24A94C: stw     r0, 592(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(592);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A950:
    ctx->pc = 0x7F24A950u;
    // 7F24A950: lwz     r6, 456(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(456);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24A954:
    ctx->pc = 0x7F24A954u;
    // 7F24A954: lwz     r0, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A958:
    ctx->pc = 0x7F24A958u;
    // 7F24A958: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F24A95C:
    ctx->pc = 0x7F24A95Cu;
    // 7F24A95C: stw     r0, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A960:
    ctx->pc = 0x7F24A960u;
    // 7F24A960: lwz     r6, 460(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(460);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24A964:
    ctx->pc = 0x7F24A964u;
    // 7F24A964: lwz     r0, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A968:
    ctx->pc = 0x7F24A968u;
    // 7F24A968: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F24A96C:
    ctx->pc = 0x7F24A96Cu;
    // 7F24A96C: stw     r0, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A970:
    ctx->pc = 0x7F24A970u;
    // 7F24A970: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F24A974u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F24A974:
    ctx->pc = 0x7F24A974u;
    ctx->downcount -= 4;
    // 7F24A974: addi    r3, r1, 88
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(88);

label_7F24A978:
    ctx->pc = 0x7F24A978u;
    // 7F24A978: addi    r4, r1, 152
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(152);

label_7F24A97C:
    ctx->pc = 0x7F24A97Cu;
    // 7F24A97C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F24A980:
    ctx->pc = 0x7F24A980u;
    // 7F24A980: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F24A984u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F24A984:
    ctx->pc = 0x7F24A984u;
    ctx->downcount -= 4;
    // 7F24A984: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F24A988:
    ctx->pc = 0x7F24A988u;
    // 7F24A988: addi    r4, r1, 120
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(120);

label_7F24A98C:
    ctx->pc = 0x7F24A98Cu;
    // 7F24A98C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F24A990:
    ctx->pc = 0x7F24A990u;
    // 7F24A990: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F24A994u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F24A994:
    ctx->pc = 0x7F24A994u;
    ctx->downcount -= 4;
    // 7F24A994: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F24A998:
    ctx->pc = 0x7F24A998u;
    // 7F24A998: addi    r4, r1, 152
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(152);

label_7F24A99C:
    ctx->pc = 0x7F24A99Cu;
    // 7F24A99C: addi    r5, r1, 120
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(120);

label_7F24A9A0:
    ctx->pc = 0x7F24A9A0u;
    // 7F24A9A0: bl      0x7F249D10
    {
            ctx->lr = 0x7F24A9A4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F249D10u;
                return;
            }
            goto label_7F249D10;
    }

label_7F24A9A4:
    ctx->pc = 0x7F24A9A4u;
    ctx->downcount -= 20;
    // 7F24A9A4: lwz     r6, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24A9A8:
    ctx->pc = 0x7F24A9A8u;
    // 7F24A9A8: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F24A9AC:
    ctx->pc = 0x7F24A9ACu;
    // 7F24A9AC: lwz     r0, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A9B0:
    ctx->pc = 0x7F24A9B0u;
    // 7F24A9B0: addi    r4, r1, 136
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(136);

label_7F24A9B4:
    ctx->pc = 0x7F24A9B4u;
    // 7F24A9B4: addi    r5, r1, 120
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(120);

label_7F24A9B8:
    ctx->pc = 0x7F24A9B8u;
    // 7F24A9B8: stw     r6, 432(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(432);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F24A9BC:
    ctx->pc = 0x7F24A9BCu;
    // 7F24A9BC: stw     r0, 436(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(436);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A9C0:
    ctx->pc = 0x7F24A9C0u;
    // 7F24A9C0: lwz     r6, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24A9C4:
    ctx->pc = 0x7F24A9C4u;
    // 7F24A9C4: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A9C8:
    ctx->pc = 0x7F24A9C8u;
    // 7F24A9C8: stw     r6, 440(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(440);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F24A9CC:
    ctx->pc = 0x7F24A9CCu;
    // 7F24A9CC: stw     r0, 444(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(444);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A9D0:
    ctx->pc = 0x7F24A9D0u;
    // 7F24A9D0: lwz     r6, 456(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(456);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24A9D4:
    ctx->pc = 0x7F24A9D4u;
    // 7F24A9D4: lwz     r0, 164(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A9D8:
    ctx->pc = 0x7F24A9D8u;
    // 7F24A9D8: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F24A9DC:
    ctx->pc = 0x7F24A9DCu;
    // 7F24A9DC: stw     r0, 164(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A9E0:
    ctx->pc = 0x7F24A9E0u;
    // 7F24A9E0: lwz     r6, 460(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(460);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24A9E4:
    ctx->pc = 0x7F24A9E4u;
    // 7F24A9E4: lwz     r0, 164(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24A9E8:
    ctx->pc = 0x7F24A9E8u;
    // 7F24A9E8: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F24A9EC:
    ctx->pc = 0x7F24A9ECu;
    // 7F24A9EC: stw     r0, 164(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24A9F0:
    ctx->pc = 0x7F24A9F0u;
    // 7F24A9F0: bl      0x7F24A040
    {
            ctx->lr = 0x7F24A9F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24A040u;
                return;
            }
            goto label_7F24A040;
    }

label_7F24A9F4:
    ctx->pc = 0x7F24A9F4u;
    ctx->downcount -= 2;
    // 7F24A9F4: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F24A9F8:
    ctx->pc = 0x7F24A9F8u;
    // 7F24A9F8: bl      0x7F249DFC
    {
            ctx->lr = 0x7F24A9FCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F249DFCu;
                return;
            }
            goto label_7F249DFC;
    }

label_7F24A9FC:
    ctx->pc = 0x7F24A9FCu;
    ctx->downcount -= 7;
    // 7F24A9FC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F24AA00:
    ctx->pc = 0x7F24AA00u;
    // 7F24AA00: addi    r3, r24, 144
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(144);

label_7F24AA04:
    ctx->pc = 0x7F24AA04u;
    // 7F24AA04: addi    r5, r4, 18308
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18308);

label_7F24AA08:
    ctx->pc = 0x7F24AA08u;
    // 7F24AA08: addi    r4, r1, 152
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(152);

label_7F24AA0C:
    ctx->pc = 0x7F24AA0Cu;
    // 7F24AA0C: lwz     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24AA10:
    ctx->pc = 0x7F24AA10u;
    // 7F24AA10: addi    r5, r24, 352
    ctx->gpr[5] = ctx->gpr[24] + (u32)(s32)(352);

label_7F24AA14:
    ctx->pc = 0x7F24AA14u;
    // 7F24AA14: bl      0x7F014A08
    {
            ctx->lr = 0x7F24AA18u;
            ctx->pc = 0x7F014A08u;
            return;
    }

label_7F24AA18:
    ctx->pc = 0x7F24AA18u;
    ctx->downcount -= 3;
    // 7F24AA18: stw     r30, 148(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F24AA1C:
    ctx->pc = 0x7F24AA1Cu;
    // 7F24AA1C: addi    r3, r24, 144
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(144);

label_7F24AA20:
    ctx->pc = 0x7F24AA20u;
    // 7F24AA20: bl      0x7F0148A0
    {
            ctx->lr = 0x7F24AA24u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F24AA24:
    ctx->pc = 0x7F24AA24u;
    ctx->downcount -= 6;
    // 7F24AA24: lfs     f2, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24AA24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F24AA28:
    ctx->pc = 0x7F24AA28u;
    // 7F24AA28: lfs     f1, 140(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24AA28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24AA2C:
    ctx->pc = 0x7F24AA2Cu;
    // 7F24AA2C: lfs     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24AA2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24AA30:
    ctx->pc = 0x7F24AA30u;
    // 7F24AA30: stfs     f2, 280(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24AA30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F24AA34:
    ctx->pc = 0x7F24AA34u;
    // 7F24AA34: stfs     f1, 284(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24AA34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F24AA38:
    ctx->pc = 0x7F24AA38u;
    // 7F24AA38: stfs     f0, 288(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24AA38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F24AA3C:
    ctx->pc = 0x7F24AA3Cu;
    ctx->downcount -= 5;
    // 7F24AA3C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24AA40:
    ctx->pc = 0x7F24AA40u;
    // 7F24AA40: lfs     f0, 544(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F24AA40u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(544);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24AA44:
    ctx->pc = 0x7F24AA44u;
    // 7F24AA44: lfs     f1, 20848(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24AA44u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20848);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24AA48:
    ctx->pc = 0x7F24AA48u;
    // 7F24AA48: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24AA48u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F24AA4C:
    ctx->pc = 0x7F24AA4Cu;
    // 7F24AA4C: bc    12, 2, 0x7F24AA60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24AA60;
        }
    }

label_7F24AA50:
    ctx->pc = 0x7F24AA50u;
    ctx->downcount -= 4;
    // 7F24AA50: lwz     r3, 456(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(456);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24AA54:
    ctx->pc = 0x7F24AA54u;
    // 7F24AA54: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24AA58:
    ctx->pc = 0x7F24AA58u;
    // 7F24AA58: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F24AA5C:
    ctx->pc = 0x7F24AA5Cu;
    // 7F24AA5C: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24AA60:
    ctx->pc = 0x7F24AA60u;
    ctx->downcount -= 5;
    // 7F24AA60: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24AA64:
    ctx->pc = 0x7F24AA64u;
    // 7F24AA64: lfs     f0, 544(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F24AA64u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(544);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24AA68:
    ctx->pc = 0x7F24AA68u;
    // 7F24AA68: lfs     f1, 20848(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24AA68u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20848);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24AA6C:
    ctx->pc = 0x7F24AA6Cu;
    // 7F24AA6C: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24AA6Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F24AA70:
    ctx->pc = 0x7F24AA70u;
    // 7F24AA70: bc    12, 2, 0x7F24AA84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24AA84;
        }
    }

label_7F24AA74:
    ctx->pc = 0x7F24AA74u;
    ctx->downcount -= 4;
    // 7F24AA74: lwz     r3, 460(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(460);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24AA78:
    ctx->pc = 0x7F24AA78u;
    // 7F24AA78: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24AA7C:
    ctx->pc = 0x7F24AA7Cu;
    // 7F24AA7C: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F24AA80:
    ctx->pc = 0x7F24AA80u;
    // 7F24AA80: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24AA84:
    ctx->pc = 0x7F24AA84u;
    ctx->downcount -= 5;
    // 7F24AA84: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F24AA88:
    ctx->pc = 0x7F24AA88u;
    // 7F24AA88: rlwinm r30, r29, 2, 0, 29
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0xFFFFFFFCu;
    }

label_7F24AA8C:
    ctx->pc = 0x7F24AA8Cu;
    // 7F24AA8C: addi    r31, r3, 11700
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(11700);

label_7F24AA90:
    ctx->pc = 0x7F24AA90u;
    // 7F24AA90: lwzx    r3, r31, r30
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[30];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24AA94:
    ctx->pc = 0x7F24AA94u;
    // 7F24AA94: bl      0x7F01ED58
    {
            ctx->lr = 0x7F24AA98u;
            ctx->pc = 0x7F01ED58u;
            return;
    }

label_7F24AA98:
    ctx->pc = 0x7F24AA98u;
    ctx->downcount -= 2;
    // 7F24AA98: cmpwi   r3, 0
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

label_7F24AA9C:
    ctx->pc = 0x7F24AA9Cu;
    // 7F24AA9C: bc    4, 2, 0x7F24AB0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24AB0C;
        }
    }

label_7F24AAA0:
    ctx->pc = 0x7F24AAA0u;
    ctx->downcount -= 3;
    // 7F24AAA0: cmpwi   r29, 3
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

label_7F24AAA4:
    ctx->pc = 0x7F24AAA4u;
    // 7F24AAA4: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F24AAA8:
    ctx->pc = 0x7F24AAA8u;
    // 7F24AAA8: bc    12, 2, 0x7F24AAB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24AAB0;
        }
    }

label_7F24AAAC:
    ctx->pc = 0x7F24AAACu;
    ctx->downcount -= 1;
    // 7F24AAAC: b       0x7F24AAB4
    {
            goto label_7F24AAB4;
    }

label_7F24AAB0:
    ctx->pc = 0x7F24AAB0u;
    ctx->downcount -= 1;
    // 7F24AAB0: li      r0, 2171
    ctx->gpr[0] = (u32)(s32)(2171);

label_7F24AAB4:
    ctx->pc = 0x7F24AAB4u;
    ctx->downcount -= 4;
    // 7F24AAB4: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F24AAB8:
    ctx->pc = 0x7F24AAB8u;
    // 7F24AAB8: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F24AABC:
    ctx->pc = 0x7F24AABCu;
    // 7F24AABC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F24AAC0:
    ctx->pc = 0x7F24AAC0u;
    // 7F24AAC0: bl      0x7F28FEF8
    {
            ctx->lr = 0x7F24AAC4u;
            ctx->pc = 0x7F28FEF8u;
            return;
    }

label_7F24AAC4:
    ctx->pc = 0x7F24AAC4u;
    ctx->downcount -= 4;
    // 7F24AAC4: lwz     r4, 448(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(448);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24AAC8:
    ctx->pc = 0x7F24AAC8u;
    // 7F24AAC8: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F24AACC:
    ctx->pc = 0x7F24AACCu;
    // 7F24AACC: lwz     r5, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24AAD0:
    ctx->pc = 0x7F24AAD0u;
    // 7F24AAD0: bl      0x7F022090
    {
            ctx->lr = 0x7F24AAD4u;
            ctx->pc = 0x7F022090u;
            return;
    }

label_7F24AAD4:
    ctx->pc = 0x7F24AAD4u;
    ctx->downcount -= 4;
    // 7F24AAD4: lwz     r3, 616(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(616);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24AAD8:
    ctx->pc = 0x7F24AAD8u;
    // 7F24AAD8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F24AADC:
    ctx->pc = 0x7F24AADCu;
    // 7F24AADC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24AAE0:
    ctx->pc = 0x7F24AAE0u;
    // 7F24AAE0: bl      0x80051BB0
    {
            ctx->lr = 0x7F24AAE4u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F24AAE4:
    ctx->pc = 0x7F24AAE4u;
    ctx->downcount -= 2;
    // 7F24AAE4: cmpwi   r3, 0
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

label_7F24AAE8:
    ctx->pc = 0x7F24AAE8u;
    // 7F24AAE8: bc    12, 2, 0x7F24B044
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24B044;
        }
    }

label_7F24AAEC:
    ctx->pc = 0x7F24AAECu;
    ctx->downcount -= 5;
    // 7F24AAEC: lwz     r3, 616(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(616);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24AAF0:
    ctx->pc = 0x7F24AAF0u;
    // 7F24AAF0: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F24AAF4:
    ctx->pc = 0x7F24AAF4u;
    // 7F24AAF4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24AAF8:
    ctx->pc = 0x7F24AAF8u;
    // 7F24AAF8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F24AAFC:
    ctx->pc = 0x7F24AAFCu;
    // 7F24AAFC: bl      0x80051688
    {
            ctx->lr = 0x7F24AB00u;
            ctx->pc = 0x80051688u;
            return;
    }

label_7F24AB00:
    ctx->pc = 0x7F24AB00u;
    ctx->downcount -= 3;
    // 7F24AB00: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24AB04:
    ctx->pc = 0x7F24AB04u;
    // 7F24AB04: stw     r0, 616(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(616);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24AB08:
    ctx->pc = 0x7F24AB08u;
    // 7F24AB08: b       0x7F24B044
    {
            goto label_7F24B044;
    }

label_7F24AB0C:
    ctx->pc = 0x7F24AB0Cu;
    ctx->downcount -= 4;
    // 7F24AB0C: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F24AB10:
    ctx->pc = 0x7F24AB10u;
    // 7F24AB10: addi    r4, r1, 136
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(136);

label_7F24AB14:
    ctx->pc = 0x7F24AB14u;
    // 7F24AB14: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F24AB18:
    ctx->pc = 0x7F24AB18u;
    // 7F24AB18: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F24AB1Cu;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F24AB1C:
    ctx->pc = 0x7F24AB1Cu;
    ctx->downcount -= 13;
    // 7F24AB1C: lfs     f2, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24AB1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F24AB20:
    ctx->pc = 0x7F24AB20u;
    // 7F24AB20: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F24AB24:
    ctx->pc = 0x7F24AB24u;
    // 7F24AB24: lfs     f1, 140(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24AB24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24AB28:
    ctx->pc = 0x7F24AB28u;
    // 7F24AB28: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F24AB2C:
    ctx->pc = 0x7F24AB2Cu;
    // 7F24AB2C: lfs     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24AB2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24AB30:
    ctx->pc = 0x7F24AB30u;
    // 7F24AB30: stfs     f2, 280(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24AB30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F24AB34:
    ctx->pc = 0x7F24AB34u;
    // 7F24AB34: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24AB38:
    ctx->pc = 0x7F24AB38u;
    // 7F24AB38: stfs     f1, 284(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24AB38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F24AB3C:
    ctx->pc = 0x7F24AB3Cu;
    // 7F24AB3C: stfs     f0, 288(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24AB3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F24AB40:
    ctx->pc = 0x7F24AB40u;
    // 7F24AB40: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24AB44:
    ctx->pc = 0x7F24AB44u;
    // 7F24AB44: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24AB48:
    ctx->pc = 0x7F24AB48u;
    // 7F24AB48: and.   r0, r0, r28
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[28];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F24AB4C:
    ctx->pc = 0x7F24AB4Cu;
    // 7F24AB4C: bc    4, 2, 0x7F24AB78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24AB78;
        }
    }

label_7F24AB50:
    ctx->pc = 0x7F24AB50u;
    ctx->downcount -= 5;
    // 7F24AB50: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F24AB54:
    ctx->pc = 0x7F24AB54u;
    // 7F24AB54: li      r3, 1024
    ctx->gpr[3] = (u32)(s32)(1024);

label_7F24AB58:
    ctx->pc = 0x7F24AB58u;
    // 7F24AB58: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F24AB5C:
    ctx->pc = 0x7F24AB5Cu;
    // 7F24AB5C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24AB60:
    ctx->pc = 0x7F24AB60u;
    // 7F24AB60: bl      0x7F012018
    {
            ctx->lr = 0x7F24AB64u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F24AB64:
    ctx->pc = 0x7F24AB64u;
    ctx->downcount -= 5;
    // 7F24AB64: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24AB68:
    ctx->pc = 0x7F24AB68u;
    // 7F24AB68: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F24AB6C:
    ctx->pc = 0x7F24AB6Cu;
    // 7F24AB6C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F24AB70:
    ctx->pc = 0x7F24AB70u;
    // 7F24AB70: or.   r0, r4, r0
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

label_7F24AB74:
    ctx->pc = 0x7F24AB74u;
    // 7F24AB74: bc    12, 2, 0x7F24ABDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24ABDC;
        }
    }

label_7F24AB78:
    ctx->pc = 0x7F24AB78u;
    ctx->downcount -= 6;
    // 7F24AB78: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F24AB7C:
    ctx->pc = 0x7F24AB7Cu;
    // 7F24AB7C: cmpwi   r29, 3
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

label_7F24AB80:
    ctx->pc = 0x7F24AB80u;
    // 7F24AB80: addi    r3, r3, 11740
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11740);

label_7F24AB84:
    ctx->pc = 0x7F24AB84u;
    // 7F24AB84: lwzx    r0, r3, r30
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[30];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24AB88:
    ctx->pc = 0x7F24AB88u;
    // 7F24AB88: ori     r23, r0, 0x0100
    ctx->gpr[23] = ctx->gpr[0] | 0x0100u;

label_7F24AB8C:
    ctx->pc = 0x7F24AB8Cu;
    // 7F24AB8C: bc    12, 2, 0x7F24AB94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24AB94;
        }
    }

label_7F24AB90:
    ctx->pc = 0x7F24AB90u;
    ctx->downcount -= 1;
    // 7F24AB90: b       0x7F24ABA8
    {
            goto label_7F24ABA8;
    }

label_7F24AB94:
    ctx->pc = 0x7F24AB94u;
    ctx->downcount -= 4;
    // 7F24AB94: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F24AB98:
    ctx->pc = 0x7F24AB98u;
    // 7F24AB98: lwz     r0, -6216(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6216);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24AB9C:
    ctx->pc = 0x7F24AB9Cu;
    // 7F24AB9C: cmpwi   r0, 3
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

label_7F24ABA0:
    ctx->pc = 0x7F24ABA0u;
    // 7F24ABA0: bc    12, 1, 0x7F24ABA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24ABA8;
        }
    }

label_7F24ABA4:
    ctx->pc = 0x7F24ABA4u;
    ctx->downcount -= 1;
    // 7F24ABA4: ori     r23, r23, 0x0001
    ctx->gpr[23] = ctx->gpr[23] | 0x0001u;

label_7F24ABA8:
    ctx->pc = 0x7F24ABA8u;
    ctx->downcount -= 3;
    // 7F24ABA8: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F24ABAC:
    ctx->pc = 0x7F24ABACu;
    // 7F24ABAC: lfs     f1, 11616(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24ABACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(11616);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24ABB0:
    ctx->pc = 0x7F24ABB0u;
    // 7F24ABB0: bl      0x8000DBEC
    {
            ctx->lr = 0x7F24ABB4u;
            ctx->pc = 0x8000DBECu;
            return;
    }

label_7F24ABB4:
    ctx->pc = 0x7F24ABB4u;
    ctx->downcount -= 9;
    // 7F24ABB4: lwzx    r10, r31, r30
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[30];
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F24ABB8:
    ctx->pc = 0x7F24ABB8u;
    // 7F24ABB8: or   r8, r3, r3
    {
        ctx->gpr[8] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24ABBC:
    ctx->pc = 0x7F24ABBCu;
    // 7F24ABBC: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F24ABC0:
    ctx->pc = 0x7F24ABC0u;
    // 7F24ABC0: addi    r3, r1, 232
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(232);

label_7F24ABC4:
    ctx->pc = 0x7F24ABC4u;
    // 7F24ABC4: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F24ABC8:
    ctx->pc = 0x7F24ABC8u;
    // 7F24ABC8: li      r6, 25
    ctx->gpr[6] = (u32)(s32)(25);

label_7F24ABCC:
    ctx->pc = 0x7F24ABCCu;
    // 7F24ABCC: li      r7, 5
    ctx->gpr[7] = (u32)(s32)(5);

label_7F24ABD0:
    ctx->pc = 0x7F24ABD0u;
    // 7F24ABD0: li      r9, 1000
    ctx->gpr[9] = (u32)(s32)(1000);

label_7F24ABD4:
    ctx->pc = 0x7F24ABD4u;
    // 7F24ABD4: bl      0x7F27727C
    {
            ctx->lr = 0x7F24ABD8u;
            ctx->pc = 0x7F27727Cu;
            return;
    }

label_7F24ABD8:
    ctx->pc = 0x7F24ABD8u;
    ctx->downcount -= 1;
    // 7F24ABD8: b       0x7F24AC28
    {
            goto label_7F24AC28;
    }

label_7F24ABDC:
    ctx->pc = 0x7F24ABDCu;
    ctx->downcount -= 5;
    // 7F24ABDC: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F24ABE0:
    ctx->pc = 0x7F24ABE0u;
    // 7F24ABE0: cmpwi   r29, 3
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

label_7F24ABE4:
    ctx->pc = 0x7F24ABE4u;
    // 7F24ABE4: addi    r3, r3, 11740
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11740);

label_7F24ABE8:
    ctx->pc = 0x7F24ABE8u;
    // 7F24ABE8: lwzx    r4, r3, r30
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24ABEC:
    ctx->pc = 0x7F24ABECu;
    // 7F24ABEC: bc    12, 2, 0x7F24ABF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24ABF4;
        }
    }

label_7F24ABF0:
    ctx->pc = 0x7F24ABF0u;
    ctx->downcount -= 1;
    // 7F24ABF0: b       0x7F24AC08
    {
            goto label_7F24AC08;
    }

label_7F24ABF4:
    ctx->pc = 0x7F24ABF4u;
    ctx->downcount -= 4;
    // 7F24ABF4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F24ABF8:
    ctx->pc = 0x7F24ABF8u;
    // 7F24ABF8: lwz     r0, -6216(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6216);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24ABFC:
    ctx->pc = 0x7F24ABFCu;
    // 7F24ABFC: cmpwi   r0, 3
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

label_7F24AC00:
    ctx->pc = 0x7F24AC00u;
    // 7F24AC00: bc    12, 1, 0x7F24AC08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24AC08;
        }
    }

label_7F24AC04:
    ctx->pc = 0x7F24AC04u;
    ctx->downcount -= 1;
    // 7F24AC04: ori     r4, r4, 0x0001
    ctx->gpr[4] = ctx->gpr[4] | 0x0001u;

label_7F24AC08:
    ctx->pc = 0x7F24AC08u;
    ctx->downcount -= 8;
    // 7F24AC08: lwzx    r10, r31, r30
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[30];
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F24AC0C:
    ctx->pc = 0x7F24AC0Cu;
    // 7F24AC0C: addi    r3, r1, 232
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(232);

label_7F24AC10:
    ctx->pc = 0x7F24AC10u;
    // 7F24AC10: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F24AC14:
    ctx->pc = 0x7F24AC14u;
    // 7F24AC14: li      r6, 25
    ctx->gpr[6] = (u32)(s32)(25);

label_7F24AC18:
    ctx->pc = 0x7F24AC18u;
    // 7F24AC18: li      r7, 5
    ctx->gpr[7] = (u32)(s32)(5);

label_7F24AC1C:
    ctx->pc = 0x7F24AC1Cu;
    // 7F24AC1C: li      r8, 20000
    ctx->gpr[8] = (u32)(s32)(20000);

label_7F24AC20:
    ctx->pc = 0x7F24AC20u;
    // 7F24AC20: li      r9, 1000
    ctx->gpr[9] = (u32)(s32)(1000);

label_7F24AC24:
    ctx->pc = 0x7F24AC24u;
    // 7F24AC24: bl      0x7F27727C
    {
            ctx->lr = 0x7F24AC28u;
            ctx->pc = 0x7F27727Cu;
            return;
    }

label_7F24AC28:
    ctx->pc = 0x7F24AC28u;
    ctx->downcount -= 3;
    // 7F24AC28: lwz     r0, 576(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(576);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24AC2C:
    ctx->pc = 0x7F24AC2Cu;
    // 7F24AC2C: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24AC30:
    ctx->pc = 0x7F24AC30u;
    // 7F24AC30: bc    12, 2, 0x7F24AC48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24AC48;
        }
    }

label_7F24AC34:
    ctx->pc = 0x7F24AC34u;
    ctx->downcount -= 4;
    // 7F24AC34: lwz     r4, 448(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(448);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24AC38:
    ctx->pc = 0x7F24AC38u;
    // 7F24AC38: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F24AC3C:
    ctx->pc = 0x7F24AC3Cu;
    // 7F24AC3C: lwz     r5, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24AC40:
    ctx->pc = 0x7F24AC40u;
    // 7F24AC40: bl      0x7F022090
    {
            ctx->lr = 0x7F24AC44u;
            ctx->pc = 0x7F022090u;
            return;
    }

label_7F24AC44:
    ctx->pc = 0x7F24AC44u;
    ctx->downcount -= 1;
    // 7F24AC44: b       0x7F24AC58
    {
            goto label_7F24AC58;
    }

label_7F24AC48:
    ctx->pc = 0x7F24AC48u;
    ctx->downcount -= 4;
    // 7F24AC48: lwz     r4, 448(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(448);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24AC4C:
    ctx->pc = 0x7F24AC4Cu;
    // 7F24AC4C: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F24AC50:
    ctx->pc = 0x7F24AC50u;
    // 7F24AC50: lwz     r5, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24AC54:
    ctx->pc = 0x7F24AC54u;
    // 7F24AC54: bl      0x7F022090
    {
            ctx->lr = 0x7F24AC58u;
            ctx->pc = 0x7F022090u;
            return;
    }

label_7F24AC58:
    ctx->pc = 0x7F24AC58u;
    ctx->downcount -= 2;
    // 7F24AC58: cmplwi  r29, 0x0009
    {
        u32 val_a = (u32)(ctx->gpr[29]);
        u32 val_b = (u32)(0x0009u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24AC5C:
    ctx->pc = 0x7F24AC5Cu;
    // 7F24AC5C: bc    12, 1, 0x7F24AF24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24AF24;
        }
    }

label_7F24AC60:
    ctx->pc = 0x7F24AC60u;
    ctx->downcount -= 7;
    // 7F24AC60: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F24AC64:
    ctx->pc = 0x7F24AC64u;
    // 7F24AC64: rlwinm r0, r29, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0xFFFFFFFCu;
    }

label_7F24AC68:
    ctx->pc = 0x7F24AC68u;
    // 7F24AC68: addi    r3, r3, 12152
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12152);

label_7F24AC6C:
    ctx->pc = 0x7F24AC6Cu;
    // 7F24AC6C: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24AC70:
    ctx->pc = 0x7F24AC70u;
    // 7F24AC70: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F24AC74:
    ctx->pc = 0x7F24AC74u;
    // 7F24AC74: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F24AC78:
    ctx->pc = 0x7F24AC78u;
    ctx->downcount -= 7;
    // 7F24AC78: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F24AC7C:
    ctx->pc = 0x7F24AC7Cu;
    // 7F24AC7C: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F24AC80:
    ctx->pc = 0x7F24AC80u;
    // 7F24AC80: stw     r0, 484(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24AC84:
    ctx->pc = 0x7F24AC84u;
    // 7F24AC84: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F24AC88:
    ctx->pc = 0x7F24AC88u;
    // 7F24AC88: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F24AC8C:
    ctx->pc = 0x7F24AC8Cu;
    // 7F24AC8C: stw     r0, 524(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(524);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24AC90:
    ctx->pc = 0x7F24AC90u;
    // 7F24AC90: bl      0x7F28FEF8
    {
            ctx->lr = 0x7F24AC94u;
            ctx->pc = 0x7F28FEF8u;
            return;
    }

label_7F24AC94:
    ctx->pc = 0x7F24AC94u;
    ctx->downcount -= 7;
    // 7F24AC94: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F24AC98:
    ctx->pc = 0x7F24AC98u;
    // 7F24AC98: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24AC9C:
    ctx->pc = 0x7F24AC9Cu;
    // 7F24AC9C: addi    r5, r4, -8600
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-8600);

label_7F24ACA0:
    ctx->pc = 0x7F24ACA0u;
    // 7F24ACA0: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F24ACA4:
    ctx->pc = 0x7F24ACA4u;
    // 7F24ACA4: lbz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F24ACA8:
    ctx->pc = 0x7F24ACA8u;
    // 7F24ACA8: extsb r5, r5
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_7F24ACAC:
    ctx->pc = 0x7F24ACACu;
    // 7F24ACAC: bl      0x7F260494
    {
            ctx->lr = 0x7F24ACB0u;
            ctx->pc = 0x7F260494u;
            return;
    }

label_7F24ACB0:
    ctx->pc = 0x7F24ACB0u;
    ctx->downcount -= 5;
    // 7F24ACB0: lwz     r4, 452(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(452);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24ACB4:
    ctx->pc = 0x7F24ACB4u;
    // 7F24ACB4: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24ACB8:
    ctx->pc = 0x7F24ACB8u;
    // 7F24ACB8: lwz     r5, 448(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(448);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24ACBC:
    ctx->pc = 0x7F24ACBCu;
    // 7F24ACBC: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24ACC0:
    ctx->pc = 0x7F24ACC0u;
    // 7F24ACC0: bl      0x7F26E308
    {
            ctx->lr = 0x7F24ACC4u;
            ctx->pc = 0x7F26E308u;
            return;
    }

label_7F24ACC4:
    ctx->pc = 0x7F24ACC4u;
    ctx->downcount -= 1;
    // 7F24ACC4: b       0x7F24AF80
    {
            goto label_7F24AF80;
    }

label_7F24ACC8:
    ctx->pc = 0x7F24ACC8u;
    ctx->downcount -= 7;
    // 7F24ACC8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F24ACCC:
    ctx->pc = 0x7F24ACCCu;
    // 7F24ACCC: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F24ACD0:
    ctx->pc = 0x7F24ACD0u;
    // 7F24ACD0: stw     r0, 484(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24ACD4:
    ctx->pc = 0x7F24ACD4u;
    // 7F24ACD4: li      r3, 170
    ctx->gpr[3] = (u32)(s32)(170);

label_7F24ACD8:
    ctx->pc = 0x7F24ACD8u;
    // 7F24ACD8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F24ACDC:
    ctx->pc = 0x7F24ACDCu;
    // 7F24ACDC: stw     r0, 524(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(524);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24ACE0:
    ctx->pc = 0x7F24ACE0u;
    // 7F24ACE0: bl      0x7F28FEF8
    {
            ctx->lr = 0x7F24ACE4u;
            ctx->pc = 0x7F28FEF8u;
            return;
    }

label_7F24ACE4:
    ctx->pc = 0x7F24ACE4u;
    ctx->downcount -= 7;
    // 7F24ACE4: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F24ACE8:
    ctx->pc = 0x7F24ACE8u;
    // 7F24ACE8: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24ACEC:
    ctx->pc = 0x7F24ACECu;
    // 7F24ACEC: addi    r5, r4, -8600
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-8600);

label_7F24ACF0:
    ctx->pc = 0x7F24ACF0u;
    // 7F24ACF0: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_7F24ACF4:
    ctx->pc = 0x7F24ACF4u;
    // 7F24ACF4: lbz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F24ACF8:
    ctx->pc = 0x7F24ACF8u;
    // 7F24ACF8: extsb r5, r5
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_7F24ACFC:
    ctx->pc = 0x7F24ACFCu;
    // 7F24ACFC: bl      0x7F260494
    {
            ctx->lr = 0x7F24AD00u;
            ctx->pc = 0x7F260494u;
            return;
    }

label_7F24AD00:
    ctx->pc = 0x7F24AD00u;
    ctx->downcount -= 5;
    // 7F24AD00: lwz     r4, 452(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(452);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24AD04:
    ctx->pc = 0x7F24AD04u;
    // 7F24AD04: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24AD08:
    ctx->pc = 0x7F24AD08u;
    // 7F24AD08: lwz     r5, 448(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(448);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24AD0C:
    ctx->pc = 0x7F24AD0Cu;
    // 7F24AD0C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24AD10:
    ctx->pc = 0x7F24AD10u;
    // 7F24AD10: bl      0x7F26E308
    {
            ctx->lr = 0x7F24AD14u;
            ctx->pc = 0x7F26E308u;
            return;
    }

label_7F24AD14:
    ctx->pc = 0x7F24AD14u;
    ctx->downcount -= 1;
    // 7F24AD14: b       0x7F24AF80
    {
            goto label_7F24AF80;
    }

label_7F24AD18:
    ctx->pc = 0x7F24AD18u;
    ctx->downcount -= 7;
    // 7F24AD18: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F24AD1C:
    ctx->pc = 0x7F24AD1Cu;
    // 7F24AD1C: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F24AD20:
    ctx->pc = 0x7F24AD20u;
    // 7F24AD20: stw     r0, 484(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24AD24:
    ctx->pc = 0x7F24AD24u;
    // 7F24AD24: li      r3, 82
    ctx->gpr[3] = (u32)(s32)(82);

label_7F24AD28:
    ctx->pc = 0x7F24AD28u;
    // 7F24AD28: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F24AD2C:
    ctx->pc = 0x7F24AD2Cu;
    // 7F24AD2C: stw     r0, 524(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(524);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24AD30:
    ctx->pc = 0x7F24AD30u;
    // 7F24AD30: bl      0x7F28FEF8
    {
            ctx->lr = 0x7F24AD34u;
            ctx->pc = 0x7F28FEF8u;
            return;
    }

label_7F24AD34:
    ctx->pc = 0x7F24AD34u;
    ctx->downcount -= 1;
    // 7F24AD34: b       0x7F24AF80
    {
            goto label_7F24AF80;
    }

label_7F24AD38:
    ctx->pc = 0x7F24AD38u;
    ctx->downcount -= 10;
    // 7F24AD38: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F24AD3C:
    ctx->pc = 0x7F24AD3Cu;
    // 7F24AD3C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F24AD40:
    ctx->pc = 0x7F24AD40u;
    // 7F24AD40: stw     r0, 484(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24AD44:
    ctx->pc = 0x7F24AD44u;
    // 7F24AD44: addi    r5, r3, -8600
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-8600);

label_7F24AD48:
    ctx->pc = 0x7F24AD48u;
    // 7F24AD48: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24AD4C:
    ctx->pc = 0x7F24AD4Cu;
    // 7F24AD4C: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F24AD50:
    ctx->pc = 0x7F24AD50u;
    // 7F24AD50: stw     r0, 524(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(524);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24AD54:
    ctx->pc = 0x7F24AD54u;
    // 7F24AD54: lbz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F24AD58:
    ctx->pc = 0x7F24AD58u;
    // 7F24AD58: extsb r5, r5
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_7F24AD5C:
    ctx->pc = 0x7F24AD5Cu;
    // 7F24AD5C: bl      0x7F260850
    {
            ctx->lr = 0x7F24AD60u;
            ctx->pc = 0x7F260850u;
            return;
    }

label_7F24AD60:
    ctx->pc = 0x7F24AD60u;
    ctx->downcount -= 5;
    // 7F24AD60: lwz     r4, 452(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(452);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24AD64:
    ctx->pc = 0x7F24AD64u;
    // 7F24AD64: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24AD68:
    ctx->pc = 0x7F24AD68u;
    // 7F24AD68: lwz     r5, 448(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(448);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24AD6C:
    ctx->pc = 0x7F24AD6Cu;
    // 7F24AD6C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24AD70:
    ctx->pc = 0x7F24AD70u;
    // 7F24AD70: bl      0x7F26E52C
    {
            ctx->lr = 0x7F24AD74u;
            ctx->pc = 0x7F26E52Cu;
            return;
    }

label_7F24AD74:
    ctx->pc = 0x7F24AD74u;
    ctx->downcount -= 4;
    // 7F24AD74: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F24AD78:
    ctx->pc = 0x7F24AD78u;
    // 7F24AD78: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F24AD7C:
    ctx->pc = 0x7F24AD7Cu;
    // 7F24AD7C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F24AD80:
    ctx->pc = 0x7F24AD80u;
    // 7F24AD80: bl      0x7F28FEF8
    {
            ctx->lr = 0x7F24AD84u;
            ctx->pc = 0x7F28FEF8u;
            return;
    }

label_7F24AD84:
    ctx->pc = 0x7F24AD84u;
    ctx->downcount -= 1;
    // 7F24AD84: b       0x7F24AF80
    {
            goto label_7F24AF80;
    }

label_7F24AD88:
    ctx->pc = 0x7F24AD88u;
    ctx->downcount -= 7;
    // 7F24AD88: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F24AD8C:
    ctx->pc = 0x7F24AD8Cu;
    // 7F24AD8C: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24AD90:
    ctx->pc = 0x7F24AD90u;
    // 7F24AD90: stw     r0, 484(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24AD94:
    ctx->pc = 0x7F24AD94u;
    // 7F24AD94: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_7F24AD98:
    ctx->pc = 0x7F24AD98u;
    // 7F24AD98: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24AD9C:
    ctx->pc = 0x7F24AD9Cu;
    // 7F24AD9C: stw     r0, 524(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(524);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24ADA0:
    ctx->pc = 0x7F24ADA0u;
    // 7F24ADA0: bl      0x7F260850
    {
            ctx->lr = 0x7F24ADA4u;
            ctx->pc = 0x7F260850u;
            return;
    }

label_7F24ADA4:
    ctx->pc = 0x7F24ADA4u;
    ctx->downcount -= 5;
    // 7F24ADA4: lwz     r4, 452(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(452);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24ADA8:
    ctx->pc = 0x7F24ADA8u;
    // 7F24ADA8: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24ADAC:
    ctx->pc = 0x7F24ADACu;
    // 7F24ADAC: lwz     r5, 448(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(448);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24ADB0:
    ctx->pc = 0x7F24ADB0u;
    // 7F24ADB0: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24ADB4:
    ctx->pc = 0x7F24ADB4u;
    // 7F24ADB4: bl      0x7F26E52C
    {
            ctx->lr = 0x7F24ADB8u;
            ctx->pc = 0x7F26E52Cu;
            return;
    }

label_7F24ADB8:
    ctx->pc = 0x7F24ADB8u;
    ctx->downcount -= 4;
    // 7F24ADB8: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F24ADBC:
    ctx->pc = 0x7F24ADBCu;
    // 7F24ADBC: li      r3, 170
    ctx->gpr[3] = (u32)(s32)(170);

label_7F24ADC0:
    ctx->pc = 0x7F24ADC0u;
    // 7F24ADC0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F24ADC4:
    ctx->pc = 0x7F24ADC4u;
    // 7F24ADC4: bl      0x7F28FEF8
    {
            ctx->lr = 0x7F24ADC8u;
            ctx->pc = 0x7F28FEF8u;
            return;
    }

label_7F24ADC8:
    ctx->pc = 0x7F24ADC8u;
    ctx->downcount -= 1;
    // 7F24ADC8: b       0x7F24AF80
    {
            goto label_7F24AF80;
    }

label_7F24ADCC:
    ctx->pc = 0x7F24ADCCu;
    ctx->downcount -= 10;
    // 7F24ADCC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F24ADD0:
    ctx->pc = 0x7F24ADD0u;
    // 7F24ADD0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F24ADD4:
    ctx->pc = 0x7F24ADD4u;
    // 7F24ADD4: stw     r0, 484(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24ADD8:
    ctx->pc = 0x7F24ADD8u;
    // 7F24ADD8: addi    r5, r3, -8600
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-8600);

label_7F24ADDC:
    ctx->pc = 0x7F24ADDCu;
    // 7F24ADDC: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24ADE0:
    ctx->pc = 0x7F24ADE0u;
    // 7F24ADE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F24ADE4:
    ctx->pc = 0x7F24ADE4u;
    // 7F24ADE4: stw     r0, 524(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(524);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24ADE8:
    ctx->pc = 0x7F24ADE8u;
    // 7F24ADE8: lbz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F24ADEC:
    ctx->pc = 0x7F24ADECu;
    // 7F24ADEC: extsb r5, r5
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_7F24ADF0:
    ctx->pc = 0x7F24ADF0u;
    // 7F24ADF0: bl      0x7F260C78
    {
            ctx->lr = 0x7F24ADF4u;
            ctx->pc = 0x7F260C78u;
            return;
    }

label_7F24ADF4:
    ctx->pc = 0x7F24ADF4u;
    ctx->downcount -= 5;
    // 7F24ADF4: lwz     r4, 452(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(452);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24ADF8:
    ctx->pc = 0x7F24ADF8u;
    // 7F24ADF8: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24ADFC:
    ctx->pc = 0x7F24ADFCu;
    // 7F24ADFC: lwz     r5, 448(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(448);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24AE00:
    ctx->pc = 0x7F24AE00u;
    // 7F24AE00: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24AE04:
    ctx->pc = 0x7F24AE04u;
    // 7F24AE04: bl      0x7F26EB38
    {
            ctx->lr = 0x7F24AE08u;
            ctx->pc = 0x7F26EB38u;
            return;
    }

label_7F24AE08:
    ctx->pc = 0x7F24AE08u;
    ctx->downcount -= 4;
    // 7F24AE08: lwz     r3, 616(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(616);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24AE0C:
    ctx->pc = 0x7F24AE0Cu;
    // 7F24AE0C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F24AE10:
    ctx->pc = 0x7F24AE10u;
    // 7F24AE10: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24AE14:
    ctx->pc = 0x7F24AE14u;
    // 7F24AE14: bl      0x80051BB0
    {
            ctx->lr = 0x7F24AE18u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F24AE18:
    ctx->pc = 0x7F24AE18u;
    ctx->downcount -= 2;
    // 7F24AE18: cmpwi   r3, 0
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

label_7F24AE1C:
    ctx->pc = 0x7F24AE1Cu;
    // 7F24AE1C: bc    4, 2, 0x7F24AE34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24AE34;
        }
    }

label_7F24AE20:
    ctx->pc = 0x7F24AE20u;
    ctx->downcount -= 4;
    // 7F24AE20: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F24AE24:
    ctx->pc = 0x7F24AE24u;
    // 7F24AE24: li      r3, 2156
    ctx->gpr[3] = (u32)(s32)(2156);

label_7F24AE28:
    ctx->pc = 0x7F24AE28u;
    // 7F24AE28: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F24AE2C:
    ctx->pc = 0x7F24AE2Cu;
    // 7F24AE2C: bl      0x7F28FEF8
    {
            ctx->lr = 0x7F24AE30u;
            ctx->pc = 0x7F28FEF8u;
            return;
    }

label_7F24AE30:
    ctx->pc = 0x7F24AE30u;
    ctx->downcount -= 1;
    // 7F24AE30: stw     r3, 616(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(616);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F24AE34:
    ctx->pc = 0x7F24AE34u;
    ctx->downcount -= 6;
    // 7F24AE34: lwz     r3, 616(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(616);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24AE38:
    ctx->pc = 0x7F24AE38u;
    // 7F24AE38: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F24AE3C:
    ctx->pc = 0x7F24AE3Cu;
    // 7F24AE3C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F24AE40:
    ctx->pc = 0x7F24AE40u;
    // 7F24AE40: li      r6, 5
    ctx->gpr[6] = (u32)(s32)(5);

label_7F24AE44:
    ctx->pc = 0x7F24AE44u;
    // 7F24AE44: li      r7, 100
    ctx->gpr[7] = (u32)(s32)(100);

label_7F24AE48:
    ctx->pc = 0x7F24AE48u;
    // 7F24AE48: bl      0x7F176740
    {
            ctx->lr = 0x7F24AE4Cu;
            ctx->pc = 0x7F176740u;
            return;
    }

label_7F24AE4C:
    ctx->pc = 0x7F24AE4Cu;
    ctx->downcount -= 1;
    // 7F24AE4C: b       0x7F24AF80
    {
            goto label_7F24AF80;
    }

label_7F24AE50:
    ctx->pc = 0x7F24AE50u;
    ctx->downcount -= 7;
    // 7F24AE50: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F24AE54:
    ctx->pc = 0x7F24AE54u;
    // 7F24AE54: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24AE58:
    ctx->pc = 0x7F24AE58u;
    // 7F24AE58: addi    r5, r4, -8600
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-8600);

label_7F24AE5C:
    ctx->pc = 0x7F24AE5Cu;
    // 7F24AE5C: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F24AE60:
    ctx->pc = 0x7F24AE60u;
    // 7F24AE60: lbz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F24AE64:
    ctx->pc = 0x7F24AE64u;
    // 7F24AE64: extsb r5, r5
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_7F24AE68:
    ctx->pc = 0x7F24AE68u;
    // 7F24AE68: bl      0x7F263584
    {
            ctx->lr = 0x7F24AE6Cu;
            ctx->pc = 0x7F263584u;
            return;
    }

label_7F24AE6C:
    ctx->pc = 0x7F24AE6Cu;
    ctx->downcount -= 5;
    // 7F24AE6C: lwz     r4, 452(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(452);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24AE70:
    ctx->pc = 0x7F24AE70u;
    // 7F24AE70: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24AE74:
    ctx->pc = 0x7F24AE74u;
    // 7F24AE74: lwz     r5, 448(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(448);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24AE78:
    ctx->pc = 0x7F24AE78u;
    // 7F24AE78: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24AE7C:
    ctx->pc = 0x7F24AE7Cu;
    // 7F24AE7C: bl      0x7F26FCA0
    {
            ctx->lr = 0x7F24AE80u;
            ctx->pc = 0x7F26FCA0u;
            return;
    }

label_7F24AE80:
    ctx->pc = 0x7F24AE80u;
    ctx->downcount -= 4;
    // 7F24AE80: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F24AE84:
    ctx->pc = 0x7F24AE84u;
    // 7F24AE84: li      r3, 167
    ctx->gpr[3] = (u32)(s32)(167);

label_7F24AE88:
    ctx->pc = 0x7F24AE88u;
    // 7F24AE88: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F24AE8C:
    ctx->pc = 0x7F24AE8Cu;
    // 7F24AE8C: bl      0x7F28FEF8
    {
            ctx->lr = 0x7F24AE90u;
            ctx->pc = 0x7F28FEF8u;
            return;
    }

label_7F24AE90:
    ctx->pc = 0x7F24AE90u;
    ctx->downcount -= 1;
    // 7F24AE90: b       0x7F24AF80
    {
            goto label_7F24AF80;
    }

label_7F24AE94:
    ctx->pc = 0x7F24AE94u;
    ctx->downcount -= 4;
    // 7F24AE94: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24AE98:
    ctx->pc = 0x7F24AE98u;
    // 7F24AE98: ori     r4, r26, 0x0040
    ctx->gpr[4] = ctx->gpr[26] | 0x0040u;

label_7F24AE9C:
    ctx->pc = 0x7F24AE9Cu;
    // 7F24AE9C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24AEA0:
    ctx->pc = 0x7F24AEA0u;
    // 7F24AEA0: bl      0x7F263584
    {
            ctx->lr = 0x7F24AEA4u;
            ctx->pc = 0x7F263584u;
            return;
    }

label_7F24AEA4:
    ctx->pc = 0x7F24AEA4u;
    ctx->downcount -= 5;
    // 7F24AEA4: lwz     r4, 452(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(452);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24AEA8:
    ctx->pc = 0x7F24AEA8u;
    // 7F24AEA8: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24AEAC:
    ctx->pc = 0x7F24AEACu;
    // 7F24AEAC: lwz     r5, 448(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(448);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24AEB0:
    ctx->pc = 0x7F24AEB0u;
    // 7F24AEB0: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24AEB4:
    ctx->pc = 0x7F24AEB4u;
    // 7F24AEB4: bl      0x7F26FCA0
    {
            ctx->lr = 0x7F24AEB8u;
            ctx->pc = 0x7F26FCA0u;
            return;
    }

label_7F24AEB8:
    ctx->pc = 0x7F24AEB8u;
    ctx->downcount -= 4;
    // 7F24AEB8: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F24AEBC:
    ctx->pc = 0x7F24AEBCu;
    // 7F24AEBC: li      r3, 168
    ctx->gpr[3] = (u32)(s32)(168);

label_7F24AEC0:
    ctx->pc = 0x7F24AEC0u;
    // 7F24AEC0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F24AEC4:
    ctx->pc = 0x7F24AEC4u;
    // 7F24AEC4: bl      0x7F28FEF8
    {
            ctx->lr = 0x7F24AEC8u;
            ctx->pc = 0x7F28FEF8u;
            return;
    }

label_7F24AEC8:
    ctx->pc = 0x7F24AEC8u;
    ctx->downcount -= 1;
    // 7F24AEC8: b       0x7F24AF80
    {
            goto label_7F24AF80;
    }

label_7F24AECC:
    ctx->pc = 0x7F24AECCu;
    ctx->downcount -= 7;
    // 7F24AECC: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F24AED0:
    ctx->pc = 0x7F24AED0u;
    // 7F24AED0: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24AED4:
    ctx->pc = 0x7F24AED4u;
    // 7F24AED4: addi    r5, r4, -8600
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-8600);

label_7F24AED8:
    ctx->pc = 0x7F24AED8u;
    // 7F24AED8: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F24AEDC:
    ctx->pc = 0x7F24AEDCu;
    // 7F24AEDC: lbz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F24AEE0:
    ctx->pc = 0x7F24AEE0u;
    // 7F24AEE0: extsb r5, r5
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_7F24AEE4:
    ctx->pc = 0x7F24AEE4u;
    // 7F24AEE4: bl      0x7F261FB4
    {
            ctx->lr = 0x7F24AEE8u;
            ctx->pc = 0x7F261FB4u;
            return;
    }

label_7F24AEE8:
    ctx->pc = 0x7F24AEE8u;
    ctx->downcount -= 5;
    // 7F24AEE8: lwz     r4, 452(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(452);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24AEEC:
    ctx->pc = 0x7F24AEECu;
    // 7F24AEEC: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24AEF0:
    ctx->pc = 0x7F24AEF0u;
    // 7F24AEF0: lwz     r5, 448(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(448);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24AEF4:
    ctx->pc = 0x7F24AEF4u;
    // 7F24AEF4: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24AEF8:
    ctx->pc = 0x7F24AEF8u;
    // 7F24AEF8: bl      0x7F26F494
    {
            ctx->lr = 0x7F24AEFCu;
            ctx->pc = 0x7F26F494u;
            return;
    }

label_7F24AEFC:
    ctx->pc = 0x7F24AEFCu;
    ctx->downcount -= 4;
    // 7F24AEFC: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F24AF00:
    ctx->pc = 0x7F24AF00u;
    // 7F24AF00: li      r3, 169
    ctx->gpr[3] = (u32)(s32)(169);

label_7F24AF04:
    ctx->pc = 0x7F24AF04u;
    // 7F24AF04: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F24AF08:
    ctx->pc = 0x7F24AF08u;
    // 7F24AF08: bl      0x7F28FEF8
    {
            ctx->lr = 0x7F24AF0Cu;
            ctx->pc = 0x7F28FEF8u;
            return;
    }

label_7F24AF0C:
    ctx->pc = 0x7F24AF0Cu;
    ctx->downcount -= 1;
    // 7F24AF0C: b       0x7F24AF80
    {
            goto label_7F24AF80;
    }

label_7F24AF10:
    ctx->pc = 0x7F24AF10u;
    ctx->downcount -= 4;
    // 7F24AF10: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F24AF14:
    ctx->pc = 0x7F24AF14u;
    // 7F24AF14: li      r3, 82
    ctx->gpr[3] = (u32)(s32)(82);

label_7F24AF18:
    ctx->pc = 0x7F24AF18u;
    // 7F24AF18: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F24AF1C:
    ctx->pc = 0x7F24AF1Cu;
    // 7F24AF1C: bl      0x7F28FEF8
    {
            ctx->lr = 0x7F24AF20u;
            ctx->pc = 0x7F28FEF8u;
            return;
    }

label_7F24AF20:
    ctx->pc = 0x7F24AF20u;
    ctx->downcount -= 1;
    // 7F24AF20: b       0x7F24AF80
    {
            goto label_7F24AF80;
    }

label_7F24AF24:
    ctx->pc = 0x7F24AF24u;
    ctx->downcount -= 5;
    // 7F24AF24: li      r4, 2048
    ctx->gpr[4] = (u32)(s32)(2048);

label_7F24AF28:
    ctx->pc = 0x7F24AF28u;
    // 7F24AF28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F24AF2C:
    ctx->pc = 0x7F24AF2Cu;
    // 7F24AF2C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F24AF30:
    ctx->pc = 0x7F24AF30u;
    // 7F24AF30: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24AF34:
    ctx->pc = 0x7F24AF34u;
    // 7F24AF34: bl      0x7F012018
    {
            ctx->lr = 0x7F24AF38u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F24AF38:
    ctx->pc = 0x7F24AF38u;
    ctx->downcount -= 5;
    // 7F24AF38: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24AF3C:
    ctx->pc = 0x7F24AF3Cu;
    // 7F24AF3C: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F24AF40:
    ctx->pc = 0x7F24AF40u;
    // 7F24AF40: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F24AF44:
    ctx->pc = 0x7F24AF44u;
    // 7F24AF44: or.   r0, r4, r0
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

label_7F24AF48:
    ctx->pc = 0x7F24AF48u;
    // 7F24AF48: bc    12, 2, 0x7F24AF80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24AF80;
        }
    }

label_7F24AF4C:
    ctx->pc = 0x7F24AF4Cu;
    ctx->downcount -= 5;
    // 7F24AF4C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24AF50:
    ctx->pc = 0x7F24AF50u;
    // 7F24AF50: lfs     f0, 544(r24)
    if (!ppc_fp_available_inline(ctx, 0x7F24AF50u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(544);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24AF54:
    ctx->pc = 0x7F24AF54u;
    // 7F24AF54: lfs     f1, 20848(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24AF54u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20848);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24AF58:
    ctx->pc = 0x7F24AF58u;
    // 7F24AF58: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24AF58u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F24AF5C:
    ctx->pc = 0x7F24AF5Cu;
    // 7F24AF5C: bc    12, 2, 0x7F24AF80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24AF80;
        }
    }

label_7F24AF60:
    ctx->pc = 0x7F24AF60u;
    ctx->downcount -= 8;
    // 7F24AF60: lwz     r3, 456(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(456);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24AF64:
    ctx->pc = 0x7F24AF64u;
    // 7F24AF64: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24AF68:
    ctx->pc = 0x7F24AF68u;
    // 7F24AF68: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F24AF6C:
    ctx->pc = 0x7F24AF6Cu;
    // 7F24AF6C: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24AF70:
    ctx->pc = 0x7F24AF70u;
    // 7F24AF70: lwz     r3, 460(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(460);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24AF74:
    ctx->pc = 0x7F24AF74u;
    // 7F24AF74: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24AF78:
    ctx->pc = 0x7F24AF78u;
    // 7F24AF78: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F24AF7C:
    ctx->pc = 0x7F24AF7Cu;
    // 7F24AF7C: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24AF80:
    ctx->pc = 0x7F24AF80u;
    ctx->downcount -= 4;
    // 7F24AF80: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F24AF84:
    ctx->pc = 0x7F24AF84u;
    // 7F24AF84: addi    r4, r1, 136
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(136);

label_7F24AF88:
    ctx->pc = 0x7F24AF88u;
    // 7F24AF88: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F24AF8C:
    ctx->pc = 0x7F24AF8Cu;
    // 7F24AF8C: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F24AF90u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F24AF90:
    ctx->pc = 0x7F24AF90u;
    ctx->downcount -= 3;
    // 7F24AF90: lwzx    r3, r31, r30
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[30];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24AF94:
    ctx->pc = 0x7F24AF94u;
    // 7F24AF94: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F24AF98:
    ctx->pc = 0x7F24AF98u;
    // 7F24AF98: bl      0x7F01EC24
    {
            ctx->lr = 0x7F24AF9Cu;
            ctx->pc = 0x7F01EC24u;
            return;
    }

label_7F24AF9C:
    ctx->pc = 0x7F24AF9Cu;
    ctx->downcount -= 9;
    // 7F24AF9C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F24AFA0:
    ctx->pc = 0x7F24AFA0u;
    // 7F24AFA0: addi    r5, r3, 13880
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F24AFA4:
    ctx->pc = 0x7F24AFA4u;
    // 7F24AFA4: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24AFA8:
    ctx->pc = 0x7F24AFA8u;
    // 7F24AFA8: lha     r3, 360(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(360);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F24AFAC:
    ctx->pc = 0x7F24AFACu;
    // 7F24AFAC: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F24AFB0:
    ctx->pc = 0x7F24AFB0u;
    // 7F24AFB0: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F24AFB4:
    ctx->pc = 0x7F24AFB4u;
    // 7F24AFB4: sth     r3, 360(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(360);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F24AFB8:
    ctx->pc = 0x7F24AFB8u;
    // 7F24AFB8: cmpwi   r0, 30000
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(30000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24AFBC:
    ctx->pc = 0x7F24AFBCu;
    // 7F24AFBC: bc    4, 1, 0x7F24AFCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24AFCC;
        }
    }

label_7F24AFC0:
    ctx->pc = 0x7F24AFC0u;
    ctx->downcount -= 3;
    // 7F24AFC0: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24AFC4:
    ctx->pc = 0x7F24AFC4u;
    // 7F24AFC4: li      r0, 30000
    ctx->gpr[0] = (u32)(s32)(30000);

label_7F24AFC8:
    ctx->pc = 0x7F24AFC8u;
    // 7F24AFC8: sth     r0, 360(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(360);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F24AFCC:
    ctx->pc = 0x7F24AFCCu;
    ctx->downcount -= 1;
    // 7F24AFCC: bl      0x7F28F6AC
    {
            ctx->lr = 0x7F24AFD0u;
            ctx->pc = 0x7F28F6ACu;
            return;
    }

label_7F24AFD0:
    ctx->pc = 0x7F24AFD0u;
    ctx->downcount -= 2;
    // 7F24AFD0: cmpwi   r3, 0
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

label_7F24AFD4:
    ctx->pc = 0x7F24AFD4u;
    // 7F24AFD4: bc    4, 2, 0x7F24B044
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24B044;
        }
    }

label_7F24AFD8:
    ctx->pc = 0x7F24AFD8u;
    ctx->downcount -= 3;
    // 7F24AFD8: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_7F24AFDC:
    ctx->pc = 0x7F24AFDCu;
    // 7F24AFDC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F24AFE0:
    ctx->pc = 0x7F24AFE0u;
    // 7F24AFE0: bl      0x7F01EBD8
    {
            ctx->lr = 0x7F24AFE4u;
            ctx->pc = 0x7F01EBD8u;
            return;
    }

label_7F24AFE4:
    ctx->pc = 0x7F24AFE4u;
    ctx->downcount -= 1;
    // 7F24AFE4: b       0x7F24B044
    {
            goto label_7F24B044;
    }

label_7F24AFE8:
    ctx->pc = 0x7F24AFE8u;
    ctx->downcount -= 4;
    // 7F24AFE8: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F24AFEC:
    ctx->pc = 0x7F24AFECu;
    // 7F24AFEC: stw     r0, 588(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(588);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24AFF0:
    ctx->pc = 0x7F24AFF0u;
    // 7F24AFF0: stw     r0, 592(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(592);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24AFF4:
    ctx->pc = 0x7F24AFF4u;
    // 7F24AFF4: b       0x7F24B044
    {
            goto label_7F24B044;
    }

label_7F24AFF8:
    ctx->pc = 0x7F24AFF8u;
    ctx->downcount -= 4;
    // 7F24AFF8: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F24AFFC:
    ctx->pc = 0x7F24AFFCu;
    // 7F24AFFC: stw     r0, 588(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(588);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B000:
    ctx->pc = 0x7F24B000u;
    // 7F24B000: stw     r0, 592(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(592);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B004:
    ctx->pc = 0x7F24B004u;
    // 7F24B004: b       0x7F24B044
    {
            goto label_7F24B044;
    }

label_7F24B008:
    ctx->pc = 0x7F24B008u;
    ctx->downcount -= 4;
    // 7F24B008: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F24B00C:
    ctx->pc = 0x7F24B00Cu;
    // 7F24B00C: stw     r0, 588(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(588);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B010:
    ctx->pc = 0x7F24B010u;
    // 7F24B010: stw     r0, 592(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(592);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B014:
    ctx->pc = 0x7F24B014u;
    // 7F24B014: b       0x7F24B044
    {
            goto label_7F24B044;
    }

label_7F24B018:
    ctx->pc = 0x7F24B018u;
    ctx->downcount -= 4;
    // 7F24B018: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_7F24B01C:
    ctx->pc = 0x7F24B01Cu;
    // 7F24B01C: stw     r0, 588(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(588);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B020:
    ctx->pc = 0x7F24B020u;
    // 7F24B020: stw     r0, 592(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(592);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B024:
    ctx->pc = 0x7F24B024u;
    // 7F24B024: b       0x7F24B044
    {
            goto label_7F24B044;
    }

label_7F24B028:
    ctx->pc = 0x7F24B028u;
    ctx->downcount -= 4;
    // 7F24B028: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24B02C:
    ctx->pc = 0x7F24B02Cu;
    // 7F24B02C: stw     r0, 588(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(588);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B030:
    ctx->pc = 0x7F24B030u;
    // 7F24B030: stw     r0, 592(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(592);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B034:
    ctx->pc = 0x7F24B034u;
    // 7F24B034: b       0x7F24B044
    {
            goto label_7F24B044;
    }

label_7F24B038:
    ctx->pc = 0x7F24B038u;
    ctx->downcount -= 3;
    // 7F24B038: li      r0, 66
    ctx->gpr[0] = (u32)(s32)(66);

label_7F24B03C:
    ctx->pc = 0x7F24B03Cu;
    // 7F24B03C: stw     r0, 588(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(588);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B040:
    ctx->pc = 0x7F24B040u;
    // 7F24B040: stw     r0, 592(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(592);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B044:
    ctx->pc = 0x7F24B044u;
    ctx->downcount -= 5;
    // 7F24B044: lis     r4, 16384
    ctx->gpr[4] = ((u32)(s32)(16384) << 16);

label_7F24B048:
    ctx->pc = 0x7F24B048u;
    // 7F24B048: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F24B04C:
    ctx->pc = 0x7F24B04Cu;
    // 7F24B04C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F24B050:
    ctx->pc = 0x7F24B050u;
    // 7F24B050: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24B054:
    ctx->pc = 0x7F24B054u;
    // 7F24B054: bl      0x7F012018
    {
            ctx->lr = 0x7F24B058u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F24B058:
    ctx->pc = 0x7F24B058u;
    ctx->downcount -= 5;
    // 7F24B058: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24B05C:
    ctx->pc = 0x7F24B05Cu;
    // 7F24B05C: xor   r4, r4, r5
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F24B060:
    ctx->pc = 0x7F24B060u;
    // 7F24B060: xor   r0, r3, r5
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F24B064:
    ctx->pc = 0x7F24B064u;
    // 7F24B064: or.   r0, r4, r0
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

label_7F24B068:
    ctx->pc = 0x7F24B068u;
    // 7F24B068: bc    12, 2, 0x7F24B074
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24B074;
        }
    }

label_7F24B06C:
    ctx->pc = 0x7F24B06Cu;
    ctx->downcount -= 2;
    // 7F24B06C: stw     r5, 588(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(588);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F24B070:
    ctx->pc = 0x7F24B070u;
    // 7F24B070: stw     r5, 592(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(592);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F24B074:
    ctx->pc = 0x7F24B074u;
    ctx->downcount -= 7;
    // 7F24B074: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F24B078:
    ctx->pc = 0x7F24B078u;
    // 7F24B078: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F24B07C:
    ctx->pc = 0x7F24B07Cu;
    // 7F24B07C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B080:
    ctx->pc = 0x7F24B080u;
    // 7F24B080: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B084:
    ctx->pc = 0x7F24B084u;
    // 7F24B084: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B088:
    ctx->pc = 0x7F24B088u;
    // 7F24B088: and.   r0, r0, r28
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[28];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F24B08C:
    ctx->pc = 0x7F24B08Cu;
    // 7F24B08C: bc    4, 2, 0x7F24B098
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24B098;
        }
    }

label_7F24B090:
    ctx->pc = 0x7F24B090u;
    ctx->downcount -= 2;
    // 7F24B090: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24B094:
    ctx->pc = 0x7F24B094u;
    // 7F24B094: stw     r0, 592(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(592);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B098:
    ctx->pc = 0x7F24B098u;
    ctx->downcount -= 4;
    // 7F24B098: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24B09C:
    ctx->pc = 0x7F24B09Cu;
    // 7F24B09C: cmpwi   r29, 1
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24B0A0:
    ctx->pc = 0x7F24B0A0u;
    // 7F24B0A0: stw     r0, 600(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(600);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B0A4:
    ctx->pc = 0x7F24B0A4u;
    // 7F24B0A4: bc    12, 2, 0x7F24B0B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24B0B0;
        }
    }

label_7F24B0A8:
    ctx->pc = 0x7F24B0A8u;
    ctx->downcount -= 2;
    // 7F24B0A8: cmpwi   r29, 9
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(9);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24B0AC:
    ctx->pc = 0x7F24B0ACu;
    // 7F24B0AC: bc    4, 2, 0x7F24B250
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24B250;
        }
    }

label_7F24B0B0:
    ctx->pc = 0x7F24B0B0u;
    ctx->downcount -= 4;
    // 7F24B0B0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F24B0B4:
    ctx->pc = 0x7F24B0B4u;
    // 7F24B0B4: lwz     r0, -6180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B0B8:
    ctx->pc = 0x7F24B0B8u;
    // 7F24B0B8: cmpwi   r0, 1
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

label_7F24B0BC:
    ctx->pc = 0x7F24B0BCu;
    // 7F24B0BC: bc    4, 2, 0x7F24B250
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24B250;
        }
    }

label_7F24B0C0:
    ctx->pc = 0x7F24B0C0u;
    ctx->downcount -= 5;
    // 7F24B0C0: li      r4, 2048
    ctx->gpr[4] = (u32)(s32)(2048);

label_7F24B0C4:
    ctx->pc = 0x7F24B0C4u;
    // 7F24B0C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F24B0C8:
    ctx->pc = 0x7F24B0C8u;
    // 7F24B0C8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F24B0CC:
    ctx->pc = 0x7F24B0CCu;
    // 7F24B0CC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24B0D0:
    ctx->pc = 0x7F24B0D0u;
    // 7F24B0D0: bl      0x7F012018
    {
            ctx->lr = 0x7F24B0D4u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F24B0D4:
    ctx->pc = 0x7F24B0D4u;
    ctx->downcount -= 5;
    // 7F24B0D4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24B0D8:
    ctx->pc = 0x7F24B0D8u;
    // 7F24B0D8: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F24B0DC:
    ctx->pc = 0x7F24B0DCu;
    // 7F24B0DC: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F24B0E0:
    ctx->pc = 0x7F24B0E0u;
    // 7F24B0E0: or.   r0, r4, r0
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

label_7F24B0E4:
    ctx->pc = 0x7F24B0E4u;
    // 7F24B0E4: bc    12, 2, 0x7F24B250
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24B250;
        }
    }

label_7F24B0E8:
    ctx->pc = 0x7F24B0E8u;
    ctx->downcount -= 2;
    // 7F24B0E8: cmplwi  r27, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[27]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24B0EC:
    ctx->pc = 0x7F24B0ECu;
    // 7F24B0EC: bc    12, 2, 0x7F24B134
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24B134;
        }
    }

label_7F24B0F0:
    ctx->pc = 0x7F24B0F0u;
    ctx->downcount -= 4;
    // 7F24B0F0: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F24B0F4:
    ctx->pc = 0x7F24B0F4u;
    // 7F24B0F4: addi    r4, r1, 136
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(136);

label_7F24B0F8:
    ctx->pc = 0x7F24B0F8u;
    // 7F24B0F8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F24B0FC:
    ctx->pc = 0x7F24B0FCu;
    // 7F24B0FC: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F24B100u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F24B100:
    ctx->pc = 0x7F24B100u;
    ctx->downcount -= 4;
    // 7F24B100: addi    r3, r1, 88
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(88);

label_7F24B104:
    ctx->pc = 0x7F24B104u;
    // 7F24B104: addi    r4, r1, 152
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(152);

label_7F24B108:
    ctx->pc = 0x7F24B108u;
    // 7F24B108: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F24B10C:
    ctx->pc = 0x7F24B10Cu;
    // 7F24B10C: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F24B110u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F24B110:
    ctx->pc = 0x7F24B110u;
    ctx->downcount -= 4;
    // 7F24B110: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F24B114:
    ctx->pc = 0x7F24B114u;
    // 7F24B114: addi    r4, r1, 120
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(120);

label_7F24B118:
    ctx->pc = 0x7F24B118u;
    // 7F24B118: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F24B11C:
    ctx->pc = 0x7F24B11Cu;
    // 7F24B11C: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F24B120u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F24B120:
    ctx->pc = 0x7F24B120u;
    ctx->downcount -= 4;
    // 7F24B120: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F24B124:
    ctx->pc = 0x7F24B124u;
    // 7F24B124: addi    r4, r1, 152
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(152);

label_7F24B128:
    ctx->pc = 0x7F24B128u;
    // 7F24B128: addi    r5, r1, 120
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(120);

label_7F24B12C:
    ctx->pc = 0x7F24B12Cu;
    // 7F24B12C: bl      0x7F249D10
    {
            ctx->lr = 0x7F24B130u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F249D10u;
                return;
            }
            goto label_7F249D10;
    }

label_7F24B130:
    ctx->pc = 0x7F24B130u;
    ctx->downcount -= 1;
    // 7F24B130: b       0x7F24B154
    {
            goto label_7F24B154;
    }

label_7F24B134:
    ctx->pc = 0x7F24B134u;
    ctx->downcount -= 8;
    // 7F24B134: lwz     r3, 432(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(432);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B138:
    ctx->pc = 0x7F24B138u;
    // 7F24B138: lwz     r0, 436(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(436);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B13C:
    ctx->pc = 0x7F24B13Cu;
    // 7F24B13C: stw     r3, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F24B140:
    ctx->pc = 0x7F24B140u;
    // 7F24B140: stw     r0, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B144:
    ctx->pc = 0x7F24B144u;
    // 7F24B144: lwz     r3, 440(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(440);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B148:
    ctx->pc = 0x7F24B148u;
    // 7F24B148: lwz     r0, 444(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(444);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B14C:
    ctx->pc = 0x7F24B14Cu;
    // 7F24B14C: stw     r3, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F24B150:
    ctx->pc = 0x7F24B150u;
    // 7F24B150: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B154:
    ctx->pc = 0x7F24B154u;
    ctx->downcount -= 4;
    // 7F24B154: addi    r3, r24, 352
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(352);

label_7F24B158:
    ctx->pc = 0x7F24B158u;
    // 7F24B158: addi    r4, r1, 136
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(136);

label_7F24B15C:
    ctx->pc = 0x7F24B15Cu;
    // 7F24B15C: addi    r5, r1, 104
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(104);

label_7F24B160:
    ctx->pc = 0x7F24B160u;
    // 7F24B160: bl      0x800261D8
    {
            ctx->lr = 0x7F24B164u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F24B164:
    ctx->pc = 0x7F24B164u;
    ctx->downcount -= 2;
    // 7F24B164: addi    r3, r1, 104
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(104);

label_7F24B168:
    ctx->pc = 0x7F24B168u;
    // 7F24B168: bl      0x7F3CC594
    {
            ctx->lr = 0x7F24B16Cu;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F24B16C:
    ctx->pc = 0x7F24B16Cu;
    ctx->downcount -= 17;
    // 7F24B16C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F24B170:
    ctx->pc = 0x7F24B170u;
    // 7F24B170: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F24B174:
    ctx->pc = 0x7F24B174u;
    // 7F24B174: addi    r3, r3, 12146
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12146);

label_7F24B178:
    ctx->pc = 0x7F24B178u;
    // 7F24B178: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F24B17C:
    ctx->pc = 0x7F24B17Cu;
    // 7F24B17C: addi    r5, r5, 12148
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12148);

label_7F24B180:
    ctx->pc = 0x7F24B180u;
    // 7F24B180: lha     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F24B184:
    ctx->pc = 0x7F24B184u;
    // 7F24B184: addi    r4, r4, 12144
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12144);

label_7F24B188:
    ctx->pc = 0x7F24B188u;
    // 7F24B188: lha     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F24B18C:
    ctx->pc = 0x7F24B18Cu;
    // 7F24B18C: lwz     r0, 580(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(580);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B190:
    ctx->pc = 0x7F24B190u;
    // 7F24B190: rlwinm r3, r3, 8, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 8u) & 0xFFFFFF00u;
    }

label_7F24B194:
    ctx->pc = 0x7F24B194u;
    // 7F24B194: lha     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F24B198:
    ctx->pc = 0x7F24B198u;
    // 7F24B198: rlwinm r5, r5, 16, 0, 15
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 16u) & 0xFFFF0000u;
    }

label_7F24B19C:
    ctx->pc = 0x7F24B19Cu;
    // 7F24B19C: cmplwi  r0, 0x0000
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

label_7F24B1A0:
    ctx->pc = 0x7F24B1A0u;
    // 7F24B1A0: or   r0, r4, r3
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[3];
    }

label_7F24B1A4:
    ctx->pc = 0x7F24B1A4u;
    // 7F24B1A4: or   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
    }

label_7F24B1A8:
    ctx->pc = 0x7F24B1A8u;
    // 7F24B1A8: oris    r25, r0, 0x8000
    ctx->gpr[25] = ctx->gpr[0] | (0x8000u << 16);

label_7F24B1AC:
    ctx->pc = 0x7F24B1ACu;
    // 7F24B1AC: bc    4, 2, 0x7F24B1E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24B1E8;
        }
    }

label_7F24B1B0:
    ctx->pc = 0x7F24B1B0u;
    ctx->downcount -= 3;
    // 7F24B1B0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24B1B4:
    ctx->pc = 0x7F24B1B4u;
    // 7F24B1B4: lfs     f1, 20908(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24B1B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20908);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24B1B8:
    ctx->pc = 0x7F24B1B8u;
    // 7F24B1B8: bl      0x7F00FAF4
    {
            ctx->lr = 0x7F24B1BCu;
            ctx->pc = 0x7F00FAF4u;
            return;
    }

label_7F24B1BC:
    ctx->pc = 0x7F24B1BCu;
    ctx->downcount -= 4;
    // 7F24B1BC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24B1C0:
    ctx->pc = 0x7F24B1C0u;
    // 7F24B1C0: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F24B1C0u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F24B1C4:
    ctx->pc = 0x7F24B1C4u;
    // 7F24B1C4: lfs     f1, 20904(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24B1C4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20904);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24B1C8:
    ctx->pc = 0x7F24B1C8u;
    // 7F24B1C8: bl      0x7F00FAF4
    {
            ctx->lr = 0x7F24B1CCu;
            ctx->pc = 0x7F00FAF4u;
            return;
    }

label_7F24B1CC:
    ctx->pc = 0x7F24B1CCu;
    ctx->downcount -= 6;
    // 7F24B1CC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24B1D0:
    ctx->pc = 0x7F24B1D0u;
    // 7F24B1D0: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x7F24B1D0u)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_7F24B1D4:
    ctx->pc = 0x7F24B1D4u;
    // 7F24B1D4: lfs     f3, 20912(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24B1D4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20912);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F24B1D8:
    ctx->pc = 0x7F24B1D8u;
    // 7F24B1D8: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24B1DC:
    ctx->pc = 0x7F24B1DCu;
    // 7F24B1DC: addi    r3, r24, 368
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(368);

label_7F24B1E0:
    ctx->pc = 0x7F24B1E0u;
    // 7F24B1E0: bl      0x7F2D0694
    {
            ctx->lr = 0x7F24B1E4u;
            ctx->pc = 0x7F2D0694u;
            return;
    }

label_7F24B1E4:
    ctx->pc = 0x7F24B1E4u;
    ctx->downcount -= 1;
    // 7F24B1E4: stw     r3, 580(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(580);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F24B1E8:
    ctx->pc = 0x7F24B1E8u;
    ctx->downcount -= 7;
    // 7F24B1E8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F24B1EC:
    ctx->pc = 0x7F24B1ECu;
    // 7F24B1EC: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F24B1F0:
    ctx->pc = 0x7F24B1F0u;
    // 7F24B1F0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B1F4:
    ctx->pc = 0x7F24B1F4u;
    // 7F24B1F4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B1F8:
    ctx->pc = 0x7F24B1F8u;
    // 7F24B1F8: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B1FC:
    ctx->pc = 0x7F24B1FCu;
    // 7F24B1FC: and.   r0, r0, r28
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[28];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F24B200:
    ctx->pc = 0x7F24B200u;
    // 7F24B200: bc    4, 2, 0x7F24B20C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24B20C;
        }
    }

label_7F24B204:
    ctx->pc = 0x7F24B204u;
    ctx->downcount -= 2;
    // 7F24B204: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F24B208:
    ctx->pc = 0x7F24B208u;
    // 7F24B208: stw     r0, 600(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(600);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B20C:
    ctx->pc = 0x7F24B20Cu;
    ctx->downcount -= 3;
    // 7F24B20C: lwz     r0, 612(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(612);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B210:
    ctx->pc = 0x7F24B210u;
    // 7F24B210: cmpwi   r0, 1
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

label_7F24B214:
    ctx->pc = 0x7F24B214u;
    // 7F24B214: bc    4, 2, 0x7F24B240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24B240;
        }
    }

label_7F24B218:
    ctx->pc = 0x7F24B218u;
    ctx->downcount -= 6;
    // 7F24B218: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F24B21C:
    ctx->pc = 0x7F24B21Cu;
    // 7F24B21C: lwz     r4, 48(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24B220:
    ctx->pc = 0x7F24B220u;
    // 7F24B220: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F24B224:
    ctx->pc = 0x7F24B224u;
    // 7F24B224: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B228:
    ctx->pc = 0x7F24B228u;
    // 7F24B228: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B22C:
    ctx->pc = 0x7F24B22Cu;
    // 7F24B22C: bl      0x7F3B0954
    {
            ctx->lr = 0x7F24B230u;
            ctx->pc = 0x7F3B0954u;
            return;
    }

label_7F24B230:
    ctx->pc = 0x7F24B230u;
    ctx->downcount -= 4;
    // 7F24B230: lwz     r3, 48(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B234:
    ctx->pc = 0x7F24B234u;
    // 7F24B234: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24B238:
    ctx->pc = 0x7F24B238u;
    // 7F24B238: stw     r0, 76(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B23C:
    ctx->pc = 0x7F24B23Cu;
    // 7F24B23C: stw     r0, 612(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(612);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B240:
    ctx->pc = 0x7F24B240u;
    ctx->downcount -= 4;
    // 7F24B240: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F24B244:
    ctx->pc = 0x7F24B244u;
    // 7F24B244: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F24B248:
    ctx->pc = 0x7F24B248u;
    // 7F24B248: stw     r0, -8596(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8596);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B24C:
    ctx->pc = 0x7F24B24Cu;
    // 7F24B24C: b       0x7F24B2A0
    {
            goto label_7F24B2A0;
    }

label_7F24B250:
    ctx->pc = 0x7F24B250u;
    ctx->downcount -= 3;
    // 7F24B250: lwz     r3, 580(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(580);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B254:
    ctx->pc = 0x7F24B254u;
    // 7F24B254: cmplwi  r3, 0x0000
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

label_7F24B258:
    ctx->pc = 0x7F24B258u;
    // 7F24B258: bc    12, 2, 0x7F24B294
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24B294;
        }
    }

label_7F24B25C:
    ctx->pc = 0x7F24B25Cu;
    ctx->downcount -= 1;
    // 7F24B25C: bl      0x7F3C82E8
    {
            ctx->lr = 0x7F24B260u;
            ctx->pc = 0x7F3C82E8u;
            return;
    }

label_7F24B260:
    ctx->pc = 0x7F24B260u;
    ctx->downcount -= 5;
    // 7F24B260: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24B264:
    ctx->pc = 0x7F24B264u;
    // 7F24B264: stw     r0, 580(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(580);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B268:
    ctx->pc = 0x7F24B268u;
    // 7F24B268: lwz     r0, 612(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(612);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B26C:
    ctx->pc = 0x7F24B26Cu;
    // 7F24B26C: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24B270:
    ctx->pc = 0x7F24B270u;
    // 7F24B270: bc    4, 2, 0x7F24B294
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24B294;
        }
    }

label_7F24B274:
    ctx->pc = 0x7F24B274u;
    ctx->downcount -= 6;
    // 7F24B274: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F24B278:
    ctx->pc = 0x7F24B278u;
    // 7F24B278: lwz     r4, 48(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24B27C:
    ctx->pc = 0x7F24B27Cu;
    // 7F24B27C: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F24B280:
    ctx->pc = 0x7F24B280u;
    // 7F24B280: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B284:
    ctx->pc = 0x7F24B284u;
    // 7F24B284: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B288:
    ctx->pc = 0x7F24B288u;
    // 7F24B288: bl      0x7F3B0938
    {
            ctx->lr = 0x7F24B28Cu;
            ctx->pc = 0x7F3B0938u;
            return;
    }

label_7F24B28C:
    ctx->pc = 0x7F24B28Cu;
    ctx->downcount -= 2;
    // 7F24B28C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F24B290:
    ctx->pc = 0x7F24B290u;
    // 7F24B290: stw     r0, 612(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(612);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B294:
    ctx->pc = 0x7F24B294u;
    ctx->downcount -= 3;
    // 7F24B294: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F24B298:
    ctx->pc = 0x7F24B298u;
    // 7F24B298: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24B29C:
    ctx->pc = 0x7F24B29Cu;
    // 7F24B29C: stw     r0, -8596(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8596);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B2A0:
    ctx->pc = 0x7F24B2A0u;
    ctx->downcount -= 2;
    // 7F24B2A0: cmpwi   r29, 9
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(9);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24B2A4:
    ctx->pc = 0x7F24B2A4u;
    // 7F24B2A4: bc    12, 2, 0x7F24B2B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24B2B8;
        }
    }

label_7F24B2A8:
    ctx->pc = 0x7F24B2A8u;
    ctx->downcount -= 2;
    // 7F24B2A8: cmplwi  r29, 0x0003
    {
        u32 val_a = (u32)(ctx->gpr[29]);
        u32 val_b = (u32)(0x0003u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24B2AC:
    ctx->pc = 0x7F24B2ACu;
    // 7F24B2AC: bc    4, 1, 0x7F24B2B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24B2B8;
        }
    }

label_7F24B2B0:
    ctx->pc = 0x7F24B2B0u;
    ctx->downcount -= 2;
    // 7F24B2B0: cmpwi   r29, 8
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24B2B4:
    ctx->pc = 0x7F24B2B4u;
    // 7F24B2B4: bc    4, 2, 0x7F24B2C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24B2C8;
        }
    }

label_7F24B2B8:
    ctx->pc = 0x7F24B2B8u;
    ctx->downcount -= 2;
    // 7F24B2B8: addi    r3, r24, 464
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(464);

label_7F24B2BC:
    ctx->pc = 0x7F24B2BCu;
    // 7F24B2BC: bl      0x7F25CD14
    {
            ctx->lr = 0x7F24B2C0u;
            ctx->pc = 0x7F25CD14u;
            return;
    }

label_7F24B2C0:
    ctx->pc = 0x7F24B2C0u;
    ctx->downcount -= 2;
    // 7F24B2C0: addi    r3, r24, 504
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(504);

label_7F24B2C4:
    ctx->pc = 0x7F24B2C4u;
    // 7F24B2C4: bl      0x7F25CD14
    {
            ctx->lr = 0x7F24B2C8u;
            ctx->pc = 0x7F25CD14u;
            return;
    }

label_7F24B2C8:
    ctx->pc = 0x7F24B2C8u;
    ctx->downcount -= 7;
    // 7F24B2C8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F24B2CC:
    ctx->pc = 0x7F24B2CCu;
    // 7F24B2CC: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F24B2D0:
    ctx->pc = 0x7F24B2D0u;
    // 7F24B2D0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B2D4:
    ctx->pc = 0x7F24B2D4u;
    // 7F24B2D4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B2D8:
    ctx->pc = 0x7F24B2D8u;
    // 7F24B2D8: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B2DC:
    ctx->pc = 0x7F24B2DCu;
    // 7F24B2DC: and.   r0, r0, r28
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[28];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F24B2E0:
    ctx->pc = 0x7F24B2E0u;
    // 7F24B2E0: bc    12, 2, 0x7F24B308
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24B308;
        }
    }

label_7F24B2E4:
    ctx->pc = 0x7F24B2E4u;
    ctx->downcount -= 9;
    // 7F24B2E4: lwz     r3, 460(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(460);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B2E8:
    ctx->pc = 0x7F24B2E8u;
    // 7F24B2E8: lwz     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B2EC:
    ctx->pc = 0x7F24B2ECu;
    // 7F24B2EC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F24B2F0:
    ctx->pc = 0x7F24B2F0u;
    // 7F24B2F0: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F24B2F4:
    ctx->pc = 0x7F24B2F4u;
    // 7F24B2F4: lwz     r3, 296(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(296);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B2F8:
    ctx->pc = 0x7F24B2F8u;
    // 7F24B2F8: lhz     r0, 14(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F24B2FC:
    ctx->pc = 0x7F24B2FCu;
    // 7F24B2FC: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F24B300:
    ctx->pc = 0x7F24B300u;
    // 7F24B300: sth     r0, 14(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F24B304:
    ctx->pc = 0x7F24B304u;
    // 7F24B304: b       0x7F24B328
    {
            goto label_7F24B328;
    }

label_7F24B308:
    ctx->pc = 0x7F24B308u;
    ctx->downcount -= 8;
    // 7F24B308: lwz     r3, 460(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(460);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B30C:
    ctx->pc = 0x7F24B30Cu;
    // 7F24B30C: lwz     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B310:
    ctx->pc = 0x7F24B310u;
    // 7F24B310: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F24B314:
    ctx->pc = 0x7F24B314u;
    // 7F24B314: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F24B318:
    ctx->pc = 0x7F24B318u;
    // 7F24B318: lwz     r3, 296(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(296);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B31C:
    ctx->pc = 0x7F24B31Cu;
    // 7F24B31C: lhz     r0, 14(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F24B320:
    ctx->pc = 0x7F24B320u;
    // 7F24B320: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F24B324:
    ctx->pc = 0x7F24B324u;
    // 7F24B324: sth     r0, 14(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F24B328:
    ctx->pc = 0x7F24B328u;
    ctx->downcount -= 18;
    // 7F24B328: psq_l   f31, 344(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F24B328u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(344);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F24B328u);
        if (ctx->exception) return;
    }

label_7F24B32C:
    ctx->pc = 0x7F24B32Cu;
    // 7F24B32C: lfd     f31, 336(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24B32Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(336);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F24B330:
    ctx->pc = 0x7F24B330u;
    // 7F24B330: lmw     r23, 300(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(300);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F24B334:
    ctx->pc = 0x7F24B334u;
    // 7F24B334: lwz     r0, 356(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(356);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B338:
    ctx->pc = 0x7F24B338u;
    // 7F24B338: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24B33C:
    ctx->pc = 0x7F24B33Cu;
    // 7F24B33C: addi    r1, r1, 352
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(352);

label_7F24B340:
    ctx->pc = 0x7F24B340u;
    // 7F24B340: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F24B344:
    ctx->pc = 0x7F24B344u;
    ctx->downcount -= 23;
    // 7F24B344: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24B348:
    ctx->pc = 0x7F24B348u;
    // 7F24B348: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24B34C:
    ctx->pc = 0x7F24B34Cu;
    // 7F24B34C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B350:
    ctx->pc = 0x7F24B350u;
    // 7F24B350: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F24B354:
    ctx->pc = 0x7F24B354u;
    // 7F24B354: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24B358:
    ctx->pc = 0x7F24B358u;
    // 7F24B358: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F24B35C:
    ctx->pc = 0x7F24B35Cu;
    // 7F24B35C: lwz     r4, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24B360:
    ctx->pc = 0x7F24B360u;
    // 7F24B360: lwz     r4, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24B364:
    ctx->pc = 0x7F24B364u;
    // 7F24B364: stw     r4, 18312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18312);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F24B368:
    ctx->pc = 0x7F24B368u;
    // 7F24B368: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F24B36C:
    ctx->pc = 0x7F24B36Cu;
    // 7F24B36C: stw     r4, 88(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F24B370:
    ctx->pc = 0x7F24B370u;
    // 7F24B370: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B374:
    ctx->pc = 0x7F24B374u;
    // 7F24B374: bl      0x7F24B3E8
    {
            ctx->lr = 0x7F24B378u;
            goto label_7F24B3E8;
    }

label_7F24B378:
    ctx->pc = 0x7F24B378u;
    ctx->downcount -= 4;
    // 7F24B378: stw     r31, 132(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F24B37C:
    ctx->pc = 0x7F24B37Cu;
    // 7F24B37C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24B380:
    ctx->pc = 0x7F24B380u;
    // 7F24B380: lwz     r3, 92(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B384:
    ctx->pc = 0x7F24B384u;
    // 7F24B384: bl      0x7F24B3E8
    {
            ctx->lr = 0x7F24B388u;
            goto label_7F24B3E8;
    }

label_7F24B388:
    ctx->pc = 0x7F24B388u;
    ctx->downcount -= 3;
    // 7F24B388: lwz     r3, 456(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(456);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B38C:
    ctx->pc = 0x7F24B38Cu;
    // 7F24B38C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24B390:
    ctx->pc = 0x7F24B390u;
    // 7F24B390: bl      0x7F24B3B4
    {
            ctx->lr = 0x7F24B394u;
            goto label_7F24B3B4;
    }

label_7F24B394:
    ctx->pc = 0x7F24B394u;
    ctx->downcount -= 3;
    // 7F24B394: lwz     r3, 460(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(460);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B398:
    ctx->pc = 0x7F24B398u;
    // 7F24B398: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24B39C:
    ctx->pc = 0x7F24B39Cu;
    // 7F24B39C: bl      0x7F24B3B4
    {
            ctx->lr = 0x7F24B3A0u;
            goto label_7F24B3B4;
    }

label_7F24B3A0:
    ctx->pc = 0x7F24B3A0u;
    ctx->downcount -= 16;
    // 7F24B3A0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F24B3A4:
    ctx->pc = 0x7F24B3A4u;
    // 7F24B3A4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B3A8:
    ctx->pc = 0x7F24B3A8u;
    // 7F24B3A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24B3AC:
    ctx->pc = 0x7F24B3ACu;
    // 7F24B3AC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F24B3B0:
    ctx->pc = 0x7F24B3B0u;
    // 7F24B3B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F24B3B4:
    ctx->pc = 0x7F24B3B4u;
    ctx->downcount -= 7;
    // 7F24B3B4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24B3B8:
    ctx->pc = 0x7F24B3B8u;
    // 7F24B3B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24B3BC:
    ctx->pc = 0x7F24B3BCu;
    // 7F24B3BC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B3C0:
    ctx->pc = 0x7F24B3C0u;
    // 7F24B3C0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F24B3C4:
    ctx->pc = 0x7F24B3C4u;
    // 7F24B3C4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24B3C8:
    ctx->pc = 0x7F24B3C8u;
    // 7F24B3C8: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F24B3CC:
    ctx->pc = 0x7F24B3CCu;
    // 7F24B3CC: bl      0x7F01B234
    {
            ctx->lr = 0x7F24B3D0u;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F24B3D0:
    ctx->pc = 0x7F24B3D0u;
    ctx->downcount -= 7;
    // 7F24B3D0: stw     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F24B3D4:
    ctx->pc = 0x7F24B3D4u;
    // 7F24B3D4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B3D8:
    ctx->pc = 0x7F24B3D8u;
    // 7F24B3D8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F24B3DC:
    ctx->pc = 0x7F24B3DCu;
    // 7F24B3DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24B3E0:
    ctx->pc = 0x7F24B3E0u;
    // 7F24B3E0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F24B3E4:
    ctx->pc = 0x7F24B3E4u;
    // 7F24B3E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F24B3E8:
    ctx->pc = 0x7F24B3E8u;
    ctx->downcount -= 7;
    // 7F24B3E8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24B3EC:
    ctx->pc = 0x7F24B3ECu;
    // 7F24B3EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24B3F0:
    ctx->pc = 0x7F24B3F0u;
    // 7F24B3F0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B3F4:
    ctx->pc = 0x7F24B3F4u;
    // 7F24B3F4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F24B3F8:
    ctx->pc = 0x7F24B3F8u;
    // 7F24B3F8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24B3FC:
    ctx->pc = 0x7F24B3FCu;
    // 7F24B3FC: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F24B400:
    ctx->pc = 0x7F24B400u;
    // 7F24B400: bl      0x7F01B234
    {
            ctx->lr = 0x7F24B404u;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F24B404:
    ctx->pc = 0x7F24B404u;
    ctx->downcount -= 7;
    // 7F24B404: stw     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F24B408:
    ctx->pc = 0x7F24B408u;
    // 7F24B408: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B40C:
    ctx->pc = 0x7F24B40Cu;
    // 7F24B40C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F24B410:
    ctx->pc = 0x7F24B410u;
    // 7F24B410: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24B414:
    ctx->pc = 0x7F24B414u;
    // 7F24B414: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F24B418:
    ctx->pc = 0x7F24B418u;
    // 7F24B418: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F24B41C:
    ctx->pc = 0x7F24B41Cu;
    ctx->downcount -= 9;
    // 7F24B41C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24B420:
    ctx->pc = 0x7F24B420u;
    // 7F24B420: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24B424:
    ctx->pc = 0x7F24B424u;
    // 7F24B424: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F24B428:
    ctx->pc = 0x7F24B428u;
    // 7F24B428: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24B42C:
    ctx->pc = 0x7F24B42Cu;
    // 7F24B42C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B430:
    ctx->pc = 0x7F24B430u;
    // 7F24B430: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F24B434:
    ctx->pc = 0x7F24B434u;
    // 7F24B434: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24B438:
    ctx->pc = 0x7F24B438u;
    // 7F24B438: lwz     r3, 616(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(616);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B43C:
    ctx->pc = 0x7F24B43Cu;
    // 7F24B43C: bl      0x80051BB0
    {
            ctx->lr = 0x7F24B440u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F24B440:
    ctx->pc = 0x7F24B440u;
    ctx->downcount -= 2;
    // 7F24B440: cmpwi   r3, 0
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

label_7F24B444:
    ctx->pc = 0x7F24B444u;
    // 7F24B444: bc    12, 2, 0x7F24B464
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24B464;
        }
    }

label_7F24B448:
    ctx->pc = 0x7F24B448u;
    ctx->downcount -= 5;
    // 7F24B448: lwz     r3, 616(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(616);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B44C:
    ctx->pc = 0x7F24B44Cu;
    // 7F24B44C: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F24B450:
    ctx->pc = 0x7F24B450u;
    // 7F24B450: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24B454:
    ctx->pc = 0x7F24B454u;
    // 7F24B454: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F24B458:
    ctx->pc = 0x7F24B458u;
    // 7F24B458: bl      0x80051688
    {
            ctx->lr = 0x7F24B45Cu;
            ctx->pc = 0x80051688u;
            return;
    }

label_7F24B45C:
    ctx->pc = 0x7F24B45Cu;
    ctx->downcount -= 2;
    // 7F24B45C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24B460:
    ctx->pc = 0x7F24B460u;
    // 7F24B460: stw     r0, 616(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(616);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B464:
    ctx->pc = 0x7F24B464u;
    ctx->downcount -= 5;
    // 7F24B464: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F24B468:
    ctx->pc = 0x7F24B468u;
    // 7F24B468: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F24B46C:
    ctx->pc = 0x7F24B46Cu;
    // 7F24B46C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B470:
    ctx->pc = 0x7F24B470u;
    // 7F24B470: cmplwi  r3, 0x0000
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

label_7F24B474:
    ctx->pc = 0x7F24B474u;
    // 7F24B474: bc    12, 2, 0x7F24B4A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24B4A8;
        }
    }

label_7F24B478:
    ctx->pc = 0x7F24B478u;
    ctx->downcount -= 3;
    // 7F24B478: lwz     r0, 612(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(612);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B47C:
    ctx->pc = 0x7F24B47Cu;
    // 7F24B47C: cmpwi   r0, 1
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

label_7F24B480:
    ctx->pc = 0x7F24B480u;
    // 7F24B480: bc    4, 2, 0x7F24B490
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24B490;
        }
    }

label_7F24B484:
    ctx->pc = 0x7F24B484u;
    ctx->downcount -= 3;
    // 7F24B484: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B488:
    ctx->pc = 0x7F24B488u;
    // 7F24B488: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24B48C:
    ctx->pc = 0x7F24B48Cu;
    // 7F24B48C: bl      0x7F3B0954
    {
            ctx->lr = 0x7F24B490u;
            ctx->pc = 0x7F3B0954u;
            return;
    }

label_7F24B490:
    ctx->pc = 0x7F24B490u;
    ctx->downcount -= 6;
    // 7F24B490: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F24B494:
    ctx->pc = 0x7F24B494u;
    // 7F24B494: lwz     r4, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24B498:
    ctx->pc = 0x7F24B498u;
    // 7F24B498: addi    r3, r3, -5668
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5668);

label_7F24B49C:
    ctx->pc = 0x7F24B49Cu;
    // 7F24B49C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B4A0:
    ctx->pc = 0x7F24B4A0u;
    // 7F24B4A0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B4A4:
    ctx->pc = 0x7F24B4A4u;
    // 7F24B4A4: bl      0x7F3B0954
    {
            ctx->lr = 0x7F24B4A8u;
            ctx->pc = 0x7F3B0954u;
            return;
    }

label_7F24B4A8:
    ctx->pc = 0x7F24B4A8u;
    ctx->downcount -= 2;
    // 7F24B4A8: lwz     r3, 456(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(456);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B4AC:
    ctx->pc = 0x7F24B4ACu;
    // 7F24B4AC: bl      0x7F3C2440
    {
            ctx->lr = 0x7F24B4B0u;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F24B4B0:
    ctx->pc = 0x7F24B4B0u;
    ctx->downcount -= 2;
    // 7F24B4B0: lwz     r3, 460(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(460);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B4B4:
    ctx->pc = 0x7F24B4B4u;
    // 7F24B4B4: bl      0x7F3C2440
    {
            ctx->lr = 0x7F24B4B8u;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F24B4B8:
    ctx->pc = 0x7F24B4B8u;
    ctx->downcount -= 2;
    // 7F24B4B8: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F24B4BC:
    ctx->pc = 0x7F24B4BCu;
    // 7F24B4BC: bl      0x7F042AAC
    {
            ctx->lr = 0x7F24B4C0u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F24B4C0:
    ctx->pc = 0x7F24B4C0u;
    ctx->downcount -= 2;
    // 7F24B4C0: addi    r3, r31, 92
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(92);

label_7F24B4C4:
    ctx->pc = 0x7F24B4C4u;
    // 7F24B4C4: bl      0x7F042AAC
    {
            ctx->lr = 0x7F24B4C8u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F24B4C8:
    ctx->pc = 0x7F24B4C8u;
    ctx->downcount -= 6;
    // 7F24B4C8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F24B4CC:
    ctx->pc = 0x7F24B4CCu;
    // 7F24B4CC: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F24B4D0:
    ctx->pc = 0x7F24B4D0u;
    // 7F24B4D0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B4D4:
    ctx->pc = 0x7F24B4D4u;
    // 7F24B4D4: lha     r4, 296(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(296);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F24B4D8:
    ctx->pc = 0x7F24B4D8u;
    // 7F24B4D8: extsh. r0, r4
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

label_7F24B4DC:
    ctx->pc = 0x7F24B4DCu;
    // 7F24B4DC: bc    12, 2, 0x7F24B508
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24B508;
        }
    }

label_7F24B4E0:
    ctx->pc = 0x7F24B4E0u;
    ctx->downcount -= 7;
    // 7F24B4E0: lwz     r0, 584(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(584);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B4E4:
    ctx->pc = 0x7F24B4E4u;
    // 7F24B4E4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F24B4E8:
    ctx->pc = 0x7F24B4E8u;
    // 7F24B4E8: addi    r3, r3, 11700
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11700);

label_7F24B4EC:
    ctx->pc = 0x7F24B4ECu;
    // 7F24B4EC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F24B4F0:
    ctx->pc = 0x7F24B4F0u;
    // 7F24B4F0: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B4F4:
    ctx->pc = 0x7F24B4F4u;
    // 7F24B4F4: cmpw    r4, r0
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

label_7F24B4F8:
    ctx->pc = 0x7F24B4F8u;
    // 7F24B4F8: bc    12, 2, 0x7F24B508
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24B508;
        }
    }

label_7F24B4FC:
    ctx->pc = 0x7F24B4FCu;
    ctx->downcount -= 3;
    // 7F24B4FC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F24B500:
    ctx->pc = 0x7F24B500u;
    // 7F24B500: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24B504:
    ctx->pc = 0x7F24B504u;
    // 7F24B504: stw     r0, -6216(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6216);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B508:
    ctx->pc = 0x7F24B508u;
    ctx->downcount -= 3;
    // 7F24B508: lwz     r3, 580(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(580);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B50C:
    ctx->pc = 0x7F24B50Cu;
    // 7F24B50C: cmplwi  r3, 0x0000
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

label_7F24B510:
    ctx->pc = 0x7F24B510u;
    // 7F24B510: bc    12, 2, 0x7F24B520
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24B520;
        }
    }

label_7F24B514:
    ctx->pc = 0x7F24B514u;
    ctx->downcount -= 1;
    // 7F24B514: bl      0x7F3C82E8
    {
            ctx->lr = 0x7F24B518u;
            ctx->pc = 0x7F3C82E8u;
            return;
    }

label_7F24B518:
    ctx->pc = 0x7F24B518u;
    ctx->downcount -= 2;
    // 7F24B518: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24B51C:
    ctx->pc = 0x7F24B51Cu;
    // 7F24B51C: stw     r0, 580(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(580);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B520:
    ctx->pc = 0x7F24B520u;
    ctx->downcount -= 11;
    // 7F24B520: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F24B524:
    ctx->pc = 0x7F24B524u;
    // 7F24B524: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F24B528:
    ctx->pc = 0x7F24B528u;
    // 7F24B528: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24B52C:
    ctx->pc = 0x7F24B52Cu;
    // 7F24B52C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F24B530:
    ctx->pc = 0x7F24B530u;
    // 7F24B530: addi    r5, r3, -5676
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5676);

label_7F24B534:
    ctx->pc = 0x7F24B534u;
    // 7F24B534: stw     r0, -5672(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5672);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B538:
    ctx->pc = 0x7F24B538u;
    // 7F24B538: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F24B53C:
    ctx->pc = 0x7F24B53Cu;
    // 7F24B53C: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_7F24B540:
    ctx->pc = 0x7F24B540u;
    // 7F24B540: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B544:
    ctx->pc = 0x7F24B544u;
    // 7F24B544: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24B548:
    ctx->pc = 0x7F24B548u;
    // 7F24B548: bl      0x7F042E08
    {
            ctx->lr = 0x7F24B54Cu;
            ctx->pc = 0x7F042E08u;
            return;
    }

label_7F24B54C:
    ctx->pc = 0x7F24B54Cu;
    ctx->downcount -= 14;
    // 7F24B54C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F24B550:
    ctx->pc = 0x7F24B550u;
    // 7F24B550: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F24B554:
    ctx->pc = 0x7F24B554u;
    // 7F24B554: stw     r0, 600(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(600);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B558:
    ctx->pc = 0x7F24B558u;
    // 7F24B558: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24B55C:
    ctx->pc = 0x7F24B55Cu;
    // 7F24B55C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F24B560:
    ctx->pc = 0x7F24B560u;
    // 7F24B560: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F24B564:
    ctx->pc = 0x7F24B564u;
    // 7F24B564: stw     r5, -8596(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8596);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F24B568:
    ctx->pc = 0x7F24B568u;
    // 7F24B568: stw     r0, 24804(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24804);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B56C:
    ctx->pc = 0x7F24B56Cu;
    // 7F24B56C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B570:
    ctx->pc = 0x7F24B570u;
    // 7F24B570: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F24B574:
    ctx->pc = 0x7F24B574u;
    // 7F24B574: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24B578:
    ctx->pc = 0x7F24B578u;
    // 7F24B578: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F24B57C:
    ctx->pc = 0x7F24B57Cu;
    // 7F24B57C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F24B580:
    ctx->pc = 0x7F24B580u;
    ctx->downcount -= 21;
    // 7F24B580: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24B584:
    ctx->pc = 0x7F24B584u;
    // 7F24B584: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24B588:
    ctx->pc = 0x7F24B588u;
    // 7F24B588: lis     r4, 19
    ctx->gpr[4] = ((u32)(s32)(19) << 16);

label_7F24B58C:
    ctx->pc = 0x7F24B58Cu;
    // 7F24B58C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F24B590:
    ctx->pc = 0x7F24B590u;
    // 7F24B590: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B594:
    ctx->pc = 0x7F24B594u;
    // 7F24B594: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F24B598:
    ctx->pc = 0x7F24B598u;
    // 7F24B598: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F24B59C:
    ctx->pc = 0x7F24B59Cu;
    // 7F24B59C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24B5A0:
    ctx->pc = 0x7F24B5A0u;
    // 7F24B5A0: addi    r3, r4, 1
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(1);

label_7F24B5A4:
    ctx->pc = 0x7F24B5A4u;
    // 7F24B5A4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F24B5A8:
    ctx->pc = 0x7F24B5A8u;
    // 7F24B5A8: bl      0x7F3C2408
    {
            ctx->lr = 0x7F24B5ACu;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F24B5AC:
    ctx->pc = 0x7F24B5ACu;
    ctx->downcount -= 3;
    // 7F24B5AC: or.   r31, r3, r3
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

label_7F24B5B0:
    ctx->pc = 0x7F24B5B0u;
    // 7F24B5B0: stw     r3, 456(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(456);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F24B5B4:
    ctx->pc = 0x7F24B5B4u;
    // 7F24B5B4: bc    4, 2, 0x7F24B5C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24B5C0;
        }
    }

label_7F24B5B8:
    ctx->pc = 0x7F24B5B8u;
    ctx->downcount -= 2;
    // 7F24B5B8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F24B5BC:
    ctx->pc = 0x7F24B5BCu;
    // 7F24B5BC: b       0x7F24B6B0
    {
            goto label_7F24B6B0;
    }

label_7F24B5C0:
    ctx->pc = 0x7F24B5C0u;
    ctx->downcount -= 2;
    // 7F24B5C0: lwz     r4, 560(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(560);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24B5C4:
    ctx->pc = 0x7F24B5C4u;
    // 7F24B5C4: bl      0x7F3C2534
    {
            ctx->lr = 0x7F24B5C8u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F24B5C8:
    ctx->pc = 0x7F24B5C8u;
    ctx->downcount -= 9;
    // 7F24B5C8: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F24B5CC:
    ctx->pc = 0x7F24B5CCu;
    // 7F24B5CC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24B5D0:
    ctx->pc = 0x7F24B5D0u;
    // 7F24B5D0: stw     r0, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B5D4:
    ctx->pc = 0x7F24B5D4u;
    // 7F24B5D4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F24B5D8:
    ctx->pc = 0x7F24B5D8u;
    // 7F24B5D8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F24B5DC:
    ctx->pc = 0x7F24B5DCu;
    // 7F24B5DC: stw     r5, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F24B5E0:
    ctx->pc = 0x7F24B5E0u;
    // 7F24B5E0: lwz     r7, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F24B5E4:
    ctx->pc = 0x7F24B5E4u;
    // 7F24B5E4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F24B5E8:
    ctx->downcount -= 2;
    // 7F24B5E8: cmpwi   r8, 0
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

label_7F24B5EC:
    // 7F24B5EC: bc    4, 2, 0x7F24B604
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24B604;
        }
    }

label_7F24B5F0:
    ctx->downcount -= 5;
    // 7F24B5F0: add   r3, r7, r5
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F24B5F4:
    // 7F24B5F4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24B5F8:
    ctx->pc = 0x7F24B5F8u;
    // 7F24B5F8: sth     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F24B5FC:
    ctx->pc = 0x7F24B5FCu;
    // 7F24B5FC: sth     r0, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F24B600:
    // 7F24B600: b       0x7F24B618
    {
            goto label_7F24B618;
    }

label_7F24B604:
    ctx->downcount -= 5;
    // 7F24B604: add   r3, r7, r5
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F24B608:
    // 7F24B608: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F24B60C:
    ctx->pc = 0x7F24B60Cu;
    // 7F24B60C: sth     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F24B610:
    // 7F24B610: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24B614:
    ctx->pc = 0x7F24B614u;
    // 7F24B614: sth     r0, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F24B618:
    ctx->downcount -= 12;
    // 7F24B618: add   r6, r7, r5
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F24B61C:
    // 7F24B61C: li      r0, 128
    ctx->gpr[0] = (u32)(s32)(128);

label_7F24B620:
    ctx->pc = 0x7F24B620u;
    // 7F24B620: stb     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F24B624:
    // 7F24B624: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F24B628:
    // 7F24B628: li      r3, 64
    ctx->gpr[3] = (u32)(s32)(64);

label_7F24B62C:
    // 7F24B62C: cmpwi   r8, 0
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

label_7F24B630:
    ctx->pc = 0x7F24B630u;
    // 7F24B630: stb     r4, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F24B634:
    // 7F24B634: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F24B638:
    ctx->pc = 0x7F24B638u;
    // 7F24B638: stb     r4, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F24B63C:
    ctx->pc = 0x7F24B63Cu;
    // 7F24B63C: stb     r3, 3(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F24B640:
    ctx->pc = 0x7F24B640u;
    // 7F24B640: sth     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F24B644:
    // 7F24B644: bc    4, 2, 0x7F24B658
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24B658;
        }
    }

label_7F24B648:
    ctx->downcount -= 4;
    // 7F24B648: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F24B64C:
    // 7F24B64C: addi    r0, r3, -28673
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-28673);

label_7F24B650:
    ctx->pc = 0x7F24B650u;
    // 7F24B650: sth     r0, 10(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F24B654:
    // 7F24B654: b       0x7F24B660
    {
            goto label_7F24B660;
    }

label_7F24B658:
    ctx->downcount -= 2;
    // 7F24B658: li      r0, 4095
    ctx->gpr[0] = (u32)(s32)(4095);

label_7F24B65C:
    ctx->pc = 0x7F24B65Cu;
    // 7F24B65C: sth     r0, 10(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F24B660:
    ctx->downcount -= 3;
    // 7F24B660: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_7F24B664:
    // 7F24B664: addi    r5, r5, 12
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12);

label_7F24B668:
    // 7F24B668: bc    16, 0, 0x7F24B5E8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24B5E8u;
                return;
            }
            goto label_7F24B5E8;
        }
    }

label_7F24B66C:
    ctx->pc = 0x7F24B66Cu;
    ctx->downcount -= 4;
    // 7F24B66C: lwz     r3, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B670:
    ctx->pc = 0x7F24B670u;
    // 7F24B670: li      r5, 24
    ctx->gpr[5] = (u32)(s32)(24);

label_7F24B674:
    ctx->pc = 0x7F24B674u;
    // 7F24B674: lwz     r4, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24B678:
    ctx->pc = 0x7F24B678u;
    // 7F24B678: bl      0x8000519C
    {
            ctx->lr = 0x7F24B67Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F24B67C:
    ctx->pc = 0x7F24B67Cu;
    ctx->downcount -= 4;
    // 7F24B67C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F24B680:
    ctx->pc = 0x7F24B680u;
    // 7F24B680: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24B684:
    ctx->pc = 0x7F24B684u;
    // 7F24B684: addi    r3, r3, 12924
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12924);

label_7F24B688:
    ctx->pc = 0x7F24B688u;
    // 7F24B688: bl      0x80025A3C
    {
            ctx->lr = 0x7F24B68Cu;
            ctx->pc = 0x80025A3Cu;
            return;
    }

label_7F24B68C:
    ctx->pc = 0x7F24B68Cu;
    ctx->downcount -= 9;
    // 7F24B68C: lwz     r4, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24B690:
    ctx->pc = 0x7F24B690u;
    // 7F24B690: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24B694:
    ctx->pc = 0x7F24B694u;
    // 7F24B694: lfs     f0, 20848(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24B694u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20848);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24B698:
    ctx->pc = 0x7F24B698u;
    // 7F24B698: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F24B69C:
    ctx->pc = 0x7F24B69Cu;
    // 7F24B69C: ori     r4, r4, 0x3000
    ctx->gpr[4] = ctx->gpr[4] | 0x3000u;

label_7F24B6A0:
    ctx->pc = 0x7F24B6A0u;
    // 7F24B6A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F24B6A4:
    ctx->pc = 0x7F24B6A4u;
    // 7F24B6A4: stw     r4, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F24B6A8:
    ctx->pc = 0x7F24B6A8u;
    // 7F24B6A8: stfs     f0, 564(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F24B6A8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(564);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F24B6AC:
    ctx->pc = 0x7F24B6ACu;
    // 7F24B6AC: stw     r0, 572(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(572);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B6B0:
    ctx->pc = 0x7F24B6B0u;
    ctx->downcount -= 16;
    // 7F24B6B0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F24B6B4:
    ctx->pc = 0x7F24B6B4u;
    // 7F24B6B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B6B8:
    ctx->pc = 0x7F24B6B8u;
    // 7F24B6B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24B6BC:
    ctx->pc = 0x7F24B6BCu;
    // 7F24B6BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F24B6C0:
    ctx->pc = 0x7F24B6C0u;
    // 7F24B6C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F24B6C4:
    ctx->pc = 0x7F24B6C4u;
    ctx->downcount -= 18;
    // 7F24B6C4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24B6C8:
    ctx->pc = 0x7F24B6C8u;
    // 7F24B6C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24B6CC:
    ctx->pc = 0x7F24B6CCu;
    // 7F24B6CC: lis     r4, 102
    ctx->gpr[4] = ((u32)(s32)(102) << 16);

label_7F24B6D0:
    ctx->pc = 0x7F24B6D0u;
    // 7F24B6D0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B6D4:
    ctx->pc = 0x7F24B6D4u;
    // 7F24B6D4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F24B6D8:
    ctx->pc = 0x7F24B6D8u;
    // 7F24B6D8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24B6DC:
    ctx->pc = 0x7F24B6DCu;
    // 7F24B6DC: addi    r3, r4, 30416
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(30416);

label_7F24B6E0:
    ctx->pc = 0x7F24B6E0u;
    // 7F24B6E0: bl      0x7F3B6420
    {
            ctx->lr = 0x7F24B6E4u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F24B6E4:
    ctx->pc = 0x7F24B6E4u;
    ctx->downcount -= 7;
    // 7F24B6E4: lis     r5, 14
    ctx->gpr[5] = ((u32)(s32)(14) << 16);

label_7F24B6E8:
    ctx->pc = 0x7F24B6E8u;
    // 7F24B6E8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24B6EC:
    ctx->pc = 0x7F24B6ECu;
    // 7F24B6EC: addi    r3, r5, 4
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(4);

label_7F24B6F0:
    ctx->pc = 0x7F24B6F0u;
    // 7F24B6F0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F24B6F4:
    ctx->pc = 0x7F24B6F4u;
    // 7F24B6F4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F24B6F8:
    ctx->pc = 0x7F24B6F8u;
    // 7F24B6F8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F24B6FC:
    ctx->pc = 0x7F24B6FCu;
    // 7F24B6FC: bl      0x7F3C2408
    {
            ctx->lr = 0x7F24B700u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F24B700:
    ctx->pc = 0x7F24B700u;
    ctx->downcount -= 3;
    // 7F24B700: or.   r31, r3, r3
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

label_7F24B704:
    ctx->pc = 0x7F24B704u;
    // 7F24B704: stw     r3, 460(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(460);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F24B708:
    ctx->pc = 0x7F24B708u;
    // 7F24B708: bc    4, 2, 0x7F24B714
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24B714;
        }
    }

label_7F24B70C:
    ctx->pc = 0x7F24B70Cu;
    ctx->downcount -= 2;
    // 7F24B70C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F24B710:
    ctx->pc = 0x7F24B710u;
    // 7F24B710: b       0x7F24B79C
    {
            goto label_7F24B79C;
    }

label_7F24B714:
    ctx->pc = 0x7F24B714u;
    ctx->downcount -= 2;
    // 7F24B714: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F24B718:
    ctx->pc = 0x7F24B718u;
    // 7F24B718: bl      0x7F3C2534
    {
            ctx->lr = 0x7F24B71Cu;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F24B71C:
    ctx->pc = 0x7F24B71Cu;
    ctx->downcount -= 11;
    // 7F24B71C: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F24B720:
    ctx->pc = 0x7F24B720u;
    // 7F24B720: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24B724:
    ctx->pc = 0x7F24B724u;
    // 7F24B724: stw     r0, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B728:
    ctx->pc = 0x7F24B728u;
    // 7F24B728: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F24B72C:
    ctx->pc = 0x7F24B72Cu;
    // 7F24B72C: stw     r5, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F24B730:
    ctx->pc = 0x7F24B730u;
    // 7F24B730: lwz     r6, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24B734:
    ctx->pc = 0x7F24B734u;
    // 7F24B734: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F24B738:
    ctx->pc = 0x7F24B738u;
    // 7F24B738: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F24B73C:
    ctx->pc = 0x7F24B73Cu;
    // 7F24B73C: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F24B740:
    ctx->pc = 0x7F24B740u;
    // 7F24B740: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_7F24B744:
    loop_7F24B744(ctx);
    if (ctx->pc == 0x7F24B76Cu) goto label_7F24B76C;
    return;
label_7F24B748:
    ctx->pc = 0x7F24B748u;
    // 7F24B748: sth     r5, 6(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F24B74C:
    ctx->pc = 0x7F24B74Cu;
    // 7F24B74C: sth     r4, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F24B750:
    ctx->pc = 0x7F24B750u;
    // 7F24B750: sth     r4, 14(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F24B754:
    ctx->pc = 0x7F24B754u;
    // 7F24B754: stb     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F24B758:
    ctx->pc = 0x7F24B758u;
    // 7F24B758: stb     r0, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F24B75C:
    ctx->pc = 0x7F24B75Cu;
    // 7F24B75C: stb     r0, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F24B760:
    ctx->pc = 0x7F24B760u;
    // 7F24B760: stb     r3, 3(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F24B764:
    // 7F24B764: addi    r6, r6, 16
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(16);

label_7F24B768:
    // 7F24B768: bc    16, 0, 0x7F24B744
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24B744u;
                return;
            }
            goto label_7F24B744;
        }
    }

label_7F24B76C:
    ctx->pc = 0x7F24B76Cu;
    ctx->downcount -= 4;
    // 7F24B76C: lwz     r3, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B770:
    ctx->pc = 0x7F24B770u;
    // 7F24B770: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_7F24B774:
    ctx->pc = 0x7F24B774u;
    // 7F24B774: lwz     r4, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24B778:
    ctx->pc = 0x7F24B778u;
    // 7F24B778: bl      0x8000519C
    {
            ctx->lr = 0x7F24B77Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F24B77C:
    ctx->pc = 0x7F24B77Cu;
    ctx->downcount -= 4;
    // 7F24B77C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F24B780:
    ctx->pc = 0x7F24B780u;
    // 7F24B780: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24B784:
    ctx->pc = 0x7F24B784u;
    // 7F24B784: addi    r3, r3, 12924
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12924);

label_7F24B788:
    ctx->pc = 0x7F24B788u;
    // 7F24B788: bl      0x80025A3C
    {
            ctx->lr = 0x7F24B78Cu;
            ctx->pc = 0x80025A3Cu;
            return;
    }

label_7F24B78C:
    ctx->pc = 0x7F24B78Cu;
    ctx->downcount -= 4;
    // 7F24B78C: lwz     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B790:
    ctx->pc = 0x7F24B790u;
    // 7F24B790: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F24B794:
    ctx->pc = 0x7F24B794u;
    // 7F24B794: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F24B798:
    ctx->pc = 0x7F24B798u;
    // 7F24B798: stw     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B79C:
    ctx->pc = 0x7F24B79Cu;
    ctx->downcount -= 16;
    // 7F24B79C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F24B7A0:
    ctx->pc = 0x7F24B7A0u;
    // 7F24B7A0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B7A4:
    ctx->pc = 0x7F24B7A4u;
    // 7F24B7A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24B7A8:
    ctx->pc = 0x7F24B7A8u;
    // 7F24B7A8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F24B7AC:
    ctx->pc = 0x7F24B7ACu;
    // 7F24B7AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F24B7B0:
    ctx->pc = 0x7F24B7B0u;
    ctx->downcount -= 25;
    // 7F24B7B0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24B7B4:
    ctx->pc = 0x7F24B7B4u;
    // 7F24B7B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24B7B8:
    ctx->pc = 0x7F24B7B8u;
    // 7F24B7B8: lis     r4, 1285
    ctx->gpr[4] = ((u32)(s32)(1285) << 16);

label_7F24B7BC:
    ctx->pc = 0x7F24B7BCu;
    // 7F24B7BC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24B7C0:
    ctx->pc = 0x7F24B7C0u;
    // 7F24B7C0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B7C4:
    ctx->pc = 0x7F24B7C4u;
    // 7F24B7C4: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

label_7F24B7C8:
    ctx->pc = 0x7F24B7C8u;
    // 7F24B7C8: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F24B7CC:
    ctx->pc = 0x7F24B7CCu;
    // 7F24B7CC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F24B7D0:
    ctx->pc = 0x7F24B7D0u;
    // 7F24B7D0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24B7D4:
    ctx->pc = 0x7F24B7D4u;
    // 7F24B7D4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F24B7D8:
    ctx->pc = 0x7F24B7D8u;
    // 7F24B7D8: addi    r7, r3, 12832
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F24B7DC:
    ctx->pc = 0x7F24B7DCu;
    // 7F24B7DC: addi    r31, r30, 144
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(144);

label_7F24B7E0:
    ctx->pc = 0x7F24B7E0u;
    // 7F24B7E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24B7E4:
    ctx->pc = 0x7F24B7E4u;
    // 7F24B7E4: or   r8, r7, r7
    {
        ctx->gpr[8] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F24B7E8:
    ctx->pc = 0x7F24B7E8u;
    // 7F24B7E8: bl      0x7F014788
    {
            ctx->lr = 0x7F24B7ECu;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F24B7EC:
    ctx->pc = 0x7F24B7ECu;
    ctx->downcount -= 4;
    // 7F24B7EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24B7F0:
    ctx->pc = 0x7F24B7F0u;
    // 7F24B7F0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F24B7F4:
    ctx->pc = 0x7F24B7F4u;
    // 7F24B7F4: li      r5, 1024
    ctx->gpr[5] = (u32)(s32)(1024);

label_7F24B7F8:
    ctx->pc = 0x7F24B7F8u;
    // 7F24B7F8: bl      0x7F014B60
    {
            ctx->lr = 0x7F24B7FCu;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F24B7FC:
    ctx->pc = 0x7F24B7FCu;
    ctx->downcount -= 5;
    // 7F24B7FC: lis     r4, 32549
    ctx->gpr[4] = ((u32)(s32)(32549) << 16);

label_7F24B800:
    ctx->pc = 0x7F24B800u;
    // 7F24B800: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24B804:
    ctx->pc = 0x7F24B804u;
    // 7F24B804: addi    r4, r4, -24080
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24080);

label_7F24B808:
    ctx->pc = 0x7F24B808u;
    // 7F24B808: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F24B80C:
    ctx->pc = 0x7F24B80Cu;
    // 7F24B80C: bl      0x7F014B6C
    {
            ctx->lr = 0x7F24B810u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F24B810:
    ctx->pc = 0x7F24B810u;
    ctx->downcount -= 16;
    // 7F24B810: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F24B814:
    ctx->pc = 0x7F24B814u;
    // 7F24B814: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B818:
    ctx->pc = 0x7F24B818u;
    // 7F24B818: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24B81C:
    ctx->pc = 0x7F24B81Cu;
    // 7F24B81C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F24B820:
    ctx->pc = 0x7F24B820u;
    // 7F24B820: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F24B824:
    ctx->pc = 0x7F24B824u;
    ctx->downcount -= 27;
    // 7F24B824: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24B828:
    ctx->pc = 0x7F24B828u;
    // 7F24B828: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24B82C:
    ctx->pc = 0x7F24B82Cu;
    // 7F24B82C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B830:
    ctx->pc = 0x7F24B830u;
    // 7F24B830: stmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F24B834:
    ctx->pc = 0x7F24B834u;
    // 7F24B834: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F24B838:
    ctx->pc = 0x7F24B838u;
    // 7F24B838: lis     r6, 32584
    ctx->gpr[6] = ((u32)(s32)(32584) << 16);

label_7F24B83C:
    ctx->pc = 0x7F24B83Cu;
    // 7F24B83C: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24B840:
    ctx->pc = 0x7F24B840u;
    // 7F24B840: addi    r7, r6, 11620
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(11620);

label_7F24B844:
    ctx->pc = 0x7F24B844u;
    // 7F24B844: rlwinm r31, r30, 3, 0, 28
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[30], 3u) & 0xFFFFFFF8u;
    }

label_7F24B848:
    ctx->pc = 0x7F24B848u;
    // 7F24B848: add   r24, r7, r31
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[24] = res;
    }

label_7F24B84C:
    ctx->pc = 0x7F24B84Cu;
    // 7F24B84C: lis     r6, 32584
    ctx->gpr[6] = ((u32)(s32)(32584) << 16);

label_7F24B850:
    ctx->pc = 0x7F24B850u;
    // 7F24B850: cmpwi   r30, 9
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(9);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24B854:
    ctx->pc = 0x7F24B854u;
    // 7F24B854: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F24B858:
    ctx->pc = 0x7F24B858u;
    // 7F24B858: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F24B85C:
    ctx->pc = 0x7F24B85Cu;
    // 7F24B85C: lwzu     r0, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[24] = ea;
    }

label_7F24B860:
    ctx->pc = 0x7F24B860u;
    // 7F24B860: stw     r0, 24804(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24804);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B864:
    ctx->pc = 0x7F24B864u;
    // 7F24B864: bc    12, 2, 0x7F24B878
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24B878;
        }
    }

label_7F24B868:
    ctx->pc = 0x7F24B868u;
    ctx->downcount -= 2;
    // 7F24B868: cmplwi  r30, 0x0003
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(0x0003u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24B86C:
    ctx->pc = 0x7F24B86Cu;
    // 7F24B86C: bc    4, 1, 0x7F24B878
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24B878;
        }
    }

label_7F24B870:
    ctx->pc = 0x7F24B870u;
    ctx->downcount -= 2;
    // 7F24B870: cmpwi   r30, 8
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24B874:
    ctx->pc = 0x7F24B874u;
    // 7F24B874: bc    4, 2, 0x7F24B8F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24B8F4;
        }
    }

label_7F24B878:
    ctx->pc = 0x7F24B878u;
    ctx->downcount -= 7;
    // 7F24B878: cmpwi   r30, 9
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(9);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24B87C:
    ctx->pc = 0x7F24B87Cu;
    // 7F24B87C: lwz     r5, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24B880:
    ctx->pc = 0x7F24B880u;
    // 7F24B880: lwz     r6, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24B884:
    ctx->pc = 0x7F24B884u;
    // 7F24B884: addi    r3, r27, 464
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(464);

label_7F24B888:
    ctx->pc = 0x7F24B888u;
    // 7F24B888: addi    r4, r27, 48
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(48);

label_7F24B88C:
    ctx->pc = 0x7F24B88Cu;
    // 7F24B88C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F24B890:
    ctx->pc = 0x7F24B890u;
    // 7F24B890: bc    12, 2, 0x7F24B898
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24B898;
        }
    }

label_7F24B894:
    ctx->pc = 0x7F24B894u;
    ctx->downcount -= 1;
    // 7F24B894: or   r0, r30, r30
    {
        ctx->gpr[0] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F24B898:
    ctx->pc = 0x7F24B898u;
    ctx->downcount -= 8;
    // 7F24B898: lis     r8, 32584
    ctx->gpr[8] = ((u32)(s32)(32584) << 16);

label_7F24B89C:
    ctx->pc = 0x7F24B89Cu;
    // 7F24B89C: lis     r7, 32584
    ctx->gpr[7] = ((u32)(s32)(32584) << 16);

label_7F24B8A0:
    ctx->pc = 0x7F24B8A0u;
    // 7F24B8A0: addi    r7, r7, 11620
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(11620);

label_7F24B8A4:
    ctx->pc = 0x7F24B8A4u;
    // 7F24B8A4: rlwinm r25, r0, 2, 0, 29
    {
        ctx->gpr[25] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F24B8A8:
    ctx->pc = 0x7F24B8A8u;
    // 7F24B8A8: addi    r26, r8, 11700
    ctx->gpr[26] = ctx->gpr[8] + (u32)(s32)(11700);

label_7F24B8AC:
    ctx->pc = 0x7F24B8ACu;
    // 7F24B8AC: lwzx    r8, r7, r31
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[31];
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F24B8B0:
    ctx->pc = 0x7F24B8B0u;
    // 7F24B8B0: lwzx    r7, r26, r25
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[25];
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F24B8B4:
    ctx->pc = 0x7F24B8B4u;
    // 7F24B8B4: bl      0x7F25CB2C
    {
            ctx->lr = 0x7F24B8B8u;
            ctx->pc = 0x7F25CB2Cu;
            return;
    }

label_7F24B8B8:
    ctx->pc = 0x7F24B8B8u;
    ctx->downcount -= 7;
    // 7F24B8B8: lwz     r5, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24B8BC:
    ctx->pc = 0x7F24B8BCu;
    // 7F24B8BC: addi    r3, r27, 504
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(504);

label_7F24B8C0:
    ctx->pc = 0x7F24B8C0u;
    // 7F24B8C0: lwz     r6, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24B8C4:
    ctx->pc = 0x7F24B8C4u;
    // 7F24B8C4: addi    r4, r27, 92
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(92);

label_7F24B8C8:
    ctx->pc = 0x7F24B8C8u;
    // 7F24B8C8: lwzx    r7, r26, r25
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[25];
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F24B8CC:
    ctx->pc = 0x7F24B8CCu;
    // 7F24B8CC: lwz     r8, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F24B8D0:
    ctx->pc = 0x7F24B8D0u;
    // 7F24B8D0: bl      0x7F25CB2C
    {
            ctx->lr = 0x7F24B8D4u;
            ctx->pc = 0x7F25CB2Cu;
            return;
    }

label_7F24B8D4:
    ctx->pc = 0x7F24B8D4u;
    ctx->downcount -= 3;
    // 7F24B8D4: lwz     r0, 48(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B8D8:
    ctx->pc = 0x7F24B8D8u;
    // 7F24B8D8: cmplwi  r0, 0x0000
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

label_7F24B8DC:
    ctx->pc = 0x7F24B8DCu;
    // 7F24B8DC: bc    12, 2, 0x7F24B8EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24B8EC;
        }
    }

label_7F24B8E0:
    ctx->pc = 0x7F24B8E0u;
    ctx->downcount -= 3;
    // 7F24B8E0: lwz     r0, 92(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B8E4:
    ctx->pc = 0x7F24B8E4u;
    // 7F24B8E4: cmplwi  r0, 0x0000
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

label_7F24B8E8:
    ctx->pc = 0x7F24B8E8u;
    // 7F24B8E8: bc    4, 2, 0x7F24B964
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24B964;
        }
    }

label_7F24B8EC:
    ctx->pc = 0x7F24B8ECu;
    ctx->downcount -= 2;
    // 7F24B8EC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F24B8F0:
    ctx->pc = 0x7F24B8F0u;
    // 7F24B8F0: b       0x7F24BCA0
    {
            goto label_7F24BCA0;
    }

label_7F24B8F4:
    ctx->pc = 0x7F24B8F4u;
    ctx->downcount -= 5;
    // 7F24B8F4: addi    r25, r27, 48
    ctx->gpr[25] = ctx->gpr[27] + (u32)(s32)(48);

label_7F24B8F8:
    ctx->pc = 0x7F24B8F8u;
    // 7F24B8F8: lwzx    r4, r7, r31
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[31];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24B8FC:
    ctx->pc = 0x7F24B8FCu;
    // 7F24B8FC: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24B900:
    ctx->pc = 0x7F24B900u;
    // 7F24B900: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_7F24B904:
    ctx->pc = 0x7F24B904u;
    // 7F24B904: bl      0x7F04272C
    {
            ctx->lr = 0x7F24B908u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F24B908:
    ctx->pc = 0x7F24B908u;
    ctx->downcount -= 3;
    // 7F24B908: lwz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B90C:
    ctx->pc = 0x7F24B90Cu;
    // 7F24B90C: cmplwi  r0, 0x0000
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

label_7F24B910:
    ctx->pc = 0x7F24B910u;
    // 7F24B910: bc    4, 2, 0x7F24B91C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24B91C;
        }
    }

label_7F24B914:
    ctx->pc = 0x7F24B914u;
    ctx->downcount -= 2;
    // 7F24B914: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F24B918:
    ctx->pc = 0x7F24B918u;
    // 7F24B918: b       0x7F24BCA0
    {
            goto label_7F24BCA0;
    }

label_7F24B91C:
    ctx->pc = 0x7F24B91Cu;
    ctx->downcount -= 4;
    // 7F24B91C: lwz     r4, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24B920:
    ctx->pc = 0x7F24B920u;
    // 7F24B920: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24B924:
    ctx->pc = 0x7F24B924u;
    // 7F24B924: lwz     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24B928:
    ctx->pc = 0x7F24B928u;
    // 7F24B928: bl      0x7F042B74
    {
            ctx->lr = 0x7F24B92Cu;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F24B92C:
    ctx->pc = 0x7F24B92Cu;
    ctx->downcount -= 5;
    // 7F24B92C: addi    r25, r27, 92
    ctx->gpr[25] = ctx->gpr[27] + (u32)(s32)(92);

label_7F24B930:
    ctx->pc = 0x7F24B930u;
    // 7F24B930: lwz     r4, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24B934:
    ctx->pc = 0x7F24B934u;
    // 7F24B934: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24B938:
    ctx->pc = 0x7F24B938u;
    // 7F24B938: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F24B93C:
    ctx->pc = 0x7F24B93Cu;
    // 7F24B93C: bl      0x7F04272C
    {
            ctx->lr = 0x7F24B940u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F24B940:
    ctx->pc = 0x7F24B940u;
    ctx->downcount -= 3;
    // 7F24B940: lwz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B944:
    ctx->pc = 0x7F24B944u;
    // 7F24B944: cmplwi  r0, 0x0000
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

label_7F24B948:
    ctx->pc = 0x7F24B948u;
    // 7F24B948: bc    4, 2, 0x7F24B954
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24B954;
        }
    }

label_7F24B94C:
    ctx->pc = 0x7F24B94Cu;
    ctx->downcount -= 2;
    // 7F24B94C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F24B950:
    ctx->pc = 0x7F24B950u;
    // 7F24B950: b       0x7F24BCA0
    {
            goto label_7F24BCA0;
    }

label_7F24B954:
    ctx->pc = 0x7F24B954u;
    ctx->downcount -= 4;
    // 7F24B954: lwz     r4, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24B958:
    ctx->pc = 0x7F24B958u;
    // 7F24B958: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24B95C:
    ctx->pc = 0x7F24B95Cu;
    // 7F24B95C: lwz     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24B960:
    ctx->pc = 0x7F24B960u;
    // 7F24B960: bl      0x7F042B74
    {
            ctx->lr = 0x7F24B964u;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F24B964:
    ctx->pc = 0x7F24B964u;
    ctx->downcount -= 18;
    // 7F24B964: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F24B968:
    ctx->pc = 0x7F24B968u;
    // 7F24B968: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F24B96C:
    ctx->pc = 0x7F24B96Cu;
    // 7F24B96C: addi    r7, r3, 11620
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(11620);

label_7F24B970:
    ctx->pc = 0x7F24B970u;
    // 7F24B970: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F24B974:
    ctx->pc = 0x7F24B974u;
    // 7F24B974: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F24B978:
    ctx->pc = 0x7F24B978u;
    // 7F24B978: lwzx    r8, r7, r31
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[31];
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F24B97C:
    ctx->pc = 0x7F24B97Cu;
    // 7F24B97C: addi    r7, r6, -5688
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-5688);

label_7F24B980:
    ctx->pc = 0x7F24B980u;
    // 7F24B980: addi    r6, r27, 48
    ctx->gpr[6] = ctx->gpr[27] + (u32)(s32)(48);

label_7F24B984:
    ctx->pc = 0x7F24B984u;
    // 7F24B984: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F24B988:
    ctx->pc = 0x7F24B988u;
    // 7F24B988: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F24B98C:
    ctx->pc = 0x7F24B98Cu;
    // 7F24B98C: addi    r0, r27, 92
    ctx->gpr[0] = ctx->gpr[27] + (u32)(s32)(92);

label_7F24B990:
    ctx->pc = 0x7F24B990u;
    // 7F24B990: stw     r8, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F24B994:
    ctx->pc = 0x7F24B994u;
    // 7F24B994: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B998:
    ctx->pc = 0x7F24B998u;
    // 7F24B998: stw     r6, -5672(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5672);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F24B99C:
    ctx->pc = 0x7F24B99Cu;
    // 7F24B99C: stw     r0, -5676(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5676);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B9A0:
    ctx->pc = 0x7F24B9A0u;
    // 7F24B9A0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B9A4:
    ctx->pc = 0x7F24B9A4u;
    // 7F24B9A4: lwz     r4, 48(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24B9A8:
    ctx->pc = 0x7F24B9A8u;
    // 7F24B9A8: bl      0x7F3B0938
    {
            ctx->lr = 0x7F24B9ACu;
            ctx->pc = 0x7F3B0938u;
            return;
    }

label_7F24B9AC:
    ctx->pc = 0x7F24B9ACu;
    ctx->downcount -= 6;
    // 7F24B9AC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F24B9B0:
    ctx->pc = 0x7F24B9B0u;
    // 7F24B9B0: lwz     r4, 92(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24B9B4:
    ctx->pc = 0x7F24B9B4u;
    // 7F24B9B4: addi    r3, r3, -5668
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5668);

label_7F24B9B8:
    ctx->pc = 0x7F24B9B8u;
    // 7F24B9B8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B9BC:
    ctx->pc = 0x7F24B9BCu;
    // 7F24B9BC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B9C0:
    ctx->pc = 0x7F24B9C0u;
    // 7F24B9C0: bl      0x7F3B0938
    {
            ctx->lr = 0x7F24B9C4u;
            ctx->pc = 0x7F3B0938u;
            return;
    }

label_7F24B9C4:
    ctx->pc = 0x7F24B9C4u;
    ctx->downcount -= 9;
    // 7F24B9C4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F24B9C8:
    ctx->pc = 0x7F24B9C8u;
    // 7F24B9C8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F24B9CC:
    ctx->pc = 0x7F24B9CCu;
    // 7F24B9CC: stw     r0, 612(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(612);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24B9D0:
    ctx->pc = 0x7F24B9D0u;
    // 7F24B9D0: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F24B9D4:
    ctx->pc = 0x7F24B9D4u;
    // 7F24B9D4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B9D8:
    ctx->pc = 0x7F24B9D8u;
    // 7F24B9D8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24B9DC:
    ctx->pc = 0x7F24B9DCu;
    // 7F24B9DC: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24B9E0:
    ctx->pc = 0x7F24B9E0u;
    // 7F24B9E0: rlwinm. r0, r0, 0, 19, 19
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

label_7F24B9E4:
    ctx->pc = 0x7F24B9E4u;
    // 7F24B9E4: bc    12, 2, 0x7F24B9FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24B9FC;
        }
    }

label_7F24B9E8:
    ctx->pc = 0x7F24B9E8u;
    ctx->downcount -= 5;
    // 7F24B9E8: lis     r4, 16384
    ctx->gpr[4] = ((u32)(s32)(16384) << 16);

label_7F24B9EC:
    ctx->pc = 0x7F24B9ECu;
    // 7F24B9EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F24B9F0:
    ctx->pc = 0x7F24B9F0u;
    // 7F24B9F0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F24B9F4:
    ctx->pc = 0x7F24B9F4u;
    // 7F24B9F4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24B9F8:
    ctx->pc = 0x7F24B9F8u;
    // 7F24B9F8: bl      0x7F07AA5C
    {
            ctx->lr = 0x7F24B9FCu;
            ctx->pc = 0x7F07AA5Cu;
            return;
    }

label_7F24B9FC:
    ctx->pc = 0x7F24B9FCu;
    ctx->downcount -= 7;
    // 7F24B9FC: lwz     r4, 92(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24BA00:
    ctx->pc = 0x7F24BA00u;
    // 7F24BA00: lis     r3, 104
    ctx->gpr[3] = ((u32)(s32)(104) << 16);

label_7F24BA04:
    ctx->pc = 0x7F24BA04u;
    // 7F24BA04: addi    r3, r3, -23184
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23184);

label_7F24BA08:
    ctx->pc = 0x7F24BA08u;
    // 7F24BA08: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24BA0C:
    ctx->pc = 0x7F24BA0Cu;
    // 7F24BA0C: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F24BA10:
    ctx->pc = 0x7F24BA10u;
    // 7F24BA10: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24BA14:
    ctx->pc = 0x7F24BA14u;
    // 7F24BA14: bl      0x7F3B6420
    {
            ctx->lr = 0x7F24BA18u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F24BA18:
    ctx->pc = 0x7F24BA18u;
    ctx->downcount -= 3;
    // 7F24BA18: stw     r3, 560(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(560);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F24BA1C:
    ctx->pc = 0x7F24BA1Cu;
    // 7F24BA1C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F24BA20:
    ctx->pc = 0x7F24BA20u;
    // 7F24BA20: bl      0x7F24B580
    {
            ctx->lr = 0x7F24BA24u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24B580u;
                return;
            }
            goto label_7F24B580;
    }

label_7F24BA24:
    ctx->pc = 0x7F24BA24u;
    ctx->downcount -= 2;
    // 7F24BA24: cmpwi   r3, 0
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

label_7F24BA28:
    ctx->pc = 0x7F24BA28u;
    // 7F24BA28: bc    4, 0, 0x7F24BA34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24BA34;
        }
    }

label_7F24BA2C:
    ctx->pc = 0x7F24BA2Cu;
    ctx->downcount -= 2;
    // 7F24BA2C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F24BA30:
    ctx->pc = 0x7F24BA30u;
    // 7F24BA30: b       0x7F24BCA0
    {
            goto label_7F24BCA0;
    }

label_7F24BA34:
    ctx->pc = 0x7F24BA34u;
    ctx->downcount -= 2;
    // 7F24BA34: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F24BA38:
    ctx->pc = 0x7F24BA38u;
    // 7F24BA38: bl      0x7F24B6C4
    {
            ctx->lr = 0x7F24BA3Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24B6C4u;
                return;
            }
            goto label_7F24B6C4;
    }

label_7F24BA3C:
    ctx->pc = 0x7F24BA3Cu;
    ctx->downcount -= 2;
    // 7F24BA3C: cmpwi   r3, 0
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

label_7F24BA40:
    ctx->pc = 0x7F24BA40u;
    // 7F24BA40: bc    4, 0, 0x7F24BA4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24BA4C;
        }
    }

label_7F24BA44:
    ctx->pc = 0x7F24BA44u;
    ctx->downcount -= 2;
    // 7F24BA44: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F24BA48:
    ctx->pc = 0x7F24BA48u;
    // 7F24BA48: b       0x7F24BCA0
    {
            goto label_7F24BCA0;
    }

label_7F24BA4C:
    ctx->pc = 0x7F24BA4Cu;
    ctx->downcount -= 2;
    // 7F24BA4C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F24BA50:
    ctx->pc = 0x7F24BA50u;
    // 7F24BA50: bl      0x7F24B7B0
    {
            ctx->lr = 0x7F24BA54u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24B7B0u;
                return;
            }
            goto label_7F24B7B0;
    }

label_7F24BA54:
    ctx->pc = 0x7F24BA54u;
    ctx->downcount -= 5;
    // 7F24BA54: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24BA58:
    ctx->pc = 0x7F24BA58u;
    // 7F24BA58: cmpwi   r30, 9
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(9);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24BA5C:
    ctx->pc = 0x7F24BA5Cu;
    // 7F24BA5C: stw     r0, 580(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(580);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24BA60:
    ctx->pc = 0x7F24BA60u;
    // 7F24BA60: stw     r0, 600(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(600);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24BA64:
    ctx->pc = 0x7F24BA64u;
    // 7F24BA64: bc    12, 2, 0x7F24BA7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24BA7C;
        }
    }

label_7F24BA68:
    ctx->pc = 0x7F24BA68u;
    ctx->downcount -= 3;
    // 7F24BA68: addi    r0, r30, -1
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(-1);

label_7F24BA6C:
    ctx->pc = 0x7F24BA6Cu;
    // 7F24BA6C: cmplwi  r0, 0x0001
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

label_7F24BA70:
    ctx->pc = 0x7F24BA70u;
    // 7F24BA70: bc    4, 1, 0x7F24BA7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24BA7C;
        }
    }

label_7F24BA74:
    ctx->pc = 0x7F24BA74u;
    ctx->downcount -= 2;
    // 7F24BA74: cmpwi   r30, 8
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24BA78:
    ctx->pc = 0x7F24BA78u;
    // 7F24BA78: bc    4, 2, 0x7F24BAB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24BAB8;
        }
    }

label_7F24BA7C:
    ctx->pc = 0x7F24BA7Cu;
    ctx->downcount -= 4;
    // 7F24BA7C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F24BA80:
    ctx->pc = 0x7F24BA80u;
    // 7F24BA80: lwz     r0, -6180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24BA84:
    ctx->pc = 0x7F24BA84u;
    // 7F24BA84: cmpwi   r0, 1
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

label_7F24BA88:
    ctx->pc = 0x7F24BA88u;
    // 7F24BA88: bc    4, 2, 0x7F24BAB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24BAB8;
        }
    }

label_7F24BA8C:
    ctx->pc = 0x7F24BA8Cu;
    ctx->downcount -= 8;
    // 7F24BA8C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F24BA90:
    ctx->pc = 0x7F24BA90u;
    // 7F24BA90: lwz     r5, 48(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24BA94:
    ctx->pc = 0x7F24BA94u;
    // 7F24BA94: lwz     r6, -5664(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5664);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24BA98:
    ctx->pc = 0x7F24BA98u;
    // 7F24BA98: addi    r4, r27, 600
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(600);

label_7F24BA9C:
    ctx->pc = 0x7F24BA9Cu;
    // 7F24BA9C: addi    r3, r5, 4
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(4);

label_7F24BAA0:
    ctx->pc = 0x7F24BAA0u;
    // 7F24BAA0: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F24BAA4:
    ctx->pc = 0x7F24BAA4u;
    // 7F24BAA4: addi    r6, r6, 160
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(160);

label_7F24BAA8:
    ctx->pc = 0x7F24BAA8u;
    // 7F24BAA8: bl      0x7F207F3C
    {
            ctx->lr = 0x7F24BAACu;
            ctx->pc = 0x7F207F3Cu;
            return;
    }

label_7F24BAAC:
    ctx->pc = 0x7F24BAACu;
    ctx->downcount -= 3;
    // 7F24BAAC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24BAB0:
    ctx->pc = 0x7F24BAB0u;
    // 7F24BAB0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F24BAB4:
    ctx->pc = 0x7F24BAB4u;
    // 7F24BAB4: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F24BAB8u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F24BAB8:
    ctx->pc = 0x7F24BAB8u;
    ctx->downcount -= 5;
    // 7F24BAB8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F24BABC:
    ctx->pc = 0x7F24BABCu;
    // 7F24BABC: cmplwi  r30, 0x0009
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(0x0009u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24BAC0:
    ctx->pc = 0x7F24BAC0u;
    // 7F24BAC0: stw     r0, 588(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(588);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24BAC4:
    ctx->pc = 0x7F24BAC4u;
    // 7F24BAC4: stw     r0, 592(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(592);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24BAC8:
    ctx->pc = 0x7F24BAC8u;
    // 7F24BAC8: bc    12, 1, 0x7F24BC9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24BC9C;
        }
    }

label_7F24BACC:
    ctx->pc = 0x7F24BACCu;
    ctx->downcount -= 7;
    // 7F24BACC: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F24BAD0:
    ctx->pc = 0x7F24BAD0u;
    // 7F24BAD0: rlwinm r0, r30, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 2u) & 0xFFFFFFFCu;
    }

label_7F24BAD4:
    ctx->pc = 0x7F24BAD4u;
    // 7F24BAD4: addi    r3, r3, 12232
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12232);

label_7F24BAD8:
    ctx->pc = 0x7F24BAD8u;
    // 7F24BAD8: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24BADC:
    ctx->pc = 0x7F24BADCu;
    // 7F24BADC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F24BAE0:
    ctx->pc = 0x7F24BAE0u;
    // 7F24BAE0: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F24BAE4:
    ctx->pc = 0x7F24BAE4u;
    ctx->downcount -= 7;
    // 7F24BAE4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F24BAE8:
    ctx->pc = 0x7F24BAE8u;
    // 7F24BAE8: addi    r3, r27, 588
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(588);

label_7F24BAEC:
    ctx->pc = 0x7F24BAECu;
    // 7F24BAEC: addi    r4, r4, 22156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22156);

label_7F24BAF0:
    ctx->pc = 0x7F24BAF0u;
    // 7F24BAF0: addi    r5, r27, 48
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(48);

label_7F24BAF4:
    ctx->pc = 0x7F24BAF4u;
    // 7F24BAF4: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24BAF8:
    ctx->pc = 0x7F24BAF8u;
    // 7F24BAF8: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F24BAFC:
    ctx->pc = 0x7F24BAFCu;
    // 7F24BAFC: bl      0x7F275D10
    {
            ctx->lr = 0x7F24BB00u;
            ctx->pc = 0x7F275D10u;
            return;
    }

label_7F24BB00:
    ctx->pc = 0x7F24BB00u;
    ctx->downcount -= 3;
    // 7F24BB00: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24BB04:
    ctx->pc = 0x7F24BB04u;
    // 7F24BB04: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F24BB08:
    ctx->pc = 0x7F24BB08u;
    // 7F24BB08: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F24BB0Cu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F24BB0C:
    ctx->pc = 0x7F24BB0Cu;
    ctx->downcount -= 7;
    // 7F24BB0C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F24BB10:
    ctx->pc = 0x7F24BB10u;
    // 7F24BB10: addi    r3, r27, 592
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(592);

label_7F24BB14:
    ctx->pc = 0x7F24BB14u;
    // 7F24BB14: addi    r4, r4, -5668
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5668);

label_7F24BB18:
    ctx->pc = 0x7F24BB18u;
    // 7F24BB18: addi    r5, r27, 92
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(92);

label_7F24BB1C:
    ctx->pc = 0x7F24BB1Cu;
    // 7F24BB1C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24BB20:
    ctx->pc = 0x7F24BB20u;
    // 7F24BB20: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F24BB24:
    ctx->pc = 0x7F24BB24u;
    // 7F24BB24: bl      0x7F275D10
    {
            ctx->lr = 0x7F24BB28u;
            ctx->pc = 0x7F275D10u;
            return;
    }

label_7F24BB28:
    ctx->pc = 0x7F24BB28u;
    ctx->downcount -= 3;
    // 7F24BB28: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24BB2C:
    ctx->pc = 0x7F24BB2Cu;
    // 7F24BB2C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F24BB30:
    ctx->pc = 0x7F24BB30u;
    // 7F24BB30: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F24BB34u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F24BB34:
    ctx->pc = 0x7F24BB34u;
    ctx->downcount -= 4;
    // 7F24BB34: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24BB38:
    ctx->pc = 0x7F24BB38u;
    // 7F24BB38: stw     r0, 588(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(588);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24BB3C:
    ctx->pc = 0x7F24BB3Cu;
    // 7F24BB3C: stw     r0, 592(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(592);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24BB40:
    ctx->pc = 0x7F24BB40u;
    // 7F24BB40: b       0x7F24BC9C
    {
            goto label_7F24BC9C;
    }

label_7F24BB44:
    ctx->pc = 0x7F24BB44u;
    ctx->downcount -= 7;
    // 7F24BB44: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F24BB48:
    ctx->pc = 0x7F24BB48u;
    // 7F24BB48: addi    r3, r27, 588
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(588);

label_7F24BB4C:
    ctx->pc = 0x7F24BB4Cu;
    // 7F24BB4C: addi    r4, r4, 22156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22156);

label_7F24BB50:
    ctx->pc = 0x7F24BB50u;
    // 7F24BB50: addi    r5, r27, 48
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(48);

label_7F24BB54:
    ctx->pc = 0x7F24BB54u;
    // 7F24BB54: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24BB58:
    ctx->pc = 0x7F24BB58u;
    // 7F24BB58: li      r6, 8
    ctx->gpr[6] = (u32)(s32)(8);

label_7F24BB5C:
    ctx->pc = 0x7F24BB5Cu;
    // 7F24BB5C: bl      0x7F275D10
    {
            ctx->lr = 0x7F24BB60u;
            ctx->pc = 0x7F275D10u;
            return;
    }

label_7F24BB60:
    ctx->pc = 0x7F24BB60u;
    ctx->downcount -= 3;
    // 7F24BB60: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24BB64:
    ctx->pc = 0x7F24BB64u;
    // 7F24BB64: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F24BB68:
    ctx->pc = 0x7F24BB68u;
    // 7F24BB68: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F24BB6Cu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F24BB6C:
    ctx->pc = 0x7F24BB6Cu;
    ctx->downcount -= 7;
    // 7F24BB6C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F24BB70:
    ctx->pc = 0x7F24BB70u;
    // 7F24BB70: addi    r3, r27, 592
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(592);

label_7F24BB74:
    ctx->pc = 0x7F24BB74u;
    // 7F24BB74: addi    r4, r4, -5668
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5668);

label_7F24BB78:
    ctx->pc = 0x7F24BB78u;
    // 7F24BB78: addi    r5, r27, 92
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(92);

label_7F24BB7C:
    ctx->pc = 0x7F24BB7Cu;
    // 7F24BB7C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24BB80:
    ctx->pc = 0x7F24BB80u;
    // 7F24BB80: li      r6, 8
    ctx->gpr[6] = (u32)(s32)(8);

label_7F24BB84:
    ctx->pc = 0x7F24BB84u;
    // 7F24BB84: bl      0x7F275D10
    {
            ctx->lr = 0x7F24BB88u;
            ctx->pc = 0x7F275D10u;
            return;
    }

label_7F24BB88:
    ctx->pc = 0x7F24BB88u;
    ctx->downcount -= 3;
    // 7F24BB88: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24BB8C:
    ctx->pc = 0x7F24BB8Cu;
    // 7F24BB8C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F24BB90:
    ctx->pc = 0x7F24BB90u;
    // 7F24BB90: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F24BB94u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F24BB94:
    ctx->pc = 0x7F24BB94u;
    ctx->downcount -= 4;
    // 7F24BB94: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24BB98:
    ctx->pc = 0x7F24BB98u;
    // 7F24BB98: stw     r0, 588(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(588);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24BB9C:
    ctx->pc = 0x7F24BB9Cu;
    // 7F24BB9C: stw     r0, 592(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(592);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24BBA0:
    ctx->pc = 0x7F24BBA0u;
    // 7F24BBA0: b       0x7F24BC9C
    {
            goto label_7F24BC9C;
    }

label_7F24BBA4:
    ctx->pc = 0x7F24BBA4u;
    ctx->downcount -= 7;
    // 7F24BBA4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F24BBA8:
    ctx->pc = 0x7F24BBA8u;
    // 7F24BBA8: addi    r3, r27, 588
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(588);

label_7F24BBAC:
    ctx->pc = 0x7F24BBACu;
    // 7F24BBAC: addi    r4, r4, 22156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22156);

label_7F24BBB0:
    ctx->pc = 0x7F24BBB0u;
    // 7F24BBB0: addi    r5, r27, 48
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(48);

label_7F24BBB4:
    ctx->pc = 0x7F24BBB4u;
    // 7F24BBB4: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24BBB8:
    ctx->pc = 0x7F24BBB8u;
    // 7F24BBB8: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_7F24BBBC:
    ctx->pc = 0x7F24BBBCu;
    // 7F24BBBC: bl      0x7F275D10
    {
            ctx->lr = 0x7F24BBC0u;
            ctx->pc = 0x7F275D10u;
            return;
    }

label_7F24BBC0:
    ctx->pc = 0x7F24BBC0u;
    ctx->downcount -= 3;
    // 7F24BBC0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24BBC4:
    ctx->pc = 0x7F24BBC4u;
    // 7F24BBC4: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F24BBC8:
    ctx->pc = 0x7F24BBC8u;
    // 7F24BBC8: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F24BBCCu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F24BBCC:
    ctx->pc = 0x7F24BBCCu;
    ctx->downcount -= 7;
    // 7F24BBCC: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F24BBD0:
    ctx->pc = 0x7F24BBD0u;
    // 7F24BBD0: addi    r3, r27, 592
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(592);

label_7F24BBD4:
    ctx->pc = 0x7F24BBD4u;
    // 7F24BBD4: addi    r4, r4, -5668
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5668);

label_7F24BBD8:
    ctx->pc = 0x7F24BBD8u;
    // 7F24BBD8: addi    r5, r27, 92
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(92);

label_7F24BBDC:
    ctx->pc = 0x7F24BBDCu;
    // 7F24BBDC: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24BBE0:
    ctx->pc = 0x7F24BBE0u;
    // 7F24BBE0: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_7F24BBE4:
    ctx->pc = 0x7F24BBE4u;
    // 7F24BBE4: bl      0x7F275D10
    {
            ctx->lr = 0x7F24BBE8u;
            ctx->pc = 0x7F275D10u;
            return;
    }

label_7F24BBE8:
    ctx->pc = 0x7F24BBE8u;
    ctx->downcount -= 3;
    // 7F24BBE8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24BBEC:
    ctx->pc = 0x7F24BBECu;
    // 7F24BBEC: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F24BBF0:
    ctx->pc = 0x7F24BBF0u;
    // 7F24BBF0: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F24BBF4u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F24BBF4:
    ctx->pc = 0x7F24BBF4u;
    ctx->downcount -= 1;
    // 7F24BBF4: b       0x7F24BC9C
    {
            goto label_7F24BC9C;
    }

label_7F24BBF8:
    ctx->pc = 0x7F24BBF8u;
    ctx->downcount -= 7;
    // 7F24BBF8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F24BBFC:
    ctx->pc = 0x7F24BBFCu;
    // 7F24BBFC: addi    r3, r27, 588
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(588);

label_7F24BC00:
    ctx->pc = 0x7F24BC00u;
    // 7F24BC00: addi    r4, r4, 22156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22156);

label_7F24BC04:
    ctx->pc = 0x7F24BC04u;
    // 7F24BC04: addi    r5, r27, 48
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(48);

label_7F24BC08:
    ctx->pc = 0x7F24BC08u;
    // 7F24BC08: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24BC0C:
    ctx->pc = 0x7F24BC0Cu;
    // 7F24BC0C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F24BC10:
    ctx->pc = 0x7F24BC10u;
    // 7F24BC10: bl      0x7F275D10
    {
            ctx->lr = 0x7F24BC14u;
            ctx->pc = 0x7F275D10u;
            return;
    }

label_7F24BC14:
    ctx->pc = 0x7F24BC14u;
    ctx->downcount -= 3;
    // 7F24BC14: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24BC18:
    ctx->pc = 0x7F24BC18u;
    // 7F24BC18: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F24BC1C:
    ctx->pc = 0x7F24BC1Cu;
    // 7F24BC1C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F24BC20u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F24BC20:
    ctx->pc = 0x7F24BC20u;
    ctx->downcount -= 7;
    // 7F24BC20: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F24BC24:
    ctx->pc = 0x7F24BC24u;
    // 7F24BC24: addi    r3, r27, 592
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(592);

label_7F24BC28:
    ctx->pc = 0x7F24BC28u;
    // 7F24BC28: addi    r4, r4, -5668
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5668);

label_7F24BC2C:
    ctx->pc = 0x7F24BC2Cu;
    // 7F24BC2C: addi    r5, r27, 92
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(92);

label_7F24BC30:
    ctx->pc = 0x7F24BC30u;
    // 7F24BC30: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24BC34:
    ctx->pc = 0x7F24BC34u;
    // 7F24BC34: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F24BC38:
    ctx->pc = 0x7F24BC38u;
    // 7F24BC38: bl      0x7F275D10
    {
            ctx->lr = 0x7F24BC3Cu;
            ctx->pc = 0x7F275D10u;
            return;
    }

label_7F24BC3C:
    ctx->pc = 0x7F24BC3Cu;
    ctx->downcount -= 3;
    // 7F24BC3C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24BC40:
    ctx->pc = 0x7F24BC40u;
    // 7F24BC40: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F24BC44:
    ctx->pc = 0x7F24BC44u;
    // 7F24BC44: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F24BC48u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F24BC48:
    ctx->pc = 0x7F24BC48u;
    ctx->downcount -= 1;
    // 7F24BC48: b       0x7F24BC9C
    {
            goto label_7F24BC9C;
    }

label_7F24BC4C:
    ctx->pc = 0x7F24BC4Cu;
    ctx->downcount -= 7;
    // 7F24BC4C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F24BC50:
    ctx->pc = 0x7F24BC50u;
    // 7F24BC50: addi    r3, r27, 588
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(588);

label_7F24BC54:
    ctx->pc = 0x7F24BC54u;
    // 7F24BC54: addi    r4, r4, 22156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22156);

label_7F24BC58:
    ctx->pc = 0x7F24BC58u;
    // 7F24BC58: addi    r5, r27, 48
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(48);

label_7F24BC5C:
    ctx->pc = 0x7F24BC5Cu;
    // 7F24BC5C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24BC60:
    ctx->pc = 0x7F24BC60u;
    // 7F24BC60: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F24BC64:
    ctx->pc = 0x7F24BC64u;
    // 7F24BC64: bl      0x7F275D10
    {
            ctx->lr = 0x7F24BC68u;
            ctx->pc = 0x7F275D10u;
            return;
    }

label_7F24BC68:
    ctx->pc = 0x7F24BC68u;
    ctx->downcount -= 3;
    // 7F24BC68: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24BC6C:
    ctx->pc = 0x7F24BC6Cu;
    // 7F24BC6C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F24BC70:
    ctx->pc = 0x7F24BC70u;
    // 7F24BC70: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F24BC74u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F24BC74:
    ctx->pc = 0x7F24BC74u;
    ctx->downcount -= 7;
    // 7F24BC74: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F24BC78:
    ctx->pc = 0x7F24BC78u;
    // 7F24BC78: addi    r3, r27, 592
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(592);

label_7F24BC7C:
    ctx->pc = 0x7F24BC7Cu;
    // 7F24BC7C: addi    r4, r4, -5668
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5668);

label_7F24BC80:
    ctx->pc = 0x7F24BC80u;
    // 7F24BC80: addi    r5, r27, 92
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(92);

label_7F24BC84:
    ctx->pc = 0x7F24BC84u;
    // 7F24BC84: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24BC88:
    ctx->pc = 0x7F24BC88u;
    // 7F24BC88: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_7F24BC8C:
    ctx->pc = 0x7F24BC8Cu;
    // 7F24BC8C: bl      0x7F275D10
    {
            ctx->lr = 0x7F24BC90u;
            ctx->pc = 0x7F275D10u;
            return;
    }

label_7F24BC90:
    ctx->pc = 0x7F24BC90u;
    ctx->downcount -= 3;
    // 7F24BC90: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24BC94:
    ctx->pc = 0x7F24BC94u;
    // 7F24BC94: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F24BC98:
    ctx->pc = 0x7F24BC98u;
    // 7F24BC98: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F24BC9Cu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F24BC9C:
    ctx->pc = 0x7F24BC9Cu;
    ctx->downcount -= 1;
    // 7F24BC9C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F24BCA0:
    ctx->pc = 0x7F24BCA0u;
    ctx->downcount -= 16;
    // 7F24BCA0: lmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F24BCA4:
    ctx->pc = 0x7F24BCA4u;
    // 7F24BCA4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24BCA8:
    ctx->pc = 0x7F24BCA8u;
    // 7F24BCA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24BCAC:
    ctx->pc = 0x7F24BCACu;
    // 7F24BCAC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F24BCB0:
    ctx->pc = 0x7F24BCB0u;
    // 7F24BCB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F24BCB4:
    ctx->pc = 0x7F24BCB4u;
    ctx->downcount -= 26;
    // 7F24BCB4: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24BCB8:
    ctx->pc = 0x7F24BCB8u;
    // 7F24BCB8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24BCBC:
    ctx->pc = 0x7F24BCBCu;
    // 7F24BCBC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24BCC0:
    ctx->pc = 0x7F24BCC0u;
    // 7F24BCC0: stmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F24BCC4:
    ctx->pc = 0x7F24BCC4u;
    // 7F24BCC4: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24BCC8:
    ctx->pc = 0x7F24BCC8u;
    // 7F24BCC8: or   r25, r4, r4
    {
        ctx->gpr[25] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F24BCCC:
    ctx->pc = 0x7F24BCCCu;
    // 7F24BCCC: or   r26, r5, r5
    {
        ctx->gpr[26] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F24BCD0:
    ctx->pc = 0x7F24BCD0u;
    // 7F24BCD0: or   r27, r6, r6
    {
        ctx->gpr[27] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F24BCD4:
    ctx->pc = 0x7F24BCD4u;
    // 7F24BCD4: or   r28, r7, r7
    {
        ctx->gpr[28] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F24BCD8:
    ctx->pc = 0x7F24BCD8u;
    // 7F24BCD8: or   r29, r8, r8
    {
        ctx->gpr[29] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F24BCDC:
    ctx->pc = 0x7F24BCDCu;
    // 7F24BCDC: or   r30, r9, r9
    {
        ctx->gpr[30] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F24BCE0:
    ctx->pc = 0x7F24BCE0u;
    // 7F24BCE0: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F24BCE4:
    ctx->pc = 0x7F24BCE4u;
    // 7F24BCE4: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F24BCE8:
    ctx->pc = 0x7F24BCE8u;
    // 7F24BCE8: li      r5, 624
    ctx->gpr[5] = (u32)(s32)(624);

label_7F24BCEC:
    ctx->pc = 0x7F24BCECu;
    // 7F24BCEC: li      r6, 24
    ctx->gpr[6] = (u32)(s32)(24);

label_7F24BCF0:
    ctx->pc = 0x7F24BCF0u;
    // 7F24BCF0: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F24BCF4u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F24BCF4:
    ctx->pc = 0x7F24BCF4u;
    ctx->downcount -= 2;
    // 7F24BCF4: or.   r31, r3, r3
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

label_7F24BCF8:
    ctx->pc = 0x7F24BCF8u;
    // 7F24BCF8: bc    12, 2, 0x7F24BDCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24BDCC;
        }
    }

label_7F24BCFC:
    ctx->pc = 0x7F24BCFCu;
    ctx->downcount -= 5;
    // 7F24BCFC: lis     r4, 32549
    ctx->gpr[4] = ((u32)(s32)(32549) << 16);

label_7F24BD00:
    ctx->pc = 0x7F24BD00u;
    // 7F24BD00: lis     r5, 32549
    ctx->gpr[5] = ((u32)(s32)(32549) << 16);

label_7F24BD04:
    ctx->pc = 0x7F24BD04u;
    // 7F24BD04: addi    r4, r4, -23796
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23796);

label_7F24BD08:
    ctx->pc = 0x7F24BD08u;
    // 7F24BD08: addi    r5, r5, -19428
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-19428);

label_7F24BD0C:
    ctx->pc = 0x7F24BD0Cu;
    // 7F24BD0C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F24BD10u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F24BD10:
    ctx->pc = 0x7F24BD10u;
    ctx->downcount -= 29;
    // 7F24BD10: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24BD14:
    ctx->pc = 0x7F24BD14u;
    // 7F24BD14: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F24BD18:
    ctx->pc = 0x7F24BD18u;
    // 7F24BD18: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F24BD1C:
    ctx->pc = 0x7F24BD1Cu;
    // 7F24BD1C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F24BD20:
    ctx->pc = 0x7F24BD20u;
    // 7F24BD20: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F24BD24:
    ctx->pc = 0x7F24BD24u;
    // 7F24BD24: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F24BD28:
    ctx->pc = 0x7F24BD28u;
    // 7F24BD28: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F24BD2C:
    ctx->pc = 0x7F24BD2Cu;
    // 7F24BD2C: addi    r8, r3, -5852
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(-5852);

label_7F24BD30:
    ctx->pc = 0x7F24BD30u;
    // 7F24BD30: li      r7, 4096
    ctx->gpr[7] = (u32)(s32)(4096);

label_7F24BD34:
    ctx->pc = 0x7F24BD34u;
    // 7F24BD34: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24BD38:
    ctx->pc = 0x7F24BD38u;
    // 7F24BD38: stw     r9, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F24BD3C:
    ctx->pc = 0x7F24BD3Cu;
    // 7F24BD3C: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24BD40:
    ctx->pc = 0x7F24BD40u;
    // 7F24BD40: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F24BD44:
    ctx->pc = 0x7F24BD44u;
    // 7F24BD44: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F24BD48:
    ctx->pc = 0x7F24BD48u;
    // 7F24BD48: stw     r9, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F24BD4C:
    ctx->pc = 0x7F24BD4Cu;
    // 7F24BD4C: stw     r9, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F24BD50:
    ctx->pc = 0x7F24BD50u;
    // 7F24BD50: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24BD54:
    ctx->pc = 0x7F24BD54u;
    // 7F24BD54: stw     r24, 448(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(448);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F24BD58:
    ctx->pc = 0x7F24BD58u;
    // 7F24BD58: stw     r25, 452(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(452);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F24BD5C:
    ctx->pc = 0x7F24BD5Cu;
    // 7F24BD5C: stw     r26, 548(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(548);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F24BD60:
    ctx->pc = 0x7F24BD60u;
    // 7F24BD60: stw     r27, 552(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(552);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F24BD64:
    ctx->pc = 0x7F24BD64u;
    // 7F24BD64: stw     r28, 556(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(556);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F24BD68:
    ctx->pc = 0x7F24BD68u;
    // 7F24BD68: stw     r29, 584(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(584);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F24BD6C:
    ctx->pc = 0x7F24BD6Cu;
    // 7F24BD6C: lwz     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24BD70:
    ctx->pc = 0x7F24BD70u;
    // 7F24BD70: stw     r0, 604(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(604);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24BD74:
    ctx->pc = 0x7F24BD74u;
    // 7F24BD74: lwz     r0, 604(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(604);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24BD78:
    ctx->pc = 0x7F24BD78u;
    // 7F24BD78: slw   r0, r7, r0
    {
        u32 sh = ctx->gpr[0] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[7] << sh);
    }

label_7F24BD7C:
    ctx->pc = 0x7F24BD7Cu;
    // 7F24BD7C: stw     r0, 608(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(608);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24BD80:
    ctx->pc = 0x7F24BD80u;
    // 7F24BD80: bl      0x7F24B824
    {
            ctx->lr = 0x7F24BD84u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24B824u;
                return;
            }
            goto label_7F24B824;
    }

label_7F24BD84:
    ctx->pc = 0x7F24BD84u;
    ctx->downcount -= 2;
    // 7F24BD84: cmpwi   r3, 0
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

label_7F24BD88:
    ctx->pc = 0x7F24BD88u;
    // 7F24BD88: bc    4, 0, 0x7F24BD9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24BD9C;
        }
    }

label_7F24BD8C:
    ctx->pc = 0x7F24BD8Cu;
    ctx->downcount -= 2;
    // 7F24BD8C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24BD90:
    ctx->pc = 0x7F24BD90u;
    // 7F24BD90: bl      0x7F3C8210
    {
            ctx->lr = 0x7F24BD94u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F24BD94:
    ctx->pc = 0x7F24BD94u;
    ctx->downcount -= 2;
    // 7F24BD94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F24BD98:
    ctx->pc = 0x7F24BD98u;
    // 7F24BD98: b       0x7F24BDD0
    {
            goto label_7F24BDD0;
    }

label_7F24BD9C:
    ctx->pc = 0x7F24BD9Cu;
    ctx->downcount -= 8;
    // 7F24BD9C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F24BDA0:
    ctx->pc = 0x7F24BDA0u;
    // 7F24BDA0: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F24BDA4:
    ctx->pc = 0x7F24BDA4u;
    // 7F24BDA4: rlwinm r0, r29, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0xFFFFFFFCu;
    }

label_7F24BDA8:
    ctx->pc = 0x7F24BDA8u;
    // 7F24BDA8: addi    r5, r4, 11700
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(11700);

label_7F24BDAC:
    ctx->pc = 0x7F24BDACu;
    // 7F24BDAC: addi    r4, r3, 11784
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(11784);

label_7F24BDB0:
    ctx->pc = 0x7F24BDB0u;
    // 7F24BDB0: lwzx    r3, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24BDB4:
    ctx->pc = 0x7F24BDB4u;
    // 7F24BDB4: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24BDB8:
    ctx->pc = 0x7F24BDB8u;
    // 7F24BDB8: bl      0x7F28F600
    {
            ctx->lr = 0x7F24BDBCu;
            ctx->pc = 0x7F28F600u;
            return;
    }

label_7F24BDBC:
    ctx->pc = 0x7F24BDBCu;
    ctx->downcount -= 4;
    // 7F24BDBC: stw     r30, 576(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(576);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F24BDC0:
    ctx->pc = 0x7F24BDC0u;
    // 7F24BDC0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F24BDC4:
    ctx->pc = 0x7F24BDC4u;
    // 7F24BDC4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24BDC8:
    ctx->pc = 0x7F24BDC8u;
    // 7F24BDC8: stw     r0, -8596(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8596);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24BDCC:
    ctx->pc = 0x7F24BDCCu;
    ctx->downcount -= 1;
    // 7F24BDCC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24BDD0:
    ctx->pc = 0x7F24BDD0u;
    ctx->downcount -= 16;
    // 7F24BDD0: lmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F24BDD4:
    ctx->pc = 0x7F24BDD4u;
    // 7F24BDD4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24BDD8:
    ctx->pc = 0x7F24BDD8u;
    // 7F24BDD8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24BDDC:
    ctx->pc = 0x7F24BDDCu;
    // 7F24BDDC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F24BDE0:
    ctx->pc = 0x7F24BDE0u;
    // 7F24BDE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F24BDE4:
    ctx->pc = 0x7F24BDE4u;
    ctx->downcount -= 6;
    // 7F24BDE4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24BDE8:
    ctx->pc = 0x7F24BDE8u;
    // 7F24BDE8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24BDEC:
    ctx->pc = 0x7F24BDECu;
    // 7F24BDEC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F24BDF0:
    ctx->pc = 0x7F24BDF0u;
    // 7F24BDF0: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_7F24BDF4:
    ctx->pc = 0x7F24BDF4u;
    // 7F24BDF4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24BDF8:
    ctx->pc = 0x7F24BDF8u;
    // 7F24BDF8: bl      0x7F24BCB4
    {
            ctx->lr = 0x7F24BDFCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24BCB4u;
                return;
            }
            goto label_7F24BCB4;
    }

label_7F24BDFC:
    ctx->pc = 0x7F24BDFCu;
    ctx->downcount -= 5;
    // 7F24BDFC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24BE00:
    ctx->pc = 0x7F24BE00u;
    // 7F24BE00: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24BE04:
    ctx->pc = 0x7F24BE04u;
    // 7F24BE04: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F24BE08:
    ctx->pc = 0x7F24BE08u;
    // 7F24BE08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F24BE0C:
    ctx->pc = 0x7F24BE0Cu;
    ctx->downcount -= 23;
    // 7F24BE0C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24BE10:
    ctx->pc = 0x7F24BE10u;
    // 7F24BE10: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24BE14:
    ctx->pc = 0x7F24BE14u;
    // 7F24BE14: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24BE18:
    ctx->pc = 0x7F24BE18u;
    // 7F24BE18: stmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F24BE1C:
    ctx->pc = 0x7F24BE1Cu;
    // 7F24BE1C: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24BE20:
    ctx->pc = 0x7F24BE20u;
    // 7F24BE20: or   r25, r4, r4
    {
        ctx->gpr[25] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F24BE24:
    ctx->pc = 0x7F24BE24u;
    // 7F24BE24: or   r26, r5, r5
    {
        ctx->gpr[26] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F24BE28:
    ctx->pc = 0x7F24BE28u;
    // 7F24BE28: or   r27, r6, r6
    {
        ctx->gpr[27] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F24BE2C:
    ctx->pc = 0x7F24BE2Cu;
    // 7F24BE2C: or   r28, r7, r7
    {
        ctx->gpr[28] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F24BE30:
    ctx->pc = 0x7F24BE30u;
    // 7F24BE30: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F24BE34:
    ctx->pc = 0x7F24BE34u;
    // 7F24BE34: li      r31, 2
    ctx->gpr[31] = (u32)(s32)(2);

label_7F24BE38:
    ctx->pc = 0x7F24BE38u;
    // 7F24BE38: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F24BE3C:
    ctx->pc = 0x7F24BE3Cu;
    // 7F24BE3C: bl      0x7F2BB4C4
    {
            ctx->lr = 0x7F24BE40u;
            ctx->pc = 0x7F2BB4C4u;
            return;
    }

label_7F24BE40:
    ctx->pc = 0x7F24BE40u;
    ctx->downcount -= 2;
    // 7F24BE40: cmpwi   r3, 29
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(29);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24BE44:
    ctx->pc = 0x7F24BE44u;
    // 7F24BE44: bc    4, 2, 0x7F24BE7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24BE7C;
        }
    }

label_7F24BE48:
    ctx->pc = 0x7F24BE48u;
    ctx->downcount -= 3;
    // 7F24BE48: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_7F24BE4C:
    ctx->pc = 0x7F24BE4Cu;
    // 7F24BE4C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F24BE50:
    ctx->pc = 0x7F24BE50u;
    // 7F24BE50: bl      0x7F01ED0C
    {
            ctx->lr = 0x7F24BE54u;
            ctx->pc = 0x7F01ED0Cu;
            return;
    }

label_7F24BE54:
    ctx->pc = 0x7F24BE54u;
    ctx->downcount -= 10;
    // 7F24BE54: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F24BE58:
    ctx->pc = 0x7F24BE58u;
    // 7F24BE58: li      r31, 8
    ctx->gpr[31] = (u32)(s32)(8);

label_7F24BE5C:
    ctx->pc = 0x7F24BE5Cu;
    // 7F24BE5C: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F24BE60:
    ctx->pc = 0x7F24BE60u;
    // 7F24BE60: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_7F24BE64:
    ctx->pc = 0x7F24BE64u;
    // 7F24BE64: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24BE68:
    ctx->pc = 0x7F24BE68u;
    // 7F24BE68: li      r29, 1
    ctx->gpr[29] = (u32)(s32)(1);

label_7F24BE6C:
    ctx->pc = 0x7F24BE6Cu;
    // 7F24BE6C: lha     r0, 312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(312);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F24BE70:
    ctx->pc = 0x7F24BE70u;
    // 7F24BE70: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_7F24BE74:
    ctx->pc = 0x7F24BE74u;
    // 7F24BE74: sth     r0, 312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(312);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F24BE78:
    ctx->pc = 0x7F24BE78u;
    // 7F24BE78: b       0x7F24BE9C
    {
            goto label_7F24BE9C;
    }

label_7F24BE7C:
    ctx->pc = 0x7F24BE7Cu;
    ctx->downcount -= 6;
    // 7F24BE7C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F24BE80:
    ctx->pc = 0x7F24BE80u;
    // 7F24BE80: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F24BE84:
    ctx->pc = 0x7F24BE84u;
    // 7F24BE84: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24BE88:
    ctx->pc = 0x7F24BE88u;
    // 7F24BE88: lha     r0, 312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(312);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F24BE8C:
    ctx->pc = 0x7F24BE8Cu;
    // 7F24BE8C: rlwinm. r0, r0, 0, 27, 27
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

label_7F24BE90:
    ctx->pc = 0x7F24BE90u;
    // 7F24BE90: bc    12, 2, 0x7F24BE9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24BE9C;
        }
    }

label_7F24BE94:
    ctx->pc = 0x7F24BE94u;
    ctx->downcount -= 2;
    // 7F24BE94: li      r31, 8
    ctx->gpr[31] = (u32)(s32)(8);

label_7F24BE98:
    ctx->pc = 0x7F24BE98u;
    // 7F24BE98: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_7F24BE9C:
    ctx->pc = 0x7F24BE9Cu;
    ctx->downcount -= 8;
    // 7F24BE9C: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F24BEA0:
    ctx->pc = 0x7F24BEA0u;
    // 7F24BEA0: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F24BEA4:
    ctx->pc = 0x7F24BEA4u;
    // 7F24BEA4: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F24BEA8:
    ctx->pc = 0x7F24BEA8u;
    // 7F24BEA8: or   r6, r27, r27
    {
        ctx->gpr[6] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F24BEAC:
    ctx->pc = 0x7F24BEACu;
    // 7F24BEAC: or   r7, r28, r28
    {
        ctx->gpr[7] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F24BEB0:
    ctx->pc = 0x7F24BEB0u;
    // 7F24BEB0: or   r8, r31, r31
    {
        ctx->gpr[8] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24BEB4:
    ctx->pc = 0x7F24BEB4u;
    // 7F24BEB4: or   r9, r30, r30
    {
        ctx->gpr[9] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F24BEB8:
    ctx->pc = 0x7F24BEB8u;
    // 7F24BEB8: bl      0x7F24BCB4
    {
            ctx->lr = 0x7F24BEBCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24BCB4u;
                return;
            }
            goto label_7F24BCB4;
    }

label_7F24BEBC:
    ctx->pc = 0x7F24BEBCu;
    ctx->downcount -= 2;
    // 7F24BEBC: or.   r30, r3, r3
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

label_7F24BEC0:
    ctx->pc = 0x7F24BEC0u;
    // 7F24BEC0: bc    12, 2, 0x7F24BED0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24BED0;
        }
    }

label_7F24BEC4:
    ctx->pc = 0x7F24BEC4u;
    ctx->downcount -= 2;
    // 7F24BEC4: cmpwi   r29, 1
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24BEC8:
    ctx->pc = 0x7F24BEC8u;
    // 7F24BEC8: bc    4, 2, 0x7F24BED0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24BED0;
        }
    }

label_7F24BECC:
    ctx->pc = 0x7F24BECCu;
    ctx->downcount -= 1;
    // 7F24BECC: bl      0x7F24BF70
    {
            ctx->lr = 0x7F24BED0u;
            goto label_7F24BF70;
    }

label_7F24BED0:
    ctx->pc = 0x7F24BED0u;
    ctx->downcount -= 17;
    // 7F24BED0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F24BED4:
    ctx->pc = 0x7F24BED4u;
    // 7F24BED4: lmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F24BED8:
    ctx->pc = 0x7F24BED8u;
    // 7F24BED8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24BEDC:
    ctx->pc = 0x7F24BEDCu;
    // 7F24BEDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24BEE0:
    ctx->pc = 0x7F24BEE0u;
    // 7F24BEE0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F24BEE4:
    ctx->pc = 0x7F24BEE4u;
    // 7F24BEE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F24BEE8:
    ctx->pc = 0x7F24BEE8u;
    ctx->downcount -= 6;
    // 7F24BEE8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24BEEC:
    ctx->pc = 0x7F24BEECu;
    // 7F24BEEC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24BEF0:
    ctx->pc = 0x7F24BEF0u;
    // 7F24BEF0: li      r8, 3
    ctx->gpr[8] = (u32)(s32)(3);

label_7F24BEF4:
    ctx->pc = 0x7F24BEF4u;
    // 7F24BEF4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F24BEF8:
    ctx->pc = 0x7F24BEF8u;
    // 7F24BEF8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24BEFC:
    ctx->pc = 0x7F24BEFCu;
    // 7F24BEFC: bl      0x7F24BCB4
    {
            ctx->lr = 0x7F24BF00u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24BCB4u;
                return;
            }
            goto label_7F24BCB4;
    }

label_7F24BF00:
    ctx->pc = 0x7F24BF00u;
    ctx->downcount -= 5;
    // 7F24BF00: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24BF04:
    ctx->pc = 0x7F24BF04u;
    // 7F24BF04: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24BF08:
    ctx->pc = 0x7F24BF08u;
    // 7F24BF08: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F24BF0C:
    ctx->pc = 0x7F24BF0Cu;
    // 7F24BF0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F24BF10:
    ctx->pc = 0x7F24BF10u;
    ctx->downcount -= 4;
    // 7F24BF10: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F24BF14:
    ctx->pc = 0x7F24BF14u;
    // 7F24BF14: addi    r3, r3, -8596
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8596);

label_7F24BF18:
    ctx->pc = 0x7F24BF18u;
    // 7F24BF18: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24BF1C:
    ctx->pc = 0x7F24BF1Cu;
    // 7F24BF1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F24BF20:
    ctx->pc = 0x7F24BF20u;
    ctx->downcount -= 9;
    // 7F24BF20: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24BF24:
    ctx->pc = 0x7F24BF24u;
    // 7F24BF24: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24BF28:
    ctx->pc = 0x7F24BF28u;
    // 7F24BF28: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24BF2C:
    ctx->pc = 0x7F24BF2Cu;
    // 7F24BF2C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F24BF30:
    ctx->pc = 0x7F24BF30u;
    // 7F24BF30: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24BF34:
    ctx->pc = 0x7F24BF34u;
    // 7F24BF34: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24BF38:
    ctx->pc = 0x7F24BF38u;
    // 7F24BF38: addic.  r0, r3, -1
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

label_7F24BF3C:
    ctx->pc = 0x7F24BF3Cu;
    // 7F24BF3C: stw     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24BF40:
    ctx->pc = 0x7F24BF40u;
    // 7F24BF40: bc    12, 1, 0x7F24BF5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24BF5C;
        }
    }

label_7F24BF44:
    ctx->pc = 0x7F24BF44u;
    ctx->downcount -= 4;
    // 7F24BF44: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F24BF48:
    ctx->pc = 0x7F24BF48u;
    // 7F24BF48: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F24BF4C:
    ctx->pc = 0x7F24BF4Cu;
    // 7F24BF4C: li      r5, 220
    ctx->gpr[5] = (u32)(s32)(220);

label_7F24BF50:
    ctx->pc = 0x7F24BF50u;
    // 7F24BF50: bl      0x7F011698
    {
            ctx->lr = 0x7F24BF54u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F24BF54:
    ctx->pc = 0x7F24BF54u;
    ctx->downcount -= 2;
    // 7F24BF54: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24BF58:
    ctx->pc = 0x7F24BF58u;
    // 7F24BF58: bl      0x7F3C8210
    {
            ctx->lr = 0x7F24BF5Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F24BF5C:
    ctx->pc = 0x7F24BF5Cu;
    ctx->downcount -= 6;
    // 7F24BF5C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24BF60:
    ctx->pc = 0x7F24BF60u;
    // 7F24BF60: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F24BF64:
    ctx->pc = 0x7F24BF64u;
    // 7F24BF64: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24BF68:
    ctx->pc = 0x7F24BF68u;
    // 7F24BF68: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F24BF6C:
    ctx->pc = 0x7F24BF6Cu;
    // 7F24BF6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F24BF70:
    ctx->pc = 0x7F24BF70u;
    ctx->downcount -= 20;
    // 7F24BF70: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24BF74:
    ctx->pc = 0x7F24BF74u;
    // 7F24BF74: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24BF78:
    ctx->pc = 0x7F24BF78u;
    // 7F24BF78: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F24BF7C:
    ctx->pc = 0x7F24BF7Cu;
    // 7F24BF7C: li      r5, 52
    ctx->gpr[5] = (u32)(s32)(52);

label_7F24BF80:
    ctx->pc = 0x7F24BF80u;
    // 7F24BF80: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24BF84:
    ctx->pc = 0x7F24BF84u;
    // 7F24BF84: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F24BF88:
    ctx->pc = 0x7F24BF88u;
    // 7F24BF88: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F24BF8C:
    ctx->pc = 0x7F24BF8Cu;
    // 7F24BF8C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24BF90:
    ctx->pc = 0x7F24BF90u;
    // 7F24BF90: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F24BF94:
    ctx->pc = 0x7F24BF94u;
    // 7F24BF94: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F24BF98u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F24BF98:
    ctx->pc = 0x7F24BF98u;
    ctx->downcount -= 2;
    // 7F24BF98: or.   r31, r3, r3
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

label_7F24BF9C:
    ctx->pc = 0x7F24BF9Cu;
    // 7F24BF9C: bc    4, 2, 0x7F24BFA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24BFA8;
        }
    }

label_7F24BFA0:
    ctx->pc = 0x7F24BFA0u;
    ctx->downcount -= 2;
    // 7F24BFA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F24BFA4:
    ctx->pc = 0x7F24BFA4u;
    // 7F24BFA4: b       0x7F24BFF8
    {
            goto label_7F24BFF8;
    }

label_7F24BFA8:
    ctx->pc = 0x7F24BFA8u;
    ctx->downcount -= 4;
    // 7F24BFA8: lis     r4, 32549
    ctx->gpr[4] = ((u32)(s32)(32549) << 16);

label_7F24BFAC:
    ctx->pc = 0x7F24BFACu;
    // 7F24BFAC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24BFB0:
    ctx->pc = 0x7F24BFB0u;
    // 7F24BFB0: addi    r4, r4, -16608
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16608);

label_7F24BFB4:
    ctx->pc = 0x7F24BFB4u;
    // 7F24BFB4: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F24BFB8u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F24BFB8:
    ctx->pc = 0x7F24BFB8u;
    ctx->downcount -= 13;
    // 7F24BFB8: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24BFBC:
    ctx->pc = 0x7F24BFBCu;
    // 7F24BFBC: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F24BFC0:
    ctx->pc = 0x7F24BFC0u;
    // 7F24BFC0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24BFC4:
    ctx->pc = 0x7F24BFC4u;
    // 7F24BFC4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F24BFC8:
    ctx->pc = 0x7F24BFC8u;
    // 7F24BFC8: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F24BFCC:
    ctx->pc = 0x7F24BFCCu;
    // 7F24BFCC: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F24BFD0:
    ctx->pc = 0x7F24BFD0u;
    // 7F24BFD0: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F24BFD4:
    ctx->pc = 0x7F24BFD4u;
    // 7F24BFD4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24BFD8:
    ctx->pc = 0x7F24BFD8u;
    // 7F24BFD8: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F24BFDC:
    ctx->pc = 0x7F24BFDCu;
    // 7F24BFDC: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F24BFE0:
    ctx->pc = 0x7F24BFE0u;
    // 7F24BFE0: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F24BFE4:
    ctx->pc = 0x7F24BFE4u;
    // 7F24BFE4: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24BFE8:
    ctx->pc = 0x7F24BFE8u;
    // 7F24BFE8: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F24BFECu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F24BFEC:
    ctx->pc = 0x7F24BFECu;
    ctx->downcount -= 3;
    // 7F24BFEC: li      r0, 15
    ctx->gpr[0] = (u32)(s32)(15);

label_7F24BFF0:
    ctx->pc = 0x7F24BFF0u;
    // 7F24BFF0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24BFF4:
    ctx->pc = 0x7F24BFF4u;
    // 7F24BFF4: stw     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24BFF8:
    ctx->pc = 0x7F24BFF8u;
    ctx->downcount -= 16;
    // 7F24BFF8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F24BFFC:
    ctx->pc = 0x7F24BFFCu;
    // 7F24BFFC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24C000:
    ctx->pc = 0x7F24C000u;
    // 7F24C000: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24C004:
    ctx->pc = 0x7F24C004u;
    // 7F24C004: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F24C008:
    ctx->pc = 0x7F24C008u;
    // 7F24C008: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F24C00C:
    ctx->pc = 0x7F24C00Cu;
    ctx->downcount -= 7;
    // 7F24C00C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24C010:
    ctx->pc = 0x7F24C010u;
    // 7F24C010: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24C014:
    ctx->pc = 0x7F24C014u;
    // 7F24C014: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_7F24C018:
    ctx->pc = 0x7F24C018u;
    // 7F24C018: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24C01C:
    ctx->pc = 0x7F24C01Cu;
    // 7F24C01C: addi    r0, r5, -255
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-255);

label_7F24C020:
    ctx->pc = 0x7F24C020u;
    // 7F24C020: cmpw    r4, r0
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

label_7F24C024:
    ctx->pc = 0x7F24C024u;
    // 7F24C024: bc    12, 2, 0x7F24C038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24C038;
        }
    }

label_7F24C028:
    ctx->pc = 0x7F24C028u;
    ctx->downcount -= 1;
    // 7F24C028: bc    4, 0, 0x7F24C050
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24C050;
        }
    }

label_7F24C02C:
    ctx->pc = 0x7F24C02Cu;
    ctx->downcount -= 2;
    // 7F24C02C: cmpwi   r4, 2
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

label_7F24C030:
    ctx->pc = 0x7F24C030u;
    // 7F24C030: bc    12, 2, 0x7F24C038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24C038;
        }
    }

label_7F24C034:
    ctx->pc = 0x7F24C034u;
    ctx->downcount -= 1;
    // 7F24C034: b       0x7F24C050
    {
            goto label_7F24C050;
    }

label_7F24C038:
    ctx->pc = 0x7F24C038u;
    ctx->downcount -= 4;
    // 7F24C038: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24C03C:
    ctx->pc = 0x7F24C03Cu;
    // 7F24C03C: ori     r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | 0x0100u;

label_7F24C040:
    ctx->pc = 0x7F24C040u;
    // 7F24C040: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24C044:
    ctx->pc = 0x7F24C044u;
    // 7F24C044: bl      0x7F3C8210
    {
            ctx->lr = 0x7F24C048u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F24C048:
    ctx->pc = 0x7F24C048u;
    ctx->downcount -= 2;
    // 7F24C048: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F24C04C:
    ctx->pc = 0x7F24C04Cu;
    // 7F24C04C: b       0x7F24C054
    {
            goto label_7F24C054;
    }

label_7F24C050:
    ctx->pc = 0x7F24C050u;
    ctx->downcount -= 1;
    // 7F24C050: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F24C054:
    ctx->pc = 0x7F24C054u;
    ctx->downcount -= 5;
    // 7F24C054: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24C058:
    ctx->pc = 0x7F24C058u;
    // 7F24C058: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24C05C:
    ctx->pc = 0x7F24C05Cu;
    // 7F24C05C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F24C060:
    ctx->pc = 0x7F24C060u;
    // 7F24C060: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2480EC;
        }
    }

label_7F24C064:
    ctx->pc = 0x7F24C064u;
    ctx->downcount -= 18;
    // 7F24C064: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24C068:
    ctx->pc = 0x7F24C068u;
    // 7F24C068: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24C06C:
    ctx->pc = 0x7F24C06Cu;
    // 7F24C06C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24C070:
    ctx->pc = 0x7F24C070u;
    // 7F24C070: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F24C074:
    ctx->pc = 0x7F24C074u;
    // 7F24C074: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F24C078:
    ctx->pc = 0x7F24C078u;
    // 7F24C078: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24C07C:
    ctx->pc = 0x7F24C07Cu;
    // 7F24C07C: lwz     r3, 224(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(224);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24C080:
    ctx->pc = 0x7F24C080u;
    // 7F24C080: bl      0x7F3C9624
    {
            ctx->lr = 0x7F24C084u;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F24C084:
    ctx->pc = 0x7F24C084u;
    ctx->downcount -= 7;
    // 7F24C084: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24C088:
    ctx->pc = 0x7F24C088u;
    // 7F24C088: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24C08C:
    ctx->pc = 0x7F24C08Cu;
    // 7F24C08C: addi    r0, r31, -1
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(-1);

label_7F24C090:
    ctx->pc = 0x7F24C090u;
    // 7F24C090: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F24C094:
    ctx->pc = 0x7F24C094u;
    // 7F24C094: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F24C098:
    ctx->pc = 0x7F24C098u;
    // 7F24C098: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24C09C:
    ctx->pc = 0x7F24C09Cu;
    // 7F24C09C: b       0x7F24C124
    {
            ctx->pc = 0x7F24C124u;
            return;
    }

label_7F24C0A0:
    ctx->pc = 0x7F24C0A0u;
    ctx->downcount -= 5;
    // 7F24C0A0: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24C0A4:
    ctx->pc = 0x7F24C0A4u;
    // 7F24C0A4: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24C0A8:
    ctx->pc = 0x7F24C0A8u;
    // 7F24C0A8: lwz     r30, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F24C0AC:
    ctx->pc = 0x7F24C0ACu;
    // 7F24C0AC: cmpwi   r30, 2
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

label_7F24C0B0:
    ctx->pc = 0x7F24C0B0u;
    // 7F24C0B0: bc    4, 2, 0x7F24C0DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24C0DC;
        }
    }

label_7F24C0B4:
    ctx->pc = 0x7F24C0B4u;
    ctx->downcount -= 3;
    // 7F24C0B4: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F24C0B8:
    ctx->pc = 0x7F24C0B8u;
    // 7F24C0B8: addi    r3, r3, -32768
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F24C0BC:
    ctx->pc = 0x7F24C0BCu;
    // 7F24C0BC: bl      0x7F24C158
    {
            ctx->lr = 0x7F24C0C0u;
            ctx->pc = 0x7F24C158u;
            return;
    }

label_7F24C0C0:
    ctx->pc = 0x7F24C0C0u;
    ctx->downcount -= 1;
    // 7F24C0C0: bl      0x7F2CF4A0
    {
            ctx->lr = 0x7F24C0C4u;
            ctx->pc = 0x7F2CF4A0u;
            return;
    }

label_7F24C0C4:
    ctx->pc = 0x7F24C0C4u;
    ctx->downcount -= 4;
    // 7F24C0C4: stw     r3, 220(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F24C0C8:
    ctx->pc = 0x7F24C0C8u;
    // 7F24C0C8: lwz     r4, 220(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(220);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24C0CC:
    ctx->pc = 0x7F24C0CCu;
    // 7F24C0CC: cmplwi  r4, 0x0000
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

label_7F24C0D0:
    ctx->pc = 0x7F24C0D0u;
    // 7F24C0D0: bc    12, 2, 0x7F24C0DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24C0DC;
        }
    }

label_7F24C0D4:
    ctx->pc = 0x7F24C0D4u;
    ctx->downcount -= 2;
    // 7F24C0D4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F24C0D8:
    ctx->pc = 0x7F24C0D8u;
    // 7F24C0D8: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F24C0DCu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F24C0DC:
    ctx->pc = 0x7F24C0DCu;
    ctx->downcount -= 2;
    // 7F24C0DC: cmpwi   r30, 4
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

label_7F24C0E0:
    ctx->pc = 0x7F24C0E0u;
    // 7F24C0E0: bc    4, 2, 0x7F24C118
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F24C118u;
            return;
        }
    }

label_7F24C0E4:
    ctx->pc = 0x7F24C0E4u;
    ctx->downcount -= 2;
    // 7F24C0E4: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F24C0E8:
    ctx->pc = 0x7F24C0E8u;
    // 7F24C0E8: addi    r3, r3, -32768
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32768);

    ctx->pc = 0x7F24C0ECu;
    return;
return_dispatch_7F2480EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F248100u: goto label_7F248100;
    case 0x7F24811Cu: goto label_7F24811C;
    case 0x7F248128u: goto label_7F248128;
    case 0x7F248130u: goto label_7F248130;
    case 0x7F248154u: goto label_7F248154;
    case 0x7F248160u: goto label_7F248160;
    case 0x7F248180u: goto label_7F248180;
    case 0x7F24818Cu: goto label_7F24818C;
    case 0x7F2481A8u: goto label_7F2481A8;
    case 0x7F2481B0u: goto label_7F2481B0;
    case 0x7F2481C4u: goto label_7F2481C4;
    case 0x7F2481D0u: goto label_7F2481D0;
    case 0x7F2481D8u: goto label_7F2481D8;
    case 0x7F2481E8u: goto label_7F2481E8;
    case 0x7F248214u: goto label_7F248214;
    case 0x7F248220u: goto label_7F248220;
    case 0x7F248228u: goto label_7F248228;
    case 0x7F24827Cu: goto label_7F24827C;
    case 0x7F24829Cu: goto label_7F24829C;
    case 0x7F2482D0u: goto label_7F2482D0;
    case 0x7F2482E4u: goto label_7F2482E4;
    case 0x7F2482FCu: goto label_7F2482FC;
    case 0x7F248314u: goto label_7F248314;
    case 0x7F24831Cu: goto label_7F24831C;
    case 0x7F248364u: goto label_7F248364;
    case 0x7F248378u: goto label_7F248378;
    case 0x7F248380u: goto label_7F248380;
    case 0x7F248388u: goto label_7F248388;
    case 0x7F248390u: goto label_7F248390;
    case 0x7F2483ECu: goto label_7F2483EC;
    case 0x7F248408u: goto label_7F248408;
    case 0x7F24845Cu: goto label_7F24845C;
    case 0x7F24846Cu: goto label_7F24846C;
    case 0x7F2484C0u: goto label_7F2484C0;
    case 0x7F2484CCu: goto label_7F2484CC;
    case 0x7F2484F4u: goto label_7F2484F4;
    case 0x7F24851Cu: goto label_7F24851C;
    case 0x7F248544u: goto label_7F248544;
    case 0x7F24854Cu: goto label_7F24854C;
    case 0x7F248554u: goto label_7F248554;
    case 0x7F248570u: goto label_7F248570;
    case 0x7F248580u: goto label_7F248580;
    case 0x7F248594u: goto label_7F248594;
    case 0x7F2485A4u: goto label_7F2485A4;
    case 0x7F2485E0u: goto label_7F2485E0;
    case 0x7F24861Cu: goto label_7F24861C;
    case 0x7F24862Cu: goto label_7F24862C;
    case 0x7F248694u: goto label_7F248694;
    case 0x7F2486B4u: goto label_7F2486B4;
    case 0x7F248744u: goto label_7F248744;
    case 0x7F248760u: goto label_7F248760;
    case 0x7F2487C4u: goto label_7F2487C4;
    case 0x7F2487E0u: goto label_7F2487E0;
    case 0x7F248860u: goto label_7F248860;
    case 0x7F2488B8u: goto label_7F2488B8;
    case 0x7F2488C0u: goto label_7F2488C0;
    case 0x7F2488CCu: goto label_7F2488CC;
    case 0x7F2488E4u: goto label_7F2488E4;
    case 0x7F2488ECu: goto label_7F2488EC;
    case 0x7F2488F8u: goto label_7F2488F8;
    case 0x7F2489D4u: goto label_7F2489D4;
    case 0x7F248AA4u: goto label_7F248AA4;
    case 0x7F248B0Cu: goto label_7F248B0C;
    case 0x7F248B34u: goto label_7F248B34;
    case 0x7F248B74u: goto label_7F248B74;
    case 0x7F248B8Cu: goto label_7F248B8C;
    case 0x7F248B9Cu: goto label_7F248B9C;
    case 0x7F248BC8u: goto label_7F248BC8;
    case 0x7F248BE8u: goto label_7F248BE8;
    case 0x7F248C10u: goto label_7F248C10;
    case 0x7F248C44u: goto label_7F248C44;
    case 0x7F248C60u: goto label_7F248C60;
    case 0x7F248C70u: goto label_7F248C70;
    case 0x7F248C78u: goto label_7F248C78;
    case 0x7F248CB0u: goto label_7F248CB0;
    case 0x7F248CC0u: goto label_7F248CC0;
    case 0x7F248D08u: goto label_7F248D08;
    case 0x7F248D20u: goto label_7F248D20;
    case 0x7F248D2Cu: goto label_7F248D2C;
    case 0x7F248D50u: goto label_7F248D50;
    case 0x7F248D68u: goto label_7F248D68;
    case 0x7F248D74u: goto label_7F248D74;
    case 0x7F248D98u: goto label_7F248D98;
    case 0x7F248DBCu: goto label_7F248DBC;
    case 0x7F248DE0u: goto label_7F248DE0;
    case 0x7F248DF8u: goto label_7F248DF8;
    case 0x7F248E04u: goto label_7F248E04;
    case 0x7F248E64u: goto label_7F248E64;
    case 0x7F248F14u: goto label_7F248F14;
    case 0x7F248F40u: goto label_7F248F40;
    case 0x7F248F50u: goto label_7F248F50;
    case 0x7F248F8Cu: goto label_7F248F8C;
    case 0x7F248FF0u: goto label_7F248FF0;
    case 0x7F2490FCu: goto label_7F2490FC;
    case 0x7F249188u: goto label_7F249188;
    case 0x7F249198u: goto label_7F249198;
    case 0x7F2491A0u: goto label_7F2491A0;
    case 0x7F2491ACu: goto label_7F2491AC;
    case 0x7F249200u: goto label_7F249200;
    case 0x7F249220u: goto label_7F249220;
    case 0x7F249230u: goto label_7F249230;
    case 0x7F249238u: goto label_7F249238;
    case 0x7F249260u: goto label_7F249260;
    case 0x7F249270u: goto label_7F249270;
    case 0x7F24927Cu: goto label_7F24927C;
    case 0x7F249284u: goto label_7F249284;
    case 0x7F24928Cu: goto label_7F24928C;
    case 0x7F249300u: goto label_7F249300;
    case 0x7F249328u: goto label_7F249328;
    case 0x7F24936Cu: goto label_7F24936C;
    case 0x7F24937Cu: goto label_7F24937C;
    case 0x7F2493F0u: goto label_7F2493F0;
    case 0x7F24940Cu: goto label_7F24940C;
    case 0x7F249458u: goto label_7F249458;
    case 0x7F2494CCu: goto label_7F2494CC;
    case 0x7F249524u: goto label_7F249524;
    case 0x7F24952Cu: goto label_7F24952C;
    case 0x7F249534u: goto label_7F249534;
    case 0x7F249558u: goto label_7F249558;
    case 0x7F249560u: goto label_7F249560;
    case 0x7F249570u: goto label_7F249570;
    case 0x7F249578u: goto label_7F249578;
    case 0x7F249590u: goto label_7F249590;
    case 0x7F2495E4u: goto label_7F2495E4;
    case 0x7F249610u: goto label_7F249610;
    case 0x7F249630u: goto label_7F249630;
    case 0x7F249654u: goto label_7F249654;
    case 0x7F24966Cu: goto label_7F24966C;
    case 0x7F2496C4u: goto label_7F2496C4;
    case 0x7F24973Cu: goto label_7F24973C;
    case 0x7F249740u: goto label_7F249740;
    case 0x7F24974Cu: goto label_7F24974C;
    case 0x7F24979Cu: goto label_7F24979C;
    case 0x7F2497ACu: goto label_7F2497AC;
    case 0x7F2497B4u: goto label_7F2497B4;
    case 0x7F2497E0u: goto label_7F2497E0;
    case 0x7F2497E4u: goto label_7F2497E4;
    case 0x7F2497F0u: goto label_7F2497F0;
    case 0x7F249840u: goto label_7F249840;
    case 0x7F249850u: goto label_7F249850;
    case 0x7F249858u: goto label_7F249858;
    case 0x7F2498F4u: goto label_7F2498F4;
    case 0x7F249910u: goto label_7F249910;
    case 0x7F249924u: goto label_7F249924;
    case 0x7F249934u: goto label_7F249934;
    case 0x7F2499A4u: goto label_7F2499A4;
    case 0x7F2499C8u: goto label_7F2499C8;
    case 0x7F2499ECu: goto label_7F2499EC;
    case 0x7F249A10u: goto label_7F249A10;
    case 0x7F249AE8u: goto label_7F249AE8;
    case 0x7F249B00u: goto label_7F249B00;
    case 0x7F249B08u: goto label_7F249B08;
    case 0x7F249B10u: goto label_7F249B10;
    case 0x7F249B68u: goto label_7F249B68;
    case 0x7F249BA8u: goto label_7F249BA8;
    case 0x7F249BD0u: goto label_7F249BD0;
    case 0x7F249BF0u: goto label_7F249BF0;
    case 0x7F249C1Cu: goto label_7F249C1C;
    case 0x7F249C3Cu: goto label_7F249C3C;
    case 0x7F249C68u: goto label_7F249C68;
    case 0x7F249C70u: goto label_7F249C70;
    case 0x7F249CD4u: goto label_7F249CD4;
    case 0x7F249CECu: goto label_7F249CEC;
    case 0x7F249D58u: goto label_7F249D58;
    case 0x7F249D68u: goto label_7F249D68;
    case 0x7F249D70u: goto label_7F249D70;
    case 0x7F249D90u: goto label_7F249D90;
    case 0x7F249DC4u: goto label_7F249DC4;
    case 0x7F249EC8u: goto label_7F249EC8;
    case 0x7F249F34u: goto label_7F249F34;
    case 0x7F249FD4u: goto label_7F249FD4;
    case 0x7F24A09Cu: goto label_7F24A09C;
    case 0x7F24A0A4u: goto label_7F24A0A4;
    case 0x7F24A0BCu: goto label_7F24A0BC;
    case 0x7F24A0E4u: goto label_7F24A0E4;
    case 0x7F24A0F4u: goto label_7F24A0F4;
    case 0x7F24A214u: goto label_7F24A214;
    case 0x7F24A238u: goto label_7F24A238;
    case 0x7F24A24Cu: goto label_7F24A24C;
    case 0x7F24A260u: goto label_7F24A260;
    case 0x7F24A268u: goto label_7F24A268;
    case 0x7F24A2E4u: goto label_7F24A2E4;
    case 0x7F24A2F8u: goto label_7F24A2F8;
    case 0x7F24A340u: goto label_7F24A340;
    case 0x7F24A354u: goto label_7F24A354;
    case 0x7F24A368u: goto label_7F24A368;
    case 0x7F24A390u: goto label_7F24A390;
    case 0x7F24A3A4u: goto label_7F24A3A4;
    case 0x7F24A3B8u: goto label_7F24A3B8;
    case 0x7F24A3E0u: goto label_7F24A3E0;
    case 0x7F24A3F4u: goto label_7F24A3F4;
    case 0x7F24A408u: goto label_7F24A408;
    case 0x7F24A434u: goto label_7F24A434;
    case 0x7F24A43Cu: goto label_7F24A43C;
    case 0x7F24A444u: goto label_7F24A444;
    case 0x7F24A478u: goto label_7F24A478;
    case 0x7F24A52Cu: goto label_7F24A52C;
    case 0x7F24A674u: goto label_7F24A674;
    case 0x7F24A6CCu: goto label_7F24A6CC;
    case 0x7F24A6D8u: goto label_7F24A6D8;
    case 0x7F24A6ECu: goto label_7F24A6EC;
    case 0x7F24A710u: goto label_7F24A710;
    case 0x7F24A734u: goto label_7F24A734;
    case 0x7F24A73Cu: goto label_7F24A73C;
    case 0x7F24A7C0u: goto label_7F24A7C0;
    case 0x7F24A7DCu: goto label_7F24A7DC;
    case 0x7F24A844u: goto label_7F24A844;
    case 0x7F24A854u: goto label_7F24A854;
    case 0x7F24A864u: goto label_7F24A864;
    case 0x7F24A874u: goto label_7F24A874;
    case 0x7F24A8C4u: goto label_7F24A8C4;
    case 0x7F24A8CCu: goto label_7F24A8CC;
    case 0x7F24A8E8u: goto label_7F24A8E8;
    case 0x7F24A8F4u: goto label_7F24A8F4;
    case 0x7F24A974u: goto label_7F24A974;
    case 0x7F24A984u: goto label_7F24A984;
    case 0x7F24A994u: goto label_7F24A994;
    case 0x7F24A9A4u: goto label_7F24A9A4;
    case 0x7F24A9F4u: goto label_7F24A9F4;
    case 0x7F24A9FCu: goto label_7F24A9FC;
    case 0x7F24AA18u: goto label_7F24AA18;
    case 0x7F24AA24u: goto label_7F24AA24;
    case 0x7F24AA98u: goto label_7F24AA98;
    case 0x7F24AAC4u: goto label_7F24AAC4;
    case 0x7F24AAD4u: goto label_7F24AAD4;
    case 0x7F24AAE4u: goto label_7F24AAE4;
    case 0x7F24AB00u: goto label_7F24AB00;
    case 0x7F24AB1Cu: goto label_7F24AB1C;
    case 0x7F24AB64u: goto label_7F24AB64;
    case 0x7F24ABB4u: goto label_7F24ABB4;
    case 0x7F24ABD8u: goto label_7F24ABD8;
    case 0x7F24AC28u: goto label_7F24AC28;
    case 0x7F24AC44u: goto label_7F24AC44;
    case 0x7F24AC58u: goto label_7F24AC58;
    case 0x7F24AC94u: goto label_7F24AC94;
    case 0x7F24ACB0u: goto label_7F24ACB0;
    case 0x7F24ACC4u: goto label_7F24ACC4;
    case 0x7F24ACE4u: goto label_7F24ACE4;
    case 0x7F24AD00u: goto label_7F24AD00;
    case 0x7F24AD14u: goto label_7F24AD14;
    case 0x7F24AD34u: goto label_7F24AD34;
    case 0x7F24AD60u: goto label_7F24AD60;
    case 0x7F24AD74u: goto label_7F24AD74;
    case 0x7F24AD84u: goto label_7F24AD84;
    case 0x7F24ADA4u: goto label_7F24ADA4;
    case 0x7F24ADB8u: goto label_7F24ADB8;
    case 0x7F24ADC8u: goto label_7F24ADC8;
    case 0x7F24ADF4u: goto label_7F24ADF4;
    case 0x7F24AE08u: goto label_7F24AE08;
    case 0x7F24AE18u: goto label_7F24AE18;
    case 0x7F24AE30u: goto label_7F24AE30;
    case 0x7F24AE4Cu: goto label_7F24AE4C;
    case 0x7F24AE6Cu: goto label_7F24AE6C;
    case 0x7F24AE80u: goto label_7F24AE80;
    case 0x7F24AE90u: goto label_7F24AE90;
    case 0x7F24AEA4u: goto label_7F24AEA4;
    case 0x7F24AEB8u: goto label_7F24AEB8;
    case 0x7F24AEC8u: goto label_7F24AEC8;
    case 0x7F24AEE8u: goto label_7F24AEE8;
    case 0x7F24AEFCu: goto label_7F24AEFC;
    case 0x7F24AF0Cu: goto label_7F24AF0C;
    case 0x7F24AF20u: goto label_7F24AF20;
    case 0x7F24AF38u: goto label_7F24AF38;
    case 0x7F24AF90u: goto label_7F24AF90;
    case 0x7F24AF9Cu: goto label_7F24AF9C;
    case 0x7F24AFD0u: goto label_7F24AFD0;
    case 0x7F24AFE4u: goto label_7F24AFE4;
    case 0x7F24B058u: goto label_7F24B058;
    case 0x7F24B0D4u: goto label_7F24B0D4;
    case 0x7F24B100u: goto label_7F24B100;
    case 0x7F24B110u: goto label_7F24B110;
    case 0x7F24B120u: goto label_7F24B120;
    case 0x7F24B130u: goto label_7F24B130;
    case 0x7F24B164u: goto label_7F24B164;
    case 0x7F24B16Cu: goto label_7F24B16C;
    case 0x7F24B1BCu: goto label_7F24B1BC;
    case 0x7F24B1CCu: goto label_7F24B1CC;
    case 0x7F24B1E4u: goto label_7F24B1E4;
    case 0x7F24B230u: goto label_7F24B230;
    case 0x7F24B260u: goto label_7F24B260;
    case 0x7F24B28Cu: goto label_7F24B28C;
    case 0x7F24B2C0u: goto label_7F24B2C0;
    case 0x7F24B2C8u: goto label_7F24B2C8;
    case 0x7F24B378u: goto label_7F24B378;
    case 0x7F24B388u: goto label_7F24B388;
    case 0x7F24B394u: goto label_7F24B394;
    case 0x7F24B3A0u: goto label_7F24B3A0;
    case 0x7F24B3D0u: goto label_7F24B3D0;
    case 0x7F24B404u: goto label_7F24B404;
    case 0x7F24B440u: goto label_7F24B440;
    case 0x7F24B45Cu: goto label_7F24B45C;
    case 0x7F24B490u: goto label_7F24B490;
    case 0x7F24B4A8u: goto label_7F24B4A8;
    case 0x7F24B4B0u: goto label_7F24B4B0;
    case 0x7F24B4B8u: goto label_7F24B4B8;
    case 0x7F24B4C0u: goto label_7F24B4C0;
    case 0x7F24B4C8u: goto label_7F24B4C8;
    case 0x7F24B518u: goto label_7F24B518;
    case 0x7F24B54Cu: goto label_7F24B54C;
    case 0x7F24B5ACu: goto label_7F24B5AC;
    case 0x7F24B5C8u: goto label_7F24B5C8;
    case 0x7F24B67Cu: goto label_7F24B67C;
    case 0x7F24B68Cu: goto label_7F24B68C;
    case 0x7F24B6E4u: goto label_7F24B6E4;
    case 0x7F24B700u: goto label_7F24B700;
    case 0x7F24B71Cu: goto label_7F24B71C;
    case 0x7F24B77Cu: goto label_7F24B77C;
    case 0x7F24B78Cu: goto label_7F24B78C;
    case 0x7F24B7ECu: goto label_7F24B7EC;
    case 0x7F24B7FCu: goto label_7F24B7FC;
    case 0x7F24B810u: goto label_7F24B810;
    case 0x7F24B8B8u: goto label_7F24B8B8;
    case 0x7F24B8D4u: goto label_7F24B8D4;
    case 0x7F24B908u: goto label_7F24B908;
    case 0x7F24B92Cu: goto label_7F24B92C;
    case 0x7F24B940u: goto label_7F24B940;
    case 0x7F24B964u: goto label_7F24B964;
    case 0x7F24B9ACu: goto label_7F24B9AC;
    case 0x7F24B9C4u: goto label_7F24B9C4;
    case 0x7F24B9FCu: goto label_7F24B9FC;
    case 0x7F24BA18u: goto label_7F24BA18;
    case 0x7F24BA24u: goto label_7F24BA24;
    case 0x7F24BA3Cu: goto label_7F24BA3C;
    case 0x7F24BA54u: goto label_7F24BA54;
    case 0x7F24BAACu: goto label_7F24BAAC;
    case 0x7F24BAB8u: goto label_7F24BAB8;
    case 0x7F24BB00u: goto label_7F24BB00;
    case 0x7F24BB0Cu: goto label_7F24BB0C;
    case 0x7F24BB28u: goto label_7F24BB28;
    case 0x7F24BB34u: goto label_7F24BB34;
    case 0x7F24BB60u: goto label_7F24BB60;
    case 0x7F24BB6Cu: goto label_7F24BB6C;
    case 0x7F24BB88u: goto label_7F24BB88;
    case 0x7F24BB94u: goto label_7F24BB94;
    case 0x7F24BBC0u: goto label_7F24BBC0;
    case 0x7F24BBCCu: goto label_7F24BBCC;
    case 0x7F24BBE8u: goto label_7F24BBE8;
    case 0x7F24BBF4u: goto label_7F24BBF4;
    case 0x7F24BC14u: goto label_7F24BC14;
    case 0x7F24BC20u: goto label_7F24BC20;
    case 0x7F24BC3Cu: goto label_7F24BC3C;
    case 0x7F24BC48u: goto label_7F24BC48;
    case 0x7F24BC68u: goto label_7F24BC68;
    case 0x7F24BC74u: goto label_7F24BC74;
    case 0x7F24BC90u: goto label_7F24BC90;
    case 0x7F24BC9Cu: goto label_7F24BC9C;
    case 0x7F24BCF4u: goto label_7F24BCF4;
    case 0x7F24BD10u: goto label_7F24BD10;
    case 0x7F24BD84u: goto label_7F24BD84;
    case 0x7F24BD94u: goto label_7F24BD94;
    case 0x7F24BDBCu: goto label_7F24BDBC;
    case 0x7F24BDFCu: goto label_7F24BDFC;
    case 0x7F24BE40u: goto label_7F24BE40;
    case 0x7F24BE54u: goto label_7F24BE54;
    case 0x7F24BEBCu: goto label_7F24BEBC;
    case 0x7F24BED0u: goto label_7F24BED0;
    case 0x7F24BF00u: goto label_7F24BF00;
    case 0x7F24BF54u: goto label_7F24BF54;
    case 0x7F24BF5Cu: goto label_7F24BF5C;
    case 0x7F24BF98u: goto label_7F24BF98;
    case 0x7F24BFB8u: goto label_7F24BFB8;
    case 0x7F24BFECu: goto label_7F24BFEC;
    case 0x7F24C048u: goto label_7F24C048;
    case 0x7F24C084u: goto label_7F24C084;
    case 0x7F24C0C0u: goto label_7F24C0C0;
    case 0x7F24C0C4u: goto label_7F24C0C4;
    case 0x7F24C0DCu: goto label_7F24C0DC;
    default: return;
    }
}

