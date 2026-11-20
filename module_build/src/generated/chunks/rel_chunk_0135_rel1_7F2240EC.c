// DolRecomp output
#include "../generated.h"

static void loop_7F2247EC(CPUState* ctx) {
label_7F2247EC:
    ctx->downcount -= 5;
    ctx->pc = 0x7F2247ECu;
    // 7F2247EC: lhz     r4, 18(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(18);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

    // 7F2247F0: addi    r0, r7, 260
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(260);

    // 7F2247F4: addi    r6, r6, 36
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(36);

    // 7F2247F8: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

    ctx->pc = 0x7F2247FCu;
    // 7F2247FC: stbx    r4, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    ctx->pc = 0x7F224800u;
    // 7F224800: lhz     r0, 56(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    // 7F224804: cmpw    r7, r0
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

    // 7F224808: bc    12, 0, 0x7F2247EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2247ECu;
                return;
            }
            goto label_7F2247EC;
        }
    }

    ctx->pc = 0x7F22480Cu;
}

static void loop_7F22579C(CPUState* ctx) {
label_7F22579C:
    ctx->downcount -= 6;
    ctx->pc = 0x7F22579Cu;
    // 7F22579C: stb     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

    ctx->pc = 0x7F2257A0u;
    // 7F2257A0: stb     r6, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

    ctx->pc = 0x7F2257A4u;
    // 7F2257A4: stb     r5, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    ctx->pc = 0x7F2257A8u;
    // 7F2257A8: stb     r3, 3(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    // 7F2257AC: addi    r8, r8, 12
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(12);

    // 7F2257B0: bc    16, 0, 0x7F22579C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F22579Cu;
                return;
            }
            goto label_7F22579C;
        }
    }

    ctx->pc = 0x7F2257B4u;
}

static void loop_7F2268F8(CPUState* ctx) {
label_7F2268F8:
    ctx->downcount -= 5;
    ctx->pc = 0x7F2268F8u;
    // 7F2268F8: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F2268FCu;
    // 7F2268FC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F226900u;
    // 7F226900: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F226904u;
    // 7F226904: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F226908: bc    16, 0, 0x7F2268F8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2268F8u;
                return;
            }
            goto label_7F2268F8;
        }
    }

    ctx->pc = 0x7F22690Cu;
}

static void loop_7F226F88(CPUState* ctx) {
label_7F226F88:
    ctx->downcount -= 11;
    ctx->pc = 0x7F226F88u;
    // 7F226F88: lwz     r4, 16(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 7F226F8C: add   r5, r28, r3
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x7F226F90u;
    // 7F226F90: lwz     r0, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F226F94: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

    ctx->pc = 0x7F226F98u;
    // 7F226F98: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x7F226F9Cu;
    // 7F226F9C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x7F226FA0u;
    // 7F226FA0: lwz     r4, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F226FA4u;
    // 7F226FA4: lwz     r0, 28(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F226FA8u;
    // 7F226FA8: stw     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x7F226FACu;
    // 7F226FAC: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F226FB0: bc    16, 0, 0x7F226F88
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F226F88u;
                return;
            }
            goto label_7F226F88;
        }
    }

    ctx->pc = 0x7F226FB4u;
}

static void loop_7F2272CC(CPUState* ctx) {
label_7F2272CC:
    ctx->downcount -= 44;
    ctx->pc = 0x7F2272CCu;
    // 7F2272CC: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F2272D0: add   r12, r30, r5
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

    ctx->pc = 0x7F2272D4u;
    // 7F2272D4: lwz     r7, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    // 7F2272D8: add   r11, r29, r5
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[11] = res;
    }

    // 7F2272DC: add   r10, r27, r5
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[10] = res;
    }

    // 7F2272E0: add   r9, r28, r5
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

    ctx->pc = 0x7F2272E4u;
    // 7F2272E4: stw     r0, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F2272E8: add   r4, r26, r5
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

    // 7F2272EC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

    // 7F2272F0: li      r0, 128
    ctx->gpr[0] = (u32)(s32)(128);

    ctx->pc = 0x7F2272F4u;
    // 7F2272F4: stw     r7, 4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    // 7F2272F8: addi    r5, r5, 16
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(16);

    ctx->pc = 0x7F2272FCu;
    // 7F2272FC: lwz     r8, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F227300u;
    // 7F227300: lwz     r7, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F227304u;
    // 7F227304: stw     r8, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    ctx->pc = 0x7F227308u;
    // 7F227308: stw     r7, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x7F22730Cu;
    // 7F22730C: lwz     r8, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F227310u;
    // 7F227310: lwz     r7, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F227314u;
    // 7F227314: stw     r8, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    ctx->pc = 0x7F227318u;
    // 7F227318: stw     r7, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x7F22731Cu;
    // 7F22731C: lwz     r8, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F227320u;
    // 7F227320: lwz     r7, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F227324u;
    // 7F227324: stw     r8, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    ctx->pc = 0x7F227328u;
    // 7F227328: stw     r7, 12(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x7F22732Cu;
    // 7F22732C: lwz     r8, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F227330u;
    // 7F227330: lwz     r7, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F227334u;
    // 7F227334: stw     r8, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    ctx->pc = 0x7F227338u;
    // 7F227338: stw     r7, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x7F22733Cu;
    // 7F22733C: lwz     r8, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F227340u;
    // 7F227340: lwz     r7, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F227344u;
    // 7F227344: stw     r8, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    ctx->pc = 0x7F227348u;
    // 7F227348: stw     r7, 12(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x7F22734Cu;
    // 7F22734C: lwz     r8, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F227350u;
    // 7F227350: lwz     r7, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F227354u;
    // 7F227354: stw     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    ctx->pc = 0x7F227358u;
    // 7F227358: stw     r7, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x7F22735Cu;
    // 7F22735C: lwz     r8, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F227360u;
    // 7F227360: lwz     r7, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F227364u;
    // 7F227364: stw     r8, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    ctx->pc = 0x7F227368u;
    // 7F227368: stw     r7, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x7F22736Cu;
    // 7F22736C: sth     r6, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

    ctx->pc = 0x7F227370u;
    // 7F227370: sth     r6, 10(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

    ctx->pc = 0x7F227374u;
    // 7F227374: stb     r0, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    // 7F227378: bc    16, 0, 0x7F2272CC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2272CCu;
                return;
            }
            goto label_7F2272CC;
        }
    }

    ctx->pc = 0x7F22737Cu;
}

void func_7F2240EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F2240ECu: goto label_7F2240EC;
    case 0x7F2240F0u: goto label_7F2240F0;
    case 0x7F2240F4u: goto label_7F2240F4;
    case 0x7F2240F8u: goto label_7F2240F8;
    case 0x7F2240FCu: goto label_7F2240FC;
    case 0x7F224100u: goto label_7F224100;
    case 0x7F224104u: goto label_7F224104;
    case 0x7F224108u: goto label_7F224108;
    case 0x7F22410Cu: goto label_7F22410C;
    case 0x7F224110u: goto label_7F224110;
    case 0x7F224114u: goto label_7F224114;
    case 0x7F224118u: goto label_7F224118;
    case 0x7F22411Cu: goto label_7F22411C;
    case 0x7F224120u: goto label_7F224120;
    case 0x7F224124u: goto label_7F224124;
    case 0x7F224128u: goto label_7F224128;
    case 0x7F22412Cu: goto label_7F22412C;
    case 0x7F224130u: goto label_7F224130;
    case 0x7F224134u: goto label_7F224134;
    case 0x7F224138u: goto label_7F224138;
    case 0x7F22413Cu: goto label_7F22413C;
    case 0x7F224140u: goto label_7F224140;
    case 0x7F224144u: goto label_7F224144;
    case 0x7F224148u: goto label_7F224148;
    case 0x7F22414Cu: goto label_7F22414C;
    case 0x7F224150u: goto label_7F224150;
    case 0x7F224154u: goto label_7F224154;
    case 0x7F224158u: goto label_7F224158;
    case 0x7F22415Cu: goto label_7F22415C;
    case 0x7F224160u: goto label_7F224160;
    case 0x7F224164u: goto label_7F224164;
    case 0x7F224168u: goto label_7F224168;
    case 0x7F22416Cu: goto label_7F22416C;
    case 0x7F224170u: goto label_7F224170;
    case 0x7F224174u: goto label_7F224174;
    case 0x7F224178u: goto label_7F224178;
    case 0x7F22417Cu: goto label_7F22417C;
    case 0x7F224180u: goto label_7F224180;
    case 0x7F224184u: goto label_7F224184;
    case 0x7F224188u: goto label_7F224188;
    case 0x7F22418Cu: goto label_7F22418C;
    case 0x7F224190u: goto label_7F224190;
    case 0x7F224194u: goto label_7F224194;
    case 0x7F224198u: goto label_7F224198;
    case 0x7F22419Cu: goto label_7F22419C;
    case 0x7F2241A0u: goto label_7F2241A0;
    case 0x7F2241A4u: goto label_7F2241A4;
    case 0x7F2241A8u: goto label_7F2241A8;
    case 0x7F2241ACu: goto label_7F2241AC;
    case 0x7F2241B0u: goto label_7F2241B0;
    case 0x7F2241B4u: goto label_7F2241B4;
    case 0x7F2241B8u: goto label_7F2241B8;
    case 0x7F2241BCu: goto label_7F2241BC;
    case 0x7F2241C0u: goto label_7F2241C0;
    case 0x7F2241C4u: goto label_7F2241C4;
    case 0x7F2241C8u: goto label_7F2241C8;
    case 0x7F2241CCu: goto label_7F2241CC;
    case 0x7F2241D0u: goto label_7F2241D0;
    case 0x7F2241D4u: goto label_7F2241D4;
    case 0x7F2241D8u: goto label_7F2241D8;
    case 0x7F2241DCu: goto label_7F2241DC;
    case 0x7F2241E0u: goto label_7F2241E0;
    case 0x7F2241E4u: goto label_7F2241E4;
    case 0x7F2241E8u: goto label_7F2241E8;
    case 0x7F2241ECu: goto label_7F2241EC;
    case 0x7F2241F0u: goto label_7F2241F0;
    case 0x7F2241F4u: goto label_7F2241F4;
    case 0x7F2241F8u: goto label_7F2241F8;
    case 0x7F2241FCu: goto label_7F2241FC;
    case 0x7F224200u: goto label_7F224200;
    case 0x7F224204u: goto label_7F224204;
    case 0x7F224208u: goto label_7F224208;
    case 0x7F22420Cu: goto label_7F22420C;
    case 0x7F224210u: goto label_7F224210;
    case 0x7F224214u: goto label_7F224214;
    case 0x7F224218u: goto label_7F224218;
    case 0x7F22421Cu: goto label_7F22421C;
    case 0x7F224220u: goto label_7F224220;
    case 0x7F224224u: goto label_7F224224;
    case 0x7F224228u: goto label_7F224228;
    case 0x7F22422Cu: goto label_7F22422C;
    case 0x7F224230u: goto label_7F224230;
    case 0x7F224234u: goto label_7F224234;
    case 0x7F224238u: goto label_7F224238;
    case 0x7F22423Cu: goto label_7F22423C;
    case 0x7F224240u: goto label_7F224240;
    case 0x7F224244u: goto label_7F224244;
    case 0x7F224248u: goto label_7F224248;
    case 0x7F22424Cu: goto label_7F22424C;
    case 0x7F224250u: goto label_7F224250;
    case 0x7F224254u: goto label_7F224254;
    case 0x7F224258u: goto label_7F224258;
    case 0x7F22425Cu: goto label_7F22425C;
    case 0x7F224260u: goto label_7F224260;
    case 0x7F224264u: goto label_7F224264;
    case 0x7F224268u: goto label_7F224268;
    case 0x7F22426Cu: goto label_7F22426C;
    case 0x7F224270u: goto label_7F224270;
    case 0x7F224274u: goto label_7F224274;
    case 0x7F224278u: goto label_7F224278;
    case 0x7F22427Cu: goto label_7F22427C;
    case 0x7F224280u: goto label_7F224280;
    case 0x7F224284u: goto label_7F224284;
    case 0x7F224288u: goto label_7F224288;
    case 0x7F22428Cu: goto label_7F22428C;
    case 0x7F224290u: goto label_7F224290;
    case 0x7F224294u: goto label_7F224294;
    case 0x7F224298u: goto label_7F224298;
    case 0x7F22429Cu: goto label_7F22429C;
    case 0x7F2242A0u: goto label_7F2242A0;
    case 0x7F2242A4u: goto label_7F2242A4;
    case 0x7F2242A8u: goto label_7F2242A8;
    case 0x7F2242ACu: goto label_7F2242AC;
    case 0x7F2242B0u: goto label_7F2242B0;
    case 0x7F2242B4u: goto label_7F2242B4;
    case 0x7F2242B8u: goto label_7F2242B8;
    case 0x7F2242BCu: goto label_7F2242BC;
    case 0x7F2242C0u: goto label_7F2242C0;
    case 0x7F2242C4u: goto label_7F2242C4;
    case 0x7F2242C8u: goto label_7F2242C8;
    case 0x7F2242CCu: goto label_7F2242CC;
    case 0x7F2242D0u: goto label_7F2242D0;
    case 0x7F2242D4u: goto label_7F2242D4;
    case 0x7F2242D8u: goto label_7F2242D8;
    case 0x7F2242DCu: goto label_7F2242DC;
    case 0x7F2242E0u: goto label_7F2242E0;
    case 0x7F2242E4u: goto label_7F2242E4;
    case 0x7F2242E8u: goto label_7F2242E8;
    case 0x7F2242ECu: goto label_7F2242EC;
    case 0x7F2242F0u: goto label_7F2242F0;
    case 0x7F2242F4u: goto label_7F2242F4;
    case 0x7F2242F8u: goto label_7F2242F8;
    case 0x7F2242FCu: goto label_7F2242FC;
    case 0x7F224300u: goto label_7F224300;
    case 0x7F224304u: goto label_7F224304;
    case 0x7F224308u: goto label_7F224308;
    case 0x7F22430Cu: goto label_7F22430C;
    case 0x7F224310u: goto label_7F224310;
    case 0x7F224314u: goto label_7F224314;
    case 0x7F224318u: goto label_7F224318;
    case 0x7F22431Cu: goto label_7F22431C;
    case 0x7F224320u: goto label_7F224320;
    case 0x7F224324u: goto label_7F224324;
    case 0x7F224328u: goto label_7F224328;
    case 0x7F22432Cu: goto label_7F22432C;
    case 0x7F224330u: goto label_7F224330;
    case 0x7F224334u: goto label_7F224334;
    case 0x7F224338u: goto label_7F224338;
    case 0x7F22433Cu: goto label_7F22433C;
    case 0x7F224340u: goto label_7F224340;
    case 0x7F224344u: goto label_7F224344;
    case 0x7F224348u: goto label_7F224348;
    case 0x7F22434Cu: goto label_7F22434C;
    case 0x7F224350u: goto label_7F224350;
    case 0x7F224354u: goto label_7F224354;
    case 0x7F224358u: goto label_7F224358;
    case 0x7F22435Cu: goto label_7F22435C;
    case 0x7F224360u: goto label_7F224360;
    case 0x7F224364u: goto label_7F224364;
    case 0x7F224368u: goto label_7F224368;
    case 0x7F22436Cu: goto label_7F22436C;
    case 0x7F224370u: goto label_7F224370;
    case 0x7F224374u: goto label_7F224374;
    case 0x7F224378u: goto label_7F224378;
    case 0x7F22437Cu: goto label_7F22437C;
    case 0x7F224380u: goto label_7F224380;
    case 0x7F224384u: goto label_7F224384;
    case 0x7F224388u: goto label_7F224388;
    case 0x7F22438Cu: goto label_7F22438C;
    case 0x7F224390u: goto label_7F224390;
    case 0x7F224394u: goto label_7F224394;
    case 0x7F224398u: goto label_7F224398;
    case 0x7F22439Cu: goto label_7F22439C;
    case 0x7F2243A0u: goto label_7F2243A0;
    case 0x7F2243A4u: goto label_7F2243A4;
    case 0x7F2243A8u: goto label_7F2243A8;
    case 0x7F2243ACu: goto label_7F2243AC;
    case 0x7F2243B0u: goto label_7F2243B0;
    case 0x7F2243B4u: goto label_7F2243B4;
    case 0x7F2243B8u: goto label_7F2243B8;
    case 0x7F2243BCu: goto label_7F2243BC;
    case 0x7F2243C0u: goto label_7F2243C0;
    case 0x7F2243C4u: goto label_7F2243C4;
    case 0x7F2243C8u: goto label_7F2243C8;
    case 0x7F2243CCu: goto label_7F2243CC;
    case 0x7F2243D0u: goto label_7F2243D0;
    case 0x7F2243D4u: goto label_7F2243D4;
    case 0x7F2243D8u: goto label_7F2243D8;
    case 0x7F2243DCu: goto label_7F2243DC;
    case 0x7F2243E0u: goto label_7F2243E0;
    case 0x7F2243E4u: goto label_7F2243E4;
    case 0x7F2243E8u: goto label_7F2243E8;
    case 0x7F2243ECu: goto label_7F2243EC;
    case 0x7F2243F0u: goto label_7F2243F0;
    case 0x7F2243F4u: goto label_7F2243F4;
    case 0x7F2243F8u: goto label_7F2243F8;
    case 0x7F2243FCu: goto label_7F2243FC;
    case 0x7F224400u: goto label_7F224400;
    case 0x7F224404u: goto label_7F224404;
    case 0x7F224408u: goto label_7F224408;
    case 0x7F22440Cu: goto label_7F22440C;
    case 0x7F224410u: goto label_7F224410;
    case 0x7F224414u: goto label_7F224414;
    case 0x7F224418u: goto label_7F224418;
    case 0x7F22441Cu: goto label_7F22441C;
    case 0x7F224420u: goto label_7F224420;
    case 0x7F224424u: goto label_7F224424;
    case 0x7F224428u: goto label_7F224428;
    case 0x7F22442Cu: goto label_7F22442C;
    case 0x7F224430u: goto label_7F224430;
    case 0x7F224434u: goto label_7F224434;
    case 0x7F224438u: goto label_7F224438;
    case 0x7F22443Cu: goto label_7F22443C;
    case 0x7F224440u: goto label_7F224440;
    case 0x7F224444u: goto label_7F224444;
    case 0x7F224448u: goto label_7F224448;
    case 0x7F22444Cu: goto label_7F22444C;
    case 0x7F224450u: goto label_7F224450;
    case 0x7F224454u: goto label_7F224454;
    case 0x7F224458u: goto label_7F224458;
    case 0x7F22445Cu: goto label_7F22445C;
    case 0x7F224460u: goto label_7F224460;
    case 0x7F224464u: goto label_7F224464;
    case 0x7F224468u: goto label_7F224468;
    case 0x7F22446Cu: goto label_7F22446C;
    case 0x7F224470u: goto label_7F224470;
    case 0x7F224474u: goto label_7F224474;
    case 0x7F224478u: goto label_7F224478;
    case 0x7F22447Cu: goto label_7F22447C;
    case 0x7F224480u: goto label_7F224480;
    case 0x7F224484u: goto label_7F224484;
    case 0x7F224488u: goto label_7F224488;
    case 0x7F22448Cu: goto label_7F22448C;
    case 0x7F224490u: goto label_7F224490;
    case 0x7F224494u: goto label_7F224494;
    case 0x7F224498u: goto label_7F224498;
    case 0x7F22449Cu: goto label_7F22449C;
    case 0x7F2244A0u: goto label_7F2244A0;
    case 0x7F2244A4u: goto label_7F2244A4;
    case 0x7F2244A8u: goto label_7F2244A8;
    case 0x7F2244ACu: goto label_7F2244AC;
    case 0x7F2244B0u: goto label_7F2244B0;
    case 0x7F2244B4u: goto label_7F2244B4;
    case 0x7F2244B8u: goto label_7F2244B8;
    case 0x7F2244BCu: goto label_7F2244BC;
    case 0x7F2244C0u: goto label_7F2244C0;
    case 0x7F2244C4u: goto label_7F2244C4;
    case 0x7F2244C8u: goto label_7F2244C8;
    case 0x7F2244CCu: goto label_7F2244CC;
    case 0x7F2244D0u: goto label_7F2244D0;
    case 0x7F2244D4u: goto label_7F2244D4;
    case 0x7F2244D8u: goto label_7F2244D8;
    case 0x7F2244DCu: goto label_7F2244DC;
    case 0x7F2244E0u: goto label_7F2244E0;
    case 0x7F2244E4u: goto label_7F2244E4;
    case 0x7F2244E8u: goto label_7F2244E8;
    case 0x7F2244ECu: goto label_7F2244EC;
    case 0x7F2244F0u: goto label_7F2244F0;
    case 0x7F2244F4u: goto label_7F2244F4;
    case 0x7F2244F8u: goto label_7F2244F8;
    case 0x7F2244FCu: goto label_7F2244FC;
    case 0x7F224500u: goto label_7F224500;
    case 0x7F224504u: goto label_7F224504;
    case 0x7F224508u: goto label_7F224508;
    case 0x7F22450Cu: goto label_7F22450C;
    case 0x7F224510u: goto label_7F224510;
    case 0x7F224514u: goto label_7F224514;
    case 0x7F224518u: goto label_7F224518;
    case 0x7F22451Cu: goto label_7F22451C;
    case 0x7F224520u: goto label_7F224520;
    case 0x7F224524u: goto label_7F224524;
    case 0x7F224528u: goto label_7F224528;
    case 0x7F22452Cu: goto label_7F22452C;
    case 0x7F224530u: goto label_7F224530;
    case 0x7F224534u: goto label_7F224534;
    case 0x7F224538u: goto label_7F224538;
    case 0x7F22453Cu: goto label_7F22453C;
    case 0x7F224540u: goto label_7F224540;
    case 0x7F224544u: goto label_7F224544;
    case 0x7F224548u: goto label_7F224548;
    case 0x7F22454Cu: goto label_7F22454C;
    case 0x7F224550u: goto label_7F224550;
    case 0x7F224554u: goto label_7F224554;
    case 0x7F224558u: goto label_7F224558;
    case 0x7F22455Cu: goto label_7F22455C;
    case 0x7F224560u: goto label_7F224560;
    case 0x7F224564u: goto label_7F224564;
    case 0x7F224568u: goto label_7F224568;
    case 0x7F22456Cu: goto label_7F22456C;
    case 0x7F224570u: goto label_7F224570;
    case 0x7F224574u: goto label_7F224574;
    case 0x7F224578u: goto label_7F224578;
    case 0x7F22457Cu: goto label_7F22457C;
    case 0x7F224580u: goto label_7F224580;
    case 0x7F224584u: goto label_7F224584;
    case 0x7F224588u: goto label_7F224588;
    case 0x7F22458Cu: goto label_7F22458C;
    case 0x7F224590u: goto label_7F224590;
    case 0x7F224594u: goto label_7F224594;
    case 0x7F224598u: goto label_7F224598;
    case 0x7F22459Cu: goto label_7F22459C;
    case 0x7F2245A0u: goto label_7F2245A0;
    case 0x7F2245A4u: goto label_7F2245A4;
    case 0x7F2245A8u: goto label_7F2245A8;
    case 0x7F2245ACu: goto label_7F2245AC;
    case 0x7F2245B0u: goto label_7F2245B0;
    case 0x7F2245B4u: goto label_7F2245B4;
    case 0x7F2245B8u: goto label_7F2245B8;
    case 0x7F2245BCu: goto label_7F2245BC;
    case 0x7F2245C0u: goto label_7F2245C0;
    case 0x7F2245C4u: goto label_7F2245C4;
    case 0x7F2245C8u: goto label_7F2245C8;
    case 0x7F2245CCu: goto label_7F2245CC;
    case 0x7F2245D0u: goto label_7F2245D0;
    case 0x7F2245D4u: goto label_7F2245D4;
    case 0x7F2245D8u: goto label_7F2245D8;
    case 0x7F2245DCu: goto label_7F2245DC;
    case 0x7F2245E0u: goto label_7F2245E0;
    case 0x7F2245E4u: goto label_7F2245E4;
    case 0x7F2245E8u: goto label_7F2245E8;
    case 0x7F2245ECu: goto label_7F2245EC;
    case 0x7F2245F0u: goto label_7F2245F0;
    case 0x7F2245F4u: goto label_7F2245F4;
    case 0x7F2245F8u: goto label_7F2245F8;
    case 0x7F2245FCu: goto label_7F2245FC;
    case 0x7F224600u: goto label_7F224600;
    case 0x7F224604u: goto label_7F224604;
    case 0x7F224608u: goto label_7F224608;
    case 0x7F22460Cu: goto label_7F22460C;
    case 0x7F224610u: goto label_7F224610;
    case 0x7F224614u: goto label_7F224614;
    case 0x7F224618u: goto label_7F224618;
    case 0x7F22461Cu: goto label_7F22461C;
    case 0x7F224620u: goto label_7F224620;
    case 0x7F224624u: goto label_7F224624;
    case 0x7F224628u: goto label_7F224628;
    case 0x7F22462Cu: goto label_7F22462C;
    case 0x7F224630u: goto label_7F224630;
    case 0x7F224634u: goto label_7F224634;
    case 0x7F224638u: goto label_7F224638;
    case 0x7F22463Cu: goto label_7F22463C;
    case 0x7F224640u: goto label_7F224640;
    case 0x7F224644u: goto label_7F224644;
    case 0x7F224648u: goto label_7F224648;
    case 0x7F22464Cu: goto label_7F22464C;
    case 0x7F224650u: goto label_7F224650;
    case 0x7F224654u: goto label_7F224654;
    case 0x7F224658u: goto label_7F224658;
    case 0x7F22465Cu: goto label_7F22465C;
    case 0x7F224660u: goto label_7F224660;
    case 0x7F224664u: goto label_7F224664;
    case 0x7F224668u: goto label_7F224668;
    case 0x7F22466Cu: goto label_7F22466C;
    case 0x7F224670u: goto label_7F224670;
    case 0x7F224674u: goto label_7F224674;
    case 0x7F224678u: goto label_7F224678;
    case 0x7F22467Cu: goto label_7F22467C;
    case 0x7F224680u: goto label_7F224680;
    case 0x7F224684u: goto label_7F224684;
    case 0x7F224688u: goto label_7F224688;
    case 0x7F22468Cu: goto label_7F22468C;
    case 0x7F224690u: goto label_7F224690;
    case 0x7F224694u: goto label_7F224694;
    case 0x7F224698u: goto label_7F224698;
    case 0x7F22469Cu: goto label_7F22469C;
    case 0x7F2246A0u: goto label_7F2246A0;
    case 0x7F2246A4u: goto label_7F2246A4;
    case 0x7F2246A8u: goto label_7F2246A8;
    case 0x7F2246ACu: goto label_7F2246AC;
    case 0x7F2246B0u: goto label_7F2246B0;
    case 0x7F2246B4u: goto label_7F2246B4;
    case 0x7F2246B8u: goto label_7F2246B8;
    case 0x7F2246BCu: goto label_7F2246BC;
    case 0x7F2246C0u: goto label_7F2246C0;
    case 0x7F2246C4u: goto label_7F2246C4;
    case 0x7F2246C8u: goto label_7F2246C8;
    case 0x7F2246CCu: goto label_7F2246CC;
    case 0x7F2246D0u: goto label_7F2246D0;
    case 0x7F2246D4u: goto label_7F2246D4;
    case 0x7F2246D8u: goto label_7F2246D8;
    case 0x7F2246DCu: goto label_7F2246DC;
    case 0x7F2246E0u: goto label_7F2246E0;
    case 0x7F2246E4u: goto label_7F2246E4;
    case 0x7F2246E8u: goto label_7F2246E8;
    case 0x7F2246ECu: goto label_7F2246EC;
    case 0x7F2246F0u: goto label_7F2246F0;
    case 0x7F2246F4u: goto label_7F2246F4;
    case 0x7F2246F8u: goto label_7F2246F8;
    case 0x7F2246FCu: goto label_7F2246FC;
    case 0x7F224700u: goto label_7F224700;
    case 0x7F224704u: goto label_7F224704;
    case 0x7F224708u: goto label_7F224708;
    case 0x7F22470Cu: goto label_7F22470C;
    case 0x7F224710u: goto label_7F224710;
    case 0x7F224714u: goto label_7F224714;
    case 0x7F224718u: goto label_7F224718;
    case 0x7F22471Cu: goto label_7F22471C;
    case 0x7F224720u: goto label_7F224720;
    case 0x7F224724u: goto label_7F224724;
    case 0x7F224728u: goto label_7F224728;
    case 0x7F22472Cu: goto label_7F22472C;
    case 0x7F224730u: goto label_7F224730;
    case 0x7F224734u: goto label_7F224734;
    case 0x7F224738u: goto label_7F224738;
    case 0x7F22473Cu: goto label_7F22473C;
    case 0x7F224740u: goto label_7F224740;
    case 0x7F224744u: goto label_7F224744;
    case 0x7F224748u: goto label_7F224748;
    case 0x7F22474Cu: goto label_7F22474C;
    case 0x7F224750u: goto label_7F224750;
    case 0x7F224754u: goto label_7F224754;
    case 0x7F224758u: goto label_7F224758;
    case 0x7F22475Cu: goto label_7F22475C;
    case 0x7F224760u: goto label_7F224760;
    case 0x7F224764u: goto label_7F224764;
    case 0x7F224768u: goto label_7F224768;
    case 0x7F22476Cu: goto label_7F22476C;
    case 0x7F224770u: goto label_7F224770;
    case 0x7F224774u: goto label_7F224774;
    case 0x7F224778u: goto label_7F224778;
    case 0x7F22477Cu: goto label_7F22477C;
    case 0x7F224780u: goto label_7F224780;
    case 0x7F224784u: goto label_7F224784;
    case 0x7F224788u: goto label_7F224788;
    case 0x7F22478Cu: goto label_7F22478C;
    case 0x7F224790u: goto label_7F224790;
    case 0x7F224794u: goto label_7F224794;
    case 0x7F224798u: goto label_7F224798;
    case 0x7F22479Cu: goto label_7F22479C;
    case 0x7F2247A0u: goto label_7F2247A0;
    case 0x7F2247A4u: goto label_7F2247A4;
    case 0x7F2247A8u: goto label_7F2247A8;
    case 0x7F2247ACu: goto label_7F2247AC;
    case 0x7F2247B0u: goto label_7F2247B0;
    case 0x7F2247B4u: goto label_7F2247B4;
    case 0x7F2247B8u: goto label_7F2247B8;
    case 0x7F2247BCu: goto label_7F2247BC;
    case 0x7F2247C0u: goto label_7F2247C0;
    case 0x7F2247C4u: goto label_7F2247C4;
    case 0x7F2247C8u: goto label_7F2247C8;
    case 0x7F2247CCu: goto label_7F2247CC;
    case 0x7F2247D0u: goto label_7F2247D0;
    case 0x7F2247D4u: goto label_7F2247D4;
    case 0x7F2247D8u: goto label_7F2247D8;
    case 0x7F2247DCu: goto label_7F2247DC;
    case 0x7F2247E0u: goto label_7F2247E0;
    case 0x7F2247E4u: goto label_7F2247E4;
    case 0x7F2247E8u: goto label_7F2247E8;
    case 0x7F2247ECu: goto label_7F2247EC;
    case 0x7F2247F0u: goto label_7F2247F0;
    case 0x7F2247F4u: goto label_7F2247F4;
    case 0x7F2247F8u: goto label_7F2247F8;
    case 0x7F2247FCu: goto label_7F2247FC;
    case 0x7F224800u: goto label_7F224800;
    case 0x7F224804u: goto label_7F224804;
    case 0x7F224808u: goto label_7F224808;
    case 0x7F22480Cu: goto label_7F22480C;
    case 0x7F224810u: goto label_7F224810;
    case 0x7F224814u: goto label_7F224814;
    case 0x7F224818u: goto label_7F224818;
    case 0x7F22481Cu: goto label_7F22481C;
    case 0x7F224820u: goto label_7F224820;
    case 0x7F224824u: goto label_7F224824;
    case 0x7F224828u: goto label_7F224828;
    case 0x7F22482Cu: goto label_7F22482C;
    case 0x7F224830u: goto label_7F224830;
    case 0x7F224834u: goto label_7F224834;
    case 0x7F224838u: goto label_7F224838;
    case 0x7F22483Cu: goto label_7F22483C;
    case 0x7F224840u: goto label_7F224840;
    case 0x7F224844u: goto label_7F224844;
    case 0x7F224848u: goto label_7F224848;
    case 0x7F22484Cu: goto label_7F22484C;
    case 0x7F224850u: goto label_7F224850;
    case 0x7F224854u: goto label_7F224854;
    case 0x7F224858u: goto label_7F224858;
    case 0x7F22485Cu: goto label_7F22485C;
    case 0x7F224860u: goto label_7F224860;
    case 0x7F224864u: goto label_7F224864;
    case 0x7F224868u: goto label_7F224868;
    case 0x7F22486Cu: goto label_7F22486C;
    case 0x7F224870u: goto label_7F224870;
    case 0x7F224874u: goto label_7F224874;
    case 0x7F224878u: goto label_7F224878;
    case 0x7F22487Cu: goto label_7F22487C;
    case 0x7F224880u: goto label_7F224880;
    case 0x7F224884u: goto label_7F224884;
    case 0x7F224888u: goto label_7F224888;
    case 0x7F22488Cu: goto label_7F22488C;
    case 0x7F224890u: goto label_7F224890;
    case 0x7F224894u: goto label_7F224894;
    case 0x7F224898u: goto label_7F224898;
    case 0x7F22489Cu: goto label_7F22489C;
    case 0x7F2248A0u: goto label_7F2248A0;
    case 0x7F2248A4u: goto label_7F2248A4;
    case 0x7F2248A8u: goto label_7F2248A8;
    case 0x7F2248ACu: goto label_7F2248AC;
    case 0x7F2248B0u: goto label_7F2248B0;
    case 0x7F2248B4u: goto label_7F2248B4;
    case 0x7F2248B8u: goto label_7F2248B8;
    case 0x7F2248BCu: goto label_7F2248BC;
    case 0x7F2248C0u: goto label_7F2248C0;
    case 0x7F2248C4u: goto label_7F2248C4;
    case 0x7F2248C8u: goto label_7F2248C8;
    case 0x7F2248CCu: goto label_7F2248CC;
    case 0x7F2248D0u: goto label_7F2248D0;
    case 0x7F2248D4u: goto label_7F2248D4;
    case 0x7F2248D8u: goto label_7F2248D8;
    case 0x7F2248DCu: goto label_7F2248DC;
    case 0x7F2248E0u: goto label_7F2248E0;
    case 0x7F2248E4u: goto label_7F2248E4;
    case 0x7F2248E8u: goto label_7F2248E8;
    case 0x7F2248ECu: goto label_7F2248EC;
    case 0x7F2248F0u: goto label_7F2248F0;
    case 0x7F2248F4u: goto label_7F2248F4;
    case 0x7F2248F8u: goto label_7F2248F8;
    case 0x7F2248FCu: goto label_7F2248FC;
    case 0x7F224900u: goto label_7F224900;
    case 0x7F224904u: goto label_7F224904;
    case 0x7F224908u: goto label_7F224908;
    case 0x7F22490Cu: goto label_7F22490C;
    case 0x7F224910u: goto label_7F224910;
    case 0x7F224914u: goto label_7F224914;
    case 0x7F224918u: goto label_7F224918;
    case 0x7F22491Cu: goto label_7F22491C;
    case 0x7F224920u: goto label_7F224920;
    case 0x7F224924u: goto label_7F224924;
    case 0x7F224928u: goto label_7F224928;
    case 0x7F22492Cu: goto label_7F22492C;
    case 0x7F224930u: goto label_7F224930;
    case 0x7F224934u: goto label_7F224934;
    case 0x7F224938u: goto label_7F224938;
    case 0x7F22493Cu: goto label_7F22493C;
    case 0x7F224940u: goto label_7F224940;
    case 0x7F224944u: goto label_7F224944;
    case 0x7F224948u: goto label_7F224948;
    case 0x7F22494Cu: goto label_7F22494C;
    case 0x7F224950u: goto label_7F224950;
    case 0x7F224954u: goto label_7F224954;
    case 0x7F224958u: goto label_7F224958;
    case 0x7F22495Cu: goto label_7F22495C;
    case 0x7F224960u: goto label_7F224960;
    case 0x7F224964u: goto label_7F224964;
    case 0x7F224968u: goto label_7F224968;
    case 0x7F22496Cu: goto label_7F22496C;
    case 0x7F224970u: goto label_7F224970;
    case 0x7F224974u: goto label_7F224974;
    case 0x7F224978u: goto label_7F224978;
    case 0x7F22497Cu: goto label_7F22497C;
    case 0x7F224980u: goto label_7F224980;
    case 0x7F224984u: goto label_7F224984;
    case 0x7F224988u: goto label_7F224988;
    case 0x7F22498Cu: goto label_7F22498C;
    case 0x7F224990u: goto label_7F224990;
    case 0x7F224994u: goto label_7F224994;
    case 0x7F224998u: goto label_7F224998;
    case 0x7F22499Cu: goto label_7F22499C;
    case 0x7F2249A0u: goto label_7F2249A0;
    case 0x7F2249A4u: goto label_7F2249A4;
    case 0x7F2249A8u: goto label_7F2249A8;
    case 0x7F2249ACu: goto label_7F2249AC;
    case 0x7F2249B0u: goto label_7F2249B0;
    case 0x7F2249B4u: goto label_7F2249B4;
    case 0x7F2249B8u: goto label_7F2249B8;
    case 0x7F2249BCu: goto label_7F2249BC;
    case 0x7F2249C0u: goto label_7F2249C0;
    case 0x7F2249C4u: goto label_7F2249C4;
    case 0x7F2249C8u: goto label_7F2249C8;
    case 0x7F2249CCu: goto label_7F2249CC;
    case 0x7F2249D0u: goto label_7F2249D0;
    case 0x7F2249D4u: goto label_7F2249D4;
    case 0x7F2249D8u: goto label_7F2249D8;
    case 0x7F2249DCu: goto label_7F2249DC;
    case 0x7F2249E0u: goto label_7F2249E0;
    case 0x7F2249E4u: goto label_7F2249E4;
    case 0x7F2249E8u: goto label_7F2249E8;
    case 0x7F2249ECu: goto label_7F2249EC;
    case 0x7F2249F0u: goto label_7F2249F0;
    case 0x7F2249F4u: goto label_7F2249F4;
    case 0x7F2249F8u: goto label_7F2249F8;
    case 0x7F2249FCu: goto label_7F2249FC;
    case 0x7F224A00u: goto label_7F224A00;
    case 0x7F224A04u: goto label_7F224A04;
    case 0x7F224A08u: goto label_7F224A08;
    case 0x7F224A0Cu: goto label_7F224A0C;
    case 0x7F224A10u: goto label_7F224A10;
    case 0x7F224A14u: goto label_7F224A14;
    case 0x7F224A18u: goto label_7F224A18;
    case 0x7F224A1Cu: goto label_7F224A1C;
    case 0x7F224A20u: goto label_7F224A20;
    case 0x7F224A24u: goto label_7F224A24;
    case 0x7F224A28u: goto label_7F224A28;
    case 0x7F224A2Cu: goto label_7F224A2C;
    case 0x7F224A30u: goto label_7F224A30;
    case 0x7F224A34u: goto label_7F224A34;
    case 0x7F224A38u: goto label_7F224A38;
    case 0x7F224A3Cu: goto label_7F224A3C;
    case 0x7F224A40u: goto label_7F224A40;
    case 0x7F224A44u: goto label_7F224A44;
    case 0x7F224A48u: goto label_7F224A48;
    case 0x7F224A4Cu: goto label_7F224A4C;
    case 0x7F224A50u: goto label_7F224A50;
    case 0x7F224A54u: goto label_7F224A54;
    case 0x7F224A58u: goto label_7F224A58;
    case 0x7F224A5Cu: goto label_7F224A5C;
    case 0x7F224A60u: goto label_7F224A60;
    case 0x7F224A64u: goto label_7F224A64;
    case 0x7F224A68u: goto label_7F224A68;
    case 0x7F224A6Cu: goto label_7F224A6C;
    case 0x7F224A70u: goto label_7F224A70;
    case 0x7F224A74u: goto label_7F224A74;
    case 0x7F224A78u: goto label_7F224A78;
    case 0x7F224A7Cu: goto label_7F224A7C;
    case 0x7F224A80u: goto label_7F224A80;
    case 0x7F224A84u: goto label_7F224A84;
    case 0x7F224A88u: goto label_7F224A88;
    case 0x7F224A8Cu: goto label_7F224A8C;
    case 0x7F224A90u: goto label_7F224A90;
    case 0x7F224A94u: goto label_7F224A94;
    case 0x7F224A98u: goto label_7F224A98;
    case 0x7F224A9Cu: goto label_7F224A9C;
    case 0x7F224AA0u: goto label_7F224AA0;
    case 0x7F224AA4u: goto label_7F224AA4;
    case 0x7F224AA8u: goto label_7F224AA8;
    case 0x7F224AACu: goto label_7F224AAC;
    case 0x7F224AB0u: goto label_7F224AB0;
    case 0x7F224AB4u: goto label_7F224AB4;
    case 0x7F224AB8u: goto label_7F224AB8;
    case 0x7F224ABCu: goto label_7F224ABC;
    case 0x7F224AC0u: goto label_7F224AC0;
    case 0x7F224AC4u: goto label_7F224AC4;
    case 0x7F224AC8u: goto label_7F224AC8;
    case 0x7F224ACCu: goto label_7F224ACC;
    case 0x7F224AD0u: goto label_7F224AD0;
    case 0x7F224AD4u: goto label_7F224AD4;
    case 0x7F224AD8u: goto label_7F224AD8;
    case 0x7F224ADCu: goto label_7F224ADC;
    case 0x7F224AE0u: goto label_7F224AE0;
    case 0x7F224AE4u: goto label_7F224AE4;
    case 0x7F224AE8u: goto label_7F224AE8;
    case 0x7F224AECu: goto label_7F224AEC;
    case 0x7F224AF0u: goto label_7F224AF0;
    case 0x7F224AF4u: goto label_7F224AF4;
    case 0x7F224AF8u: goto label_7F224AF8;
    case 0x7F224AFCu: goto label_7F224AFC;
    case 0x7F224B00u: goto label_7F224B00;
    case 0x7F224B04u: goto label_7F224B04;
    case 0x7F224B08u: goto label_7F224B08;
    case 0x7F224B0Cu: goto label_7F224B0C;
    case 0x7F224B10u: goto label_7F224B10;
    case 0x7F224B14u: goto label_7F224B14;
    case 0x7F224B18u: goto label_7F224B18;
    case 0x7F224B1Cu: goto label_7F224B1C;
    case 0x7F224B20u: goto label_7F224B20;
    case 0x7F224B24u: goto label_7F224B24;
    case 0x7F224B28u: goto label_7F224B28;
    case 0x7F224B2Cu: goto label_7F224B2C;
    case 0x7F224B30u: goto label_7F224B30;
    case 0x7F224B34u: goto label_7F224B34;
    case 0x7F224B38u: goto label_7F224B38;
    case 0x7F224B3Cu: goto label_7F224B3C;
    case 0x7F224B40u: goto label_7F224B40;
    case 0x7F224B44u: goto label_7F224B44;
    case 0x7F224B48u: goto label_7F224B48;
    case 0x7F224B4Cu: goto label_7F224B4C;
    case 0x7F224B50u: goto label_7F224B50;
    case 0x7F224B54u: goto label_7F224B54;
    case 0x7F224B58u: goto label_7F224B58;
    case 0x7F224B5Cu: goto label_7F224B5C;
    case 0x7F224B60u: goto label_7F224B60;
    case 0x7F224B64u: goto label_7F224B64;
    case 0x7F224B68u: goto label_7F224B68;
    case 0x7F224B6Cu: goto label_7F224B6C;
    case 0x7F224B70u: goto label_7F224B70;
    case 0x7F224B74u: goto label_7F224B74;
    case 0x7F224B78u: goto label_7F224B78;
    case 0x7F224B7Cu: goto label_7F224B7C;
    case 0x7F224B80u: goto label_7F224B80;
    case 0x7F224B84u: goto label_7F224B84;
    case 0x7F224B88u: goto label_7F224B88;
    case 0x7F224B8Cu: goto label_7F224B8C;
    case 0x7F224B90u: goto label_7F224B90;
    case 0x7F224B94u: goto label_7F224B94;
    case 0x7F224B98u: goto label_7F224B98;
    case 0x7F224B9Cu: goto label_7F224B9C;
    case 0x7F224BA0u: goto label_7F224BA0;
    case 0x7F224BA4u: goto label_7F224BA4;
    case 0x7F224BA8u: goto label_7F224BA8;
    case 0x7F224BACu: goto label_7F224BAC;
    case 0x7F224BB0u: goto label_7F224BB0;
    case 0x7F224BB4u: goto label_7F224BB4;
    case 0x7F224BB8u: goto label_7F224BB8;
    case 0x7F224BBCu: goto label_7F224BBC;
    case 0x7F224BC0u: goto label_7F224BC0;
    case 0x7F224BC4u: goto label_7F224BC4;
    case 0x7F224BC8u: goto label_7F224BC8;
    case 0x7F224BCCu: goto label_7F224BCC;
    case 0x7F224BD0u: goto label_7F224BD0;
    case 0x7F224BD4u: goto label_7F224BD4;
    case 0x7F224BD8u: goto label_7F224BD8;
    case 0x7F224BDCu: goto label_7F224BDC;
    case 0x7F224BE0u: goto label_7F224BE0;
    case 0x7F224BE4u: goto label_7F224BE4;
    case 0x7F224BE8u: goto label_7F224BE8;
    case 0x7F224BECu: goto label_7F224BEC;
    case 0x7F224BF0u: goto label_7F224BF0;
    case 0x7F224BF4u: goto label_7F224BF4;
    case 0x7F224BF8u: goto label_7F224BF8;
    case 0x7F224BFCu: goto label_7F224BFC;
    case 0x7F224C00u: goto label_7F224C00;
    case 0x7F224C04u: goto label_7F224C04;
    case 0x7F224C08u: goto label_7F224C08;
    case 0x7F224C0Cu: goto label_7F224C0C;
    case 0x7F224C10u: goto label_7F224C10;
    case 0x7F224C14u: goto label_7F224C14;
    case 0x7F224C18u: goto label_7F224C18;
    case 0x7F224C1Cu: goto label_7F224C1C;
    case 0x7F224C20u: goto label_7F224C20;
    case 0x7F224C24u: goto label_7F224C24;
    case 0x7F224C28u: goto label_7F224C28;
    case 0x7F224C2Cu: goto label_7F224C2C;
    case 0x7F224C30u: goto label_7F224C30;
    case 0x7F224C34u: goto label_7F224C34;
    case 0x7F224C38u: goto label_7F224C38;
    case 0x7F224C3Cu: goto label_7F224C3C;
    case 0x7F224C40u: goto label_7F224C40;
    case 0x7F224C44u: goto label_7F224C44;
    case 0x7F224C48u: goto label_7F224C48;
    case 0x7F224C4Cu: goto label_7F224C4C;
    case 0x7F224C50u: goto label_7F224C50;
    case 0x7F224C54u: goto label_7F224C54;
    case 0x7F224C58u: goto label_7F224C58;
    case 0x7F224C5Cu: goto label_7F224C5C;
    case 0x7F224C60u: goto label_7F224C60;
    case 0x7F224C64u: goto label_7F224C64;
    case 0x7F224C68u: goto label_7F224C68;
    case 0x7F224C6Cu: goto label_7F224C6C;
    case 0x7F224C70u: goto label_7F224C70;
    case 0x7F224C74u: goto label_7F224C74;
    case 0x7F224C78u: goto label_7F224C78;
    case 0x7F224C7Cu: goto label_7F224C7C;
    case 0x7F224C80u: goto label_7F224C80;
    case 0x7F224C84u: goto label_7F224C84;
    case 0x7F224C88u: goto label_7F224C88;
    case 0x7F224C8Cu: goto label_7F224C8C;
    case 0x7F224C90u: goto label_7F224C90;
    case 0x7F224C94u: goto label_7F224C94;
    case 0x7F224C98u: goto label_7F224C98;
    case 0x7F224C9Cu: goto label_7F224C9C;
    case 0x7F224CA0u: goto label_7F224CA0;
    case 0x7F224CA4u: goto label_7F224CA4;
    case 0x7F224CA8u: goto label_7F224CA8;
    case 0x7F224CACu: goto label_7F224CAC;
    case 0x7F224CB0u: goto label_7F224CB0;
    case 0x7F224CB4u: goto label_7F224CB4;
    case 0x7F224CB8u: goto label_7F224CB8;
    case 0x7F224CBCu: goto label_7F224CBC;
    case 0x7F224CC0u: goto label_7F224CC0;
    case 0x7F224CC4u: goto label_7F224CC4;
    case 0x7F224CC8u: goto label_7F224CC8;
    case 0x7F224CCCu: goto label_7F224CCC;
    case 0x7F224CD0u: goto label_7F224CD0;
    case 0x7F224CD4u: goto label_7F224CD4;
    case 0x7F224CD8u: goto label_7F224CD8;
    case 0x7F224CDCu: goto label_7F224CDC;
    case 0x7F224CE0u: goto label_7F224CE0;
    case 0x7F224CE4u: goto label_7F224CE4;
    case 0x7F224CE8u: goto label_7F224CE8;
    case 0x7F224CECu: goto label_7F224CEC;
    case 0x7F224CF0u: goto label_7F224CF0;
    case 0x7F224CF4u: goto label_7F224CF4;
    case 0x7F224CF8u: goto label_7F224CF8;
    case 0x7F224CFCu: goto label_7F224CFC;
    case 0x7F224D00u: goto label_7F224D00;
    case 0x7F224D04u: goto label_7F224D04;
    case 0x7F224D08u: goto label_7F224D08;
    case 0x7F224D0Cu: goto label_7F224D0C;
    case 0x7F224D10u: goto label_7F224D10;
    case 0x7F224D14u: goto label_7F224D14;
    case 0x7F224D18u: goto label_7F224D18;
    case 0x7F224D1Cu: goto label_7F224D1C;
    case 0x7F224D20u: goto label_7F224D20;
    case 0x7F224D24u: goto label_7F224D24;
    case 0x7F224D28u: goto label_7F224D28;
    case 0x7F224D2Cu: goto label_7F224D2C;
    case 0x7F224D30u: goto label_7F224D30;
    case 0x7F224D34u: goto label_7F224D34;
    case 0x7F224D38u: goto label_7F224D38;
    case 0x7F224D3Cu: goto label_7F224D3C;
    case 0x7F224D40u: goto label_7F224D40;
    case 0x7F224D44u: goto label_7F224D44;
    case 0x7F224D48u: goto label_7F224D48;
    case 0x7F224D4Cu: goto label_7F224D4C;
    case 0x7F224D50u: goto label_7F224D50;
    case 0x7F224D54u: goto label_7F224D54;
    case 0x7F224D58u: goto label_7F224D58;
    case 0x7F224D5Cu: goto label_7F224D5C;
    case 0x7F224D60u: goto label_7F224D60;
    case 0x7F224D64u: goto label_7F224D64;
    case 0x7F224D68u: goto label_7F224D68;
    case 0x7F224D6Cu: goto label_7F224D6C;
    case 0x7F224D70u: goto label_7F224D70;
    case 0x7F224D74u: goto label_7F224D74;
    case 0x7F224D78u: goto label_7F224D78;
    case 0x7F224D7Cu: goto label_7F224D7C;
    case 0x7F224D80u: goto label_7F224D80;
    case 0x7F224D84u: goto label_7F224D84;
    case 0x7F224D88u: goto label_7F224D88;
    case 0x7F224D8Cu: goto label_7F224D8C;
    case 0x7F224D90u: goto label_7F224D90;
    case 0x7F224D94u: goto label_7F224D94;
    case 0x7F224D98u: goto label_7F224D98;
    case 0x7F224D9Cu: goto label_7F224D9C;
    case 0x7F224DA0u: goto label_7F224DA0;
    case 0x7F224DA4u: goto label_7F224DA4;
    case 0x7F224DA8u: goto label_7F224DA8;
    case 0x7F224DACu: goto label_7F224DAC;
    case 0x7F224DB0u: goto label_7F224DB0;
    case 0x7F224DB4u: goto label_7F224DB4;
    case 0x7F224DB8u: goto label_7F224DB8;
    case 0x7F224DBCu: goto label_7F224DBC;
    case 0x7F224DC0u: goto label_7F224DC0;
    case 0x7F224DC4u: goto label_7F224DC4;
    case 0x7F224DC8u: goto label_7F224DC8;
    case 0x7F224DCCu: goto label_7F224DCC;
    case 0x7F224DD0u: goto label_7F224DD0;
    case 0x7F224DD4u: goto label_7F224DD4;
    case 0x7F224DD8u: goto label_7F224DD8;
    case 0x7F224DDCu: goto label_7F224DDC;
    case 0x7F224DE0u: goto label_7F224DE0;
    case 0x7F224DE4u: goto label_7F224DE4;
    case 0x7F224DE8u: goto label_7F224DE8;
    case 0x7F224DECu: goto label_7F224DEC;
    case 0x7F224DF0u: goto label_7F224DF0;
    case 0x7F224DF4u: goto label_7F224DF4;
    case 0x7F224DF8u: goto label_7F224DF8;
    case 0x7F224DFCu: goto label_7F224DFC;
    case 0x7F224E00u: goto label_7F224E00;
    case 0x7F224E04u: goto label_7F224E04;
    case 0x7F224E08u: goto label_7F224E08;
    case 0x7F224E0Cu: goto label_7F224E0C;
    case 0x7F224E10u: goto label_7F224E10;
    case 0x7F224E14u: goto label_7F224E14;
    case 0x7F224E18u: goto label_7F224E18;
    case 0x7F224E1Cu: goto label_7F224E1C;
    case 0x7F224E20u: goto label_7F224E20;
    case 0x7F224E24u: goto label_7F224E24;
    case 0x7F224E28u: goto label_7F224E28;
    case 0x7F224E2Cu: goto label_7F224E2C;
    case 0x7F224E30u: goto label_7F224E30;
    case 0x7F224E34u: goto label_7F224E34;
    case 0x7F224E38u: goto label_7F224E38;
    case 0x7F224E3Cu: goto label_7F224E3C;
    case 0x7F224E40u: goto label_7F224E40;
    case 0x7F224E44u: goto label_7F224E44;
    case 0x7F224E48u: goto label_7F224E48;
    case 0x7F224E4Cu: goto label_7F224E4C;
    case 0x7F224E50u: goto label_7F224E50;
    case 0x7F224E54u: goto label_7F224E54;
    case 0x7F224E58u: goto label_7F224E58;
    case 0x7F224E5Cu: goto label_7F224E5C;
    case 0x7F224E60u: goto label_7F224E60;
    case 0x7F224E64u: goto label_7F224E64;
    case 0x7F224E68u: goto label_7F224E68;
    case 0x7F224E6Cu: goto label_7F224E6C;
    case 0x7F224E70u: goto label_7F224E70;
    case 0x7F224E74u: goto label_7F224E74;
    case 0x7F224E78u: goto label_7F224E78;
    case 0x7F224E7Cu: goto label_7F224E7C;
    case 0x7F224E80u: goto label_7F224E80;
    case 0x7F224E84u: goto label_7F224E84;
    case 0x7F224E88u: goto label_7F224E88;
    case 0x7F224E8Cu: goto label_7F224E8C;
    case 0x7F224E90u: goto label_7F224E90;
    case 0x7F224E94u: goto label_7F224E94;
    case 0x7F224E98u: goto label_7F224E98;
    case 0x7F224E9Cu: goto label_7F224E9C;
    case 0x7F224EA0u: goto label_7F224EA0;
    case 0x7F224EA4u: goto label_7F224EA4;
    case 0x7F224EA8u: goto label_7F224EA8;
    case 0x7F224EACu: goto label_7F224EAC;
    case 0x7F224EB0u: goto label_7F224EB0;
    case 0x7F224EB4u: goto label_7F224EB4;
    case 0x7F224EB8u: goto label_7F224EB8;
    case 0x7F224EBCu: goto label_7F224EBC;
    case 0x7F224EC0u: goto label_7F224EC0;
    case 0x7F224EC4u: goto label_7F224EC4;
    case 0x7F224EC8u: goto label_7F224EC8;
    case 0x7F224ECCu: goto label_7F224ECC;
    case 0x7F224ED0u: goto label_7F224ED0;
    case 0x7F224ED4u: goto label_7F224ED4;
    case 0x7F224ED8u: goto label_7F224ED8;
    case 0x7F224EDCu: goto label_7F224EDC;
    case 0x7F224EE0u: goto label_7F224EE0;
    case 0x7F224EE4u: goto label_7F224EE4;
    case 0x7F224EE8u: goto label_7F224EE8;
    case 0x7F224EECu: goto label_7F224EEC;
    case 0x7F224EF0u: goto label_7F224EF0;
    case 0x7F224EF4u: goto label_7F224EF4;
    case 0x7F224EF8u: goto label_7F224EF8;
    case 0x7F224EFCu: goto label_7F224EFC;
    case 0x7F224F00u: goto label_7F224F00;
    case 0x7F224F04u: goto label_7F224F04;
    case 0x7F224F08u: goto label_7F224F08;
    case 0x7F224F0Cu: goto label_7F224F0C;
    case 0x7F224F10u: goto label_7F224F10;
    case 0x7F224F14u: goto label_7F224F14;
    case 0x7F224F18u: goto label_7F224F18;
    case 0x7F224F1Cu: goto label_7F224F1C;
    case 0x7F224F20u: goto label_7F224F20;
    case 0x7F224F24u: goto label_7F224F24;
    case 0x7F224F28u: goto label_7F224F28;
    case 0x7F224F2Cu: goto label_7F224F2C;
    case 0x7F224F30u: goto label_7F224F30;
    case 0x7F224F34u: goto label_7F224F34;
    case 0x7F224F38u: goto label_7F224F38;
    case 0x7F224F3Cu: goto label_7F224F3C;
    case 0x7F224F40u: goto label_7F224F40;
    case 0x7F224F44u: goto label_7F224F44;
    case 0x7F224F48u: goto label_7F224F48;
    case 0x7F224F4Cu: goto label_7F224F4C;
    case 0x7F224F50u: goto label_7F224F50;
    case 0x7F224F54u: goto label_7F224F54;
    case 0x7F224F58u: goto label_7F224F58;
    case 0x7F224F5Cu: goto label_7F224F5C;
    case 0x7F224F60u: goto label_7F224F60;
    case 0x7F224F64u: goto label_7F224F64;
    case 0x7F224F68u: goto label_7F224F68;
    case 0x7F224F6Cu: goto label_7F224F6C;
    case 0x7F224F70u: goto label_7F224F70;
    case 0x7F224F74u: goto label_7F224F74;
    case 0x7F224F78u: goto label_7F224F78;
    case 0x7F224F7Cu: goto label_7F224F7C;
    case 0x7F224F80u: goto label_7F224F80;
    case 0x7F224F84u: goto label_7F224F84;
    case 0x7F224F88u: goto label_7F224F88;
    case 0x7F224F8Cu: goto label_7F224F8C;
    case 0x7F224F90u: goto label_7F224F90;
    case 0x7F224F94u: goto label_7F224F94;
    case 0x7F224F98u: goto label_7F224F98;
    case 0x7F224F9Cu: goto label_7F224F9C;
    case 0x7F224FA0u: goto label_7F224FA0;
    case 0x7F224FA4u: goto label_7F224FA4;
    case 0x7F224FA8u: goto label_7F224FA8;
    case 0x7F224FACu: goto label_7F224FAC;
    case 0x7F224FB0u: goto label_7F224FB0;
    case 0x7F224FB4u: goto label_7F224FB4;
    case 0x7F224FB8u: goto label_7F224FB8;
    case 0x7F224FBCu: goto label_7F224FBC;
    case 0x7F224FC0u: goto label_7F224FC0;
    case 0x7F224FC4u: goto label_7F224FC4;
    case 0x7F224FC8u: goto label_7F224FC8;
    case 0x7F224FCCu: goto label_7F224FCC;
    case 0x7F224FD0u: goto label_7F224FD0;
    case 0x7F224FD4u: goto label_7F224FD4;
    case 0x7F224FD8u: goto label_7F224FD8;
    case 0x7F224FDCu: goto label_7F224FDC;
    case 0x7F224FE0u: goto label_7F224FE0;
    case 0x7F224FE4u: goto label_7F224FE4;
    case 0x7F224FE8u: goto label_7F224FE8;
    case 0x7F224FECu: goto label_7F224FEC;
    case 0x7F224FF0u: goto label_7F224FF0;
    case 0x7F224FF4u: goto label_7F224FF4;
    case 0x7F224FF8u: goto label_7F224FF8;
    case 0x7F224FFCu: goto label_7F224FFC;
    case 0x7F225000u: goto label_7F225000;
    case 0x7F225004u: goto label_7F225004;
    case 0x7F225008u: goto label_7F225008;
    case 0x7F22500Cu: goto label_7F22500C;
    case 0x7F225010u: goto label_7F225010;
    case 0x7F225014u: goto label_7F225014;
    case 0x7F225018u: goto label_7F225018;
    case 0x7F22501Cu: goto label_7F22501C;
    case 0x7F225020u: goto label_7F225020;
    case 0x7F225024u: goto label_7F225024;
    case 0x7F225028u: goto label_7F225028;
    case 0x7F22502Cu: goto label_7F22502C;
    case 0x7F225030u: goto label_7F225030;
    case 0x7F225034u: goto label_7F225034;
    case 0x7F225038u: goto label_7F225038;
    case 0x7F22503Cu: goto label_7F22503C;
    case 0x7F225040u: goto label_7F225040;
    case 0x7F225044u: goto label_7F225044;
    case 0x7F225048u: goto label_7F225048;
    case 0x7F22504Cu: goto label_7F22504C;
    case 0x7F225050u: goto label_7F225050;
    case 0x7F225054u: goto label_7F225054;
    case 0x7F225058u: goto label_7F225058;
    case 0x7F22505Cu: goto label_7F22505C;
    case 0x7F225060u: goto label_7F225060;
    case 0x7F225064u: goto label_7F225064;
    case 0x7F225068u: goto label_7F225068;
    case 0x7F22506Cu: goto label_7F22506C;
    case 0x7F225070u: goto label_7F225070;
    case 0x7F225074u: goto label_7F225074;
    case 0x7F225078u: goto label_7F225078;
    case 0x7F22507Cu: goto label_7F22507C;
    case 0x7F225080u: goto label_7F225080;
    case 0x7F225084u: goto label_7F225084;
    case 0x7F225088u: goto label_7F225088;
    case 0x7F22508Cu: goto label_7F22508C;
    case 0x7F225090u: goto label_7F225090;
    case 0x7F225094u: goto label_7F225094;
    case 0x7F225098u: goto label_7F225098;
    case 0x7F22509Cu: goto label_7F22509C;
    case 0x7F2250A0u: goto label_7F2250A0;
    case 0x7F2250A4u: goto label_7F2250A4;
    case 0x7F2250A8u: goto label_7F2250A8;
    case 0x7F2250ACu: goto label_7F2250AC;
    case 0x7F2250B0u: goto label_7F2250B0;
    case 0x7F2250B4u: goto label_7F2250B4;
    case 0x7F2250B8u: goto label_7F2250B8;
    case 0x7F2250BCu: goto label_7F2250BC;
    case 0x7F2250C0u: goto label_7F2250C0;
    case 0x7F2250C4u: goto label_7F2250C4;
    case 0x7F2250C8u: goto label_7F2250C8;
    case 0x7F2250CCu: goto label_7F2250CC;
    case 0x7F2250D0u: goto label_7F2250D0;
    case 0x7F2250D4u: goto label_7F2250D4;
    case 0x7F2250D8u: goto label_7F2250D8;
    case 0x7F2250DCu: goto label_7F2250DC;
    case 0x7F2250E0u: goto label_7F2250E0;
    case 0x7F2250E4u: goto label_7F2250E4;
    case 0x7F2250E8u: goto label_7F2250E8;
    case 0x7F2250ECu: goto label_7F2250EC;
    case 0x7F2250F0u: goto label_7F2250F0;
    case 0x7F2250F4u: goto label_7F2250F4;
    case 0x7F2250F8u: goto label_7F2250F8;
    case 0x7F2250FCu: goto label_7F2250FC;
    case 0x7F225100u: goto label_7F225100;
    case 0x7F225104u: goto label_7F225104;
    case 0x7F225108u: goto label_7F225108;
    case 0x7F22510Cu: goto label_7F22510C;
    case 0x7F225110u: goto label_7F225110;
    case 0x7F225114u: goto label_7F225114;
    case 0x7F225118u: goto label_7F225118;
    case 0x7F22511Cu: goto label_7F22511C;
    case 0x7F225120u: goto label_7F225120;
    case 0x7F225124u: goto label_7F225124;
    case 0x7F225128u: goto label_7F225128;
    case 0x7F22512Cu: goto label_7F22512C;
    case 0x7F225130u: goto label_7F225130;
    case 0x7F225134u: goto label_7F225134;
    case 0x7F225138u: goto label_7F225138;
    case 0x7F22513Cu: goto label_7F22513C;
    case 0x7F225140u: goto label_7F225140;
    case 0x7F225144u: goto label_7F225144;
    case 0x7F225148u: goto label_7F225148;
    case 0x7F22514Cu: goto label_7F22514C;
    case 0x7F225150u: goto label_7F225150;
    case 0x7F225154u: goto label_7F225154;
    case 0x7F225158u: goto label_7F225158;
    case 0x7F22515Cu: goto label_7F22515C;
    case 0x7F225160u: goto label_7F225160;
    case 0x7F225164u: goto label_7F225164;
    case 0x7F225168u: goto label_7F225168;
    case 0x7F22516Cu: goto label_7F22516C;
    case 0x7F225170u: goto label_7F225170;
    case 0x7F225174u: goto label_7F225174;
    case 0x7F225178u: goto label_7F225178;
    case 0x7F22517Cu: goto label_7F22517C;
    case 0x7F225180u: goto label_7F225180;
    case 0x7F225184u: goto label_7F225184;
    case 0x7F225188u: goto label_7F225188;
    case 0x7F22518Cu: goto label_7F22518C;
    case 0x7F225190u: goto label_7F225190;
    case 0x7F225194u: goto label_7F225194;
    case 0x7F225198u: goto label_7F225198;
    case 0x7F22519Cu: goto label_7F22519C;
    case 0x7F2251A0u: goto label_7F2251A0;
    case 0x7F2251A4u: goto label_7F2251A4;
    case 0x7F2251A8u: goto label_7F2251A8;
    case 0x7F2251ACu: goto label_7F2251AC;
    case 0x7F2251B0u: goto label_7F2251B0;
    case 0x7F2251B4u: goto label_7F2251B4;
    case 0x7F2251B8u: goto label_7F2251B8;
    case 0x7F2251BCu: goto label_7F2251BC;
    case 0x7F2251C0u: goto label_7F2251C0;
    case 0x7F2251C4u: goto label_7F2251C4;
    case 0x7F2251C8u: goto label_7F2251C8;
    case 0x7F2251CCu: goto label_7F2251CC;
    case 0x7F2251D0u: goto label_7F2251D0;
    case 0x7F2251D4u: goto label_7F2251D4;
    case 0x7F2251D8u: goto label_7F2251D8;
    case 0x7F2251DCu: goto label_7F2251DC;
    case 0x7F2251E0u: goto label_7F2251E0;
    case 0x7F2251E4u: goto label_7F2251E4;
    case 0x7F2251E8u: goto label_7F2251E8;
    case 0x7F2251ECu: goto label_7F2251EC;
    case 0x7F2251F0u: goto label_7F2251F0;
    case 0x7F2251F4u: goto label_7F2251F4;
    case 0x7F2251F8u: goto label_7F2251F8;
    case 0x7F2251FCu: goto label_7F2251FC;
    case 0x7F225200u: goto label_7F225200;
    case 0x7F225204u: goto label_7F225204;
    case 0x7F225208u: goto label_7F225208;
    case 0x7F22520Cu: goto label_7F22520C;
    case 0x7F225210u: goto label_7F225210;
    case 0x7F225214u: goto label_7F225214;
    case 0x7F225218u: goto label_7F225218;
    case 0x7F22521Cu: goto label_7F22521C;
    case 0x7F225220u: goto label_7F225220;
    case 0x7F225224u: goto label_7F225224;
    case 0x7F225228u: goto label_7F225228;
    case 0x7F22522Cu: goto label_7F22522C;
    case 0x7F225230u: goto label_7F225230;
    case 0x7F225234u: goto label_7F225234;
    case 0x7F225238u: goto label_7F225238;
    case 0x7F22523Cu: goto label_7F22523C;
    case 0x7F225240u: goto label_7F225240;
    case 0x7F225244u: goto label_7F225244;
    case 0x7F225248u: goto label_7F225248;
    case 0x7F22524Cu: goto label_7F22524C;
    case 0x7F225250u: goto label_7F225250;
    case 0x7F225254u: goto label_7F225254;
    case 0x7F225258u: goto label_7F225258;
    case 0x7F22525Cu: goto label_7F22525C;
    case 0x7F225260u: goto label_7F225260;
    case 0x7F225264u: goto label_7F225264;
    case 0x7F225268u: goto label_7F225268;
    case 0x7F22526Cu: goto label_7F22526C;
    case 0x7F225270u: goto label_7F225270;
    case 0x7F225274u: goto label_7F225274;
    case 0x7F225278u: goto label_7F225278;
    case 0x7F22527Cu: goto label_7F22527C;
    case 0x7F225280u: goto label_7F225280;
    case 0x7F225284u: goto label_7F225284;
    case 0x7F225288u: goto label_7F225288;
    case 0x7F22528Cu: goto label_7F22528C;
    case 0x7F225290u: goto label_7F225290;
    case 0x7F225294u: goto label_7F225294;
    case 0x7F225298u: goto label_7F225298;
    case 0x7F22529Cu: goto label_7F22529C;
    case 0x7F2252A0u: goto label_7F2252A0;
    case 0x7F2252A4u: goto label_7F2252A4;
    case 0x7F2252A8u: goto label_7F2252A8;
    case 0x7F2252ACu: goto label_7F2252AC;
    case 0x7F2252B0u: goto label_7F2252B0;
    case 0x7F2252B4u: goto label_7F2252B4;
    case 0x7F2252B8u: goto label_7F2252B8;
    case 0x7F2252BCu: goto label_7F2252BC;
    case 0x7F2252C0u: goto label_7F2252C0;
    case 0x7F2252C4u: goto label_7F2252C4;
    case 0x7F2252C8u: goto label_7F2252C8;
    case 0x7F2252CCu: goto label_7F2252CC;
    case 0x7F2252D0u: goto label_7F2252D0;
    case 0x7F2252D4u: goto label_7F2252D4;
    case 0x7F2252D8u: goto label_7F2252D8;
    case 0x7F2252DCu: goto label_7F2252DC;
    case 0x7F2252E0u: goto label_7F2252E0;
    case 0x7F2252E4u: goto label_7F2252E4;
    case 0x7F2252E8u: goto label_7F2252E8;
    case 0x7F2252ECu: goto label_7F2252EC;
    case 0x7F2252F0u: goto label_7F2252F0;
    case 0x7F2252F4u: goto label_7F2252F4;
    case 0x7F2252F8u: goto label_7F2252F8;
    case 0x7F2252FCu: goto label_7F2252FC;
    case 0x7F225300u: goto label_7F225300;
    case 0x7F225304u: goto label_7F225304;
    case 0x7F225308u: goto label_7F225308;
    case 0x7F22530Cu: goto label_7F22530C;
    case 0x7F225310u: goto label_7F225310;
    case 0x7F225314u: goto label_7F225314;
    case 0x7F225318u: goto label_7F225318;
    case 0x7F22531Cu: goto label_7F22531C;
    case 0x7F225320u: goto label_7F225320;
    case 0x7F225324u: goto label_7F225324;
    case 0x7F225328u: goto label_7F225328;
    case 0x7F22532Cu: goto label_7F22532C;
    case 0x7F225330u: goto label_7F225330;
    case 0x7F225334u: goto label_7F225334;
    case 0x7F225338u: goto label_7F225338;
    case 0x7F22533Cu: goto label_7F22533C;
    case 0x7F225340u: goto label_7F225340;
    case 0x7F225344u: goto label_7F225344;
    case 0x7F225348u: goto label_7F225348;
    case 0x7F22534Cu: goto label_7F22534C;
    case 0x7F225350u: goto label_7F225350;
    case 0x7F225354u: goto label_7F225354;
    case 0x7F225358u: goto label_7F225358;
    case 0x7F22535Cu: goto label_7F22535C;
    case 0x7F225360u: goto label_7F225360;
    case 0x7F225364u: goto label_7F225364;
    case 0x7F225368u: goto label_7F225368;
    case 0x7F22536Cu: goto label_7F22536C;
    case 0x7F225370u: goto label_7F225370;
    case 0x7F225374u: goto label_7F225374;
    case 0x7F225378u: goto label_7F225378;
    case 0x7F22537Cu: goto label_7F22537C;
    case 0x7F225380u: goto label_7F225380;
    case 0x7F225384u: goto label_7F225384;
    case 0x7F225388u: goto label_7F225388;
    case 0x7F22538Cu: goto label_7F22538C;
    case 0x7F225390u: goto label_7F225390;
    case 0x7F225394u: goto label_7F225394;
    case 0x7F225398u: goto label_7F225398;
    case 0x7F22539Cu: goto label_7F22539C;
    case 0x7F2253A0u: goto label_7F2253A0;
    case 0x7F2253A4u: goto label_7F2253A4;
    case 0x7F2253A8u: goto label_7F2253A8;
    case 0x7F2253ACu: goto label_7F2253AC;
    case 0x7F2253B0u: goto label_7F2253B0;
    case 0x7F2253B4u: goto label_7F2253B4;
    case 0x7F2253B8u: goto label_7F2253B8;
    case 0x7F2253BCu: goto label_7F2253BC;
    case 0x7F2253C0u: goto label_7F2253C0;
    case 0x7F2253C4u: goto label_7F2253C4;
    case 0x7F2253C8u: goto label_7F2253C8;
    case 0x7F2253CCu: goto label_7F2253CC;
    case 0x7F2253D0u: goto label_7F2253D0;
    case 0x7F2253D4u: goto label_7F2253D4;
    case 0x7F2253D8u: goto label_7F2253D8;
    case 0x7F2253DCu: goto label_7F2253DC;
    case 0x7F2253E0u: goto label_7F2253E0;
    case 0x7F2253E4u: goto label_7F2253E4;
    case 0x7F2253E8u: goto label_7F2253E8;
    case 0x7F2253ECu: goto label_7F2253EC;
    case 0x7F2253F0u: goto label_7F2253F0;
    case 0x7F2253F4u: goto label_7F2253F4;
    case 0x7F2253F8u: goto label_7F2253F8;
    case 0x7F2253FCu: goto label_7F2253FC;
    case 0x7F225400u: goto label_7F225400;
    case 0x7F225404u: goto label_7F225404;
    case 0x7F225408u: goto label_7F225408;
    case 0x7F22540Cu: goto label_7F22540C;
    case 0x7F225410u: goto label_7F225410;
    case 0x7F225414u: goto label_7F225414;
    case 0x7F225418u: goto label_7F225418;
    case 0x7F22541Cu: goto label_7F22541C;
    case 0x7F225420u: goto label_7F225420;
    case 0x7F225424u: goto label_7F225424;
    case 0x7F225428u: goto label_7F225428;
    case 0x7F22542Cu: goto label_7F22542C;
    case 0x7F225430u: goto label_7F225430;
    case 0x7F225434u: goto label_7F225434;
    case 0x7F225438u: goto label_7F225438;
    case 0x7F22543Cu: goto label_7F22543C;
    case 0x7F225440u: goto label_7F225440;
    case 0x7F225444u: goto label_7F225444;
    case 0x7F225448u: goto label_7F225448;
    case 0x7F22544Cu: goto label_7F22544C;
    case 0x7F225450u: goto label_7F225450;
    case 0x7F225454u: goto label_7F225454;
    case 0x7F225458u: goto label_7F225458;
    case 0x7F22545Cu: goto label_7F22545C;
    case 0x7F225460u: goto label_7F225460;
    case 0x7F225464u: goto label_7F225464;
    case 0x7F225468u: goto label_7F225468;
    case 0x7F22546Cu: goto label_7F22546C;
    case 0x7F225470u: goto label_7F225470;
    case 0x7F225474u: goto label_7F225474;
    case 0x7F225478u: goto label_7F225478;
    case 0x7F22547Cu: goto label_7F22547C;
    case 0x7F225480u: goto label_7F225480;
    case 0x7F225484u: goto label_7F225484;
    case 0x7F225488u: goto label_7F225488;
    case 0x7F22548Cu: goto label_7F22548C;
    case 0x7F225490u: goto label_7F225490;
    case 0x7F225494u: goto label_7F225494;
    case 0x7F225498u: goto label_7F225498;
    case 0x7F22549Cu: goto label_7F22549C;
    case 0x7F2254A0u: goto label_7F2254A0;
    case 0x7F2254A4u: goto label_7F2254A4;
    case 0x7F2254A8u: goto label_7F2254A8;
    case 0x7F2254ACu: goto label_7F2254AC;
    case 0x7F2254B0u: goto label_7F2254B0;
    case 0x7F2254B4u: goto label_7F2254B4;
    case 0x7F2254B8u: goto label_7F2254B8;
    case 0x7F2254BCu: goto label_7F2254BC;
    case 0x7F2254C0u: goto label_7F2254C0;
    case 0x7F2254C4u: goto label_7F2254C4;
    case 0x7F2254C8u: goto label_7F2254C8;
    case 0x7F2254CCu: goto label_7F2254CC;
    case 0x7F2254D0u: goto label_7F2254D0;
    case 0x7F2254D4u: goto label_7F2254D4;
    case 0x7F2254D8u: goto label_7F2254D8;
    case 0x7F2254DCu: goto label_7F2254DC;
    case 0x7F2254E0u: goto label_7F2254E0;
    case 0x7F2254E4u: goto label_7F2254E4;
    case 0x7F2254E8u: goto label_7F2254E8;
    case 0x7F2254ECu: goto label_7F2254EC;
    case 0x7F2254F0u: goto label_7F2254F0;
    case 0x7F2254F4u: goto label_7F2254F4;
    case 0x7F2254F8u: goto label_7F2254F8;
    case 0x7F2254FCu: goto label_7F2254FC;
    case 0x7F225500u: goto label_7F225500;
    case 0x7F225504u: goto label_7F225504;
    case 0x7F225508u: goto label_7F225508;
    case 0x7F22550Cu: goto label_7F22550C;
    case 0x7F225510u: goto label_7F225510;
    case 0x7F225514u: goto label_7F225514;
    case 0x7F225518u: goto label_7F225518;
    case 0x7F22551Cu: goto label_7F22551C;
    case 0x7F225520u: goto label_7F225520;
    case 0x7F225524u: goto label_7F225524;
    case 0x7F225528u: goto label_7F225528;
    case 0x7F22552Cu: goto label_7F22552C;
    case 0x7F225530u: goto label_7F225530;
    case 0x7F225534u: goto label_7F225534;
    case 0x7F225538u: goto label_7F225538;
    case 0x7F22553Cu: goto label_7F22553C;
    case 0x7F225540u: goto label_7F225540;
    case 0x7F225544u: goto label_7F225544;
    case 0x7F225548u: goto label_7F225548;
    case 0x7F22554Cu: goto label_7F22554C;
    case 0x7F225550u: goto label_7F225550;
    case 0x7F225554u: goto label_7F225554;
    case 0x7F225558u: goto label_7F225558;
    case 0x7F22555Cu: goto label_7F22555C;
    case 0x7F225560u: goto label_7F225560;
    case 0x7F225564u: goto label_7F225564;
    case 0x7F225568u: goto label_7F225568;
    case 0x7F22556Cu: goto label_7F22556C;
    case 0x7F225570u: goto label_7F225570;
    case 0x7F225574u: goto label_7F225574;
    case 0x7F225578u: goto label_7F225578;
    case 0x7F22557Cu: goto label_7F22557C;
    case 0x7F225580u: goto label_7F225580;
    case 0x7F225584u: goto label_7F225584;
    case 0x7F225588u: goto label_7F225588;
    case 0x7F22558Cu: goto label_7F22558C;
    case 0x7F225590u: goto label_7F225590;
    case 0x7F225594u: goto label_7F225594;
    case 0x7F225598u: goto label_7F225598;
    case 0x7F22559Cu: goto label_7F22559C;
    case 0x7F2255A0u: goto label_7F2255A0;
    case 0x7F2255A4u: goto label_7F2255A4;
    case 0x7F2255A8u: goto label_7F2255A8;
    case 0x7F2255ACu: goto label_7F2255AC;
    case 0x7F2255B0u: goto label_7F2255B0;
    case 0x7F2255B4u: goto label_7F2255B4;
    case 0x7F2255B8u: goto label_7F2255B8;
    case 0x7F2255BCu: goto label_7F2255BC;
    case 0x7F2255C0u: goto label_7F2255C0;
    case 0x7F2255C4u: goto label_7F2255C4;
    case 0x7F2255C8u: goto label_7F2255C8;
    case 0x7F2255CCu: goto label_7F2255CC;
    case 0x7F2255D0u: goto label_7F2255D0;
    case 0x7F2255D4u: goto label_7F2255D4;
    case 0x7F2255D8u: goto label_7F2255D8;
    case 0x7F2255DCu: goto label_7F2255DC;
    case 0x7F2255E0u: goto label_7F2255E0;
    case 0x7F2255E4u: goto label_7F2255E4;
    case 0x7F2255E8u: goto label_7F2255E8;
    case 0x7F2255ECu: goto label_7F2255EC;
    case 0x7F2255F0u: goto label_7F2255F0;
    case 0x7F2255F4u: goto label_7F2255F4;
    case 0x7F2255F8u: goto label_7F2255F8;
    case 0x7F2255FCu: goto label_7F2255FC;
    case 0x7F225600u: goto label_7F225600;
    case 0x7F225604u: goto label_7F225604;
    case 0x7F225608u: goto label_7F225608;
    case 0x7F22560Cu: goto label_7F22560C;
    case 0x7F225610u: goto label_7F225610;
    case 0x7F225614u: goto label_7F225614;
    case 0x7F225618u: goto label_7F225618;
    case 0x7F22561Cu: goto label_7F22561C;
    case 0x7F225620u: goto label_7F225620;
    case 0x7F225624u: goto label_7F225624;
    case 0x7F225628u: goto label_7F225628;
    case 0x7F22562Cu: goto label_7F22562C;
    case 0x7F225630u: goto label_7F225630;
    case 0x7F225634u: goto label_7F225634;
    case 0x7F225638u: goto label_7F225638;
    case 0x7F22563Cu: goto label_7F22563C;
    case 0x7F225640u: goto label_7F225640;
    case 0x7F225644u: goto label_7F225644;
    case 0x7F225648u: goto label_7F225648;
    case 0x7F22564Cu: goto label_7F22564C;
    case 0x7F225650u: goto label_7F225650;
    case 0x7F225654u: goto label_7F225654;
    case 0x7F225658u: goto label_7F225658;
    case 0x7F22565Cu: goto label_7F22565C;
    case 0x7F225660u: goto label_7F225660;
    case 0x7F225664u: goto label_7F225664;
    case 0x7F225668u: goto label_7F225668;
    case 0x7F22566Cu: goto label_7F22566C;
    case 0x7F225670u: goto label_7F225670;
    case 0x7F225674u: goto label_7F225674;
    case 0x7F225678u: goto label_7F225678;
    case 0x7F22567Cu: goto label_7F22567C;
    case 0x7F225680u: goto label_7F225680;
    case 0x7F225684u: goto label_7F225684;
    case 0x7F225688u: goto label_7F225688;
    case 0x7F22568Cu: goto label_7F22568C;
    case 0x7F225690u: goto label_7F225690;
    case 0x7F225694u: goto label_7F225694;
    case 0x7F225698u: goto label_7F225698;
    case 0x7F22569Cu: goto label_7F22569C;
    case 0x7F2256A0u: goto label_7F2256A0;
    case 0x7F2256A4u: goto label_7F2256A4;
    case 0x7F2256A8u: goto label_7F2256A8;
    case 0x7F2256ACu: goto label_7F2256AC;
    case 0x7F2256B0u: goto label_7F2256B0;
    case 0x7F2256B4u: goto label_7F2256B4;
    case 0x7F2256B8u: goto label_7F2256B8;
    case 0x7F2256BCu: goto label_7F2256BC;
    case 0x7F2256C0u: goto label_7F2256C0;
    case 0x7F2256C4u: goto label_7F2256C4;
    case 0x7F2256C8u: goto label_7F2256C8;
    case 0x7F2256CCu: goto label_7F2256CC;
    case 0x7F2256D0u: goto label_7F2256D0;
    case 0x7F2256D4u: goto label_7F2256D4;
    case 0x7F2256D8u: goto label_7F2256D8;
    case 0x7F2256DCu: goto label_7F2256DC;
    case 0x7F2256E0u: goto label_7F2256E0;
    case 0x7F2256E4u: goto label_7F2256E4;
    case 0x7F2256E8u: goto label_7F2256E8;
    case 0x7F2256ECu: goto label_7F2256EC;
    case 0x7F2256F0u: goto label_7F2256F0;
    case 0x7F2256F4u: goto label_7F2256F4;
    case 0x7F2256F8u: goto label_7F2256F8;
    case 0x7F2256FCu: goto label_7F2256FC;
    case 0x7F225700u: goto label_7F225700;
    case 0x7F225704u: goto label_7F225704;
    case 0x7F225708u: goto label_7F225708;
    case 0x7F22570Cu: goto label_7F22570C;
    case 0x7F225710u: goto label_7F225710;
    case 0x7F225714u: goto label_7F225714;
    case 0x7F225718u: goto label_7F225718;
    case 0x7F22571Cu: goto label_7F22571C;
    case 0x7F225720u: goto label_7F225720;
    case 0x7F225724u: goto label_7F225724;
    case 0x7F225728u: goto label_7F225728;
    case 0x7F22572Cu: goto label_7F22572C;
    case 0x7F225730u: goto label_7F225730;
    case 0x7F225734u: goto label_7F225734;
    case 0x7F225738u: goto label_7F225738;
    case 0x7F22573Cu: goto label_7F22573C;
    case 0x7F225740u: goto label_7F225740;
    case 0x7F225744u: goto label_7F225744;
    case 0x7F225748u: goto label_7F225748;
    case 0x7F22574Cu: goto label_7F22574C;
    case 0x7F225750u: goto label_7F225750;
    case 0x7F225754u: goto label_7F225754;
    case 0x7F225758u: goto label_7F225758;
    case 0x7F22575Cu: goto label_7F22575C;
    case 0x7F225760u: goto label_7F225760;
    case 0x7F225764u: goto label_7F225764;
    case 0x7F225768u: goto label_7F225768;
    case 0x7F22576Cu: goto label_7F22576C;
    case 0x7F225770u: goto label_7F225770;
    case 0x7F225774u: goto label_7F225774;
    case 0x7F225778u: goto label_7F225778;
    case 0x7F22577Cu: goto label_7F22577C;
    case 0x7F225780u: goto label_7F225780;
    case 0x7F225784u: goto label_7F225784;
    case 0x7F225788u: goto label_7F225788;
    case 0x7F22578Cu: goto label_7F22578C;
    case 0x7F225790u: goto label_7F225790;
    case 0x7F225794u: goto label_7F225794;
    case 0x7F225798u: goto label_7F225798;
    case 0x7F22579Cu: goto label_7F22579C;
    case 0x7F2257A0u: goto label_7F2257A0;
    case 0x7F2257A4u: goto label_7F2257A4;
    case 0x7F2257A8u: goto label_7F2257A8;
    case 0x7F2257ACu: goto label_7F2257AC;
    case 0x7F2257B0u: goto label_7F2257B0;
    case 0x7F2257B4u: goto label_7F2257B4;
    case 0x7F2257B8u: goto label_7F2257B8;
    case 0x7F2257BCu: goto label_7F2257BC;
    case 0x7F2257C0u: goto label_7F2257C0;
    case 0x7F2257C4u: goto label_7F2257C4;
    case 0x7F2257C8u: goto label_7F2257C8;
    case 0x7F2257CCu: goto label_7F2257CC;
    case 0x7F2257D0u: goto label_7F2257D0;
    case 0x7F2257D4u: goto label_7F2257D4;
    case 0x7F2257D8u: goto label_7F2257D8;
    case 0x7F2257DCu: goto label_7F2257DC;
    case 0x7F2257E0u: goto label_7F2257E0;
    case 0x7F2257E4u: goto label_7F2257E4;
    case 0x7F2257E8u: goto label_7F2257E8;
    case 0x7F2257ECu: goto label_7F2257EC;
    case 0x7F2257F0u: goto label_7F2257F0;
    case 0x7F2257F4u: goto label_7F2257F4;
    case 0x7F2257F8u: goto label_7F2257F8;
    case 0x7F2257FCu: goto label_7F2257FC;
    case 0x7F225800u: goto label_7F225800;
    case 0x7F225804u: goto label_7F225804;
    case 0x7F225808u: goto label_7F225808;
    case 0x7F22580Cu: goto label_7F22580C;
    case 0x7F225810u: goto label_7F225810;
    case 0x7F225814u: goto label_7F225814;
    case 0x7F225818u: goto label_7F225818;
    case 0x7F22581Cu: goto label_7F22581C;
    case 0x7F225820u: goto label_7F225820;
    case 0x7F225824u: goto label_7F225824;
    case 0x7F225828u: goto label_7F225828;
    case 0x7F22582Cu: goto label_7F22582C;
    case 0x7F225830u: goto label_7F225830;
    case 0x7F225834u: goto label_7F225834;
    case 0x7F225838u: goto label_7F225838;
    case 0x7F22583Cu: goto label_7F22583C;
    case 0x7F225840u: goto label_7F225840;
    case 0x7F225844u: goto label_7F225844;
    case 0x7F225848u: goto label_7F225848;
    case 0x7F22584Cu: goto label_7F22584C;
    case 0x7F225850u: goto label_7F225850;
    case 0x7F225854u: goto label_7F225854;
    case 0x7F225858u: goto label_7F225858;
    case 0x7F22585Cu: goto label_7F22585C;
    case 0x7F225860u: goto label_7F225860;
    case 0x7F225864u: goto label_7F225864;
    case 0x7F225868u: goto label_7F225868;
    case 0x7F22586Cu: goto label_7F22586C;
    case 0x7F225870u: goto label_7F225870;
    case 0x7F225874u: goto label_7F225874;
    case 0x7F225878u: goto label_7F225878;
    case 0x7F22587Cu: goto label_7F22587C;
    case 0x7F225880u: goto label_7F225880;
    case 0x7F225884u: goto label_7F225884;
    case 0x7F225888u: goto label_7F225888;
    case 0x7F22588Cu: goto label_7F22588C;
    case 0x7F225890u: goto label_7F225890;
    case 0x7F225894u: goto label_7F225894;
    case 0x7F225898u: goto label_7F225898;
    case 0x7F22589Cu: goto label_7F22589C;
    case 0x7F2258A0u: goto label_7F2258A0;
    case 0x7F2258A4u: goto label_7F2258A4;
    case 0x7F2258A8u: goto label_7F2258A8;
    case 0x7F2258ACu: goto label_7F2258AC;
    case 0x7F2258B0u: goto label_7F2258B0;
    case 0x7F2258B4u: goto label_7F2258B4;
    case 0x7F2258B8u: goto label_7F2258B8;
    case 0x7F2258BCu: goto label_7F2258BC;
    case 0x7F2258C0u: goto label_7F2258C0;
    case 0x7F2258C4u: goto label_7F2258C4;
    case 0x7F2258C8u: goto label_7F2258C8;
    case 0x7F2258CCu: goto label_7F2258CC;
    case 0x7F2258D0u: goto label_7F2258D0;
    case 0x7F2258D4u: goto label_7F2258D4;
    case 0x7F2258D8u: goto label_7F2258D8;
    case 0x7F2258DCu: goto label_7F2258DC;
    case 0x7F2258E0u: goto label_7F2258E0;
    case 0x7F2258E4u: goto label_7F2258E4;
    case 0x7F2258E8u: goto label_7F2258E8;
    case 0x7F2258ECu: goto label_7F2258EC;
    case 0x7F2258F0u: goto label_7F2258F0;
    case 0x7F2258F4u: goto label_7F2258F4;
    case 0x7F2258F8u: goto label_7F2258F8;
    case 0x7F2258FCu: goto label_7F2258FC;
    case 0x7F225900u: goto label_7F225900;
    case 0x7F225904u: goto label_7F225904;
    case 0x7F225908u: goto label_7F225908;
    case 0x7F22590Cu: goto label_7F22590C;
    case 0x7F225910u: goto label_7F225910;
    case 0x7F225914u: goto label_7F225914;
    case 0x7F225918u: goto label_7F225918;
    case 0x7F22591Cu: goto label_7F22591C;
    case 0x7F225920u: goto label_7F225920;
    case 0x7F225924u: goto label_7F225924;
    case 0x7F225928u: goto label_7F225928;
    case 0x7F22592Cu: goto label_7F22592C;
    case 0x7F225930u: goto label_7F225930;
    case 0x7F225934u: goto label_7F225934;
    case 0x7F225938u: goto label_7F225938;
    case 0x7F22593Cu: goto label_7F22593C;
    case 0x7F225940u: goto label_7F225940;
    case 0x7F225944u: goto label_7F225944;
    case 0x7F225948u: goto label_7F225948;
    case 0x7F22594Cu: goto label_7F22594C;
    case 0x7F225950u: goto label_7F225950;
    case 0x7F225954u: goto label_7F225954;
    case 0x7F225958u: goto label_7F225958;
    case 0x7F22595Cu: goto label_7F22595C;
    case 0x7F225960u: goto label_7F225960;
    case 0x7F225964u: goto label_7F225964;
    case 0x7F225968u: goto label_7F225968;
    case 0x7F22596Cu: goto label_7F22596C;
    case 0x7F225970u: goto label_7F225970;
    case 0x7F225974u: goto label_7F225974;
    case 0x7F225978u: goto label_7F225978;
    case 0x7F22597Cu: goto label_7F22597C;
    case 0x7F225980u: goto label_7F225980;
    case 0x7F225984u: goto label_7F225984;
    case 0x7F225988u: goto label_7F225988;
    case 0x7F22598Cu: goto label_7F22598C;
    case 0x7F225990u: goto label_7F225990;
    case 0x7F225994u: goto label_7F225994;
    case 0x7F225998u: goto label_7F225998;
    case 0x7F22599Cu: goto label_7F22599C;
    case 0x7F2259A0u: goto label_7F2259A0;
    case 0x7F2259A4u: goto label_7F2259A4;
    case 0x7F2259A8u: goto label_7F2259A8;
    case 0x7F2259ACu: goto label_7F2259AC;
    case 0x7F2259B0u: goto label_7F2259B0;
    case 0x7F2259B4u: goto label_7F2259B4;
    case 0x7F2259B8u: goto label_7F2259B8;
    case 0x7F2259BCu: goto label_7F2259BC;
    case 0x7F2259C0u: goto label_7F2259C0;
    case 0x7F2259C4u: goto label_7F2259C4;
    case 0x7F2259C8u: goto label_7F2259C8;
    case 0x7F2259CCu: goto label_7F2259CC;
    case 0x7F2259D0u: goto label_7F2259D0;
    case 0x7F2259D4u: goto label_7F2259D4;
    case 0x7F2259D8u: goto label_7F2259D8;
    case 0x7F2259DCu: goto label_7F2259DC;
    case 0x7F2259E0u: goto label_7F2259E0;
    case 0x7F2259E4u: goto label_7F2259E4;
    case 0x7F2259E8u: goto label_7F2259E8;
    case 0x7F2259ECu: goto label_7F2259EC;
    case 0x7F2259F0u: goto label_7F2259F0;
    case 0x7F2259F4u: goto label_7F2259F4;
    case 0x7F2259F8u: goto label_7F2259F8;
    case 0x7F2259FCu: goto label_7F2259FC;
    case 0x7F225A00u: goto label_7F225A00;
    case 0x7F225A04u: goto label_7F225A04;
    case 0x7F225A08u: goto label_7F225A08;
    case 0x7F225A0Cu: goto label_7F225A0C;
    case 0x7F225A10u: goto label_7F225A10;
    case 0x7F225A14u: goto label_7F225A14;
    case 0x7F225A18u: goto label_7F225A18;
    case 0x7F225A1Cu: goto label_7F225A1C;
    case 0x7F225A20u: goto label_7F225A20;
    case 0x7F225A24u: goto label_7F225A24;
    case 0x7F225A28u: goto label_7F225A28;
    case 0x7F225A2Cu: goto label_7F225A2C;
    case 0x7F225A30u: goto label_7F225A30;
    case 0x7F225A34u: goto label_7F225A34;
    case 0x7F225A38u: goto label_7F225A38;
    case 0x7F225A3Cu: goto label_7F225A3C;
    case 0x7F225A40u: goto label_7F225A40;
    case 0x7F225A44u: goto label_7F225A44;
    case 0x7F225A48u: goto label_7F225A48;
    case 0x7F225A4Cu: goto label_7F225A4C;
    case 0x7F225A50u: goto label_7F225A50;
    case 0x7F225A54u: goto label_7F225A54;
    case 0x7F225A58u: goto label_7F225A58;
    case 0x7F225A5Cu: goto label_7F225A5C;
    case 0x7F225A60u: goto label_7F225A60;
    case 0x7F225A64u: goto label_7F225A64;
    case 0x7F225A68u: goto label_7F225A68;
    case 0x7F225A6Cu: goto label_7F225A6C;
    case 0x7F225A70u: goto label_7F225A70;
    case 0x7F225A74u: goto label_7F225A74;
    case 0x7F225A78u: goto label_7F225A78;
    case 0x7F225A7Cu: goto label_7F225A7C;
    case 0x7F225A80u: goto label_7F225A80;
    case 0x7F225A84u: goto label_7F225A84;
    case 0x7F225A88u: goto label_7F225A88;
    case 0x7F225A8Cu: goto label_7F225A8C;
    case 0x7F225A90u: goto label_7F225A90;
    case 0x7F225A94u: goto label_7F225A94;
    case 0x7F225A98u: goto label_7F225A98;
    case 0x7F225A9Cu: goto label_7F225A9C;
    case 0x7F225AA0u: goto label_7F225AA0;
    case 0x7F225AA4u: goto label_7F225AA4;
    case 0x7F225AA8u: goto label_7F225AA8;
    case 0x7F225AACu: goto label_7F225AAC;
    case 0x7F225AB0u: goto label_7F225AB0;
    case 0x7F225AB4u: goto label_7F225AB4;
    case 0x7F225AB8u: goto label_7F225AB8;
    case 0x7F225ABCu: goto label_7F225ABC;
    case 0x7F225AC0u: goto label_7F225AC0;
    case 0x7F225AC4u: goto label_7F225AC4;
    case 0x7F225AC8u: goto label_7F225AC8;
    case 0x7F225ACCu: goto label_7F225ACC;
    case 0x7F225AD0u: goto label_7F225AD0;
    case 0x7F225AD4u: goto label_7F225AD4;
    case 0x7F225AD8u: goto label_7F225AD8;
    case 0x7F225ADCu: goto label_7F225ADC;
    case 0x7F225AE0u: goto label_7F225AE0;
    case 0x7F225AE4u: goto label_7F225AE4;
    case 0x7F225AE8u: goto label_7F225AE8;
    case 0x7F225AECu: goto label_7F225AEC;
    case 0x7F225AF0u: goto label_7F225AF0;
    case 0x7F225AF4u: goto label_7F225AF4;
    case 0x7F225AF8u: goto label_7F225AF8;
    case 0x7F225AFCu: goto label_7F225AFC;
    case 0x7F225B00u: goto label_7F225B00;
    case 0x7F225B04u: goto label_7F225B04;
    case 0x7F225B08u: goto label_7F225B08;
    case 0x7F225B0Cu: goto label_7F225B0C;
    case 0x7F225B10u: goto label_7F225B10;
    case 0x7F225B14u: goto label_7F225B14;
    case 0x7F225B18u: goto label_7F225B18;
    case 0x7F225B1Cu: goto label_7F225B1C;
    case 0x7F225B20u: goto label_7F225B20;
    case 0x7F225B24u: goto label_7F225B24;
    case 0x7F225B28u: goto label_7F225B28;
    case 0x7F225B2Cu: goto label_7F225B2C;
    case 0x7F225B30u: goto label_7F225B30;
    case 0x7F225B34u: goto label_7F225B34;
    case 0x7F225B38u: goto label_7F225B38;
    case 0x7F225B3Cu: goto label_7F225B3C;
    case 0x7F225B40u: goto label_7F225B40;
    case 0x7F225B44u: goto label_7F225B44;
    case 0x7F225B48u: goto label_7F225B48;
    case 0x7F225B4Cu: goto label_7F225B4C;
    case 0x7F225B50u: goto label_7F225B50;
    case 0x7F225B54u: goto label_7F225B54;
    case 0x7F225B58u: goto label_7F225B58;
    case 0x7F225B5Cu: goto label_7F225B5C;
    case 0x7F225B60u: goto label_7F225B60;
    case 0x7F225B64u: goto label_7F225B64;
    case 0x7F225B68u: goto label_7F225B68;
    case 0x7F225B6Cu: goto label_7F225B6C;
    case 0x7F225B70u: goto label_7F225B70;
    case 0x7F225B74u: goto label_7F225B74;
    case 0x7F225B78u: goto label_7F225B78;
    case 0x7F225B7Cu: goto label_7F225B7C;
    case 0x7F225B80u: goto label_7F225B80;
    case 0x7F225B84u: goto label_7F225B84;
    case 0x7F225B88u: goto label_7F225B88;
    case 0x7F225B8Cu: goto label_7F225B8C;
    case 0x7F225B90u: goto label_7F225B90;
    case 0x7F225B94u: goto label_7F225B94;
    case 0x7F225B98u: goto label_7F225B98;
    case 0x7F225B9Cu: goto label_7F225B9C;
    case 0x7F225BA0u: goto label_7F225BA0;
    case 0x7F225BA4u: goto label_7F225BA4;
    case 0x7F225BA8u: goto label_7F225BA8;
    case 0x7F225BACu: goto label_7F225BAC;
    case 0x7F225BB0u: goto label_7F225BB0;
    case 0x7F225BB4u: goto label_7F225BB4;
    case 0x7F225BB8u: goto label_7F225BB8;
    case 0x7F225BBCu: goto label_7F225BBC;
    case 0x7F225BC0u: goto label_7F225BC0;
    case 0x7F225BC4u: goto label_7F225BC4;
    case 0x7F225BC8u: goto label_7F225BC8;
    case 0x7F225BCCu: goto label_7F225BCC;
    case 0x7F225BD0u: goto label_7F225BD0;
    case 0x7F225BD4u: goto label_7F225BD4;
    case 0x7F225BD8u: goto label_7F225BD8;
    case 0x7F225BDCu: goto label_7F225BDC;
    case 0x7F225BE0u: goto label_7F225BE0;
    case 0x7F225BE4u: goto label_7F225BE4;
    case 0x7F225BE8u: goto label_7F225BE8;
    case 0x7F225BECu: goto label_7F225BEC;
    case 0x7F225BF0u: goto label_7F225BF0;
    case 0x7F225BF4u: goto label_7F225BF4;
    case 0x7F225BF8u: goto label_7F225BF8;
    case 0x7F225BFCu: goto label_7F225BFC;
    case 0x7F225C00u: goto label_7F225C00;
    case 0x7F225C04u: goto label_7F225C04;
    case 0x7F225C08u: goto label_7F225C08;
    case 0x7F225C0Cu: goto label_7F225C0C;
    case 0x7F225C10u: goto label_7F225C10;
    case 0x7F225C14u: goto label_7F225C14;
    case 0x7F225C18u: goto label_7F225C18;
    case 0x7F225C1Cu: goto label_7F225C1C;
    case 0x7F225C20u: goto label_7F225C20;
    case 0x7F225C24u: goto label_7F225C24;
    case 0x7F225C28u: goto label_7F225C28;
    case 0x7F225C2Cu: goto label_7F225C2C;
    case 0x7F225C30u: goto label_7F225C30;
    case 0x7F225C34u: goto label_7F225C34;
    case 0x7F225C38u: goto label_7F225C38;
    case 0x7F225C3Cu: goto label_7F225C3C;
    case 0x7F225C40u: goto label_7F225C40;
    case 0x7F225C44u: goto label_7F225C44;
    case 0x7F225C48u: goto label_7F225C48;
    case 0x7F225C4Cu: goto label_7F225C4C;
    case 0x7F225C50u: goto label_7F225C50;
    case 0x7F225C54u: goto label_7F225C54;
    case 0x7F225C58u: goto label_7F225C58;
    case 0x7F225C5Cu: goto label_7F225C5C;
    case 0x7F225C60u: goto label_7F225C60;
    case 0x7F225C64u: goto label_7F225C64;
    case 0x7F225C68u: goto label_7F225C68;
    case 0x7F225C6Cu: goto label_7F225C6C;
    case 0x7F225C70u: goto label_7F225C70;
    case 0x7F225C74u: goto label_7F225C74;
    case 0x7F225C78u: goto label_7F225C78;
    case 0x7F225C7Cu: goto label_7F225C7C;
    case 0x7F225C80u: goto label_7F225C80;
    case 0x7F225C84u: goto label_7F225C84;
    case 0x7F225C88u: goto label_7F225C88;
    case 0x7F225C8Cu: goto label_7F225C8C;
    case 0x7F225C90u: goto label_7F225C90;
    case 0x7F225C94u: goto label_7F225C94;
    case 0x7F225C98u: goto label_7F225C98;
    case 0x7F225C9Cu: goto label_7F225C9C;
    case 0x7F225CA0u: goto label_7F225CA0;
    case 0x7F225CA4u: goto label_7F225CA4;
    case 0x7F225CA8u: goto label_7F225CA8;
    case 0x7F225CACu: goto label_7F225CAC;
    case 0x7F225CB0u: goto label_7F225CB0;
    case 0x7F225CB4u: goto label_7F225CB4;
    case 0x7F225CB8u: goto label_7F225CB8;
    case 0x7F225CBCu: goto label_7F225CBC;
    case 0x7F225CC0u: goto label_7F225CC0;
    case 0x7F225CC4u: goto label_7F225CC4;
    case 0x7F225CC8u: goto label_7F225CC8;
    case 0x7F225CCCu: goto label_7F225CCC;
    case 0x7F225CD0u: goto label_7F225CD0;
    case 0x7F225CD4u: goto label_7F225CD4;
    case 0x7F225CD8u: goto label_7F225CD8;
    case 0x7F225CDCu: goto label_7F225CDC;
    case 0x7F225CE0u: goto label_7F225CE0;
    case 0x7F225CE4u: goto label_7F225CE4;
    case 0x7F225CE8u: goto label_7F225CE8;
    case 0x7F225CECu: goto label_7F225CEC;
    case 0x7F225CF0u: goto label_7F225CF0;
    case 0x7F225CF4u: goto label_7F225CF4;
    case 0x7F225CF8u: goto label_7F225CF8;
    case 0x7F225CFCu: goto label_7F225CFC;
    case 0x7F225D00u: goto label_7F225D00;
    case 0x7F225D04u: goto label_7F225D04;
    case 0x7F225D08u: goto label_7F225D08;
    case 0x7F225D0Cu: goto label_7F225D0C;
    case 0x7F225D10u: goto label_7F225D10;
    case 0x7F225D14u: goto label_7F225D14;
    case 0x7F225D18u: goto label_7F225D18;
    case 0x7F225D1Cu: goto label_7F225D1C;
    case 0x7F225D20u: goto label_7F225D20;
    case 0x7F225D24u: goto label_7F225D24;
    case 0x7F225D28u: goto label_7F225D28;
    case 0x7F225D2Cu: goto label_7F225D2C;
    case 0x7F225D30u: goto label_7F225D30;
    case 0x7F225D34u: goto label_7F225D34;
    case 0x7F225D38u: goto label_7F225D38;
    case 0x7F225D3Cu: goto label_7F225D3C;
    case 0x7F225D40u: goto label_7F225D40;
    case 0x7F225D44u: goto label_7F225D44;
    case 0x7F225D48u: goto label_7F225D48;
    case 0x7F225D4Cu: goto label_7F225D4C;
    case 0x7F225D50u: goto label_7F225D50;
    case 0x7F225D54u: goto label_7F225D54;
    case 0x7F225D58u: goto label_7F225D58;
    case 0x7F225D5Cu: goto label_7F225D5C;
    case 0x7F225D60u: goto label_7F225D60;
    case 0x7F225D64u: goto label_7F225D64;
    case 0x7F225D68u: goto label_7F225D68;
    case 0x7F225D6Cu: goto label_7F225D6C;
    case 0x7F225D70u: goto label_7F225D70;
    case 0x7F225D74u: goto label_7F225D74;
    case 0x7F225D78u: goto label_7F225D78;
    case 0x7F225D7Cu: goto label_7F225D7C;
    case 0x7F225D80u: goto label_7F225D80;
    case 0x7F225D84u: goto label_7F225D84;
    case 0x7F225D88u: goto label_7F225D88;
    case 0x7F225D8Cu: goto label_7F225D8C;
    case 0x7F225D90u: goto label_7F225D90;
    case 0x7F225D94u: goto label_7F225D94;
    case 0x7F225D98u: goto label_7F225D98;
    case 0x7F225D9Cu: goto label_7F225D9C;
    case 0x7F225DA0u: goto label_7F225DA0;
    case 0x7F225DA4u: goto label_7F225DA4;
    case 0x7F225DA8u: goto label_7F225DA8;
    case 0x7F225DACu: goto label_7F225DAC;
    case 0x7F225DB0u: goto label_7F225DB0;
    case 0x7F225DB4u: goto label_7F225DB4;
    case 0x7F225DB8u: goto label_7F225DB8;
    case 0x7F225DBCu: goto label_7F225DBC;
    case 0x7F225DC0u: goto label_7F225DC0;
    case 0x7F225DC4u: goto label_7F225DC4;
    case 0x7F225DC8u: goto label_7F225DC8;
    case 0x7F225DCCu: goto label_7F225DCC;
    case 0x7F225DD0u: goto label_7F225DD0;
    case 0x7F225DD4u: goto label_7F225DD4;
    case 0x7F225DD8u: goto label_7F225DD8;
    case 0x7F225DDCu: goto label_7F225DDC;
    case 0x7F225DE0u: goto label_7F225DE0;
    case 0x7F225DE4u: goto label_7F225DE4;
    case 0x7F225DE8u: goto label_7F225DE8;
    case 0x7F225DECu: goto label_7F225DEC;
    case 0x7F225DF0u: goto label_7F225DF0;
    case 0x7F225DF4u: goto label_7F225DF4;
    case 0x7F225DF8u: goto label_7F225DF8;
    case 0x7F225DFCu: goto label_7F225DFC;
    case 0x7F225E00u: goto label_7F225E00;
    case 0x7F225E04u: goto label_7F225E04;
    case 0x7F225E08u: goto label_7F225E08;
    case 0x7F225E0Cu: goto label_7F225E0C;
    case 0x7F225E10u: goto label_7F225E10;
    case 0x7F225E14u: goto label_7F225E14;
    case 0x7F225E18u: goto label_7F225E18;
    case 0x7F225E1Cu: goto label_7F225E1C;
    case 0x7F225E20u: goto label_7F225E20;
    case 0x7F225E24u: goto label_7F225E24;
    case 0x7F225E28u: goto label_7F225E28;
    case 0x7F225E2Cu: goto label_7F225E2C;
    case 0x7F225E30u: goto label_7F225E30;
    case 0x7F225E34u: goto label_7F225E34;
    case 0x7F225E38u: goto label_7F225E38;
    case 0x7F225E3Cu: goto label_7F225E3C;
    case 0x7F225E40u: goto label_7F225E40;
    case 0x7F225E44u: goto label_7F225E44;
    case 0x7F225E48u: goto label_7F225E48;
    case 0x7F225E4Cu: goto label_7F225E4C;
    case 0x7F225E50u: goto label_7F225E50;
    case 0x7F225E54u: goto label_7F225E54;
    case 0x7F225E58u: goto label_7F225E58;
    case 0x7F225E5Cu: goto label_7F225E5C;
    case 0x7F225E60u: goto label_7F225E60;
    case 0x7F225E64u: goto label_7F225E64;
    case 0x7F225E68u: goto label_7F225E68;
    case 0x7F225E6Cu: goto label_7F225E6C;
    case 0x7F225E70u: goto label_7F225E70;
    case 0x7F225E74u: goto label_7F225E74;
    case 0x7F225E78u: goto label_7F225E78;
    case 0x7F225E7Cu: goto label_7F225E7C;
    case 0x7F225E80u: goto label_7F225E80;
    case 0x7F225E84u: goto label_7F225E84;
    case 0x7F225E88u: goto label_7F225E88;
    case 0x7F225E8Cu: goto label_7F225E8C;
    case 0x7F225E90u: goto label_7F225E90;
    case 0x7F225E94u: goto label_7F225E94;
    case 0x7F225E98u: goto label_7F225E98;
    case 0x7F225E9Cu: goto label_7F225E9C;
    case 0x7F225EA0u: goto label_7F225EA0;
    case 0x7F225EA4u: goto label_7F225EA4;
    case 0x7F225EA8u: goto label_7F225EA8;
    case 0x7F225EACu: goto label_7F225EAC;
    case 0x7F225EB0u: goto label_7F225EB0;
    case 0x7F225EB4u: goto label_7F225EB4;
    case 0x7F225EB8u: goto label_7F225EB8;
    case 0x7F225EBCu: goto label_7F225EBC;
    case 0x7F225EC0u: goto label_7F225EC0;
    case 0x7F225EC4u: goto label_7F225EC4;
    case 0x7F225EC8u: goto label_7F225EC8;
    case 0x7F225ECCu: goto label_7F225ECC;
    case 0x7F225ED0u: goto label_7F225ED0;
    case 0x7F225ED4u: goto label_7F225ED4;
    case 0x7F225ED8u: goto label_7F225ED8;
    case 0x7F225EDCu: goto label_7F225EDC;
    case 0x7F225EE0u: goto label_7F225EE0;
    case 0x7F225EE4u: goto label_7F225EE4;
    case 0x7F225EE8u: goto label_7F225EE8;
    case 0x7F225EECu: goto label_7F225EEC;
    case 0x7F225EF0u: goto label_7F225EF0;
    case 0x7F225EF4u: goto label_7F225EF4;
    case 0x7F225EF8u: goto label_7F225EF8;
    case 0x7F225EFCu: goto label_7F225EFC;
    case 0x7F225F00u: goto label_7F225F00;
    case 0x7F225F04u: goto label_7F225F04;
    case 0x7F225F08u: goto label_7F225F08;
    case 0x7F225F0Cu: goto label_7F225F0C;
    case 0x7F225F10u: goto label_7F225F10;
    case 0x7F225F14u: goto label_7F225F14;
    case 0x7F225F18u: goto label_7F225F18;
    case 0x7F225F1Cu: goto label_7F225F1C;
    case 0x7F225F20u: goto label_7F225F20;
    case 0x7F225F24u: goto label_7F225F24;
    case 0x7F225F28u: goto label_7F225F28;
    case 0x7F225F2Cu: goto label_7F225F2C;
    case 0x7F225F30u: goto label_7F225F30;
    case 0x7F225F34u: goto label_7F225F34;
    case 0x7F225F38u: goto label_7F225F38;
    case 0x7F225F3Cu: goto label_7F225F3C;
    case 0x7F225F40u: goto label_7F225F40;
    case 0x7F225F44u: goto label_7F225F44;
    case 0x7F225F48u: goto label_7F225F48;
    case 0x7F225F4Cu: goto label_7F225F4C;
    case 0x7F225F50u: goto label_7F225F50;
    case 0x7F225F54u: goto label_7F225F54;
    case 0x7F225F58u: goto label_7F225F58;
    case 0x7F225F5Cu: goto label_7F225F5C;
    case 0x7F225F60u: goto label_7F225F60;
    case 0x7F225F64u: goto label_7F225F64;
    case 0x7F225F68u: goto label_7F225F68;
    case 0x7F225F6Cu: goto label_7F225F6C;
    case 0x7F225F70u: goto label_7F225F70;
    case 0x7F225F74u: goto label_7F225F74;
    case 0x7F225F78u: goto label_7F225F78;
    case 0x7F225F7Cu: goto label_7F225F7C;
    case 0x7F225F80u: goto label_7F225F80;
    case 0x7F225F84u: goto label_7F225F84;
    case 0x7F225F88u: goto label_7F225F88;
    case 0x7F225F8Cu: goto label_7F225F8C;
    case 0x7F225F90u: goto label_7F225F90;
    case 0x7F225F94u: goto label_7F225F94;
    case 0x7F225F98u: goto label_7F225F98;
    case 0x7F225F9Cu: goto label_7F225F9C;
    case 0x7F225FA0u: goto label_7F225FA0;
    case 0x7F225FA4u: goto label_7F225FA4;
    case 0x7F225FA8u: goto label_7F225FA8;
    case 0x7F225FACu: goto label_7F225FAC;
    case 0x7F225FB0u: goto label_7F225FB0;
    case 0x7F225FB4u: goto label_7F225FB4;
    case 0x7F225FB8u: goto label_7F225FB8;
    case 0x7F225FBCu: goto label_7F225FBC;
    case 0x7F225FC0u: goto label_7F225FC0;
    case 0x7F225FC4u: goto label_7F225FC4;
    case 0x7F225FC8u: goto label_7F225FC8;
    case 0x7F225FCCu: goto label_7F225FCC;
    case 0x7F225FD0u: goto label_7F225FD0;
    case 0x7F225FD4u: goto label_7F225FD4;
    case 0x7F225FD8u: goto label_7F225FD8;
    case 0x7F225FDCu: goto label_7F225FDC;
    case 0x7F225FE0u: goto label_7F225FE0;
    case 0x7F225FE4u: goto label_7F225FE4;
    case 0x7F225FE8u: goto label_7F225FE8;
    case 0x7F225FECu: goto label_7F225FEC;
    case 0x7F225FF0u: goto label_7F225FF0;
    case 0x7F225FF4u: goto label_7F225FF4;
    case 0x7F225FF8u: goto label_7F225FF8;
    case 0x7F225FFCu: goto label_7F225FFC;
    case 0x7F226000u: goto label_7F226000;
    case 0x7F226004u: goto label_7F226004;
    case 0x7F226008u: goto label_7F226008;
    case 0x7F22600Cu: goto label_7F22600C;
    case 0x7F226010u: goto label_7F226010;
    case 0x7F226014u: goto label_7F226014;
    case 0x7F226018u: goto label_7F226018;
    case 0x7F22601Cu: goto label_7F22601C;
    case 0x7F226020u: goto label_7F226020;
    case 0x7F226024u: goto label_7F226024;
    case 0x7F226028u: goto label_7F226028;
    case 0x7F22602Cu: goto label_7F22602C;
    case 0x7F226030u: goto label_7F226030;
    case 0x7F226034u: goto label_7F226034;
    case 0x7F226038u: goto label_7F226038;
    case 0x7F22603Cu: goto label_7F22603C;
    case 0x7F226040u: goto label_7F226040;
    case 0x7F226044u: goto label_7F226044;
    case 0x7F226048u: goto label_7F226048;
    case 0x7F22604Cu: goto label_7F22604C;
    case 0x7F226050u: goto label_7F226050;
    case 0x7F226054u: goto label_7F226054;
    case 0x7F226058u: goto label_7F226058;
    case 0x7F22605Cu: goto label_7F22605C;
    case 0x7F226060u: goto label_7F226060;
    case 0x7F226064u: goto label_7F226064;
    case 0x7F226068u: goto label_7F226068;
    case 0x7F22606Cu: goto label_7F22606C;
    case 0x7F226070u: goto label_7F226070;
    case 0x7F226074u: goto label_7F226074;
    case 0x7F226078u: goto label_7F226078;
    case 0x7F22607Cu: goto label_7F22607C;
    case 0x7F226080u: goto label_7F226080;
    case 0x7F226084u: goto label_7F226084;
    case 0x7F226088u: goto label_7F226088;
    case 0x7F22608Cu: goto label_7F22608C;
    case 0x7F226090u: goto label_7F226090;
    case 0x7F226094u: goto label_7F226094;
    case 0x7F226098u: goto label_7F226098;
    case 0x7F22609Cu: goto label_7F22609C;
    case 0x7F2260A0u: goto label_7F2260A0;
    case 0x7F2260A4u: goto label_7F2260A4;
    case 0x7F2260A8u: goto label_7F2260A8;
    case 0x7F2260ACu: goto label_7F2260AC;
    case 0x7F2260B0u: goto label_7F2260B0;
    case 0x7F2260B4u: goto label_7F2260B4;
    case 0x7F2260B8u: goto label_7F2260B8;
    case 0x7F2260BCu: goto label_7F2260BC;
    case 0x7F2260C0u: goto label_7F2260C0;
    case 0x7F2260C4u: goto label_7F2260C4;
    case 0x7F2260C8u: goto label_7F2260C8;
    case 0x7F2260CCu: goto label_7F2260CC;
    case 0x7F2260D0u: goto label_7F2260D0;
    case 0x7F2260D4u: goto label_7F2260D4;
    case 0x7F2260D8u: goto label_7F2260D8;
    case 0x7F2260DCu: goto label_7F2260DC;
    case 0x7F2260E0u: goto label_7F2260E0;
    case 0x7F2260E4u: goto label_7F2260E4;
    case 0x7F2260E8u: goto label_7F2260E8;
    case 0x7F2260ECu: goto label_7F2260EC;
    case 0x7F2260F0u: goto label_7F2260F0;
    case 0x7F2260F4u: goto label_7F2260F4;
    case 0x7F2260F8u: goto label_7F2260F8;
    case 0x7F2260FCu: goto label_7F2260FC;
    case 0x7F226100u: goto label_7F226100;
    case 0x7F226104u: goto label_7F226104;
    case 0x7F226108u: goto label_7F226108;
    case 0x7F22610Cu: goto label_7F22610C;
    case 0x7F226110u: goto label_7F226110;
    case 0x7F226114u: goto label_7F226114;
    case 0x7F226118u: goto label_7F226118;
    case 0x7F22611Cu: goto label_7F22611C;
    case 0x7F226120u: goto label_7F226120;
    case 0x7F226124u: goto label_7F226124;
    case 0x7F226128u: goto label_7F226128;
    case 0x7F22612Cu: goto label_7F22612C;
    case 0x7F226130u: goto label_7F226130;
    case 0x7F226134u: goto label_7F226134;
    case 0x7F226138u: goto label_7F226138;
    case 0x7F22613Cu: goto label_7F22613C;
    case 0x7F226140u: goto label_7F226140;
    case 0x7F226144u: goto label_7F226144;
    case 0x7F226148u: goto label_7F226148;
    case 0x7F22614Cu: goto label_7F22614C;
    case 0x7F226150u: goto label_7F226150;
    case 0x7F226154u: goto label_7F226154;
    case 0x7F226158u: goto label_7F226158;
    case 0x7F22615Cu: goto label_7F22615C;
    case 0x7F226160u: goto label_7F226160;
    case 0x7F226164u: goto label_7F226164;
    case 0x7F226168u: goto label_7F226168;
    case 0x7F22616Cu: goto label_7F22616C;
    case 0x7F226170u: goto label_7F226170;
    case 0x7F226174u: goto label_7F226174;
    case 0x7F226178u: goto label_7F226178;
    case 0x7F22617Cu: goto label_7F22617C;
    case 0x7F226180u: goto label_7F226180;
    case 0x7F226184u: goto label_7F226184;
    case 0x7F226188u: goto label_7F226188;
    case 0x7F22618Cu: goto label_7F22618C;
    case 0x7F226190u: goto label_7F226190;
    case 0x7F226194u: goto label_7F226194;
    case 0x7F226198u: goto label_7F226198;
    case 0x7F22619Cu: goto label_7F22619C;
    case 0x7F2261A0u: goto label_7F2261A0;
    case 0x7F2261A4u: goto label_7F2261A4;
    case 0x7F2261A8u: goto label_7F2261A8;
    case 0x7F2261ACu: goto label_7F2261AC;
    case 0x7F2261B0u: goto label_7F2261B0;
    case 0x7F2261B4u: goto label_7F2261B4;
    case 0x7F2261B8u: goto label_7F2261B8;
    case 0x7F2261BCu: goto label_7F2261BC;
    case 0x7F2261C0u: goto label_7F2261C0;
    case 0x7F2261C4u: goto label_7F2261C4;
    case 0x7F2261C8u: goto label_7F2261C8;
    case 0x7F2261CCu: goto label_7F2261CC;
    case 0x7F2261D0u: goto label_7F2261D0;
    case 0x7F2261D4u: goto label_7F2261D4;
    case 0x7F2261D8u: goto label_7F2261D8;
    case 0x7F2261DCu: goto label_7F2261DC;
    case 0x7F2261E0u: goto label_7F2261E0;
    case 0x7F2261E4u: goto label_7F2261E4;
    case 0x7F2261E8u: goto label_7F2261E8;
    case 0x7F2261ECu: goto label_7F2261EC;
    case 0x7F2261F0u: goto label_7F2261F0;
    case 0x7F2261F4u: goto label_7F2261F4;
    case 0x7F2261F8u: goto label_7F2261F8;
    case 0x7F2261FCu: goto label_7F2261FC;
    case 0x7F226200u: goto label_7F226200;
    case 0x7F226204u: goto label_7F226204;
    case 0x7F226208u: goto label_7F226208;
    case 0x7F22620Cu: goto label_7F22620C;
    case 0x7F226210u: goto label_7F226210;
    case 0x7F226214u: goto label_7F226214;
    case 0x7F226218u: goto label_7F226218;
    case 0x7F22621Cu: goto label_7F22621C;
    case 0x7F226220u: goto label_7F226220;
    case 0x7F226224u: goto label_7F226224;
    case 0x7F226228u: goto label_7F226228;
    case 0x7F22622Cu: goto label_7F22622C;
    case 0x7F226230u: goto label_7F226230;
    case 0x7F226234u: goto label_7F226234;
    case 0x7F226238u: goto label_7F226238;
    case 0x7F22623Cu: goto label_7F22623C;
    case 0x7F226240u: goto label_7F226240;
    case 0x7F226244u: goto label_7F226244;
    case 0x7F226248u: goto label_7F226248;
    case 0x7F22624Cu: goto label_7F22624C;
    case 0x7F226250u: goto label_7F226250;
    case 0x7F226254u: goto label_7F226254;
    case 0x7F226258u: goto label_7F226258;
    case 0x7F22625Cu: goto label_7F22625C;
    case 0x7F226260u: goto label_7F226260;
    case 0x7F226264u: goto label_7F226264;
    case 0x7F226268u: goto label_7F226268;
    case 0x7F22626Cu: goto label_7F22626C;
    case 0x7F226270u: goto label_7F226270;
    case 0x7F226274u: goto label_7F226274;
    case 0x7F226278u: goto label_7F226278;
    case 0x7F22627Cu: goto label_7F22627C;
    case 0x7F226280u: goto label_7F226280;
    case 0x7F226284u: goto label_7F226284;
    case 0x7F226288u: goto label_7F226288;
    case 0x7F22628Cu: goto label_7F22628C;
    case 0x7F226290u: goto label_7F226290;
    case 0x7F226294u: goto label_7F226294;
    case 0x7F226298u: goto label_7F226298;
    case 0x7F22629Cu: goto label_7F22629C;
    case 0x7F2262A0u: goto label_7F2262A0;
    case 0x7F2262A4u: goto label_7F2262A4;
    case 0x7F2262A8u: goto label_7F2262A8;
    case 0x7F2262ACu: goto label_7F2262AC;
    case 0x7F2262B0u: goto label_7F2262B0;
    case 0x7F2262B4u: goto label_7F2262B4;
    case 0x7F2262B8u: goto label_7F2262B8;
    case 0x7F2262BCu: goto label_7F2262BC;
    case 0x7F2262C0u: goto label_7F2262C0;
    case 0x7F2262C4u: goto label_7F2262C4;
    case 0x7F2262C8u: goto label_7F2262C8;
    case 0x7F2262CCu: goto label_7F2262CC;
    case 0x7F2262D0u: goto label_7F2262D0;
    case 0x7F2262D4u: goto label_7F2262D4;
    case 0x7F2262D8u: goto label_7F2262D8;
    case 0x7F2262DCu: goto label_7F2262DC;
    case 0x7F2262E0u: goto label_7F2262E0;
    case 0x7F2262E4u: goto label_7F2262E4;
    case 0x7F2262E8u: goto label_7F2262E8;
    case 0x7F2262ECu: goto label_7F2262EC;
    case 0x7F2262F0u: goto label_7F2262F0;
    case 0x7F2262F4u: goto label_7F2262F4;
    case 0x7F2262F8u: goto label_7F2262F8;
    case 0x7F2262FCu: goto label_7F2262FC;
    case 0x7F226300u: goto label_7F226300;
    case 0x7F226304u: goto label_7F226304;
    case 0x7F226308u: goto label_7F226308;
    case 0x7F22630Cu: goto label_7F22630C;
    case 0x7F226310u: goto label_7F226310;
    case 0x7F226314u: goto label_7F226314;
    case 0x7F226318u: goto label_7F226318;
    case 0x7F22631Cu: goto label_7F22631C;
    case 0x7F226320u: goto label_7F226320;
    case 0x7F226324u: goto label_7F226324;
    case 0x7F226328u: goto label_7F226328;
    case 0x7F22632Cu: goto label_7F22632C;
    case 0x7F226330u: goto label_7F226330;
    case 0x7F226334u: goto label_7F226334;
    case 0x7F226338u: goto label_7F226338;
    case 0x7F22633Cu: goto label_7F22633C;
    case 0x7F226340u: goto label_7F226340;
    case 0x7F226344u: goto label_7F226344;
    case 0x7F226348u: goto label_7F226348;
    case 0x7F22634Cu: goto label_7F22634C;
    case 0x7F226350u: goto label_7F226350;
    case 0x7F226354u: goto label_7F226354;
    case 0x7F226358u: goto label_7F226358;
    case 0x7F22635Cu: goto label_7F22635C;
    case 0x7F226360u: goto label_7F226360;
    case 0x7F226364u: goto label_7F226364;
    case 0x7F226368u: goto label_7F226368;
    case 0x7F22636Cu: goto label_7F22636C;
    case 0x7F226370u: goto label_7F226370;
    case 0x7F226374u: goto label_7F226374;
    case 0x7F226378u: goto label_7F226378;
    case 0x7F22637Cu: goto label_7F22637C;
    case 0x7F226380u: goto label_7F226380;
    case 0x7F226384u: goto label_7F226384;
    case 0x7F226388u: goto label_7F226388;
    case 0x7F22638Cu: goto label_7F22638C;
    case 0x7F226390u: goto label_7F226390;
    case 0x7F226394u: goto label_7F226394;
    case 0x7F226398u: goto label_7F226398;
    case 0x7F22639Cu: goto label_7F22639C;
    case 0x7F2263A0u: goto label_7F2263A0;
    case 0x7F2263A4u: goto label_7F2263A4;
    case 0x7F2263A8u: goto label_7F2263A8;
    case 0x7F2263ACu: goto label_7F2263AC;
    case 0x7F2263B0u: goto label_7F2263B0;
    case 0x7F2263B4u: goto label_7F2263B4;
    case 0x7F2263B8u: goto label_7F2263B8;
    case 0x7F2263BCu: goto label_7F2263BC;
    case 0x7F2263C0u: goto label_7F2263C0;
    case 0x7F2263C4u: goto label_7F2263C4;
    case 0x7F2263C8u: goto label_7F2263C8;
    case 0x7F2263CCu: goto label_7F2263CC;
    case 0x7F2263D0u: goto label_7F2263D0;
    case 0x7F2263D4u: goto label_7F2263D4;
    case 0x7F2263D8u: goto label_7F2263D8;
    case 0x7F2263DCu: goto label_7F2263DC;
    case 0x7F2263E0u: goto label_7F2263E0;
    case 0x7F2263E4u: goto label_7F2263E4;
    case 0x7F2263E8u: goto label_7F2263E8;
    case 0x7F2263ECu: goto label_7F2263EC;
    case 0x7F2263F0u: goto label_7F2263F0;
    case 0x7F2263F4u: goto label_7F2263F4;
    case 0x7F2263F8u: goto label_7F2263F8;
    case 0x7F2263FCu: goto label_7F2263FC;
    case 0x7F226400u: goto label_7F226400;
    case 0x7F226404u: goto label_7F226404;
    case 0x7F226408u: goto label_7F226408;
    case 0x7F22640Cu: goto label_7F22640C;
    case 0x7F226410u: goto label_7F226410;
    case 0x7F226414u: goto label_7F226414;
    case 0x7F226418u: goto label_7F226418;
    case 0x7F22641Cu: goto label_7F22641C;
    case 0x7F226420u: goto label_7F226420;
    case 0x7F226424u: goto label_7F226424;
    case 0x7F226428u: goto label_7F226428;
    case 0x7F22642Cu: goto label_7F22642C;
    case 0x7F226430u: goto label_7F226430;
    case 0x7F226434u: goto label_7F226434;
    case 0x7F226438u: goto label_7F226438;
    case 0x7F22643Cu: goto label_7F22643C;
    case 0x7F226440u: goto label_7F226440;
    case 0x7F226444u: goto label_7F226444;
    case 0x7F226448u: goto label_7F226448;
    case 0x7F22644Cu: goto label_7F22644C;
    case 0x7F226450u: goto label_7F226450;
    case 0x7F226454u: goto label_7F226454;
    case 0x7F226458u: goto label_7F226458;
    case 0x7F22645Cu: goto label_7F22645C;
    case 0x7F226460u: goto label_7F226460;
    case 0x7F226464u: goto label_7F226464;
    case 0x7F226468u: goto label_7F226468;
    case 0x7F22646Cu: goto label_7F22646C;
    case 0x7F226470u: goto label_7F226470;
    case 0x7F226474u: goto label_7F226474;
    case 0x7F226478u: goto label_7F226478;
    case 0x7F22647Cu: goto label_7F22647C;
    case 0x7F226480u: goto label_7F226480;
    case 0x7F226484u: goto label_7F226484;
    case 0x7F226488u: goto label_7F226488;
    case 0x7F22648Cu: goto label_7F22648C;
    case 0x7F226490u: goto label_7F226490;
    case 0x7F226494u: goto label_7F226494;
    case 0x7F226498u: goto label_7F226498;
    case 0x7F22649Cu: goto label_7F22649C;
    case 0x7F2264A0u: goto label_7F2264A0;
    case 0x7F2264A4u: goto label_7F2264A4;
    case 0x7F2264A8u: goto label_7F2264A8;
    case 0x7F2264ACu: goto label_7F2264AC;
    case 0x7F2264B0u: goto label_7F2264B0;
    case 0x7F2264B4u: goto label_7F2264B4;
    case 0x7F2264B8u: goto label_7F2264B8;
    case 0x7F2264BCu: goto label_7F2264BC;
    case 0x7F2264C0u: goto label_7F2264C0;
    case 0x7F2264C4u: goto label_7F2264C4;
    case 0x7F2264C8u: goto label_7F2264C8;
    case 0x7F2264CCu: goto label_7F2264CC;
    case 0x7F2264D0u: goto label_7F2264D0;
    case 0x7F2264D4u: goto label_7F2264D4;
    case 0x7F2264D8u: goto label_7F2264D8;
    case 0x7F2264DCu: goto label_7F2264DC;
    case 0x7F2264E0u: goto label_7F2264E0;
    case 0x7F2264E4u: goto label_7F2264E4;
    case 0x7F2264E8u: goto label_7F2264E8;
    case 0x7F2264ECu: goto label_7F2264EC;
    case 0x7F2264F0u: goto label_7F2264F0;
    case 0x7F2264F4u: goto label_7F2264F4;
    case 0x7F2264F8u: goto label_7F2264F8;
    case 0x7F2264FCu: goto label_7F2264FC;
    case 0x7F226500u: goto label_7F226500;
    case 0x7F226504u: goto label_7F226504;
    case 0x7F226508u: goto label_7F226508;
    case 0x7F22650Cu: goto label_7F22650C;
    case 0x7F226510u: goto label_7F226510;
    case 0x7F226514u: goto label_7F226514;
    case 0x7F226518u: goto label_7F226518;
    case 0x7F22651Cu: goto label_7F22651C;
    case 0x7F226520u: goto label_7F226520;
    case 0x7F226524u: goto label_7F226524;
    case 0x7F226528u: goto label_7F226528;
    case 0x7F22652Cu: goto label_7F22652C;
    case 0x7F226530u: goto label_7F226530;
    case 0x7F226534u: goto label_7F226534;
    case 0x7F226538u: goto label_7F226538;
    case 0x7F22653Cu: goto label_7F22653C;
    case 0x7F226540u: goto label_7F226540;
    case 0x7F226544u: goto label_7F226544;
    case 0x7F226548u: goto label_7F226548;
    case 0x7F22654Cu: goto label_7F22654C;
    case 0x7F226550u: goto label_7F226550;
    case 0x7F226554u: goto label_7F226554;
    case 0x7F226558u: goto label_7F226558;
    case 0x7F22655Cu: goto label_7F22655C;
    case 0x7F226560u: goto label_7F226560;
    case 0x7F226564u: goto label_7F226564;
    case 0x7F226568u: goto label_7F226568;
    case 0x7F22656Cu: goto label_7F22656C;
    case 0x7F226570u: goto label_7F226570;
    case 0x7F226574u: goto label_7F226574;
    case 0x7F226578u: goto label_7F226578;
    case 0x7F22657Cu: goto label_7F22657C;
    case 0x7F226580u: goto label_7F226580;
    case 0x7F226584u: goto label_7F226584;
    case 0x7F226588u: goto label_7F226588;
    case 0x7F22658Cu: goto label_7F22658C;
    case 0x7F226590u: goto label_7F226590;
    case 0x7F226594u: goto label_7F226594;
    case 0x7F226598u: goto label_7F226598;
    case 0x7F22659Cu: goto label_7F22659C;
    case 0x7F2265A0u: goto label_7F2265A0;
    case 0x7F2265A4u: goto label_7F2265A4;
    case 0x7F2265A8u: goto label_7F2265A8;
    case 0x7F2265ACu: goto label_7F2265AC;
    case 0x7F2265B0u: goto label_7F2265B0;
    case 0x7F2265B4u: goto label_7F2265B4;
    case 0x7F2265B8u: goto label_7F2265B8;
    case 0x7F2265BCu: goto label_7F2265BC;
    case 0x7F2265C0u: goto label_7F2265C0;
    case 0x7F2265C4u: goto label_7F2265C4;
    case 0x7F2265C8u: goto label_7F2265C8;
    case 0x7F2265CCu: goto label_7F2265CC;
    case 0x7F2265D0u: goto label_7F2265D0;
    case 0x7F2265D4u: goto label_7F2265D4;
    case 0x7F2265D8u: goto label_7F2265D8;
    case 0x7F2265DCu: goto label_7F2265DC;
    case 0x7F2265E0u: goto label_7F2265E0;
    case 0x7F2265E4u: goto label_7F2265E4;
    case 0x7F2265E8u: goto label_7F2265E8;
    case 0x7F2265ECu: goto label_7F2265EC;
    case 0x7F2265F0u: goto label_7F2265F0;
    case 0x7F2265F4u: goto label_7F2265F4;
    case 0x7F2265F8u: goto label_7F2265F8;
    case 0x7F2265FCu: goto label_7F2265FC;
    case 0x7F226600u: goto label_7F226600;
    case 0x7F226604u: goto label_7F226604;
    case 0x7F226608u: goto label_7F226608;
    case 0x7F22660Cu: goto label_7F22660C;
    case 0x7F226610u: goto label_7F226610;
    case 0x7F226614u: goto label_7F226614;
    case 0x7F226618u: goto label_7F226618;
    case 0x7F22661Cu: goto label_7F22661C;
    case 0x7F226620u: goto label_7F226620;
    case 0x7F226624u: goto label_7F226624;
    case 0x7F226628u: goto label_7F226628;
    case 0x7F22662Cu: goto label_7F22662C;
    case 0x7F226630u: goto label_7F226630;
    case 0x7F226634u: goto label_7F226634;
    case 0x7F226638u: goto label_7F226638;
    case 0x7F22663Cu: goto label_7F22663C;
    case 0x7F226640u: goto label_7F226640;
    case 0x7F226644u: goto label_7F226644;
    case 0x7F226648u: goto label_7F226648;
    case 0x7F22664Cu: goto label_7F22664C;
    case 0x7F226650u: goto label_7F226650;
    case 0x7F226654u: goto label_7F226654;
    case 0x7F226658u: goto label_7F226658;
    case 0x7F22665Cu: goto label_7F22665C;
    case 0x7F226660u: goto label_7F226660;
    case 0x7F226664u: goto label_7F226664;
    case 0x7F226668u: goto label_7F226668;
    case 0x7F22666Cu: goto label_7F22666C;
    case 0x7F226670u: goto label_7F226670;
    case 0x7F226674u: goto label_7F226674;
    case 0x7F226678u: goto label_7F226678;
    case 0x7F22667Cu: goto label_7F22667C;
    case 0x7F226680u: goto label_7F226680;
    case 0x7F226684u: goto label_7F226684;
    case 0x7F226688u: goto label_7F226688;
    case 0x7F22668Cu: goto label_7F22668C;
    case 0x7F226690u: goto label_7F226690;
    case 0x7F226694u: goto label_7F226694;
    case 0x7F226698u: goto label_7F226698;
    case 0x7F22669Cu: goto label_7F22669C;
    case 0x7F2266A0u: goto label_7F2266A0;
    case 0x7F2266A4u: goto label_7F2266A4;
    case 0x7F2266A8u: goto label_7F2266A8;
    case 0x7F2266ACu: goto label_7F2266AC;
    case 0x7F2266B0u: goto label_7F2266B0;
    case 0x7F2266B4u: goto label_7F2266B4;
    case 0x7F2266B8u: goto label_7F2266B8;
    case 0x7F2266BCu: goto label_7F2266BC;
    case 0x7F2266C0u: goto label_7F2266C0;
    case 0x7F2266C4u: goto label_7F2266C4;
    case 0x7F2266C8u: goto label_7F2266C8;
    case 0x7F2266CCu: goto label_7F2266CC;
    case 0x7F2266D0u: goto label_7F2266D0;
    case 0x7F2266D4u: goto label_7F2266D4;
    case 0x7F2266D8u: goto label_7F2266D8;
    case 0x7F2266DCu: goto label_7F2266DC;
    case 0x7F2266E0u: goto label_7F2266E0;
    case 0x7F2266E4u: goto label_7F2266E4;
    case 0x7F2266E8u: goto label_7F2266E8;
    case 0x7F2266ECu: goto label_7F2266EC;
    case 0x7F2266F0u: goto label_7F2266F0;
    case 0x7F2266F4u: goto label_7F2266F4;
    case 0x7F2266F8u: goto label_7F2266F8;
    case 0x7F2266FCu: goto label_7F2266FC;
    case 0x7F226700u: goto label_7F226700;
    case 0x7F226704u: goto label_7F226704;
    case 0x7F226708u: goto label_7F226708;
    case 0x7F22670Cu: goto label_7F22670C;
    case 0x7F226710u: goto label_7F226710;
    case 0x7F226714u: goto label_7F226714;
    case 0x7F226718u: goto label_7F226718;
    case 0x7F22671Cu: goto label_7F22671C;
    case 0x7F226720u: goto label_7F226720;
    case 0x7F226724u: goto label_7F226724;
    case 0x7F226728u: goto label_7F226728;
    case 0x7F22672Cu: goto label_7F22672C;
    case 0x7F226730u: goto label_7F226730;
    case 0x7F226734u: goto label_7F226734;
    case 0x7F226738u: goto label_7F226738;
    case 0x7F22673Cu: goto label_7F22673C;
    case 0x7F226740u: goto label_7F226740;
    case 0x7F226744u: goto label_7F226744;
    case 0x7F226748u: goto label_7F226748;
    case 0x7F22674Cu: goto label_7F22674C;
    case 0x7F226750u: goto label_7F226750;
    case 0x7F226754u: goto label_7F226754;
    case 0x7F226758u: goto label_7F226758;
    case 0x7F22675Cu: goto label_7F22675C;
    case 0x7F226760u: goto label_7F226760;
    case 0x7F226764u: goto label_7F226764;
    case 0x7F226768u: goto label_7F226768;
    case 0x7F22676Cu: goto label_7F22676C;
    case 0x7F226770u: goto label_7F226770;
    case 0x7F226774u: goto label_7F226774;
    case 0x7F226778u: goto label_7F226778;
    case 0x7F22677Cu: goto label_7F22677C;
    case 0x7F226780u: goto label_7F226780;
    case 0x7F226784u: goto label_7F226784;
    case 0x7F226788u: goto label_7F226788;
    case 0x7F22678Cu: goto label_7F22678C;
    case 0x7F226790u: goto label_7F226790;
    case 0x7F226794u: goto label_7F226794;
    case 0x7F226798u: goto label_7F226798;
    case 0x7F22679Cu: goto label_7F22679C;
    case 0x7F2267A0u: goto label_7F2267A0;
    case 0x7F2267A4u: goto label_7F2267A4;
    case 0x7F2267A8u: goto label_7F2267A8;
    case 0x7F2267ACu: goto label_7F2267AC;
    case 0x7F2267B0u: goto label_7F2267B0;
    case 0x7F2267B4u: goto label_7F2267B4;
    case 0x7F2267B8u: goto label_7F2267B8;
    case 0x7F2267BCu: goto label_7F2267BC;
    case 0x7F2267C0u: goto label_7F2267C0;
    case 0x7F2267C4u: goto label_7F2267C4;
    case 0x7F2267C8u: goto label_7F2267C8;
    case 0x7F2267CCu: goto label_7F2267CC;
    case 0x7F2267D0u: goto label_7F2267D0;
    case 0x7F2267D4u: goto label_7F2267D4;
    case 0x7F2267D8u: goto label_7F2267D8;
    case 0x7F2267DCu: goto label_7F2267DC;
    case 0x7F2267E0u: goto label_7F2267E0;
    case 0x7F2267E4u: goto label_7F2267E4;
    case 0x7F2267E8u: goto label_7F2267E8;
    case 0x7F2267ECu: goto label_7F2267EC;
    case 0x7F2267F0u: goto label_7F2267F0;
    case 0x7F2267F4u: goto label_7F2267F4;
    case 0x7F2267F8u: goto label_7F2267F8;
    case 0x7F2267FCu: goto label_7F2267FC;
    case 0x7F226800u: goto label_7F226800;
    case 0x7F226804u: goto label_7F226804;
    case 0x7F226808u: goto label_7F226808;
    case 0x7F22680Cu: goto label_7F22680C;
    case 0x7F226810u: goto label_7F226810;
    case 0x7F226814u: goto label_7F226814;
    case 0x7F226818u: goto label_7F226818;
    case 0x7F22681Cu: goto label_7F22681C;
    case 0x7F226820u: goto label_7F226820;
    case 0x7F226824u: goto label_7F226824;
    case 0x7F226828u: goto label_7F226828;
    case 0x7F22682Cu: goto label_7F22682C;
    case 0x7F226830u: goto label_7F226830;
    case 0x7F226834u: goto label_7F226834;
    case 0x7F226838u: goto label_7F226838;
    case 0x7F22683Cu: goto label_7F22683C;
    case 0x7F226840u: goto label_7F226840;
    case 0x7F226844u: goto label_7F226844;
    case 0x7F226848u: goto label_7F226848;
    case 0x7F22684Cu: goto label_7F22684C;
    case 0x7F226850u: goto label_7F226850;
    case 0x7F226854u: goto label_7F226854;
    case 0x7F226858u: goto label_7F226858;
    case 0x7F22685Cu: goto label_7F22685C;
    case 0x7F226860u: goto label_7F226860;
    case 0x7F226864u: goto label_7F226864;
    case 0x7F226868u: goto label_7F226868;
    case 0x7F22686Cu: goto label_7F22686C;
    case 0x7F226870u: goto label_7F226870;
    case 0x7F226874u: goto label_7F226874;
    case 0x7F226878u: goto label_7F226878;
    case 0x7F22687Cu: goto label_7F22687C;
    case 0x7F226880u: goto label_7F226880;
    case 0x7F226884u: goto label_7F226884;
    case 0x7F226888u: goto label_7F226888;
    case 0x7F22688Cu: goto label_7F22688C;
    case 0x7F226890u: goto label_7F226890;
    case 0x7F226894u: goto label_7F226894;
    case 0x7F226898u: goto label_7F226898;
    case 0x7F22689Cu: goto label_7F22689C;
    case 0x7F2268A0u: goto label_7F2268A0;
    case 0x7F2268A4u: goto label_7F2268A4;
    case 0x7F2268A8u: goto label_7F2268A8;
    case 0x7F2268ACu: goto label_7F2268AC;
    case 0x7F2268B0u: goto label_7F2268B0;
    case 0x7F2268B4u: goto label_7F2268B4;
    case 0x7F2268B8u: goto label_7F2268B8;
    case 0x7F2268BCu: goto label_7F2268BC;
    case 0x7F2268C0u: goto label_7F2268C0;
    case 0x7F2268C4u: goto label_7F2268C4;
    case 0x7F2268C8u: goto label_7F2268C8;
    case 0x7F2268CCu: goto label_7F2268CC;
    case 0x7F2268D0u: goto label_7F2268D0;
    case 0x7F2268D4u: goto label_7F2268D4;
    case 0x7F2268D8u: goto label_7F2268D8;
    case 0x7F2268DCu: goto label_7F2268DC;
    case 0x7F2268E0u: goto label_7F2268E0;
    case 0x7F2268E4u: goto label_7F2268E4;
    case 0x7F2268E8u: goto label_7F2268E8;
    case 0x7F2268ECu: goto label_7F2268EC;
    case 0x7F2268F0u: goto label_7F2268F0;
    case 0x7F2268F4u: goto label_7F2268F4;
    case 0x7F2268F8u: goto label_7F2268F8;
    case 0x7F2268FCu: goto label_7F2268FC;
    case 0x7F226900u: goto label_7F226900;
    case 0x7F226904u: goto label_7F226904;
    case 0x7F226908u: goto label_7F226908;
    case 0x7F22690Cu: goto label_7F22690C;
    case 0x7F226910u: goto label_7F226910;
    case 0x7F226914u: goto label_7F226914;
    case 0x7F226918u: goto label_7F226918;
    case 0x7F22691Cu: goto label_7F22691C;
    case 0x7F226920u: goto label_7F226920;
    case 0x7F226924u: goto label_7F226924;
    case 0x7F226928u: goto label_7F226928;
    case 0x7F22692Cu: goto label_7F22692C;
    case 0x7F226930u: goto label_7F226930;
    case 0x7F226934u: goto label_7F226934;
    case 0x7F226938u: goto label_7F226938;
    case 0x7F22693Cu: goto label_7F22693C;
    case 0x7F226940u: goto label_7F226940;
    case 0x7F226944u: goto label_7F226944;
    case 0x7F226948u: goto label_7F226948;
    case 0x7F22694Cu: goto label_7F22694C;
    case 0x7F226950u: goto label_7F226950;
    case 0x7F226954u: goto label_7F226954;
    case 0x7F226958u: goto label_7F226958;
    case 0x7F22695Cu: goto label_7F22695C;
    case 0x7F226960u: goto label_7F226960;
    case 0x7F226964u: goto label_7F226964;
    case 0x7F226968u: goto label_7F226968;
    case 0x7F22696Cu: goto label_7F22696C;
    case 0x7F226970u: goto label_7F226970;
    case 0x7F226974u: goto label_7F226974;
    case 0x7F226978u: goto label_7F226978;
    case 0x7F22697Cu: goto label_7F22697C;
    case 0x7F226980u: goto label_7F226980;
    case 0x7F226984u: goto label_7F226984;
    case 0x7F226988u: goto label_7F226988;
    case 0x7F22698Cu: goto label_7F22698C;
    case 0x7F226990u: goto label_7F226990;
    case 0x7F226994u: goto label_7F226994;
    case 0x7F226998u: goto label_7F226998;
    case 0x7F22699Cu: goto label_7F22699C;
    case 0x7F2269A0u: goto label_7F2269A0;
    case 0x7F2269A4u: goto label_7F2269A4;
    case 0x7F2269A8u: goto label_7F2269A8;
    case 0x7F2269ACu: goto label_7F2269AC;
    case 0x7F2269B0u: goto label_7F2269B0;
    case 0x7F2269B4u: goto label_7F2269B4;
    case 0x7F2269B8u: goto label_7F2269B8;
    case 0x7F2269BCu: goto label_7F2269BC;
    case 0x7F2269C0u: goto label_7F2269C0;
    case 0x7F2269C4u: goto label_7F2269C4;
    case 0x7F2269C8u: goto label_7F2269C8;
    case 0x7F2269CCu: goto label_7F2269CC;
    case 0x7F2269D0u: goto label_7F2269D0;
    case 0x7F2269D4u: goto label_7F2269D4;
    case 0x7F2269D8u: goto label_7F2269D8;
    case 0x7F2269DCu: goto label_7F2269DC;
    case 0x7F2269E0u: goto label_7F2269E0;
    case 0x7F2269E4u: goto label_7F2269E4;
    case 0x7F2269E8u: goto label_7F2269E8;
    case 0x7F2269ECu: goto label_7F2269EC;
    case 0x7F2269F0u: goto label_7F2269F0;
    case 0x7F2269F4u: goto label_7F2269F4;
    case 0x7F2269F8u: goto label_7F2269F8;
    case 0x7F2269FCu: goto label_7F2269FC;
    case 0x7F226A00u: goto label_7F226A00;
    case 0x7F226A04u: goto label_7F226A04;
    case 0x7F226A08u: goto label_7F226A08;
    case 0x7F226A0Cu: goto label_7F226A0C;
    case 0x7F226A10u: goto label_7F226A10;
    case 0x7F226A14u: goto label_7F226A14;
    case 0x7F226A18u: goto label_7F226A18;
    case 0x7F226A1Cu: goto label_7F226A1C;
    case 0x7F226A20u: goto label_7F226A20;
    case 0x7F226A24u: goto label_7F226A24;
    case 0x7F226A28u: goto label_7F226A28;
    case 0x7F226A2Cu: goto label_7F226A2C;
    case 0x7F226A30u: goto label_7F226A30;
    case 0x7F226A34u: goto label_7F226A34;
    case 0x7F226A38u: goto label_7F226A38;
    case 0x7F226A3Cu: goto label_7F226A3C;
    case 0x7F226A40u: goto label_7F226A40;
    case 0x7F226A44u: goto label_7F226A44;
    case 0x7F226A48u: goto label_7F226A48;
    case 0x7F226A4Cu: goto label_7F226A4C;
    case 0x7F226A50u: goto label_7F226A50;
    case 0x7F226A54u: goto label_7F226A54;
    case 0x7F226A58u: goto label_7F226A58;
    case 0x7F226A5Cu: goto label_7F226A5C;
    case 0x7F226A60u: goto label_7F226A60;
    case 0x7F226A64u: goto label_7F226A64;
    case 0x7F226A68u: goto label_7F226A68;
    case 0x7F226A6Cu: goto label_7F226A6C;
    case 0x7F226A70u: goto label_7F226A70;
    case 0x7F226A74u: goto label_7F226A74;
    case 0x7F226A78u: goto label_7F226A78;
    case 0x7F226A7Cu: goto label_7F226A7C;
    case 0x7F226A80u: goto label_7F226A80;
    case 0x7F226A84u: goto label_7F226A84;
    case 0x7F226A88u: goto label_7F226A88;
    case 0x7F226A8Cu: goto label_7F226A8C;
    case 0x7F226A90u: goto label_7F226A90;
    case 0x7F226A94u: goto label_7F226A94;
    case 0x7F226A98u: goto label_7F226A98;
    case 0x7F226A9Cu: goto label_7F226A9C;
    case 0x7F226AA0u: goto label_7F226AA0;
    case 0x7F226AA4u: goto label_7F226AA4;
    case 0x7F226AA8u: goto label_7F226AA8;
    case 0x7F226AACu: goto label_7F226AAC;
    case 0x7F226AB0u: goto label_7F226AB0;
    case 0x7F226AB4u: goto label_7F226AB4;
    case 0x7F226AB8u: goto label_7F226AB8;
    case 0x7F226ABCu: goto label_7F226ABC;
    case 0x7F226AC0u: goto label_7F226AC0;
    case 0x7F226AC4u: goto label_7F226AC4;
    case 0x7F226AC8u: goto label_7F226AC8;
    case 0x7F226ACCu: goto label_7F226ACC;
    case 0x7F226AD0u: goto label_7F226AD0;
    case 0x7F226AD4u: goto label_7F226AD4;
    case 0x7F226AD8u: goto label_7F226AD8;
    case 0x7F226ADCu: goto label_7F226ADC;
    case 0x7F226AE0u: goto label_7F226AE0;
    case 0x7F226AE4u: goto label_7F226AE4;
    case 0x7F226AE8u: goto label_7F226AE8;
    case 0x7F226AECu: goto label_7F226AEC;
    case 0x7F226AF0u: goto label_7F226AF0;
    case 0x7F226AF4u: goto label_7F226AF4;
    case 0x7F226AF8u: goto label_7F226AF8;
    case 0x7F226AFCu: goto label_7F226AFC;
    case 0x7F226B00u: goto label_7F226B00;
    case 0x7F226B04u: goto label_7F226B04;
    case 0x7F226B08u: goto label_7F226B08;
    case 0x7F226B0Cu: goto label_7F226B0C;
    case 0x7F226B10u: goto label_7F226B10;
    case 0x7F226B14u: goto label_7F226B14;
    case 0x7F226B18u: goto label_7F226B18;
    case 0x7F226B1Cu: goto label_7F226B1C;
    case 0x7F226B20u: goto label_7F226B20;
    case 0x7F226B24u: goto label_7F226B24;
    case 0x7F226B28u: goto label_7F226B28;
    case 0x7F226B2Cu: goto label_7F226B2C;
    case 0x7F226B30u: goto label_7F226B30;
    case 0x7F226B34u: goto label_7F226B34;
    case 0x7F226B38u: goto label_7F226B38;
    case 0x7F226B3Cu: goto label_7F226B3C;
    case 0x7F226B40u: goto label_7F226B40;
    case 0x7F226B44u: goto label_7F226B44;
    case 0x7F226B48u: goto label_7F226B48;
    case 0x7F226B4Cu: goto label_7F226B4C;
    case 0x7F226B50u: goto label_7F226B50;
    case 0x7F226B54u: goto label_7F226B54;
    case 0x7F226B58u: goto label_7F226B58;
    case 0x7F226B5Cu: goto label_7F226B5C;
    case 0x7F226B60u: goto label_7F226B60;
    case 0x7F226B64u: goto label_7F226B64;
    case 0x7F226B68u: goto label_7F226B68;
    case 0x7F226B6Cu: goto label_7F226B6C;
    case 0x7F226B70u: goto label_7F226B70;
    case 0x7F226B74u: goto label_7F226B74;
    case 0x7F226B78u: goto label_7F226B78;
    case 0x7F226B7Cu: goto label_7F226B7C;
    case 0x7F226B80u: goto label_7F226B80;
    case 0x7F226B84u: goto label_7F226B84;
    case 0x7F226B88u: goto label_7F226B88;
    case 0x7F226B8Cu: goto label_7F226B8C;
    case 0x7F226B90u: goto label_7F226B90;
    case 0x7F226B94u: goto label_7F226B94;
    case 0x7F226B98u: goto label_7F226B98;
    case 0x7F226B9Cu: goto label_7F226B9C;
    case 0x7F226BA0u: goto label_7F226BA0;
    case 0x7F226BA4u: goto label_7F226BA4;
    case 0x7F226BA8u: goto label_7F226BA8;
    case 0x7F226BACu: goto label_7F226BAC;
    case 0x7F226BB0u: goto label_7F226BB0;
    case 0x7F226BB4u: goto label_7F226BB4;
    case 0x7F226BB8u: goto label_7F226BB8;
    case 0x7F226BBCu: goto label_7F226BBC;
    case 0x7F226BC0u: goto label_7F226BC0;
    case 0x7F226BC4u: goto label_7F226BC4;
    case 0x7F226BC8u: goto label_7F226BC8;
    case 0x7F226BCCu: goto label_7F226BCC;
    case 0x7F226BD0u: goto label_7F226BD0;
    case 0x7F226BD4u: goto label_7F226BD4;
    case 0x7F226BD8u: goto label_7F226BD8;
    case 0x7F226BDCu: goto label_7F226BDC;
    case 0x7F226BE0u: goto label_7F226BE0;
    case 0x7F226BE4u: goto label_7F226BE4;
    case 0x7F226BE8u: goto label_7F226BE8;
    case 0x7F226BECu: goto label_7F226BEC;
    case 0x7F226BF0u: goto label_7F226BF0;
    case 0x7F226BF4u: goto label_7F226BF4;
    case 0x7F226BF8u: goto label_7F226BF8;
    case 0x7F226BFCu: goto label_7F226BFC;
    case 0x7F226C00u: goto label_7F226C00;
    case 0x7F226C04u: goto label_7F226C04;
    case 0x7F226C08u: goto label_7F226C08;
    case 0x7F226C0Cu: goto label_7F226C0C;
    case 0x7F226C10u: goto label_7F226C10;
    case 0x7F226C14u: goto label_7F226C14;
    case 0x7F226C18u: goto label_7F226C18;
    case 0x7F226C1Cu: goto label_7F226C1C;
    case 0x7F226C20u: goto label_7F226C20;
    case 0x7F226C24u: goto label_7F226C24;
    case 0x7F226C28u: goto label_7F226C28;
    case 0x7F226C2Cu: goto label_7F226C2C;
    case 0x7F226C30u: goto label_7F226C30;
    case 0x7F226C34u: goto label_7F226C34;
    case 0x7F226C38u: goto label_7F226C38;
    case 0x7F226C3Cu: goto label_7F226C3C;
    case 0x7F226C40u: goto label_7F226C40;
    case 0x7F226C44u: goto label_7F226C44;
    case 0x7F226C48u: goto label_7F226C48;
    case 0x7F226C4Cu: goto label_7F226C4C;
    case 0x7F226C50u: goto label_7F226C50;
    case 0x7F226C54u: goto label_7F226C54;
    case 0x7F226C58u: goto label_7F226C58;
    case 0x7F226C5Cu: goto label_7F226C5C;
    case 0x7F226C60u: goto label_7F226C60;
    case 0x7F226C64u: goto label_7F226C64;
    case 0x7F226C68u: goto label_7F226C68;
    case 0x7F226C6Cu: goto label_7F226C6C;
    case 0x7F226C70u: goto label_7F226C70;
    case 0x7F226C74u: goto label_7F226C74;
    case 0x7F226C78u: goto label_7F226C78;
    case 0x7F226C7Cu: goto label_7F226C7C;
    case 0x7F226C80u: goto label_7F226C80;
    case 0x7F226C84u: goto label_7F226C84;
    case 0x7F226C88u: goto label_7F226C88;
    case 0x7F226C8Cu: goto label_7F226C8C;
    case 0x7F226C90u: goto label_7F226C90;
    case 0x7F226C94u: goto label_7F226C94;
    case 0x7F226C98u: goto label_7F226C98;
    case 0x7F226C9Cu: goto label_7F226C9C;
    case 0x7F226CA0u: goto label_7F226CA0;
    case 0x7F226CA4u: goto label_7F226CA4;
    case 0x7F226CA8u: goto label_7F226CA8;
    case 0x7F226CACu: goto label_7F226CAC;
    case 0x7F226CB0u: goto label_7F226CB0;
    case 0x7F226CB4u: goto label_7F226CB4;
    case 0x7F226CB8u: goto label_7F226CB8;
    case 0x7F226CBCu: goto label_7F226CBC;
    case 0x7F226CC0u: goto label_7F226CC0;
    case 0x7F226CC4u: goto label_7F226CC4;
    case 0x7F226CC8u: goto label_7F226CC8;
    case 0x7F226CCCu: goto label_7F226CCC;
    case 0x7F226CD0u: goto label_7F226CD0;
    case 0x7F226CD4u: goto label_7F226CD4;
    case 0x7F226CD8u: goto label_7F226CD8;
    case 0x7F226CDCu: goto label_7F226CDC;
    case 0x7F226CE0u: goto label_7F226CE0;
    case 0x7F226CE4u: goto label_7F226CE4;
    case 0x7F226CE8u: goto label_7F226CE8;
    case 0x7F226CECu: goto label_7F226CEC;
    case 0x7F226CF0u: goto label_7F226CF0;
    case 0x7F226CF4u: goto label_7F226CF4;
    case 0x7F226CF8u: goto label_7F226CF8;
    case 0x7F226CFCu: goto label_7F226CFC;
    case 0x7F226D00u: goto label_7F226D00;
    case 0x7F226D04u: goto label_7F226D04;
    case 0x7F226D08u: goto label_7F226D08;
    case 0x7F226D0Cu: goto label_7F226D0C;
    case 0x7F226D10u: goto label_7F226D10;
    case 0x7F226D14u: goto label_7F226D14;
    case 0x7F226D18u: goto label_7F226D18;
    case 0x7F226D1Cu: goto label_7F226D1C;
    case 0x7F226D20u: goto label_7F226D20;
    case 0x7F226D24u: goto label_7F226D24;
    case 0x7F226D28u: goto label_7F226D28;
    case 0x7F226D2Cu: goto label_7F226D2C;
    case 0x7F226D30u: goto label_7F226D30;
    case 0x7F226D34u: goto label_7F226D34;
    case 0x7F226D38u: goto label_7F226D38;
    case 0x7F226D3Cu: goto label_7F226D3C;
    case 0x7F226D40u: goto label_7F226D40;
    case 0x7F226D44u: goto label_7F226D44;
    case 0x7F226D48u: goto label_7F226D48;
    case 0x7F226D4Cu: goto label_7F226D4C;
    case 0x7F226D50u: goto label_7F226D50;
    case 0x7F226D54u: goto label_7F226D54;
    case 0x7F226D58u: goto label_7F226D58;
    case 0x7F226D5Cu: goto label_7F226D5C;
    case 0x7F226D60u: goto label_7F226D60;
    case 0x7F226D64u: goto label_7F226D64;
    case 0x7F226D68u: goto label_7F226D68;
    case 0x7F226D6Cu: goto label_7F226D6C;
    case 0x7F226D70u: goto label_7F226D70;
    case 0x7F226D74u: goto label_7F226D74;
    case 0x7F226D78u: goto label_7F226D78;
    case 0x7F226D7Cu: goto label_7F226D7C;
    case 0x7F226D80u: goto label_7F226D80;
    case 0x7F226D84u: goto label_7F226D84;
    case 0x7F226D88u: goto label_7F226D88;
    case 0x7F226D8Cu: goto label_7F226D8C;
    case 0x7F226D90u: goto label_7F226D90;
    case 0x7F226D94u: goto label_7F226D94;
    case 0x7F226D98u: goto label_7F226D98;
    case 0x7F226D9Cu: goto label_7F226D9C;
    case 0x7F226DA0u: goto label_7F226DA0;
    case 0x7F226DA4u: goto label_7F226DA4;
    case 0x7F226DA8u: goto label_7F226DA8;
    case 0x7F226DACu: goto label_7F226DAC;
    case 0x7F226DB0u: goto label_7F226DB0;
    case 0x7F226DB4u: goto label_7F226DB4;
    case 0x7F226DB8u: goto label_7F226DB8;
    case 0x7F226DBCu: goto label_7F226DBC;
    case 0x7F226DC0u: goto label_7F226DC0;
    case 0x7F226DC4u: goto label_7F226DC4;
    case 0x7F226DC8u: goto label_7F226DC8;
    case 0x7F226DCCu: goto label_7F226DCC;
    case 0x7F226DD0u: goto label_7F226DD0;
    case 0x7F226DD4u: goto label_7F226DD4;
    case 0x7F226DD8u: goto label_7F226DD8;
    case 0x7F226DDCu: goto label_7F226DDC;
    case 0x7F226DE0u: goto label_7F226DE0;
    case 0x7F226DE4u: goto label_7F226DE4;
    case 0x7F226DE8u: goto label_7F226DE8;
    case 0x7F226DECu: goto label_7F226DEC;
    case 0x7F226DF0u: goto label_7F226DF0;
    case 0x7F226DF4u: goto label_7F226DF4;
    case 0x7F226DF8u: goto label_7F226DF8;
    case 0x7F226DFCu: goto label_7F226DFC;
    case 0x7F226E00u: goto label_7F226E00;
    case 0x7F226E04u: goto label_7F226E04;
    case 0x7F226E08u: goto label_7F226E08;
    case 0x7F226E0Cu: goto label_7F226E0C;
    case 0x7F226E10u: goto label_7F226E10;
    case 0x7F226E14u: goto label_7F226E14;
    case 0x7F226E18u: goto label_7F226E18;
    case 0x7F226E1Cu: goto label_7F226E1C;
    case 0x7F226E20u: goto label_7F226E20;
    case 0x7F226E24u: goto label_7F226E24;
    case 0x7F226E28u: goto label_7F226E28;
    case 0x7F226E2Cu: goto label_7F226E2C;
    case 0x7F226E30u: goto label_7F226E30;
    case 0x7F226E34u: goto label_7F226E34;
    case 0x7F226E38u: goto label_7F226E38;
    case 0x7F226E3Cu: goto label_7F226E3C;
    case 0x7F226E40u: goto label_7F226E40;
    case 0x7F226E44u: goto label_7F226E44;
    case 0x7F226E48u: goto label_7F226E48;
    case 0x7F226E4Cu: goto label_7F226E4C;
    case 0x7F226E50u: goto label_7F226E50;
    case 0x7F226E54u: goto label_7F226E54;
    case 0x7F226E58u: goto label_7F226E58;
    case 0x7F226E5Cu: goto label_7F226E5C;
    case 0x7F226E60u: goto label_7F226E60;
    case 0x7F226E64u: goto label_7F226E64;
    case 0x7F226E68u: goto label_7F226E68;
    case 0x7F226E6Cu: goto label_7F226E6C;
    case 0x7F226E70u: goto label_7F226E70;
    case 0x7F226E74u: goto label_7F226E74;
    case 0x7F226E78u: goto label_7F226E78;
    case 0x7F226E7Cu: goto label_7F226E7C;
    case 0x7F226E80u: goto label_7F226E80;
    case 0x7F226E84u: goto label_7F226E84;
    case 0x7F226E88u: goto label_7F226E88;
    case 0x7F226E8Cu: goto label_7F226E8C;
    case 0x7F226E90u: goto label_7F226E90;
    case 0x7F226E94u: goto label_7F226E94;
    case 0x7F226E98u: goto label_7F226E98;
    case 0x7F226E9Cu: goto label_7F226E9C;
    case 0x7F226EA0u: goto label_7F226EA0;
    case 0x7F226EA4u: goto label_7F226EA4;
    case 0x7F226EA8u: goto label_7F226EA8;
    case 0x7F226EACu: goto label_7F226EAC;
    case 0x7F226EB0u: goto label_7F226EB0;
    case 0x7F226EB4u: goto label_7F226EB4;
    case 0x7F226EB8u: goto label_7F226EB8;
    case 0x7F226EBCu: goto label_7F226EBC;
    case 0x7F226EC0u: goto label_7F226EC0;
    case 0x7F226EC4u: goto label_7F226EC4;
    case 0x7F226EC8u: goto label_7F226EC8;
    case 0x7F226ECCu: goto label_7F226ECC;
    case 0x7F226ED0u: goto label_7F226ED0;
    case 0x7F226ED4u: goto label_7F226ED4;
    case 0x7F226ED8u: goto label_7F226ED8;
    case 0x7F226EDCu: goto label_7F226EDC;
    case 0x7F226EE0u: goto label_7F226EE0;
    case 0x7F226EE4u: goto label_7F226EE4;
    case 0x7F226EE8u: goto label_7F226EE8;
    case 0x7F226EECu: goto label_7F226EEC;
    case 0x7F226EF0u: goto label_7F226EF0;
    case 0x7F226EF4u: goto label_7F226EF4;
    case 0x7F226EF8u: goto label_7F226EF8;
    case 0x7F226EFCu: goto label_7F226EFC;
    case 0x7F226F00u: goto label_7F226F00;
    case 0x7F226F04u: goto label_7F226F04;
    case 0x7F226F08u: goto label_7F226F08;
    case 0x7F226F0Cu: goto label_7F226F0C;
    case 0x7F226F10u: goto label_7F226F10;
    case 0x7F226F14u: goto label_7F226F14;
    case 0x7F226F18u: goto label_7F226F18;
    case 0x7F226F1Cu: goto label_7F226F1C;
    case 0x7F226F20u: goto label_7F226F20;
    case 0x7F226F24u: goto label_7F226F24;
    case 0x7F226F28u: goto label_7F226F28;
    case 0x7F226F2Cu: goto label_7F226F2C;
    case 0x7F226F30u: goto label_7F226F30;
    case 0x7F226F34u: goto label_7F226F34;
    case 0x7F226F38u: goto label_7F226F38;
    case 0x7F226F3Cu: goto label_7F226F3C;
    case 0x7F226F40u: goto label_7F226F40;
    case 0x7F226F44u: goto label_7F226F44;
    case 0x7F226F48u: goto label_7F226F48;
    case 0x7F226F4Cu: goto label_7F226F4C;
    case 0x7F226F50u: goto label_7F226F50;
    case 0x7F226F54u: goto label_7F226F54;
    case 0x7F226F58u: goto label_7F226F58;
    case 0x7F226F5Cu: goto label_7F226F5C;
    case 0x7F226F60u: goto label_7F226F60;
    case 0x7F226F64u: goto label_7F226F64;
    case 0x7F226F68u: goto label_7F226F68;
    case 0x7F226F6Cu: goto label_7F226F6C;
    case 0x7F226F70u: goto label_7F226F70;
    case 0x7F226F74u: goto label_7F226F74;
    case 0x7F226F78u: goto label_7F226F78;
    case 0x7F226F7Cu: goto label_7F226F7C;
    case 0x7F226F80u: goto label_7F226F80;
    case 0x7F226F84u: goto label_7F226F84;
    case 0x7F226F88u: goto label_7F226F88;
    case 0x7F226F8Cu: goto label_7F226F8C;
    case 0x7F226F90u: goto label_7F226F90;
    case 0x7F226F94u: goto label_7F226F94;
    case 0x7F226F98u: goto label_7F226F98;
    case 0x7F226F9Cu: goto label_7F226F9C;
    case 0x7F226FA0u: goto label_7F226FA0;
    case 0x7F226FA4u: goto label_7F226FA4;
    case 0x7F226FA8u: goto label_7F226FA8;
    case 0x7F226FACu: goto label_7F226FAC;
    case 0x7F226FB0u: goto label_7F226FB0;
    case 0x7F226FB4u: goto label_7F226FB4;
    case 0x7F226FB8u: goto label_7F226FB8;
    case 0x7F226FBCu: goto label_7F226FBC;
    case 0x7F226FC0u: goto label_7F226FC0;
    case 0x7F226FC4u: goto label_7F226FC4;
    case 0x7F226FC8u: goto label_7F226FC8;
    case 0x7F226FCCu: goto label_7F226FCC;
    case 0x7F226FD0u: goto label_7F226FD0;
    case 0x7F226FD4u: goto label_7F226FD4;
    case 0x7F226FD8u: goto label_7F226FD8;
    case 0x7F226FDCu: goto label_7F226FDC;
    case 0x7F226FE0u: goto label_7F226FE0;
    case 0x7F226FE4u: goto label_7F226FE4;
    case 0x7F226FE8u: goto label_7F226FE8;
    case 0x7F226FECu: goto label_7F226FEC;
    case 0x7F226FF0u: goto label_7F226FF0;
    case 0x7F226FF4u: goto label_7F226FF4;
    case 0x7F226FF8u: goto label_7F226FF8;
    case 0x7F226FFCu: goto label_7F226FFC;
    case 0x7F227000u: goto label_7F227000;
    case 0x7F227004u: goto label_7F227004;
    case 0x7F227008u: goto label_7F227008;
    case 0x7F22700Cu: goto label_7F22700C;
    case 0x7F227010u: goto label_7F227010;
    case 0x7F227014u: goto label_7F227014;
    case 0x7F227018u: goto label_7F227018;
    case 0x7F22701Cu: goto label_7F22701C;
    case 0x7F227020u: goto label_7F227020;
    case 0x7F227024u: goto label_7F227024;
    case 0x7F227028u: goto label_7F227028;
    case 0x7F22702Cu: goto label_7F22702C;
    case 0x7F227030u: goto label_7F227030;
    case 0x7F227034u: goto label_7F227034;
    case 0x7F227038u: goto label_7F227038;
    case 0x7F22703Cu: goto label_7F22703C;
    case 0x7F227040u: goto label_7F227040;
    case 0x7F227044u: goto label_7F227044;
    case 0x7F227048u: goto label_7F227048;
    case 0x7F22704Cu: goto label_7F22704C;
    case 0x7F227050u: goto label_7F227050;
    case 0x7F227054u: goto label_7F227054;
    case 0x7F227058u: goto label_7F227058;
    case 0x7F22705Cu: goto label_7F22705C;
    case 0x7F227060u: goto label_7F227060;
    case 0x7F227064u: goto label_7F227064;
    case 0x7F227068u: goto label_7F227068;
    case 0x7F22706Cu: goto label_7F22706C;
    case 0x7F227070u: goto label_7F227070;
    case 0x7F227074u: goto label_7F227074;
    case 0x7F227078u: goto label_7F227078;
    case 0x7F22707Cu: goto label_7F22707C;
    case 0x7F227080u: goto label_7F227080;
    case 0x7F227084u: goto label_7F227084;
    case 0x7F227088u: goto label_7F227088;
    case 0x7F22708Cu: goto label_7F22708C;
    case 0x7F227090u: goto label_7F227090;
    case 0x7F227094u: goto label_7F227094;
    case 0x7F227098u: goto label_7F227098;
    case 0x7F22709Cu: goto label_7F22709C;
    case 0x7F2270A0u: goto label_7F2270A0;
    case 0x7F2270A4u: goto label_7F2270A4;
    case 0x7F2270A8u: goto label_7F2270A8;
    case 0x7F2270ACu: goto label_7F2270AC;
    case 0x7F2270B0u: goto label_7F2270B0;
    case 0x7F2270B4u: goto label_7F2270B4;
    case 0x7F2270B8u: goto label_7F2270B8;
    case 0x7F2270BCu: goto label_7F2270BC;
    case 0x7F2270C0u: goto label_7F2270C0;
    case 0x7F2270C4u: goto label_7F2270C4;
    case 0x7F2270C8u: goto label_7F2270C8;
    case 0x7F2270CCu: goto label_7F2270CC;
    case 0x7F2270D0u: goto label_7F2270D0;
    case 0x7F2270D4u: goto label_7F2270D4;
    case 0x7F2270D8u: goto label_7F2270D8;
    case 0x7F2270DCu: goto label_7F2270DC;
    case 0x7F2270E0u: goto label_7F2270E0;
    case 0x7F2270E4u: goto label_7F2270E4;
    case 0x7F2270E8u: goto label_7F2270E8;
    case 0x7F2270ECu: goto label_7F2270EC;
    case 0x7F2270F0u: goto label_7F2270F0;
    case 0x7F2270F4u: goto label_7F2270F4;
    case 0x7F2270F8u: goto label_7F2270F8;
    case 0x7F2270FCu: goto label_7F2270FC;
    case 0x7F227100u: goto label_7F227100;
    case 0x7F227104u: goto label_7F227104;
    case 0x7F227108u: goto label_7F227108;
    case 0x7F22710Cu: goto label_7F22710C;
    case 0x7F227110u: goto label_7F227110;
    case 0x7F227114u: goto label_7F227114;
    case 0x7F227118u: goto label_7F227118;
    case 0x7F22711Cu: goto label_7F22711C;
    case 0x7F227120u: goto label_7F227120;
    case 0x7F227124u: goto label_7F227124;
    case 0x7F227128u: goto label_7F227128;
    case 0x7F22712Cu: goto label_7F22712C;
    case 0x7F227130u: goto label_7F227130;
    case 0x7F227134u: goto label_7F227134;
    case 0x7F227138u: goto label_7F227138;
    case 0x7F22713Cu: goto label_7F22713C;
    case 0x7F227140u: goto label_7F227140;
    case 0x7F227144u: goto label_7F227144;
    case 0x7F227148u: goto label_7F227148;
    case 0x7F22714Cu: goto label_7F22714C;
    case 0x7F227150u: goto label_7F227150;
    case 0x7F227154u: goto label_7F227154;
    case 0x7F227158u: goto label_7F227158;
    case 0x7F22715Cu: goto label_7F22715C;
    case 0x7F227160u: goto label_7F227160;
    case 0x7F227164u: goto label_7F227164;
    case 0x7F227168u: goto label_7F227168;
    case 0x7F22716Cu: goto label_7F22716C;
    case 0x7F227170u: goto label_7F227170;
    case 0x7F227174u: goto label_7F227174;
    case 0x7F227178u: goto label_7F227178;
    case 0x7F22717Cu: goto label_7F22717C;
    case 0x7F227180u: goto label_7F227180;
    case 0x7F227184u: goto label_7F227184;
    case 0x7F227188u: goto label_7F227188;
    case 0x7F22718Cu: goto label_7F22718C;
    case 0x7F227190u: goto label_7F227190;
    case 0x7F227194u: goto label_7F227194;
    case 0x7F227198u: goto label_7F227198;
    case 0x7F22719Cu: goto label_7F22719C;
    case 0x7F2271A0u: goto label_7F2271A0;
    case 0x7F2271A4u: goto label_7F2271A4;
    case 0x7F2271A8u: goto label_7F2271A8;
    case 0x7F2271ACu: goto label_7F2271AC;
    case 0x7F2271B0u: goto label_7F2271B0;
    case 0x7F2271B4u: goto label_7F2271B4;
    case 0x7F2271B8u: goto label_7F2271B8;
    case 0x7F2271BCu: goto label_7F2271BC;
    case 0x7F2271C0u: goto label_7F2271C0;
    case 0x7F2271C4u: goto label_7F2271C4;
    case 0x7F2271C8u: goto label_7F2271C8;
    case 0x7F2271CCu: goto label_7F2271CC;
    case 0x7F2271D0u: goto label_7F2271D0;
    case 0x7F2271D4u: goto label_7F2271D4;
    case 0x7F2271D8u: goto label_7F2271D8;
    case 0x7F2271DCu: goto label_7F2271DC;
    case 0x7F2271E0u: goto label_7F2271E0;
    case 0x7F2271E4u: goto label_7F2271E4;
    case 0x7F2271E8u: goto label_7F2271E8;
    case 0x7F2271ECu: goto label_7F2271EC;
    case 0x7F2271F0u: goto label_7F2271F0;
    case 0x7F2271F4u: goto label_7F2271F4;
    case 0x7F2271F8u: goto label_7F2271F8;
    case 0x7F2271FCu: goto label_7F2271FC;
    case 0x7F227200u: goto label_7F227200;
    case 0x7F227204u: goto label_7F227204;
    case 0x7F227208u: goto label_7F227208;
    case 0x7F22720Cu: goto label_7F22720C;
    case 0x7F227210u: goto label_7F227210;
    case 0x7F227214u: goto label_7F227214;
    case 0x7F227218u: goto label_7F227218;
    case 0x7F22721Cu: goto label_7F22721C;
    case 0x7F227220u: goto label_7F227220;
    case 0x7F227224u: goto label_7F227224;
    case 0x7F227228u: goto label_7F227228;
    case 0x7F22722Cu: goto label_7F22722C;
    case 0x7F227230u: goto label_7F227230;
    case 0x7F227234u: goto label_7F227234;
    case 0x7F227238u: goto label_7F227238;
    case 0x7F22723Cu: goto label_7F22723C;
    case 0x7F227240u: goto label_7F227240;
    case 0x7F227244u: goto label_7F227244;
    case 0x7F227248u: goto label_7F227248;
    case 0x7F22724Cu: goto label_7F22724C;
    case 0x7F227250u: goto label_7F227250;
    case 0x7F227254u: goto label_7F227254;
    case 0x7F227258u: goto label_7F227258;
    case 0x7F22725Cu: goto label_7F22725C;
    case 0x7F227260u: goto label_7F227260;
    case 0x7F227264u: goto label_7F227264;
    case 0x7F227268u: goto label_7F227268;
    case 0x7F22726Cu: goto label_7F22726C;
    case 0x7F227270u: goto label_7F227270;
    case 0x7F227274u: goto label_7F227274;
    case 0x7F227278u: goto label_7F227278;
    case 0x7F22727Cu: goto label_7F22727C;
    case 0x7F227280u: goto label_7F227280;
    case 0x7F227284u: goto label_7F227284;
    case 0x7F227288u: goto label_7F227288;
    case 0x7F22728Cu: goto label_7F22728C;
    case 0x7F227290u: goto label_7F227290;
    case 0x7F227294u: goto label_7F227294;
    case 0x7F227298u: goto label_7F227298;
    case 0x7F22729Cu: goto label_7F22729C;
    case 0x7F2272A0u: goto label_7F2272A0;
    case 0x7F2272A4u: goto label_7F2272A4;
    case 0x7F2272A8u: goto label_7F2272A8;
    case 0x7F2272ACu: goto label_7F2272AC;
    case 0x7F2272B0u: goto label_7F2272B0;
    case 0x7F2272B4u: goto label_7F2272B4;
    case 0x7F2272B8u: goto label_7F2272B8;
    case 0x7F2272BCu: goto label_7F2272BC;
    case 0x7F2272C0u: goto label_7F2272C0;
    case 0x7F2272C4u: goto label_7F2272C4;
    case 0x7F2272C8u: goto label_7F2272C8;
    case 0x7F2272CCu: goto label_7F2272CC;
    case 0x7F2272D0u: goto label_7F2272D0;
    case 0x7F2272D4u: goto label_7F2272D4;
    case 0x7F2272D8u: goto label_7F2272D8;
    case 0x7F2272DCu: goto label_7F2272DC;
    case 0x7F2272E0u: goto label_7F2272E0;
    case 0x7F2272E4u: goto label_7F2272E4;
    case 0x7F2272E8u: goto label_7F2272E8;
    case 0x7F2272ECu: goto label_7F2272EC;
    case 0x7F2272F0u: goto label_7F2272F0;
    case 0x7F2272F4u: goto label_7F2272F4;
    case 0x7F2272F8u: goto label_7F2272F8;
    case 0x7F2272FCu: goto label_7F2272FC;
    case 0x7F227300u: goto label_7F227300;
    case 0x7F227304u: goto label_7F227304;
    case 0x7F227308u: goto label_7F227308;
    case 0x7F22730Cu: goto label_7F22730C;
    case 0x7F227310u: goto label_7F227310;
    case 0x7F227314u: goto label_7F227314;
    case 0x7F227318u: goto label_7F227318;
    case 0x7F22731Cu: goto label_7F22731C;
    case 0x7F227320u: goto label_7F227320;
    case 0x7F227324u: goto label_7F227324;
    case 0x7F227328u: goto label_7F227328;
    case 0x7F22732Cu: goto label_7F22732C;
    case 0x7F227330u: goto label_7F227330;
    case 0x7F227334u: goto label_7F227334;
    case 0x7F227338u: goto label_7F227338;
    case 0x7F22733Cu: goto label_7F22733C;
    case 0x7F227340u: goto label_7F227340;
    case 0x7F227344u: goto label_7F227344;
    case 0x7F227348u: goto label_7F227348;
    case 0x7F22734Cu: goto label_7F22734C;
    case 0x7F227350u: goto label_7F227350;
    case 0x7F227354u: goto label_7F227354;
    case 0x7F227358u: goto label_7F227358;
    case 0x7F22735Cu: goto label_7F22735C;
    case 0x7F227360u: goto label_7F227360;
    case 0x7F227364u: goto label_7F227364;
    case 0x7F227368u: goto label_7F227368;
    case 0x7F22736Cu: goto label_7F22736C;
    case 0x7F227370u: goto label_7F227370;
    case 0x7F227374u: goto label_7F227374;
    case 0x7F227378u: goto label_7F227378;
    case 0x7F22737Cu: goto label_7F22737C;
    case 0x7F227380u: goto label_7F227380;
    case 0x7F227384u: goto label_7F227384;
    case 0x7F227388u: goto label_7F227388;
    case 0x7F22738Cu: goto label_7F22738C;
    case 0x7F227390u: goto label_7F227390;
    case 0x7F227394u: goto label_7F227394;
    case 0x7F227398u: goto label_7F227398;
    case 0x7F22739Cu: goto label_7F22739C;
    case 0x7F2273A0u: goto label_7F2273A0;
    case 0x7F2273A4u: goto label_7F2273A4;
    case 0x7F2273A8u: goto label_7F2273A8;
    case 0x7F2273ACu: goto label_7F2273AC;
    case 0x7F2273B0u: goto label_7F2273B0;
    case 0x7F2273B4u: goto label_7F2273B4;
    case 0x7F2273B8u: goto label_7F2273B8;
    case 0x7F2273BCu: goto label_7F2273BC;
    case 0x7F2273C0u: goto label_7F2273C0;
    case 0x7F2273C4u: goto label_7F2273C4;
    case 0x7F2273C8u: goto label_7F2273C8;
    case 0x7F2273CCu: goto label_7F2273CC;
    case 0x7F2273D0u: goto label_7F2273D0;
    case 0x7F2273D4u: goto label_7F2273D4;
    case 0x7F2273D8u: goto label_7F2273D8;
    case 0x7F2273DCu: goto label_7F2273DC;
    case 0x7F2273E0u: goto label_7F2273E0;
    case 0x7F2273E4u: goto label_7F2273E4;
    case 0x7F2273E8u: goto label_7F2273E8;
    case 0x7F2273ECu: goto label_7F2273EC;
    case 0x7F2273F0u: goto label_7F2273F0;
    case 0x7F2273F4u: goto label_7F2273F4;
    case 0x7F2273F8u: goto label_7F2273F8;
    case 0x7F2273FCu: goto label_7F2273FC;
    case 0x7F227400u: goto label_7F227400;
    case 0x7F227404u: goto label_7F227404;
    case 0x7F227408u: goto label_7F227408;
    case 0x7F22740Cu: goto label_7F22740C;
    case 0x7F227410u: goto label_7F227410;
    case 0x7F227414u: goto label_7F227414;
    case 0x7F227418u: goto label_7F227418;
    case 0x7F22741Cu: goto label_7F22741C;
    case 0x7F227420u: goto label_7F227420;
    case 0x7F227424u: goto label_7F227424;
    case 0x7F227428u: goto label_7F227428;
    case 0x7F22742Cu: goto label_7F22742C;
    case 0x7F227430u: goto label_7F227430;
    case 0x7F227434u: goto label_7F227434;
    case 0x7F227438u: goto label_7F227438;
    case 0x7F22743Cu: goto label_7F22743C;
    case 0x7F227440u: goto label_7F227440;
    case 0x7F227444u: goto label_7F227444;
    case 0x7F227448u: goto label_7F227448;
    case 0x7F22744Cu: goto label_7F22744C;
    case 0x7F227450u: goto label_7F227450;
    case 0x7F227454u: goto label_7F227454;
    case 0x7F227458u: goto label_7F227458;
    case 0x7F22745Cu: goto label_7F22745C;
    case 0x7F227460u: goto label_7F227460;
    case 0x7F227464u: goto label_7F227464;
    case 0x7F227468u: goto label_7F227468;
    case 0x7F22746Cu: goto label_7F22746C;
    case 0x7F227470u: goto label_7F227470;
    case 0x7F227474u: goto label_7F227474;
    case 0x7F227478u: goto label_7F227478;
    case 0x7F22747Cu: goto label_7F22747C;
    case 0x7F227480u: goto label_7F227480;
    case 0x7F227484u: goto label_7F227484;
    case 0x7F227488u: goto label_7F227488;
    case 0x7F22748Cu: goto label_7F22748C;
    case 0x7F227490u: goto label_7F227490;
    case 0x7F227494u: goto label_7F227494;
    case 0x7F227498u: goto label_7F227498;
    case 0x7F22749Cu: goto label_7F22749C;
    case 0x7F2274A0u: goto label_7F2274A0;
    case 0x7F2274A4u: goto label_7F2274A4;
    case 0x7F2274A8u: goto label_7F2274A8;
    case 0x7F2274ACu: goto label_7F2274AC;
    case 0x7F2274B0u: goto label_7F2274B0;
    case 0x7F2274B4u: goto label_7F2274B4;
    case 0x7F2274B8u: goto label_7F2274B8;
    case 0x7F2274BCu: goto label_7F2274BC;
    case 0x7F2274C0u: goto label_7F2274C0;
    case 0x7F2274C4u: goto label_7F2274C4;
    case 0x7F2274C8u: goto label_7F2274C8;
    case 0x7F2274CCu: goto label_7F2274CC;
    case 0x7F2274D0u: goto label_7F2274D0;
    case 0x7F2274D4u: goto label_7F2274D4;
    case 0x7F2274D8u: goto label_7F2274D8;
    case 0x7F2274DCu: goto label_7F2274DC;
    case 0x7F2274E0u: goto label_7F2274E0;
    case 0x7F2274E4u: goto label_7F2274E4;
    case 0x7F2274E8u: goto label_7F2274E8;
    case 0x7F2274ECu: goto label_7F2274EC;
    case 0x7F2274F0u: goto label_7F2274F0;
    case 0x7F2274F4u: goto label_7F2274F4;
    case 0x7F2274F8u: goto label_7F2274F8;
    case 0x7F2274FCu: goto label_7F2274FC;
    case 0x7F227500u: goto label_7F227500;
    case 0x7F227504u: goto label_7F227504;
    case 0x7F227508u: goto label_7F227508;
    case 0x7F22750Cu: goto label_7F22750C;
    case 0x7F227510u: goto label_7F227510;
    case 0x7F227514u: goto label_7F227514;
    case 0x7F227518u: goto label_7F227518;
    case 0x7F22751Cu: goto label_7F22751C;
    case 0x7F227520u: goto label_7F227520;
    case 0x7F227524u: goto label_7F227524;
    case 0x7F227528u: goto label_7F227528;
    case 0x7F22752Cu: goto label_7F22752C;
    case 0x7F227530u: goto label_7F227530;
    case 0x7F227534u: goto label_7F227534;
    case 0x7F227538u: goto label_7F227538;
    case 0x7F22753Cu: goto label_7F22753C;
    case 0x7F227540u: goto label_7F227540;
    case 0x7F227544u: goto label_7F227544;
    case 0x7F227548u: goto label_7F227548;
    case 0x7F22754Cu: goto label_7F22754C;
    case 0x7F227550u: goto label_7F227550;
    case 0x7F227554u: goto label_7F227554;
    case 0x7F227558u: goto label_7F227558;
    case 0x7F22755Cu: goto label_7F22755C;
    case 0x7F227560u: goto label_7F227560;
    case 0x7F227564u: goto label_7F227564;
    case 0x7F227568u: goto label_7F227568;
    case 0x7F22756Cu: goto label_7F22756C;
    case 0x7F227570u: goto label_7F227570;
    case 0x7F227574u: goto label_7F227574;
    case 0x7F227578u: goto label_7F227578;
    case 0x7F22757Cu: goto label_7F22757C;
    case 0x7F227580u: goto label_7F227580;
    case 0x7F227584u: goto label_7F227584;
    case 0x7F227588u: goto label_7F227588;
    case 0x7F22758Cu: goto label_7F22758C;
    case 0x7F227590u: goto label_7F227590;
    case 0x7F227594u: goto label_7F227594;
    case 0x7F227598u: goto label_7F227598;
    case 0x7F22759Cu: goto label_7F22759C;
    case 0x7F2275A0u: goto label_7F2275A0;
    case 0x7F2275A4u: goto label_7F2275A4;
    case 0x7F2275A8u: goto label_7F2275A8;
    case 0x7F2275ACu: goto label_7F2275AC;
    case 0x7F2275B0u: goto label_7F2275B0;
    case 0x7F2275B4u: goto label_7F2275B4;
    case 0x7F2275B8u: goto label_7F2275B8;
    case 0x7F2275BCu: goto label_7F2275BC;
    case 0x7F2275C0u: goto label_7F2275C0;
    case 0x7F2275C4u: goto label_7F2275C4;
    case 0x7F2275C8u: goto label_7F2275C8;
    case 0x7F2275CCu: goto label_7F2275CC;
    case 0x7F2275D0u: goto label_7F2275D0;
    case 0x7F2275D4u: goto label_7F2275D4;
    case 0x7F2275D8u: goto label_7F2275D8;
    case 0x7F2275DCu: goto label_7F2275DC;
    case 0x7F2275E0u: goto label_7F2275E0;
    case 0x7F2275E4u: goto label_7F2275E4;
    case 0x7F2275E8u: goto label_7F2275E8;
    case 0x7F2275ECu: goto label_7F2275EC;
    case 0x7F2275F0u: goto label_7F2275F0;
    case 0x7F2275F4u: goto label_7F2275F4;
    case 0x7F2275F8u: goto label_7F2275F8;
    case 0x7F2275FCu: goto label_7F2275FC;
    case 0x7F227600u: goto label_7F227600;
    case 0x7F227604u: goto label_7F227604;
    case 0x7F227608u: goto label_7F227608;
    case 0x7F22760Cu: goto label_7F22760C;
    case 0x7F227610u: goto label_7F227610;
    case 0x7F227614u: goto label_7F227614;
    case 0x7F227618u: goto label_7F227618;
    case 0x7F22761Cu: goto label_7F22761C;
    case 0x7F227620u: goto label_7F227620;
    case 0x7F227624u: goto label_7F227624;
    case 0x7F227628u: goto label_7F227628;
    case 0x7F22762Cu: goto label_7F22762C;
    case 0x7F227630u: goto label_7F227630;
    case 0x7F227634u: goto label_7F227634;
    case 0x7F227638u: goto label_7F227638;
    case 0x7F22763Cu: goto label_7F22763C;
    case 0x7F227640u: goto label_7F227640;
    case 0x7F227644u: goto label_7F227644;
    case 0x7F227648u: goto label_7F227648;
    case 0x7F22764Cu: goto label_7F22764C;
    case 0x7F227650u: goto label_7F227650;
    case 0x7F227654u: goto label_7F227654;
    case 0x7F227658u: goto label_7F227658;
    case 0x7F22765Cu: goto label_7F22765C;
    case 0x7F227660u: goto label_7F227660;
    case 0x7F227664u: goto label_7F227664;
    case 0x7F227668u: goto label_7F227668;
    case 0x7F22766Cu: goto label_7F22766C;
    case 0x7F227670u: goto label_7F227670;
    case 0x7F227674u: goto label_7F227674;
    case 0x7F227678u: goto label_7F227678;
    case 0x7F22767Cu: goto label_7F22767C;
    case 0x7F227680u: goto label_7F227680;
    case 0x7F227684u: goto label_7F227684;
    case 0x7F227688u: goto label_7F227688;
    case 0x7F22768Cu: goto label_7F22768C;
    case 0x7F227690u: goto label_7F227690;
    case 0x7F227694u: goto label_7F227694;
    case 0x7F227698u: goto label_7F227698;
    case 0x7F22769Cu: goto label_7F22769C;
    case 0x7F2276A0u: goto label_7F2276A0;
    case 0x7F2276A4u: goto label_7F2276A4;
    case 0x7F2276A8u: goto label_7F2276A8;
    case 0x7F2276ACu: goto label_7F2276AC;
    case 0x7F2276B0u: goto label_7F2276B0;
    case 0x7F2276B4u: goto label_7F2276B4;
    case 0x7F2276B8u: goto label_7F2276B8;
    case 0x7F2276BCu: goto label_7F2276BC;
    case 0x7F2276C0u: goto label_7F2276C0;
    case 0x7F2276C4u: goto label_7F2276C4;
    case 0x7F2276C8u: goto label_7F2276C8;
    case 0x7F2276CCu: goto label_7F2276CC;
    case 0x7F2276D0u: goto label_7F2276D0;
    case 0x7F2276D4u: goto label_7F2276D4;
    case 0x7F2276D8u: goto label_7F2276D8;
    case 0x7F2276DCu: goto label_7F2276DC;
    case 0x7F2276E0u: goto label_7F2276E0;
    case 0x7F2276E4u: goto label_7F2276E4;
    case 0x7F2276E8u: goto label_7F2276E8;
    case 0x7F2276ECu: goto label_7F2276EC;
    case 0x7F2276F0u: goto label_7F2276F0;
    case 0x7F2276F4u: goto label_7F2276F4;
    case 0x7F2276F8u: goto label_7F2276F8;
    case 0x7F2276FCu: goto label_7F2276FC;
    case 0x7F227700u: goto label_7F227700;
    case 0x7F227704u: goto label_7F227704;
    case 0x7F227708u: goto label_7F227708;
    case 0x7F22770Cu: goto label_7F22770C;
    case 0x7F227710u: goto label_7F227710;
    case 0x7F227714u: goto label_7F227714;
    case 0x7F227718u: goto label_7F227718;
    case 0x7F22771Cu: goto label_7F22771C;
    case 0x7F227720u: goto label_7F227720;
    case 0x7F227724u: goto label_7F227724;
    case 0x7F227728u: goto label_7F227728;
    case 0x7F22772Cu: goto label_7F22772C;
    case 0x7F227730u: goto label_7F227730;
    case 0x7F227734u: goto label_7F227734;
    case 0x7F227738u: goto label_7F227738;
    case 0x7F22773Cu: goto label_7F22773C;
    case 0x7F227740u: goto label_7F227740;
    case 0x7F227744u: goto label_7F227744;
    case 0x7F227748u: goto label_7F227748;
    case 0x7F22774Cu: goto label_7F22774C;
    case 0x7F227750u: goto label_7F227750;
    case 0x7F227754u: goto label_7F227754;
    case 0x7F227758u: goto label_7F227758;
    case 0x7F22775Cu: goto label_7F22775C;
    case 0x7F227760u: goto label_7F227760;
    case 0x7F227764u: goto label_7F227764;
    case 0x7F227768u: goto label_7F227768;
    case 0x7F22776Cu: goto label_7F22776C;
    case 0x7F227770u: goto label_7F227770;
    case 0x7F227774u: goto label_7F227774;
    case 0x7F227778u: goto label_7F227778;
    case 0x7F22777Cu: goto label_7F22777C;
    case 0x7F227780u: goto label_7F227780;
    case 0x7F227784u: goto label_7F227784;
    case 0x7F227788u: goto label_7F227788;
    case 0x7F22778Cu: goto label_7F22778C;
    case 0x7F227790u: goto label_7F227790;
    case 0x7F227794u: goto label_7F227794;
    case 0x7F227798u: goto label_7F227798;
    case 0x7F22779Cu: goto label_7F22779C;
    case 0x7F2277A0u: goto label_7F2277A0;
    case 0x7F2277A4u: goto label_7F2277A4;
    case 0x7F2277A8u: goto label_7F2277A8;
    case 0x7F2277ACu: goto label_7F2277AC;
    case 0x7F2277B0u: goto label_7F2277B0;
    case 0x7F2277B4u: goto label_7F2277B4;
    case 0x7F2277B8u: goto label_7F2277B8;
    case 0x7F2277BCu: goto label_7F2277BC;
    case 0x7F2277C0u: goto label_7F2277C0;
    case 0x7F2277C4u: goto label_7F2277C4;
    case 0x7F2277C8u: goto label_7F2277C8;
    case 0x7F2277CCu: goto label_7F2277CC;
    case 0x7F2277D0u: goto label_7F2277D0;
    case 0x7F2277D4u: goto label_7F2277D4;
    case 0x7F2277D8u: goto label_7F2277D8;
    case 0x7F2277DCu: goto label_7F2277DC;
    case 0x7F2277E0u: goto label_7F2277E0;
    case 0x7F2277E4u: goto label_7F2277E4;
    case 0x7F2277E8u: goto label_7F2277E8;
    case 0x7F2277ECu: goto label_7F2277EC;
    case 0x7F2277F0u: goto label_7F2277F0;
    case 0x7F2277F4u: goto label_7F2277F4;
    case 0x7F2277F8u: goto label_7F2277F8;
    case 0x7F2277FCu: goto label_7F2277FC;
    case 0x7F227800u: goto label_7F227800;
    case 0x7F227804u: goto label_7F227804;
    case 0x7F227808u: goto label_7F227808;
    case 0x7F22780Cu: goto label_7F22780C;
    case 0x7F227810u: goto label_7F227810;
    case 0x7F227814u: goto label_7F227814;
    case 0x7F227818u: goto label_7F227818;
    case 0x7F22781Cu: goto label_7F22781C;
    case 0x7F227820u: goto label_7F227820;
    case 0x7F227824u: goto label_7F227824;
    case 0x7F227828u: goto label_7F227828;
    case 0x7F22782Cu: goto label_7F22782C;
    case 0x7F227830u: goto label_7F227830;
    case 0x7F227834u: goto label_7F227834;
    case 0x7F227838u: goto label_7F227838;
    case 0x7F22783Cu: goto label_7F22783C;
    case 0x7F227840u: goto label_7F227840;
    case 0x7F227844u: goto label_7F227844;
    case 0x7F227848u: goto label_7F227848;
    case 0x7F22784Cu: goto label_7F22784C;
    case 0x7F227850u: goto label_7F227850;
    case 0x7F227854u: goto label_7F227854;
    case 0x7F227858u: goto label_7F227858;
    case 0x7F22785Cu: goto label_7F22785C;
    case 0x7F227860u: goto label_7F227860;
    case 0x7F227864u: goto label_7F227864;
    case 0x7F227868u: goto label_7F227868;
    case 0x7F22786Cu: goto label_7F22786C;
    case 0x7F227870u: goto label_7F227870;
    case 0x7F227874u: goto label_7F227874;
    case 0x7F227878u: goto label_7F227878;
    case 0x7F22787Cu: goto label_7F22787C;
    case 0x7F227880u: goto label_7F227880;
    case 0x7F227884u: goto label_7F227884;
    case 0x7F227888u: goto label_7F227888;
    case 0x7F22788Cu: goto label_7F22788C;
    case 0x7F227890u: goto label_7F227890;
    case 0x7F227894u: goto label_7F227894;
    case 0x7F227898u: goto label_7F227898;
    case 0x7F22789Cu: goto label_7F22789C;
    case 0x7F2278A0u: goto label_7F2278A0;
    case 0x7F2278A4u: goto label_7F2278A4;
    case 0x7F2278A8u: goto label_7F2278A8;
    case 0x7F2278ACu: goto label_7F2278AC;
    case 0x7F2278B0u: goto label_7F2278B0;
    case 0x7F2278B4u: goto label_7F2278B4;
    case 0x7F2278B8u: goto label_7F2278B8;
    case 0x7F2278BCu: goto label_7F2278BC;
    case 0x7F2278C0u: goto label_7F2278C0;
    case 0x7F2278C4u: goto label_7F2278C4;
    case 0x7F2278C8u: goto label_7F2278C8;
    case 0x7F2278CCu: goto label_7F2278CC;
    case 0x7F2278D0u: goto label_7F2278D0;
    case 0x7F2278D4u: goto label_7F2278D4;
    case 0x7F2278D8u: goto label_7F2278D8;
    case 0x7F2278DCu: goto label_7F2278DC;
    case 0x7F2278E0u: goto label_7F2278E0;
    case 0x7F2278E4u: goto label_7F2278E4;
    case 0x7F2278E8u: goto label_7F2278E8;
    case 0x7F2278ECu: goto label_7F2278EC;
    case 0x7F2278F0u: goto label_7F2278F0;
    case 0x7F2278F4u: goto label_7F2278F4;
    case 0x7F2278F8u: goto label_7F2278F8;
    case 0x7F2278FCu: goto label_7F2278FC;
    case 0x7F227900u: goto label_7F227900;
    case 0x7F227904u: goto label_7F227904;
    case 0x7F227908u: goto label_7F227908;
    case 0x7F22790Cu: goto label_7F22790C;
    case 0x7F227910u: goto label_7F227910;
    case 0x7F227914u: goto label_7F227914;
    case 0x7F227918u: goto label_7F227918;
    case 0x7F22791Cu: goto label_7F22791C;
    case 0x7F227920u: goto label_7F227920;
    case 0x7F227924u: goto label_7F227924;
    case 0x7F227928u: goto label_7F227928;
    case 0x7F22792Cu: goto label_7F22792C;
    case 0x7F227930u: goto label_7F227930;
    case 0x7F227934u: goto label_7F227934;
    case 0x7F227938u: goto label_7F227938;
    case 0x7F22793Cu: goto label_7F22793C;
    case 0x7F227940u: goto label_7F227940;
    case 0x7F227944u: goto label_7F227944;
    case 0x7F227948u: goto label_7F227948;
    case 0x7F22794Cu: goto label_7F22794C;
    case 0x7F227950u: goto label_7F227950;
    case 0x7F227954u: goto label_7F227954;
    case 0x7F227958u: goto label_7F227958;
    case 0x7F22795Cu: goto label_7F22795C;
    case 0x7F227960u: goto label_7F227960;
    case 0x7F227964u: goto label_7F227964;
    case 0x7F227968u: goto label_7F227968;
    case 0x7F22796Cu: goto label_7F22796C;
    case 0x7F227970u: goto label_7F227970;
    case 0x7F227974u: goto label_7F227974;
    case 0x7F227978u: goto label_7F227978;
    case 0x7F22797Cu: goto label_7F22797C;
    case 0x7F227980u: goto label_7F227980;
    case 0x7F227984u: goto label_7F227984;
    case 0x7F227988u: goto label_7F227988;
    case 0x7F22798Cu: goto label_7F22798C;
    case 0x7F227990u: goto label_7F227990;
    case 0x7F227994u: goto label_7F227994;
    case 0x7F227998u: goto label_7F227998;
    case 0x7F22799Cu: goto label_7F22799C;
    case 0x7F2279A0u: goto label_7F2279A0;
    case 0x7F2279A4u: goto label_7F2279A4;
    case 0x7F2279A8u: goto label_7F2279A8;
    case 0x7F2279ACu: goto label_7F2279AC;
    case 0x7F2279B0u: goto label_7F2279B0;
    case 0x7F2279B4u: goto label_7F2279B4;
    case 0x7F2279B8u: goto label_7F2279B8;
    case 0x7F2279BCu: goto label_7F2279BC;
    case 0x7F2279C0u: goto label_7F2279C0;
    case 0x7F2279C4u: goto label_7F2279C4;
    case 0x7F2279C8u: goto label_7F2279C8;
    case 0x7F2279CCu: goto label_7F2279CC;
    case 0x7F2279D0u: goto label_7F2279D0;
    case 0x7F2279D4u: goto label_7F2279D4;
    case 0x7F2279D8u: goto label_7F2279D8;
    case 0x7F2279DCu: goto label_7F2279DC;
    case 0x7F2279E0u: goto label_7F2279E0;
    case 0x7F2279E4u: goto label_7F2279E4;
    case 0x7F2279E8u: goto label_7F2279E8;
    case 0x7F2279ECu: goto label_7F2279EC;
    case 0x7F2279F0u: goto label_7F2279F0;
    case 0x7F2279F4u: goto label_7F2279F4;
    case 0x7F2279F8u: goto label_7F2279F8;
    case 0x7F2279FCu: goto label_7F2279FC;
    case 0x7F227A00u: goto label_7F227A00;
    case 0x7F227A04u: goto label_7F227A04;
    case 0x7F227A08u: goto label_7F227A08;
    case 0x7F227A0Cu: goto label_7F227A0C;
    case 0x7F227A10u: goto label_7F227A10;
    case 0x7F227A14u: goto label_7F227A14;
    case 0x7F227A18u: goto label_7F227A18;
    case 0x7F227A1Cu: goto label_7F227A1C;
    case 0x7F227A20u: goto label_7F227A20;
    case 0x7F227A24u: goto label_7F227A24;
    case 0x7F227A28u: goto label_7F227A28;
    case 0x7F227A2Cu: goto label_7F227A2C;
    case 0x7F227A30u: goto label_7F227A30;
    case 0x7F227A34u: goto label_7F227A34;
    case 0x7F227A38u: goto label_7F227A38;
    case 0x7F227A3Cu: goto label_7F227A3C;
    case 0x7F227A40u: goto label_7F227A40;
    case 0x7F227A44u: goto label_7F227A44;
    case 0x7F227A48u: goto label_7F227A48;
    case 0x7F227A4Cu: goto label_7F227A4C;
    case 0x7F227A50u: goto label_7F227A50;
    case 0x7F227A54u: goto label_7F227A54;
    case 0x7F227A58u: goto label_7F227A58;
    case 0x7F227A5Cu: goto label_7F227A5C;
    case 0x7F227A60u: goto label_7F227A60;
    case 0x7F227A64u: goto label_7F227A64;
    case 0x7F227A68u: goto label_7F227A68;
    case 0x7F227A6Cu: goto label_7F227A6C;
    case 0x7F227A70u: goto label_7F227A70;
    case 0x7F227A74u: goto label_7F227A74;
    case 0x7F227A78u: goto label_7F227A78;
    case 0x7F227A7Cu: goto label_7F227A7C;
    case 0x7F227A80u: goto label_7F227A80;
    case 0x7F227A84u: goto label_7F227A84;
    case 0x7F227A88u: goto label_7F227A88;
    case 0x7F227A8Cu: goto label_7F227A8C;
    case 0x7F227A90u: goto label_7F227A90;
    case 0x7F227A94u: goto label_7F227A94;
    case 0x7F227A98u: goto label_7F227A98;
    case 0x7F227A9Cu: goto label_7F227A9C;
    case 0x7F227AA0u: goto label_7F227AA0;
    case 0x7F227AA4u: goto label_7F227AA4;
    case 0x7F227AA8u: goto label_7F227AA8;
    case 0x7F227AACu: goto label_7F227AAC;
    case 0x7F227AB0u: goto label_7F227AB0;
    case 0x7F227AB4u: goto label_7F227AB4;
    case 0x7F227AB8u: goto label_7F227AB8;
    case 0x7F227ABCu: goto label_7F227ABC;
    case 0x7F227AC0u: goto label_7F227AC0;
    case 0x7F227AC4u: goto label_7F227AC4;
    case 0x7F227AC8u: goto label_7F227AC8;
    case 0x7F227ACCu: goto label_7F227ACC;
    case 0x7F227AD0u: goto label_7F227AD0;
    case 0x7F227AD4u: goto label_7F227AD4;
    case 0x7F227AD8u: goto label_7F227AD8;
    case 0x7F227ADCu: goto label_7F227ADC;
    case 0x7F227AE0u: goto label_7F227AE0;
    case 0x7F227AE4u: goto label_7F227AE4;
    case 0x7F227AE8u: goto label_7F227AE8;
    case 0x7F227AECu: goto label_7F227AEC;
    case 0x7F227AF0u: goto label_7F227AF0;
    case 0x7F227AF4u: goto label_7F227AF4;
    case 0x7F227AF8u: goto label_7F227AF8;
    case 0x7F227AFCu: goto label_7F227AFC;
    case 0x7F227B00u: goto label_7F227B00;
    case 0x7F227B04u: goto label_7F227B04;
    case 0x7F227B08u: goto label_7F227B08;
    case 0x7F227B0Cu: goto label_7F227B0C;
    case 0x7F227B10u: goto label_7F227B10;
    case 0x7F227B14u: goto label_7F227B14;
    case 0x7F227B18u: goto label_7F227B18;
    case 0x7F227B1Cu: goto label_7F227B1C;
    case 0x7F227B20u: goto label_7F227B20;
    case 0x7F227B24u: goto label_7F227B24;
    case 0x7F227B28u: goto label_7F227B28;
    case 0x7F227B2Cu: goto label_7F227B2C;
    case 0x7F227B30u: goto label_7F227B30;
    case 0x7F227B34u: goto label_7F227B34;
    case 0x7F227B38u: goto label_7F227B38;
    case 0x7F227B3Cu: goto label_7F227B3C;
    case 0x7F227B40u: goto label_7F227B40;
    case 0x7F227B44u: goto label_7F227B44;
    case 0x7F227B48u: goto label_7F227B48;
    case 0x7F227B4Cu: goto label_7F227B4C;
    case 0x7F227B50u: goto label_7F227B50;
    case 0x7F227B54u: goto label_7F227B54;
    case 0x7F227B58u: goto label_7F227B58;
    case 0x7F227B5Cu: goto label_7F227B5C;
    case 0x7F227B60u: goto label_7F227B60;
    case 0x7F227B64u: goto label_7F227B64;
    case 0x7F227B68u: goto label_7F227B68;
    case 0x7F227B6Cu: goto label_7F227B6C;
    case 0x7F227B70u: goto label_7F227B70;
    case 0x7F227B74u: goto label_7F227B74;
    case 0x7F227B78u: goto label_7F227B78;
    case 0x7F227B7Cu: goto label_7F227B7C;
    case 0x7F227B80u: goto label_7F227B80;
    case 0x7F227B84u: goto label_7F227B84;
    case 0x7F227B88u: goto label_7F227B88;
    case 0x7F227B8Cu: goto label_7F227B8C;
    case 0x7F227B90u: goto label_7F227B90;
    case 0x7F227B94u: goto label_7F227B94;
    case 0x7F227B98u: goto label_7F227B98;
    case 0x7F227B9Cu: goto label_7F227B9C;
    case 0x7F227BA0u: goto label_7F227BA0;
    case 0x7F227BA4u: goto label_7F227BA4;
    case 0x7F227BA8u: goto label_7F227BA8;
    case 0x7F227BACu: goto label_7F227BAC;
    case 0x7F227BB0u: goto label_7F227BB0;
    case 0x7F227BB4u: goto label_7F227BB4;
    case 0x7F227BB8u: goto label_7F227BB8;
    case 0x7F227BBCu: goto label_7F227BBC;
    case 0x7F227BC0u: goto label_7F227BC0;
    case 0x7F227BC4u: goto label_7F227BC4;
    case 0x7F227BC8u: goto label_7F227BC8;
    case 0x7F227BCCu: goto label_7F227BCC;
    case 0x7F227BD0u: goto label_7F227BD0;
    case 0x7F227BD4u: goto label_7F227BD4;
    case 0x7F227BD8u: goto label_7F227BD8;
    case 0x7F227BDCu: goto label_7F227BDC;
    case 0x7F227BE0u: goto label_7F227BE0;
    case 0x7F227BE4u: goto label_7F227BE4;
    case 0x7F227BE8u: goto label_7F227BE8;
    case 0x7F227BECu: goto label_7F227BEC;
    case 0x7F227BF0u: goto label_7F227BF0;
    case 0x7F227BF4u: goto label_7F227BF4;
    case 0x7F227BF8u: goto label_7F227BF8;
    case 0x7F227BFCu: goto label_7F227BFC;
    case 0x7F227C00u: goto label_7F227C00;
    case 0x7F227C04u: goto label_7F227C04;
    case 0x7F227C08u: goto label_7F227C08;
    case 0x7F227C0Cu: goto label_7F227C0C;
    case 0x7F227C10u: goto label_7F227C10;
    case 0x7F227C14u: goto label_7F227C14;
    case 0x7F227C18u: goto label_7F227C18;
    case 0x7F227C1Cu: goto label_7F227C1C;
    case 0x7F227C20u: goto label_7F227C20;
    case 0x7F227C24u: goto label_7F227C24;
    case 0x7F227C28u: goto label_7F227C28;
    case 0x7F227C2Cu: goto label_7F227C2C;
    case 0x7F227C30u: goto label_7F227C30;
    case 0x7F227C34u: goto label_7F227C34;
    case 0x7F227C38u: goto label_7F227C38;
    case 0x7F227C3Cu: goto label_7F227C3C;
    case 0x7F227C40u: goto label_7F227C40;
    case 0x7F227C44u: goto label_7F227C44;
    case 0x7F227C48u: goto label_7F227C48;
    case 0x7F227C4Cu: goto label_7F227C4C;
    case 0x7F227C50u: goto label_7F227C50;
    case 0x7F227C54u: goto label_7F227C54;
    case 0x7F227C58u: goto label_7F227C58;
    case 0x7F227C5Cu: goto label_7F227C5C;
    case 0x7F227C60u: goto label_7F227C60;
    case 0x7F227C64u: goto label_7F227C64;
    case 0x7F227C68u: goto label_7F227C68;
    case 0x7F227C6Cu: goto label_7F227C6C;
    case 0x7F227C70u: goto label_7F227C70;
    case 0x7F227C74u: goto label_7F227C74;
    case 0x7F227C78u: goto label_7F227C78;
    case 0x7F227C7Cu: goto label_7F227C7C;
    case 0x7F227C80u: goto label_7F227C80;
    case 0x7F227C84u: goto label_7F227C84;
    case 0x7F227C88u: goto label_7F227C88;
    case 0x7F227C8Cu: goto label_7F227C8C;
    case 0x7F227C90u: goto label_7F227C90;
    case 0x7F227C94u: goto label_7F227C94;
    case 0x7F227C98u: goto label_7F227C98;
    case 0x7F227C9Cu: goto label_7F227C9C;
    case 0x7F227CA0u: goto label_7F227CA0;
    case 0x7F227CA4u: goto label_7F227CA4;
    case 0x7F227CA8u: goto label_7F227CA8;
    case 0x7F227CACu: goto label_7F227CAC;
    case 0x7F227CB0u: goto label_7F227CB0;
    case 0x7F227CB4u: goto label_7F227CB4;
    case 0x7F227CB8u: goto label_7F227CB8;
    case 0x7F227CBCu: goto label_7F227CBC;
    case 0x7F227CC0u: goto label_7F227CC0;
    case 0x7F227CC4u: goto label_7F227CC4;
    case 0x7F227CC8u: goto label_7F227CC8;
    case 0x7F227CCCu: goto label_7F227CCC;
    case 0x7F227CD0u: goto label_7F227CD0;
    case 0x7F227CD4u: goto label_7F227CD4;
    case 0x7F227CD8u: goto label_7F227CD8;
    case 0x7F227CDCu: goto label_7F227CDC;
    case 0x7F227CE0u: goto label_7F227CE0;
    case 0x7F227CE4u: goto label_7F227CE4;
    case 0x7F227CE8u: goto label_7F227CE8;
    case 0x7F227CECu: goto label_7F227CEC;
    case 0x7F227CF0u: goto label_7F227CF0;
    case 0x7F227CF4u: goto label_7F227CF4;
    case 0x7F227CF8u: goto label_7F227CF8;
    case 0x7F227CFCu: goto label_7F227CFC;
    case 0x7F227D00u: goto label_7F227D00;
    case 0x7F227D04u: goto label_7F227D04;
    case 0x7F227D08u: goto label_7F227D08;
    case 0x7F227D0Cu: goto label_7F227D0C;
    case 0x7F227D10u: goto label_7F227D10;
    case 0x7F227D14u: goto label_7F227D14;
    case 0x7F227D18u: goto label_7F227D18;
    case 0x7F227D1Cu: goto label_7F227D1C;
    case 0x7F227D20u: goto label_7F227D20;
    case 0x7F227D24u: goto label_7F227D24;
    case 0x7F227D28u: goto label_7F227D28;
    case 0x7F227D2Cu: goto label_7F227D2C;
    case 0x7F227D30u: goto label_7F227D30;
    case 0x7F227D34u: goto label_7F227D34;
    case 0x7F227D38u: goto label_7F227D38;
    case 0x7F227D3Cu: goto label_7F227D3C;
    case 0x7F227D40u: goto label_7F227D40;
    case 0x7F227D44u: goto label_7F227D44;
    case 0x7F227D48u: goto label_7F227D48;
    case 0x7F227D4Cu: goto label_7F227D4C;
    case 0x7F227D50u: goto label_7F227D50;
    case 0x7F227D54u: goto label_7F227D54;
    case 0x7F227D58u: goto label_7F227D58;
    case 0x7F227D5Cu: goto label_7F227D5C;
    case 0x7F227D60u: goto label_7F227D60;
    case 0x7F227D64u: goto label_7F227D64;
    case 0x7F227D68u: goto label_7F227D68;
    case 0x7F227D6Cu: goto label_7F227D6C;
    case 0x7F227D70u: goto label_7F227D70;
    case 0x7F227D74u: goto label_7F227D74;
    case 0x7F227D78u: goto label_7F227D78;
    case 0x7F227D7Cu: goto label_7F227D7C;
    case 0x7F227D80u: goto label_7F227D80;
    case 0x7F227D84u: goto label_7F227D84;
    case 0x7F227D88u: goto label_7F227D88;
    case 0x7F227D8Cu: goto label_7F227D8C;
    case 0x7F227D90u: goto label_7F227D90;
    case 0x7F227D94u: goto label_7F227D94;
    case 0x7F227D98u: goto label_7F227D98;
    case 0x7F227D9Cu: goto label_7F227D9C;
    case 0x7F227DA0u: goto label_7F227DA0;
    case 0x7F227DA4u: goto label_7F227DA4;
    case 0x7F227DA8u: goto label_7F227DA8;
    case 0x7F227DACu: goto label_7F227DAC;
    case 0x7F227DB0u: goto label_7F227DB0;
    case 0x7F227DB4u: goto label_7F227DB4;
    case 0x7F227DB8u: goto label_7F227DB8;
    case 0x7F227DBCu: goto label_7F227DBC;
    case 0x7F227DC0u: goto label_7F227DC0;
    case 0x7F227DC4u: goto label_7F227DC4;
    case 0x7F227DC8u: goto label_7F227DC8;
    case 0x7F227DCCu: goto label_7F227DCC;
    case 0x7F227DD0u: goto label_7F227DD0;
    case 0x7F227DD4u: goto label_7F227DD4;
    case 0x7F227DD8u: goto label_7F227DD8;
    case 0x7F227DDCu: goto label_7F227DDC;
    case 0x7F227DE0u: goto label_7F227DE0;
    case 0x7F227DE4u: goto label_7F227DE4;
    case 0x7F227DE8u: goto label_7F227DE8;
    case 0x7F227DECu: goto label_7F227DEC;
    case 0x7F227DF0u: goto label_7F227DF0;
    case 0x7F227DF4u: goto label_7F227DF4;
    case 0x7F227DF8u: goto label_7F227DF8;
    case 0x7F227DFCu: goto label_7F227DFC;
    case 0x7F227E00u: goto label_7F227E00;
    case 0x7F227E04u: goto label_7F227E04;
    case 0x7F227E08u: goto label_7F227E08;
    case 0x7F227E0Cu: goto label_7F227E0C;
    case 0x7F227E10u: goto label_7F227E10;
    case 0x7F227E14u: goto label_7F227E14;
    case 0x7F227E18u: goto label_7F227E18;
    case 0x7F227E1Cu: goto label_7F227E1C;
    case 0x7F227E20u: goto label_7F227E20;
    case 0x7F227E24u: goto label_7F227E24;
    case 0x7F227E28u: goto label_7F227E28;
    case 0x7F227E2Cu: goto label_7F227E2C;
    case 0x7F227E30u: goto label_7F227E30;
    case 0x7F227E34u: goto label_7F227E34;
    case 0x7F227E38u: goto label_7F227E38;
    case 0x7F227E3Cu: goto label_7F227E3C;
    case 0x7F227E40u: goto label_7F227E40;
    case 0x7F227E44u: goto label_7F227E44;
    case 0x7F227E48u: goto label_7F227E48;
    case 0x7F227E4Cu: goto label_7F227E4C;
    case 0x7F227E50u: goto label_7F227E50;
    case 0x7F227E54u: goto label_7F227E54;
    case 0x7F227E58u: goto label_7F227E58;
    case 0x7F227E5Cu: goto label_7F227E5C;
    case 0x7F227E60u: goto label_7F227E60;
    case 0x7F227E64u: goto label_7F227E64;
    case 0x7F227E68u: goto label_7F227E68;
    case 0x7F227E6Cu: goto label_7F227E6C;
    case 0x7F227E70u: goto label_7F227E70;
    case 0x7F227E74u: goto label_7F227E74;
    case 0x7F227E78u: goto label_7F227E78;
    case 0x7F227E7Cu: goto label_7F227E7C;
    case 0x7F227E80u: goto label_7F227E80;
    case 0x7F227E84u: goto label_7F227E84;
    case 0x7F227E88u: goto label_7F227E88;
    case 0x7F227E8Cu: goto label_7F227E8C;
    case 0x7F227E90u: goto label_7F227E90;
    case 0x7F227E94u: goto label_7F227E94;
    case 0x7F227E98u: goto label_7F227E98;
    case 0x7F227E9Cu: goto label_7F227E9C;
    case 0x7F227EA0u: goto label_7F227EA0;
    case 0x7F227EA4u: goto label_7F227EA4;
    case 0x7F227EA8u: goto label_7F227EA8;
    case 0x7F227EACu: goto label_7F227EAC;
    case 0x7F227EB0u: goto label_7F227EB0;
    case 0x7F227EB4u: goto label_7F227EB4;
    case 0x7F227EB8u: goto label_7F227EB8;
    case 0x7F227EBCu: goto label_7F227EBC;
    case 0x7F227EC0u: goto label_7F227EC0;
    case 0x7F227EC4u: goto label_7F227EC4;
    case 0x7F227EC8u: goto label_7F227EC8;
    case 0x7F227ECCu: goto label_7F227ECC;
    case 0x7F227ED0u: goto label_7F227ED0;
    case 0x7F227ED4u: goto label_7F227ED4;
    case 0x7F227ED8u: goto label_7F227ED8;
    case 0x7F227EDCu: goto label_7F227EDC;
    case 0x7F227EE0u: goto label_7F227EE0;
    case 0x7F227EE4u: goto label_7F227EE4;
    case 0x7F227EE8u: goto label_7F227EE8;
    case 0x7F227EECu: goto label_7F227EEC;
    case 0x7F227EF0u: goto label_7F227EF0;
    case 0x7F227EF4u: goto label_7F227EF4;
    case 0x7F227EF8u: goto label_7F227EF8;
    case 0x7F227EFCu: goto label_7F227EFC;
    case 0x7F227F00u: goto label_7F227F00;
    case 0x7F227F04u: goto label_7F227F04;
    case 0x7F227F08u: goto label_7F227F08;
    case 0x7F227F0Cu: goto label_7F227F0C;
    case 0x7F227F10u: goto label_7F227F10;
    case 0x7F227F14u: goto label_7F227F14;
    case 0x7F227F18u: goto label_7F227F18;
    case 0x7F227F1Cu: goto label_7F227F1C;
    case 0x7F227F20u: goto label_7F227F20;
    case 0x7F227F24u: goto label_7F227F24;
    case 0x7F227F28u: goto label_7F227F28;
    case 0x7F227F2Cu: goto label_7F227F2C;
    case 0x7F227F30u: goto label_7F227F30;
    case 0x7F227F34u: goto label_7F227F34;
    case 0x7F227F38u: goto label_7F227F38;
    case 0x7F227F3Cu: goto label_7F227F3C;
    case 0x7F227F40u: goto label_7F227F40;
    case 0x7F227F44u: goto label_7F227F44;
    case 0x7F227F48u: goto label_7F227F48;
    case 0x7F227F4Cu: goto label_7F227F4C;
    case 0x7F227F50u: goto label_7F227F50;
    case 0x7F227F54u: goto label_7F227F54;
    case 0x7F227F58u: goto label_7F227F58;
    case 0x7F227F5Cu: goto label_7F227F5C;
    case 0x7F227F60u: goto label_7F227F60;
    case 0x7F227F64u: goto label_7F227F64;
    case 0x7F227F68u: goto label_7F227F68;
    case 0x7F227F6Cu: goto label_7F227F6C;
    case 0x7F227F70u: goto label_7F227F70;
    case 0x7F227F74u: goto label_7F227F74;
    case 0x7F227F78u: goto label_7F227F78;
    case 0x7F227F7Cu: goto label_7F227F7C;
    case 0x7F227F80u: goto label_7F227F80;
    case 0x7F227F84u: goto label_7F227F84;
    case 0x7F227F88u: goto label_7F227F88;
    case 0x7F227F8Cu: goto label_7F227F8C;
    case 0x7F227F90u: goto label_7F227F90;
    case 0x7F227F94u: goto label_7F227F94;
    case 0x7F227F98u: goto label_7F227F98;
    case 0x7F227F9Cu: goto label_7F227F9C;
    case 0x7F227FA0u: goto label_7F227FA0;
    case 0x7F227FA4u: goto label_7F227FA4;
    case 0x7F227FA8u: goto label_7F227FA8;
    case 0x7F227FACu: goto label_7F227FAC;
    case 0x7F227FB0u: goto label_7F227FB0;
    case 0x7F227FB4u: goto label_7F227FB4;
    case 0x7F227FB8u: goto label_7F227FB8;
    case 0x7F227FBCu: goto label_7F227FBC;
    case 0x7F227FC0u: goto label_7F227FC0;
    case 0x7F227FC4u: goto label_7F227FC4;
    case 0x7F227FC8u: goto label_7F227FC8;
    case 0x7F227FCCu: goto label_7F227FCC;
    case 0x7F227FD0u: goto label_7F227FD0;
    case 0x7F227FD4u: goto label_7F227FD4;
    case 0x7F227FD8u: goto label_7F227FD8;
    case 0x7F227FDCu: goto label_7F227FDC;
    case 0x7F227FE0u: goto label_7F227FE0;
    case 0x7F227FE4u: goto label_7F227FE4;
    case 0x7F227FE8u: goto label_7F227FE8;
    case 0x7F227FECu: goto label_7F227FEC;
    case 0x7F227FF0u: goto label_7F227FF0;
    case 0x7F227FF4u: goto label_7F227FF4;
    case 0x7F227FF8u: goto label_7F227FF8;
    case 0x7F227FFCu: goto label_7F227FFC;
    case 0x7F228000u: goto label_7F228000;
    case 0x7F228004u: goto label_7F228004;
    case 0x7F228008u: goto label_7F228008;
    case 0x7F22800Cu: goto label_7F22800C;
    case 0x7F228010u: goto label_7F228010;
    case 0x7F228014u: goto label_7F228014;
    case 0x7F228018u: goto label_7F228018;
    case 0x7F22801Cu: goto label_7F22801C;
    case 0x7F228020u: goto label_7F228020;
    case 0x7F228024u: goto label_7F228024;
    case 0x7F228028u: goto label_7F228028;
    case 0x7F22802Cu: goto label_7F22802C;
    case 0x7F228030u: goto label_7F228030;
    case 0x7F228034u: goto label_7F228034;
    case 0x7F228038u: goto label_7F228038;
    case 0x7F22803Cu: goto label_7F22803C;
    case 0x7F228040u: goto label_7F228040;
    case 0x7F228044u: goto label_7F228044;
    case 0x7F228048u: goto label_7F228048;
    case 0x7F22804Cu: goto label_7F22804C;
    case 0x7F228050u: goto label_7F228050;
    case 0x7F228054u: goto label_7F228054;
    case 0x7F228058u: goto label_7F228058;
    case 0x7F22805Cu: goto label_7F22805C;
    case 0x7F228060u: goto label_7F228060;
    case 0x7F228064u: goto label_7F228064;
    case 0x7F228068u: goto label_7F228068;
    case 0x7F22806Cu: goto label_7F22806C;
    case 0x7F228070u: goto label_7F228070;
    case 0x7F228074u: goto label_7F228074;
    case 0x7F228078u: goto label_7F228078;
    case 0x7F22807Cu: goto label_7F22807C;
    case 0x7F228080u: goto label_7F228080;
    case 0x7F228084u: goto label_7F228084;
    case 0x7F228088u: goto label_7F228088;
    case 0x7F22808Cu: goto label_7F22808C;
    case 0x7F228090u: goto label_7F228090;
    case 0x7F228094u: goto label_7F228094;
    case 0x7F228098u: goto label_7F228098;
    case 0x7F22809Cu: goto label_7F22809C;
    case 0x7F2280A0u: goto label_7F2280A0;
    case 0x7F2280A4u: goto label_7F2280A4;
    case 0x7F2280A8u: goto label_7F2280A8;
    case 0x7F2280ACu: goto label_7F2280AC;
    case 0x7F2280B0u: goto label_7F2280B0;
    case 0x7F2280B4u: goto label_7F2280B4;
    case 0x7F2280B8u: goto label_7F2280B8;
    case 0x7F2280BCu: goto label_7F2280BC;
    case 0x7F2280C0u: goto label_7F2280C0;
    case 0x7F2280C4u: goto label_7F2280C4;
    case 0x7F2280C8u: goto label_7F2280C8;
    case 0x7F2280CCu: goto label_7F2280CC;
    case 0x7F2280D0u: goto label_7F2280D0;
    case 0x7F2280D4u: goto label_7F2280D4;
    case 0x7F2280D8u: goto label_7F2280D8;
    case 0x7F2280DCu: goto label_7F2280DC;
    case 0x7F2280E0u: goto label_7F2280E0;
    case 0x7F2280E4u: goto label_7F2280E4;
    case 0x7F2280E8u: goto label_7F2280E8;
    default: return;
    }
label_7F2240EC:
    ctx->pc = 0x7F2240ECu;
    ctx->downcount -= 36;
    // 7F2240EC: stfd     f3, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2240ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_7F2240F0:
    ctx->pc = 0x7F2240F0u;
    // 7F2240F0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2240F0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2240F4:
    ctx->pc = 0x7F2240F4u;
    // 7F2240F4: stfd     f1, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2240F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F2240F8:
    ctx->pc = 0x7F2240F8u;
    // 7F2240F8: lwz     r3, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2240FC:
    ctx->pc = 0x7F2240FCu;
    // 7F2240FC: stfd     f2, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2240FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_7F224100:
    ctx->pc = 0x7F224100u;
    // 7F224100: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F224104:
    ctx->pc = 0x7F224104u;
    // 7F224104: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F224108:
    ctx->pc = 0x7F224108u;
    // 7F224108: stfd     f0, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224108u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F22410C:
    ctx->pc = 0x7F22410Cu;
    // 7F22410C: addi    r3, r3, 256
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(256);

label_7F224110:
    ctx->pc = 0x7F224110u;
    // 7F224110: xoris   r5, r3, 0x8000
    ctx->gpr[5] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F224114:
    ctx->pc = 0x7F224114u;
    // 7F224114: xoris   r3, r0, 0x8000
    ctx->gpr[3] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F224118:
    ctx->pc = 0x7F224118u;
    // 7F224118: lwz     r4, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F22411C:
    ctx->pc = 0x7F22411Cu;
    // 7F22411C: lwz     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F224120:
    ctx->pc = 0x7F224120u;
    // 7F224120: addi    r4, r4, 224
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(224);

label_7F224124:
    ctx->pc = 0x7F224124u;
    // 7F224124: stw     r5, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F224128:
    ctx->pc = 0x7F224128u;
    // 7F224128: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F22412C:
    ctx->pc = 0x7F22412Cu;
    // 7F22412C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F224130:
    ctx->pc = 0x7F224130u;
    // 7F224130: stw     r30, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F224134:
    ctx->pc = 0x7F224134u;
    // 7F224134: lfd     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224134u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F224138:
    ctx->pc = 0x7F224138u;
    // 7F224138: stw     r3, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F22413C:
    ctx->pc = 0x7F22413Cu;
    // 7F22413C: fsubs   f3, f0, f23
    if (!ppc_fp_available_inline(ctx, 0x7F22413Cu)) return;
    ppc_fsubs(ctx, 3, 0, 23);

label_7F224140:
    ctx->pc = 0x7F224140u;
    // 7F224140: stw     r30, 184(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F224144:
    ctx->pc = 0x7F224144u;
    // 7F224144: lfd     f0, 184(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224144u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F224148:
    ctx->pc = 0x7F224148u;
    // 7F224148: stw     r4, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F22414C:
    ctx->pc = 0x7F22414Cu;
    // 7F22414C: fsubs   f0, f0, f23
    if (!ppc_fp_available_inline(ctx, 0x7F22414Cu)) return;
    ppc_fsubs(ctx, 0, 0, 23);

label_7F224150:
    ctx->pc = 0x7F224150u;
    // 7F224150: stw     r30, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F224154:
    ctx->pc = 0x7F224154u;
    // 7F224154: lfd     f1, 168(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224154u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F224158:
    ctx->pc = 0x7F224158u;
    // 7F224158: fsubs   f4, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F224158u)) return;
    ppc_fsubs(ctx, 4, 3, 0);

label_7F22415C:
    ctx->pc = 0x7F22415Cu;
    // 7F22415C: stw     r0, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F224160:
    ctx->pc = 0x7F224160u;
    // 7F224160: fsubs   f1, f1, f23
    if (!ppc_fp_available_inline(ctx, 0x7F224160u)) return;
    ppc_fsubs(ctx, 1, 1, 23);

label_7F224164:
    ctx->pc = 0x7F224164u;
    // 7F224164: stw     r30, 200(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F224168:
    ctx->pc = 0x7F224168u;
    // 7F224168: fcmpo   cr0, f4, f24
    if (!ppc_fp_available_inline(ctx, 0x7F224168u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[4], ctx->fpr[24], true);

label_7F22416C:
    ctx->pc = 0x7F22416Cu;
    // 7F22416C: lfd     f0, 200(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F22416Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F224170:
    ctx->pc = 0x7F224170u;
    // 7F224170: fsubs   f0, f0, f23
    if (!ppc_fp_available_inline(ctx, 0x7F224170u)) return;
    ppc_fsubs(ctx, 0, 0, 23);

label_7F224174:
    ctx->pc = 0x7F224174u;
    // 7F224174: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F224174u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F224178:
    ctx->pc = 0x7F224178u;
    // 7F224178: bc    4, 1, 0x7F224184
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F224184;
        }
    }

label_7F22417C:
    ctx->pc = 0x7F22417Cu;
    ctx->downcount -= 2;
    // 7F22417C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F224180:
    ctx->pc = 0x7F224180u;
    // 7F224180: lfs     f4, 17440(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F224180u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17440);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F224184:
    ctx->pc = 0x7F224184u;
    ctx->downcount -= 2;
    // 7F224184: fcmpo   cr0, f4, f25
    if (!ppc_fp_available_inline(ctx, 0x7F224184u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[4], ctx->fpr[25], true);

label_7F224188:
    ctx->pc = 0x7F224188u;
    // 7F224188: bc    4, 0, 0x7F224194
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F224194;
        }
    }

label_7F22418C:
    ctx->pc = 0x7F22418Cu;
    ctx->downcount -= 2;
    // 7F22418C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F224190:
    ctx->pc = 0x7F224190u;
    // 7F224190: lfs     f4, 17444(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F224190u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17444);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F224194:
    ctx->pc = 0x7F224194u;
    ctx->downcount -= 2;
    // 7F224194: fcmpo   cr0, f0, f26
    if (!ppc_fp_available_inline(ctx, 0x7F224194u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[26], true);

label_7F224198:
    ctx->pc = 0x7F224198u;
    // 7F224198: bc    4, 1, 0x7F2241A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2241A4;
        }
    }

label_7F22419C:
    ctx->pc = 0x7F22419Cu;
    ctx->downcount -= 2;
    // 7F22419C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2241A0:
    ctx->pc = 0x7F2241A0u;
    // 7F2241A0: lfs     f0, 17448(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2241A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17448);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2241A4:
    ctx->pc = 0x7F2241A4u;
    ctx->downcount -= 2;
    // 7F2241A4: fcmpo   cr0, f0, f25
    if (!ppc_fp_available_inline(ctx, 0x7F2241A4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[25], true);

label_7F2241A8:
    ctx->pc = 0x7F2241A8u;
    // 7F2241A8: bc    4, 0, 0x7F2241B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2241B4;
        }
    }

label_7F2241AC:
    ctx->pc = 0x7F2241ACu;
    ctx->downcount -= 2;
    // 7F2241AC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2241B0:
    ctx->pc = 0x7F2241B0u;
    // 7F2241B0: lfs     f0, 17444(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2241B0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17444);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2241B4:
    ctx->pc = 0x7F2241B4u;
    ctx->downcount -= 68;
    // 7F2241B4: fmuls   f1, f28, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2241B4u)) return;
    ppc_fmuls(ctx, 1, 28, 1);

label_7F2241B8:
    ctx->pc = 0x7F2241B8u;
    // 7F2241B8: rlwinm r7, r14, 2, 0, 29
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[14], 2u) & 0xFFFFFFFCu;
    }

label_7F2241BC:
    ctx->pc = 0x7F2241BCu;
    // 7F2241BC: fdivs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F2241BCu)) return;
    ppc_fdivs(ctx, 0, 0, 30);

label_7F2241C0:
    ctx->pc = 0x7F2241C0u;
    // 7F2241C0: add   r6, r18, r7
    {
        u32 a = ctx->gpr[18];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F2241C4:
    ctx->pc = 0x7F2241C4u;
    // 7F2241C4: lwz     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2241C8:
    ctx->pc = 0x7F2241C8u;
    // 7F2241C8: add   r8, r17, r7
    {
        u32 a = ctx->gpr[17];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_7F2241CC:
    ctx->pc = 0x7F2241CCu;
    // 7F2241CC: addi    r21, r21, 1
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(1);

label_7F2241D0:
    ctx->pc = 0x7F2241D0u;
    // 7F2241D0: addi    r31, r31, 2
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(2);

label_7F2241D4:
    ctx->pc = 0x7F2241D4u;
    // 7F2241D4: fmuls   f2, f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2241D4u)) return;
    ppc_fmuls(ctx, 2, 30, 1);

label_7F2241D8:
    ctx->pc = 0x7F2241D8u;
    // 7F2241D8: fmuls   f3, f28, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2241D8u)) return;
    ppc_fmuls(ctx, 3, 28, 3);

label_7F2241DC:
    ctx->pc = 0x7F2241DCu;
    // 7F2241DC: fmuls   f1, f4, f29
    if (!ppc_fp_available_inline(ctx, 0x7F2241DCu)) return;
    ppc_fmuls(ctx, 1, 4, 29);

label_7F2241E0:
    ctx->pc = 0x7F2241E0u;
    // 7F2241E0: fdivs   f2, f2, f30
    if (!ppc_fp_available_inline(ctx, 0x7F2241E0u)) return;
    ppc_fdivs(ctx, 2, 2, 30);

label_7F2241E4:
    ctx->pc = 0x7F2241E4u;
    // 7F2241E4: fmuls   f3, f27, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2241E4u)) return;
    ppc_fmuls(ctx, 3, 27, 3);

label_7F2241E8:
    ctx->pc = 0x7F2241E8u;
    // 7F2241E8: fctiwz    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2241E8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[2] = dolrecomp_f64_from_bits(result); }

label_7F2241EC:
    ctx->pc = 0x7F2241ECu;
    // 7F2241EC: fmuls   f1, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2241ECu)) return;
    ppc_fmuls(ctx, 1, 31, 1);

label_7F2241F0:
    ctx->pc = 0x7F2241F0u;
    // 7F2241F0: fmuls   f0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2241F0u)) return;
    ppc_fmuls(ctx, 0, 31, 0);

label_7F2241F4:
    ctx->pc = 0x7F2241F4u;
    // 7F2241F4: stfd     f2, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2241F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_7F2241F8:
    ctx->pc = 0x7F2241F8u;
    // 7F2241F8: fmuls   f3, f3, f29
    if (!ppc_fp_available_inline(ctx, 0x7F2241F8u)) return;
    ppc_fmuls(ctx, 3, 3, 29);

label_7F2241FC:
    ctx->pc = 0x7F2241FCu;
    // 7F2241FC: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2241FCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F224200:
    ctx->pc = 0x7F224200u;
    // 7F224200: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F224200u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F224204:
    ctx->pc = 0x7F224204u;
    // 7F224204: lwz     r5, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F224208:
    ctx->pc = 0x7F224208u;
    // 7F224208: fctiwz    f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F224208u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[3], true, &result)) ctx->fpr[2] = dolrecomp_f64_from_bits(result); }

label_7F22420C:
    ctx->pc = 0x7F22420Cu;
    // 7F22420C: stfd     f1, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F22420Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F224210:
    ctx->pc = 0x7F224210u;
    // 7F224210: stfd     f2, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224210u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_7F224214:
    ctx->pc = 0x7F224214u;
    // 7F224214: lwz     r3, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F224218:
    ctx->pc = 0x7F224218u;
    // 7F224218: lwz     r0, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F22421C:
    ctx->pc = 0x7F22421Cu;
    // 7F22421C: stfd     f0, 232(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F22421Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F224220:
    ctx->pc = 0x7F224220u;
    // 7F224220: sth     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F224224:
    ctx->pc = 0x7F224224u;
    // 7F224224: lwz     r0, 236(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F224228:
    ctx->pc = 0x7F224228u;
    // 7F224228: sth     r5, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F22422C:
    ctx->pc = 0x7F22422Cu;
    // 7F22422C: stwx    r4, r16, r7
    {
        u32 ea = ctx->gpr[16] + ctx->gpr[7];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F224230:
    ctx->pc = 0x7F224230u;
    // 7F224230: sth     r3, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F224234:
    ctx->pc = 0x7F224234u;
    // 7F224234: sth     r0, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F224238:
    ctx->pc = 0x7F224238u;
    // 7F224238: lwz     r0, 20(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F22423C:
    ctx->pc = 0x7F22423Cu;
    // 7F22423C: cmpw    r21, r0
    {
        s32 val_a = (s32)(ctx->gpr[21]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F224240:
    ctx->pc = 0x7F224240u;
    // 7F224240: bc    12, 0, 0x7F223FA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F223FA4u;
            return;
        }
    }

label_7F224244:
    ctx->pc = 0x7F224244u;
    ctx->downcount -= 8;
    // 7F224244: addi    r19, r19, 16
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(16);

label_7F224248:
    ctx->pc = 0x7F224248u;
    // 7F224248: addi    r18, r18, 340
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(340);

label_7F22424C:
    ctx->pc = 0x7F22424Cu;
    // 7F22424C: addi    r16, r16, 340
    ctx->gpr[16] = ctx->gpr[16] + (u32)(s32)(340);

label_7F224250:
    ctx->pc = 0x7F224250u;
    // 7F224250: addi    r17, r17, 340
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(340);

label_7F224254:
    ctx->pc = 0x7F224254u;
    // 7F224254: addi    r22, r22, 1
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(1);

label_7F224258:
    ctx->pc = 0x7F224258u;
    // 7F224258: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F22425C:
    ctx->pc = 0x7F22425Cu;
    // 7F22425C: cmpw    r22, r0
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

label_7F224260:
    ctx->pc = 0x7F224260u;
    // 7F224260: bc    12, 0, 0x7F223E38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F223E38u;
            return;
        }
    }

label_7F224264:
    ctx->pc = 0x7F224264u;
    ctx->downcount -= 45;
    // 7F224264: or   r3, r20, r20
    {
        ctx->gpr[3] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F224268:
    ctx->pc = 0x7F224268u;
    // 7F224268: psq_l   f31, 552(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F224268u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(552);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F224268u);
        if (ctx->exception) return;
    }

label_7F22426C:
    ctx->pc = 0x7F22426Cu;
    // 7F22426C: lfd     f31, 544(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F22426Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(544);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F224270:
    ctx->pc = 0x7F224270u;
    // 7F224270: psq_l   f30, 536(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F224270u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(536);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F224270u);
        if (ctx->exception) return;
    }

label_7F224274:
    ctx->pc = 0x7F224274u;
    // 7F224274: lfd     f30, 528(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224274u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(528);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F224278:
    ctx->pc = 0x7F224278u;
    // 7F224278: psq_l   f29, 520(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F224278u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(520);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F224278u);
        if (ctx->exception) return;
    }

label_7F22427C:
    ctx->pc = 0x7F22427Cu;
    // 7F22427C: lfd     f29, 512(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F22427Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(512);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F224280:
    ctx->pc = 0x7F224280u;
    // 7F224280: psq_l   f28, 504(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F224280u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(504);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F224280u);
        if (ctx->exception) return;
    }

label_7F224284:
    ctx->pc = 0x7F224284u;
    // 7F224284: lfd     f28, 496(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224284u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(496);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F224288:
    ctx->pc = 0x7F224288u;
    // 7F224288: psq_l   f27, 488(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F224288u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(488);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F224288u);
        if (ctx->exception) return;
    }

label_7F22428C:
    ctx->pc = 0x7F22428Cu;
    // 7F22428C: lfd     f27, 480(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F22428Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(480);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F224290:
    ctx->pc = 0x7F224290u;
    // 7F224290: psq_l   f26, 472(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F224290u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(472);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x7F224290u);
        if (ctx->exception) return;
    }

label_7F224294:
    ctx->pc = 0x7F224294u;
    // 7F224294: lfd     f26, 464(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224294u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(464);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F224298:
    ctx->pc = 0x7F224298u;
    // 7F224298: psq_l   f25, 456(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F224298u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(456);
        ppc_psq_load_inline(ctx, 25u, ea, false, 0u, false, 0x7F224298u);
        if (ctx->exception) return;
    }

label_7F22429C:
    ctx->pc = 0x7F22429Cu;
    // 7F22429C: lfd     f25, 448(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F22429Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(448);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2242A0:
    ctx->pc = 0x7F2242A0u;
    // 7F2242A0: psq_l   f24, 440(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2242A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(440);
        ppc_psq_load_inline(ctx, 24u, ea, false, 0u, false, 0x7F2242A0u);
        if (ctx->exception) return;
    }

label_7F2242A4:
    ctx->pc = 0x7F2242A4u;
    // 7F2242A4: lfd     f24, 432(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2242A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(432);
        ctx->fpr[24] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2242A8:
    ctx->pc = 0x7F2242A8u;
    // 7F2242A8: psq_l   f23, 424(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2242A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(424);
        ppc_psq_load_inline(ctx, 23u, ea, false, 0u, false, 0x7F2242A8u);
        if (ctx->exception) return;
    }

label_7F2242AC:
    ctx->pc = 0x7F2242ACu;
    // 7F2242AC: lfd     f23, 416(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2242ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(416);
        ctx->fpr[23] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2242B0:
    ctx->pc = 0x7F2242B0u;
    // 7F2242B0: psq_l   f22, 408(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2242B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(408);
        ppc_psq_load_inline(ctx, 22u, ea, false, 0u, false, 0x7F2242B0u);
        if (ctx->exception) return;
    }

label_7F2242B4:
    ctx->pc = 0x7F2242B4u;
    // 7F2242B4: lfd     f22, 400(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2242B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(400);
        ctx->fpr[22] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2242B8:
    ctx->pc = 0x7F2242B8u;
    // 7F2242B8: psq_l   f21, 392(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2242B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(392);
        ppc_psq_load_inline(ctx, 21u, ea, false, 0u, false, 0x7F2242B8u);
        if (ctx->exception) return;
    }

label_7F2242BC:
    ctx->pc = 0x7F2242BCu;
    // 7F2242BC: lfd     f21, 384(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2242BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(384);
        ctx->fpr[21] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2242C0:
    ctx->pc = 0x7F2242C0u;
    // 7F2242C0: psq_l   f20, 376(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2242C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(376);
        ppc_psq_load_inline(ctx, 20u, ea, false, 0u, false, 0x7F2242C0u);
        if (ctx->exception) return;
    }

label_7F2242C4:
    ctx->pc = 0x7F2242C4u;
    // 7F2242C4: lfd     f20, 368(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2242C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(368);
        ctx->fpr[20] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2242C8:
    ctx->pc = 0x7F2242C8u;
    // 7F2242C8: psq_l   f19, 360(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2242C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        ppc_psq_load_inline(ctx, 19u, ea, false, 0u, false, 0x7F2242C8u);
        if (ctx->exception) return;
    }

label_7F2242CC:
    ctx->pc = 0x7F2242CCu;
    // 7F2242CC: lfd     f19, 352(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2242CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(352);
        ctx->fpr[19] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2242D0:
    ctx->pc = 0x7F2242D0u;
    // 7F2242D0: psq_l   f18, 344(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2242D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(344);
        ppc_psq_load_inline(ctx, 18u, ea, false, 0u, false, 0x7F2242D0u);
        if (ctx->exception) return;
    }

label_7F2242D4:
    ctx->pc = 0x7F2242D4u;
    // 7F2242D4: lfd     f18, 336(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2242D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(336);
        ctx->fpr[18] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2242D8:
    ctx->pc = 0x7F2242D8u;
    // 7F2242D8: lmw     r14, 264(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        for (u32 r = 14; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2242DC:
    ctx->pc = 0x7F2242DCu;
    // 7F2242DC: lwz     r0, 564(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(564);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2242E0:
    ctx->pc = 0x7F2242E0u;
    // 7F2242E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2242E4:
    ctx->pc = 0x7F2242E4u;
    // 7F2242E4: addi    r1, r1, 560
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(560);

label_7F2242E8:
    ctx->pc = 0x7F2242E8u;
    // 7F2242E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F2242EC:
    ctx->pc = 0x7F2242ECu;
    ctx->downcount -= 23;
    // 7F2242EC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2242F0:
    ctx->pc = 0x7F2242F0u;
    // 7F2242F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2242F4:
    ctx->pc = 0x7F2242F4u;
    // 7F2242F4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2242F8:
    ctx->pc = 0x7F2242F8u;
    // 7F2242F8: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2242FC:
    ctx->pc = 0x7F2242FCu;
    // 7F2242FC: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F224300:
    ctx->pc = 0x7F224300u;
    // 7F224300: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F224304:
    ctx->pc = 0x7F224304u;
    // 7F224304: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F224308:
    ctx->pc = 0x7F224308u;
    // 7F224308: addi    r4, r4, -10552
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10552);

label_7F22430C:
    ctx->pc = 0x7F22430Cu;
    // 7F22430C: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F224310:
    ctx->pc = 0x7F224310u;
    // 7F224310: or   r30, r7, r7
    {
        ctx->gpr[30] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F224314:
    ctx->pc = 0x7F224314u;
    // 7F224314: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F224318:
    ctx->pc = 0x7F224318u;
    // 7F224318: lfs     f1, 0(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F224318u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F22431C:
    ctx->pc = 0x7F22431Cu;
    // 7F22431C: bl      0x80026020
    {
            ctx->lr = 0x7F224320u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F224320:
    ctx->pc = 0x7F224320u;
    ctx->downcount -= 5;
    // 7F224320: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F224324:
    ctx->pc = 0x7F224324u;
    // 7F224324: lfs     f1, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F224324u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F224328:
    ctx->pc = 0x7F224328u;
    // 7F224328: addi    r4, r3, -10568
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-10568);

label_7F22432C:
    ctx->pc = 0x7F22432Cu;
    // 7F22432C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F224330:
    ctx->pc = 0x7F224330u;
    // 7F224330: bl      0x80026020
    {
            ctx->lr = 0x7F224334u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F224334:
    ctx->pc = 0x7F224334u;
    ctx->downcount -= 6;
    // 7F224334: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F224338:
    ctx->pc = 0x7F224338u;
    // 7F224338: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F22433C:
    ctx->pc = 0x7F22433Cu;
    // 7F22433C: addi    r4, r3, -10552
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-10552);

label_7F224340:
    ctx->pc = 0x7F224340u;
    // 7F224340: addi    r3, r5, -10568
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-10568);

label_7F224344:
    ctx->pc = 0x7F224344u;
    // 7F224344: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F224348:
    ctx->pc = 0x7F224348u;
    // 7F224348: bl      0x800261B4
    {
            ctx->lr = 0x7F22434Cu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F22434C:
    ctx->pc = 0x7F22434Cu;
    ctx->downcount -= 7;
    // 7F22434C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F224350:
    ctx->pc = 0x7F224350u;
    // 7F224350: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F224354:
    ctx->pc = 0x7F224354u;
    // 7F224354: addi    r5, r3, -10616
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-10616);

label_7F224358:
    ctx->pc = 0x7F224358u;
    // 7F224358: lfs     f1, 8(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F224358u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F22435C:
    ctx->pc = 0x7F22435Cu;
    // 7F22435C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F224360:
    ctx->pc = 0x7F224360u;
    // 7F224360: addi    r4, r4, -10568
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10568);

label_7F224364:
    ctx->pc = 0x7F224364u;
    // 7F224364: bl      0x80026020
    {
            ctx->lr = 0x7F224368u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F224368:
    ctx->pc = 0x7F224368u;
    ctx->downcount -= 7;
    // 7F224368: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F22436C:
    ctx->pc = 0x7F22436Cu;
    // 7F22436C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F224370:
    ctx->pc = 0x7F224370u;
    // 7F224370: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F224374:
    ctx->pc = 0x7F224374u;
    // 7F224374: addi    r3, r3, -10568
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10568);

label_7F224378:
    ctx->pc = 0x7F224378u;
    // 7F224378: addi    r4, r4, -10552
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10552);

label_7F22437C:
    ctx->pc = 0x7F22437Cu;
    // 7F22437C: addi    r5, r5, -10632
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-10632);

label_7F224380:
    ctx->pc = 0x7F224380u;
    // 7F224380: bl      0x800261B4
    {
            ctx->lr = 0x7F224384u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F224384:
    ctx->pc = 0x7F224384u;
    ctx->downcount -= 6;
    // 7F224384: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F224388:
    ctx->pc = 0x7F224388u;
    // 7F224388: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F22438C:
    ctx->pc = 0x7F22438Cu;
    // 7F22438C: addi    r4, r3, -10632
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-10632);

label_7F224390:
    ctx->pc = 0x7F224390u;
    // 7F224390: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F224394:
    ctx->pc = 0x7F224394u;
    // 7F224394: addi    r5, r5, -10584
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-10584);

label_7F224398:
    ctx->pc = 0x7F224398u;
    // 7F224398: bl      0x7F115684
    {
            ctx->lr = 0x7F22439Cu;
            ctx->pc = 0x7F115684u;
            return;
    }

label_7F22439C:
    ctx->pc = 0x7F22439Cu;
    ctx->downcount -= 16;
    // 7F22439C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2243A0:
    ctx->pc = 0x7F2243A0u;
    // 7F2243A0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2243A4:
    ctx->pc = 0x7F2243A4u;
    // 7F2243A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2243A8:
    ctx->pc = 0x7F2243A8u;
    // 7F2243A8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2243AC:
    ctx->pc = 0x7F2243ACu;
    // 7F2243AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F2243B0:
    ctx->pc = 0x7F2243B0u;
    ctx->downcount -= 25;
    // 7F2243B0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2243B4:
    ctx->pc = 0x7F2243B4u;
    // 7F2243B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2243B8:
    ctx->pc = 0x7F2243B8u;
    // 7F2243B8: lis     r8, 32589
    ctx->gpr[8] = ((u32)(s32)(32589) << 16);

label_7F2243BC:
    ctx->pc = 0x7F2243BCu;
    // 7F2243BC: lis     r9, 32589
    ctx->gpr[9] = ((u32)(s32)(32589) << 16);

label_7F2243C0:
    ctx->pc = 0x7F2243C0u;
    // 7F2243C0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2243C4:
    ctx->pc = 0x7F2243C4u;
    // 7F2243C4: addi    r0, r9, -10552
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-10552);

label_7F2243C8:
    ctx->pc = 0x7F2243C8u;
    // 7F2243C8: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2243CC:
    ctx->pc = 0x7F2243CCu;
    // 7F2243CC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2243D0:
    ctx->pc = 0x7F2243D0u;
    // 7F2243D0: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2243D4:
    ctx->pc = 0x7F2243D4u;
    // 7F2243D4: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2243D8:
    ctx->pc = 0x7F2243D8u;
    // 7F2243D8: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F2243DC:
    ctx->pc = 0x7F2243DCu;
    // 7F2243DC: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F2243E0:
    ctx->pc = 0x7F2243E0u;
    // 7F2243E0: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F2243E4:
    ctx->pc = 0x7F2243E4u;
    // 7F2243E4: lfs     f1, -10616(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F2243E4u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-10616);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2243E8:
    ctx->pc = 0x7F2243E8u;
    // 7F2243E8: bl      0x80026020
    {
            ctx->lr = 0x7F2243ECu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F2243EC:
    ctx->pc = 0x7F2243ECu;
    ctx->downcount -= 7;
    // 7F2243EC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2243F0:
    ctx->pc = 0x7F2243F0u;
    // 7F2243F0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2243F4:
    ctx->pc = 0x7F2243F4u;
    // 7F2243F4: addi    r5, r3, -10616
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-10616);

label_7F2243F8:
    ctx->pc = 0x7F2243F8u;
    // 7F2243F8: lfs     f1, 4(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2243F8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2243FC:
    ctx->pc = 0x7F2243FCu;
    // 7F2243FC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F224400:
    ctx->pc = 0x7F224400u;
    // 7F224400: addi    r4, r4, -10568
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10568);

label_7F224404:
    ctx->pc = 0x7F224404u;
    // 7F224404: bl      0x80026020
    {
            ctx->lr = 0x7F224408u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F224408:
    ctx->pc = 0x7F224408u;
    ctx->downcount -= 6;
    // 7F224408: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F22440C:
    ctx->pc = 0x7F22440Cu;
    // 7F22440C: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F224410:
    ctx->pc = 0x7F224410u;
    // 7F224410: addi    r4, r3, -10552
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-10552);

label_7F224414:
    ctx->pc = 0x7F224414u;
    // 7F224414: addi    r3, r5, -10568
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-10568);

label_7F224418:
    ctx->pc = 0x7F224418u;
    // 7F224418: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F22441C:
    ctx->pc = 0x7F22441Cu;
    // 7F22441C: bl      0x800261B4
    {
            ctx->lr = 0x7F224420u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F224420:
    ctx->pc = 0x7F224420u;
    ctx->downcount -= 7;
    // 7F224420: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F224424:
    ctx->pc = 0x7F224424u;
    // 7F224424: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F224428:
    ctx->pc = 0x7F224428u;
    // 7F224428: addi    r5, r3, -10616
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-10616);

label_7F22442C:
    ctx->pc = 0x7F22442Cu;
    // 7F22442C: lfs     f1, 8(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F22442Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F224430:
    ctx->pc = 0x7F224430u;
    // 7F224430: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F224434:
    ctx->pc = 0x7F224434u;
    // 7F224434: addi    r4, r4, -10568
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10568);

label_7F224438:
    ctx->pc = 0x7F224438u;
    // 7F224438: bl      0x80026020
    {
            ctx->lr = 0x7F22443Cu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F22443C:
    ctx->pc = 0x7F22443Cu;
    ctx->downcount -= 6;
    // 7F22443C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F224440:
    ctx->pc = 0x7F224440u;
    // 7F224440: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F224444:
    ctx->pc = 0x7F224444u;
    // 7F224444: addi    r4, r3, -10552
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-10552);

label_7F224448:
    ctx->pc = 0x7F224448u;
    // 7F224448: addi    r3, r5, -10568
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-10568);

label_7F22444C:
    ctx->pc = 0x7F22444Cu;
    // 7F22444C: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F224450:
    ctx->pc = 0x7F224450u;
    // 7F224450: bl      0x800261B4
    {
            ctx->lr = 0x7F224454u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F224454:
    ctx->pc = 0x7F224454u;
    ctx->downcount -= 7;
    // 7F224454: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F224458:
    ctx->pc = 0x7F224458u;
    // 7F224458: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F22445C:
    ctx->pc = 0x7F22445Cu;
    // 7F22445C: addi    r5, r3, -10616
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-10616);

label_7F224460:
    ctx->pc = 0x7F224460u;
    // 7F224460: lfs     f1, 12(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F224460u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F224464:
    ctx->pc = 0x7F224464u;
    // 7F224464: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F224468:
    ctx->pc = 0x7F224468u;
    // 7F224468: addi    r4, r4, -10568
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10568);

label_7F22446C:
    ctx->pc = 0x7F22446Cu;
    // 7F22446C: bl      0x80026020
    {
            ctx->lr = 0x7F224470u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F224470:
    ctx->pc = 0x7F224470u;
    ctx->downcount -= 7;
    // 7F224470: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F224474:
    ctx->pc = 0x7F224474u;
    // 7F224474: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F224478:
    ctx->pc = 0x7F224478u;
    // 7F224478: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F22447C:
    ctx->pc = 0x7F22447Cu;
    // 7F22447C: addi    r3, r3, -10568
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-10568);

label_7F224480:
    ctx->pc = 0x7F224480u;
    // 7F224480: addi    r4, r4, -10552
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10552);

label_7F224484:
    ctx->pc = 0x7F224484u;
    // 7F224484: addi    r5, r5, -10632
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-10632);

label_7F224488:
    ctx->pc = 0x7F224488u;
    // 7F224488: bl      0x800261B4
    {
            ctx->lr = 0x7F22448Cu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F22448C:
    ctx->pc = 0x7F22448Cu;
    ctx->downcount -= 6;
    // 7F22448C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F224490:
    ctx->pc = 0x7F224490u;
    // 7F224490: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F224494:
    ctx->pc = 0x7F224494u;
    // 7F224494: addi    r4, r3, -10632
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-10632);

label_7F224498:
    ctx->pc = 0x7F224498u;
    // 7F224498: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F22449C:
    ctx->pc = 0x7F22449Cu;
    // 7F22449C: addi    r5, r5, -10600
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-10600);

label_7F2244A0:
    ctx->pc = 0x7F2244A0u;
    // 7F2244A0: bl      0x7F115684
    {
            ctx->lr = 0x7F2244A4u;
            ctx->pc = 0x7F115684u;
            return;
    }

label_7F2244A4:
    ctx->pc = 0x7F2244A4u;
    ctx->downcount -= 16;
    // 7F2244A4: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2244A8:
    ctx->pc = 0x7F2244A8u;
    // 7F2244A8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2244AC:
    ctx->pc = 0x7F2244ACu;
    // 7F2244AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2244B0:
    ctx->pc = 0x7F2244B0u;
    // 7F2244B0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2244B4:
    ctx->pc = 0x7F2244B4u;
    // 7F2244B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F2244B8:
    ctx->pc = 0x7F2244B8u;
    ctx->downcount -= 16;
    // 7F2244B8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2244BC:
    ctx->pc = 0x7F2244BCu;
    // 7F2244BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2244C0:
    ctx->pc = 0x7F2244C0u;
    // 7F2244C0: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F2244C4:
    ctx->pc = 0x7F2244C4u;
    // 7F2244C4: li      r8, 8
    ctx->gpr[8] = (u32)(s32)(8);

label_7F2244C8:
    ctx->pc = 0x7F2244C8u;
    // 7F2244C8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2244CC:
    ctx->pc = 0x7F2244CCu;
    // 7F2244CC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2244D0:
    ctx->pc = 0x7F2244D0u;
    // 7F2244D0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2244D4:
    ctx->pc = 0x7F2244D4u;
    // 7F2244D4: addi    r6, r31, 80
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(80);

label_7F2244D8:
    ctx->pc = 0x7F2244D8u;
    // 7F2244D8: lwz     r0, -12088(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-12088);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2244DC:
    ctx->pc = 0x7F2244DCu;
    // 7F2244DC: lwz     r7, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2244E0:
    ctx->pc = 0x7F2244E0u;
    // 7F2244E0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F2244E4:
    ctx->pc = 0x7F2244E4u;
    // 7F2244E4: add   r5, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2244E8:
    ctx->pc = 0x7F2244E8u;
    // 7F2244E8: lwz     r3, 56(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2244EC:
    ctx->pc = 0x7F2244ECu;
    // 7F2244EC: lwz     r4, 64(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2244F0:
    ctx->pc = 0x7F2244F0u;
    // 7F2244F0: lwz     r5, 72(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(72);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2244F4:
    ctx->pc = 0x7F2244F4u;
    // 7F2244F4: bl      0x7F223C78
    {
            ctx->lr = 0x7F2244F8u;
            ctx->pc = 0x7F223C78u;
            return;
    }

label_7F2244F8:
    ctx->pc = 0x7F2244F8u;
    ctx->downcount -= 2;
    // 7F2244F8: cmpwi   r3, 0
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

label_7F2244FC:
    ctx->pc = 0x7F2244FCu;
    // 7F2244FC: bc    4, 2, 0x7F224518
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F224518;
        }
    }

label_7F224500:
    ctx->pc = 0x7F224500u;
    ctx->downcount -= 6;
    // 7F224500: lwz     r4, 212(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(212);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F224504:
    ctx->pc = 0x7F224504u;
    // 7F224504: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F224508:
    ctx->pc = 0x7F224508u;
    // 7F224508: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F22450C:
    ctx->pc = 0x7F22450Cu;
    // 7F22450C: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_7F224510:
    ctx->pc = 0x7F224510u;
    // 7F224510: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F224514:
    ctx->pc = 0x7F224514u;
    // 7F224514: bl      0x7F3C8210
    {
            ctx->lr = 0x7F224518u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F224518:
    ctx->pc = 0x7F224518u;
    ctx->downcount -= 6;
    // 7F224518: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F22451C:
    ctx->pc = 0x7F22451Cu;
    // 7F22451C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F224520:
    ctx->pc = 0x7F224520u;
    // 7F224520: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F224524:
    ctx->pc = 0x7F224524u;
    // 7F224524: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F224528:
    ctx->pc = 0x7F224528u;
    // 7F224528: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F22452C:
    ctx->pc = 0x7F22452Cu;
    ctx->downcount -= 8;
    // 7F22452C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F224530:
    ctx->pc = 0x7F224530u;
    // 7F224530: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F224534:
    ctx->pc = 0x7F224534u;
    // 7F224534: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F224538:
    ctx->pc = 0x7F224538u;
    // 7F224538: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F22453C:
    ctx->pc = 0x7F22453Cu;
    // 7F22453C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F224540:
    ctx->pc = 0x7F224540u;
    // 7F224540: lwz     r3, 212(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F224544:
    ctx->pc = 0x7F224544u;
    // 7F224544: cmplwi  r3, 0x0000
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

label_7F224548:
    ctx->pc = 0x7F224548u;
    // 7F224548: bc    12, 2, 0x7F224558
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F224558;
        }
    }

label_7F22454C:
    ctx->pc = 0x7F22454Cu;
    ctx->downcount -= 1;
    // 7F22454C: bl      0x7F3BA300
    {
            ctx->lr = 0x7F224550u;
            ctx->pc = 0x7F3BA300u;
            return;
    }

label_7F224550:
    ctx->pc = 0x7F224550u;
    ctx->downcount -= 2;
    // 7F224550: lwz     r3, 212(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F224554:
    ctx->pc = 0x7F224554u;
    // 7F224554: bl      0x7F3BA234
    {
            ctx->lr = 0x7F224558u;
            ctx->pc = 0x7F3BA234u;
            return;
    }

label_7F224558:
    ctx->pc = 0x7F224558u;
    ctx->downcount -= 3;
    // 7F224558: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F22455C:
    ctx->pc = 0x7F22455Cu;
    // 7F22455C: cmplwi  r3, 0x0000
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

label_7F224560:
    ctx->pc = 0x7F224560u;
    // 7F224560: bc    12, 2, 0x7F224568
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F224568;
        }
    }

label_7F224564:
    ctx->pc = 0x7F224564u;
    ctx->downcount -= 1;
    // 7F224564: bl      0x7F3C92C4
    {
            ctx->lr = 0x7F224568u;
            ctx->pc = 0x7F3C92C4u;
            return;
    }

label_7F224568:
    ctx->pc = 0x7F224568u;
    ctx->downcount -= 3;
    // 7F224568: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F22456C:
    ctx->pc = 0x7F22456Cu;
    // 7F22456C: cmplwi  r3, 0x0000
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

label_7F224570:
    ctx->pc = 0x7F224570u;
    // 7F224570: bc    12, 2, 0x7F224578
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F224578;
        }
    }

label_7F224574:
    ctx->pc = 0x7F224574u;
    ctx->downcount -= 1;
    // 7F224574: bl      0x7F3C92C4
    {
            ctx->lr = 0x7F224578u;
            ctx->pc = 0x7F3C92C4u;
            return;
    }

label_7F224578:
    ctx->pc = 0x7F224578u;
    ctx->downcount -= 3;
    // 7F224578: lwz     r3, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F22457C:
    ctx->pc = 0x7F22457Cu;
    // 7F22457C: cmplwi  r3, 0x0000
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

label_7F224580:
    ctx->pc = 0x7F224580u;
    // 7F224580: bc    12, 2, 0x7F224588
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F224588;
        }
    }

label_7F224584:
    ctx->pc = 0x7F224584u;
    ctx->downcount -= 1;
    // 7F224584: bl      0x7F3C92C4
    {
            ctx->lr = 0x7F224588u;
            ctx->pc = 0x7F3C92C4u;
            return;
    }

label_7F224588:
    ctx->pc = 0x7F224588u;
    ctx->downcount -= 3;
    // 7F224588: lwz     r0, 224(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(224);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F22458C:
    ctx->pc = 0x7F22458Cu;
    // 7F22458C: cmplwi  r0, 0x0000
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

label_7F224590:
    ctx->pc = 0x7F224590u;
    // 7F224590: bc    12, 2, 0x7F22459C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F22459C;
        }
    }

label_7F224594:
    ctx->pc = 0x7F224594u;
    ctx->downcount -= 2;
    // 7F224594: addi    r3, r31, 224
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(224);

label_7F224598:
    ctx->pc = 0x7F224598u;
    // 7F224598: bl      0x7F2EA3DC
    {
            ctx->lr = 0x7F22459Cu;
            ctx->pc = 0x7F2EA3DCu;
            return;
    }

label_7F22459C:
    ctx->pc = 0x7F22459Cu;
    ctx->downcount -= 6;
    // 7F22459C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2245A0:
    ctx->pc = 0x7F2245A0u;
    // 7F2245A0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2245A4:
    ctx->pc = 0x7F2245A4u;
    // 7F2245A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2245A8:
    ctx->pc = 0x7F2245A8u;
    // 7F2245A8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2245AC:
    ctx->pc = 0x7F2245ACu;
    // 7F2245AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F2245B0:
    ctx->pc = 0x7F2245B0u;
    ctx->downcount -= 47;
    // 7F2245B0: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2245B4:
    ctx->pc = 0x7F2245B4u;
    // 7F2245B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2245B8:
    ctx->pc = 0x7F2245B8u;
    // 7F2245B8: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2245BC:
    ctx->pc = 0x7F2245BCu;
    // 7F2245BC: stfd     f31, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2245BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F2245C0:
    ctx->pc = 0x7F2245C0u;
    // 7F2245C0: psq_st   f31, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2245C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F2245C0u);
        if (ctx->exception) return;
    }

label_7F2245C4:
    ctx->pc = 0x7F2245C4u;
    // 7F2245C4: stfd     f30, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2245C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F2245C8:
    ctx->pc = 0x7F2245C8u;
    // 7F2245C8: psq_st   f30, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2245C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F2245C8u);
        if (ctx->exception) return;
    }

label_7F2245CC:
    ctx->pc = 0x7F2245CCu;
    // 7F2245CC: stfd     f29, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2245CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F2245D0:
    ctx->pc = 0x7F2245D0u;
    // 7F2245D0: psq_st   f29, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2245D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F2245D0u);
        if (ctx->exception) return;
    }

label_7F2245D4:
    ctx->pc = 0x7F2245D4u;
    // 7F2245D4: stfd     f28, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2245D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F2245D8:
    ctx->pc = 0x7F2245D8u;
    // 7F2245D8: psq_st   f28, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2245D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F2245D8u);
        if (ctx->exception) return;
    }

label_7F2245DC:
    ctx->pc = 0x7F2245DCu;
    // 7F2245DC: stfd     f27, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2245DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F2245E0:
    ctx->pc = 0x7F2245E0u;
    // 7F2245E0: psq_st   f27, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2245E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F2245E0u);
        if (ctx->exception) return;
    }

label_7F2245E4:
    ctx->pc = 0x7F2245E4u;
    // 7F2245E4: stfd     f26, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2245E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

label_7F2245E8:
    ctx->pc = 0x7F2245E8u;
    // 7F2245E8: psq_st   f26, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2245E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x7F2245E8u);
        if (ctx->exception) return;
    }

label_7F2245EC:
    ctx->pc = 0x7F2245ECu;
    // 7F2245EC: stfd     f25, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2245ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[25]));
    }

label_7F2245F0:
    ctx->pc = 0x7F2245F0u;
    // 7F2245F0: psq_st   f25, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2245F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 25u, ea, false, 0u, false, 0x7F2245F0u);
        if (ctx->exception) return;
    }

label_7F2245F4:
    ctx->pc = 0x7F2245F4u;
    // 7F2245F4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2245F8:
    ctx->pc = 0x7F2245F8u;
    // 7F2245F8: lis     r11, 32582
    ctx->gpr[11] = ((u32)(s32)(32582) << 16);

label_7F2245FC:
    ctx->pc = 0x7F2245FCu;
    // 7F2245FC: lis     r10, 32582
    ctx->gpr[10] = ((u32)(s32)(32582) << 16);

label_7F224600:
    ctx->pc = 0x7F224600u;
    // 7F224600: lis     r9, 32582
    ctx->gpr[9] = ((u32)(s32)(32582) << 16);

label_7F224604:
    ctx->pc = 0x7F224604u;
    // 7F224604: lis     r8, 32582
    ctx->gpr[8] = ((u32)(s32)(32582) << 16);

label_7F224608:
    ctx->pc = 0x7F224608u;
    // 7F224608: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F22460C:
    ctx->pc = 0x7F22460Cu;
    // 7F22460C: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F224610:
    ctx->pc = 0x7F224610u;
    // 7F224610: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F224614:
    ctx->pc = 0x7F224614u;
    // 7F224614: srawi r0, r4, 1
    {
        u32 sh = 1u;
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

label_7F224618:
    ctx->pc = 0x7F224618u;
    // 7F224618: lfs     f25, 17428(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F224618u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(17428);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[25] = value;
        ctx->ps1[25] = value;
    }

label_7F22461C:
    ctx->pc = 0x7F22461Cu;
    // 7F22461C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F224620:
    ctx->pc = 0x7F224620u;
    // 7F224620: lfs     f26, 17468(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F224620u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(17468);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

label_7F224624:
    ctx->pc = 0x7F224624u;
    // 7F224624: addze  r31, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[31] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F224628:
    ctx->pc = 0x7F224628u;
    // 7F224628: lfs     f27, 17472(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F224628u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(17472);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[27] = value;
        ctx->ps1[27] = value;
    }

label_7F22462C:
    ctx->pc = 0x7F22462Cu;
    // 7F22462C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F224630:
    ctx->pc = 0x7F224630u;
    // 7F224630: lfs     f28, 17480(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F224630u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(17480);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F224634:
    ctx->pc = 0x7F224634u;
    // 7F224634: lfs     f29, 17476(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F224634u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(17476);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F224638:
    ctx->pc = 0x7F224638u;
    // 7F224638: lfs     f30, 17488(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F224638u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(17488);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F22463C:
    ctx->pc = 0x7F22463Cu;
    // 7F22463C: lfs     f31, 17484(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F22463Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(17484);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F224640:
    ctx->pc = 0x7F224640u;
    // 7F224640: b       0x7F2246B8
    {
            goto label_7F2246B8;
    }

label_7F224644:
    ctx->downcount -= 1;
    // 7F224644: bl      0x7F224788
    {
            ctx->lr = 0x7F224648u;
            goto label_7F224788;
    }

label_7F224648:
    ctx->pc = 0x7F224648u;
    ctx->downcount -= 3;
    // 7F224648: fmadds f0, f25, f1, f26
    if (!ppc_fp_available_inline(ctx, 0x7F224648u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[25], ctx->fpr[1], ctx->fpr[26], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F22464C:
    ctx->pc = 0x7F22464Cu;
    // 7F22464C: stfs     f0, 0(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F22464Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F224650:
    // 7F224650: bl      0x7F224730
    {
            ctx->lr = 0x7F224654u;
            goto label_7F224730;
    }

label_7F224654:
    ctx->pc = 0x7F224654u;
    ctx->downcount -= 3;
    // 7F224654: fmuls   f0, f27, f1
    if (!ppc_fp_available_inline(ctx, 0x7F224654u)) return;
    ppc_fmuls(ctx, 0, 27, 1);

label_7F224658:
    ctx->pc = 0x7F224658u;
    // 7F224658: stfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F224658u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F22465C:
    // 7F22465C: bl      0x7F224788
    {
            ctx->lr = 0x7F224660u;
            goto label_7F224788;
    }

label_7F224660:
    ctx->pc = 0x7F224660u;
    ctx->downcount -= 5;
    // 7F224660: fmadds f0, f28, f1, f29
    if (!ppc_fp_available_inline(ctx, 0x7F224660u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[28], ctx->fpr[1], ctx->fpr[29], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F224664:
    // 7F224664: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F224668:
    ctx->pc = 0x7F224668u;
    // 7F224668: stfs     f0, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F224668u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F22466C:
    ctx->pc = 0x7F22466Cu;
    // 7F22466C: sth     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F224670:
    // 7F224670: bl      0x7F22470C
    {
            ctx->lr = 0x7F224674u;
            goto label_7F22470C;
    }

label_7F224674:
    ctx->downcount -= 7;
    // 7F224674: rlwinm r0, r3, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F224678:
    ctx->pc = 0x7F224678u;
    // 7F224678: sth     r0, 14(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F22467C:
    ctx->pc = 0x7F22467Cu;
    // 7F22467C: lfs     f0, 0(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F22467Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F224680:
    ctx->pc = 0x7F224680u;
    // 7F224680: stfs     f0, 16(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F224680u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F224684:
    ctx->pc = 0x7F224684u;
    // 7F224684: lfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F224684u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F224688:
    ctx->pc = 0x7F224688u;
    // 7F224688: stfs     f0, 20(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F224688u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F22468C:
    // 7F22468C: bl      0x7F224788
    {
            ctx->lr = 0x7F224690u;
            goto label_7F224788;
    }

label_7F224690:
    ctx->pc = 0x7F224690u;
    ctx->downcount -= 10;
    // 7F224690: lfs     f0, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F224690u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F224694:
    // 7F224694: li      r0, 1024
    ctx->gpr[0] = (u32)(s32)(1024);

label_7F224698:
    // 7F224698: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F22469C:
    ctx->pc = 0x7F22469Cu;
    // 7F22469C: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F22469Cu)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_7F2246A0:
    ctx->pc = 0x7F2246A0u;
    // 7F2246A0: fnmsubs f0, f30, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2246A0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[30], ctx->fpr[1], ctx->fpr[0], true, true, true, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F2246A4:
    ctx->pc = 0x7F2246A4u;
    // 7F2246A4: stfs     f0, 24(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2246A4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2246A8:
    ctx->pc = 0x7F2246A8u;
    // 7F2246A8: sth     r0, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2246AC:
    ctx->pc = 0x7F2246ACu;
    // 7F2246AC: lha     r0, 14(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(14);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2246B0:
    ctx->pc = 0x7F2246B0u;
    // 7F2246B0: sth     r0, 30(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2246B4:
    // 7F2246B4: addi    r29, r29, 32
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(32);

label_7F2246B8:
    ctx->downcount -= 2;
    // 7F2246B8: cmpw    r30, r31
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2246BC:
    // 7F2246BC: bc    12, 0, 0x7F224644
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F224644u;
                return;
            }
            goto label_7F224644;
        }
    }

label_7F2246C0:
    ctx->pc = 0x7F2246C0u;
    ctx->downcount -= 30;
    // 7F2246C0: psq_l   f31, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2246C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F2246C0u);
        if (ctx->exception) return;
    }

label_7F2246C4:
    ctx->pc = 0x7F2246C4u;
    // 7F2246C4: lfd     f31, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2246C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2246C8:
    ctx->pc = 0x7F2246C8u;
    // 7F2246C8: psq_l   f30, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2246C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F2246C8u);
        if (ctx->exception) return;
    }

label_7F2246CC:
    ctx->pc = 0x7F2246CCu;
    // 7F2246CC: lfd     f30, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2246CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2246D0:
    ctx->pc = 0x7F2246D0u;
    // 7F2246D0: psq_l   f29, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2246D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F2246D0u);
        if (ctx->exception) return;
    }

label_7F2246D4:
    ctx->pc = 0x7F2246D4u;
    // 7F2246D4: lfd     f29, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2246D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2246D8:
    ctx->pc = 0x7F2246D8u;
    // 7F2246D8: psq_l   f28, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2246D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F2246D8u);
        if (ctx->exception) return;
    }

label_7F2246DC:
    ctx->pc = 0x7F2246DCu;
    // 7F2246DC: lfd     f28, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2246DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2246E0:
    ctx->pc = 0x7F2246E0u;
    // 7F2246E0: psq_l   f27, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2246E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F2246E0u);
        if (ctx->exception) return;
    }

label_7F2246E4:
    ctx->pc = 0x7F2246E4u;
    // 7F2246E4: lfd     f27, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2246E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2246E8:
    ctx->pc = 0x7F2246E8u;
    // 7F2246E8: psq_l   f26, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2246E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x7F2246E8u);
        if (ctx->exception) return;
    }

label_7F2246EC:
    ctx->pc = 0x7F2246ECu;
    // 7F2246EC: lfd     f26, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2246ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2246F0:
    ctx->pc = 0x7F2246F0u;
    // 7F2246F0: psq_l   f25, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2246F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 25u, ea, false, 0u, false, 0x7F2246F0u);
        if (ctx->exception) return;
    }

label_7F2246F4:
    ctx->pc = 0x7F2246F4u;
    // 7F2246F4: lfd     f25, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2246F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2246F8:
    ctx->pc = 0x7F2246F8u;
    // 7F2246F8: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2246FC:
    ctx->pc = 0x7F2246FCu;
    // 7F2246FC: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F224700:
    ctx->pc = 0x7F224700u;
    // 7F224700: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F224704:
    ctx->pc = 0x7F224704u;
    // 7F224704: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_7F224708:
    ctx->pc = 0x7F224708u;
    // 7F224708: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F22470C:
    ctx->pc = 0x7F22470Cu;
    ctx->downcount -= 13;
    // 7F22470C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F224710:
    ctx->pc = 0x7F224710u;
    // 7F224710: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F224714:
    ctx->pc = 0x7F224714u;
    // 7F224714: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F224718:
    ctx->pc = 0x7F224718u;
    // 7F224718: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F22471C:
    ctx->pc = 0x7F22471Cu;
    // 7F22471C: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F224720:
    ctx->pc = 0x7F224720u;
    // 7F224720: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F224724:
    ctx->pc = 0x7F224724u;
    // 7F224724: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F224728:
    ctx->pc = 0x7F224728u;
    // 7F224728: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F22472C:
    ctx->pc = 0x7F22472Cu;
    // 7F22472C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F224730:
    ctx->pc = 0x7F224730u;
    ctx->downcount -= 4;
    // 7F224730: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F224734:
    ctx->pc = 0x7F224734u;
    // 7F224734: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F224738:
    ctx->pc = 0x7F224738u;
    // 7F224738: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F22473C:
    ctx->pc = 0x7F22473Cu;
    // 7F22473C: bl      0x7F22470C
    {
            ctx->lr = 0x7F224740u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F22470Cu;
                return;
            }
            goto label_7F22470C;
    }

label_7F224740:
    ctx->pc = 0x7F224740u;
    ctx->downcount -= 35;
    // 7F224740: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F224744:
    ctx->pc = 0x7F224744u;
    // 7F224744: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F224748:
    ctx->pc = 0x7F224748u;
    // 7F224748: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F22474C:
    ctx->pc = 0x7F22474Cu;
    // 7F22474C: addi    r5, r4, 17496
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(17496);

label_7F224750:
    ctx->pc = 0x7F224750u;
    // 7F224750: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F224754:
    ctx->pc = 0x7F224754u;
    // 7F224754: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F224754u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F224758:
    ctx->pc = 0x7F224758u;
    // 7F224758: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F22475C:
    ctx->pc = 0x7F22475Cu;
    // 7F22475C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F224760:
    ctx->pc = 0x7F224760u;
    // 7F224760: lfs     f1, 17492(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F224760u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17492);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F224764:
    ctx->pc = 0x7F224764u;
    // 7F224764: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224764u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F224768:
    ctx->pc = 0x7F224768u;
    // 7F224768: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F22476C:
    ctx->pc = 0x7F22476Cu;
    // 7F22476C: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F22476Cu)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F224770:
    ctx->pc = 0x7F224770u;
    // 7F224770: lfs     f0, 17416(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F224770u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17416);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F224774:
    ctx->pc = 0x7F224774u;
    // 7F224774: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F224774u)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_7F224778:
    ctx->pc = 0x7F224778u;
    // 7F224778: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F224778u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F22477C:
    ctx->pc = 0x7F22477Cu;
    // 7F22477C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F224780:
    ctx->pc = 0x7F224780u;
    // 7F224780: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F224784:
    ctx->pc = 0x7F224784u;
    // 7F224784: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F224788:
    ctx->pc = 0x7F224788u;
    ctx->downcount -= 4;
    // 7F224788: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F22478C:
    ctx->pc = 0x7F22478Cu;
    // 7F22478C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F224790:
    ctx->pc = 0x7F224790u;
    // 7F224790: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F224794:
    ctx->pc = 0x7F224794u;
    // 7F224794: bl      0x7F22470C
    {
            ctx->lr = 0x7F224798u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F22470Cu;
                return;
            }
            goto label_7F22470C;
    }

label_7F224798:
    ctx->pc = 0x7F224798u;
    ctx->downcount -= 31;
    // 7F224798: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F22479C:
    ctx->pc = 0x7F22479Cu;
    // 7F22479C: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2247A0:
    ctx->pc = 0x7F2247A0u;
    // 7F2247A0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2247A4:
    ctx->pc = 0x7F2247A4u;
    // 7F2247A4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2247A8:
    ctx->pc = 0x7F2247A8u;
    // 7F2247A8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2247AC:
    ctx->pc = 0x7F2247ACu;
    // 7F2247AC: lfd     f2, 17496(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2247ACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17496);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2247B0:
    ctx->pc = 0x7F2247B0u;
    // 7F2247B0: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2247B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2247B4:
    ctx->pc = 0x7F2247B4u;
    // 7F2247B4: lfs     f0, 17504(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2247B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17504);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2247B8:
    ctx->pc = 0x7F2247B8u;
    // 7F2247B8: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2247B8u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F2247BC:
    ctx->pc = 0x7F2247BCu;
    // 7F2247BC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2247C0:
    ctx->pc = 0x7F2247C0u;
    // 7F2247C0: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2247C0u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F2247C4:
    ctx->pc = 0x7F2247C4u;
    // 7F2247C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2247C8:
    ctx->pc = 0x7F2247C8u;
    // 7F2247C8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2247CC:
    ctx->pc = 0x7F2247CCu;
    // 7F2247CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F2247D0:
    ctx->pc = 0x7F2247D0u;
    ctx->downcount -= 7;
    // 7F2247D0: lwz     r4, 92(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2247D4:
    ctx->pc = 0x7F2247D4u;
    // 7F2247D4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2247D8:
    ctx->pc = 0x7F2247D8u;
    // 7F2247D8: lwz     r5, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2247DC:
    ctx->pc = 0x7F2247DCu;
    // 7F2247DC: lwz     r6, 68(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(68);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2247E0:
    ctx->pc = 0x7F2247E0u;
    // 7F2247E0: lhz     r0, 56(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F2247E4:
    ctx->pc = 0x7F2247E4u;
    // 7F2247E4: stw     r0, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2247E8:
    ctx->pc = 0x7F2247E8u;
    // 7F2247E8: b       0x7F224800
    {
            goto label_7F224800;
    }

label_7F2247EC:
    loop_7F2247EC(ctx);
    if (ctx->pc == 0x7F22480Cu) goto label_7F22480C;
    return;
label_7F2247F0:
    // 7F2247F0: addi    r0, r7, 260
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(260);

label_7F2247F4:
    // 7F2247F4: addi    r6, r6, 36
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(36);

label_7F2247F8:
    // 7F2247F8: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_7F2247FC:
    ctx->pc = 0x7F2247FCu;
    // 7F2247FC: stbx    r4, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F224800:
    ctx->pc = 0x7F224800u;
    ctx->downcount -= 3;
    // 7F224800: lhz     r0, 56(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F224804:
    // 7F224804: cmpw    r7, r0
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

label_7F224808:
    // 7F224808: bc    12, 0, 0x7F2247EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2247ECu;
                return;
            }
            goto label_7F2247EC;
        }
    }

label_7F22480C:
    ctx->pc = 0x7F22480Cu;
    ctx->downcount -= 1;
    // 7F22480C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F224810:
    ctx->pc = 0x7F224810u;
    ctx->downcount -= 59;
    // 7F224810: stwu     r1, -288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-288);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F224814:
    ctx->pc = 0x7F224814u;
    // 7F224814: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F224818:
    ctx->pc = 0x7F224818u;
    // 7F224818: stw     r0, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F22481C:
    ctx->pc = 0x7F22481Cu;
    // 7F22481C: stfd     f31, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F22481Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F224820:
    ctx->pc = 0x7F224820u;
    // 7F224820: psq_st   f31, 280(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F224820u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F224820u);
        if (ctx->exception) return;
    }

label_7F224824:
    ctx->pc = 0x7F224824u;
    // 7F224824: stfd     f30, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224824u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F224828:
    ctx->pc = 0x7F224828u;
    // 7F224828: psq_st   f30, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F224828u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F224828u);
        if (ctx->exception) return;
    }

label_7F22482C:
    ctx->pc = 0x7F22482Cu;
    // 7F22482C: stfd     f29, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F22482Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F224830:
    ctx->pc = 0x7F224830u;
    // 7F224830: psq_st   f29, 248(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F224830u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F224830u);
        if (ctx->exception) return;
    }

label_7F224834:
    ctx->pc = 0x7F224834u;
    // 7F224834: stfd     f28, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224834u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F224838:
    ctx->pc = 0x7F224838u;
    // 7F224838: psq_st   f28, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F224838u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F224838u);
        if (ctx->exception) return;
    }

label_7F22483C:
    ctx->pc = 0x7F22483Cu;
    // 7F22483C: stfd     f27, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F22483Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F224840:
    ctx->pc = 0x7F224840u;
    // 7F224840: psq_st   f27, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F224840u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F224840u);
        if (ctx->exception) return;
    }

label_7F224844:
    ctx->pc = 0x7F224844u;
    // 7F224844: stfd     f26, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224844u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

label_7F224848:
    ctx->pc = 0x7F224848u;
    // 7F224848: psq_st   f26, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F224848u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x7F224848u);
        if (ctx->exception) return;
    }

label_7F22484C:
    ctx->pc = 0x7F22484Cu;
    // 7F22484C: stfd     f25, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F22484Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[25]));
    }

label_7F224850:
    ctx->pc = 0x7F224850u;
    // 7F224850: psq_st   f25, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F224850u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_store_inline(ctx, 25u, ea, false, 0u, false, 0x7F224850u);
        if (ctx->exception) return;
    }

label_7F224854:
    ctx->pc = 0x7F224854u;
    // 7F224854: stfd     f24, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224854u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[24]));
    }

label_7F224858:
    ctx->pc = 0x7F224858u;
    // 7F224858: psq_st   f24, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F224858u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 24u, ea, false, 0u, false, 0x7F224858u);
        if (ctx->exception) return;
    }

label_7F22485C:
    ctx->pc = 0x7F22485Cu;
    // 7F22485C: stmw     r14, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        for (u32 r = 14; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F224860:
    ctx->pc = 0x7F224860u;
    // 7F224860: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F224864:
    ctx->pc = 0x7F224864u;
    // 7F224864: lis     r17, 32582
    ctx->gpr[17] = ((u32)(s32)(32582) << 16);

label_7F224868:
    ctx->pc = 0x7F224868u;
    // 7F224868: lwz     r31, 17508(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17508);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F22486C:
    ctx->pc = 0x7F22486Cu;
    // 7F22486C: lis     r16, 32582
    ctx->gpr[16] = ((u32)(s32)(32582) << 16);

label_7F224870:
    ctx->pc = 0x7F224870u;
    // 7F224870: lis     r15, 32582
    ctx->gpr[15] = ((u32)(s32)(32582) << 16);

label_7F224874:
    ctx->pc = 0x7F224874u;
    // 7F224874: lis     r14, 32582
    ctx->gpr[14] = ((u32)(s32)(32582) << 16);

label_7F224878:
    ctx->pc = 0x7F224878u;
    // 7F224878: lis     r12, 32582
    ctx->gpr[12] = ((u32)(s32)(32582) << 16);

label_7F22487C:
    ctx->pc = 0x7F22487Cu;
    // 7F22487C: lis     r11, 32582
    ctx->gpr[11] = ((u32)(s32)(32582) << 16);

label_7F224880:
    ctx->pc = 0x7F224880u;
    // 7F224880: lis     r10, 32582
    ctx->gpr[10] = ((u32)(s32)(32582) << 16);

label_7F224884:
    ctx->pc = 0x7F224884u;
    // 7F224884: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F224888:
    ctx->pc = 0x7F224888u;
    // 7F224888: lfs     f31, 17524(r14)
    if (!ppc_fp_available_inline(ctx, 0x7F224888u)) return;
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(17524);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F22488C:
    ctx->pc = 0x7F22488Cu;
    // 7F22488C: or   r20, r6, r6
    {
        ctx->gpr[20] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F224890:
    ctx->pc = 0x7F224890u;
    // 7F224890: stw     r31, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F224894:
    ctx->pc = 0x7F224894u;
    // 7F224894: or   r21, r7, r7
    {
        ctx->gpr[21] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F224898:
    ctx->pc = 0x7F224898u;
    // 7F224898: lfs     f28, 17512(r17)
    if (!ppc_fp_available_inline(ctx, 0x7F224898u)) return;
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(17512);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F22489C:
    ctx->pc = 0x7F22489Cu;
    // 7F22489C: or   r22, r8, r8
    {
        ctx->gpr[22] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F2248A0:
    ctx->pc = 0x7F2248A0u;
    // 7F2248A0: lfs     f29, 17516(r16)
    if (!ppc_fp_available_inline(ctx, 0x7F2248A0u)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(17516);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F2248A4:
    ctx->pc = 0x7F2248A4u;
    // 7F2248A4: or   r23, r9, r9
    {
        ctx->gpr[23] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F2248A8:
    ctx->pc = 0x7F2248A8u;
    // 7F2248A8: lfs     f30, 17520(r15)
    if (!ppc_fp_available_inline(ctx, 0x7F2248A8u)) return;
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(17520);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F2248AC:
    ctx->pc = 0x7F2248ACu;
    // 7F2248AC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2248B0:
    ctx->pc = 0x7F2248B0u;
    // 7F2248B0: lfs     f24, 17412(r12)
    if (!ppc_fp_available_inline(ctx, 0x7F2248B0u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(17412);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[24] = value;
        ctx->ps1[24] = value;
    }

label_7F2248B4:
    ctx->pc = 0x7F2248B4u;
    // 7F2248B4: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2248B8:
    ctx->pc = 0x7F2248B8u;
    // 7F2248B8: lfd     f25, 17352(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F2248B8u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(17352);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2248BC:
    ctx->pc = 0x7F2248BCu;
    // 7F2248BC: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F2248C0:
    ctx->pc = 0x7F2248C0u;
    // 7F2248C0: lfs     f26, 17460(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F2248C0u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(17460);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

label_7F2248C4:
    ctx->pc = 0x7F2248C4u;
    // 7F2248C4: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_7F2248C8:
    ctx->pc = 0x7F2248C8u;
    // 7F2248C8: lfs     f27, 17464(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2248C8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17464);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[27] = value;
        ctx->ps1[27] = value;
    }

label_7F2248CC:
    ctx->pc = 0x7F2248CCu;
    // 7F2248CC: lis     r14, 17200
    ctx->gpr[14] = ((u32)(s32)(17200) << 16);

label_7F2248D0:
    ctx->pc = 0x7F2248D0u;
    // 7F2248D0: b       0x7F224AF8
    {
            goto label_7F224AF8;
    }

label_7F2248D4:
    ctx->downcount -= 4;
    // 7F2248D4: li      r16, 0
    ctx->gpr[16] = (u32)(s32)(0);

label_7F2248D8:
    // 7F2248D8: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F2248DC:
    // 7F2248DC: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_7F2248E0:
    // 7F2248E0: b       0x7F224AD4
    {
            goto label_7F224AD4;
    }

label_7F2248E4:
    ctx->downcount -= 3;
    // 7F2248E4: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F2248E8:
    // 7F2248E8: li      r17, 0
    ctx->gpr[17] = (u32)(s32)(0);

label_7F2248EC:
    // 7F2248EC: b       0x7F224AB0
    {
            goto label_7F224AB0;
    }

label_7F2248F0:
    ctx->pc = 0x7F2248F0u;
    ctx->downcount -= 7;
    // 7F2248F0: lwz     r5, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2248F4:
    // 7F2248F4: addi    r0, r17, 28
    ctx->gpr[0] = ctx->gpr[17] + (u32)(s32)(28);

label_7F2248F8:
    // 7F2248F8: li      r3, 152
    ctx->gpr[3] = (u32)(s32)(152);

label_7F2248FC:
    // 7F2248FC: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F224900:
    ctx->pc = 0x7F224900u;
    // 7F224900: lhzx    r24, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[24] = mem_read16(ctx, ea);
    }

label_7F224904:
    // 7F224904: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F224908:
    // 7F224908: bl      0x80042E0C
    {
            ctx->lr = 0x7F22490Cu;
            ctx->pc = 0x80042E0Cu;
            return;
    }

label_7F22490C:
    ctx->downcount -= 2;
    // 7F22490C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F224910:
    // 7F224910: b       0x7F224A9C
    {
            goto label_7F224A9C;
    }

label_7F224914:
    ctx->pc = 0x7F224914u;
    ctx->downcount -= 120;
    // 7F224914: lwz     r3, 100(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F224918:
    // 7F224918: li      r6, 20
    ctx->gpr[6] = (u32)(s32)(20);

label_7F22491C:
    ctx->pc = 0x7F22491Cu;
    // 7F22491C: lwz     r5, 84(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(84);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F224920:
    ctx->pc = 0x7F224920u;
    // 7F224920: lhax    r0, r3, r16
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[16];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F224924:
    ctx->pc = 0x7F224924u;
    // 7F224924: lwz     r4, 96(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(96);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F224928:
    // 7F224928: rlwinm r3, r0, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F22492C:
    ctx->pc = 0x7F22492Cu;
    // 7F22492C: lhax    r0, r5, r16
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[16];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F224930:
    // 7F224930: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F224934:
    ctx->pc = 0x7F224934u;
    // 7F224934: lwz     r4, 80(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F224938:
    ctx->pc = 0x7F224938u;
    // 7F224938: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F224938u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F22493C:
    // 7F22493C: rlwinm r3, r0, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F224940:
    // 7F224940: add   r3, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F224944:
    ctx->pc = 0x7F224944u;
    // 7F224944: lfs     f0, 4(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F224944u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F224948:
    ctx->pc = 0x7F224948u;
    // 7F224948: fmuls   f1, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F224948u)) return;
    ppc_fmuls(ctx, 1, 1, 31);

label_7F22494C:
    ctx->pc = 0x7F22494Cu;
    // 7F22494C: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F22494Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F224950:
    ctx->pc = 0x7F224950u;
    // 7F224950: fmuls   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F224950u)) return;
    ppc_fmuls(ctx, 0, 0, 31);

label_7F224954:
    ctx->pc = 0x7F224954u;
    // 7F224954: lfs     f2, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F224954u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F224958:
    ctx->pc = 0x7F224958u;
    // 7F224958: fadds   f3, f28, f3
    if (!ppc_fp_available_inline(ctx, 0x7F224958u)) return;
    ppc_fadds(ctx, 3, 28, 3);

label_7F22495C:
    ctx->pc = 0x7F22495Cu;
    // 7F22495C: fmuls   f1, f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F22495Cu)) return;
    ppc_fmuls(ctx, 1, 30, 1);

label_7F224960:
    ctx->pc = 0x7F224960u;
    // 7F224960: fmuls   f0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F224960u)) return;
    ppc_fmuls(ctx, 0, 30, 0);

label_7F224964:
    ctx->pc = 0x7F224964u;
    // 7F224964: fmuls   f3, f3, f29
    if (!ppc_fp_available_inline(ctx, 0x7F224964u)) return;
    ppc_fmuls(ctx, 3, 3, 29);

label_7F224968:
    ctx->pc = 0x7F224968u;
    // 7F224968: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F224968u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F22496C:
    ctx->pc = 0x7F22496Cu;
    // 7F22496C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F22496Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F224970:
    ctx->pc = 0x7F224970u;
    // 7F224970: fctiwz    f3, f3
    if (!ppc_fp_available_inline(ctx, 0x7F224970u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[3], true, &result)) ctx->fpr[3] = dolrecomp_f64_from_bits(result); }

label_7F224974:
    ctx->pc = 0x7F224974u;
    // 7F224974: stfd     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224974u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F224978:
    ctx->pc = 0x7F224978u;
    // 7F224978: fctiwz    f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F224978u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F22497C:
    ctx->pc = 0x7F22497Cu;
    // 7F22497C: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F224980:
    ctx->pc = 0x7F224980u;
    // 7F224980: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224980u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F224984:
    // 7F224984: divw   r5, r3, r6
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[6];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[5] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F224988:
    ctx->pc = 0x7F224988u;
    // 7F224988: lwz     r4, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F22498C:
    ctx->pc = 0x7F22498Cu;
    // 7F22498C: stfd     f3, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F22498Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_7F224990:
    ctx->pc = 0x7F224990u;
    // 7F224990: stfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224990u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F224994:
    ctx->pc = 0x7F224994u;
    // 7F224994: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F224998:
    ctx->pc = 0x7F224998u;
    // 7F224998: lwz     r7, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F22499C:
    // 7F22499C: addi    r7, r7, 2240
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(2240);

label_7F2249A0:
    // 7F2249A0: add   r8, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_7F2249A4:
    // 7F2249A4: srawi r5, r7, 4
    {
        u32 sh = 4u;
        u32 value = ctx->gpr[7];
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

label_7F2249A8:
    // 7F2249A8: divw   r4, r4, r6
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[6];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[4] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F2249AC:
    // 7F2249AC: cmpwi   r8, 8184
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(8184);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2249B0:
    // 7F2249B0: addze  r6, r5
    {
        u32 a = ctx->gpr[5];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[6] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F2249B4:
    // 7F2249B4: add   r4, r6, r4
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2249B8:
    // 7F2249B8: bc    4, 1, 0x7F2249C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2249C0;
        }
    }

label_7F2249BC:
    ctx->downcount -= 1;
    // 7F2249BC: li      r8, 8184
    ctx->gpr[8] = (u32)(s32)(8184);

label_7F2249C0:
    ctx->downcount -= 2;
    // 7F2249C0: cmpwi   r4, 7160
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(7160);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2249C4:
    // 7F2249C4: bc    4, 1, 0x7F2249CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2249CC;
        }
    }

label_7F2249C8:
    ctx->downcount -= 1;
    // 7F2249C8: li      r4, 7160
    ctx->gpr[4] = (u32)(s32)(7160);

label_7F2249CC:
    ctx->downcount -= 2;
    // 7F2249CC: cmpwi   r8, 8
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2249D0:
    // 7F2249D0: bc    4, 0, 0x7F2249D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2249D8;
        }
    }

label_7F2249D4:
    ctx->downcount -= 1;
    // 7F2249D4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2249D8:
    ctx->downcount -= 2;
    // 7F2249D8: cmpwi   r4, 8
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2249DC:
    // 7F2249DC: bc    4, 0, 0x7F2249E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2249E4;
        }
    }

label_7F2249E0:
    ctx->downcount -= 1;
    // 7F2249E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2249E4:
    ctx->downcount -= 97;
    // 7F2249E4: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F2249E8:
    // 7F2249E8: rlwinm r7, r0, 2, 14, 29
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0x0003FFFCu;
    }

label_7F2249EC:
    ctx->pc = 0x7F2249ECu;
    // 7F2249EC: stw     r4, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2249F0:
    // 7F2249F0: rlwinm r4, r3, 13, 0, 18
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 13u) & 0xFFFFE000u;
    }

label_7F2249F4:
    // 7F2249F4: mulli   r3, r6, 7168
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[6] * (s64)(s32)7168);

label_7F2249F8:
    // 7F2249F8: li      r0, 448
    ctx->gpr[0] = (u32)(s32)(448);

label_7F2249FC:
    ctx->pc = 0x7F2249FCu;
    // 7F2249FC: stw     r14, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[14]);
    }

label_7F224A00:
    // 7F224A00: xoris   r5, r8, 0x8000
    ctx->gpr[5] = ctx->gpr[8] ^ (0x8000u << 16);

label_7F224A04:
    // 7F224A04: srawi r4, r4, 9
    {
        u32 sh = 9u;
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

label_7F224A08:
    ctx->pc = 0x7F224A08u;
    // 7F224A08: lfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224A08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F224A0C:
    ctx->pc = 0x7F224A0Cu;
    // 7F224A0C: stw     r5, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F224A10:
    // 7F224A10: divw   r0, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F224A14:
    ctx->pc = 0x7F224A14u;
    // 7F224A14: fsubs   f0, f0, f25
    if (!ppc_fp_available_inline(ctx, 0x7F224A14u)) return;
    ppc_fsubs(ctx, 0, 0, 25);

label_7F224A18:
    // 7F224A18: add   r6, r30, r7
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F224A1C:
    ctx->pc = 0x7F224A1Cu;
    // 7F224A1C: stw     r14, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[14]);
    }

label_7F224A20:
    // 7F224A20: addze  r4, r4
    {
        u32 a = ctx->gpr[4];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F224A24:
    // 7F224A24: add   r5, r29, r7
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F224A28:
    ctx->pc = 0x7F224A28u;
    // 7F224A28: fdivs   f0, f0, f27
    if (!ppc_fp_available_inline(ctx, 0x7F224A28u)) return;
    ppc_fdivs(ctx, 0, 0, 27);

label_7F224A2C:
    ctx->pc = 0x7F224A2Cu;
    // 7F224A2C: lfd     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224A2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F224A30:
    ctx->pc = 0x7F224A30u;
    // 7F224A30: sth     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F224A34:
    ctx->pc = 0x7F224A34u;
    // 7F224A34: sth     r0, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F224A38:
    ctx->pc = 0x7F224A38u;
    // 7F224A38: stwx    r31, r20, r7
    {
        u32 ea = ctx->gpr[20] + ctx->gpr[7];
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F224A3C:
    ctx->pc = 0x7F224A3Cu;
    // 7F224A3C: fsubs   f1, f1, f25
    if (!ppc_fp_available_inline(ctx, 0x7F224A3Cu)) return;
    ppc_fsubs(ctx, 1, 1, 25);

label_7F224A40:
    ctx->pc = 0x7F224A40u;
    // 7F224A40: fmuls   f0, f24, f0
    if (!ppc_fp_available_inline(ctx, 0x7F224A40u)) return;
    ppc_fmuls(ctx, 0, 24, 0);

label_7F224A44:
    ctx->pc = 0x7F224A44u;
    // 7F224A44: fmuls   f1, f1, f26
    if (!ppc_fp_available_inline(ctx, 0x7F224A44u)) return;
    ppc_fmuls(ctx, 1, 1, 26);

label_7F224A48:
    ctx->pc = 0x7F224A48u;
    // 7F224A48: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F224A48u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F224A4C:
    ctx->pc = 0x7F224A4Cu;
    // 7F224A4C: fmuls   f1, f24, f1
    if (!ppc_fp_available_inline(ctx, 0x7F224A4Cu)) return;
    ppc_fmuls(ctx, 1, 24, 1);

label_7F224A50:
    ctx->pc = 0x7F224A50u;
    // 7F224A50: stfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224A50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F224A54:
    ctx->pc = 0x7F224A54u;
    // 7F224A54: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F224A54u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F224A58:
    ctx->pc = 0x7F224A58u;
    // 7F224A58: lwz     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F224A5C:
    ctx->pc = 0x7F224A5Cu;
    // 7F224A5C: stfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224A5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F224A60:
    ctx->pc = 0x7F224A60u;
    // 7F224A60: lwz     r3, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F224A64:
    ctx->pc = 0x7F224A64u;
    // 7F224A64: sth     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F224A68:
    ctx->pc = 0x7F224A68u;
    // 7F224A68: sth     r0, 2(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F224A6C:
    ctx->pc = 0x7F224A6Cu;
    // 7F224A6C: lwz     r3, 84(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F224A70:
    ctx->pc = 0x7F224A70u;
    // 7F224A70: lhax    r0, r3, r16
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[16];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F224A74:
    // 7F224A74: add   r0, r0, r19
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F224A78:
    // 7F224A78: rlwinm r15, r0, 0, 16, 31
    {
        ctx->gpr[15] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F224A7C:
    // 7F224A7C: or   r3, r15, r15
    {
        ctx->gpr[3] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F224A80:
    // 7F224A80: bl      0x7F224B70
    {
            ctx->lr = 0x7F224A84u;
            goto label_7F224B70;
    }

label_7F224A84:
    ctx->downcount -= 2;
    // 7F224A84: or   r3, r15, r15
    {
        ctx->gpr[3] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F224A88:
    // 7F224A88: bl      0x7F224B64
    {
            ctx->lr = 0x7F224A8Cu;
            goto label_7F224B64;
    }

label_7F224A8C:
    ctx->downcount -= 2;
    // 7F224A8C: or   r3, r15, r15
    {
        ctx->gpr[3] = ctx->gpr[15] | ctx->gpr[15];
    }

label_7F224A90:
    // 7F224A90: bl      0x7F224B58
    {
            ctx->lr = 0x7F224A94u;
            goto label_7F224B58;
    }

label_7F224A94:
    ctx->downcount -= 2;
    // 7F224A94: addi    r16, r16, 2
    ctx->gpr[16] = ctx->gpr[16] + (u32)(s32)(2);

label_7F224A98:
    // 7F224A98: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F224A9C:
    ctx->downcount -= 2;
    // 7F224A9C: cmpw    r28, r24
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(ctx->gpr[24]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F224AA0:
    // 7F224AA0: bc    12, 0, 0x7F224914
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F224914u;
                return;
            }
            goto label_7F224914;
        }
    }

label_7F224AA4:
    ctx->downcount -= 1;
    // 7F224AA4: bl      0x7F224B54
    {
            ctx->lr = 0x7F224AA8u;
            goto label_7F224B54;
    }

label_7F224AA8:
    ctx->downcount -= 2;
    // 7F224AA8: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F224AAC:
    // 7F224AAC: addi    r17, r17, 32
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(32);

label_7F224AB0:
    ctx->pc = 0x7F224AB0u;
    ctx->downcount -= 7;
    // 7F224AB0: lwz     r3, 92(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F224AB4:
    ctx->pc = 0x7F224AB4u;
    // 7F224AB4: lwz     r3, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F224AB8:
    ctx->pc = 0x7F224AB8u;
    // 7F224AB8: lwz     r0, 140(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F224ABC:
    // 7F224ABC: add   r3, r18, r0
    {
        u32 a = ctx->gpr[18];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F224AC0:
    ctx->pc = 0x7F224AC0u;
    // 7F224AC0: lhz     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F224AC4:
    // 7F224AC4: cmpw    r26, r0
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

label_7F224AC8:
    // 7F224AC8: bc    12, 0, 0x7F2248F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2248F0u;
                return;
            }
            goto label_7F2248F0;
        }
    }

label_7F224ACC:
    ctx->downcount -= 2;
    // 7F224ACC: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F224AD0:
    // 7F224AD0: addi    r18, r18, 36
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(36);

label_7F224AD4:
    ctx->pc = 0x7F224AD4u;
    ctx->downcount -= 5;
    // 7F224AD4: lwz     r3, 92(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F224AD8:
    ctx->pc = 0x7F224AD8u;
    // 7F224AD8: lwz     r3, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F224ADC:
    ctx->pc = 0x7F224ADCu;
    // 7F224ADC: lhz     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F224AE0:
    // 7F224AE0: cmpw    r27, r0
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

label_7F224AE4:
    // 7F224AE4: bc    12, 0, 0x7F2248E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2248E4u;
                return;
            }
            goto label_7F2248E4;
        }
    }

label_7F224AE8:
    ctx->downcount -= 4;
    // 7F224AE8: addi    r30, r30, 340
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(340);

label_7F224AEC:
    // 7F224AEC: addi    r29, r29, 340
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(340);

label_7F224AF0:
    // 7F224AF0: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F224AF4:
    // 7F224AF4: addi    r19, r19, 85
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(85);

label_7F224AF8:
    ctx->downcount -= 2;
    // 7F224AF8: cmpw    r25, r23
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(ctx->gpr[23]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F224AFC:
    // 7F224AFC: bc    12, 0, 0x7F2248D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2248D4u;
                return;
            }
            goto label_7F2248D4;
        }
    }

label_7F224B00:
    ctx->pc = 0x7F224B00u;
    ctx->downcount -= 32;
    // 7F224B00: psq_l   f31, 280(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F224B00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F224B00u);
        if (ctx->exception) return;
    }

label_7F224B04:
    ctx->pc = 0x7F224B04u;
    // 7F224B04: lfd     f31, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224B04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F224B08:
    ctx->pc = 0x7F224B08u;
    // 7F224B08: psq_l   f30, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F224B08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F224B08u);
        if (ctx->exception) return;
    }

label_7F224B0C:
    ctx->pc = 0x7F224B0Cu;
    // 7F224B0C: lfd     f30, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224B0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F224B10:
    ctx->pc = 0x7F224B10u;
    // 7F224B10: psq_l   f29, 248(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F224B10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F224B10u);
        if (ctx->exception) return;
    }

label_7F224B14:
    ctx->pc = 0x7F224B14u;
    // 7F224B14: lfd     f29, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224B14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F224B18:
    ctx->pc = 0x7F224B18u;
    // 7F224B18: psq_l   f28, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F224B18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F224B18u);
        if (ctx->exception) return;
    }

label_7F224B1C:
    ctx->pc = 0x7F224B1Cu;
    // 7F224B1C: lfd     f28, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224B1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F224B20:
    ctx->pc = 0x7F224B20u;
    // 7F224B20: psq_l   f27, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F224B20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F224B20u);
        if (ctx->exception) return;
    }

label_7F224B24:
    ctx->pc = 0x7F224B24u;
    // 7F224B24: lfd     f27, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224B24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F224B28:
    ctx->pc = 0x7F224B28u;
    // 7F224B28: psq_l   f26, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F224B28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x7F224B28u);
        if (ctx->exception) return;
    }

label_7F224B2C:
    ctx->pc = 0x7F224B2Cu;
    // 7F224B2C: lfd     f26, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224B2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F224B30:
    ctx->pc = 0x7F224B30u;
    // 7F224B30: psq_l   f25, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F224B30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_load_inline(ctx, 25u, ea, false, 0u, false, 0x7F224B30u);
        if (ctx->exception) return;
    }

label_7F224B34:
    ctx->pc = 0x7F224B34u;
    // 7F224B34: lfd     f25, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224B34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F224B38:
    ctx->pc = 0x7F224B38u;
    // 7F224B38: psq_l   f24, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F224B38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 24u, ea, false, 0u, false, 0x7F224B38u);
        if (ctx->exception) return;
    }

label_7F224B3C:
    ctx->pc = 0x7F224B3Cu;
    // 7F224B3C: lfd     f24, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F224B3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[24] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F224B40:
    ctx->pc = 0x7F224B40u;
    // 7F224B40: lmw     r14, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        for (u32 r = 14; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F224B44:
    ctx->pc = 0x7F224B44u;
    // 7F224B44: lwz     r0, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F224B48:
    ctx->pc = 0x7F224B48u;
    // 7F224B48: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F224B4C:
    ctx->pc = 0x7F224B4Cu;
    // 7F224B4C: addi    r1, r1, 288
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(288);

label_7F224B50:
    ctx->pc = 0x7F224B50u;
    // 7F224B50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F224B54:
    ctx->pc = 0x7F224B54u;
    ctx->downcount -= 1;
    // 7F224B54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F224B58:
    ctx->pc = 0x7F224B58u;
    ctx->downcount -= 3;
    // 7F224B58: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_7F224B5C:
    ctx->pc = 0x7F224B5Cu;
    // 7F224B5C: sth     r3, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F224B60:
    ctx->pc = 0x7F224B60u;
    // 7F224B60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F224B64:
    ctx->pc = 0x7F224B64u;
    ctx->downcount -= 3;
    // 7F224B64: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_7F224B68:
    ctx->pc = 0x7F224B68u;
    // 7F224B68: sth     r3, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F224B6C:
    ctx->pc = 0x7F224B6Cu;
    // 7F224B6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F224B70:
    ctx->pc = 0x7F224B70u;
    ctx->downcount -= 3;
    // 7F224B70: lis     r4, -13311
    ctx->gpr[4] = ((u32)(s32)(-13311) << 16);

label_7F224B74:
    ctx->pc = 0x7F224B74u;
    // 7F224B74: sth     r3, -32768(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32768);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F224B78:
    ctx->pc = 0x7F224B78u;
    // 7F224B78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F224B7C:
    ctx->pc = 0x7F224B7Cu;
    ctx->downcount -= 16;
    // 7F224B7C: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F224B80:
    ctx->pc = 0x7F224B80u;
    // 7F224B80: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F224B84:
    ctx->pc = 0x7F224B84u;
    // 7F224B84: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F224B88:
    ctx->pc = 0x7F224B88u;
    // 7F224B88: stmw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F224B8C:
    ctx->pc = 0x7F224B8Cu;
    // 7F224B8C: or.   r27, r3, r3
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

label_7F224B90:
    ctx->pc = 0x7F224B90u;
    // 7F224B90: bc    12, 2, 0x7F224D64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F224D64;
        }
    }

label_7F224B94:
    ctx->pc = 0x7F224B94u;
    ctx->downcount -= 13;
    // 7F224B94: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F224B98:
    ctx->pc = 0x7F224B98u;
    // 7F224B98: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F224B9C:
    ctx->pc = 0x7F224B9Cu;
    // 7F224B9C: addi    r5, r4, -12088
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-12088);

label_7F224BA0:
    ctx->pc = 0x7F224BA0u;
    // 7F224BA0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F224BA4:
    ctx->pc = 0x7F224BA4u;
    // 7F224BA4: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F224BA8:
    ctx->pc = 0x7F224BA8u;
    // 7F224BA8: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_7F224BAC:
    ctx->pc = 0x7F224BACu;
    // 7F224BAC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F224BB0:
    ctx->pc = 0x7F224BB0u;
    // 7F224BB0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F224BB4:
    ctx->pc = 0x7F224BB4u;
    // 7F224BB4: add   r7, r27, r0
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F224BB8:
    ctx->pc = 0x7F224BB8u;
    // 7F224BB8: lwz     r30, 56(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(56);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F224BBC:
    ctx->pc = 0x7F224BBCu;
    // 7F224BBC: lwz     r29, 64(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(64);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F224BC0:
    ctx->pc = 0x7F224BC0u;
    // 7F224BC0: lwz     r28, 72(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(72);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F224BC4:
    ctx->pc = 0x7F224BC4u;
    // 7F224BC4: bl      0x80046238
    {
            ctx->lr = 0x7F224BC8u;
            ctx->pc = 0x80046238u;
            return;
    }

label_7F224BC8:
    ctx->pc = 0x7F224BC8u;
    ctx->downcount -= 4;
    // 7F224BC8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F224BCC:
    ctx->pc = 0x7F224BCCu;
    // 7F224BCC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F224BD0:
    ctx->pc = 0x7F224BD0u;
    // 7F224BD0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F224BD4:
    ctx->pc = 0x7F224BD4u;
    // 7F224BD4: bl      0x800462E4
    {
            ctx->lr = 0x7F224BD8u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_7F224BD8:
    ctx->pc = 0x7F224BD8u;
    ctx->downcount -= 5;
    // 7F224BD8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F224BDC:
    ctx->pc = 0x7F224BDCu;
    // 7F224BDC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F224BE0:
    ctx->pc = 0x7F224BE0u;
    // 7F224BE0: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F224BE4:
    ctx->pc = 0x7F224BE4u;
    // 7F224BE4: li      r6, 448
    ctx->gpr[6] = (u32)(s32)(448);

label_7F224BE8:
    ctx->pc = 0x7F224BE8u;
    // 7F224BE8: bl      0x80043188
    {
            ctx->lr = 0x7F224BECu;
            ctx->pc = 0x80043188u;
            return;
    }

label_7F224BEC:
    ctx->pc = 0x7F224BECu;
    ctx->downcount -= 1;
    // 7F224BEC: bl      0x8004C3D0
    {
            ctx->lr = 0x7F224BF0u;
            ctx->pc = 0x8004C3D0u;
            return;
    }

label_7F224BF0:
    ctx->pc = 0x7F224BF0u;
    ctx->downcount -= 2;
    // 7F224BF0: or.   r31, r3, r3
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

label_7F224BF4:
    ctx->pc = 0x7F224BF4u;
    // 7F224BF4: bc    12, 2, 0x7F224C40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F224C40;
        }
    }

label_7F224BF8:
    ctx->pc = 0x7F224BF8u;
    ctx->downcount -= 3;
    // 7F224BF8: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F224BFC:
    ctx->pc = 0x7F224BFCu;
    // 7F224BFC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F224C00:
    ctx->pc = 0x7F224C00u;
    // 7F224C00: bl      0x8004B588
    {
            ctx->lr = 0x7F224C04u;
            ctx->pc = 0x8004B588u;
            return;
    }

label_7F224C04:
    ctx->pc = 0x7F224C04u;
    ctx->downcount -= 5;
    // 7F224C04: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F224C08:
    ctx->pc = 0x7F224C08u;
    // 7F224C08: li      r4, 448
    ctx->gpr[4] = (u32)(s32)(448);

label_7F224C0C:
    ctx->pc = 0x7F224C0Cu;
    // 7F224C0C: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F224C10:
    ctx->pc = 0x7F224C10u;
    // 7F224C10: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F224C14:
    ctx->pc = 0x7F224C14u;
    // 7F224C14: bl      0x80043238
    {
            ctx->lr = 0x7F224C18u;
            ctx->pc = 0x80043238u;
            return;
    }

label_7F224C18:
    ctx->pc = 0x7F224C18u;
    ctx->downcount -= 9;
    // 7F224C18: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F224C1C:
    ctx->pc = 0x7F224C1Cu;
    // 7F224C1C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F224C20:
    ctx->pc = 0x7F224C20u;
    // 7F224C20: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F224C24:
    ctx->pc = 0x7F224C24u;
    // 7F224C24: li      r6, 448
    ctx->gpr[6] = (u32)(s32)(448);

label_7F224C28:
    ctx->pc = 0x7F224C28u;
    // 7F224C28: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_7F224C2C:
    ctx->pc = 0x7F224C2Cu;
    // 7F224C2C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F224C30:
    ctx->pc = 0x7F224C30u;
    // 7F224C30: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F224C34:
    ctx->pc = 0x7F224C34u;
    // 7F224C34: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F224C38:
    ctx->pc = 0x7F224C38u;
    // 7F224C38: bl      0x8004439C
    {
            ctx->lr = 0x7F224C3Cu;
            ctx->pc = 0x8004439Cu;
            return;
    }

label_7F224C3C:
    ctx->pc = 0x7F224C3Cu;
    ctx->downcount -= 1;
    // 7F224C3C: b       0x7F224C90
    {
            goto label_7F224C90;
    }

label_7F224C40:
    ctx->pc = 0x7F224C40u;
    ctx->downcount -= 1;
    // 7F224C40: bl      0x8004C6F0
    {
            ctx->lr = 0x7F224C44u;
            ctx->pc = 0x8004C6F0u;
            return;
    }

label_7F224C44:
    ctx->pc = 0x7F224C44u;
    ctx->downcount -= 5;
    // 7F224C44: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F224C48:
    ctx->pc = 0x7F224C48u;
    // 7F224C48: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F224C4C:
    ctx->pc = 0x7F224C4Cu;
    // 7F224C4C: or   r31, r0, r0
    {
        ctx->gpr[31] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F224C50:
    ctx->pc = 0x7F224C50u;
    // 7F224C50: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F224C54:
    ctx->pc = 0x7F224C54u;
    // 7F224C54: bl      0x8004B784
    {
            ctx->lr = 0x7F224C58u;
            ctx->pc = 0x8004B784u;
            return;
    }

label_7F224C58:
    ctx->pc = 0x7F224C58u;
    ctx->downcount -= 5;
    // 7F224C58: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F224C5C:
    ctx->pc = 0x7F224C5Cu;
    // 7F224C5C: li      r4, 448
    ctx->gpr[4] = (u32)(s32)(448);

label_7F224C60:
    ctx->pc = 0x7F224C60u;
    // 7F224C60: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F224C64:
    ctx->pc = 0x7F224C64u;
    // 7F224C64: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F224C68:
    ctx->pc = 0x7F224C68u;
    // 7F224C68: bl      0x80043238
    {
            ctx->lr = 0x7F224C6Cu;
            ctx->pc = 0x80043238u;
            return;
    }

label_7F224C6C:
    ctx->pc = 0x7F224C6Cu;
    ctx->downcount -= 9;
    // 7F224C6C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F224C70:
    ctx->pc = 0x7F224C70u;
    // 7F224C70: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F224C74:
    ctx->pc = 0x7F224C74u;
    // 7F224C74: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F224C78:
    ctx->pc = 0x7F224C78u;
    // 7F224C78: li      r6, 448
    ctx->gpr[6] = (u32)(s32)(448);

label_7F224C7C:
    ctx->pc = 0x7F224C7Cu;
    // 7F224C7C: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_7F224C80:
    ctx->pc = 0x7F224C80u;
    // 7F224C80: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F224C84:
    ctx->pc = 0x7F224C84u;
    // 7F224C84: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F224C88:
    ctx->pc = 0x7F224C88u;
    // 7F224C88: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F224C8C:
    ctx->pc = 0x7F224C8Cu;
    // 7F224C8C: bl      0x8004439C
    {
            ctx->lr = 0x7F224C90u;
            ctx->pc = 0x8004439Cu;
            return;
    }

label_7F224C90:
    ctx->pc = 0x7F224C90u;
    ctx->downcount -= 3;
    // 7F224C90: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F224C94:
    ctx->pc = 0x7F224C94u;
    // 7F224C94: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F224C98:
    ctx->pc = 0x7F224C98u;
    // 7F224C98: bl      0x800438AC
    {
            ctx->lr = 0x7F224C9Cu;
            ctx->pc = 0x800438ACu;
            return;
    }

label_7F224C9C:
    ctx->pc = 0x7F224C9Cu;
    ctx->downcount -= 12;
    // 7F224C9C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F224CA0:
    ctx->pc = 0x7F224CA0u;
    // 7F224CA0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F224CA4:
    ctx->pc = 0x7F224CA4u;
    // 7F224CA4: addi    r5, r4, 17344
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(17344);

label_7F224CA8:
    ctx->pc = 0x7F224CA8u;
    // 7F224CA8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F224CAC:
    ctx->pc = 0x7F224CACu;
    // 7F224CAC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F224CACu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F224CB0:
    ctx->pc = 0x7F224CB0u;
    // 7F224CB0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F224CB4:
    ctx->pc = 0x7F224CB4u;
    // 7F224CB4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F224CB8:
    ctx->pc = 0x7F224CB8u;
    // 7F224CB8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F224CBC:
    ctx->pc = 0x7F224CBCu;
    // 7F224CBC: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F224CBCu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F224CC0:
    ctx->pc = 0x7F224CC0u;
    // 7F224CC0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F224CC4:
    ctx->pc = 0x7F224CC4u;
    // 7F224CC4: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F224CC4u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_7F224CC8:
    ctx->pc = 0x7F224CC8u;
    // 7F224CC8: bl      0x80044630
    {
            ctx->lr = 0x7F224CCCu;
            ctx->pc = 0x80044630u;
            return;
    }

label_7F224CCC:
    ctx->pc = 0x7F224CCCu;
    ctx->downcount -= 1;
    // 7F224CCC: bl      0x80042A40
    {
            ctx->lr = 0x7F224CD0u;
            ctx->pc = 0x80042A40u;
            return;
    }

label_7F224CD0:
    ctx->pc = 0x7F224CD0u;
    ctx->downcount -= 3;
    // 7F224CD0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F224CD4:
    ctx->pc = 0x7F224CD4u;
    // 7F224CD4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F224CD8:
    ctx->pc = 0x7F224CD8u;
    // 7F224CD8: bl      0x80044978
    {
            ctx->lr = 0x7F224CDCu;
            ctx->pc = 0x80044978u;
            return;
    }

label_7F224CDC:
    ctx->pc = 0x7F224CDCu;
    ctx->downcount -= 4;
    // 7F224CDC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F224CE0:
    ctx->pc = 0x7F224CE0u;
    // 7F224CE0: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F224CE4:
    ctx->pc = 0x7F224CE4u;
    // 7F224CE4: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F224CE8:
    ctx->pc = 0x7F224CE8u;
    // 7F224CE8: bl      0x80042184
    {
            ctx->lr = 0x7F224CECu;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F224CEC:
    ctx->pc = 0x7F224CECu;
    ctx->downcount -= 4;
    // 7F224CEC: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F224CF0:
    ctx->pc = 0x7F224CF0u;
    // 7F224CF0: li      r3, 11
    ctx->gpr[3] = (u32)(s32)(11);

label_7F224CF4:
    ctx->pc = 0x7F224CF4u;
    // 7F224CF4: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F224CF8:
    ctx->pc = 0x7F224CF8u;
    // 7F224CF8: bl      0x80042184
    {
            ctx->lr = 0x7F224CFCu;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F224CFC:
    ctx->pc = 0x7F224CFCu;
    ctx->downcount -= 4;
    // 7F224CFC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F224D00:
    ctx->pc = 0x7F224D00u;
    // 7F224D00: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_7F224D04:
    ctx->pc = 0x7F224D04u;
    // 7F224D04: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F224D08:
    ctx->pc = 0x7F224D08u;
    // 7F224D08: bl      0x80042184
    {
            ctx->lr = 0x7F224D0Cu;
            ctx->pc = 0x80042184u;
            return;
    }

label_7F224D0C:
    ctx->pc = 0x7F224D0Cu;
    ctx->downcount -= 3;
    // 7F224D0C: lwz     r3, 268(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(268);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F224D10:
    ctx->pc = 0x7F224D10u;
    // 7F224D10: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F224D14:
    ctx->pc = 0x7F224D14u;
    // 7F224D14: bl      0x7F22DE1C
    {
            ctx->lr = 0x7F224D18u;
            ctx->pc = 0x7F22DE1Cu;
            return;
    }

label_7F224D18:
    ctx->pc = 0x7F224D18u;
    ctx->downcount -= 3;
    // 7F224D18: rlwinm r4, r3, 5, 0, 26
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 5u) & 0xFFFFFFE0u;
    }

label_7F224D1C:
    ctx->pc = 0x7F224D1Cu;
    // 7F224D1C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F224D20:
    ctx->pc = 0x7F224D20u;
    // 7F224D20: bl      0x8001DA4C
    {
            ctx->lr = 0x7F224D24u;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_7F224D24:
    ctx->pc = 0x7F224D24u;
    ctx->downcount -= 3;
    // 7F224D24: lwz     r3, 268(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(268);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F224D28:
    ctx->pc = 0x7F224D28u;
    // 7F224D28: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F224D2C:
    ctx->pc = 0x7F224D2Cu;
    // 7F224D2C: bl      0x7F22DE1C
    {
            ctx->lr = 0x7F224D30u;
            ctx->pc = 0x7F22DE1Cu;
            return;
    }

label_7F224D30:
    ctx->pc = 0x7F224D30u;
    ctx->downcount -= 3;
    // 7F224D30: rlwinm r4, r3, 5, 0, 26
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 5u) & 0xFFFFFFE0u;
    }

label_7F224D34:
    ctx->pc = 0x7F224D34u;
    // 7F224D34: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F224D38:
    ctx->pc = 0x7F224D38u;
    // 7F224D38: bl      0x8001DA4C
    {
            ctx->lr = 0x7F224D3Cu;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_7F224D3C:
    ctx->pc = 0x7F224D3Cu;
    ctx->downcount -= 3;
    // 7F224D3C: lwz     r3, 268(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(268);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F224D40:
    ctx->pc = 0x7F224D40u;
    // 7F224D40: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F224D44:
    ctx->pc = 0x7F224D44u;
    // 7F224D44: bl      0x7F22DE1C
    {
            ctx->lr = 0x7F224D48u;
            ctx->pc = 0x7F22DE1Cu;
            return;
    }

label_7F224D48:
    ctx->pc = 0x7F224D48u;
    ctx->downcount -= 3;
    // 7F224D48: rlwinm r4, r3, 5, 0, 26
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 5u) & 0xFFFFFFE0u;
    }

label_7F224D4C:
    ctx->pc = 0x7F224D4Cu;
    // 7F224D4C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F224D50:
    ctx->pc = 0x7F224D50u;
    // 7F224D50: bl      0x8001DA4C
    {
            ctx->lr = 0x7F224D54u;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_7F224D54:
    ctx->pc = 0x7F224D54u;
    ctx->downcount -= 1;
    // 7F224D54: bl      0x8004D870
    {
            ctx->lr = 0x7F224D58u;
            ctx->pc = 0x8004D870u;
            return;
    }

label_7F224D58:
    ctx->pc = 0x7F224D58u;
    ctx->downcount -= 2;
    // 7F224D58: addi    r3, r27, 224
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(224);

label_7F224D5C:
    ctx->pc = 0x7F224D5Cu;
    // 7F224D5C: bl      0x7F2EA6CC
    {
            ctx->lr = 0x7F224D60u;
            ctx->pc = 0x7F2EA6CCu;
            return;
    }

label_7F224D60:
    ctx->pc = 0x7F224D60u;
    ctx->downcount -= 1;
    // 7F224D60: bl      0x8004D990
    {
            ctx->lr = 0x7F224D64u;
            ctx->pc = 0x8004D990u;
            return;
    }

label_7F224D64:
    ctx->pc = 0x7F224D64u;
    ctx->downcount -= 16;
    // 7F224D64: lmw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F224D68:
    ctx->pc = 0x7F224D68u;
    // 7F224D68: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F224D6C:
    ctx->pc = 0x7F224D6Cu;
    // 7F224D6C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F224D70:
    ctx->pc = 0x7F224D70u;
    // 7F224D70: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F224D74:
    ctx->pc = 0x7F224D74u;
    // 7F224D74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F224D78:
    ctx->pc = 0x7F224D78u;
    ctx->downcount -= 18;
    // 7F224D78: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F224D7C:
    ctx->pc = 0x7F224D7Cu;
    // 7F224D7C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F224D80:
    ctx->pc = 0x7F224D80u;
    // 7F224D80: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F224D84:
    ctx->pc = 0x7F224D84u;
    // 7F224D84: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F224D88:
    ctx->pc = 0x7F224D88u;
    // 7F224D88: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F224D8C:
    ctx->pc = 0x7F224D8Cu;
    // 7F224D8C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F224D90:
    ctx->pc = 0x7F224D90u;
    // 7F224D90: addi    r3, r4, 8760
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(8760);

label_7F224D94:
    ctx->pc = 0x7F224D94u;
    // 7F224D94: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F224D98u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F224D98:
    ctx->pc = 0x7F224D98u;
    ctx->downcount -= 2;
    // 7F224D98: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F224D9C:
    ctx->pc = 0x7F224D9Cu;
    // 7F224D9C: bl      0x7F3C8470
    {
            ctx->lr = 0x7F224DA0u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F224DA0:
    ctx->pc = 0x7F224DA0u;
    ctx->downcount -= 1;
    // 7F224DA0: bl      0x7F3C8480
    {
            ctx->lr = 0x7F224DA4u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F224DA4:
    ctx->pc = 0x7F224DA4u;
    ctx->downcount -= 3;
    // 7F224DA4: or.   r28, r3, r3
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

label_7F224DA8:
    ctx->pc = 0x7F224DA8u;
    // 7F224DA8: stw     r28, 268(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F224DAC:
    ctx->pc = 0x7F224DACu;
    // 7F224DAC: bc    4, 2, 0x7F224DB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F224DB8;
        }
    }

label_7F224DB0:
    ctx->pc = 0x7F224DB0u;
    ctx->downcount -= 2;
    // 7F224DB0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F224DB4:
    ctx->pc = 0x7F224DB4u;
    // 7F224DB4: b       0x7F224F3C
    {
            goto label_7F224F3C;
    }

label_7F224DB8:
    ctx->pc = 0x7F224DB8u;
    ctx->downcount -= 3;
    // 7F224DB8: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F224DBC:
    ctx->pc = 0x7F224DBCu;
    // 7F224DBC: addi    r3, r3, 8760
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8760);

label_7F224DC0:
    ctx->pc = 0x7F224DC0u;
    // 7F224DC0: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F224DC4u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F224DC4:
    ctx->pc = 0x7F224DC4u;
    ctx->downcount -= 2;
    // 7F224DC4: li      r4, 99
    ctx->gpr[4] = (u32)(s32)(99);

label_7F224DC8:
    ctx->pc = 0x7F224DC8u;
    // 7F224DC8: bl      0x7F3C8470
    {
            ctx->lr = 0x7F224DCCu;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F224DCC:
    ctx->pc = 0x7F224DCCu;
    ctx->downcount -= 1;
    // 7F224DCC: bl      0x7F3C8480
    {
            ctx->lr = 0x7F224DD0u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F224DD0:
    ctx->pc = 0x7F224DD0u;
    ctx->downcount -= 3;
    // 7F224DD0: or.   r27, r3, r3
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

label_7F224DD4:
    ctx->pc = 0x7F224DD4u;
    // 7F224DD4: stw     r3, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F224DD8:
    ctx->pc = 0x7F224DD8u;
    // 7F224DD8: bc    4, 2, 0x7F224DE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F224DE4;
        }
    }

label_7F224DDC:
    ctx->pc = 0x7F224DDCu;
    ctx->downcount -= 2;
    // 7F224DDC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F224DE0:
    ctx->pc = 0x7F224DE0u;
    // 7F224DE0: b       0x7F224F3C
    {
            goto label_7F224F3C;
    }

label_7F224DE4:
    ctx->pc = 0x7F224DE4u;
    ctx->downcount -= 3;
    // 7F224DE4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F224DE8:
    ctx->pc = 0x7F224DE8u;
    // 7F224DE8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F224DEC:
    ctx->pc = 0x7F224DECu;
    // 7F224DEC: bl      0x7F22DE1C
    {
            ctx->lr = 0x7F224DF0u;
            ctx->pc = 0x7F22DE1Cu;
            return;
    }

label_7F224DF0:
    ctx->pc = 0x7F224DF0u;
    ctx->downcount -= 5;
    // 7F224DF0: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F224DF4:
    ctx->pc = 0x7F224DF4u;
    // 7F224DF4: rlwinm r30, r3, 5, 0, 26
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[3], 5u) & 0xFFFFFFE0u;
    }

label_7F224DF8:
    ctx->pc = 0x7F224DF8u;
    // 7F224DF8: stw     r26, 252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F224DFC:
    ctx->pc = 0x7F224DFCu;
    // 7F224DFC: rlwinm r3, r3, 6, 0, 25
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 6u) & 0xFFFFFFC0u;
    }

label_7F224E00:
    ctx->pc = 0x7F224E00u;
    // 7F224E00: bl      0x7F3C9148
    {
            ctx->lr = 0x7F224E04u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F224E04:
    ctx->pc = 0x7F224E04u;
    ctx->downcount -= 2;
    // 7F224E04: cmplwi  r3, 0x0000
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

label_7F224E08:
    ctx->pc = 0x7F224E08u;
    // 7F224E08: bc    4, 2, 0x7F224E14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F224E14;
        }
    }

label_7F224E0C:
    ctx->pc = 0x7F224E0Cu;
    ctx->downcount -= 2;
    // 7F224E0C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F224E10:
    ctx->pc = 0x7F224E10u;
    // 7F224E10: b       0x7F224F3C
    {
            goto label_7F224F3C;
    }

label_7F224E14:
    ctx->pc = 0x7F224E14u;
    ctx->downcount -= 6;
    // 7F224E14: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F224E18:
    ctx->pc = 0x7F224E18u;
    // 7F224E18: add   r0, r3, r30
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F224E1C:
    ctx->pc = 0x7F224E1Cu;
    // 7F224E1C: rlwinm r29, r30, 1, 0, 30
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[30], 1u) & 0xFFFFFFFEu;
    }

label_7F224E20:
    ctx->pc = 0x7F224E20u;
    // 7F224E20: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F224E24:
    ctx->pc = 0x7F224E24u;
    // 7F224E24: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F224E28:
    ctx->pc = 0x7F224E28u;
    // 7F224E28: bl      0x7F3C9148
    {
            ctx->lr = 0x7F224E2Cu;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F224E2C:
    ctx->pc = 0x7F224E2Cu;
    ctx->downcount -= 2;
    // 7F224E2C: cmplwi  r3, 0x0000
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

label_7F224E30:
    ctx->pc = 0x7F224E30u;
    // 7F224E30: bc    4, 2, 0x7F224E3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F224E3C;
        }
    }

label_7F224E34:
    ctx->pc = 0x7F224E34u;
    ctx->downcount -= 2;
    // 7F224E34: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F224E38:
    ctx->pc = 0x7F224E38u;
    // 7F224E38: b       0x7F224F3C
    {
            goto label_7F224F3C;
    }

label_7F224E3C:
    ctx->pc = 0x7F224E3Cu;
    ctx->downcount -= 5;
    // 7F224E3C: stw     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F224E40:
    ctx->pc = 0x7F224E40u;
    // 7F224E40: add   r0, r3, r30
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F224E44:
    ctx->pc = 0x7F224E44u;
    // 7F224E44: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F224E48:
    ctx->pc = 0x7F224E48u;
    // 7F224E48: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F224E4C:
    ctx->pc = 0x7F224E4Cu;
    // 7F224E4C: bl      0x7F3C9148
    {
            ctx->lr = 0x7F224E50u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F224E50:
    ctx->pc = 0x7F224E50u;
    ctx->downcount -= 2;
    // 7F224E50: cmplwi  r3, 0x0000
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

label_7F224E54:
    ctx->pc = 0x7F224E54u;
    // 7F224E54: bc    4, 2, 0x7F224E60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F224E60;
        }
    }

label_7F224E58:
    ctx->pc = 0x7F224E58u;
    ctx->downcount -= 2;
    // 7F224E58: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F224E5C:
    ctx->pc = 0x7F224E5Cu;
    // 7F224E5C: b       0x7F224F3C
    {
            goto label_7F224F3C;
    }

label_7F224E60:
    ctx->pc = 0x7F224E60u;
    ctx->downcount -= 7;
    // 7F224E60: stw     r3, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F224E64:
    ctx->pc = 0x7F224E64u;
    // 7F224E64: add   r0, r3, r30
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F224E68:
    ctx->pc = 0x7F224E68u;
    // 7F224E68: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F224E6C:
    ctx->pc = 0x7F224E6Cu;
    // 7F224E6C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F224E70:
    ctx->pc = 0x7F224E70u;
    // 7F224E70: stw     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F224E74:
    ctx->pc = 0x7F224E74u;
    // 7F224E74: li      r5, 128
    ctx->gpr[5] = (u32)(s32)(128);

label_7F224E78:
    ctx->pc = 0x7F224E78u;
    // 7F224E78: bl      0x7F3BA1AC
    {
            ctx->lr = 0x7F224E7Cu;
            ctx->pc = 0x7F3BA1ACu;
            return;
    }

label_7F224E7C:
    ctx->pc = 0x7F224E7Cu;
    ctx->downcount -= 3;
    // 7F224E7C: or.   r29, r3, r3
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

label_7F224E80:
    ctx->pc = 0x7F224E80u;
    // 7F224E80: stw     r29, 212(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F224E84:
    ctx->pc = 0x7F224E84u;
    // 7F224E84: bc    4, 2, 0x7F224E90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F224E90;
        }
    }

label_7F224E88:
    ctx->pc = 0x7F224E88u;
    ctx->downcount -= 2;
    // 7F224E88: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F224E8C:
    ctx->pc = 0x7F224E8Cu;
    // 7F224E8C: b       0x7F224F3C
    {
            goto label_7F224F3C;
    }

label_7F224E90:
    ctx->pc = 0x7F224E90u;
    ctx->downcount -= 1;
    // 7F224E90: bl      0x7F3BA260
    {
            ctx->lr = 0x7F224E94u;
            ctx->pc = 0x7F3BA260u;
            return;
    }

label_7F224E94:
    ctx->pc = 0x7F224E94u;
    ctx->downcount -= 3;
    // 7F224E94: addi    r3, r31, 224
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(224);

label_7F224E98:
    ctx->pc = 0x7F224E98u;
    // 7F224E98: li      r4, 424
    ctx->gpr[4] = (u32)(s32)(424);

label_7F224E9C:
    ctx->pc = 0x7F224E9Cu;
    // 7F224E9C: bl      0x7F2EA328
    {
            ctx->lr = 0x7F224EA0u;
            ctx->pc = 0x7F2EA328u;
            return;
    }

label_7F224EA0:
    ctx->pc = 0x7F224EA0u;
    ctx->downcount -= 5;
    // 7F224EA0: lis     r4, 32546
    ctx->gpr[4] = ((u32)(s32)(32546) << 16);

label_7F224EA4:
    ctx->pc = 0x7F224EA4u;
    // 7F224EA4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F224EA8:
    ctx->pc = 0x7F224EA8u;
    // 7F224EA8: addi    r4, r4, 19324
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(19324);

label_7F224EAC:
    ctx->pc = 0x7F224EACu;
    // 7F224EAC: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F224EB0:
    ctx->pc = 0x7F224EB0u;
    // 7F224EB0: bl      0x7F3BA254
    {
            ctx->lr = 0x7F224EB4u;
            ctx->pc = 0x7F3BA254u;
            return;
    }

label_7F224EB4:
    ctx->pc = 0x7F224EB4u;
    ctx->downcount -= 3;
    // 7F224EB4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F224EB8:
    ctx->pc = 0x7F224EB8u;
    // 7F224EB8: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F224EBC:
    ctx->pc = 0x7F224EBCu;
    // 7F224EBC: bl      0x7F2247D0
    {
            ctx->lr = 0x7F224EC0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2247D0u;
                return;
            }
            goto label_7F2247D0;
    }

label_7F224EC0:
    ctx->pc = 0x7F224EC0u;
    ctx->downcount -= 3;
    // 7F224EC0: addi    r3, r31, 80
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(80);

label_7F224EC4:
    ctx->pc = 0x7F224EC4u;
    // 7F224EC4: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_7F224EC8:
    ctx->pc = 0x7F224EC8u;
    // 7F224EC8: bl      0x7F2245B0
    {
            ctx->lr = 0x7F224ECCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2245B0u;
                return;
            }
            goto label_7F2245B0;
    }

label_7F224ECC:
    ctx->pc = 0x7F224ECCu;
    ctx->downcount -= 2;
    // 7F224ECC: addi    r3, r31, 224
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(224);

label_7F224ED0:
    ctx->pc = 0x7F224ED0u;
    // 7F224ED0: bl      0x7F2EA428
    {
            ctx->lr = 0x7F224ED4u;
            ctx->pc = 0x7F2EA428u;
            return;
    }

label_7F224ED4:
    ctx->pc = 0x7F224ED4u;
    ctx->downcount -= 2;
    // 7F224ED4: addi    r3, r31, 224
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(224);

label_7F224ED8:
    ctx->pc = 0x7F224ED8u;
    // 7F224ED8: bl      0x7F2EA4A0
    {
            ctx->lr = 0x7F224EDCu;
            ctx->pc = 0x7F2EA4A0u;
            return;
    }

label_7F224EDC:
    ctx->pc = 0x7F224EDCu;
    ctx->downcount -= 2;
    // 7F224EDC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F224EE0:
    ctx->pc = 0x7F224EE0u;
    // 7F224EE0: bl      0x7F224F50
    {
            ctx->lr = 0x7F224EE4u;
            goto label_7F224F50;
    }

label_7F224EE4:
    ctx->pc = 0x7F224EE4u;
    ctx->downcount -= 2;
    // 7F224EE4: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F224EE8:
    ctx->pc = 0x7F224EE8u;
    // 7F224EE8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F224EEC:
    ctx->downcount -= 10;
    // 7F224EEC: add   r3, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F224EF0:
    // 7F224EF0: or   r7, r27, r27
    {
        ctx->gpr[7] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F224EF4:
    ctx->pc = 0x7F224EF4u;
    // 7F224EF4: lwz     r4, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F224EF8:
    // 7F224EF8: or   r8, r28, r28
    {
        ctx->gpr[8] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F224EFC:
    ctx->pc = 0x7F224EFCu;
    // 7F224EFC: lwz     r5, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F224F00:
    // 7F224F00: or   r10, r26, r26
    {
        ctx->gpr[10] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F224F04:
    ctx->pc = 0x7F224F04u;
    // 7F224F04: lwz     r6, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F224F08:
    // 7F224F08: addi    r3, r31, 80
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(80);

label_7F224F0C:
    // 7F224F0C: li      r9, 8
    ctx->gpr[9] = (u32)(s32)(8);

label_7F224F10:
    // 7F224F10: bl      0x7F224810
    {
            ctx->lr = 0x7F224F14u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F224810u;
                return;
            }
            goto label_7F224810;
    }

label_7F224F14:
    ctx->downcount -= 4;
    // 7F224F14: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F224F18:
    // 7F224F18: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F224F1C:
    // 7F224F1C: cmpwi   r25, 2
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

label_7F224F20:
    // 7F224F20: bc    12, 0, 0x7F224EEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F224EECu;
                return;
            }
            goto label_7F224EEC;
        }
    }

label_7F224F24:
    ctx->pc = 0x7F224F24u;
    ctx->downcount -= 3;
    // 7F224F24: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F224F28:
    ctx->pc = 0x7F224F28u;
    // 7F224F28: addi    r3, r31, 224
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(224);

label_7F224F2C:
    ctx->pc = 0x7F224F2Cu;
    // 7F224F2C: bl      0x7F2EA688
    {
            ctx->lr = 0x7F224F30u;
            ctx->pc = 0x7F2EA688u;
            return;
    }

label_7F224F30:
    ctx->pc = 0x7F224F30u;
    ctx->downcount -= 3;
    // 7F224F30: li      r0, 120
    ctx->gpr[0] = (u32)(s32)(120);

label_7F224F34:
    ctx->pc = 0x7F224F34u;
    // 7F224F34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F224F38:
    ctx->pc = 0x7F224F38u;
    // 7F224F38: stw     r0, 220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F224F3C:
    ctx->pc = 0x7F224F3Cu;
    ctx->downcount -= 16;
    // 7F224F3C: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F224F40:
    ctx->pc = 0x7F224F40u;
    // 7F224F40: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F224F44:
    ctx->pc = 0x7F224F44u;
    // 7F224F44: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F224F48:
    ctx->pc = 0x7F224F48u;
    // 7F224F48: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F224F4C:
    ctx->pc = 0x7F224F4Cu;
    // 7F224F4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F224F50:
    ctx->pc = 0x7F224F50u;
    ctx->downcount -= 4;
    // 7F224F50: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F224F54:
    ctx->pc = 0x7F224F54u;
    // 7F224F54: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F224F58:
    ctx->pc = 0x7F224F58u;
    // 7F224F58: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F224F5C:
    ctx->pc = 0x7F224F5Cu;
    // 7F224F5C: bl      0x80041BD4
    {
            ctx->lr = 0x7F224F60u;
            ctx->pc = 0x80041BD4u;
            return;
    }

label_7F224F60:
    ctx->pc = 0x7F224F60u;
    ctx->downcount -= 3;
    // 7F224F60: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F224F64:
    ctx->pc = 0x7F224F64u;
    // 7F224F64: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F224F68:
    ctx->pc = 0x7F224F68u;
    // 7F224F68: bl      0x80041500
    {
            ctx->lr = 0x7F224F6Cu;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F224F6C:
    ctx->pc = 0x7F224F6Cu;
    ctx->downcount -= 3;
    // 7F224F6C: li      r3, 11
    ctx->gpr[3] = (u32)(s32)(11);

label_7F224F70:
    ctx->pc = 0x7F224F70u;
    // 7F224F70: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F224F74:
    ctx->pc = 0x7F224F74u;
    // 7F224F74: bl      0x80041500
    {
            ctx->lr = 0x7F224F78u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F224F78:
    ctx->pc = 0x7F224F78u;
    ctx->downcount -= 3;
    // 7F224F78: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_7F224F7C:
    ctx->pc = 0x7F224F7Cu;
    // 7F224F7C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F224F80:
    ctx->pc = 0x7F224F80u;
    // 7F224F80: bl      0x80041500
    {
            ctx->lr = 0x7F224F84u;
            ctx->pc = 0x80041500u;
            return;
    }

label_7F224F84:
    ctx->pc = 0x7F224F84u;
    ctx->downcount -= 1;
    // 7F224F84: bl      0x7F2EA9DC
    {
            ctx->lr = 0x7F224F88u;
            ctx->pc = 0x7F2EA9DCu;
            return;
    }

label_7F224F88:
    ctx->pc = 0x7F224F88u;
    ctx->downcount -= 5;
    // 7F224F88: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F224F8C:
    ctx->pc = 0x7F224F8Cu;
    // 7F224F8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F224F90:
    ctx->pc = 0x7F224F90u;
    // 7F224F90: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F224F94:
    ctx->pc = 0x7F224F94u;
    // 7F224F94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F224F98:
    ctx->pc = 0x7F224F98u;
    ctx->downcount -= 9;
    // 7F224F98: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F224F9C:
    ctx->pc = 0x7F224F9Cu;
    // 7F224F9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F224FA0:
    ctx->pc = 0x7F224FA0u;
    // 7F224FA0: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F224FA4:
    ctx->pc = 0x7F224FA4u;
    // 7F224FA4: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F224FA8:
    ctx->pc = 0x7F224FA8u;
    // 7F224FA8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F224FAC:
    ctx->pc = 0x7F224FACu;
    // 7F224FAC: li      r5, 272
    ctx->gpr[5] = (u32)(s32)(272);

label_7F224FB0:
    ctx->pc = 0x7F224FB0u;
    // 7F224FB0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F224FB4:
    ctx->pc = 0x7F224FB4u;
    // 7F224FB4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F224FB8:
    ctx->pc = 0x7F224FB8u;
    // 7F224FB8: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F224FBCu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F224FBC:
    ctx->pc = 0x7F224FBCu;
    ctx->downcount -= 2;
    // 7F224FBC: or.   r31, r3, r3
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

label_7F224FC0:
    ctx->pc = 0x7F224FC0u;
    // 7F224FC0: bc    12, 2, 0x7F225020
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F225020;
        }
    }

label_7F224FC4:
    ctx->pc = 0x7F224FC4u;
    ctx->downcount -= 5;
    // 7F224FC4: lis     r4, 32546
    ctx->gpr[4] = ((u32)(s32)(32546) << 16);

label_7F224FC8:
    ctx->pc = 0x7F224FC8u;
    // 7F224FC8: lis     r5, 32546
    ctx->gpr[5] = ((u32)(s32)(32546) << 16);

label_7F224FCC:
    ctx->pc = 0x7F224FCCu;
    // 7F224FCC: addi    r4, r4, 17592
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17592);

label_7F224FD0:
    ctx->pc = 0x7F224FD0u;
    // 7F224FD0: addi    r5, r5, 17708
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(17708);

label_7F224FD4:
    ctx->pc = 0x7F224FD4u;
    // 7F224FD4: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F224FD8u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F224FD8:
    ctx->pc = 0x7F224FD8u;
    ctx->downcount -= 12;
    // 7F224FD8: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F224FDC:
    ctx->pc = 0x7F224FDCu;
    // 7F224FDC: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F224FE0:
    ctx->pc = 0x7F224FE0u;
    // 7F224FE0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F224FE4:
    ctx->pc = 0x7F224FE4u;
    // 7F224FE4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F224FE8:
    ctx->pc = 0x7F224FE8u;
    // 7F224FE8: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F224FEC:
    ctx->pc = 0x7F224FECu;
    // 7F224FEC: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F224FF0:
    ctx->pc = 0x7F224FF0u;
    // 7F224FF0: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F224FF4:
    ctx->pc = 0x7F224FF4u;
    // 7F224FF4: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F224FF8:
    ctx->pc = 0x7F224FF8u;
    // 7F224FF8: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F224FFC:
    ctx->pc = 0x7F224FFCu;
    // 7F224FFC: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F225000:
    ctx->pc = 0x7F225000u;
    // 7F225000: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225004:
    ctx->pc = 0x7F225004u;
    // 7F225004: bl      0x7F224D78
    {
            ctx->lr = 0x7F225008u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F224D78u;
                return;
            }
            goto label_7F224D78;
    }

label_7F225008:
    ctx->pc = 0x7F225008u;
    ctx->downcount -= 2;
    // 7F225008: cmpwi   r3, 0
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

label_7F22500C:
    ctx->pc = 0x7F22500Cu;
    // 7F22500C: bc    4, 0, 0x7F225020
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F225020;
        }
    }

label_7F225010:
    ctx->pc = 0x7F225010u;
    ctx->downcount -= 2;
    // 7F225010: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F225014:
    ctx->pc = 0x7F225014u;
    // 7F225014: bl      0x7F3C8210
    {
            ctx->lr = 0x7F225018u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F225018:
    ctx->pc = 0x7F225018u;
    ctx->downcount -= 2;
    // 7F225018: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F22501C:
    ctx->pc = 0x7F22501Cu;
    // 7F22501C: b       0x7F225024
    {
            goto label_7F225024;
    }

label_7F225020:
    ctx->pc = 0x7F225020u;
    ctx->downcount -= 1;
    // 7F225020: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F225024:
    ctx->pc = 0x7F225024u;
    ctx->downcount -= 6;
    // 7F225024: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F225028:
    ctx->pc = 0x7F225028u;
    // 7F225028: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F22502C:
    ctx->pc = 0x7F22502Cu;
    // 7F22502C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F225030:
    ctx->pc = 0x7F225030u;
    // 7F225030: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F225034:
    ctx->pc = 0x7F225034u;
    // 7F225034: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F225038:
    ctx->pc = 0x7F225038u;
    ctx->downcount -= 37;
    // 7F225038: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F22503C:
    ctx->pc = 0x7F22503Cu;
    // 7F22503C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F225040:
    ctx->pc = 0x7F225040u;
    // 7F225040: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225044:
    ctx->pc = 0x7F225044u;
    // 7F225044: stfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F225044u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F225048:
    ctx->pc = 0x7F225048u;
    // 7F225048: psq_st   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F225048u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F225048u);
        if (ctx->exception) return;
    }

label_7F22504C:
    ctx->pc = 0x7F22504Cu;
    // 7F22504C: stmw     r28, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F225050:
    ctx->pc = 0x7F225050u;
    // 7F225050: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F225054:
    ctx->pc = 0x7F225054u;
    // 7F225054: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F225058:
    ctx->pc = 0x7F225058u;
    // 7F225058: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F22505C:
    ctx->pc = 0x7F22505Cu;
    // 7F22505C: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F225060:
    ctx->pc = 0x7F225060u;
    // 7F225060: rlwinm r31, r30, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[30], 2u) & 0xFFFFFFFCu;
    }

label_7F225064:
    ctx->pc = 0x7F225064u;
    // 7F225064: addi    r7, r4, 17544
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(17544);

label_7F225068:
    ctx->pc = 0x7F225068u;
    // 7F225068: add   r4, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F22506C:
    ctx->pc = 0x7F22506Cu;
    // 7F22506C: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F225070:
    ctx->pc = 0x7F225070u;
    // 7F225070: lwz     r8, 56(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(56);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F225074:
    ctx->pc = 0x7F225074u;
    // 7F225074: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F225074u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F225078:
    ctx->pc = 0x7F225078u;
    // 7F225078: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F22507C:
    ctx->pc = 0x7F22507Cu;
    // 7F22507C: addi    r3, r3, 160
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(160);

label_7F225080:
    ctx->pc = 0x7F225080u;
    // 7F225080: lwz     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F225084:
    ctx->pc = 0x7F225084u;
    // 7F225084: cmplwi  r8, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[8]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F225088:
    ctx->pc = 0x7F225088u;
    // 7F225088: lwz     r4, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F22508C:
    ctx->pc = 0x7F22508Cu;
    // 7F22508C: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F225090:
    ctx->pc = 0x7F225090u;
    // 7F225090: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F225094:
    ctx->pc = 0x7F225094u;
    // 7F225094: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F225098:
    ctx->pc = 0x7F225098u;
    // 7F225098: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F22509C:
    ctx->pc = 0x7F22509Cu;
    // 7F22509C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2250A0:
    ctx->pc = 0x7F2250A0u;
    // 7F2250A0: bc    12, 2, 0x7F225174
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F225174;
        }
    }

label_7F2250A4:
    ctx->pc = 0x7F2250A4u;
    ctx->downcount -= 11;
    // 7F2250A4: lwz     r0, 180(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2250A8:
    ctx->pc = 0x7F2250A8u;
    // 7F2250A8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2250AC:
    ctx->pc = 0x7F2250ACu;
    // 7F2250AC: lfs     f1, 17560(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2250ACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17560);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2250B0:
    ctx->pc = 0x7F2250B0u;
    // 7F2250B0: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F2250B4:
    ctx->pc = 0x7F2250B4u;
    // 7F2250B4: stw     r0, 180(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2250B8:
    ctx->pc = 0x7F2250B8u;
    // 7F2250B8: lwz     r0, 180(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2250BC:
    ctx->pc = 0x7F2250BCu;
    // 7F2250BC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F2250C0:
    ctx->pc = 0x7F2250C0u;
    // 7F2250C0: add   r4, r8, r0
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2250C4:
    ctx->pc = 0x7F2250C4u;
    // 7F2250C4: lwz     r28, 184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(184);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F2250C8:
    ctx->pc = 0x7F2250C8u;
    // 7F2250C8: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2250CC:
    ctx->pc = 0x7F2250CCu;
    // 7F2250CC: bl      0x800261FC
    {
            ctx->lr = 0x7F2250D0u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F2250D0:
    ctx->pc = 0x7F2250D0u;
    ctx->downcount -= 3;
    // 7F2250D0: add   r31, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F2250D4:
    ctx->pc = 0x7F2250D4u;
    // 7F2250D4: lfs     f1, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2250D4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2250D8:
    ctx->pc = 0x7F2250D8u;
    // 7F2250D8: bl      0x7F00FAF4
    {
            ctx->lr = 0x7F2250DCu;
            ctx->pc = 0x7F00FAF4u;
            return;
    }

label_7F2250DC:
    ctx->pc = 0x7F2250DCu;
    ctx->downcount -= 3;
    // 7F2250DC: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2250DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2250E0:
    ctx->pc = 0x7F2250E0u;
    // 7F2250E0: lfs     f1, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2250E0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2250E4:
    ctx->pc = 0x7F2250E4u;
    // 7F2250E4: bl      0x7F008330
    {
            ctx->lr = 0x7F2250E8u;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F2250E8:
    ctx->pc = 0x7F2250E8u;
    ctx->downcount -= 6;
    // 7F2250E8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2250EC:
    ctx->pc = 0x7F2250ECu;
    // 7F2250EC: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2250ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2250F0:
    ctx->pc = 0x7F2250F0u;
    // 7F2250F0: addi    r5, r3, 12832
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F2250F4:
    ctx->pc = 0x7F2250F4u;
    // 7F2250F4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2250F8:
    ctx->pc = 0x7F2250F8u;
    // 7F2250F8: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F2250FC:
    ctx->pc = 0x7F2250FCu;
    // 7F2250FC: bl      0x7F22F07C
    {
            ctx->lr = 0x7F225100u;
            ctx->pc = 0x7F22F07Cu;
            return;
    }

label_7F225100:
    ctx->pc = 0x7F225100u;
    ctx->downcount -= 2;
    // 7F225100: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F225104:
    ctx->pc = 0x7F225104u;
    // 7F225104: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F225108u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F225108:
    ctx->pc = 0x7F225108u;
    ctx->downcount -= 8;
    // 7F225108: mulli   r3, r30, 960
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[30] * (s64)(s32)960);

label_7F22510C:
    ctx->pc = 0x7F22510Cu;
    // 7F22510C: addi    r4, r28, 16
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(16);

label_7F225110:
    ctx->pc = 0x7F225110u;
    // 7F225110: li      r5, 60
    ctx->gpr[5] = (u32)(s32)(60);

label_7F225114:
    ctx->pc = 0x7F225114u;
    // 7F225114: addi    r3, r3, 1336
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1336);

label_7F225118:
    ctx->pc = 0x7F225118u;
    // 7F225118: add   r3, r29, r3
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F22511C:
    ctx->pc = 0x7F22511Cu;
    // 7F22511C: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F225120u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F225120:
    ctx->pc = 0x7F225120u;
    ctx->downcount -= 8;
    // 7F225120: lfs     f0, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F225120u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F225124:
    ctx->pc = 0x7F225124u;
    // 7F225124: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F225128:
    ctx->pc = 0x7F225128u;
    // 7F225128: fadds   f1, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F225128u)) return;
    ppc_fadds(ctx, 1, 0, 31);

label_7F22512C:
    ctx->pc = 0x7F22512Cu;
    // 7F22512C: lfs     f0, 17564(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F22512Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17564);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F225130:
    ctx->pc = 0x7F225130u;
    // 7F225130: stfs     f1, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F225130u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F225134:
    ctx->pc = 0x7F225134u;
    // 7F225134: lfs     f1, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F225134u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F225138:
    ctx->pc = 0x7F225138u;
    // 7F225138: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F225138u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F22513C:
    ctx->pc = 0x7F22513Cu;
    // 7F22513C: bc    4, 1, 0x7F225150
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F225150;
        }
    }

label_7F225140:
    ctx->pc = 0x7F225140u;
    ctx->downcount -= 4;
    // 7F225140: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F225144:
    ctx->pc = 0x7F225144u;
    // 7F225144: lfs     f0, 17568(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F225144u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F225148:
    ctx->pc = 0x7F225148u;
    // 7F225148: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F225148u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F22514C:
    ctx->pc = 0x7F22514Cu;
    // 7F22514C: stfs     f0, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F22514Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F225150:
    ctx->pc = 0x7F225150u;
    ctx->downcount -= 5;
    // 7F225150: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F225154:
    ctx->pc = 0x7F225154u;
    // 7F225154: lfs     f1, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F225154u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F225158:
    ctx->pc = 0x7F225158u;
    // 7F225158: lfs     f0, 17572(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F225158u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17572);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F22515C:
    ctx->pc = 0x7F22515Cu;
    // 7F22515C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F22515Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F225160:
    ctx->pc = 0x7F225160u;
    // 7F225160: bc    4, 0, 0x7F225174
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F225174;
        }
    }

label_7F225164:
    ctx->pc = 0x7F225164u;
    ctx->downcount -= 4;
    // 7F225164: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F225168:
    ctx->pc = 0x7F225168u;
    // 7F225168: lfs     f0, 17568(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F225168u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F22516C:
    ctx->pc = 0x7F22516Cu;
    // 7F22516C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F22516Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F225170:
    ctx->pc = 0x7F225170u;
    // 7F225170: stfs     f0, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F225170u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F225174:
    ctx->pc = 0x7F225174u;
    ctx->downcount -= 18;
    // 7F225174: psq_l   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F225174u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F225174u);
        if (ctx->exception) return;
    }

label_7F225178:
    ctx->pc = 0x7F225178u;
    // 7F225178: lfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F225178u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F22517C:
    ctx->pc = 0x7F22517Cu;
    // 7F22517C: lmw     r28, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F225180:
    ctx->pc = 0x7F225180u;
    // 7F225180: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F225184:
    ctx->pc = 0x7F225184u;
    // 7F225184: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F225188:
    ctx->pc = 0x7F225188u;
    // 7F225188: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F22518C:
    ctx->pc = 0x7F22518Cu;
    // 7F22518C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F225190:
    ctx->pc = 0x7F225190u;
    ctx->downcount -= 3;
    // 7F225190: lwz     r4, 88(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F225194:
    ctx->pc = 0x7F225194u;
    // 7F225194: cmplwi  r4, 0x0000
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

label_7F225198:
    ctx->pc = 0x7F225198u;
    // 7F225198: bc    12, 2, 0x7F2251A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2251A8;
        }
    }

label_7F22519C:
    ctx->pc = 0x7F22519Cu;
    ctx->downcount -= 3;
    // 7F22519C: lwz     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2251A0:
    ctx->pc = 0x7F2251A0u;
    // 7F2251A0: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F2251A4:
    ctx->pc = 0x7F2251A4u;
    // 7F2251A4: stw     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2251A8:
    ctx->pc = 0x7F2251A8u;
    ctx->downcount -= 3;
    // 7F2251A8: lwz     r4, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2251AC:
    ctx->pc = 0x7F2251ACu;
    // 7F2251AC: cmplwi  r4, 0x0000
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

label_7F2251B0:
    ctx->pc = 0x7F2251B0u;
    // 7F2251B0: bc    12, 2, 0x7F2251C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2251C0;
        }
    }

label_7F2251B4:
    ctx->pc = 0x7F2251B4u;
    ctx->downcount -= 3;
    // 7F2251B4: lwz     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2251B8:
    ctx->pc = 0x7F2251B8u;
    // 7F2251B8: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F2251BC:
    ctx->pc = 0x7F2251BCu;
    // 7F2251BC: stw     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2251C0:
    ctx->pc = 0x7F2251C0u;
    ctx->downcount -= 3;
    // 7F2251C0: lwz     r4, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2251C4:
    ctx->pc = 0x7F2251C4u;
    // 7F2251C4: cmplwi  r4, 0x0000
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

label_7F2251C8:
    ctx->pc = 0x7F2251C8u;
    // 7F2251C8: bc    12, 2, 0x7F2251D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2251D8;
        }
    }

label_7F2251CC:
    ctx->pc = 0x7F2251CCu;
    ctx->downcount -= 3;
    // 7F2251CC: lwz     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2251D0:
    ctx->pc = 0x7F2251D0u;
    // 7F2251D0: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F2251D4:
    ctx->pc = 0x7F2251D4u;
    // 7F2251D4: stw     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2251D8:
    ctx->pc = 0x7F2251D8u;
    ctx->downcount -= 3;
    // 7F2251D8: lwz     r4, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2251DC:
    ctx->pc = 0x7F2251DCu;
    // 7F2251DC: cmplwi  r4, 0x0000
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

label_7F2251E0:
    ctx->pc = 0x7F2251E0u;
    // 7F2251E0: bc    12, 2, 0x7F2251F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2251F0;
        }
    }

label_7F2251E4:
    ctx->pc = 0x7F2251E4u;
    ctx->downcount -= 3;
    // 7F2251E4: lwz     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2251E8:
    ctx->pc = 0x7F2251E8u;
    // 7F2251E8: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F2251EC:
    ctx->pc = 0x7F2251ECu;
    // 7F2251EC: stw     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2251F0:
    ctx->pc = 0x7F2251F0u;
    ctx->downcount -= 3;
    // 7F2251F0: lwz     r4, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2251F4:
    ctx->pc = 0x7F2251F4u;
    // 7F2251F4: cmplwi  r4, 0x0000
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

label_7F2251F8:
    ctx->pc = 0x7F2251F8u;
    // 7F2251F8: bc    12, 2, 0x7F225208
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F225208;
        }
    }

label_7F2251FC:
    ctx->pc = 0x7F2251FCu;
    ctx->downcount -= 3;
    // 7F2251FC: lwz     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F225200:
    ctx->pc = 0x7F225200u;
    // 7F225200: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F225204:
    ctx->pc = 0x7F225204u;
    // 7F225204: stw     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225208:
    ctx->pc = 0x7F225208u;
    ctx->downcount -= 4;
    // 7F225208: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F22520C:
    ctx->pc = 0x7F22520Cu;
    // 7F22520C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F225210:
    ctx->pc = 0x7F225210u;
    // 7F225210: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F225214:
    ctx->downcount -= 4;
    // 7F225214: addi    r0, r4, 5260
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(5260);

label_7F225218:
    ctx->pc = 0x7F225218u;
    // 7F225218: lwzx    r5, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F22521C:
    // 7F22521C: cmplwi  r5, 0x0000
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

label_7F225220:
    // 7F225220: bc    12, 2, 0x7F225230
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F225230;
        }
    }

label_7F225224:
    ctx->pc = 0x7F225224u;
    ctx->downcount -= 3;
    // 7F225224: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F225228:
    // 7F225228: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F22522C:
    ctx->pc = 0x7F22522Cu;
    // 7F22522C: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225230:
    ctx->downcount -= 2;
    // 7F225230: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F225234:
    // 7F225234: bc    16, 0, 0x7F225214
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F225214u;
                return;
            }
            goto label_7F225214;
        }
    }

label_7F225238:
    ctx->pc = 0x7F225238u;
    ctx->downcount -= 1;
    // 7F225238: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F22523C:
    ctx->pc = 0x7F22523Cu;
    ctx->downcount -= 3;
    // 7F22523C: lwz     r4, 88(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F225240:
    ctx->pc = 0x7F225240u;
    // 7F225240: cmplwi  r4, 0x0000
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

label_7F225244:
    ctx->pc = 0x7F225244u;
    // 7F225244: bc    12, 2, 0x7F225254
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F225254;
        }
    }

label_7F225248:
    ctx->pc = 0x7F225248u;
    ctx->downcount -= 3;
    // 7F225248: lwz     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F22524C:
    ctx->pc = 0x7F22524Cu;
    // 7F22524C: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F225250:
    ctx->pc = 0x7F225250u;
    // 7F225250: stw     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225254:
    ctx->pc = 0x7F225254u;
    ctx->downcount -= 3;
    // 7F225254: lwz     r4, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F225258:
    ctx->pc = 0x7F225258u;
    // 7F225258: cmplwi  r4, 0x0000
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

label_7F22525C:
    ctx->pc = 0x7F22525Cu;
    // 7F22525C: bc    12, 2, 0x7F22526C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F22526C;
        }
    }

label_7F225260:
    ctx->pc = 0x7F225260u;
    ctx->downcount -= 3;
    // 7F225260: lwz     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F225264:
    ctx->pc = 0x7F225264u;
    // 7F225264: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F225268:
    ctx->pc = 0x7F225268u;
    // 7F225268: stw     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F22526C:
    ctx->pc = 0x7F22526Cu;
    ctx->downcount -= 3;
    // 7F22526C: lwz     r4, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F225270:
    ctx->pc = 0x7F225270u;
    // 7F225270: cmplwi  r4, 0x0000
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

label_7F225274:
    ctx->pc = 0x7F225274u;
    // 7F225274: bc    12, 2, 0x7F225284
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F225284;
        }
    }

label_7F225278:
    ctx->pc = 0x7F225278u;
    ctx->downcount -= 3;
    // 7F225278: lwz     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F22527C:
    ctx->pc = 0x7F22527Cu;
    // 7F22527C: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F225280:
    ctx->pc = 0x7F225280u;
    // 7F225280: stw     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225284:
    ctx->pc = 0x7F225284u;
    ctx->downcount -= 3;
    // 7F225284: lwz     r4, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F225288:
    ctx->pc = 0x7F225288u;
    // 7F225288: cmplwi  r4, 0x0000
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

label_7F22528C:
    ctx->pc = 0x7F22528Cu;
    // 7F22528C: bc    12, 2, 0x7F22529C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F22529C;
        }
    }

label_7F225290:
    ctx->pc = 0x7F225290u;
    ctx->downcount -= 3;
    // 7F225290: lwz     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F225294:
    ctx->pc = 0x7F225294u;
    // 7F225294: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F225298:
    ctx->pc = 0x7F225298u;
    // 7F225298: stw     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F22529C:
    ctx->pc = 0x7F22529Cu;
    ctx->downcount -= 3;
    // 7F22529C: lwz     r4, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2252A0:
    ctx->pc = 0x7F2252A0u;
    // 7F2252A0: cmplwi  r4, 0x0000
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

label_7F2252A4:
    ctx->pc = 0x7F2252A4u;
    // 7F2252A4: bc    12, 2, 0x7F2252B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2252B4;
        }
    }

label_7F2252A8:
    ctx->pc = 0x7F2252A8u;
    ctx->downcount -= 3;
    // 7F2252A8: lwz     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2252AC:
    ctx->pc = 0x7F2252ACu;
    // 7F2252AC: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F2252B0:
    ctx->pc = 0x7F2252B0u;
    // 7F2252B0: stw     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2252B4:
    ctx->pc = 0x7F2252B4u;
    ctx->downcount -= 4;
    // 7F2252B4: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F2252B8:
    ctx->pc = 0x7F2252B8u;
    // 7F2252B8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2252BC:
    ctx->pc = 0x7F2252BCu;
    // 7F2252BC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2252C0:
    ctx->downcount -= 4;
    // 7F2252C0: addi    r0, r4, 5260
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(5260);

label_7F2252C4:
    ctx->pc = 0x7F2252C4u;
    // 7F2252C4: lwzx    r5, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2252C8:
    // 7F2252C8: cmplwi  r5, 0x0000
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

label_7F2252CC:
    // 7F2252CC: bc    12, 2, 0x7F2252DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2252DC;
        }
    }

label_7F2252D0:
    ctx->pc = 0x7F2252D0u;
    ctx->downcount -= 3;
    // 7F2252D0: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2252D4:
    // 7F2252D4: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F2252D8:
    ctx->pc = 0x7F2252D8u;
    // 7F2252D8: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2252DC:
    ctx->downcount -= 2;
    // 7F2252DC: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F2252E0:
    // 7F2252E0: bc    16, 0, 0x7F2252C0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2252C0u;
                return;
            }
            goto label_7F2252C0;
        }
    }

label_7F2252E4:
    ctx->pc = 0x7F2252E4u;
    ctx->downcount -= 1;
    // 7F2252E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F2252E8:
    ctx->pc = 0x7F2252E8u;
    ctx->downcount -= 19;
    // 7F2252E8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2252EC:
    ctx->pc = 0x7F2252ECu;
    // 7F2252EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2252F0:
    ctx->pc = 0x7F2252F0u;
    // 7F2252F0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2252F4:
    ctx->pc = 0x7F2252F4u;
    // 7F2252F4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2252F8:
    ctx->pc = 0x7F2252F8u;
    // 7F2252F8: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2252FC:
    ctx->pc = 0x7F2252FCu;
    // 7F2252FC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F225300:
    ctx->pc = 0x7F225300u;
    // 7F225300: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F225304:
    ctx->pc = 0x7F225304u;
    // 7F225304: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F225308:
    ctx->pc = 0x7F225308u;
    // 7F225308: bl      0x7F3C9624
    {
            ctx->lr = 0x7F22530Cu;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F22530C:
    ctx->pc = 0x7F22530Cu;
    ctx->downcount -= 7;
    // 7F22530C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F225310:
    ctx->pc = 0x7F225310u;
    // 7F225310: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F225314:
    ctx->pc = 0x7F225314u;
    // 7F225314: addi    r0, r31, -1
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(-1);

label_7F225318:
    ctx->pc = 0x7F225318u;
    // 7F225318: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F22531C:
    ctx->pc = 0x7F22531Cu;
    // 7F22531C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F225320:
    ctx->pc = 0x7F225320u;
    // 7F225320: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225324:
    ctx->pc = 0x7F225324u;
    // 7F225324: b       0x7F225374
    {
            goto label_7F225374;
    }

label_7F225328:
    ctx->pc = 0x7F225328u;
    ctx->downcount -= 5;
    // 7F225328: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F22532C:
    ctx->pc = 0x7F22532Cu;
    // 7F22532C: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F225330:
    ctx->pc = 0x7F225330u;
    // 7F225330: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F225334:
    // 7F225334: cmpwi   r0, 1
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

label_7F225338:
    // 7F225338: bc    12, 2, 0x7F22535C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F22535C;
        }
    }

label_7F22533C:
    ctx->downcount -= 1;
    // 7F22533C: bc    4, 0, 0x7F225368
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F225368;
        }
    }

label_7F225340:
    ctx->downcount -= 2;
    // 7F225340: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F225344:
    // 7F225344: bc    4, 0, 0x7F22534C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F22534C;
        }
    }

label_7F225348:
    ctx->downcount -= 1;
    // 7F225348: b       0x7F225368
    {
            goto label_7F225368;
    }

label_7F22534C:
    ctx->downcount -= 3;
    // 7F22534C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F225350:
    // 7F225350: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F225354:
    // 7F225354: bl      0x7F22523C
    {
            ctx->lr = 0x7F225358u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F22523Cu;
                return;
            }
            goto label_7F22523C;
    }

label_7F225358:
    ctx->downcount -= 1;
    // 7F225358: b       0x7F225368
    {
            goto label_7F225368;
    }

label_7F22535C:
    ctx->downcount -= 2;
    // 7F22535C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F225360:
    // 7F225360: bl      0x7F225190
    {
            ctx->lr = 0x7F225364u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F225190u;
                return;
            }
            goto label_7F225190;
    }

label_7F225364:
    ctx->downcount -= 1;
    // 7F225364: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_7F225368:
    ctx->pc = 0x7F225368u;
    ctx->downcount -= 3;
    // 7F225368: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F22536C:
    // 7F22536C: addi    r0, r3, -16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-16);

label_7F225370:
    ctx->pc = 0x7F225370u;
    // 7F225370: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225374:
    ctx->downcount -= 2;
    // 7F225374: addic.  r31, r31, -1
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

label_7F225378:
    // 7F225378: bc    4, 0, 0x7F225328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F225328u;
                return;
            }
            goto label_7F225328;
        }
    }

label_7F22537C:
    ctx->pc = 0x7F22537Cu;
    ctx->downcount -= 17;
    // 7F22537C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F225380:
    ctx->pc = 0x7F225380u;
    // 7F225380: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F225384:
    ctx->pc = 0x7F225384u;
    // 7F225384: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F225388:
    ctx->pc = 0x7F225388u;
    // 7F225388: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F22538C:
    ctx->pc = 0x7F22538Cu;
    // 7F22538C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F225390:
    ctx->pc = 0x7F225390u;
    // 7F225390: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F225394:
    ctx->pc = 0x7F225394u;
    ctx->downcount -= 16;
    // 7F225394: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F225398:
    ctx->pc = 0x7F225398u;
    // 7F225398: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F22539C:
    ctx->pc = 0x7F22539Cu;
    // 7F22539C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2253A0:
    ctx->pc = 0x7F2253A0u;
    // 7F2253A0: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2253A4:
    ctx->pc = 0x7F2253A4u;
    // 7F2253A4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2253A8:
    ctx->pc = 0x7F2253A8u;
    // 7F2253A8: bl      0x7F2252E8
    {
            ctx->lr = 0x7F2253ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2252E8u;
                return;
            }
            goto label_7F2252E8;
    }

label_7F2253AC:
    ctx->pc = 0x7F2253ACu;
    ctx->downcount -= 2;
    // 7F2253AC: cmpwi   r3, 0
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

label_7F2253B0:
    ctx->pc = 0x7F2253B0u;
    // 7F2253B0: bc    12, 2, 0x7F2253C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2253C4;
        }
    }

label_7F2253B4:
    ctx->pc = 0x7F2253B4u;
    ctx->downcount -= 3;
    // 7F2253B4: lwz     r4, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2253B8:
    ctx->pc = 0x7F2253B8u;
    // 7F2253B8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2253BC:
    ctx->pc = 0x7F2253BCu;
    // 7F2253BC: bl      0x7F3C89B8
    {
            ctx->lr = 0x7F2253C0u;
            ctx->pc = 0x7F3C89B8u;
            return;
    }

label_7F2253C0:
    ctx->pc = 0x7F2253C0u;
    ctx->downcount -= 1;
    // 7F2253C0: b       0x7F225644
    {
            goto label_7F225644;
    }

label_7F2253C4:
    ctx->pc = 0x7F2253C4u;
    ctx->downcount -= 2;
    // 7F2253C4: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F2253C8:
    ctx->pc = 0x7F2253C8u;
    // 7F2253C8: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F2253CC:
    ctx->downcount -= 6;
    // 7F2253CC: add   r3, r29, r27
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2253D0:
    // 7F2253D0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2253D4:
    ctx->pc = 0x7F2253D4u;
    // 7F2253D4: lwz     r0, 5276(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2253D8:
    ctx->pc = 0x7F2253D8u;
    // 7F2253D8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2253DC:
    ctx->pc = 0x7F2253DCu;
    // 7F2253DC: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2253E0:
    // 7F2253E0: bl      0x7F225764
    {
            ctx->lr = 0x7F2253E4u;
            goto label_7F225764;
    }

label_7F2253E4:
    ctx->downcount -= 4;
    // 7F2253E4: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F2253E8:
    // 7F2253E8: addi    r27, r27, 4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(4);

label_7F2253EC:
    // 7F2253EC: cmpwi   r25, 4
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

label_7F2253F0:
    // 7F2253F0: bc    12, 0, 0x7F2253CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2253CCu;
                return;
            }
            goto label_7F2253CC;
        }
    }

label_7F2253F4:
    ctx->pc = 0x7F2253F4u;
    ctx->downcount -= 3;
    // 7F2253F4: lwz     r0, 96(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2253F8:
    ctx->pc = 0x7F2253F8u;
    // 7F2253F8: andi.   r0, r0, 0x0005
    {
        ctx->gpr[0] = ctx->gpr[0] & 0x0005u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2253FC:
    ctx->pc = 0x7F2253FCu;
    // 7F2253FC: bc    4, 2, 0x7F2254A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2254A0;
        }
    }

label_7F225400:
    ctx->pc = 0x7F225400u;
    ctx->downcount -= 26;
    // 7F225400: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F225404:
    ctx->pc = 0x7F225404u;
    // 7F225404: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F225408:
    ctx->pc = 0x7F225408u;
    // 7F225408: lfs     f2, 17576(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F225408u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17576);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F22540C:
    ctx->pc = 0x7F22540Cu;
    // 7F22540C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F225410:
    ctx->pc = 0x7F225410u;
    // 7F225410: lfs     f1, 5176(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F225410u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5176);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F225414:
    ctx->pc = 0x7F225414u;
    // 7F225414: lfs     f0, 17580(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F225414u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17580);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F225418:
    ctx->pc = 0x7F225418u;
    // 7F225418: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F22541C:
    ctx->pc = 0x7F22541Cu;
    // 7F22541C: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F22541Cu)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F225420:
    ctx->pc = 0x7F225420u;
    // 7F225420: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F225420u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F225424:
    ctx->pc = 0x7F225424u;
    // 7F225424: bl      0x7F225038
    {
            ctx->lr = 0x7F225428u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F225038u;
                return;
            }
            goto label_7F225038;
    }

label_7F225428:
    ctx->pc = 0x7F225428u;
    ctx->downcount -= 26;
    // 7F225428: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F22542C:
    ctx->pc = 0x7F22542Cu;
    // 7F22542C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F225430:
    ctx->pc = 0x7F225430u;
    // 7F225430: lfs     f2, 17584(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F225430u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17584);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F225434:
    ctx->pc = 0x7F225434u;
    // 7F225434: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F225438:
    ctx->pc = 0x7F225438u;
    // 7F225438: lfs     f1, 5180(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F225438u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5180);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F22543C:
    ctx->pc = 0x7F22543Cu;
    // 7F22543C: lfs     f0, 17580(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F22543Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17580);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F225440:
    ctx->pc = 0x7F225440u;
    // 7F225440: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F225444:
    ctx->pc = 0x7F225444u;
    // 7F225444: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F225444u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F225448:
    ctx->pc = 0x7F225448u;
    // 7F225448: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F225448u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F22544C:
    ctx->pc = 0x7F22544Cu;
    // 7F22544C: bl      0x7F225038
    {
            ctx->lr = 0x7F225450u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F225038u;
                return;
            }
            goto label_7F225038;
    }

label_7F225450:
    ctx->pc = 0x7F225450u;
    ctx->downcount -= 26;
    // 7F225450: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F225454:
    ctx->pc = 0x7F225454u;
    // 7F225454: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F225458:
    ctx->pc = 0x7F225458u;
    // 7F225458: lfs     f2, 17588(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F225458u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17588);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F22545C:
    ctx->pc = 0x7F22545Cu;
    // 7F22545C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F225460:
    ctx->pc = 0x7F225460u;
    // 7F225460: lfs     f1, 5184(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F225460u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5184);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F225464:
    ctx->pc = 0x7F225464u;
    // 7F225464: lfs     f0, 17580(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F225464u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17580);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F225468:
    ctx->pc = 0x7F225468u;
    // 7F225468: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F22546C:
    ctx->pc = 0x7F22546Cu;
    // 7F22546C: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F22546Cu)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F225470:
    ctx->pc = 0x7F225470u;
    // 7F225470: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F225470u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F225474:
    ctx->pc = 0x7F225474u;
    // 7F225474: bl      0x7F225038
    {
            ctx->lr = 0x7F225478u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F225038u;
                return;
            }
            goto label_7F225038;
    }

label_7F225478:
    ctx->pc = 0x7F225478u;
    ctx->downcount -= 26;
    // 7F225478: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F22547C:
    ctx->pc = 0x7F22547Cu;
    // 7F22547C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F225480:
    ctx->pc = 0x7F225480u;
    // 7F225480: lfs     f2, 17592(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F225480u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17592);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F225484:
    ctx->pc = 0x7F225484u;
    // 7F225484: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F225488:
    ctx->pc = 0x7F225488u;
    // 7F225488: lfs     f1, 5188(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F225488u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5188);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F22548C:
    ctx->pc = 0x7F22548Cu;
    // 7F22548C: lfs     f0, 17580(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F22548Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17580);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F225490:
    ctx->pc = 0x7F225490u;
    // 7F225490: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F225494:
    ctx->pc = 0x7F225494u;
    // 7F225494: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F225494u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F225498:
    ctx->pc = 0x7F225498u;
    // 7F225498: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F225498u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F22549C:
    ctx->pc = 0x7F22549Cu;
    // 7F22549C: bl      0x7F225038
    {
            ctx->lr = 0x7F2254A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F225038u;
                return;
            }
            goto label_7F225038;
    }

label_7F2254A0:
    ctx->pc = 0x7F2254A0u;
    ctx->downcount -= 5;
    // 7F2254A0: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F2254A4:
    ctx->pc = 0x7F2254A4u;
    // 7F2254A4: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F2254A8:
    ctx->pc = 0x7F2254A8u;
    // 7F2254A8: addi    r31, r3, 28636
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F2254AC:
    ctx->pc = 0x7F2254ACu;
    // 7F2254AC: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F2254B0:
    ctx->pc = 0x7F2254B0u;
    // 7F2254B0: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F2254B4:
    ctx->pc = 0x7F2254B4u;
    ctx->downcount -= 3;
    // 7F2254B4: lwz     r0, 96(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2254B8:
    // 7F2254B8: rlwinm. r0, r0, 0, 31, 31
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

label_7F2254BC:
    // 7F2254BC: bc    4, 2, 0x7F2255F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2255F8;
        }
    }

label_7F2254C0:
    ctx->downcount -= 34;
    // 7F2254C0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2254C4:
    // 7F2254C4: add   r6, r29, r27
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F2254C8:
    // 7F2254C8: addi    r4, r3, 17576
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(17576);

label_7F2254CC:
    ctx->pc = 0x7F2254CCu;
    // 7F2254CC: lfs     f1, 5192(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2254CCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(5192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2254D0:
    ctx->pc = 0x7F2254D0u;
    // 7F2254D0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2254D0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2254D4:
    // 7F2254D4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2254D8:
    // 7F2254D8: addi    r5, r3, 17580
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(17580);

label_7F2254DC:
    ctx->pc = 0x7F2254DCu;
    // 7F2254DC: lfs     f3, 5208(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2254DCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(5208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2254E0:
    ctx->pc = 0x7F2254E0u;
    // 7F2254E0: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2254E0u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F2254E4:
    ctx->pc = 0x7F2254E4u;
    // 7F2254E4: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2254E4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2254E8:
    // 7F2254E8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2254EC:
    // 7F2254EC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2254F0:
    ctx->pc = 0x7F2254F0u;
    // 7F2254F0: lfs     f2, 17568(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2254F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2254F4:
    ctx->pc = 0x7F2254F4u;
    // 7F2254F4: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2254F4u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F2254F8:
    ctx->pc = 0x7F2254F8u;
    // 7F2254F8: lfs     f0, 17564(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2254F8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17564);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2254FC:
    ctx->pc = 0x7F2254FCu;
    // 7F2254FC: fadds   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2254FCu)) return;
    ppc_fadds(ctx, 1, 3, 1);

label_7F225500:
    ctx->pc = 0x7F225500u;
    // 7F225500: stfs     f1, 5208(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F225500u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(5208);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F225504:
    // 7F225504: b       0x7F225514
    {
            goto label_7F225514;
    }

label_7F225508:
    ctx->pc = 0x7F225508u;
    ctx->downcount -= 3;
    // 7F225508: lfs     f1, 5208(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F225508u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(5208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F22550C:
    ctx->pc = 0x7F22550Cu;
    // 7F22550C: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F22550Cu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F225510:
    ctx->pc = 0x7F225510u;
    // 7F225510: stfs     f1, 5208(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F225510u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(5208);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F225514:
    ctx->pc = 0x7F225514u;
    ctx->downcount -= 3;
    // 7F225514: lfs     f1, 5208(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F225514u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(5208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F225518:
    ctx->pc = 0x7F225518u;
    // 7F225518: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F225518u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F22551C:
    // 7F22551C: bc    12, 1, 0x7F225508
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F225508u;
                return;
            }
            goto label_7F225508;
        }
    }

label_7F225520:
    ctx->downcount -= 5;
    // 7F225520: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F225524:
    // 7F225524: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F225528:
    ctx->pc = 0x7F225528u;
    // 7F225528: lfs     f2, 17568(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F225528u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F22552C:
    ctx->pc = 0x7F22552Cu;
    // 7F22552C: lfs     f0, 17572(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F22552Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17572);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F225530:
    // 7F225530: b       0x7F225540
    {
            goto label_7F225540;
    }

label_7F225534:
    ctx->pc = 0x7F225534u;
    ctx->downcount -= 3;
    // 7F225534: lfs     f1, 5208(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F225534u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(5208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F225538:
    ctx->pc = 0x7F225538u;
    // 7F225538: fadds   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F225538u)) return;
    ppc_fadds(ctx, 1, 1, 2);

label_7F22553C:
    ctx->pc = 0x7F22553Cu;
    // 7F22553C: stfs     f1, 5208(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F22553Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(5208);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F225540:
    ctx->pc = 0x7F225540u;
    ctx->downcount -= 3;
    // 7F225540: lfs     f1, 5208(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F225540u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(5208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F225544:
    ctx->pc = 0x7F225544u;
    // 7F225544: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F225544u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F225548:
    // 7F225548: bc    12, 0, 0x7F225534
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F225534u;
                return;
            }
            goto label_7F225534;
        }
    }

label_7F22554C:
    ctx->pc = 0x7F22554Cu;
    ctx->downcount -= 7;
    // 7F22554C: lfs     f0, 5224(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F22554Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(5224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F225550:
    // 7F225550: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F225554:
    // 7F225554: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F225558:
    ctx->pc = 0x7F225558u;
    // 7F225558: lfs     f2, 17568(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F225558u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F22555C:
    ctx->pc = 0x7F22555Cu;
    // 7F22555C: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F22555Cu)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F225560:
    ctx->pc = 0x7F225560u;
    // 7F225560: lfs     f0, 17564(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F225560u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17564);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F225564:
    // 7F225564: b       0x7F22556C
    {
            goto label_7F22556C;
    }

label_7F225568:
    ctx->pc = 0x7F225568u;
    ctx->downcount -= 1;
    // 7F225568: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F225568u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F22556C:
    ctx->pc = 0x7F22556Cu;
    ctx->downcount -= 2;
    // 7F22556C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F22556Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F225570:
    // 7F225570: bc    12, 1, 0x7F225568
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F225568u;
                return;
            }
            goto label_7F225568;
        }
    }

label_7F225574:
    ctx->downcount -= 5;
    // 7F225574: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F225578:
    // 7F225578: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F22557C:
    ctx->pc = 0x7F22557Cu;
    // 7F22557C: lfs     f2, 17568(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F22557Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F225580:
    ctx->pc = 0x7F225580u;
    // 7F225580: lfs     f0, 17572(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F225580u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17572);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F225584:
    // 7F225584: b       0x7F22558C
    {
            goto label_7F22558C;
    }

label_7F225588:
    ctx->pc = 0x7F225588u;
    ctx->downcount -= 1;
    // 7F225588: fadds   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F225588u)) return;
    ppc_fadds(ctx, 1, 1, 2);

label_7F22558C:
    ctx->pc = 0x7F22558Cu;
    ctx->downcount -= 2;
    // 7F22558C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F22558Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F225590:
    // 7F225590: bc    12, 0, 0x7F225588
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F225588u;
                return;
            }
            goto label_7F225588;
        }
    }

label_7F225594:
    ctx->downcount -= 5;
    // 7F225594: add   r25, r29, r28
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[25] = res;
    }

label_7F225598:
    // 7F225598: addi    r3, r29, 104
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(104);

label_7F22559C:
    // 7F22559C: addi    r26, r25, 168
    ctx->gpr[26] = ctx->gpr[25] + (u32)(s32)(168);

label_7F2255A0:
    // 7F2255A0: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2255A4:
    // 7F2255A4: bl      0x7F1147E8
    {
            ctx->lr = 0x7F2255A8u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F2255A8:
    ctx->pc = 0x7F2255A8u;
    ctx->downcount -= 4;
    // 7F2255A8: lfs     f1, 5244(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2255A8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5244);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2255AC:
    // 7F2255AC: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2255B0:
    // 7F2255B0: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2255B4:
    // 7F2255B4: bl      0x800261FC
    {
            ctx->lr = 0x7F2255B8u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F2255B8:
    ctx->downcount -= 4;
    // 7F2255B8: addi    r3, r25, 184
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(184);

label_7F2255BC:
    ctx->pc = 0x7F2255BCu;
    // 7F2255BC: lfs     f1, 5244(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2255BCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5244);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2255C0:
    // 7F2255C0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2255C4:
    // 7F2255C4: bl      0x800261FC
    {
            ctx->lr = 0x7F2255C8u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F2255C8:
    ctx->downcount -= 4;
    // 7F2255C8: addi    r3, r25, 200
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(200);

label_7F2255CC:
    ctx->pc = 0x7F2255CCu;
    // 7F2255CC: lfs     f1, 5244(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2255CCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5244);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2255D0:
    // 7F2255D0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2255D4:
    // 7F2255D4: bl      0x800261FC
    {
            ctx->lr = 0x7F2255D8u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F2255D8:
    ctx->pc = 0x7F2255D8u;
    ctx->downcount -= 8;
    // 7F2255D8: lwz     r3, 152(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2255DC:
    ctx->pc = 0x7F2255DCu;
    // 7F2255DC: lwz     r0, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2255E0:
    ctx->pc = 0x7F2255E0u;
    // 7F2255E0: stw     r3, 216(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2255E4:
    ctx->pc = 0x7F2255E4u;
    // 7F2255E4: stw     r0, 220(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2255E8:
    ctx->pc = 0x7F2255E8u;
    // 7F2255E8: lwz     r3, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2255EC:
    ctx->pc = 0x7F2255ECu;
    // 7F2255EC: lwz     r0, 164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2255F0:
    ctx->pc = 0x7F2255F0u;
    // 7F2255F0: stw     r3, 224(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2255F4:
    ctx->pc = 0x7F2255F4u;
    // 7F2255F4: stw     r0, 228(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2255F8:
    ctx->pc = 0x7F2255F8u;
    ctx->downcount -= 3;
    // 7F2255F8: lwz     r0, 96(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2255FC:
    // 7F2255FC: rlwinm. r0, r0, 0, 28, 28
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

label_7F225600:
    // 7F225600: bc    12, 2, 0x7F225630
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F225630;
        }
    }

label_7F225604:
    ctx->pc = 0x7F225604u;
    ctx->downcount -= 11;
    // 7F225604: lwz     r3, 176(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F225608:
    // 7F225608: add   r4, r29, r28
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F22560C:
    ctx->pc = 0x7F22560Cu;
    // 7F22560C: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F225610:
    ctx->pc = 0x7F225610u;
    // 7F225610: stw     r3, 216(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F225614:
    ctx->pc = 0x7F225614u;
    // 7F225614: stw     r0, 220(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225618:
    ctx->pc = 0x7F225618u;
    // 7F225618: lwz     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F22561C:
    ctx->pc = 0x7F22561Cu;
    // 7F22561C: lwz     r0, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F225620:
    ctx->pc = 0x7F225620u;
    // 7F225620: stw     r3, 224(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F225624:
    ctx->pc = 0x7F225624u;
    // 7F225624: stw     r0, 228(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225628:
    ctx->pc = 0x7F225628u;
    // 7F225628: lfs     f0, 940(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F225628u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(940);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F22562C:
    ctx->pc = 0x7F22562Cu;
    // 7F22562C: stfs     f0, 220(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F22562Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(220);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F225630:
    ctx->downcount -= 5;
    // 7F225630: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F225634:
    // 7F225634: addi    r27, r27, 4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(4);

label_7F225638:
    // 7F225638: cmpwi   r30, 4
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

label_7F22563C:
    // 7F22563C: addi    r28, r28, 64
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(64);

label_7F225640:
    // 7F225640: bc    12, 0, 0x7F2254B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2254B4u;
                return;
            }
            goto label_7F2254B4;
        }
    }

label_7F225644:
    ctx->pc = 0x7F225644u;
    ctx->downcount -= 16;
    // 7F225644: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F225648:
    ctx->pc = 0x7F225648u;
    // 7F225648: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F22564C:
    ctx->pc = 0x7F22564Cu;
    // 7F22564C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F225650:
    ctx->pc = 0x7F225650u;
    // 7F225650: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F225654:
    ctx->pc = 0x7F225654u;
    // 7F225654: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F225658:
    ctx->pc = 0x7F225658u;
    ctx->downcount -= 18;
    // 7F225658: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F22565C:
    ctx->pc = 0x7F22565Cu;
    // 7F22565C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F225660:
    ctx->pc = 0x7F225660u;
    // 7F225660: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225664:
    ctx->pc = 0x7F225664u;
    // 7F225664: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F225668:
    ctx->pc = 0x7F225668u;
    // 7F225668: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F22566C:
    ctx->pc = 0x7F22566Cu;
    // 7F22566C: lwz     r3, 88(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F225670:
    ctx->pc = 0x7F225670u;
    // 7F225670: cmplwi  r3, 0x0000
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

label_7F225674:
    ctx->pc = 0x7F225674u;
    // 7F225674: bc    12, 2, 0x7F22567C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F22567C;
        }
    }

label_7F225678:
    ctx->pc = 0x7F225678u;
    ctx->downcount -= 1;
    // 7F225678: bl      0x7F3C2440
    {
            ctx->lr = 0x7F22567Cu;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F22567C:
    ctx->pc = 0x7F22567Cu;
    ctx->downcount -= 3;
    // 7F22567C: lwz     r3, 56(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F225680:
    ctx->pc = 0x7F225680u;
    // 7F225680: cmplwi  r3, 0x0000
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

label_7F225684:
    ctx->pc = 0x7F225684u;
    // 7F225684: bc    12, 2, 0x7F22568C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F22568C;
        }
    }

label_7F225688:
    ctx->pc = 0x7F225688u;
    ctx->downcount -= 1;
    // 7F225688: bl      0x7F3C2440
    {
            ctx->lr = 0x7F22568Cu;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F22568C:
    ctx->pc = 0x7F22568Cu;
    ctx->downcount -= 3;
    // 7F22568C: lwz     r3, 60(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F225690:
    ctx->pc = 0x7F225690u;
    // 7F225690: cmplwi  r3, 0x0000
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

label_7F225694:
    ctx->pc = 0x7F225694u;
    // 7F225694: bc    12, 2, 0x7F22569C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F22569C;
        }
    }

label_7F225698:
    ctx->pc = 0x7F225698u;
    ctx->downcount -= 1;
    // 7F225698: bl      0x7F3C2440
    {
            ctx->lr = 0x7F22569Cu;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F22569C:
    ctx->pc = 0x7F22569Cu;
    ctx->downcount -= 3;
    // 7F22569C: lwz     r3, 64(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2256A0:
    ctx->pc = 0x7F2256A0u;
    // 7F2256A0: cmplwi  r3, 0x0000
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

label_7F2256A4:
    ctx->pc = 0x7F2256A4u;
    // 7F2256A4: bc    12, 2, 0x7F2256AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2256AC;
        }
    }

label_7F2256A8:
    ctx->pc = 0x7F2256A8u;
    ctx->downcount -= 1;
    // 7F2256A8: bl      0x7F3C2440
    {
            ctx->lr = 0x7F2256ACu;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F2256AC:
    ctx->pc = 0x7F2256ACu;
    ctx->downcount -= 3;
    // 7F2256AC: lwz     r3, 68(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2256B0:
    ctx->pc = 0x7F2256B0u;
    // 7F2256B0: cmplwi  r3, 0x0000
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

label_7F2256B4:
    ctx->pc = 0x7F2256B4u;
    // 7F2256B4: bc    12, 2, 0x7F2256BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2256BC;
        }
    }

label_7F2256B8:
    ctx->pc = 0x7F2256B8u;
    ctx->downcount -= 1;
    // 7F2256B8: bl      0x7F3C2440
    {
            ctx->lr = 0x7F2256BCu;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F2256BC:
    ctx->pc = 0x7F2256BCu;
    ctx->downcount -= 2;
    // 7F2256BC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F2256C0:
    ctx->pc = 0x7F2256C0u;
    // 7F2256C0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F2256C4:
    ctx->downcount -= 4;
    // 7F2256C4: addi    r30, r31, 5260
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(5260);

label_7F2256C8:
    ctx->pc = 0x7F2256C8u;
    // 7F2256C8: lwzx    r3, r28, r30
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[30];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2256CC:
    // 7F2256CC: cmplwi  r3, 0x0000
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

label_7F2256D0:
    // 7F2256D0: bc    12, 2, 0x7F2256E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2256E0;
        }
    }

label_7F2256D4:
    ctx->downcount -= 1;
    // 7F2256D4: bl      0x7F3AEBF0
    {
            ctx->lr = 0x7F2256D8u;
            ctx->pc = 0x7F3AEBF0u;
            return;
    }

label_7F2256D8:
    ctx->pc = 0x7F2256D8u;
    ctx->downcount -= 2;
    // 7F2256D8: lwzx    r3, r28, r30
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[30];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2256DC:
    // 7F2256DC: bl      0x7F3B0820
    {
            ctx->lr = 0x7F2256E0u;
            ctx->pc = 0x7F3B0820u;
            return;
    }

label_7F2256E0:
    ctx->downcount -= 4;
    // 7F2256E0: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F2256E4:
    // 7F2256E4: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F2256E8:
    // 7F2256E8: cmpwi   r29, 4
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

label_7F2256EC:
    // 7F2256EC: bc    12, 0, 0x7F2256C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2256C4u;
                return;
            }
            goto label_7F2256C4;
        }
    }

label_7F2256F0:
    ctx->pc = 0x7F2256F0u;
    ctx->downcount -= 16;
    // 7F2256F0: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2256F4:
    ctx->pc = 0x7F2256F4u;
    // 7F2256F4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2256F8:
    ctx->pc = 0x7F2256F8u;
    // 7F2256F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2256FC:
    ctx->pc = 0x7F2256FCu;
    // 7F2256FC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F225700:
    ctx->pc = 0x7F225700u;
    // 7F225700: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F225704:
    ctx->pc = 0x7F225704u;
    ctx->downcount -= 2;
    // 7F225704: fcmpo   cr0, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F225704u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[2], true);

label_7F225708:
    ctx->pc = 0x7F225708u;
    // 7F225708: bc    4, 1, 0x7F22571C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F22571C;
        }
    }

label_7F22570C:
    ctx->pc = 0x7F22570Cu;
    ctx->downcount -= 2;
    // 7F22570C: fcmpo   cr0, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F22570Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[3], true);

label_7F225710:
    ctx->pc = 0x7F225710u;
    // 7F225710: bclr  12, 1
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F225714:
    ctx->pc = 0x7F225714u;
    ctx->downcount -= 2;
    // 7F225714: fmr    f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F225714u)) return;
    ctx->fpr[1] = ctx->fpr[3];

label_7F225718:
    ctx->pc = 0x7F225718u;
    // 7F225718: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F22571C:
    ctx->pc = 0x7F22571Cu;
    ctx->downcount -= 2;
    // 7F22571C: fcmpo   cr0, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F22571Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[3], true);

label_7F225720:
    ctx->pc = 0x7F225720u;
    // 7F225720: bc    4, 1, 0x7F22572C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F22572C;
        }
    }

label_7F225724:
    ctx->pc = 0x7F225724u;
    ctx->downcount -= 2;
    // 7F225724: fmr    f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F225724u)) return;
    ctx->fpr[1] = ctx->fpr[2];

label_7F225728:
    ctx->pc = 0x7F225728u;
    // 7F225728: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F22572C:
    ctx->pc = 0x7F22572Cu;
    ctx->downcount -= 2;
    // 7F22572C: fmr    f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F22572Cu)) return;
    ctx->fpr[1] = ctx->fpr[3];

label_7F225730:
    ctx->pc = 0x7F225730u;
    // 7F225730: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F225734:
    ctx->pc = 0x7F225734u;
    ctx->downcount -= 2;
    // 7F225734: fcmpo   cr0, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F225734u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[2], true);

label_7F225738:
    ctx->pc = 0x7F225738u;
    // 7F225738: bc    4, 0, 0x7F22574C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F22574C;
        }
    }

label_7F22573C:
    ctx->pc = 0x7F22573Cu;
    ctx->downcount -= 2;
    // 7F22573C: fcmpo   cr0, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F22573Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[3], true);

label_7F225740:
    ctx->pc = 0x7F225740u;
    // 7F225740: bclr  12, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F225744:
    ctx->pc = 0x7F225744u;
    ctx->downcount -= 2;
    // 7F225744: fmr    f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F225744u)) return;
    ctx->fpr[1] = ctx->fpr[3];

label_7F225748:
    ctx->pc = 0x7F225748u;
    // 7F225748: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F22574C:
    ctx->pc = 0x7F22574Cu;
    ctx->downcount -= 2;
    // 7F22574C: fcmpo   cr0, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F22574Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[3], true);

label_7F225750:
    ctx->pc = 0x7F225750u;
    // 7F225750: bc    4, 0, 0x7F22575C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F22575C;
        }
    }

label_7F225754:
    ctx->pc = 0x7F225754u;
    ctx->downcount -= 2;
    // 7F225754: fmr    f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F225754u)) return;
    ctx->fpr[1] = ctx->fpr[2];

label_7F225758:
    ctx->pc = 0x7F225758u;
    // 7F225758: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F22575C:
    ctx->pc = 0x7F22575Cu;
    ctx->downcount -= 2;
    // 7F22575C: fmr    f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F22575Cu)) return;
    ctx->fpr[1] = ctx->fpr[3];

label_7F225760:
    ctx->pc = 0x7F225760u;
    // 7F225760: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F225764:
    ctx->pc = 0x7F225764u;
    ctx->downcount -= 6;
    // 7F225764: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F225768:
    ctx->pc = 0x7F225768u;
    // 7F225768: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F22576C:
    ctx->pc = 0x7F22576Cu;
    // 7F22576C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225770:
    ctx->pc = 0x7F225770u;
    // 7F225770: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F225774:
    ctx->pc = 0x7F225774u;
    // 7F225774: or.   r31, r3, r3
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

label_7F225778:
    ctx->pc = 0x7F225778u;
    // 7F225778: bc    12, 2, 0x7F2257DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2257DC;
        }
    }

label_7F22577C:
    ctx->pc = 0x7F22577Cu;
    ctx->downcount -= 9;
    // 7F22577C: lwz     r8, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F225780:
    ctx->pc = 0x7F225780u;
    // 7F225780: li      r0, 60
    ctx->gpr[0] = (u32)(s32)(60);

label_7F225784:
    ctx->pc = 0x7F225784u;
    // 7F225784: lbz     r7, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_7F225788:
    ctx->pc = 0x7F225788u;
    // 7F225788: lbz     r6, 1(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F22578C:
    ctx->pc = 0x7F22578Cu;
    // 7F22578C: lbz     r5, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F225790:
    ctx->pc = 0x7F225790u;
    // 7F225790: lbz     r3, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F225794:
    ctx->pc = 0x7F225794u;
    // 7F225794: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F225798:
    ctx->pc = 0x7F225798u;
    // 7F225798: addi    r8, r8, 12
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(12);

label_7F22579C:
    loop_7F22579C(ctx);
    if (ctx->pc == 0x7F2257B4u) goto label_7F2257B4;
    return;
label_7F2257A0:
    ctx->pc = 0x7F2257A0u;
    // 7F2257A0: stb     r6, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F2257A4:
    ctx->pc = 0x7F2257A4u;
    // 7F2257A4: stb     r5, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F2257A8:
    ctx->pc = 0x7F2257A8u;
    // 7F2257A8: stb     r3, 3(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2257AC:
    // 7F2257AC: addi    r8, r8, 12
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(12);

label_7F2257B0:
    // 7F2257B0: bc    16, 0, 0x7F22579C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F22579Cu;
                return;
            }
            goto label_7F22579C;
        }
    }

label_7F2257B4:
    ctx->pc = 0x7F2257B4u;
    ctx->downcount -= 4;
    // 7F2257B4: lwz     r3, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2257B8:
    ctx->pc = 0x7F2257B8u;
    // 7F2257B8: li      r5, 732
    ctx->gpr[5] = (u32)(s32)(732);

label_7F2257BC:
    ctx->pc = 0x7F2257BCu;
    // 7F2257BC: lwz     r4, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2257C0:
    ctx->pc = 0x7F2257C0u;
    // 7F2257C0: bl      0x8000519C
    {
            ctx->lr = 0x7F2257C4u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F2257C4:
    ctx->pc = 0x7F2257C4u;
    ctx->downcount -= 3;
    // 7F2257C4: lwz     r3, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2257C8:
    ctx->pc = 0x7F2257C8u;
    // 7F2257C8: li      r4, 732
    ctx->gpr[4] = (u32)(s32)(732);

label_7F2257CC:
    ctx->pc = 0x7F2257CCu;
    // 7F2257CC: bl      0x8001DA4C
    {
            ctx->lr = 0x7F2257D0u;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_7F2257D0:
    ctx->pc = 0x7F2257D0u;
    ctx->downcount -= 3;
    // 7F2257D0: lwz     r3, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2257D4:
    ctx->pc = 0x7F2257D4u;
    // 7F2257D4: li      r4, 732
    ctx->gpr[4] = (u32)(s32)(732);

label_7F2257D8:
    ctx->pc = 0x7F2257D8u;
    // 7F2257D8: bl      0x8001DA4C
    {
            ctx->lr = 0x7F2257DCu;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_7F2257DC:
    ctx->pc = 0x7F2257DCu;
    ctx->downcount -= 6;
    // 7F2257DC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2257E0:
    ctx->pc = 0x7F2257E0u;
    // 7F2257E0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2257E4:
    ctx->pc = 0x7F2257E4u;
    // 7F2257E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2257E8:
    ctx->pc = 0x7F2257E8u;
    // 7F2257E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2257EC:
    ctx->pc = 0x7F2257ECu;
    // 7F2257EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F2257F0:
    ctx->pc = 0x7F2257F0u;
    ctx->downcount -= 105;
    // 7F2257F0: stwu     r1, -304(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-304);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2257F4:
    ctx->pc = 0x7F2257F4u;
    // 7F2257F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2257F8:
    ctx->pc = 0x7F2257F8u;
    // 7F2257F8: stw     r0, 308(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2257FC:
    ctx->pc = 0x7F2257FCu;
    // 7F2257FC: stfd     f31, 288(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2257FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F225800:
    ctx->pc = 0x7F225800u;
    // 7F225800: psq_st   f31, 296(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F225800u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(296);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F225800u);
        if (ctx->exception) return;
    }

label_7F225804:
    ctx->pc = 0x7F225804u;
    // 7F225804: stfd     f30, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F225804u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F225808:
    ctx->pc = 0x7F225808u;
    // 7F225808: psq_st   f30, 280(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F225808u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F225808u);
        if (ctx->exception) return;
    }

label_7F22580C:
    ctx->pc = 0x7F22580Cu;
    // 7F22580C: stfd     f29, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F22580Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F225810:
    ctx->pc = 0x7F225810u;
    // 7F225810: psq_st   f29, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F225810u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F225810u);
        if (ctx->exception) return;
    }

label_7F225814:
    ctx->pc = 0x7F225814u;
    // 7F225814: stfd     f28, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F225814u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F225818:
    ctx->pc = 0x7F225818u;
    // 7F225818: psq_st   f28, 248(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F225818u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F225818u);
        if (ctx->exception) return;
    }

label_7F22581C:
    ctx->pc = 0x7F22581Cu;
    // 7F22581C: stmw     r14, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        for (u32 r = 14; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F225820:
    ctx->pc = 0x7F225820u;
    // 7F225820: lis     r10, 32582
    ctx->gpr[10] = ((u32)(s32)(32582) << 16);

label_7F225824:
    ctx->pc = 0x7F225824u;
    // 7F225824: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F225828:
    ctx->pc = 0x7F225828u;
    // 7F225828: addi    r11, r10, 17596
    ctx->gpr[11] = ctx->gpr[10] + (u32)(s32)(17596);

label_7F22582C:
    ctx->pc = 0x7F22582Cu;
    // 7F22582C: lis     r12, 32582
    ctx->gpr[12] = ((u32)(s32)(32582) << 16);

label_7F225830:
    ctx->pc = 0x7F225830u;
    // 7F225830: lwz     r0, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F225834:
    ctx->pc = 0x7F225834u;
    // 7F225834: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F225838:
    ctx->pc = 0x7F225838u;
    // 7F225838: addi    r14, r4, 17620
    ctx->gpr[14] = ctx->gpr[4] + (u32)(s32)(17620);

label_7F22583C:
    ctx->pc = 0x7F22583Cu;
    // 7F22583C: lwz     r11, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F225840:
    ctx->pc = 0x7F225840u;
    // 7F225840: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225844:
    ctx->pc = 0x7F225844u;
    // 7F225844: lis     r10, 32582
    ctx->gpr[10] = ((u32)(s32)(32582) << 16);

label_7F225848:
    ctx->pc = 0x7F225848u;
    // 7F225848: addi    r10, r10, 17604
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(17604);

label_7F22584C:
    ctx->pc = 0x7F22584Cu;
    // 7F22584C: lfs     f0, 17660(r12)
    if (!ppc_fp_available_inline(ctx, 0x7F22584Cu)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(17660);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F225850:
    ctx->pc = 0x7F225850u;
    // 7F225850: sth     r26, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[26]);
    }

label_7F225854:
    ctx->pc = 0x7F225854u;
    // 7F225854: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F225858:
    ctx->pc = 0x7F225858u;
    // 7F225858: addi    r12, r4, 17636
    ctx->gpr[12] = ctx->gpr[4] + (u32)(s32)(17636);

label_7F22585C:
    ctx->pc = 0x7F22585Cu;
    // 7F22585C: lwz     r17, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        ctx->gpr[17] = mem_read32(ctx, ea);
    }

label_7F225860:
    ctx->pc = 0x7F225860u;
    // 7F225860: lwz     r15, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[15] = mem_read32(ctx, ea);
    }

label_7F225864:
    ctx->pc = 0x7F225864u;
    // 7F225864: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F225868:
    ctx->pc = 0x7F225868u;
    // 7F225868: lwz     r0, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F22586C:
    ctx->pc = 0x7F22586Cu;
    // 7F22586C: or   r28, r8, r8
    {
        ctx->gpr[28] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F225870:
    ctx->pc = 0x7F225870u;
    // 7F225870: stw     r15, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
    }

label_7F225874:
    ctx->pc = 0x7F225874u;
    // 7F225874: or   r15, r7, r7
    {
        ctx->gpr[15] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F225878:
    ctx->pc = 0x7F225878u;
    // 7F225878: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F225878u)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_7F22587C:
    ctx->pc = 0x7F22587Cu;
    // 7F22587C: lwz     r19, 4(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(4);
        ctx->gpr[19] = mem_read32(ctx, ea);
    }

label_7F225880:
    ctx->pc = 0x7F225880u;
    // 7F225880: stw     r11, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F225884:
    ctx->pc = 0x7F225884u;
    // 7F225884: or   r16, r9, r9
    {
        ctx->gpr[16] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F225888:
    ctx->pc = 0x7F225888u;
    // 7F225888: lwz     r18, 8(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(8);
        ctx->gpr[18] = mem_read32(ctx, ea);
    }

label_7F22588C:
    ctx->pc = 0x7F22588Cu;
    // 7F22588C: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F225890:
    ctx->pc = 0x7F225890u;
    // 7F225890: lfs     f5, 5244(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F225890u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5244);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F225894:
    ctx->pc = 0x7F225894u;
    // 7F225894: or   r3, r6, r6
    {
        ctx->gpr[3] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F225898:
    ctx->pc = 0x7F225898u;
    // 7F225898: lwz     r8, 4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F22589C:
    ctx->pc = 0x7F22589Cu;
    // 7F22589C: fmuls   f4, f3, f5
    if (!ppc_fp_available_inline(ctx, 0x7F22589Cu)) return;
    ppc_fmuls(ctx, 4, 3, 5);

label_7F2258A0:
    ctx->pc = 0x7F2258A0u;
    // 7F2258A0: lwz     r5, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2258A4:
    ctx->pc = 0x7F2258A4u;
    // 7F2258A4: stw     r17, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[17]);
    }

label_7F2258A8:
    ctx->pc = 0x7F2258A8u;
    // 7F2258A8: fmuls   f0, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x7F2258A8u)) return;
    ppc_fmuls(ctx, 0, 0, 5);

label_7F2258AC:
    ctx->pc = 0x7F2258ACu;
    // 7F2258AC: fmuls   f3, f1, f5
    if (!ppc_fp_available_inline(ctx, 0x7F2258ACu)) return;
    ppc_fmuls(ctx, 3, 1, 5);

label_7F2258B0:
    ctx->pc = 0x7F2258B0u;
    // 7F2258B0: lwz     r4, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2258B4:
    ctx->pc = 0x7F2258B4u;
    // 7F2258B4: stw     r0, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2258B8:
    ctx->pc = 0x7F2258B8u;
    // 7F2258B8: fmadds f4, f2, f5, f4
    if (!ppc_fp_available_inline(ctx, 0x7F2258B8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[5], ctx->fpr[4], true, false, false, &result))
            ctx->fpr[4] = ctx->ps1[4] = result;
    }

label_7F2258BC:
    ctx->pc = 0x7F2258BCu;
    // 7F2258BC: lwz     r0, 12(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2258C0:
    ctx->pc = 0x7F2258C0u;
    // 7F2258C0: fmadds f1, f2, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2258C0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[5], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F2258C4:
    ctx->pc = 0x7F2258C4u;
    // 7F2258C4: lwz     r20, 0(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(0);
        ctx->gpr[20] = mem_read32(ctx, ea);
    }

label_7F2258C8:
    ctx->pc = 0x7F2258C8u;
    // 7F2258C8: fmuls   f0, f2, f5
    if (!ppc_fp_available_inline(ctx, 0x7F2258C8u)) return;
    ppc_fmuls(ctx, 0, 2, 5);

label_7F2258CC:
    ctx->pc = 0x7F2258CCu;
    // 7F2258CC: lwz     r17, 12(r14)
    {
        u32 ea = ctx->gpr[14] + (u32)(s32)(12);
        ctx->gpr[17] = mem_read32(ctx, ea);
    }

label_7F2258D0:
    ctx->pc = 0x7F2258D0u;
    // 7F2258D0: lwz     r9, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2258D4:
    ctx->pc = 0x7F2258D4u;
    // 7F2258D4: addi    r14, r1, 96
    ctx->gpr[14] = ctx->gpr[1] + (u32)(s32)(96);

label_7F2258D8:
    ctx->pc = 0x7F2258D8u;
    // 7F2258D8: lwz     r7, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2258DC:
    ctx->pc = 0x7F2258DCu;
    // 7F2258DC: stw     r19, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[19]);
    }

label_7F2258E0:
    ctx->pc = 0x7F2258E0u;
    // 7F2258E0: stw     r18, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[18]);
    }

label_7F2258E4:
    ctx->pc = 0x7F2258E4u;
    // 7F2258E4: stw     r8, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2258E8:
    ctx->pc = 0x7F2258E8u;
    // 7F2258E8: stw     r5, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2258EC:
    ctx->pc = 0x7F2258ECu;
    // 7F2258EC: stfs     f4, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2258ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F2258F0:
    ctx->pc = 0x7F2258F0u;
    // 7F2258F0: stfs     f3, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2258F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F2258F4:
    ctx->pc = 0x7F2258F4u;
    // 7F2258F4: lwz     r18, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[18] = mem_read32(ctx, ea);
    }

label_7F2258F8:
    ctx->pc = 0x7F2258F8u;
    // 7F2258F8: stfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2258F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2258FC:
    ctx->pc = 0x7F2258FCu;
    // 7F2258FC: lwz     r12, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F225900:
    ctx->pc = 0x7F225900u;
    // 7F225900: stfs     f3, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F225900u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F225904:
    ctx->pc = 0x7F225904u;
    // 7F225904: lwz     r10, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F225908:
    ctx->pc = 0x7F225908u;
    // 7F225908: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F225908u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F22590C:
    ctx->pc = 0x7F22590Cu;
    // 7F22590C: lwz     r8, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F225910:
    ctx->pc = 0x7F225910u;
    // 7F225910: stfs     f3, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F225910u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F225914:
    ctx->pc = 0x7F225914u;
    // 7F225914: lwz     r6, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F225918:
    ctx->pc = 0x7F225918u;
    // 7F225918: lwz     r5, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F22591C:
    ctx->pc = 0x7F22591Cu;
    // 7F22591C: stw     r11, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F225920:
    ctx->pc = 0x7F225920u;
    // 7F225920: stw     r4, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F225924:
    ctx->pc = 0x7F225924u;
    // 7F225924: stw     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225928:
    ctx->pc = 0x7F225928u;
    // 7F225928: stw     r4, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F22592C:
    ctx->pc = 0x7F22592Cu;
    // 7F22592C: stw     r18, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[18]);
    }

label_7F225930:
    ctx->pc = 0x7F225930u;
    // 7F225930: stw     r12, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F225934:
    ctx->pc = 0x7F225934u;
    // 7F225934: stw     r0, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225938:
    ctx->pc = 0x7F225938u;
    // 7F225938: stw     r20, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[20]);
    }

label_7F22593C:
    ctx->pc = 0x7F22593Cu;
    // 7F22593C: stw     r17, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[17]);
    }

label_7F225940:
    ctx->pc = 0x7F225940u;
    // 7F225940: stw     r20, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[20]);
    }

label_7F225944:
    ctx->pc = 0x7F225944u;
    // 7F225944: stw     r10, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F225948:
    ctx->pc = 0x7F225948u;
    // 7F225948: stw     r8, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F22594C:
    ctx->pc = 0x7F22594Cu;
    // 7F22594C: stw     r17, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[17]);
    }

label_7F225950:
    ctx->pc = 0x7F225950u;
    // 7F225950: stw     r9, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F225954:
    ctx->pc = 0x7F225954u;
    // 7F225954: stw     r7, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F225958:
    ctx->pc = 0x7F225958u;
    // 7F225958: stw     r9, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F22595C:
    ctx->pc = 0x7F22595Cu;
    // 7F22595C: stw     r6, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F225960:
    ctx->pc = 0x7F225960u;
    // 7F225960: stw     r5, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F225964:
    ctx->pc = 0x7F225964u;
    // 7F225964: stw     r7, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F225968:
    ctx->pc = 0x7F225968u;
    // 7F225968: bl      0x7F3B6420
    {
            ctx->lr = 0x7F22596Cu;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F22596C:
    ctx->pc = 0x7F22596Cu;
    ctx->downcount -= 2;
    // 7F22596C: or.   r17, r3, r3
    {
        ctx->gpr[17] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[17];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F225970:
    ctx->pc = 0x7F225970u;
    // 7F225970: bc    4, 2, 0x7F22597C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F22597C;
        }
    }

label_7F225974:
    ctx->pc = 0x7F225974u;
    ctx->downcount -= 2;
    // 7F225974: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F225978:
    ctx->pc = 0x7F225978u;
    // 7F225978: b       0x7F225DD8
    {
            goto label_7F225DD8;
    }

label_7F22597C:
    ctx->pc = 0x7F22597Cu;
    ctx->downcount -= 6;
    // 7F22597C: lis     r3, 75
    ctx->gpr[3] = ((u32)(s32)(75) << 16);

label_7F225980:
    ctx->pc = 0x7F225980u;
    // 7F225980: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F225984:
    ctx->pc = 0x7F225984u;
    // 7F225984: addi    r3, r3, 2
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2);

label_7F225988:
    ctx->pc = 0x7F225988u;
    // 7F225988: li      r5, 61
    ctx->gpr[5] = (u32)(s32)(61);

label_7F22598C:
    ctx->pc = 0x7F22598Cu;
    // 7F22598C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F225990:
    ctx->pc = 0x7F225990u;
    // 7F225990: bl      0x7F3C2408
    {
            ctx->lr = 0x7F225994u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F225994:
    ctx->pc = 0x7F225994u;
    ctx->downcount -= 2;
    // 7F225994: or.   r31, r3, r3
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

label_7F225998:
    ctx->pc = 0x7F225998u;
    // 7F225998: bc    4, 2, 0x7F2259A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2259A4;
        }
    }

label_7F22599C:
    ctx->pc = 0x7F22599Cu;
    ctx->downcount -= 2;
    // 7F22599C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2259A0:
    ctx->pc = 0x7F2259A0u;
    // 7F2259A0: b       0x7F225DD8
    {
            goto label_7F225DD8;
    }

label_7F2259A4:
    ctx->pc = 0x7F2259A4u;
    ctx->downcount -= 8;
    // 7F2259A4: lwz     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2259A8:
    ctx->pc = 0x7F2259A8u;
    // 7F2259A8: ori     r0, r0, 0xE000
    ctx->gpr[0] = ctx->gpr[0] | 0xE000u;

label_7F2259AC:
    ctx->pc = 0x7F2259ACu;
    // 7F2259AC: stw     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2259B0:
    ctx->pc = 0x7F2259B0u;
    // 7F2259B0: lwz     r0, 5252(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(5252);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2259B4:
    ctx->pc = 0x7F2259B4u;
    // 7F2259B4: lwz     r30, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F2259B8:
    ctx->pc = 0x7F2259B8u;
    // 7F2259B8: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2259BC:
    ctx->pc = 0x7F2259BCu;
    // 7F2259BC: lwz     r29, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F2259C0:
    ctx->pc = 0x7F2259C0u;
    // 7F2259C0: bc    4, 2, 0x7F2259D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2259D4;
        }
    }

label_7F2259C4:
    ctx->pc = 0x7F2259C4u;
    ctx->downcount -= 6;
    // 7F2259C4: neg  r0, r16
    {
        u32 a = ctx->gpr[16];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F2259C8:
    ctx->pc = 0x7F2259C8u;
    // 7F2259C8: mulli   r0, r0, 320
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)320);

label_7F2259CC:
    ctx->pc = 0x7F2259CCu;
    // 7F2259CC: stw     r0, 304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2259D0:
    ctx->pc = 0x7F2259D0u;
    // 7F2259D0: b       0x7F2259D8
    {
            goto label_7F2259D8;
    }

label_7F2259D4:
    ctx->pc = 0x7F2259D4u;
    ctx->downcount -= 1;
    // 7F2259D4: stw     r0, 304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2259D8:
    ctx->pc = 0x7F2259D8u;
    ctx->downcount -= 5;
    // 7F2259D8: addi    r0, r25, 104
    ctx->gpr[0] = ctx->gpr[25] + (u32)(s32)(104);

label_7F2259DC:
    ctx->pc = 0x7F2259DCu;
    // 7F2259DC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2259E0:
    ctx->pc = 0x7F2259E0u;
    // 7F2259E0: stw     r0, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2259E4:
    ctx->pc = 0x7F2259E4u;
    // 7F2259E4: or   r4, r17, r17
    {
        ctx->gpr[4] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F2259E8:
    ctx->pc = 0x7F2259E8u;
    // 7F2259E8: bl      0x7F3C2534
    {
            ctx->lr = 0x7F2259ECu;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F2259EC:
    ctx->pc = 0x7F2259ECu;
    ctx->downcount -= 45;
    // 7F2259EC: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F2259F0:
    ctx->pc = 0x7F2259F0u;
    // 7F2259F0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2259F4:
    ctx->pc = 0x7F2259F4u;
    // 7F2259F4: stw     r0, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2259F8:
    ctx->pc = 0x7F2259F8u;
    // 7F2259F8: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F2259FC:
    ctx->pc = 0x7F2259FCu;
    // 7F2259FC: addi    r9, r3, 12832
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F225A00:
    ctx->pc = 0x7F225A00u;
    // 7F225A00: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F225A04:
    ctx->pc = 0x7F225A04u;
    // 7F225A04: stw     r24, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F225A08:
    ctx->pc = 0x7F225A08u;
    // 7F225A08: mulli   r0, r27, 960
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[27] * (s64)(s32)960);

label_7F225A0C:
    ctx->pc = 0x7F225A0Cu;
    // 7F225A0C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F225A10:
    ctx->pc = 0x7F225A10u;
    // 7F225A10: lfs     f31, 17664(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F225A10u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(17664);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F225A14:
    ctx->pc = 0x7F225A14u;
    // 7F225A14: lwz     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F225A18:
    ctx->pc = 0x7F225A18u;
    // 7F225A18: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F225A1C:
    ctx->pc = 0x7F225A1Cu;
    // 7F225A1C: lwz     r7, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F225A20:
    ctx->pc = 0x7F225A20u;
    // 7F225A20: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F225A24:
    ctx->pc = 0x7F225A24u;
    // 7F225A24: lis     r23, 1
    ctx->gpr[23] = ((u32)(s32)(1) << 16);

label_7F225A28:
    ctx->pc = 0x7F225A28u;
    // 7F225A28: stw     r8, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F225A2C:
    ctx->pc = 0x7F225A2Cu;
    // 7F225A2C: add   r21, r25, r0
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[21] = res;
    }

label_7F225A30:
    ctx->pc = 0x7F225A30u;
    // 7F225A30: lfd     f30, 17536(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F225A30u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(17536);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F225A34:
    ctx->pc = 0x7F225A34u;
    // 7F225A34: rlwinm r20, r15, 0, 24, 31
    {
        ctx->gpr[20] = dolrecomp_rotl32(ctx->gpr[15], 0u) & 0x000000FFu;
    }

label_7F225A38:
    ctx->pc = 0x7F225A38u;
    // 7F225A38: stw     r7, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F225A3C:
    ctx->pc = 0x7F225A3Cu;
    // 7F225A3C: addi    r7, r23, -28673
    ctx->gpr[7] = ctx->gpr[23] + (u32)(s32)(-28673);

label_7F225A40:
    ctx->pc = 0x7F225A40u;
    // 7F225A40: lfs     f29, 17668(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F225A40u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17668);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F225A44:
    ctx->pc = 0x7F225A44u;
    // 7F225A44: rlwinm r19, r15, 24, 24, 31
    {
        ctx->gpr[19] = dolrecomp_rotl32(ctx->gpr[15], 24u) & 0x000000FFu;
    }

label_7F225A48:
    ctx->pc = 0x7F225A48u;
    // 7F225A48: lwz     r8, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F225A4C:
    ctx->pc = 0x7F225A4Cu;
    // 7F225A4C: rlwinm r18, r15, 16, 24, 31
    {
        ctx->gpr[18] = dolrecomp_rotl32(ctx->gpr[15], 16u) & 0x000000FFu;
    }

label_7F225A50:
    ctx->pc = 0x7F225A50u;
    // 7F225A50: lwz     r6, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F225A54:
    ctx->pc = 0x7F225A54u;
    // 7F225A54: li      r15, 0
    ctx->gpr[15] = (u32)(s32)(0);

label_7F225A58:
    ctx->pc = 0x7F225A58u;
    // 7F225A58: lfs     f28, 17672(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F225A58u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17672);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F225A5C:
    ctx->pc = 0x7F225A5Cu;
    // 7F225A5C: li      r17, 0
    ctx->gpr[17] = (u32)(s32)(0);

label_7F225A60:
    ctx->pc = 0x7F225A60u;
    // 7F225A60: stw     r8, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F225A64:
    ctx->pc = 0x7F225A64u;
    // 7F225A64: lis     r22, 17200
    ctx->gpr[22] = ((u32)(s32)(17200) << 16);

label_7F225A68:
    ctx->pc = 0x7F225A68u;
    // 7F225A68: stw     r6, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F225A6C:
    ctx->pc = 0x7F225A6Cu;
    // 7F225A6C: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_7F225A70:
    ctx->pc = 0x7F225A70u;
    // 7F225A70: sth     r24, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[24]);
    }

label_7F225A74:
    ctx->pc = 0x7F225A74u;
    // 7F225A74: sth     r24, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[24]);
    }

label_7F225A78:
    ctx->pc = 0x7F225A78u;
    // 7F225A78: sth     r7, 10(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F225A7C:
    ctx->pc = 0x7F225A7Cu;
    // 7F225A7C: sth     r24, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[24]);
    }

label_7F225A80:
    ctx->pc = 0x7F225A80u;
    // 7F225A80: stb     r24, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[24]);
    }

label_7F225A84:
    ctx->pc = 0x7F225A84u;
    // 7F225A84: stb     r24, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[24]);
    }

label_7F225A88:
    ctx->pc = 0x7F225A88u;
    // 7F225A88: stb     r24, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[24]);
    }

label_7F225A8C:
    ctx->pc = 0x7F225A8Cu;
    // 7F225A8C: stb     r24, 3(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[24]);
    }

label_7F225A90:
    ctx->pc = 0x7F225A90u;
    // 7F225A90: addi    r29, r29, 12
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(12);

label_7F225A94:
    ctx->pc = 0x7F225A94u;
    // 7F225A94: sth     r26, 26(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[26]);
    }

label_7F225A98:
    ctx->downcount -= 1;
    // 7F225A98: li      r16, 0
    ctx->gpr[16] = (u32)(s32)(0);

label_7F225A9C:
    ctx->downcount -= 31;
    // 7F225A9C: add   r0, r16, r24
    {
        u32 a = ctx->gpr[16];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F225AA0:
    ctx->pc = 0x7F225AA0u;
    // 7F225AA0: stw     r22, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F225AA4:
    // 7F225AA4: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F225AA8:
    // 7F225AA8: addi    r3, r25, 936
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(936);

label_7F225AAC:
    ctx->pc = 0x7F225AACu;
    // 7F225AAC: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225AB0:
    // 7F225AB0: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F225AB4:
    ctx->pc = 0x7F225AB4u;
    // 7F225AB4: lfd     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F225AB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F225AB8:
    ctx->pc = 0x7F225AB8u;
    // 7F225AB8: fsubs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F225AB8u)) return;
    ppc_fsubs(ctx, 0, 0, 30);

label_7F225ABC:
    ctx->pc = 0x7F225ABCu;
    // 7F225ABC: fmuls   f0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F225ABCu)) return;
    ppc_fmuls(ctx, 0, 31, 0);

label_7F225AC0:
    ctx->pc = 0x7F225AC0u;
    // 7F225AC0: fdivs   f0, f0, f29
    if (!ppc_fp_available_inline(ctx, 0x7F225AC0u)) return;
    ppc_fdivs(ctx, 0, 0, 29);

label_7F225AC4:
    ctx->pc = 0x7F225AC4u;
    // 7F225AC4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F225AC4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F225AC8:
    ctx->pc = 0x7F225AC8u;
    // 7F225AC8: stfd     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F225AC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F225ACC:
    ctx->pc = 0x7F225ACCu;
    // 7F225ACC: lwz     r0, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F225AD0:
    ctx->pc = 0x7F225AD0u;
    // 7F225AD0: sth     r0, 26(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F225AD4:
    // 7F225AD4: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F225AD8u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F225AD8:
    ctx->downcount -= 4;
    // 7F225AD8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F225ADC:
    // 7F225ADC: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_7F225AE0:
    // 7F225AE0: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F225AE4:
    // 7F225AE4: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F225AE8u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F225AE8:
    ctx->downcount -= 7;
    // 7F225AE8: add   r0, r16, r17
    {
        u32 a = ctx->gpr[16];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F225AEC:
    // 7F225AEC: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_7F225AF0:
    // 7F225AF0: rlwinm r4, r0, 5, 0, 26
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 5u) & 0xFFFFFFE0u;
    }

label_7F225AF4:
    // 7F225AF4: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F225AF8:
    // 7F225AF8: addi    r4, r4, 1336
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1336);

label_7F225AFC:
    // 7F225AFC: add   r4, r21, r4
    {
        u32 a = ctx->gpr[21];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F225B00:
    // 7F225B00: bl      0x7F3B3648
    {
            ctx->lr = 0x7F225B04u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F225B04:
    ctx->downcount -= 16;
    // 7F225B04: xoris   r0, r16, 0x8000
    ctx->gpr[0] = ctx->gpr[16] ^ (0x8000u << 16);

label_7F225B08:
    ctx->pc = 0x7F225B08u;
    // 7F225B08: stw     r22, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F225B0C:
    // 7F225B0C: cmpwi   r16, 0
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

label_7F225B10:
    // 7F225B10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F225B14:
    ctx->pc = 0x7F225B14u;
    // 7F225B14: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225B18:
    // 7F225B18: addi    r0, r23, -28673
    ctx->gpr[0] = ctx->gpr[23] + (u32)(s32)(-28673);

label_7F225B1C:
    ctx->pc = 0x7F225B1Cu;
    // 7F225B1C: lfd     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F225B1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F225B20:
    ctx->pc = 0x7F225B20u;
    // 7F225B20: fsubs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F225B20u)) return;
    ppc_fsubs(ctx, 0, 0, 30);

label_7F225B24:
    ctx->pc = 0x7F225B24u;
    // 7F225B24: fmuls   f0, f28, f0
    if (!ppc_fp_available_inline(ctx, 0x7F225B24u)) return;
    ppc_fmuls(ctx, 0, 28, 0);

label_7F225B28:
    ctx->pc = 0x7F225B28u;
    // 7F225B28: fmuls   f1, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F225B28u)) return;
    ppc_fmuls(ctx, 1, 31, 0);

label_7F225B2C:
    ctx->pc = 0x7F225B2Cu;
    // 7F225B2C: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F225B2Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F225B30:
    ctx->pc = 0x7F225B30u;
    // 7F225B30: stfd     f0, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F225B30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F225B34:
    ctx->pc = 0x7F225B34u;
    // 7F225B34: lwz     r4, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F225B38:
    ctx->pc = 0x7F225B38u;
    // 7F225B38: sth     r4, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F225B3C:
    ctx->pc = 0x7F225B3Cu;
    // 7F225B3C: sth     r3, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F225B40:
    // 7F225B40: bc    12, 2, 0x7F225B48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F225B48;
        }
    }

label_7F225B44:
    ctx->downcount -= 1;
    // 7F225B44: li      r0, 4095
    ctx->gpr[0] = (u32)(s32)(4095);

label_7F225B48:
    ctx->pc = 0x7F225B48u;
    ctx->downcount -= 16;
    // 7F225B48: sth     r0, 10(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F225B4C:
    // 7F225B4C: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F225B50:
    ctx->pc = 0x7F225B50u;
    // 7F225B50: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F225B50u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F225B54:
    // 7F225B54: cmpwi   r16, 0
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

label_7F225B58:
    ctx->pc = 0x7F225B58u;
    // 7F225B58: sth     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F225B5C:
    // 7F225B5C: li      r3, 2048
    ctx->gpr[3] = (u32)(s32)(2048);

label_7F225B60:
    // 7F225B60: addi    r0, r23, -28673
    ctx->gpr[0] = ctx->gpr[23] + (u32)(s32)(-28673);

label_7F225B64:
    ctx->pc = 0x7F225B64u;
    // 7F225B64: stb     r20, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[20]);
    }

label_7F225B68:
    ctx->pc = 0x7F225B68u;
    // 7F225B68: stb     r19, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[19]);
    }

label_7F225B6C:
    ctx->pc = 0x7F225B6Cu;
    // 7F225B6C: stb     r18, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[18]);
    }

label_7F225B70:
    ctx->pc = 0x7F225B70u;
    // 7F225B70: stfd     f0, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F225B70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F225B74:
    ctx->pc = 0x7F225B74u;
    // 7F225B74: stb     r28, 3(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F225B78:
    ctx->pc = 0x7F225B78u;
    // 7F225B78: lwz     r4, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F225B7C:
    ctx->pc = 0x7F225B7Cu;
    // 7F225B7C: sth     r4, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F225B80:
    ctx->pc = 0x7F225B80u;
    // 7F225B80: sth     r3, 18(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F225B84:
    // 7F225B84: bc    12, 2, 0x7F225B8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F225B8C;
        }
    }

label_7F225B88:
    ctx->downcount -= 1;
    // 7F225B88: li      r0, 4095
    ctx->gpr[0] = (u32)(s32)(4095);

label_7F225B8C:
    ctx->pc = 0x7F225B8Cu;
    ctx->downcount -= 12;
    // 7F225B8C: sth     r0, 22(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F225B90:
    // 7F225B90: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F225B94:
    // 7F225B94: addi    r16, r16, 1
    ctx->gpr[16] = ctx->gpr[16] + (u32)(s32)(1);

label_7F225B98:
    // 7F225B98: addi    r30, r30, 32
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(32);

label_7F225B9C:
    ctx->pc = 0x7F225B9Cu;
    // 7F225B9C: sth     r0, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F225BA0:
    // 7F225BA0: cmpwi   r16, 5
    {
        s32 val_a = (s32)(ctx->gpr[16]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F225BA4:
    ctx->pc = 0x7F225BA4u;
    // 7F225BA4: stb     r20, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[20]);
    }

label_7F225BA8:
    ctx->pc = 0x7F225BA8u;
    // 7F225BA8: stb     r19, 13(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[19]);
    }

label_7F225BAC:
    ctx->pc = 0x7F225BACu;
    // 7F225BAC: stb     r18, 14(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[18]);
    }

label_7F225BB0:
    ctx->pc = 0x7F225BB0u;
    // 7F225BB0: stb     r28, 15(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F225BB4:
    // 7F225BB4: addi    r29, r29, 24
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(24);

label_7F225BB8:
    // 7F225BB8: bc    12, 0, 0x7F225A9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F225A9Cu;
                return;
            }
            goto label_7F225A9C;
        }
    }

label_7F225BBC:
    ctx->downcount -= 5;
    // 7F225BBC: addi    r15, r15, 1
    ctx->gpr[15] = ctx->gpr[15] + (u32)(s32)(1);

label_7F225BC0:
    // 7F225BC0: addi    r24, r24, 4
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(4);

label_7F225BC4:
    // 7F225BC4: cmpwi   r15, 3
    {
        s32 val_a = (s32)(ctx->gpr[15]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F225BC8:
    // 7F225BC8: addi    r17, r17, 5
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(5);

label_7F225BCC:
    // 7F225BCC: bc    12, 0, 0x7F225A98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F225A98u;
                return;
            }
            goto label_7F225A98;
        }
    }

label_7F225BD0:
    ctx->pc = 0x7F225BD0u;
    ctx->downcount -= 23;
    // 7F225BD0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F225BD4:
    ctx->pc = 0x7F225BD4u;
    // 7F225BD4: lwzu     r0, 17652(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17652);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F225BD8:
    ctx->pc = 0x7F225BD8u;
    // 7F225BD8: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F225BDC:
    ctx->pc = 0x7F225BDCu;
    // 7F225BDC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F225BE0:
    ctx->pc = 0x7F225BE0u;
    // 7F225BE0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225BE4:
    ctx->pc = 0x7F225BE4u;
    // 7F225BE4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F225BE8:
    ctx->pc = 0x7F225BE8u;
    // 7F225BE8: lwz     r7, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F225BEC:
    ctx->pc = 0x7F225BECu;
    // 7F225BEC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F225BF0:
    ctx->pc = 0x7F225BF0u;
    // 7F225BF0: sth     r26, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[26]);
    }

label_7F225BF4:
    ctx->pc = 0x7F225BF4u;
    // 7F225BF4: li      r17, 0
    ctx->gpr[17] = (u32)(s32)(0);

label_7F225BF8:
    ctx->pc = 0x7F225BF8u;
    // 7F225BF8: lfs     f28, 17664(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F225BF8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(17664);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F225BFC:
    ctx->pc = 0x7F225BFCu;
    // 7F225BFC: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F225C00:
    ctx->pc = 0x7F225C00u;
    // 7F225C00: sth     r26, 26(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[26]);
    }

label_7F225C04:
    ctx->pc = 0x7F225C04u;
    // 7F225C04: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F225C08:
    ctx->pc = 0x7F225C08u;
    // 7F225C08: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F225C0C:
    ctx->pc = 0x7F225C0Cu;
    // 7F225C0C: lis     r22, 17200
    ctx->gpr[22] = ((u32)(s32)(17200) << 16);

label_7F225C10:
    ctx->pc = 0x7F225C10u;
    // 7F225C10: stw     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F225C14:
    ctx->pc = 0x7F225C14u;
    // 7F225C14: lis     r15, 1
    ctx->gpr[15] = ((u32)(s32)(1) << 16);

label_7F225C18:
    ctx->pc = 0x7F225C18u;
    // 7F225C18: lfd     f29, 17536(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F225C18u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(17536);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F225C1C:
    ctx->pc = 0x7F225C1Cu;
    // 7F225C1C: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225C20:
    ctx->pc = 0x7F225C20u;
    // 7F225C20: lfs     f30, 17668(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F225C20u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17668);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F225C24:
    ctx->pc = 0x7F225C24u;
    // 7F225C24: stw     r7, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F225C28:
    ctx->pc = 0x7F225C28u;
    // 7F225C28: lfs     f31, 17672(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F225C28u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17672);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F225C2C:
    ctx->downcount -= 1;
    // 7F225C2C: li      r16, 0
    ctx->gpr[16] = (u32)(s32)(0);

label_7F225C30:
    ctx->downcount -= 31;
    // 7F225C30: add   r0, r16, r23
    {
        u32 a = ctx->gpr[16];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F225C34:
    ctx->pc = 0x7F225C34u;
    // 7F225C34: stw     r22, 160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F225C38:
    // 7F225C38: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F225C3C:
    // 7F225C3C: addi    r3, r25, 936
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(936);

label_7F225C40:
    ctx->pc = 0x7F225C40u;
    // 7F225C40: stw     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225C44:
    // 7F225C44: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F225C48:
    ctx->pc = 0x7F225C48u;
    // 7F225C48: lfd     f0, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F225C48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F225C4C:
    ctx->pc = 0x7F225C4Cu;
    // 7F225C4C: fsubs   f0, f0, f29
    if (!ppc_fp_available_inline(ctx, 0x7F225C4Cu)) return;
    ppc_fsubs(ctx, 0, 0, 29);

label_7F225C50:
    ctx->pc = 0x7F225C50u;
    // 7F225C50: fmuls   f0, f28, f0
    if (!ppc_fp_available_inline(ctx, 0x7F225C50u)) return;
    ppc_fmuls(ctx, 0, 28, 0);

label_7F225C54:
    ctx->pc = 0x7F225C54u;
    // 7F225C54: fdivs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F225C54u)) return;
    ppc_fdivs(ctx, 0, 0, 30);

label_7F225C58:
    ctx->pc = 0x7F225C58u;
    // 7F225C58: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F225C58u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F225C5C:
    ctx->pc = 0x7F225C5Cu;
    // 7F225C5C: stfd     f0, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F225C5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F225C60:
    ctx->pc = 0x7F225C60u;
    // 7F225C60: lwz     r0, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F225C64:
    ctx->pc = 0x7F225C64u;
    // 7F225C64: sth     r0, 26(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F225C68:
    // 7F225C68: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F225C6Cu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F225C6C:
    ctx->downcount -= 4;
    // 7F225C6C: or   r3, r14, r14
    {
        ctx->gpr[3] = ctx->gpr[14] | ctx->gpr[14];
    }

label_7F225C70:
    // 7F225C70: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F225C74:
    // 7F225C74: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F225C78:
    // 7F225C78: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F225C7Cu;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F225C7C:
    ctx->downcount -= 9;
    // 7F225C7C: add   r0, r16, r24
    {
        u32 a = ctx->gpr[16];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F225C80:
    // 7F225C80: or   r3, r14, r14
    {
        ctx->gpr[3] = ctx->gpr[14] | ctx->gpr[14];
    }

label_7F225C84:
    // 7F225C84: rlwinm r4, r0, 1, 0, 30
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F225C88:
    // 7F225C88: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F225C8C:
    // 7F225C8C: addi    r0, r4, 30
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(30);

label_7F225C90:
    // 7F225C90: rlwinm r4, r0, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F225C94:
    // 7F225C94: addi    r4, r4, 1336
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1336);

label_7F225C98:
    // 7F225C98: add   r4, r21, r4
    {
        u32 a = ctx->gpr[21];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F225C9C:
    // 7F225C9C: bl      0x7F3B3648
    {
            ctx->lr = 0x7F225CA0u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F225CA0:
    ctx->downcount -= 16;
    // 7F225CA0: xoris   r0, r16, 0x8000
    ctx->gpr[0] = ctx->gpr[16] ^ (0x8000u << 16);

label_7F225CA4:
    ctx->pc = 0x7F225CA4u;
    // 7F225CA4: stw     r22, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F225CA8:
    // 7F225CA8: cmpwi   r16, 0
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

label_7F225CAC:
    // 7F225CAC: li      r3, 2048
    ctx->gpr[3] = (u32)(s32)(2048);

label_7F225CB0:
    ctx->pc = 0x7F225CB0u;
    // 7F225CB0: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225CB4:
    // 7F225CB4: addi    r0, r15, -28673
    ctx->gpr[0] = ctx->gpr[15] + (u32)(s32)(-28673);

label_7F225CB8:
    ctx->pc = 0x7F225CB8u;
    // 7F225CB8: lfd     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F225CB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F225CBC:
    ctx->pc = 0x7F225CBCu;
    // 7F225CBC: fsubs   f0, f0, f29
    if (!ppc_fp_available_inline(ctx, 0x7F225CBCu)) return;
    ppc_fsubs(ctx, 0, 0, 29);

label_7F225CC0:
    ctx->pc = 0x7F225CC0u;
    // 7F225CC0: fmuls   f0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F225CC0u)) return;
    ppc_fmuls(ctx, 0, 31, 0);

label_7F225CC4:
    ctx->pc = 0x7F225CC4u;
    // 7F225CC4: fmuls   f1, f28, f0
    if (!ppc_fp_available_inline(ctx, 0x7F225CC4u)) return;
    ppc_fmuls(ctx, 1, 28, 0);

label_7F225CC8:
    ctx->pc = 0x7F225CC8u;
    // 7F225CC8: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F225CC8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F225CCC:
    ctx->pc = 0x7F225CCCu;
    // 7F225CCC: stfd     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F225CCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F225CD0:
    ctx->pc = 0x7F225CD0u;
    // 7F225CD0: lwz     r4, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F225CD4:
    ctx->pc = 0x7F225CD4u;
    // 7F225CD4: sth     r4, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F225CD8:
    ctx->pc = 0x7F225CD8u;
    // 7F225CD8: sth     r3, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F225CDC:
    // 7F225CDC: bc    12, 2, 0x7F225CE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F225CE4;
        }
    }

label_7F225CE0:
    ctx->downcount -= 1;
    // 7F225CE0: li      r0, 4095
    ctx->gpr[0] = (u32)(s32)(4095);

label_7F225CE4:
    ctx->pc = 0x7F225CE4u;
    ctx->downcount -= 15;
    // 7F225CE4: sth     r0, 10(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F225CE8:
    // 7F225CE8: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F225CEC:
    ctx->pc = 0x7F225CECu;
    // 7F225CEC: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F225CECu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F225CF0:
    // 7F225CF0: cmpwi   r16, 0
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

label_7F225CF4:
    ctx->pc = 0x7F225CF4u;
    // 7F225CF4: sth     r4, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F225CF8:
    // 7F225CF8: addi    r0, r15, -28673
    ctx->gpr[0] = ctx->gpr[15] + (u32)(s32)(-28673);

label_7F225CFC:
    ctx->pc = 0x7F225CFCu;
    // 7F225CFC: stb     r20, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[20]);
    }

label_7F225D00:
    ctx->pc = 0x7F225D00u;
    // 7F225D00: stb     r19, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[19]);
    }

label_7F225D04:
    ctx->pc = 0x7F225D04u;
    // 7F225D04: stb     r18, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[18]);
    }

label_7F225D08:
    ctx->pc = 0x7F225D08u;
    // 7F225D08: stfd     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F225D08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F225D0C:
    ctx->pc = 0x7F225D0Cu;
    // 7F225D0C: stb     r28, 3(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F225D10:
    ctx->pc = 0x7F225D10u;
    // 7F225D10: lwz     r3, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F225D14:
    ctx->pc = 0x7F225D14u;
    // 7F225D14: sth     r3, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F225D18:
    ctx->pc = 0x7F225D18u;
    // 7F225D18: sth     r4, 18(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F225D1C:
    // 7F225D1C: bc    12, 2, 0x7F225D24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F225D24;
        }
    }

label_7F225D20:
    ctx->downcount -= 1;
    // 7F225D20: li      r0, 4095
    ctx->gpr[0] = (u32)(s32)(4095);

label_7F225D24:
    ctx->pc = 0x7F225D24u;
    ctx->downcount -= 12;
    // 7F225D24: sth     r0, 22(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F225D28:
    // 7F225D28: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F225D2C:
    // 7F225D2C: addi    r16, r16, 1
    ctx->gpr[16] = ctx->gpr[16] + (u32)(s32)(1);

label_7F225D30:
    // 7F225D30: addi    r30, r30, 32
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(32);

label_7F225D34:
    ctx->pc = 0x7F225D34u;
    // 7F225D34: sth     r0, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F225D38:
    // 7F225D38: cmpwi   r16, 5
    {
        s32 val_a = (s32)(ctx->gpr[16]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F225D3C:
    ctx->pc = 0x7F225D3Cu;
    // 7F225D3C: stb     r20, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[20]);
    }

label_7F225D40:
    ctx->pc = 0x7F225D40u;
    // 7F225D40: stb     r19, 13(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[19]);
    }

label_7F225D44:
    ctx->pc = 0x7F225D44u;
    // 7F225D44: stb     r18, 14(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[18]);
    }

label_7F225D48:
    ctx->pc = 0x7F225D48u;
    // 7F225D48: stb     r28, 15(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F225D4C:
    // 7F225D4C: addi    r29, r29, 24
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(24);

label_7F225D50:
    // 7F225D50: bc    12, 0, 0x7F225C30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F225C30u;
                return;
            }
            goto label_7F225C30;
        }
    }

label_7F225D54:
    ctx->downcount -= 5;
    // 7F225D54: addi    r17, r17, 1
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(1);

label_7F225D58:
    // 7F225D58: addi    r23, r23, 4
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(4);

label_7F225D5C:
    // 7F225D5C: cmpwi   r17, 3
    {
        s32 val_a = (s32)(ctx->gpr[17]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F225D60:
    // 7F225D60: addi    r24, r24, 5
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(5);

label_7F225D64:
    // 7F225D64: bc    12, 0, 0x7F225C2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F225C2Cu;
                return;
            }
            goto label_7F225C2C;
        }
    }

label_7F225D68:
    ctx->pc = 0x7F225D68u;
    ctx->downcount -= 39;
    // 7F225D68: extsh r3, r26
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[26];
    }

label_7F225D6C:
    ctx->pc = 0x7F225D6Cu;
    // 7F225D6C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F225D70:
    ctx->pc = 0x7F225D70u;
    // 7F225D70: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F225D74:
    ctx->pc = 0x7F225D74u;
    // 7F225D74: stw     r0, 160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225D78:
    ctx->pc = 0x7F225D78u;
    // 7F225D78: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F225D7C:
    ctx->pc = 0x7F225D7Cu;
    // 7F225D7C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F225D80:
    ctx->pc = 0x7F225D80u;
    // 7F225D80: stw     r3, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F225D84:
    ctx->pc = 0x7F225D84u;
    // 7F225D84: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F225D88:
    ctx->pc = 0x7F225D88u;
    // 7F225D88: lfd     f1, 17536(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F225D88u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17536);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F225D8C:
    ctx->pc = 0x7F225D8Cu;
    // 7F225D8C: addi    r4, r3, 17532
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(17532);

label_7F225D90:
    ctx->pc = 0x7F225D90u;
    // 7F225D90: lfd     f0, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F225D90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F225D94:
    ctx->pc = 0x7F225D94u;
    // 7F225D94: rlwinm r0, r27, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[27], 2u) & 0xFFFFFFFCu;
    }

label_7F225D98:
    ctx->pc = 0x7F225D98u;
    // 7F225D98: lfs     f2, 17564(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F225D98u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(17564);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F225D9C:
    ctx->pc = 0x7F225D9Cu;
    // 7F225D9C: add   r3, r25, r0
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F225DA0:
    ctx->pc = 0x7F225DA0u;
    // 7F225DA0: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F225DA0u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F225DA4:
    ctx->pc = 0x7F225DA4u;
    // 7F225DA4: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F225DA4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F225DA8:
    ctx->pc = 0x7F225DA8u;
    // 7F225DA8: li      r5, 976
    ctx->gpr[5] = (u32)(s32)(976);

label_7F225DAC:
    ctx->pc = 0x7F225DACu;
    // 7F225DAC: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F225DACu)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F225DB0:
    ctx->pc = 0x7F225DB0u;
    // 7F225DB0: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F225DB0u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F225DB4:
    ctx->pc = 0x7F225DB4u;
    // 7F225DB4: stfs     f0, 72(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F225DB4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F225DB8:
    ctx->pc = 0x7F225DB8u;
    // 7F225DB8: lwz     r3, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F225DBC:
    ctx->pc = 0x7F225DBCu;
    // 7F225DBC: lwz     r4, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F225DC0:
    ctx->pc = 0x7F225DC0u;
    // 7F225DC0: bl      0x8000519C
    {
            ctx->lr = 0x7F225DC4u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F225DC4:
    ctx->pc = 0x7F225DC4u;
    ctx->downcount -= 4;
    // 7F225DC4: lwz     r3, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F225DC8:
    ctx->pc = 0x7F225DC8u;
    // 7F225DC8: li      r5, 732
    ctx->gpr[5] = (u32)(s32)(732);

label_7F225DCC:
    ctx->pc = 0x7F225DCCu;
    // 7F225DCC: lwz     r4, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F225DD0:
    ctx->pc = 0x7F225DD0u;
    // 7F225DD0: bl      0x8000519C
    {
            ctx->lr = 0x7F225DD4u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F225DD4:
    ctx->pc = 0x7F225DD4u;
    ctx->downcount -= 1;
    // 7F225DD4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F225DD8:
    ctx->pc = 0x7F225DD8u;
    ctx->downcount -= 24;
    // 7F225DD8: psq_l   f31, 296(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F225DD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(296);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F225DD8u);
        if (ctx->exception) return;
    }

label_7F225DDC:
    ctx->pc = 0x7F225DDCu;
    // 7F225DDC: lfd     f31, 288(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F225DDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F225DE0:
    ctx->pc = 0x7F225DE0u;
    // 7F225DE0: psq_l   f30, 280(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F225DE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F225DE0u);
        if (ctx->exception) return;
    }

label_7F225DE4:
    ctx->pc = 0x7F225DE4u;
    // 7F225DE4: lfd     f30, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F225DE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F225DE8:
    ctx->pc = 0x7F225DE8u;
    // 7F225DE8: psq_l   f29, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F225DE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F225DE8u);
        if (ctx->exception) return;
    }

label_7F225DEC:
    ctx->pc = 0x7F225DECu;
    // 7F225DEC: lfd     f29, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F225DECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F225DF0:
    ctx->pc = 0x7F225DF0u;
    // 7F225DF0: psq_l   f28, 248(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F225DF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(248);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F225DF0u);
        if (ctx->exception) return;
    }

label_7F225DF4:
    ctx->pc = 0x7F225DF4u;
    // 7F225DF4: lfd     f28, 240(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F225DF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(240);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F225DF8:
    ctx->pc = 0x7F225DF8u;
    // 7F225DF8: lmw     r14, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        for (u32 r = 14; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F225DFC:
    ctx->pc = 0x7F225DFCu;
    // 7F225DFC: lwz     r0, 308(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(308);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F225E00:
    ctx->pc = 0x7F225E00u;
    // 7F225E00: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F225E04:
    ctx->pc = 0x7F225E04u;
    // 7F225E04: addi    r1, r1, 304
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(304);

label_7F225E08:
    ctx->pc = 0x7F225E08u;
    // 7F225E08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F225E0C:
    ctx->pc = 0x7F225E0Cu;
    ctx->downcount -= 48;
    // 7F225E0C: stwu     r1, -192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-192);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F225E10:
    ctx->pc = 0x7F225E10u;
    // 7F225E10: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F225E14:
    ctx->pc = 0x7F225E14u;
    // 7F225E14: stw     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225E18:
    ctx->pc = 0x7F225E18u;
    // 7F225E18: stfd     f31, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F225E18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F225E1C:
    ctx->pc = 0x7F225E1Cu;
    // 7F225E1C: psq_st   f31, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F225E1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F225E1Cu);
        if (ctx->exception) return;
    }

label_7F225E20:
    ctx->pc = 0x7F225E20u;
    // 7F225E20: stmw     r18, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        for (u32 r = 18; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F225E24:
    ctx->pc = 0x7F225E24u;
    // 7F225E24: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F225E28:
    ctx->pc = 0x7F225E28u;
    // 7F225E28: lwzu     r8, 17676(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(17676);
        ctx->gpr[8] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F225E2C:
    ctx->pc = 0x7F225E2Cu;
    // 7F225E2C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F225E30:
    ctx->pc = 0x7F225E30u;
    // 7F225E30: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F225E34:
    ctx->pc = 0x7F225E34u;
    // 7F225E34: lwz     r7, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F225E38:
    ctx->pc = 0x7F225E38u;
    // 7F225E38: addi    r6, r4, 17684
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(17684);

label_7F225E3C:
    ctx->pc = 0x7F225E3Cu;
    // 7F225E3C: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F225E40:
    ctx->pc = 0x7F225E40u;
    // 7F225E40: lis     r3, 32592
    ctx->gpr[3] = ((u32)(s32)(32592) << 16);

label_7F225E44:
    ctx->pc = 0x7F225E44u;
    // 7F225E44: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F225E48:
    ctx->pc = 0x7F225E48u;
    // 7F225E48: addi    r3, r3, -21852
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-21852);

label_7F225E4C:
    ctx->pc = 0x7F225E4Cu;
    // 7F225E4C: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F225E50:
    ctx->pc = 0x7F225E50u;
    // 7F225E50: addi    r28, r3, 3024
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(3024);

label_7F225E54:
    ctx->pc = 0x7F225E54u;
    // 7F225E54: stw     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F225E58:
    ctx->pc = 0x7F225E58u;
    // 7F225E58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F225E5C:
    ctx->pc = 0x7F225E5Cu;
    // 7F225E5C: lwz     r6, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F225E60:
    ctx->pc = 0x7F225E60u;
    // 7F225E60: stw     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F225E64:
    ctx->pc = 0x7F225E64u;
    // 7F225E64: lfs     f0, 5244(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F225E64u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(5244);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F225E68:
    ctx->pc = 0x7F225E68u;
    // 7F225E68: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F225E6C:
    ctx->pc = 0x7F225E6Cu;
    // 7F225E6C: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F225E70:
    ctx->pc = 0x7F225E70u;
    // 7F225E70: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225E74:
    ctx->pc = 0x7F225E74u;
    // 7F225E74: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F225E74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F225E78:
    ctx->pc = 0x7F225E78u;
    // 7F225E78: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F225E78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F225E7C:
    ctx->pc = 0x7F225E7Cu;
    // 7F225E7C: lwz     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F225E80:
    ctx->pc = 0x7F225E80u;
    // 7F225E80: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F225E80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F225E84:
    ctx->pc = 0x7F225E84u;
    // 7F225E84: lwz     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F225E88:
    ctx->pc = 0x7F225E88u;
    // 7F225E88: lwz     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F225E8C:
    ctx->pc = 0x7F225E8Cu;
    // 7F225E8C: stw     r6, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F225E90:
    ctx->pc = 0x7F225E90u;
    // 7F225E90: stw     r5, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F225E94:
    ctx->pc = 0x7F225E94u;
    // 7F225E94: stw     r4, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F225E98:
    ctx->pc = 0x7F225E98u;
    // 7F225E98: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225E9C:
    ctx->pc = 0x7F225E9Cu;
    // 7F225E9C: stw     r6, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F225EA0:
    ctx->pc = 0x7F225EA0u;
    // 7F225EA0: bl      0x7F3B6420
    {
            ctx->lr = 0x7F225EA4u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F225EA4:
    ctx->pc = 0x7F225EA4u;
    ctx->downcount -= 7;
    // 7F225EA4: lis     r5, 73
    ctx->gpr[5] = ((u32)(s32)(73) << 16);

label_7F225EA8:
    ctx->pc = 0x7F225EA8u;
    // 7F225EA8: or   r18, r3, r3
    {
        ctx->gpr[18] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F225EAC:
    ctx->pc = 0x7F225EACu;
    // 7F225EAC: addi    r3, r5, 2
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(2);

label_7F225EB0:
    ctx->pc = 0x7F225EB0u;
    // 7F225EB0: li      r4, 12
    ctx->gpr[4] = (u32)(s32)(12);

label_7F225EB4:
    ctx->pc = 0x7F225EB4u;
    // 7F225EB4: li      r5, 9
    ctx->gpr[5] = (u32)(s32)(9);

label_7F225EB8:
    ctx->pc = 0x7F225EB8u;
    // 7F225EB8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F225EBC:
    ctx->pc = 0x7F225EBCu;
    // 7F225EBC: bl      0x7F3C2408
    {
            ctx->lr = 0x7F225EC0u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F225EC0:
    ctx->pc = 0x7F225EC0u;
    ctx->downcount -= 4;
    // 7F225EC0: or.   r31, r3, r3
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

label_7F225EC4:
    ctx->pc = 0x7F225EC4u;
    // 7F225EC4: stw     r31, 88(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F225EC8:
    ctx->pc = 0x7F225EC8u;
    // 7F225EC8: lwz     r30, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F225ECC:
    ctx->pc = 0x7F225ECCu;
    // 7F225ECC: bc    4, 2, 0x7F225ED8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F225ED8;
        }
    }

label_7F225ED0:
    ctx->pc = 0x7F225ED0u;
    ctx->downcount -= 2;
    // 7F225ED0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F225ED4:
    ctx->pc = 0x7F225ED4u;
    // 7F225ED4: b       0x7F226610
    {
            goto label_7F226610;
    }

label_7F225ED8:
    ctx->pc = 0x7F225ED8u;
    ctx->downcount -= 7;
    // 7F225ED8: lwz     r5, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F225EDC:
    ctx->pc = 0x7F225EDCu;
    // 7F225EDC: addi    r0, r27, 104
    ctx->gpr[0] = ctx->gpr[27] + (u32)(s32)(104);

label_7F225EE0:
    ctx->pc = 0x7F225EE0u;
    // 7F225EE0: or   r4, r18, r18
    {
        ctx->gpr[4] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F225EE4:
    ctx->pc = 0x7F225EE4u;
    // 7F225EE4: ori     r5, r5, 0xE000
    ctx->gpr[5] = ctx->gpr[5] | 0xE000u;

label_7F225EE8:
    ctx->pc = 0x7F225EE8u;
    // 7F225EE8: stw     r5, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F225EEC:
    ctx->pc = 0x7F225EECu;
    // 7F225EEC: stw     r0, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225EF0:
    ctx->pc = 0x7F225EF0u;
    // 7F225EF0: bl      0x7F3C2534
    {
            ctx->lr = 0x7F225EF4u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F225EF4:
    ctx->pc = 0x7F225EF4u;
    ctx->downcount -= 7;
    // 7F225EF4: li      r3, 68
    ctx->gpr[3] = (u32)(s32)(68);

label_7F225EF8:
    ctx->pc = 0x7F225EF8u;
    // 7F225EF8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F225EFC:
    ctx->pc = 0x7F225EFCu;
    // 7F225EFC: stw     r3, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F225F00:
    ctx->pc = 0x7F225F00u;
    // 7F225F00: stw     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225F04:
    ctx->pc = 0x7F225F04u;
    // 7F225F04: lwz     r0, 5256(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(5256);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F225F08:
    ctx->pc = 0x7F225F08u;
    // 7F225F08: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F225F0C:
    ctx->pc = 0x7F225F0Cu;
    // 7F225F0C: bc    4, 2, 0x7F225F20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F225F20;
        }
    }

label_7F225F10:
    ctx->pc = 0x7F225F10u;
    ctx->downcount -= 4;
    // 7F225F10: lis     r3, -15
    ctx->gpr[3] = ((u32)(s32)(-15) << 16);

label_7F225F14:
    ctx->pc = 0x7F225F14u;
    // 7F225F14: addi    r0, r3, -16960
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-16960);

label_7F225F18:
    ctx->pc = 0x7F225F18u;
    // 7F225F18: stw     r0, 304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225F1C:
    ctx->pc = 0x7F225F1Cu;
    // 7F225F1C: b       0x7F225F24
    {
            goto label_7F225F24;
    }

label_7F225F20:
    ctx->pc = 0x7F225F20u;
    ctx->downcount -= 1;
    // 7F225F20: stw     r0, 304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F225F24:
    ctx->pc = 0x7F225F24u;
    ctx->downcount -= 14;
    // 7F225F24: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F225F28:
    ctx->pc = 0x7F225F28u;
    // 7F225F28: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F225F2C:
    ctx->pc = 0x7F225F2Cu;
    // 7F225F2C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F225F30:
    ctx->pc = 0x7F225F30u;
    // 7F225F30: lwz     r29, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F225F34:
    ctx->pc = 0x7F225F34u;
    // 7F225F34: addi    r26, r4, 12832
    ctx->gpr[26] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F225F38:
    ctx->pc = 0x7F225F38u;
    // 7F225F38: addi    r22, r5, 8776
    ctx->gpr[22] = ctx->gpr[5] + (u32)(s32)(8776);

label_7F225F3C:
    ctx->pc = 0x7F225F3Cu;
    // 7F225F3C: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F225F40:
    ctx->pc = 0x7F225F40u;
    // 7F225F40: lfs     f31, 17700(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F225F40u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17700);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F225F44:
    ctx->pc = 0x7F225F44u;
    // 7F225F44: or   r25, r26, r26
    {
        ctx->gpr[25] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F225F48:
    ctx->pc = 0x7F225F48u;
    // 7F225F48: or   r24, r26, r26
    {
        ctx->gpr[24] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F225F4C:
    ctx->pc = 0x7F225F4Cu;
    // 7F225F4C: addi    r21, r22, 16
    ctx->gpr[21] = ctx->gpr[22] + (u32)(s32)(16);

label_7F225F50:
    ctx->pc = 0x7F225F50u;
    // 7F225F50: addi    r23, r4, -28673
    ctx->gpr[23] = ctx->gpr[4] + (u32)(s32)(-28673);

label_7F225F54:
    ctx->pc = 0x7F225F54u;
    // 7F225F54: li      r20, 0
    ctx->gpr[20] = (u32)(s32)(0);

label_7F225F58:
    ctx->pc = 0x7F225F58u;
    // 7F225F58: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_7F225F5C:
    ctx->downcount -= 14;
    // 7F225F5C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F225F60:
    // 7F225F60: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F225F64:
    ctx->pc = 0x7F225F64u;
    // 7F225F64: sth     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F225F68:
    // 7F225F68: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F225F6C:
    ctx->pc = 0x7F225F6Cu;
    // 7F225F6C: sth     r3, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F225F70:
    ctx->pc = 0x7F225F70u;
    // 7F225F70: sth     r23, 10(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[23]);
    }

label_7F225F74:
    ctx->pc = 0x7F225F74u;
    // 7F225F74: sth     r3, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F225F78:
    ctx->pc = 0x7F225F78u;
    // 7F225F78: stb     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F225F7C:
    ctx->pc = 0x7F225F7Cu;
    // 7F225F7C: stb     r3, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F225F80:
    ctx->pc = 0x7F225F80u;
    // 7F225F80: stb     r3, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F225F84:
    ctx->pc = 0x7F225F84u;
    // 7F225F84: stb     r3, 3(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F225F88:
    ctx->pc = 0x7F225F88u;
    // 7F225F88: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F225F8C:
    // 7F225F8C: addi    r29, r29, 12
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(12);

label_7F225F90:
    ctx->downcount -= 5;
    // 7F225F90: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F225F94:
    // 7F225F94: cmpwi   r4, 2
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

label_7F225F98:
    ctx->pc = 0x7F225F98u;
    // 7F225F98: sth     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F225F9C:
    ctx->pc = 0x7F225F9Cu;
    // 7F225F9C: sth     r0, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F225FA0:
    // 7F225FA0: bc    12, 0, 0x7F225FB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F225FB4;
        }
    }

label_7F225FA4:
    ctx->downcount -= 2;
    // 7F225FA4: cmpwi   r4, 5
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F225FA8:
    // 7F225FA8: bc    12, 2, 0x7F225FB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F225FB4;
        }
    }

label_7F225FAC:
    ctx->downcount -= 2;
    // 7F225FAC: cmpwi   r4, 6
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F225FB0:
    // 7F225FB0: bc    4, 2, 0x7F225FB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F225FB8;
        }
    }

label_7F225FB4:
    ctx->downcount -= 1;
    // 7F225FB4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F225FB8:
    ctx->downcount -= 3;
    // 7F225FB8: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F225FBC:
    // 7F225FBC: li      r0, 4095
    ctx->gpr[0] = (u32)(s32)(4095);

label_7F225FC0:
    // 7F225FC0: bc    12, 2, 0x7F225FCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F225FCC;
        }
    }

label_7F225FC4:
    ctx->downcount -= 2;
    // 7F225FC4: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F225FC8:
    // 7F225FC8: addi    r0, r3, -28673
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-28673);

label_7F225FCC:
    ctx->pc = 0x7F225FCCu;
    ctx->downcount -= 14;
    // 7F225FCC: sth     r0, 10(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F225FD0:
    // 7F225FD0: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_7F225FD4:
    // 7F225FD4: li      r0, 128
    ctx->gpr[0] = (u32)(s32)(128);

label_7F225FD8:
    // 7F225FD8: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F225FDC:
    ctx->pc = 0x7F225FDCu;
    // 7F225FDC: sth     r3, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F225FE0:
    ctx->pc = 0x7F225FE0u;
    // 7F225FE0: lbz     r3, 92(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F225FE4:
    ctx->pc = 0x7F225FE4u;
    // 7F225FE4: stb     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F225FE8:
    ctx->pc = 0x7F225FE8u;
    // 7F225FE8: lbz     r3, 93(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(93);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F225FEC:
    ctx->pc = 0x7F225FECu;
    // 7F225FEC: stb     r3, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F225FF0:
    ctx->pc = 0x7F225FF0u;
    // 7F225FF0: lbz     r3, 94(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(94);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F225FF4:
    ctx->pc = 0x7F225FF4u;
    // 7F225FF4: stb     r3, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F225FF8:
    ctx->pc = 0x7F225FF8u;
    // 7F225FF8: stb     r0, 3(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F225FFC:
    // 7F225FFC: addi    r29, r29, 12
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(12);

label_7F226000:
    // 7F226000: bc    16, 0, 0x7F225F90
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F225F90u;
                return;
            }
            goto label_7F225F90;
        }
    }

label_7F226004:
    ctx->pc = 0x7F226004u;
    ctx->downcount -= 11;
    // 7F226004: lwz     r5, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F226008:
    // 7F226008: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F22600C:
    ctx->pc = 0x7F22600Cu;
    // 7F22600C: lwz     r0, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226010:
    // 7F226010: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F226014:
    ctx->pc = 0x7F226014u;
    // 7F226014: stw     r5, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F226018:
    ctx->pc = 0x7F226018u;
    // 7F226018: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F22601C:
    ctx->pc = 0x7F22601Cu;
    // 7F22601C: lwz     r5, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F226020:
    ctx->pc = 0x7F226020u;
    // 7F226020: lwz     r0, 12(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226024:
    ctx->pc = 0x7F226024u;
    // 7F226024: stw     r5, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F226028:
    ctx->pc = 0x7F226028u;
    // 7F226028: stw     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F22602C:
    // 7F22602C: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F226030u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F226030:
    ctx->downcount -= 2;
    // 7F226030: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F226034:
    // 7F226034: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F226038u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F226038:
    ctx->downcount -= 4;
    // 7F226038: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F22603C:
    // 7F22603C: addi    r5, r1, 32
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(32);

label_7F226040:
    // 7F226040: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F226044:
    // 7F226044: bl      0x7F22EFC8
    {
            ctx->lr = 0x7F226048u;
            ctx->pc = 0x7F22EFC8u;
            return;
    }

label_7F226048:
    ctx->downcount -= 2;
    // 7F226048: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F22604C:
    // 7F22604C: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F226050u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F226050:
    ctx->downcount -= 4;
    // 7F226050: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F226054:
    // 7F226054: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F226058:
    // 7F226058: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F22605C:
    // 7F22605C: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F226060u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F226060:
    ctx->pc = 0x7F226060u;
    ctx->downcount -= 6;
    // 7F226060: lha     r5, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F226064:
    // 7F226064: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F226068:
    // 7F226068: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F22606C:
    // 7F22606C: addi    r0, r5, 512
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(512);

label_7F226070:
    ctx->pc = 0x7F226070u;
    // 7F226070: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F226074:
    // 7F226074: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F226078u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F226078:
    ctx->downcount -= 2;
    // 7F226078: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F22607C:
    // 7F22607C: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F226080u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F226080:
    ctx->downcount -= 4;
    // 7F226080: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F226084:
    // 7F226084: addi    r5, r1, 32
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(32);

label_7F226088:
    // 7F226088: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F22608C:
    // 7F22608C: bl      0x7F22EFC8
    {
            ctx->lr = 0x7F226090u;
            ctx->pc = 0x7F22EFC8u;
            return;
    }

label_7F226090:
    ctx->downcount -= 2;
    // 7F226090: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F226094:
    // 7F226094: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F226098u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F226098:
    ctx->downcount -= 4;
    // 7F226098: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F22609C:
    // 7F22609C: addi    r4, r28, 48
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(48);

label_7F2260A0:
    // 7F2260A0: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F2260A4:
    // 7F2260A4: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F2260A8u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F2260A8:
    ctx->pc = 0x7F2260A8u;
    ctx->downcount -= 6;
    // 7F2260A8: lha     r5, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2260AC:
    // 7F2260AC: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F2260B0:
    // 7F2260B0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2260B4:
    // 7F2260B4: addi    r0, r5, 512
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(512);

label_7F2260B8:
    ctx->pc = 0x7F2260B8u;
    // 7F2260B8: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2260BC:
    // 7F2260BC: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F2260C0u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F2260C0:
    ctx->downcount -= 2;
    // 7F2260C0: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F2260C4:
    // 7F2260C4: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F2260C8u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F2260C8:
    ctx->downcount -= 4;
    // 7F2260C8: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F2260CC:
    // 7F2260CC: addi    r5, r1, 32
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2260D0:
    // 7F2260D0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2260D4:
    // 7F2260D4: bl      0x7F22EFC8
    {
            ctx->lr = 0x7F2260D8u;
            ctx->pc = 0x7F22EFC8u;
            return;
    }

label_7F2260D8:
    ctx->downcount -= 2;
    // 7F2260D8: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F2260DC:
    // 7F2260DC: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F2260E0u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F2260E0:
    ctx->downcount -= 4;
    // 7F2260E0: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F2260E4:
    // 7F2260E4: addi    r4, r28, 80
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(80);

label_7F2260E8:
    // 7F2260E8: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F2260EC:
    // 7F2260EC: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F2260F0u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F2260F0:
    ctx->pc = 0x7F2260F0u;
    ctx->downcount -= 68;
    // 7F2260F0: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2260F4:
    ctx->pc = 0x7F2260F4u;
    // 7F2260F4: lwz     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2260F8:
    ctx->pc = 0x7F2260F8u;
    // 7F2260F8: stw     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2260FC:
    ctx->pc = 0x7F2260FCu;
    // 7F2260FC: stw     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226100:
    ctx->pc = 0x7F226100u;
    // 7F226100: lwz     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226104:
    ctx->pc = 0x7F226104u;
    // 7F226104: lwz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226108:
    ctx->pc = 0x7F226108u;
    // 7F226108: stw     r3, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F22610C:
    ctx->pc = 0x7F22610Cu;
    // 7F22610C: stw     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226110:
    ctx->pc = 0x7F226110u;
    // 7F226110: lwz     r3, 80(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226114:
    ctx->pc = 0x7F226114u;
    // 7F226114: lwz     r0, 84(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226118:
    ctx->pc = 0x7F226118u;
    // 7F226118: stw     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F22611C:
    ctx->pc = 0x7F22611Cu;
    // 7F22611C: stw     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226120:
    ctx->pc = 0x7F226120u;
    // 7F226120: lwz     r3, 88(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226124:
    ctx->pc = 0x7F226124u;
    // 7F226124: lwz     r0, 92(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226128:
    ctx->pc = 0x7F226128u;
    // 7F226128: stw     r3, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F22612C:
    ctx->pc = 0x7F22612Cu;
    // 7F22612C: stw     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226130:
    ctx->pc = 0x7F226130u;
    // 7F226130: lwz     r3, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226134:
    ctx->pc = 0x7F226134u;
    // 7F226134: lwz     r0, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226138:
    ctx->pc = 0x7F226138u;
    // 7F226138: stw     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F22613C:
    ctx->pc = 0x7F22613Cu;
    // 7F22613C: stw     r0, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226140:
    ctx->pc = 0x7F226140u;
    // 7F226140: lwz     r3, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226144:
    ctx->pc = 0x7F226144u;
    // 7F226144: lwz     r0, 28(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226148:
    ctx->pc = 0x7F226148u;
    // 7F226148: stw     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F22614C:
    ctx->pc = 0x7F22614Cu;
    // 7F22614C: stw     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226150:
    ctx->pc = 0x7F226150u;
    // 7F226150: lwz     r3, 64(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226154:
    ctx->pc = 0x7F226154u;
    // 7F226154: lwz     r0, 68(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226158:
    ctx->pc = 0x7F226158u;
    // 7F226158: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F22615C:
    ctx->pc = 0x7F22615Cu;
    // 7F22615C: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226160:
    ctx->pc = 0x7F226160u;
    // 7F226160: lwz     r3, 72(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226164:
    ctx->pc = 0x7F226164u;
    // 7F226164: lwz     r0, 76(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226168:
    ctx->pc = 0x7F226168u;
    // 7F226168: stw     r3, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F22616C:
    ctx->pc = 0x7F22616Cu;
    // 7F22616C: stw     r0, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226170:
    ctx->pc = 0x7F226170u;
    // 7F226170: lwz     r3, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226174:
    ctx->pc = 0x7F226174u;
    // 7F226174: lwz     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226178:
    ctx->pc = 0x7F226178u;
    // 7F226178: stw     r3, 80(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F22617C:
    ctx->pc = 0x7F22617Cu;
    // 7F22617C: stw     r0, 84(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226180:
    ctx->pc = 0x7F226180u;
    // 7F226180: lwz     r3, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226184:
    ctx->pc = 0x7F226184u;
    // 7F226184: lwz     r0, 44(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226188:
    ctx->pc = 0x7F226188u;
    // 7F226188: stw     r3, 88(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F22618C:
    ctx->pc = 0x7F22618Cu;
    // 7F22618C: stw     r0, 92(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226190:
    ctx->pc = 0x7F226190u;
    // 7F226190: lwz     r3, 80(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226194:
    ctx->pc = 0x7F226194u;
    // 7F226194: lwz     r0, 84(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226198:
    ctx->pc = 0x7F226198u;
    // 7F226198: stw     r3, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F22619C:
    ctx->pc = 0x7F22619Cu;
    // 7F22619C: stw     r0, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2261A0:
    ctx->pc = 0x7F2261A0u;
    // 7F2261A0: lwz     r3, 88(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2261A4:
    ctx->pc = 0x7F2261A4u;
    // 7F2261A4: lwz     r0, 92(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2261A8:
    ctx->pc = 0x7F2261A8u;
    // 7F2261A8: stw     r3, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2261AC:
    ctx->pc = 0x7F2261ACu;
    // 7F2261AC: stw     r0, 108(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2261B0:
    ctx->pc = 0x7F2261B0u;
    // 7F2261B0: lwz     r3, 64(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2261B4:
    ctx->pc = 0x7F2261B4u;
    // 7F2261B4: lwz     r0, 68(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2261B8:
    ctx->pc = 0x7F2261B8u;
    // 7F2261B8: stw     r3, 112(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2261BC:
    ctx->pc = 0x7F2261BCu;
    // 7F2261BC: stw     r0, 116(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2261C0:
    ctx->pc = 0x7F2261C0u;
    // 7F2261C0: lwz     r3, 72(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2261C4:
    ctx->pc = 0x7F2261C4u;
    // 7F2261C4: lwz     r0, 76(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2261C8:
    ctx->pc = 0x7F2261C8u;
    // 7F2261C8: stw     r3, 120(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2261CC:
    ctx->pc = 0x7F2261CCu;
    // 7F2261CC: stw     r0, 124(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2261D0:
    ctx->pc = 0x7F2261D0u;
    // 7F2261D0: lwz     r3, 96(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2261D4:
    ctx->pc = 0x7F2261D4u;
    // 7F2261D4: lwz     r0, 100(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2261D8:
    ctx->pc = 0x7F2261D8u;
    // 7F2261D8: stw     r3, 128(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2261DC:
    ctx->pc = 0x7F2261DCu;
    // 7F2261DC: stw     r0, 132(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2261E0:
    ctx->pc = 0x7F2261E0u;
    // 7F2261E0: lwz     r3, 104(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2261E4:
    ctx->pc = 0x7F2261E4u;
    // 7F2261E4: lwz     r0, 108(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2261E8:
    ctx->pc = 0x7F2261E8u;
    // 7F2261E8: stw     r3, 136(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2261EC:
    ctx->pc = 0x7F2261ECu;
    // 7F2261EC: stw     r0, 140(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2261F0:
    ctx->pc = 0x7F2261F0u;
    // 7F2261F0: lfs     f1, 32(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F2261F0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2261F4:
    ctx->pc = 0x7F2261F4u;
    // 7F2261F4: lfs     f2, 96(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F2261F4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2261F8:
    ctx->pc = 0x7F2261F8u;
    // 7F2261F8: lfs     f3, 0(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F2261F8u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2261FC:
    // 7F2261FC: bl      0x7F225704
    {
            ctx->lr = 0x7F226200u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F225704u;
                return;
            }
            goto label_7F225704;
    }

label_7F226200:
    ctx->downcount -= 8;
    // 7F226200: add   r18, r27, r19
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[18] = res;
    }

label_7F226204:
    ctx->pc = 0x7F226204u;
    // 7F226204: stfs     f1, 952(r18)
    if (!ppc_fp_available_inline(ctx, 0x7F226204u)) return;
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(952);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F226208:
    ctx->pc = 0x7F226208u;
    // 7F226208: lfs     f0, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F226208u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F22620C:
    ctx->pc = 0x7F22620Cu;
    // 7F22620C: stfs     f0, 956(r18)
    if (!ppc_fp_available_inline(ctx, 0x7F22620Cu)) return;
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(956);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F226210:
    ctx->pc = 0x7F226210u;
    // 7F226210: lfs     f1, 40(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F226210u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F226214:
    ctx->pc = 0x7F226214u;
    // 7F226214: lfs     f2, 104(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F226214u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F226218:
    ctx->pc = 0x7F226218u;
    // 7F226218: lfs     f3, 8(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F226218u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F22621C:
    // 7F22621C: bl      0x7F225704
    {
            ctx->lr = 0x7F226220u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F225704u;
                return;
            }
            goto label_7F225704;
    }

label_7F226220:
    ctx->pc = 0x7F226220u;
    ctx->downcount -= 6;
    // 7F226220: stfs     f1, 960(r18)
    if (!ppc_fp_available_inline(ctx, 0x7F226220u)) return;
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(960);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F226224:
    ctx->pc = 0x7F226224u;
    // 7F226224: stfs     f31, 964(r18)
    if (!ppc_fp_available_inline(ctx, 0x7F226224u)) return;
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(964);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F226228:
    ctx->pc = 0x7F226228u;
    // 7F226228: lfs     f1, 32(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F226228u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F22622C:
    ctx->pc = 0x7F22622Cu;
    // 7F22622C: lfs     f2, 96(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F22622Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F226230:
    ctx->pc = 0x7F226230u;
    // 7F226230: lfs     f3, 0(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F226230u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F226234:
    // 7F226234: bl      0x7F225734
    {
            ctx->lr = 0x7F226238u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F225734u;
                return;
            }
            goto label_7F225734;
    }

label_7F226238:
    ctx->pc = 0x7F226238u;
    ctx->downcount -= 7;
    // 7F226238: stfs     f1, 968(r18)
    if (!ppc_fp_available_inline(ctx, 0x7F226238u)) return;
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(968);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F22623C:
    ctx->pc = 0x7F22623Cu;
    // 7F22623C: lfs     f0, 68(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F22623Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F226240:
    ctx->pc = 0x7F226240u;
    // 7F226240: stfs     f0, 972(r18)
    if (!ppc_fp_available_inline(ctx, 0x7F226240u)) return;
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(972);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F226244:
    ctx->pc = 0x7F226244u;
    // 7F226244: lfs     f1, 40(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F226244u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F226248:
    ctx->pc = 0x7F226248u;
    // 7F226248: lfs     f2, 104(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F226248u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F22624C:
    ctx->pc = 0x7F22624Cu;
    // 7F22624C: lfs     f3, 8(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F22624Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F226250:
    // 7F226250: bl      0x7F225734
    {
            ctx->lr = 0x7F226254u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F225734u;
                return;
            }
            goto label_7F225734;
    }

label_7F226254:
    ctx->pc = 0x7F226254u;
    ctx->downcount -= 7;
    // 7F226254: stfs     f1, 976(r18)
    if (!ppc_fp_available_inline(ctx, 0x7F226254u)) return;
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(976);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F226258:
    // 7F226258: addi    r20, r20, 1
    ctx->gpr[20] = ctx->gpr[20] + (u32)(s32)(1);

label_7F22625C:
    // 7F22625C: cmpwi   r20, 4
    {
        s32 val_a = (s32)(ctx->gpr[20]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F226260:
    // 7F226260: addi    r19, r19, 32
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(32);

label_7F226264:
    ctx->pc = 0x7F226264u;
    // 7F226264: stfs     f31, 980(r18)
    if (!ppc_fp_available_inline(ctx, 0x7F226264u)) return;
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(980);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F226268:
    // 7F226268: addi    r30, r30, 144
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(144);

label_7F22626C:
    // 7F22626C: bc    12, 0, 0x7F225F5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F225F5Cu;
                return;
            }
            goto label_7F225F5C;
        }
    }

label_7F226270:
    ctx->pc = 0x7F226270u;
    ctx->downcount -= 13;
    // 7F226270: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F226274:
    ctx->pc = 0x7F226274u;
    // 7F226274: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_7F226278:
    ctx->pc = 0x7F226278u;
    // 7F226278: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F22627C:
    ctx->pc = 0x7F22627Cu;
    // 7F22627C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_7F226280:
    ctx->pc = 0x7F226280u;
    // 7F226280: addi    r25, r4, 12832
    ctx->gpr[25] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F226284:
    ctx->pc = 0x7F226284u;
    // 7F226284: lis     r6, 32584
    ctx->gpr[6] = ((u32)(s32)(32584) << 16);

label_7F226288:
    ctx->pc = 0x7F226288u;
    // 7F226288: addi    r4, r6, 8776
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(8776);

label_7F22628C:
    ctx->pc = 0x7F22628Cu;
    // 7F22628C: sth     r22, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[22]);
    }

label_7F226290:
    ctx->pc = 0x7F226290u;
    // 7F226290: lfs     f31, 17700(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F226290u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17700);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F226294:
    ctx->pc = 0x7F226294u;
    // 7F226294: or   r26, r25, r25
    {
        ctx->gpr[26] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F226298:
    ctx->pc = 0x7F226298u;
    // 7F226298: addi    r21, r4, 32
    ctx->gpr[21] = ctx->gpr[4] + (u32)(s32)(32);

label_7F22629C:
    ctx->pc = 0x7F22629Cu;
    // 7F22629C: addi    r24, r5, -28673
    ctx->gpr[24] = ctx->gpr[5] + (u32)(s32)(-28673);

label_7F2262A0:
    ctx->pc = 0x7F2262A0u;
    // 7F2262A0: li      r20, 0
    ctx->gpr[20] = (u32)(s32)(0);

label_7F2262A4:
    ctx->downcount -= 14;
    // 7F2262A4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2262A8:
    // 7F2262A8: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F2262AC:
    ctx->pc = 0x7F2262ACu;
    // 7F2262AC: sth     r4, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F2262B0:
    // 7F2262B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2262B4:
    ctx->pc = 0x7F2262B4u;
    // 7F2262B4: sth     r4, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F2262B8:
    ctx->pc = 0x7F2262B8u;
    // 7F2262B8: sth     r24, 10(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[24]);
    }

label_7F2262BC:
    ctx->pc = 0x7F2262BCu;
    // 7F2262BC: sth     r4, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F2262C0:
    ctx->pc = 0x7F2262C0u;
    // 7F2262C0: stb     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F2262C4:
    ctx->pc = 0x7F2262C4u;
    // 7F2262C4: stb     r4, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F2262C8:
    ctx->pc = 0x7F2262C8u;
    // 7F2262C8: stb     r4, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F2262CC:
    ctx->pc = 0x7F2262CCu;
    // 7F2262CC: stb     r4, 3(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F2262D0:
    ctx->pc = 0x7F2262D0u;
    // 7F2262D0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2262D4:
    // 7F2262D4: addi    r29, r29, 12
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(12);

label_7F2262D8:
    ctx->downcount -= 6;
    // 7F2262D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2262DC:
    // 7F2262DC: cmpwi   r3, 2
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

label_7F2262E0:
    ctx->pc = 0x7F2262E0u;
    // 7F2262E0: sth     r4, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F2262E4:
    // 7F2262E4: li      r0, 4095
    ctx->gpr[0] = (u32)(s32)(4095);

label_7F2262E8:
    ctx->pc = 0x7F2262E8u;
    // 7F2262E8: sth     r4, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F2262EC:
    // 7F2262EC: bc    4, 0, 0x7F2262F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2262F8;
        }
    }

label_7F2262F0:
    ctx->downcount -= 2;
    // 7F2262F0: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F2262F4:
    // 7F2262F4: addi    r0, r4, -28673
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-28673);

label_7F2262F8:
    ctx->pc = 0x7F2262F8u;
    ctx->downcount -= 20;
    // 7F2262F8: sth     r0, 10(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2262FC:
    // 7F2262FC: li      r5, 4096
    ctx->gpr[5] = (u32)(s32)(4096);

label_7F226300:
    // 7F226300: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F226304:
    // 7F226304: addi    r0, r3, -2
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-2);

label_7F226308:
    ctx->pc = 0x7F226308u;
    // 7F226308: sth     r5, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F22630C:
    // 7F22630C: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F226310:
    // 7F226310: addc   r4, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F226314:
    // 7F226314: li      r0, 128
    ctx->gpr[0] = (u32)(s32)(128);

label_7F226318:
    ctx->pc = 0x7F226318u;
    // 7F226318: lbz     r5, 92(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(92);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F22631C:
    // 7F22631C: subfe   r4, r4, r4
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[4];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F226320:
    // 7F226320: and   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
    }

label_7F226324:
    // 7F226324: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F226328:
    ctx->pc = 0x7F226328u;
    // 7F226328: stb     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F22632C:
    ctx->pc = 0x7F22632Cu;
    // 7F22632C: lbz     r4, 93(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(93);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F226330:
    ctx->pc = 0x7F226330u;
    // 7F226330: stb     r4, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F226334:
    ctx->pc = 0x7F226334u;
    // 7F226334: lbz     r4, 94(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(94);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F226338:
    ctx->pc = 0x7F226338u;
    // 7F226338: stb     r4, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F22633C:
    ctx->pc = 0x7F22633Cu;
    // 7F22633C: stb     r0, 3(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F226340:
    // 7F226340: addi    r29, r29, 12
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(12);

label_7F226344:
    // 7F226344: bc    16, 0, 0x7F2262D8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2262D8u;
                return;
            }
            goto label_7F2262D8;
        }
    }

label_7F226348:
    ctx->pc = 0x7F226348u;
    ctx->downcount -= 11;
    // 7F226348: lwz     r5, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F22634C:
    // 7F22634C: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F226350:
    ctx->pc = 0x7F226350u;
    // 7F226350: lwz     r0, 4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226354:
    // 7F226354: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F226358:
    ctx->pc = 0x7F226358u;
    // 7F226358: stw     r5, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F22635C:
    ctx->pc = 0x7F22635Cu;
    // 7F22635C: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226360:
    ctx->pc = 0x7F226360u;
    // 7F226360: lwz     r5, 8(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F226364:
    ctx->pc = 0x7F226364u;
    // 7F226364: lwz     r0, 12(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226368:
    ctx->pc = 0x7F226368u;
    // 7F226368: stw     r5, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F22636C:
    ctx->pc = 0x7F22636Cu;
    // 7F22636C: stw     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226370:
    // 7F226370: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F226374u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F226374:
    ctx->downcount -= 2;
    // 7F226374: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F226378:
    // 7F226378: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F22637Cu;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F22637C:
    ctx->downcount -= 4;
    // 7F22637C: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F226380:
    // 7F226380: addi    r5, r1, 32
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(32);

label_7F226384:
    // 7F226384: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F226388:
    // 7F226388: bl      0x7F22EFC8
    {
            ctx->lr = 0x7F22638Cu;
            ctx->pc = 0x7F22EFC8u;
            return;
    }

label_7F22638C:
    ctx->downcount -= 2;
    // 7F22638C: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F226390:
    // 7F226390: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F226394u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F226394:
    ctx->downcount -= 4;
    // 7F226394: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F226398:
    // 7F226398: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F22639C:
    // 7F22639C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F2263A0:
    // 7F2263A0: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F2263A4u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F2263A4:
    ctx->pc = 0x7F2263A4u;
    ctx->downcount -= 6;
    // 7F2263A4: lha     r5, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2263A8:
    // 7F2263A8: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2263AC:
    // 7F2263AC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2263B0:
    // 7F2263B0: addi    r0, r5, 512
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(512);

label_7F2263B4:
    ctx->pc = 0x7F2263B4u;
    // 7F2263B4: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2263B8:
    // 7F2263B8: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F2263BCu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F2263BC:
    ctx->downcount -= 2;
    // 7F2263BC: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F2263C0:
    // 7F2263C0: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F2263C4u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F2263C4:
    ctx->downcount -= 4;
    // 7F2263C4: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F2263C8:
    // 7F2263C8: addi    r5, r1, 32
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2263CC:
    // 7F2263CC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2263D0:
    // 7F2263D0: bl      0x7F22EFC8
    {
            ctx->lr = 0x7F2263D4u;
            ctx->pc = 0x7F22EFC8u;
            return;
    }

label_7F2263D4:
    ctx->downcount -= 2;
    // 7F2263D4: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F2263D8:
    // 7F2263D8: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F2263DCu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F2263DC:
    ctx->downcount -= 4;
    // 7F2263DC: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F2263E0:
    // 7F2263E0: addi    r4, r28, 32
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(32);

label_7F2263E4:
    // 7F2263E4: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F2263E8:
    // 7F2263E8: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F2263ECu;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F2263EC:
    ctx->pc = 0x7F2263ECu;
    ctx->downcount -= 68;
    // 7F2263EC: lwz     r3, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2263F0:
    ctx->pc = 0x7F2263F0u;
    // 7F2263F0: lwz     r0, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2263F4:
    ctx->pc = 0x7F2263F4u;
    // 7F2263F4: stw     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2263F8:
    ctx->pc = 0x7F2263F8u;
    // 7F2263F8: stw     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2263FC:
    ctx->pc = 0x7F2263FCu;
    // 7F2263FC: lwz     r3, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226400:
    ctx->pc = 0x7F226400u;
    // 7F226400: lwz     r0, 28(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226404:
    ctx->pc = 0x7F226404u;
    // 7F226404: stw     r3, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F226408:
    ctx->pc = 0x7F226408u;
    // 7F226408: stw     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F22640C:
    ctx->pc = 0x7F22640Cu;
    // 7F22640C: lwz     r3, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226410:
    ctx->pc = 0x7F226410u;
    // 7F226410: lwz     r0, 52(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226414:
    ctx->pc = 0x7F226414u;
    // 7F226414: stw     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F226418:
    ctx->pc = 0x7F226418u;
    // 7F226418: stw     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F22641C:
    ctx->pc = 0x7F22641Cu;
    // 7F22641C: lwz     r3, 56(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226420:
    ctx->pc = 0x7F226420u;
    // 7F226420: lwz     r0, 60(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226424:
    ctx->pc = 0x7F226424u;
    // 7F226424: stw     r3, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F226428:
    ctx->pc = 0x7F226428u;
    // 7F226428: stw     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F22642C:
    ctx->pc = 0x7F22642Cu;
    // 7F22642C: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226430:
    ctx->pc = 0x7F226430u;
    // 7F226430: lwz     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226434:
    ctx->pc = 0x7F226434u;
    // 7F226434: stw     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F226438:
    ctx->pc = 0x7F226438u;
    // 7F226438: stw     r0, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F22643C:
    ctx->pc = 0x7F22643Cu;
    // 7F22643C: lwz     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226440:
    ctx->pc = 0x7F226440u;
    // 7F226440: lwz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226444:
    ctx->pc = 0x7F226444u;
    // 7F226444: stw     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F226448:
    ctx->pc = 0x7F226448u;
    // 7F226448: stw     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F22644C:
    ctx->pc = 0x7F22644Cu;
    // 7F22644C: lwz     r3, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226450:
    ctx->pc = 0x7F226450u;
    // 7F226450: lwz     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226454:
    ctx->pc = 0x7F226454u;
    // 7F226454: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F226458:
    ctx->pc = 0x7F226458u;
    // 7F226458: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F22645C:
    ctx->pc = 0x7F22645Cu;
    // 7F22645C: lwz     r3, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226460:
    ctx->pc = 0x7F226460u;
    // 7F226460: lwz     r0, 44(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226464:
    ctx->pc = 0x7F226464u;
    // 7F226464: stw     r3, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F226468:
    ctx->pc = 0x7F226468u;
    // 7F226468: stw     r0, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F22646C:
    ctx->pc = 0x7F22646Cu;
    // 7F22646C: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226470:
    ctx->pc = 0x7F226470u;
    // 7F226470: lwz     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226474:
    ctx->pc = 0x7F226474u;
    // 7F226474: stw     r3, 80(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F226478:
    ctx->pc = 0x7F226478u;
    // 7F226478: stw     r0, 84(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F22647C:
    ctx->pc = 0x7F22647Cu;
    // 7F22647C: lwz     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226480:
    ctx->pc = 0x7F226480u;
    // 7F226480: lwz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226484:
    ctx->pc = 0x7F226484u;
    // 7F226484: stw     r3, 88(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F226488:
    ctx->pc = 0x7F226488u;
    // 7F226488: stw     r0, 92(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F22648C:
    ctx->pc = 0x7F22648Cu;
    // 7F22648C: lwz     r3, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226490:
    ctx->pc = 0x7F226490u;
    // 7F226490: lwz     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226494:
    ctx->pc = 0x7F226494u;
    // 7F226494: stw     r3, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F226498:
    ctx->pc = 0x7F226498u;
    // 7F226498: stw     r0, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F22649C:
    ctx->pc = 0x7F22649Cu;
    // 7F22649C: lwz     r3, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2264A0:
    ctx->pc = 0x7F2264A0u;
    // 7F2264A0: lwz     r0, 44(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2264A4:
    ctx->pc = 0x7F2264A4u;
    // 7F2264A4: stw     r3, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2264A8:
    ctx->pc = 0x7F2264A8u;
    // 7F2264A8: stw     r0, 108(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2264AC:
    ctx->pc = 0x7F2264ACu;
    // 7F2264AC: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2264B0:
    ctx->pc = 0x7F2264B0u;
    // 7F2264B0: lwz     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2264B4:
    ctx->pc = 0x7F2264B4u;
    // 7F2264B4: stw     r3, 112(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2264B8:
    ctx->pc = 0x7F2264B8u;
    // 7F2264B8: stw     r0, 116(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2264BC:
    ctx->pc = 0x7F2264BCu;
    // 7F2264BC: lwz     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2264C0:
    ctx->pc = 0x7F2264C0u;
    // 7F2264C0: lwz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2264C4:
    ctx->pc = 0x7F2264C4u;
    // 7F2264C4: stw     r3, 120(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2264C8:
    ctx->pc = 0x7F2264C8u;
    // 7F2264C8: stw     r0, 124(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2264CC:
    ctx->pc = 0x7F2264CCu;
    // 7F2264CC: lwz     r3, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2264D0:
    ctx->pc = 0x7F2264D0u;
    // 7F2264D0: lwz     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2264D4:
    ctx->pc = 0x7F2264D4u;
    // 7F2264D4: stw     r3, 128(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2264D8:
    ctx->pc = 0x7F2264D8u;
    // 7F2264D8: stw     r0, 132(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2264DC:
    ctx->pc = 0x7F2264DCu;
    // 7F2264DC: lwz     r3, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2264E0:
    ctx->pc = 0x7F2264E0u;
    // 7F2264E0: lwz     r0, 44(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2264E4:
    ctx->pc = 0x7F2264E4u;
    // 7F2264E4: stw     r3, 136(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2264E8:
    ctx->pc = 0x7F2264E8u;
    // 7F2264E8: stw     r0, 140(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2264EC:
    ctx->pc = 0x7F2264ECu;
    // 7F2264EC: lfs     f0, 0(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F2264ECu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2264F0:
    ctx->pc = 0x7F2264F0u;
    // 7F2264F0: lfs     f1, 32(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F2264F0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2264F4:
    ctx->pc = 0x7F2264F4u;
    // 7F2264F4: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2264F4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F2264F8:
    // 7F2264F8: bc    4, 1, 0x7F226500
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F226500;
        }
    }

label_7F2264FC:
    ctx->downcount -= 1;
    // 7F2264FC: b       0x7F226504
    {
            goto label_7F226504;
    }

label_7F226500:
    ctx->pc = 0x7F226500u;
    ctx->downcount -= 1;
    // 7F226500: fmr    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F226500u)) return;
    ctx->fpr[0] = ctx->fpr[1];

label_7F226504:
    ctx->downcount -= 8;
    // 7F226504: add   r3, r27, r20
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F226508:
    ctx->pc = 0x7F226508u;
    // 7F226508: stfs     f0, 1080(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F226508u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1080);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F22650C:
    ctx->pc = 0x7F22650Cu;
    // 7F22650C: lfs     f0, 20(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F22650Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F226510:
    ctx->pc = 0x7F226510u;
    // 7F226510: stfs     f0, 1084(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F226510u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1084);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F226514:
    ctx->pc = 0x7F226514u;
    // 7F226514: lfs     f0, 8(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F226514u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F226518:
    ctx->pc = 0x7F226518u;
    // 7F226518: lfs     f1, 40(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F226518u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F22651C:
    ctx->pc = 0x7F22651Cu;
    // 7F22651C: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F22651Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F226520:
    // 7F226520: bc    4, 1, 0x7F226528
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F226528;
        }
    }

label_7F226524:
    ctx->downcount -= 1;
    // 7F226524: b       0x7F22652C
    {
            goto label_7F22652C;
    }

label_7F226528:
    ctx->pc = 0x7F226528u;
    ctx->downcount -= 1;
    // 7F226528: fmr    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F226528u)) return;
    ctx->fpr[0] = ctx->fpr[1];

label_7F22652C:
    ctx->pc = 0x7F22652Cu;
    ctx->downcount -= 6;
    // 7F22652C: stfs     f0, 1088(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F22652Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1088);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F226530:
    ctx->pc = 0x7F226530u;
    // 7F226530: stfs     f31, 1092(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F226530u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1092);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F226534:
    ctx->pc = 0x7F226534u;
    // 7F226534: lfs     f1, 0(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F226534u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F226538:
    ctx->pc = 0x7F226538u;
    // 7F226538: lfs     f0, 32(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F226538u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F22653C:
    ctx->pc = 0x7F22653Cu;
    // 7F22653C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F22653Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F226540:
    // 7F226540: bc    4, 1, 0x7F226548
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F226548;
        }
    }

label_7F226544:
    ctx->downcount -= 1;
    // 7F226544: b       0x7F22654C
    {
            goto label_7F22654C;
    }

label_7F226548:
    ctx->pc = 0x7F226548u;
    ctx->downcount -= 1;
    // 7F226548: fmr    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F226548u)) return;
    ctx->fpr[0] = ctx->fpr[1];

label_7F22654C:
    ctx->pc = 0x7F22654Cu;
    ctx->downcount -= 7;
    // 7F22654C: stfs     f0, 1096(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F22654Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1096);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F226550:
    ctx->pc = 0x7F226550u;
    // 7F226550: lfs     f0, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F226550u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F226554:
    ctx->pc = 0x7F226554u;
    // 7F226554: stfs     f0, 1100(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F226554u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F226558:
    ctx->pc = 0x7F226558u;
    // 7F226558: lfs     f1, 8(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F226558u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F22655C:
    ctx->pc = 0x7F22655Cu;
    // 7F22655C: lfs     f0, 40(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F22655Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F226560:
    ctx->pc = 0x7F226560u;
    // 7F226560: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F226560u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F226564:
    // 7F226564: bc    4, 1, 0x7F22656C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F22656C;
        }
    }

label_7F226568:
    ctx->downcount -= 1;
    // 7F226568: b       0x7F226570
    {
            goto label_7F226570;
    }

label_7F22656C:
    ctx->pc = 0x7F22656Cu;
    ctx->downcount -= 1;
    // 7F22656C: fmr    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F22656Cu)) return;
    ctx->fpr[0] = ctx->fpr[1];

label_7F226570:
    ctx->pc = 0x7F226570u;
    ctx->downcount -= 16;
    // 7F226570: stfs     f0, 1104(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F226570u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F226574:
    ctx->pc = 0x7F226574u;
    // 7F226574: stfs     f31, 1108(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F226574u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1108);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F226578:
    ctx->pc = 0x7F226578u;
    // 7F226578: lfs     f2, 5240(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F226578u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(5240);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F22657C:
    ctx->pc = 0x7F22657Cu;
    // 7F22657C: lfs     f1, 5244(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F22657Cu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(5244);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F226580:
    ctx->pc = 0x7F226580u;
    // 7F226580: lfs     f0, 52(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F226580u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F226584:
    ctx->pc = 0x7F226584u;
    // 7F226584: fnmsubs f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F226584u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, true, true, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F226588:
    ctx->pc = 0x7F226588u;
    // 7F226588: stfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F226588u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F22658C:
    ctx->pc = 0x7F22658Cu;
    // 7F22658C: lfs     f2, 5240(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F22658Cu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(5240);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F226590:
    ctx->pc = 0x7F226590u;
    // 7F226590: lfs     f1, 5244(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F226590u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(5244);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F226594:
    ctx->pc = 0x7F226594u;
    // 7F226594: lfs     f0, 68(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F226594u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F226598:
    ctx->pc = 0x7F226598u;
    // 7F226598: fnmsubs f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F226598u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, true, true, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F22659C:
    ctx->pc = 0x7F22659Cu;
    // 7F22659C: stfs     f0, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F22659Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2265A0:
    ctx->pc = 0x7F2265A0u;
    // 7F2265A0: lfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F2265A0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2265A4:
    ctx->pc = 0x7F2265A4u;
    // 7F2265A4: lfs     f1, 52(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F2265A4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2265A8:
    ctx->pc = 0x7F2265A8u;
    // 7F2265A8: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2265A8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F2265AC:
    // 7F2265AC: bc    4, 1, 0x7F2265B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2265B4;
        }
    }

label_7F2265B0:
    ctx->downcount -= 1;
    // 7F2265B0: b       0x7F2265B8
    {
            goto label_7F2265B8;
    }

label_7F2265B4:
    ctx->pc = 0x7F2265B4u;
    ctx->downcount -= 1;
    // 7F2265B4: fmr    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2265B4u)) return;
    ctx->fpr[0] = ctx->fpr[1];

label_7F2265B8:
    ctx->pc = 0x7F2265B8u;
    ctx->downcount -= 5;
    // 7F2265B8: stfs     f0, 1084(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2265B8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1084);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2265BC:
    ctx->pc = 0x7F2265BCu;
    // 7F2265BC: lfs     f1, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F2265BCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2265C0:
    ctx->pc = 0x7F2265C0u;
    // 7F2265C0: lfs     f0, 52(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F2265C0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2265C4:
    ctx->pc = 0x7F2265C4u;
    // 7F2265C4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2265C4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F2265C8:
    // 7F2265C8: bc    4, 1, 0x7F2265D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2265D0;
        }
    }

label_7F2265CC:
    ctx->downcount -= 1;
    // 7F2265CC: b       0x7F2265D4
    {
            goto label_7F2265D4;
    }

label_7F2265D0:
    ctx->pc = 0x7F2265D0u;
    ctx->downcount -= 1;
    // 7F2265D0: fmr    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2265D0u)) return;
    ctx->fpr[0] = ctx->fpr[1];

label_7F2265D4:
    ctx->downcount -= 6;
    // 7F2265D4: addi    r22, r22, 1
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(1);

label_7F2265D8:
    ctx->pc = 0x7F2265D8u;
    // 7F2265D8: stfs     f0, 1100(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2265D8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2265DC:
    // 7F2265DC: cmpwi   r22, 8
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2265E0:
    // 7F2265E0: addi    r30, r30, 144
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(144);

label_7F2265E4:
    // 7F2265E4: addi    r20, r20, 32
    ctx->gpr[20] = ctx->gpr[20] + (u32)(s32)(32);

label_7F2265E8:
    // 7F2265E8: bc    12, 0, 0x7F2262A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2262A4u;
                return;
            }
            goto label_7F2262A4;
        }
    }

label_7F2265EC:
    ctx->pc = 0x7F2265ECu;
    ctx->downcount -= 4;
    // 7F2265EC: lwz     r3, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2265F0:
    ctx->pc = 0x7F2265F0u;
    // 7F2265F0: li      r5, 1728
    ctx->gpr[5] = (u32)(s32)(1728);

label_7F2265F4:
    ctx->pc = 0x7F2265F4u;
    // 7F2265F4: lwz     r4, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2265F8:
    ctx->pc = 0x7F2265F8u;
    // 7F2265F8: bl      0x8000519C
    {
            ctx->lr = 0x7F2265FCu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F2265FC:
    ctx->pc = 0x7F2265FCu;
    ctx->downcount -= 4;
    // 7F2265FC: lwz     r3, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226600:
    ctx->pc = 0x7F226600u;
    // 7F226600: li      r5, 1296
    ctx->gpr[5] = (u32)(s32)(1296);

label_7F226604:
    ctx->pc = 0x7F226604u;
    // 7F226604: lwz     r4, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F226608:
    ctx->pc = 0x7F226608u;
    // 7F226608: bl      0x8000519C
    {
            ctx->lr = 0x7F22660Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F22660C:
    ctx->pc = 0x7F22660Cu;
    ctx->downcount -= 1;
    // 7F22660C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F226610:
    ctx->pc = 0x7F226610u;
    ctx->downcount -= 18;
    // 7F226610: psq_l   f31, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F226610u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F226610u);
        if (ctx->exception) return;
    }

label_7F226614:
    ctx->pc = 0x7F226614u;
    // 7F226614: lfd     f31, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F226614u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F226618:
    ctx->pc = 0x7F226618u;
    // 7F226618: lmw     r18, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        for (u32 r = 18; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F22661C:
    ctx->pc = 0x7F22661Cu;
    // 7F22661C: lwz     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226620:
    ctx->pc = 0x7F226620u;
    // 7F226620: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F226624:
    ctx->pc = 0x7F226624u;
    // 7F226624: addi    r1, r1, 192
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(192);

label_7F226628:
    ctx->pc = 0x7F226628u;
    // 7F226628: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F22662C:
    ctx->pc = 0x7F22662Cu;
    ctx->downcount -= 7;
    // 7F22662C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F226630:
    ctx->pc = 0x7F226630u;
    // 7F226630: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F226634:
    ctx->pc = 0x7F226634u;
    // 7F226634: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226638:
    ctx->pc = 0x7F226638u;
    // 7F226638: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F22663C:
    ctx->pc = 0x7F22663Cu;
    // 7F22663C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F226640:
    ctx->pc = 0x7F226640u;
    // 7F226640: li      r3, 99
    ctx->gpr[3] = (u32)(s32)(99);

label_7F226644:
    ctx->pc = 0x7F226644u;
    // 7F226644: bl      0x7F3C664C
    {
            ctx->lr = 0x7F226648u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F226648:
    ctx->pc = 0x7F226648u;
    ctx->downcount -= 2;
    // 7F226648: cmplwi  r3, 0x0000
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

label_7F22664C:
    ctx->pc = 0x7F22664Cu;
    // 7F22664C: bc    12, 2, 0x7F22666C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F22666C;
        }
    }

label_7F226650:
    ctx->pc = 0x7F226650u;
    ctx->downcount -= 1;
    // 7F226650: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F226654u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F226654:
    ctx->pc = 0x7F226654u;
    ctx->downcount -= 2;
    // 7F226654: stb     r3, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F226658:
    ctx->pc = 0x7F226658u;
    // 7F226658: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F22665Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F22665C:
    ctx->pc = 0x7F22665Cu;
    ctx->downcount -= 2;
    // 7F22665C: stb     r3, 93(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(93);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F226660:
    ctx->pc = 0x7F226660u;
    // 7F226660: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F226664u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F226664:
    ctx->pc = 0x7F226664u;
    ctx->downcount -= 2;
    // 7F226664: stb     r3, 94(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(94);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F226668:
    ctx->pc = 0x7F226668u;
    // 7F226668: b       0x7F226684
    {
            goto label_7F226684;
    }

label_7F22666C:
    ctx->pc = 0x7F22666Cu;
    ctx->downcount -= 6;
    // 7F22666C: li      r0, 130
    ctx->gpr[0] = (u32)(s32)(130);

label_7F226670:
    ctx->pc = 0x7F226670u;
    // 7F226670: li      r3, 200
    ctx->gpr[3] = (u32)(s32)(200);

label_7F226674:
    ctx->pc = 0x7F226674u;
    // 7F226674: stb     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F226678:
    ctx->pc = 0x7F226678u;
    // 7F226678: li      r0, 250
    ctx->gpr[0] = (u32)(s32)(250);

label_7F22667C:
    ctx->pc = 0x7F22667Cu;
    // 7F22667C: stb     r3, 93(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(93);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F226680:
    ctx->pc = 0x7F226680u;
    // 7F226680: stb     r0, 94(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(94);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F226684:
    ctx->pc = 0x7F226684u;
    ctx->downcount -= 2;
    // 7F226684: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F226688:
    ctx->pc = 0x7F226688u;
    // 7F226688: bl      0x7F3C664C
    {
            ctx->lr = 0x7F22668Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F22668C:
    ctx->pc = 0x7F22668Cu;
    ctx->downcount -= 2;
    // 7F22668C: cmplwi  r3, 0x0000
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

label_7F226690:
    ctx->pc = 0x7F226690u;
    // 7F226690: bc    12, 2, 0x7F22671C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F22671C;
        }
    }

label_7F226694:
    ctx->pc = 0x7F226694u;
    ctx->downcount -= 1;
    // 7F226694: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F226698u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F226698:
    ctx->pc = 0x7F226698u;
    ctx->downcount -= 10;
    // 7F226698: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F22669C:
    ctx->pc = 0x7F22669Cu;
    // 7F22669C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2266A0:
    ctx->pc = 0x7F2266A0u;
    // 7F2266A0: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2266A4:
    ctx->pc = 0x7F2266A4u;
    // 7F2266A4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2266A8:
    ctx->pc = 0x7F2266A8u;
    // 7F2266A8: lfd     f1, 17536(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2266A8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17536);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2266AC:
    ctx->pc = 0x7F2266ACu;
    // 7F2266AC: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2266B0:
    ctx->pc = 0x7F2266B0u;
    // 7F2266B0: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2266B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2266B4:
    ctx->pc = 0x7F2266B4u;
    // 7F2266B4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2266B4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2266B8:
    ctx->pc = 0x7F2266B8u;
    // 7F2266B8: stfs     f0, 936(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2266B8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(936);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2266BC:
    ctx->pc = 0x7F2266BCu;
    // 7F2266BC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2266C0u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2266C0:
    ctx->pc = 0x7F2266C0u;
    ctx->downcount -= 10;
    // 7F2266C0: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F2266C4:
    ctx->pc = 0x7F2266C4u;
    // 7F2266C4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2266C8:
    ctx->pc = 0x7F2266C8u;
    // 7F2266C8: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2266CC:
    ctx->pc = 0x7F2266CCu;
    // 7F2266CC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2266D0:
    ctx->pc = 0x7F2266D0u;
    // 7F2266D0: lfd     f1, 17536(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2266D0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17536);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2266D4:
    ctx->pc = 0x7F2266D4u;
    // 7F2266D4: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2266D8:
    ctx->pc = 0x7F2266D8u;
    // 7F2266D8: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2266D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2266DC:
    ctx->pc = 0x7F2266DCu;
    // 7F2266DC: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2266DCu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2266E0:
    ctx->pc = 0x7F2266E0u;
    // 7F2266E0: stfs     f0, 940(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2266E0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(940);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2266E4:
    ctx->pc = 0x7F2266E4u;
    // 7F2266E4: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2266E8u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2266E8:
    ctx->pc = 0x7F2266E8u;
    ctx->downcount -= 13;
    // 7F2266E8: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F2266EC:
    ctx->pc = 0x7F2266ECu;
    // 7F2266EC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2266F0:
    ctx->pc = 0x7F2266F0u;
    // 7F2266F0: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2266F4:
    ctx->pc = 0x7F2266F4u;
    // 7F2266F4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2266F8:
    ctx->pc = 0x7F2266F8u;
    // 7F2266F8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2266FC:
    ctx->pc = 0x7F2266FCu;
    // 7F2266FC: lfd     f2, 17536(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2266FCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17536);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F226700:
    ctx->pc = 0x7F226700u;
    // 7F226700: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226704:
    ctx->pc = 0x7F226704u;
    // 7F226704: lfs     f0, 17700(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F226704u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17700);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F226708:
    ctx->pc = 0x7F226708u;
    // 7F226708: lfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F226708u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F22670C:
    ctx->pc = 0x7F22670Cu;
    // 7F22670C: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F22670Cu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F226710:
    ctx->pc = 0x7F226710u;
    // 7F226710: stfs     f1, 944(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F226710u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(944);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F226714:
    ctx->pc = 0x7F226714u;
    // 7F226714: stfs     f0, 948(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F226714u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(948);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F226718:
    ctx->pc = 0x7F226718u;
    // 7F226718: b       0x7F22673C
    {
            goto label_7F22673C;
    }

label_7F22671C:
    ctx->pc = 0x7F22671Cu;
    ctx->downcount -= 8;
    // 7F22671C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F226720:
    ctx->pc = 0x7F226720u;
    // 7F226720: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F226724:
    ctx->pc = 0x7F226724u;
    // 7F226724: lfs     f1, 17528(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F226724u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17528);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F226728:
    ctx->pc = 0x7F226728u;
    // 7F226728: lfs     f0, 17700(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F226728u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17700);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F22672C:
    ctx->pc = 0x7F22672Cu;
    // 7F22672C: stfs     f1, 936(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F22672Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(936);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F226730:
    ctx->pc = 0x7F226730u;
    // 7F226730: stfs     f1, 940(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F226730u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(940);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F226734:
    ctx->pc = 0x7F226734u;
    // 7F226734: stfs     f1, 944(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F226734u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(944);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F226738:
    ctx->pc = 0x7F226738u;
    // 7F226738: stfs     f0, 948(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F226738u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(948);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F22673C:
    ctx->pc = 0x7F22673Cu;
    ctx->downcount -= 3;
    // 7F22673C: li      r3, 98
    ctx->gpr[3] = (u32)(s32)(98);

label_7F226740:
    ctx->pc = 0x7F226740u;
    // 7F226740: li      r4, 6000
    ctx->gpr[4] = (u32)(s32)(6000);

label_7F226744:
    ctx->pc = 0x7F226744u;
    // 7F226744: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F226748u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F226748:
    ctx->pc = 0x7F226748u;
    ctx->downcount -= 13;
    // 7F226748: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F22674C:
    ctx->pc = 0x7F22674Cu;
    // 7F22674C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F226750:
    ctx->pc = 0x7F226750u;
    // 7F226750: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F226754:
    ctx->pc = 0x7F226754u;
    // 7F226754: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F226758:
    ctx->pc = 0x7F226758u;
    // 7F226758: addi    r5, r4, 17536
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(17536);

label_7F22675C:
    ctx->pc = 0x7F22675Cu;
    // 7F22675C: li      r3, 108
    ctx->gpr[3] = (u32)(s32)(108);

label_7F226760:
    ctx->pc = 0x7F226760u;
    // 7F226760: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226764:
    ctx->pc = 0x7F226764u;
    // 7F226764: li      r4, 110
    ctx->gpr[4] = (u32)(s32)(110);

label_7F226768:
    ctx->pc = 0x7F226768u;
    // 7F226768: lfd     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F226768u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F22676C:
    ctx->pc = 0x7F22676Cu;
    // 7F22676C: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F22676Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F226770:
    ctx->pc = 0x7F226770u;
    // 7F226770: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F226770u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F226774:
    ctx->pc = 0x7F226774u;
    // 7F226774: stfs     f0, 5240(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F226774u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5240);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F226778:
    ctx->pc = 0x7F226778u;
    // 7F226778: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F22677Cu;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F22677C:
    ctx->pc = 0x7F22677Cu;
    ctx->downcount -= 13;
    // 7F22677C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F226780:
    ctx->pc = 0x7F226780u;
    // 7F226780: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F226784:
    ctx->pc = 0x7F226784u;
    // 7F226784: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F226788:
    ctx->pc = 0x7F226788u;
    // 7F226788: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F22678C:
    ctx->pc = 0x7F22678Cu;
    // 7F22678C: addi    r5, r4, 17536
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(17536);

label_7F226790:
    ctx->pc = 0x7F226790u;
    // 7F226790: li      r3, 102
    ctx->gpr[3] = (u32)(s32)(102);

label_7F226794:
    ctx->pc = 0x7F226794u;
    // 7F226794: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226798:
    ctx->pc = 0x7F226798u;
    // 7F226798: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F22679C:
    ctx->pc = 0x7F22679Cu;
    // 7F22679C: lfd     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F22679Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2267A0:
    ctx->pc = 0x7F2267A0u;
    // 7F2267A0: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2267A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2267A4:
    ctx->pc = 0x7F2267A4u;
    // 7F2267A4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2267A4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2267A8:
    ctx->pc = 0x7F2267A8u;
    // 7F2267A8: stfs     f0, 5244(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2267A8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5244);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2267AC:
    ctx->pc = 0x7F2267ACu;
    // 7F2267AC: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F2267B0u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F2267B0:
    ctx->pc = 0x7F2267B0u;
    ctx->downcount -= 4;
    // 7F2267B0: stw     r3, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2267B4:
    ctx->pc = 0x7F2267B4u;
    // 7F2267B4: li      r3, 114
    ctx->gpr[3] = (u32)(s32)(114);

label_7F2267B8:
    ctx->pc = 0x7F2267B8u;
    // 7F2267B8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2267BC:
    ctx->pc = 0x7F2267BCu;
    // 7F2267BC: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F2267C0u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F2267C0:
    ctx->pc = 0x7F2267C0u;
    ctx->downcount -= 4;
    // 7F2267C0: stw     r3, 5252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5252);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2267C4:
    ctx->pc = 0x7F2267C4u;
    // 7F2267C4: li      r3, 117
    ctx->gpr[3] = (u32)(s32)(117);

label_7F2267C8:
    ctx->pc = 0x7F2267C8u;
    // 7F2267C8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2267CC:
    ctx->pc = 0x7F2267CCu;
    // 7F2267CC: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F2267D0u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F2267D0:
    ctx->pc = 0x7F2267D0u;
    ctx->downcount -= 7;
    // 7F2267D0: stw     r3, 5256(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5256);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2267D4:
    ctx->pc = 0x7F2267D4u;
    // 7F2267D4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2267D8:
    ctx->pc = 0x7F2267D8u;
    // 7F2267D8: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2267DC:
    ctx->pc = 0x7F2267DCu;
    // 7F2267DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2267E0:
    ctx->pc = 0x7F2267E0u;
    // 7F2267E0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F2267E4:
    ctx->pc = 0x7F2267E4u;
    // 7F2267E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F2267E8:
    ctx->pc = 0x7F2267E8u;
    ctx->downcount -= 18;
    // 7F2267E8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2267EC:
    ctx->pc = 0x7F2267ECu;
    // 7F2267EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2267F0:
    ctx->pc = 0x7F2267F0u;
    // 7F2267F0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2267F4:
    ctx->pc = 0x7F2267F4u;
    // 7F2267F4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2267F8:
    ctx->pc = 0x7F2267F8u;
    // 7F2267F8: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2267FC:
    ctx->pc = 0x7F2267FCu;
    // 7F2267FC: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F226800:
    ctx->pc = 0x7F226800u;
    // 7F226800: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F226804:
    ctx->pc = 0x7F226804u;
    // 7F226804: bl      0x7F3C8470
    {
            ctx->lr = 0x7F226808u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F226808:
    ctx->pc = 0x7F226808u;
    ctx->downcount -= 1;
    // 7F226808: bl      0x7F3C8480
    {
            ctx->lr = 0x7F22680Cu;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F22680C:
    ctx->pc = 0x7F22680Cu;
    ctx->downcount -= 2;
    // 7F22680C: cmplwi  r3, 0x0000
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

label_7F226810:
    ctx->pc = 0x7F226810u;
    // 7F226810: bc    4, 2, 0x7F22681C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F22681C;
        }
    }

label_7F226814:
    ctx->pc = 0x7F226814u;
    ctx->downcount -= 2;
    // 7F226814: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F226818:
    ctx->pc = 0x7F226818u;
    // 7F226818: b       0x7F22687C
    {
            goto label_7F22687C;
    }

label_7F22681C:
    ctx->pc = 0x7F22681Cu;
    ctx->downcount -= 3;
    // 7F22681C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F226820:
    ctx->pc = 0x7F226820u;
    // 7F226820: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F226824:
    ctx->pc = 0x7F226824u;
    // 7F226824: bl      0x7F3AF7BC
    {
            ctx->lr = 0x7F226828u;
            ctx->pc = 0x7F3AF7BCu;
            return;
    }

label_7F226828:
    ctx->pc = 0x7F226828u;
    ctx->downcount -= 2;
    // 7F226828: or.   r31, r3, r3
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

label_7F22682C:
    ctx->pc = 0x7F22682Cu;
    // 7F22682C: bc    4, 2, 0x7F226838
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F226838;
        }
    }

label_7F226830:
    ctx->pc = 0x7F226830u;
    ctx->downcount -= 2;
    // 7F226830: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F226834:
    ctx->pc = 0x7F226834u;
    // 7F226834: b       0x7F22687C
    {
            goto label_7F22687C;
    }

label_7F226838:
    ctx->pc = 0x7F226838u;
    ctx->downcount -= 1;
    // 7F226838: bl      0x7F3AEBC0
    {
            ctx->lr = 0x7F22683Cu;
            ctx->pc = 0x7F3AEBC0u;
            return;
    }

label_7F22683C:
    ctx->pc = 0x7F22683Cu;
    ctx->downcount -= 2;
    // 7F22683C: cmpwi   r3, 0
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

label_7F226840:
    ctx->pc = 0x7F226840u;
    // 7F226840: bc    4, 0, 0x7F22684C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F22684C;
        }
    }

label_7F226844:
    ctx->pc = 0x7F226844u;
    ctx->downcount -= 2;
    // 7F226844: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F226848:
    ctx->pc = 0x7F226848u;
    // 7F226848: b       0x7F22687C
    {
            goto label_7F22687C;
    }

label_7F22684C:
    ctx->pc = 0x7F22684Cu;
    ctx->downcount -= 2;
    // 7F22684C: cmplwi  r29, 0x0000
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

label_7F226850:
    ctx->pc = 0x7F226850u;
    // 7F226850: bc    12, 2, 0x7F226858
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F226858;
        }
    }

label_7F226854:
    ctx->pc = 0x7F226854u;
    ctx->downcount -= 1;
    // 7F226854: stw     r29, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F226858:
    ctx->pc = 0x7F226858u;
    ctx->downcount -= 5;
    // 7F226858: lwz     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F22685C:
    ctx->pc = 0x7F22685Cu;
    // 7F22685C: cmplwi  r30, 0x0000
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

label_7F226860:
    ctx->pc = 0x7F226860u;
    // 7F226860: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F226864:
    ctx->pc = 0x7F226864u;
    // 7F226864: stw     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226868:
    ctx->pc = 0x7F226868u;
    // 7F226868: bc    12, 2, 0x7F226878
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F226878;
        }
    }

label_7F22686C:
    ctx->pc = 0x7F22686Cu;
    ctx->downcount -= 3;
    // 7F22686C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F226870:
    ctx->pc = 0x7F226870u;
    // 7F226870: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F226874:
    ctx->pc = 0x7F226874u;
    // 7F226874: bl      0x7F3BC518
    {
            ctx->lr = 0x7F226878u;
            ctx->pc = 0x7F3BC518u;
            return;
    }

label_7F226878:
    ctx->pc = 0x7F226878u;
    ctx->downcount -= 1;
    // 7F226878: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F22687C:
    ctx->pc = 0x7F22687Cu;
    ctx->downcount -= 16;
    // 7F22687C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F226880:
    ctx->pc = 0x7F226880u;
    // 7F226880: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226884:
    ctx->pc = 0x7F226884u;
    // 7F226884: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F226888:
    ctx->pc = 0x7F226888u;
    // 7F226888: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F22688C:
    ctx->pc = 0x7F22688Cu;
    // 7F22688C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F226890:
    ctx->pc = 0x7F226890u;
    ctx->downcount -= 21;
    // 7F226890: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F226894:
    ctx->pc = 0x7F226894u;
    // 7F226894: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F226898:
    ctx->pc = 0x7F226898u;
    // 7F226898: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F22689C:
    ctx->pc = 0x7F22689Cu;
    // 7F22689C: stfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F22689Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F2268A0:
    ctx->pc = 0x7F2268A0u;
    // 7F2268A0: psq_st   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2268A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F2268A0u);
        if (ctx->exception) return;
    }

label_7F2268A4:
    ctx->pc = 0x7F2268A4u;
    // 7F2268A4: stmw     r23, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2268A8:
    ctx->pc = 0x7F2268A8u;
    // 7F2268A8: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2268AC:
    ctx->pc = 0x7F2268ACu;
    // 7F2268AC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2268B0:
    ctx->pc = 0x7F2268B0u;
    // 7F2268B0: stw     r0, 5252(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5252);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2268B4:
    ctx->pc = 0x7F2268B4u;
    // 7F2268B4: stw     r0, 5256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5256);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2268B8:
    ctx->pc = 0x7F2268B8u;
    // 7F2268B8: bl      0x7F22662C
    {
            ctx->lr = 0x7F2268BCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F22662Cu;
                return;
            }
            goto label_7F22662C;
    }

label_7F2268BC:
    ctx->pc = 0x7F2268BCu;
    ctx->downcount -= 3;
    // 7F2268BC: lwz     r0, 96(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2268C0:
    ctx->pc = 0x7F2268C0u;
    // 7F2268C0: rlwinm. r0, r0, 0, 30, 30
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

label_7F2268C4:
    ctx->pc = 0x7F2268C4u;
    // 7F2268C4: bc    4, 2, 0x7F2268E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2268E0;
        }
    }

label_7F2268C8:
    ctx->pc = 0x7F2268C8u;
    ctx->downcount -= 2;
    // 7F2268C8: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2268CC:
    ctx->pc = 0x7F2268CCu;
    // 7F2268CC: bl      0x7F225E0C
    {
            ctx->lr = 0x7F2268D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F225E0Cu;
                return;
            }
            goto label_7F225E0C;
    }

label_7F2268D0:
    ctx->pc = 0x7F2268D0u;
    ctx->downcount -= 2;
    // 7F2268D0: cmpwi   r3, 0
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

label_7F2268D4:
    ctx->pc = 0x7F2268D4u;
    // 7F2268D4: bc    12, 2, 0x7F2268E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2268E0;
        }
    }

label_7F2268D8:
    ctx->pc = 0x7F2268D8u;
    ctx->downcount -= 2;
    // 7F2268D8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2268DC:
    ctx->pc = 0x7F2268DCu;
    // 7F2268DC: b       0x7F226C24
    {
            goto label_7F226C24;
    }

label_7F2268E0:
    ctx->pc = 0x7F2268E0u;
    ctx->downcount -= 7;
    // 7F2268E0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2268E4:
    ctx->pc = 0x7F2268E4u;
    // 7F2268E4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F2268E8:
    ctx->pc = 0x7F2268E8u;
    // 7F2268E8: addi    r3, r3, 12860
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12860);

label_7F2268EC:
    ctx->pc = 0x7F2268ECu;
    // 7F2268EC: addi    r5, r25, 100
    ctx->gpr[5] = ctx->gpr[25] + (u32)(s32)(100);

label_7F2268F0:
    ctx->pc = 0x7F2268F0u;
    // 7F2268F0: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F2268F4:
    ctx->pc = 0x7F2268F4u;
    // 7F2268F4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2268F8:
    loop_7F2268F8(ctx);
    if (ctx->pc == 0x7F22690Cu) goto label_7F22690C;
    return;
label_7F2268FC:
    ctx->pc = 0x7F2268FCu;
    // 7F2268FC: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F226900:
    ctx->pc = 0x7F226900u;
    // 7F226900: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F226904:
    ctx->pc = 0x7F226904u;
    // 7F226904: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F226908:
    // 7F226908: bc    16, 0, 0x7F2268F8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2268F8u;
                return;
            }
            goto label_7F2268F8;
        }
    }

label_7F22690C:
    ctx->pc = 0x7F22690Cu;
    ctx->downcount -= 11;
    // 7F22690C: lwz     r5, 936(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(936);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F226910:
    ctx->pc = 0x7F226910u;
    // 7F226910: li      r3, 116
    ctx->gpr[3] = (u32)(s32)(116);

label_7F226914:
    ctx->pc = 0x7F226914u;
    // 7F226914: lwz     r0, 940(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(940);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226918:
    ctx->pc = 0x7F226918u;
    // 7F226918: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F22691C:
    ctx->pc = 0x7F22691Cu;
    // 7F22691C: stw     r5, 152(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F226920:
    ctx->pc = 0x7F226920u;
    // 7F226920: stw     r0, 156(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226924:
    ctx->pc = 0x7F226924u;
    // 7F226924: lwz     r5, 944(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(944);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F226928:
    ctx->pc = 0x7F226928u;
    // 7F226928: lwz     r0, 948(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(948);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F22692C:
    ctx->pc = 0x7F22692Cu;
    // 7F22692C: stw     r5, 160(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F226930:
    ctx->pc = 0x7F226930u;
    // 7F226930: stw     r0, 164(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226934:
    ctx->pc = 0x7F226934u;
    // 7F226934: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F226938u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F226938:
    ctx->pc = 0x7F226938u;
    ctx->downcount -= 8;
    // 7F226938: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F22693C:
    ctx->pc = 0x7F22693Cu;
    // 7F22693C: stw     r3, 100(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F226940:
    ctx->pc = 0x7F226940u;
    // 7F226940: lfd     f31, 17536(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F226940u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17536);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F226944:
    ctx->pc = 0x7F226944u;
    // 7F226944: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F226948:
    ctx->pc = 0x7F226948u;
    // 7F226948: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F22694C:
    ctx->pc = 0x7F22694Cu;
    // 7F22694C: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F226950:
    ctx->pc = 0x7F226950u;
    // 7F226950: lis     r31, 17200
    ctx->gpr[31] = ((u32)(s32)(17200) << 16);

label_7F226954:
    ctx->pc = 0x7F226954u;
    // 7F226954: b       0x7F226A84
    {
            goto label_7F226A84;
    }

label_7F226958:
    ctx->downcount -= 1;
    // 7F226958: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F22695Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F22695C:
    ctx->downcount -= 2;
    // 7F22695C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F226960:
    // 7F226960: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F226964u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F226964:
    ctx->downcount -= 2;
    // 7F226964: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F226968:
    // 7F226968: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F22696Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F22696C:
    ctx->downcount -= 3;
    // 7F22696C: rlwinm r0, r3, 8, 0, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 8u) & 0xFFFFFF00u;
    }

label_7F226970:
    // 7F226970: or   r27, r26, r0
    {
        ctx->gpr[27] = ctx->gpr[26] | ctx->gpr[0];
    }

label_7F226974:
    // 7F226974: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F226978u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F226978:
    ctx->downcount -= 3;
    // 7F226978: rlwinm r0, r3, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 16u) & 0xFFFF0000u;
    }

label_7F22697C:
    // 7F22697C: or   r27, r27, r0
    {
        ctx->gpr[27] = ctx->gpr[27] | ctx->gpr[0];
    }

label_7F226980:
    // 7F226980: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F226984u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F226984:
    ctx->downcount -= 2;
    // 7F226984: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F226988:
    // 7F226988: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F22698Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F22698C:
    ctx->downcount -= 15;
    // 7F22698C: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F226990:
    ctx->pc = 0x7F226990u;
    // 7F226990: stw     r31, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F226994:
    // 7F226994: add   r30, r25, r23
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_7F226998:
    // 7F226998: rlwinm r3, r27, 24, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[27], 24u) & 0x000000FFu;
    }

label_7F22699C:
    ctx->pc = 0x7F22699Cu;
    // 7F22699C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2269A0:
    // 7F2269A0: rlwinm r0, r27, 16, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[27], 16u) & 0x000000FFu;
    }

label_7F2269A4:
    // 7F2269A4: cmpwi   r28, 48
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(48);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2269A8:
    ctx->pc = 0x7F2269A8u;
    // 7F2269A8: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2269A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2269AC:
    ctx->pc = 0x7F2269ACu;
    // 7F2269AC: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F2269ACu)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_7F2269B0:
    ctx->pc = 0x7F2269B0u;
    // 7F2269B0: stfs     f0, 5176(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F2269B0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(5176);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2269B4:
    ctx->pc = 0x7F2269B4u;
    // 7F2269B4: stb     r27, 5276(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(5276);
        mem_write8(ctx, ea, (u8)ctx->gpr[27]);
    }

label_7F2269B8:
    ctx->pc = 0x7F2269B8u;
    // 7F2269B8: stb     r3, 5277(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(5277);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2269BC:
    ctx->pc = 0x7F2269BCu;
    // 7F2269BC: stb     r0, 5278(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(5278);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2269C0:
    ctx->pc = 0x7F2269C0u;
    // 7F2269C0: stb     r26, 5279(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(5279);
        mem_write8(ctx, ea, (u8)ctx->gpr[26]);
    }

label_7F2269C4:
    // 7F2269C4: bc    12, 2, 0x7F226A78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F226A78;
        }
    }

label_7F2269C8:
    ctx->downcount -= 16;
    // 7F2269C8: xoris   r3, r29, 0x8000
    ctx->gpr[3] = ctx->gpr[29] ^ (0x8000u << 16);

label_7F2269CC:
    // 7F2269CC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2269D0:
    ctx->pc = 0x7F2269D0u;
    // 7F2269D0: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2269D4:
    // 7F2269D4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2269D8:
    // 7F2269D8: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F2269DC:
    ctx->pc = 0x7F2269DCu;
    // 7F2269DC: lfd     f1, 17536(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2269DCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17536);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2269E0:
    ctx->pc = 0x7F2269E0u;
    // 7F2269E0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2269E4:
    // 7F2269E4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2269E8:
    ctx->pc = 0x7F2269E8u;
    // 7F2269E8: lfs     f2, 17708(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2269E8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(17708);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2269EC:
    // 7F2269EC: cmpwi   r29, 2
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

label_7F2269F0:
    ctx->pc = 0x7F2269F0u;
    // 7F2269F0: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2269F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2269F4:
    ctx->pc = 0x7F2269F4u;
    // 7F2269F4: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2269F4u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F2269F8:
    ctx->pc = 0x7F2269F8u;
    // 7F2269F8: lfs     f0, 17704(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2269F8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2269FC:
    // 7F2269FC: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F226A00:
    ctx->pc = 0x7F226A00u;
    // 7F226A00: fnmsubs f1, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F226A00u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, true, true, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F226A04:
    // 7F226A04: bc    4, 0, 0x7F226A14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F226A14;
        }
    }

label_7F226A08:
    ctx->downcount -= 3;
    // 7F226A08: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F226A0C:
    ctx->pc = 0x7F226A0Cu;
    // 7F226A0C: lfs     f2, 17712(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F226A0Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17712);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F226A10:
    // 7F226A10: b       0x7F226A1C
    {
            goto label_7F226A1C;
    }

label_7F226A14:
    ctx->downcount -= 2;
    // 7F226A14: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F226A18:
    ctx->pc = 0x7F226A18u;
    // 7F226A18: lfs     f2, 17716(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F226A18u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17716);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F226A1C:
    ctx->downcount -= 11;
    // 7F226A1C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F226A20:
    // 7F226A20: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F226A24:
    ctx->pc = 0x7F226A24u;
    // 7F226A24: lfs     f3, 17720(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F226A24u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17720);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F226A28:
    // 7F226A28: mulli   r9, r29, 100
    ctx->gpr[9] = (u32)((s64)(s32)ctx->gpr[29] * (s64)(s32)100);

label_7F226A2C:
    // 7F226A2C: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F226A30:
    // 7F226A30: or   r7, r27, r27
    {
        ctx->gpr[7] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F226A34:
    // 7F226A34: or   r8, r26, r26
    {
        ctx->gpr[8] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F226A38:
    // 7F226A38: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F226A3C:
    // 7F226A3C: bl      0x7F2257F0
    {
            ctx->lr = 0x7F226A40u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2257F0u;
                return;
            }
            goto label_7F2257F0;
    }

label_7F226A40:
    ctx->downcount -= 53;
    // 7F226A40: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F226A44:
    // 7F226A44: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F226A48:
    // 7F226A48: divw   r5, r24, r4
    {
        s32 dividend = (s32)ctx->gpr[24];
        s32 divisor = (s32)ctx->gpr[4];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[5] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F226A4C:
    ctx->pc = 0x7F226A4Cu;
    // 7F226A4C: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226A50:
    // 7F226A50: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F226A54:
    ctx->pc = 0x7F226A54u;
    // 7F226A54: lfd     f1, 17536(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F226A54u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17536);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F226A58:
    ctx->pc = 0x7F226A58u;
    // 7F226A58: stw     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F226A5C:
    // 7F226A5C: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F226A60:
    // 7F226A60: xoris   r0, r5, 0x8000
    ctx->gpr[0] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F226A64:
    // 7F226A64: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F226A68:
    ctx->pc = 0x7F226A68u;
    // 7F226A68: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226A6C:
    ctx->pc = 0x7F226A6Cu;
    // 7F226A6C: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F226A6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F226A70:
    ctx->pc = 0x7F226A70u;
    // 7F226A70: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F226A70u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F226A74:
    // 7F226A74: bl      0x7F225038
    {
            ctx->lr = 0x7F226A78u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F225038u;
                return;
            }
            goto label_7F225038;
    }

label_7F226A78:
    ctx->downcount -= 3;
    // 7F226A78: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F226A7C:
    // 7F226A7C: addi    r24, r24, 4096
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(4096);

label_7F226A80:
    // 7F226A80: addi    r23, r23, 4
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(4);

label_7F226A84:
    ctx->pc = 0x7F226A84u;
    ctx->downcount -= 3;
    // 7F226A84: lwz     r0, 100(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226A88:
    // 7F226A88: cmpw    r29, r0
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

label_7F226A8C:
    // 7F226A8C: bc    12, 0, 0x7F226958
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F226958u;
                return;
            }
            goto label_7F226958;
        }
    }

label_7F226A90:
    ctx->pc = 0x7F226A90u;
    ctx->downcount -= 6;
    // 7F226A90: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F226A94:
    ctx->pc = 0x7F226A94u;
    // 7F226A94: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F226A98:
    ctx->pc = 0x7F226A98u;
    // 7F226A98: stw     r29, 5248(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(5248);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F226A9C:
    ctx->pc = 0x7F226A9Cu;
    // 7F226A9C: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F226AA0:
    ctx->pc = 0x7F226AA0u;
    // 7F226AA0: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F226AA4:
    ctx->pc = 0x7F226AA4u;
    // 7F226AA4: b       0x7F226C14
    {
            goto label_7F226C14;
    }

label_7F226AA8:
    ctx->downcount -= 6;
    // 7F226AA8: add   r23, r25, r28
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_7F226AAC:
    ctx->pc = 0x7F226AACu;
    // 7F226AAC: lfs     f1, 5244(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F226AACu)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(5244);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F226AB0:
    // 7F226AB0: addi    r24, r23, 168
    ctx->gpr[24] = ctx->gpr[23] + (u32)(s32)(168);

label_7F226AB4:
    // 7F226AB4: addi    r3, r25, 104
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(104);

label_7F226AB8:
    // 7F226AB8: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F226ABC:
    // 7F226ABC: bl      0x800261FC
    {
            ctx->lr = 0x7F226AC0u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F226AC0:
    ctx->pc = 0x7F226AC0u;
    ctx->downcount -= 4;
    // 7F226AC0: lfs     f1, 5244(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F226AC0u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(5244);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F226AC4:
    // 7F226AC4: addi    r3, r25, 120
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(120);

label_7F226AC8:
    // 7F226AC8: addi    r4, r23, 184
    ctx->gpr[4] = ctx->gpr[23] + (u32)(s32)(184);

label_7F226ACC:
    // 7F226ACC: bl      0x800261FC
    {
            ctx->lr = 0x7F226AD0u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F226AD0:
    ctx->pc = 0x7F226AD0u;
    ctx->downcount -= 4;
    // 7F226AD0: lfs     f1, 5244(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F226AD0u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(5244);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F226AD4:
    // 7F226AD4: addi    r3, r25, 136
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(136);

label_7F226AD8:
    // 7F226AD8: addi    r4, r23, 200
    ctx->gpr[4] = ctx->gpr[23] + (u32)(s32)(200);

label_7F226ADC:
    // 7F226ADC: bl      0x800261FC
    {
            ctx->lr = 0x7F226AE0u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F226AE0:
    ctx->pc = 0x7F226AE0u;
    ctx->downcount -= 9;
    // 7F226AE0: lwz     r3, 936(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(936);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226AE4:
    ctx->pc = 0x7F226AE4u;
    // 7F226AE4: lwz     r0, 940(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(940);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226AE8:
    ctx->pc = 0x7F226AE8u;
    // 7F226AE8: stw     r3, 216(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F226AEC:
    ctx->pc = 0x7F226AECu;
    // 7F226AEC: stw     r0, 220(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226AF0:
    ctx->pc = 0x7F226AF0u;
    // 7F226AF0: lwz     r3, 944(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(944);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226AF4:
    ctx->pc = 0x7F226AF4u;
    // 7F226AF4: lwz     r0, 948(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(948);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226AF8:
    ctx->pc = 0x7F226AF8u;
    // 7F226AF8: stw     r3, 224(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F226AFC:
    ctx->pc = 0x7F226AFCu;
    // 7F226AFC: stw     r0, 228(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226B00:
    // 7F226B00: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F226B04u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F226B04:
    ctx->downcount -= 4;
    // 7F226B04: add   r30, r25, r27
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_7F226B08:
    // 7F226B08: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F226B0C:
    // 7F226B0C: addi    r5, r30, 424
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(424);

label_7F226B10:
    // 7F226B10: bl      0x7F2267E8
    {
            ctx->lr = 0x7F226B14u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2267E8u;
                return;
            }
            goto label_7F2267E8;
    }

label_7F226B14:
    ctx->downcount -= 5;
    // 7F226B14: add   r31, r25, r26
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F226B18:
    ctx->pc = 0x7F226B18u;
    // 7F226B18: stw     r3, 5260(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5260);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F226B1C:
    ctx->pc = 0x7F226B1Cu;
    // 7F226B1C: lwz     r3, 5260(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5260);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226B20:
    // 7F226B20: cmplwi  r3, 0x0000
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

label_7F226B24:
    // 7F226B24: bc    12, 2, 0x7F226C04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F226C04;
        }
    }

label_7F226B28:
    ctx->pc = 0x7F226B28u;
    ctx->downcount -= 3;
    // 7F226B28: lwz     r0, 52(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226B2C:
    ctx->pc = 0x7F226B2Cu;
    // 7F226B2C: stw     r0, 84(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226B30:
    // 7F226B30: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F226B34u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F226B34:
    ctx->downcount -= 10;
    // 7F226B34: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F226B38:
    // 7F226B38: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F226B3C:
    ctx->pc = 0x7F226B3Cu;
    // 7F226B3C: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F226B40:
    // 7F226B40: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F226B44:
    ctx->pc = 0x7F226B44u;
    // 7F226B44: lfd     f1, 17536(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F226B44u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17536);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F226B48:
    ctx->pc = 0x7F226B48u;
    // 7F226B48: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226B4C:
    ctx->pc = 0x7F226B4Cu;
    // 7F226B4C: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F226B4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F226B50:
    ctx->pc = 0x7F226B50u;
    // 7F226B50: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F226B50u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F226B54:
    ctx->pc = 0x7F226B54u;
    // 7F226B54: stfs     f0, 536(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F226B54u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(536);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F226B58:
    // 7F226B58: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F226B5Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F226B5C:
    ctx->downcount -= 10;
    // 7F226B5C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F226B60:
    // 7F226B60: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F226B64:
    ctx->pc = 0x7F226B64u;
    // 7F226B64: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F226B68:
    // 7F226B68: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F226B6C:
    ctx->pc = 0x7F226B6Cu;
    // 7F226B6C: lfd     f1, 17536(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F226B6Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17536);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F226B70:
    ctx->pc = 0x7F226B70u;
    // 7F226B70: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226B74:
    ctx->pc = 0x7F226B74u;
    // 7F226B74: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F226B74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F226B78:
    ctx->pc = 0x7F226B78u;
    // 7F226B78: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F226B78u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F226B7C:
    ctx->pc = 0x7F226B7Cu;
    // 7F226B7C: stfs     f0, 540(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F226B7Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(540);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F226B80:
    // 7F226B80: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F226B84u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F226B84:
    ctx->downcount -= 10;
    // 7F226B84: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F226B88:
    // 7F226B88: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F226B8C:
    ctx->pc = 0x7F226B8Cu;
    // 7F226B8C: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F226B90:
    // 7F226B90: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F226B94:
    ctx->pc = 0x7F226B94u;
    // 7F226B94: lfd     f1, 17536(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F226B94u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17536);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F226B98:
    ctx->pc = 0x7F226B98u;
    // 7F226B98: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226B9C:
    ctx->pc = 0x7F226B9Cu;
    // 7F226B9C: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F226B9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F226BA0:
    ctx->pc = 0x7F226BA0u;
    // 7F226BA0: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F226BA0u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F226BA4:
    ctx->pc = 0x7F226BA4u;
    // 7F226BA4: stfs     f0, 544(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F226BA4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(544);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F226BA8:
    // 7F226BA8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F226BACu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F226BAC:
    ctx->downcount -= 10;
    // 7F226BAC: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F226BB0:
    // 7F226BB0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F226BB4:
    ctx->pc = 0x7F226BB4u;
    // 7F226BB4: stw     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F226BB8:
    // 7F226BB8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F226BBC:
    ctx->pc = 0x7F226BBCu;
    // 7F226BBC: lfd     f1, 17536(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F226BBCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17536);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F226BC0:
    ctx->pc = 0x7F226BC0u;
    // 7F226BC0: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226BC4:
    ctx->pc = 0x7F226BC4u;
    // 7F226BC4: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F226BC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F226BC8:
    ctx->pc = 0x7F226BC8u;
    // 7F226BC8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F226BC8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F226BCC:
    ctx->pc = 0x7F226BCCu;
    // 7F226BCC: stfs     f0, 5192(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F226BCCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5192);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F226BD0:
    // 7F226BD0: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F226BD4u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F226BD4:
    ctx->downcount -= 28;
    // 7F226BD4: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F226BD8:
    // 7F226BD8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F226BDC:
    ctx->pc = 0x7F226BDCu;
    // 7F226BDC: stw     r3, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F226BE0:
    // 7F226BE0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F226BE4:
    // 7F226BE4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F226BE8:
    ctx->pc = 0x7F226BE8u;
    // 7F226BE8: lfd     f2, 17536(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F226BE8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17536);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F226BEC:
    ctx->pc = 0x7F226BECu;
    // 7F226BEC: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226BF0:
    ctx->pc = 0x7F226BF0u;
    // 7F226BF0: lfs     f0, 17720(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F226BF0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17720);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F226BF4:
    ctx->pc = 0x7F226BF4u;
    // 7F226BF4: lfd     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F226BF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F226BF8:
    ctx->pc = 0x7F226BF8u;
    // 7F226BF8: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F226BF8u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F226BFC:
    ctx->pc = 0x7F226BFCu;
    // 7F226BFC: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F226BFCu)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F226C00:
    ctx->pc = 0x7F226C00u;
    // 7F226C00: stfs     f0, 5224(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F226C00u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5224);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F226C04:
    ctx->downcount -= 4;
    // 7F226C04: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F226C08:
    // 7F226C08: addi    r26, r26, 4
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(4);

label_7F226C0C:
    // 7F226C0C: addi    r27, r27, 128
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(128);

label_7F226C10:
    // 7F226C10: addi    r28, r28, 64
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(64);

label_7F226C14:
    ctx->pc = 0x7F226C14u;
    ctx->downcount -= 3;
    // 7F226C14: lwz     r0, 5248(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(5248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226C18:
    // 7F226C18: cmpw    r29, r0
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

label_7F226C1C:
    // 7F226C1C: bc    12, 0, 0x7F226AA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F226AA8u;
                return;
            }
            goto label_7F226AA8;
        }
    }

label_7F226C20:
    ctx->pc = 0x7F226C20u;
    ctx->downcount -= 1;
    // 7F226C20: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F226C24:
    ctx->pc = 0x7F226C24u;
    ctx->downcount -= 18;
    // 7F226C24: psq_l   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F226C24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F226C24u);
        if (ctx->exception) return;
    }

label_7F226C28:
    ctx->pc = 0x7F226C28u;
    // 7F226C28: lfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F226C28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F226C2C:
    ctx->pc = 0x7F226C2Cu;
    // 7F226C2C: lmw     r23, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F226C30:
    ctx->pc = 0x7F226C30u;
    // 7F226C30: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226C34:
    ctx->pc = 0x7F226C34u;
    // 7F226C34: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F226C38:
    ctx->pc = 0x7F226C38u;
    // 7F226C38: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F226C3C:
    ctx->pc = 0x7F226C3Cu;
    // 7F226C3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F226C40:
    ctx->pc = 0x7F226C40u;
    ctx->downcount -= 21;
    // 7F226C40: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F226C44:
    ctx->pc = 0x7F226C44u;
    // 7F226C44: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F226C48:
    ctx->pc = 0x7F226C48u;
    // 7F226C48: li      r5, 5292
    ctx->gpr[5] = (u32)(s32)(5292);

label_7F226C4C:
    ctx->pc = 0x7F226C4Cu;
    // 7F226C4C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F226C50:
    ctx->pc = 0x7F226C50u;
    // 7F226C50: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226C54:
    ctx->pc = 0x7F226C54u;
    // 7F226C54: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F226C58:
    ctx->pc = 0x7F226C58u;
    // 7F226C58: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F226C5C:
    ctx->pc = 0x7F226C5Cu;
    // 7F226C5C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F226C60:
    ctx->pc = 0x7F226C60u;
    // 7F226C60: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F226C64:
    ctx->pc = 0x7F226C64u;
    // 7F226C64: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F226C68:
    ctx->pc = 0x7F226C68u;
    // 7F226C68: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F226C6Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F226C6C:
    ctx->pc = 0x7F226C6Cu;
    ctx->downcount -= 2;
    // 7F226C6C: or.   r31, r3, r3
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

label_7F226C70:
    ctx->pc = 0x7F226C70u;
    // 7F226C70: bc    12, 2, 0x7F226CD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F226CD8;
        }
    }

label_7F226C74:
    ctx->pc = 0x7F226C74u;
    ctx->downcount -= 5;
    // 7F226C74: lis     r4, 32546
    ctx->gpr[4] = ((u32)(s32)(32546) << 16);

label_7F226C78:
    ctx->pc = 0x7F226C78u;
    // 7F226C78: lis     r5, 32546
    ctx->gpr[5] = ((u32)(s32)(32546) << 16);

label_7F226C7C:
    ctx->pc = 0x7F226C7Cu;
    // 7F226C7C: addi    r4, r4, 21396
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21396);

label_7F226C80:
    ctx->pc = 0x7F226C80u;
    // 7F226C80: addi    r5, r5, 22104
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(22104);

label_7F226C84:
    ctx->pc = 0x7F226C84u;
    // 7F226C84: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F226C88u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F226C88:
    ctx->pc = 0x7F226C88u;
    ctx->downcount -= 14;
    // 7F226C88: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226C8C:
    ctx->pc = 0x7F226C8Cu;
    // 7F226C8C: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F226C90:
    ctx->pc = 0x7F226C90u;
    // 7F226C90: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F226C94:
    ctx->pc = 0x7F226C94u;
    // 7F226C94: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F226C98:
    ctx->pc = 0x7F226C98u;
    // 7F226C98: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F226C9C:
    ctx->pc = 0x7F226C9Cu;
    // 7F226C9C: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F226CA0:
    ctx->pc = 0x7F226CA0u;
    // 7F226CA0: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F226CA4:
    ctx->pc = 0x7F226CA4u;
    // 7F226CA4: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F226CA8:
    ctx->pc = 0x7F226CA8u;
    // 7F226CA8: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F226CAC:
    ctx->pc = 0x7F226CACu;
    // 7F226CAC: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F226CB0:
    ctx->pc = 0x7F226CB0u;
    // 7F226CB0: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226CB4:
    ctx->pc = 0x7F226CB4u;
    // 7F226CB4: stw     r29, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F226CB8:
    ctx->pc = 0x7F226CB8u;
    // 7F226CB8: stw     r30, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F226CBC:
    ctx->pc = 0x7F226CBCu;
    // 7F226CBC: bl      0x7F226890
    {
            ctx->lr = 0x7F226CC0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F226890u;
                return;
            }
            goto label_7F226890;
    }

label_7F226CC0:
    ctx->pc = 0x7F226CC0u;
    ctx->downcount -= 2;
    // 7F226CC0: cmpwi   r3, 0
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

label_7F226CC4:
    ctx->pc = 0x7F226CC4u;
    // 7F226CC4: bc    4, 0, 0x7F226CD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F226CD8;
        }
    }

label_7F226CC8:
    ctx->pc = 0x7F226CC8u;
    ctx->downcount -= 2;
    // 7F226CC8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F226CCC:
    ctx->pc = 0x7F226CCCu;
    // 7F226CCC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F226CD0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F226CD0:
    ctx->pc = 0x7F226CD0u;
    ctx->downcount -= 2;
    // 7F226CD0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F226CD4:
    ctx->pc = 0x7F226CD4u;
    // 7F226CD4: b       0x7F226CE4
    {
            goto label_7F226CE4;
    }

label_7F226CD8:
    ctx->pc = 0x7F226CD8u;
    ctx->downcount -= 2;
    // 7F226CD8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F226CDC:
    ctx->pc = 0x7F226CDCu;
    // 7F226CDC: bl      0x7F22523C
    {
            ctx->lr = 0x7F226CE0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F22523Cu;
                return;
            }
            goto label_7F22523C;
    }

label_7F226CE0:
    ctx->pc = 0x7F226CE0u;
    ctx->downcount -= 1;
    // 7F226CE0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F226CE4:
    ctx->pc = 0x7F226CE4u;
    ctx->downcount -= 16;
    // 7F226CE4: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F226CE8:
    ctx->pc = 0x7F226CE8u;
    // 7F226CE8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226CEC:
    ctx->pc = 0x7F226CECu;
    // 7F226CEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F226CF0:
    ctx->pc = 0x7F226CF0u;
    // 7F226CF0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F226CF4:
    ctx->pc = 0x7F226CF4u;
    // 7F226CF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F226CF8:
    ctx->pc = 0x7F226CF8u;
    ctx->downcount -= 6;
    // 7F226CF8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F226CFC:
    ctx->pc = 0x7F226CFCu;
    // 7F226CFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F226D00:
    ctx->pc = 0x7F226D00u;
    // 7F226D00: li      r3, 108
    ctx->gpr[3] = (u32)(s32)(108);

label_7F226D04:
    ctx->pc = 0x7F226D04u;
    // 7F226D04: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F226D08:
    ctx->pc = 0x7F226D08u;
    // 7F226D08: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226D0C:
    ctx->pc = 0x7F226D0Cu;
    // 7F226D0C: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F226D10u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F226D10:
    ctx->pc = 0x7F226D10u;
    ctx->downcount -= 14;
    // 7F226D10: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F226D14:
    ctx->pc = 0x7F226D14u;
    // 7F226D14: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F226D18:
    ctx->pc = 0x7F226D18u;
    // 7F226D18: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F226D1C:
    ctx->pc = 0x7F226D1Cu;
    // 7F226D1C: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F226D20:
    ctx->pc = 0x7F226D20u;
    // 7F226D20: addi    r5, r4, 17728
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(17728);

label_7F226D24:
    ctx->pc = 0x7F226D24u;
    // 7F226D24: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F226D28:
    ctx->pc = 0x7F226D28u;
    // 7F226D28: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226D2C:
    ctx->pc = 0x7F226D2Cu;
    // 7F226D2C: addi    r4, r3, 19564
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(19564);

label_7F226D30:
    ctx->pc = 0x7F226D30u;
    // 7F226D30: lfd     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F226D30u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F226D34:
    ctx->pc = 0x7F226D34u;
    // 7F226D34: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F226D38:
    ctx->pc = 0x7F226D38u;
    // 7F226D38: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F226D38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F226D3C:
    ctx->pc = 0x7F226D3Cu;
    // 7F226D3C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F226D3Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F226D40:
    ctx->pc = 0x7F226D40u;
    // 7F226D40: stfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F226D40u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F226D44:
    ctx->pc = 0x7F226D44u;
    // 7F226D44: bl      0x7F3C664C
    {
            ctx->lr = 0x7F226D48u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F226D48:
    ctx->pc = 0x7F226D48u;
    ctx->downcount -= 2;
    // 7F226D48: cmplwi  r3, 0x0000
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

label_7F226D4C:
    ctx->pc = 0x7F226D4Cu;
    // 7F226D4C: bc    12, 2, 0x7F226D5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F226D5C;
        }
    }

label_7F226D50:
    ctx->pc = 0x7F226D50u;
    ctx->downcount -= 1;
    // 7F226D50: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F226D54u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F226D54:
    ctx->pc = 0x7F226D54u;
    ctx->downcount -= 2;
    // 7F226D54: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F226D58:
    ctx->pc = 0x7F226D58u;
    // 7F226D58: stw     r3, 19560(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19560);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F226D5C:
    ctx->pc = 0x7F226D5Cu;
    ctx->downcount -= 6;
    // 7F226D5C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226D60:
    ctx->pc = 0x7F226D60u;
    // 7F226D60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F226D64:
    ctx->pc = 0x7F226D64u;
    // 7F226D64: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F226D68:
    ctx->pc = 0x7F226D68u;
    // 7F226D68: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F226D6C:
    ctx->pc = 0x7F226D6Cu;
    // 7F226D6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F226D70:
    ctx->pc = 0x7F226D70u;
    ctx->downcount -= 51;
    // 7F226D70: stwu     r1, -240(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-240);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F226D74:
    ctx->pc = 0x7F226D74u;
    // 7F226D74: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F226D78:
    ctx->pc = 0x7F226D78u;
    // 7F226D78: stw     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226D7C:
    ctx->pc = 0x7F226D7Cu;
    // 7F226D7C: stfd     f31, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F226D7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F226D80:
    ctx->pc = 0x7F226D80u;
    // 7F226D80: psq_st   f31, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F226D80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F226D80u);
        if (ctx->exception) return;
    }

label_7F226D84:
    ctx->pc = 0x7F226D84u;
    // 7F226D84: stfd     f30, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F226D84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F226D88:
    ctx->pc = 0x7F226D88u;
    // 7F226D88: psq_st   f30, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F226D88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F226D88u);
        if (ctx->exception) return;
    }

label_7F226D8C:
    ctx->pc = 0x7F226D8Cu;
    // 7F226D8C: stfd     f29, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F226D8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F226D90:
    ctx->pc = 0x7F226D90u;
    // 7F226D90: psq_st   f29, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F226D90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F226D90u);
        if (ctx->exception) return;
    }

label_7F226D94:
    ctx->pc = 0x7F226D94u;
    // 7F226D94: stfd     f28, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F226D94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F226D98:
    ctx->pc = 0x7F226D98u;
    // 7F226D98: psq_st   f28, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F226D98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F226D98u);
        if (ctx->exception) return;
    }

label_7F226D9C:
    ctx->pc = 0x7F226D9Cu;
    // 7F226D9C: stfd     f27, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F226D9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F226DA0:
    ctx->pc = 0x7F226DA0u;
    // 7F226DA0: psq_st   f27, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F226DA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F226DA0u);
        if (ctx->exception) return;
    }

label_7F226DA4:
    ctx->pc = 0x7F226DA4u;
    // 7F226DA4: stmw     r16, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        for (u32 r = 16; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F226DA8:
    ctx->pc = 0x7F226DA8u;
    // 7F226DA8: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F226DAC:
    ctx->pc = 0x7F226DACu;
    // 7F226DAC: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F226DB0:
    ctx->pc = 0x7F226DB0u;
    // 7F226DB0: lwz     r5, 840(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(840);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F226DB4:
    ctx->pc = 0x7F226DB4u;
    // 7F226DB4: addi    r6, r4, 28636
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(28636);

label_7F226DB8:
    ctx->pc = 0x7F226DB8u;
    // 7F226DB8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F226DBC:
    ctx->pc = 0x7F226DBCu;
    // 7F226DBC: addi    r27, r24, 432
    ctx->gpr[27] = ctx->gpr[24] + (u32)(s32)(432);

label_7F226DC0:
    ctx->pc = 0x7F226DC0u;
    // 7F226DC0: lwz     r0, 180(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226DC4:
    ctx->pc = 0x7F226DC4u;
    // 7F226DC4: addi    r4, r3, 18308
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18308);

label_7F226DC8:
    ctx->pc = 0x7F226DC8u;
    // 7F226DC8: addi    r25, r6, 176
    ctx->gpr[25] = ctx->gpr[6] + (u32)(s32)(176);

label_7F226DCC:
    ctx->pc = 0x7F226DCCu;
    // 7F226DCC: addi    r28, r24, 48
    ctx->gpr[28] = ctx->gpr[24] + (u32)(s32)(48);

label_7F226DD0:
    ctx->pc = 0x7F226DD0u;
    // 7F226DD0: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F226DD4:
    ctx->pc = 0x7F226DD4u;
    // 7F226DD4: stw     r0, 180(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226DD8:
    ctx->pc = 0x7F226DD8u;
    // 7F226DD8: lwz     r3, 844(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(844);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226DDC:
    ctx->pc = 0x7F226DDCu;
    // 7F226DDC: lwz     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226DE0:
    ctx->pc = 0x7F226DE0u;
    // 7F226DE0: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F226DE4:
    ctx->pc = 0x7F226DE4u;
    // 7F226DE4: stw     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226DE8:
    ctx->pc = 0x7F226DE8u;
    // 7F226DE8: lwz     r3, 840(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(840);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226DEC:
    ctx->pc = 0x7F226DECu;
    // 7F226DEC: lwz     r0, 844(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(844);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226DF0:
    ctx->pc = 0x7F226DF0u;
    // 7F226DF0: lwz     r16, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[16] = mem_read32(ctx, ea);
    }

label_7F226DF4:
    ctx->pc = 0x7F226DF4u;
    // 7F226DF4: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F226DF8:
    ctx->pc = 0x7F226DF8u;
    // 7F226DF8: rlwinm r20, r16, 2, 0, 29
    {
        ctx->gpr[20] = dolrecomp_rotl32(ctx->gpr[16], 2u) & 0xFFFFFFFCu;
    }

label_7F226DFC:
    ctx->pc = 0x7F226DFCu;
    // 7F226DFC: add   r6, r3, r20
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F226E00:
    ctx->pc = 0x7F226E00u;
    // 7F226E00: add   r5, r0, r20
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F226E04:
    ctx->pc = 0x7F226E04u;
    // 7F226E04: lwz     r30, 184(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(184);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F226E08:
    ctx->pc = 0x7F226E08u;
    // 7F226E08: lwz     r29, 184(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(184);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F226E0C:
    ctx->pc = 0x7F226E0Cu;
    // 7F226E0C: lwz     r26, 192(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(192);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F226E10:
    ctx->pc = 0x7F226E10u;
    // 7F226E10: bl      0x7F227480
    {
            ctx->lr = 0x7F226E14u;
            goto label_7F227480;
    }

label_7F226E14:
    ctx->pc = 0x7F226E14u;
    ctx->downcount -= 5;
    // 7F226E14: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F226E18:
    ctx->pc = 0x7F226E18u;
    // 7F226E18: lwz     r3, 844(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(844);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226E1C:
    ctx->pc = 0x7F226E1Cu;
    // 7F226E1C: addi    r4, r4, 18308
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18308);

label_7F226E20:
    ctx->pc = 0x7F226E20u;
    // 7F226E20: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F226E24:
    ctx->pc = 0x7F226E24u;
    // 7F226E24: bl      0x7F227480
    {
            ctx->lr = 0x7F226E28u;
            goto label_7F227480;
    }

label_7F226E28:
    ctx->pc = 0x7F226E28u;
    ctx->downcount -= 8;
    // 7F226E28: lwz     r3, 840(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(840);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226E2C:
    ctx->pc = 0x7F226E2Cu;
    // 7F226E2C: subfic  r0, r16, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[16]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F226E30:
    ctx->pc = 0x7F226E30u;
    // 7F226E30: rlwinm r16, r0, 2, 0, 29
    {
        ctx->gpr[16] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F226E34:
    ctx->pc = 0x7F226E34u;
    // 7F226E34: li      r5, 384
    ctx->gpr[5] = (u32)(s32)(384);

label_7F226E38:
    ctx->pc = 0x7F226E38u;
    // 7F226E38: addi    r4, r3, 184
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(184);

label_7F226E3C:
    ctx->pc = 0x7F226E3Cu;
    // 7F226E3C: lwzx    r3, r4, r20
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[20];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226E40:
    ctx->pc = 0x7F226E40u;
    // 7F226E40: lwzx    r4, r4, r16
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[16];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F226E44:
    ctx->pc = 0x7F226E44u;
    // 7F226E44: bl      0x8000519C
    {
            ctx->lr = 0x7F226E48u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F226E48:
    ctx->pc = 0x7F226E48u;
    ctx->downcount -= 6;
    // 7F226E48: lwz     r3, 844(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(844);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226E4C:
    ctx->pc = 0x7F226E4Cu;
    // 7F226E4C: li      r5, 384
    ctx->gpr[5] = (u32)(s32)(384);

label_7F226E50:
    ctx->pc = 0x7F226E50u;
    // 7F226E50: addi    r4, r3, 184
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(184);

label_7F226E54:
    ctx->pc = 0x7F226E54u;
    // 7F226E54: lwzx    r3, r4, r20
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[20];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226E58:
    ctx->pc = 0x7F226E58u;
    // 7F226E58: lwzx    r4, r4, r16
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[16];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F226E5C:
    ctx->pc = 0x7F226E5Cu;
    // 7F226E5C: bl      0x8000519C
    {
            ctx->lr = 0x7F226E60u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F226E60:
    ctx->pc = 0x7F226E60u;
    ctx->downcount -= 6;
    // 7F226E60: lwz     r3, 840(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(840);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226E64:
    ctx->pc = 0x7F226E64u;
    // 7F226E64: li      r5, 384
    ctx->gpr[5] = (u32)(s32)(384);

label_7F226E68:
    ctx->pc = 0x7F226E68u;
    // 7F226E68: addi    r4, r3, 192
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(192);

label_7F226E6C:
    ctx->pc = 0x7F226E6Cu;
    // 7F226E6C: lwzx    r3, r4, r20
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[20];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226E70:
    ctx->pc = 0x7F226E70u;
    // 7F226E70: lwzx    r4, r4, r16
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[16];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F226E74:
    ctx->pc = 0x7F226E74u;
    // 7F226E74: bl      0x8000519C
    {
            ctx->lr = 0x7F226E78u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F226E78:
    ctx->pc = 0x7F226E78u;
    ctx->downcount -= 6;
    // 7F226E78: lwz     r3, 844(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(844);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226E7C:
    ctx->pc = 0x7F226E7Cu;
    // 7F226E7C: li      r5, 288
    ctx->gpr[5] = (u32)(s32)(288);

label_7F226E80:
    ctx->pc = 0x7F226E80u;
    // 7F226E80: addi    r4, r3, 192
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(192);

label_7F226E84:
    ctx->pc = 0x7F226E84u;
    // 7F226E84: lwzx    r3, r4, r20
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[20];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226E88:
    ctx->pc = 0x7F226E88u;
    // 7F226E88: lwzx    r4, r4, r16
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[16];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F226E8C:
    ctx->pc = 0x7F226E8Cu;
    // 7F226E8C: bl      0x8000519C
    {
            ctx->lr = 0x7F226E90u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F226E90:
    ctx->pc = 0x7F226E90u;
    ctx->downcount -= 3;
    // 7F226E90: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F226E94:
    ctx->pc = 0x7F226E94u;
    // 7F226E94: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F226E98:
    ctx->pc = 0x7F226E98u;
    // 7F226E98: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_7F226E9C:
    ctx->downcount -= 5;
    // 7F226E9C: addi    r19, r22, 816
    ctx->gpr[19] = ctx->gpr[22] + (u32)(s32)(816);

label_7F226EA0:
    ctx->pc = 0x7F226EA0u;
    // 7F226EA0: lwzx    r4, r24, r19
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[19];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F226EA4:
    // 7F226EA4: rlwinm r0, r4, 0, 28, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x0000000Fu;
    }

label_7F226EA8:
    // 7F226EA8: cmplwi  r0, 0x0006
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

label_7F226EAC:
    // 7F226EAC: bc    12, 1, 0x7F22738C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F22738C;
        }
    }

label_7F226EB0:
    ctx->downcount -= 7;
    // 7F226EB0: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F226EB4:
    // 7F226EB4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F226EB8:
    // 7F226EB8: addi    r3, r3, 8840
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8840);

label_7F226EBC:
    ctx->pc = 0x7F226EBCu;
    // 7F226EBC: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226EC0:
    ctx->pc = 0x7F226EC0u;
    // 7F226EC0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F226EC4:
    ctx->pc = 0x7F226EC4u;
    // 7F226EC4: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F226EC8:
    ctx->downcount -= 5;
    // 7F226EC8: addi    r3, r23, 828
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(828);

label_7F226ECC:
    ctx->pc = 0x7F226ECCu;
    // 7F226ECC: lwz     r0, 852(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(852);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226ED0:
    ctx->pc = 0x7F226ED0u;
    // 7F226ED0: lhax    r3, r24, r3
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[3];
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F226ED4:
    // 7F226ED4: cmpw    r3, r0
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

label_7F226ED8:
    // 7F226ED8: bc    4, 0, 0x7F227394
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F227394;
        }
    }

label_7F226EDC:
    ctx->downcount -= 3;
    // 7F226EDC: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F226EE0:
    ctx->pc = 0x7F226EE0u;
    // 7F226EE0: stwx    r0, r24, r19
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[19];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226EE4:
    // 7F226EE4: b       0x7F227394
    {
            goto label_7F227394;
    }

label_7F226EE8:
    ctx->downcount -= 1;
    // 7F226EE8: bl      0x7F227404
    {
            ctx->lr = 0x7F226EECu;
            goto label_7F227404;
    }

label_7F226EEC:
    ctx->downcount -= 8;
    // 7F226EEC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F226EF0:
    // 7F226EF0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F226EF4:
    ctx->pc = 0x7F226EF4u;
    // 7F226EF4: lfs     f2, 17752(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F226EF4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17752);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F226EF8:
    ctx->pc = 0x7F226EF8u;
    // 7F226EF8: lfs     f0, 17756(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F226EF8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17756);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F226EFC:
    ctx->pc = 0x7F226EFCu;
    // 7F226EFC: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F226EFCu)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F226F00:
    ctx->pc = 0x7F226F00u;
    // 7F226F00: stfs     f1, 16(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F226F00u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F226F04:
    ctx->pc = 0x7F226F04u;
    // 7F226F04: stfs     f0, 20(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F226F04u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F226F08:
    // 7F226F08: bl      0x7F227404
    {
            ctx->lr = 0x7F226F0Cu;
            goto label_7F227404;
    }

label_7F226F0C:
    ctx->downcount -= 8;
    // 7F226F0C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F226F10:
    // 7F226F10: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F226F14:
    ctx->pc = 0x7F226F14u;
    // 7F226F14: lfs     f2, 17752(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F226F14u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17752);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F226F18:
    ctx->pc = 0x7F226F18u;
    // 7F226F18: lfs     f0, 17736(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F226F18u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17736);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F226F1C:
    ctx->pc = 0x7F226F1Cu;
    // 7F226F1C: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F226F1Cu)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F226F20:
    ctx->pc = 0x7F226F20u;
    // 7F226F20: stfs     f1, 24(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F226F20u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F226F24:
    ctx->pc = 0x7F226F24u;
    // 7F226F24: stfs     f0, 28(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F226F24u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F226F28:
    // 7F226F28: bl      0x7F227404
    {
            ctx->lr = 0x7F226F2Cu;
            goto label_7F227404;
    }

label_7F226F2C:
    ctx->downcount -= 8;
    // 7F226F2C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F226F30:
    // 7F226F30: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F226F34:
    ctx->pc = 0x7F226F34u;
    // 7F226F34: lfs     f2, 17760(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F226F34u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17760);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F226F38:
    ctx->pc = 0x7F226F38u;
    // 7F226F38: lfs     f0, 17764(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F226F38u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17764);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F226F3C:
    ctx->pc = 0x7F226F3Cu;
    // 7F226F3C: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F226F3Cu)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F226F40:
    ctx->pc = 0x7F226F40u;
    // 7F226F40: stfs     f1, 0(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F226F40u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F226F44:
    ctx->pc = 0x7F226F44u;
    // 7F226F44: stfs     f0, 4(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F226F44u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F226F48:
    // 7F226F48: bl      0x7F227404
    {
            ctx->lr = 0x7F226F4Cu;
            goto label_7F227404;
    }

label_7F226F4C:
    ctx->downcount -= 21;
    // 7F226F4C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F226F50:
    ctx->pc = 0x7F226F50u;
    // 7F226F50: lfs     f0, 17768(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F226F50u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17768);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F226F54:
    ctx->pc = 0x7F226F54u;
    // 7F226F54: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F226F54u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F226F58:
    ctx->pc = 0x7F226F58u;
    // 7F226F58: stfs     f0, 8(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F226F58u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F226F5C:
    // 7F226F5C: bl      0x7F227404
    {
            ctx->lr = 0x7F226F60u;
            goto label_7F227404;
    }

label_7F226F60:
    ctx->downcount -= 27;
    // 7F226F60: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F226F64:
    // 7F226F64: li      r4, 20
    ctx->gpr[4] = (u32)(s32)(20);

label_7F226F68:
    ctx->pc = 0x7F226F68u;
    // 7F226F68: lfs     f0, 17768(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F226F68u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17768);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F226F6C:
    // 7F226F6C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F226F70:
    // 7F226F70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F226F74:
    ctx->pc = 0x7F226F74u;
    // 7F226F74: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F226F74u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F226F78:
    ctx->pc = 0x7F226F78u;
    // 7F226F78: stfs     f0, 12(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F226F78u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F226F7C:
    ctx->pc = 0x7F226F7Cu;
    // 7F226F7C: sth     r4, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F226F80:
    ctx->pc = 0x7F226F80u;
    // 7F226F80: sth     r4, 10(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F226F84:
    ctx->pc = 0x7F226F84u;
    // 7F226F84: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F226F88:
    loop_7F226F88(ctx);
    if (ctx->pc == 0x7F226FB4u) goto label_7F226FB4;
    return;
label_7F226F8C:
    // 7F226F8C: add   r5, r28, r3
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F226F90:
    ctx->pc = 0x7F226F90u;
    // 7F226F90: lwz     r0, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226F94:
    // 7F226F94: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_7F226F98:
    ctx->pc = 0x7F226F98u;
    // 7F226F98: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F226F9C:
    ctx->pc = 0x7F226F9Cu;
    // 7F226F9C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226FA0:
    ctx->pc = 0x7F226FA0u;
    // 7F226FA0: lwz     r4, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F226FA4:
    ctx->pc = 0x7F226FA4u;
    // 7F226FA4: lwz     r0, 28(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F226FA8:
    ctx->pc = 0x7F226FA8u;
    // 7F226FA8: stw     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F226FAC:
    ctx->pc = 0x7F226FACu;
    // 7F226FAC: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226FB0:
    // 7F226FB0: bc    16, 0, 0x7F226F88
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F226F88u;
                return;
            }
            goto label_7F226F88;
        }
    }

label_7F226FB4:
    ctx->pc = 0x7F226FB4u;
    ctx->downcount -= 2;
    // 7F226FB4: lwz     r3, 848(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(848);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226FB8:
    // 7F226FB8: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F226FBCu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F226FBC:
    ctx->downcount -= 4;
    // 7F226FBC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F226FC0:
    // 7F226FC0: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F226FC4:
    // 7F226FC4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F226FC8:
    // 7F226FC8: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F226FCCu;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F226FCC:
    ctx->downcount -= 4;
    // 7F226FCC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F226FD0:
    // 7F226FD0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F226FD4:
    // 7F226FD4: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F226FD8:
    // 7F226FD8: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F226FDCu;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F226FDC:
    ctx->pc = 0x7F226FDCu;
    ctx->downcount -= 4;
    // 7F226FDC: lwzx    r3, r24, r19
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[19];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F226FE0:
    // 7F226FE0: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F226FE4:
    ctx->pc = 0x7F226FE4u;
    // 7F226FE4: stwx    r0, r24, r19
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[19];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F226FE8:
    // 7F226FE8: b       0x7F227394
    {
            goto label_7F227394;
    }

label_7F226FEC:
    ctx->pc = 0x7F226FECu;
    ctx->downcount -= 49;
    // 7F226FEC: lwz     r4, 852(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(852);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F226FF0:
    // 7F226FF0: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F226FF4:
    // 7F226FF4: divw   r0, r4, r3
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F226FF8:
    // 7F226FF8: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F226FFC:
    // 7F226FFC: subf.   r0, r0, r4
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

label_7F227000:
    // 7F227000: bc    4, 2, 0x7F227014
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F227014;
        }
    }

label_7F227004:
    ctx->downcount -= 4;
    // 7F227004: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F227008:
    // 7F227008: addi    r3, r28, 16
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(16);

label_7F22700C:
    // 7F22700C: li      r5, 112
    ctx->gpr[5] = (u32)(s32)(112);

label_7F227010:
    // 7F227010: bl      0x800121E0
    {
            ctx->lr = 0x7F227014u;
            ctx->pc = 0x800121E0u;
            return;
    }

label_7F227014:
    ctx->pc = 0x7F227014u;
    ctx->downcount -= 8;
    // 7F227014: lfs     f1, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F227014u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F227018:
    ctx->pc = 0x7F227018u;
    // 7F227018: lfs     f0, 4(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F227018u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F22701C:
    ctx->pc = 0x7F22701Cu;
    // 7F22701C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F22701Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F227020:
    ctx->pc = 0x7F227020u;
    // 7F227020: stfs     f0, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F227020u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F227024:
    ctx->pc = 0x7F227024u;
    // 7F227024: lfs     f1, 8(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F227024u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F227028:
    ctx->pc = 0x7F227028u;
    // 7F227028: lfs     f0, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F227028u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F22702C:
    ctx->pc = 0x7F22702Cu;
    // 7F22702C: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F22702Cu)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_7F227030:
    // 7F227030: bl      0x7F00FAF4
    {
            ctx->lr = 0x7F227034u;
            ctx->pc = 0x7F00FAF4u;
            return;
    }

label_7F227034:
    ctx->pc = 0x7F227034u;
    ctx->downcount -= 8;
    // 7F227034: lfs     f2, 0(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F227034u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F227038:
    ctx->pc = 0x7F227038u;
    // 7F227038: lfs     f0, 16(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F227038u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F22703C:
    ctx->pc = 0x7F22703Cu;
    // 7F22703C: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F22703Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F227040:
    ctx->pc = 0x7F227040u;
    // 7F227040: stfs     f0, 0(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F227040u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F227044:
    ctx->pc = 0x7F227044u;
    // 7F227044: lfs     f1, 12(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F227044u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F227048:
    ctx->pc = 0x7F227048u;
    // 7F227048: lfs     f0, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F227048u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F22704C:
    ctx->pc = 0x7F22704Cu;
    // 7F22704C: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F22704Cu)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_7F227050:
    // 7F227050: bl      0x7F008330
    {
            ctx->lr = 0x7F227054u;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F227054:
    ctx->pc = 0x7F227054u;
    ctx->downcount -= 11;
    // 7F227054: lfs     f3, 0(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F227054u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F227058:
    // 7F227058: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F22705C:
    ctx->pc = 0x7F22705Cu;
    // 7F22705C: lfs     f2, 24(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F22705Cu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F227060:
    ctx->pc = 0x7F227060u;
    // 7F227060: lfs     f0, 17772(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F227060u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17772);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F227064:
    ctx->pc = 0x7F227064u;
    // 7F227064: fmadds f1, f3, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F227064u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[1], ctx->fpr[2], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F227068:
    ctx->pc = 0x7F227068u;
    // 7F227068: stfs     f1, 8(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F227068u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F22706C:
    ctx->pc = 0x7F22706Cu;
    // 7F22706C: lfs     f1, 4(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F22706Cu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F227070:
    ctx->pc = 0x7F227070u;
    // 7F227070: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F227070u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F227074:
    ctx->pc = 0x7F227074u;
    // 7F227074: stfs     f0, 4(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F227074u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F227078:
    ctx->pc = 0x7F227078u;
    // 7F227078: lwz     r3, 848(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(848);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F22707C:
    // 7F22707C: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F227080u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F227080:
    ctx->downcount -= 4;
    // 7F227080: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F227084:
    // 7F227084: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F227088:
    // 7F227088: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F22708C:
    // 7F22708C: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F227090u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F227090:
    ctx->downcount -= 4;
    // 7F227090: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F227094:
    // 7F227094: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F227098:
    // 7F227098: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F22709C:
    // 7F22709C: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F2270A0u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F2270A0:
    ctx->downcount -= 6;
    // 7F2270A0: addi    r4, r23, 834
    ctx->gpr[4] = ctx->gpr[23] + (u32)(s32)(834);

label_7F2270A4:
    ctx->pc = 0x7F2270A4u;
    // 7F2270A4: lhax    r3, r24, r4
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[4];
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2270A8:
    // 7F2270A8: addi    r3, r3, -1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F2270AC:
    // 7F2270AC: extsh. r0, r3
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

label_7F2270B0:
    ctx->pc = 0x7F2270B0u;
    // 7F2270B0: sthx    r3, r24, r4
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[4];
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2270B4:
    // 7F2270B4: bc    4, 0, 0x7F227394
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F227394;
        }
    }

label_7F2270B8:
    ctx->pc = 0x7F2270B8u;
    ctx->downcount -= 5;
    // 7F2270B8: lwzx    r3, r24, r19
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[19];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2270BC:
    // 7F2270BC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2270C0:
    ctx->pc = 0x7F2270C0u;
    // 7F2270C0: stwx    r0, r24, r19
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[19];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2270C4:
    ctx->pc = 0x7F2270C4u;
    // 7F2270C4: stwx    r3, r24, r19
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[19];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2270C8:
    // 7F2270C8: b       0x7F227394
    {
            goto label_7F227394;
    }

label_7F2270CC:
    ctx->downcount -= 13;
    // 7F2270CC: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F2270D0:
    // 7F2270D0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F2270D4:
    // 7F2270D4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2270D8:
    // 7F2270D8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2270DC:
    // 7F2270DC: lis     r7, 32585
    ctx->gpr[7] = ((u32)(s32)(32585) << 16);

label_7F2270E0:
    ctx->pc = 0x7F2270E0u;
    // 7F2270E0: lfs     f28, 17780(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2270E0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(17780);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F2270E4:
    ctx->pc = 0x7F2270E4u;
    // 7F2270E4: lfd     f29, 17744(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2270E4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(17744);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2270E8:
    // 7F2270E8: addi    r20, r7, 12832
    ctx->gpr[20] = ctx->gpr[7] + (u32)(s32)(12832);

label_7F2270EC:
    ctx->pc = 0x7F2270ECu;
    // 7F2270EC: lfs     f30, 17776(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2270ECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17776);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F2270F0:
    // 7F2270F0: li      r17, 0
    ctx->gpr[17] = (u32)(s32)(0);

label_7F2270F4:
    ctx->pc = 0x7F2270F4u;
    // 7F2270F4: lfs     f31, 17736(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2270F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17736);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F2270F8:
    // 7F2270F8: li      r16, 0
    ctx->gpr[16] = (u32)(s32)(0);

label_7F2270FC:
    // 7F2270FC: lis     r21, 17200
    ctx->gpr[21] = ((u32)(s32)(17200) << 16);

label_7F227100:
    ctx->pc = 0x7F227100u;
    ctx->downcount -= 26;
    // 7F227100: lwz     r5, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F227104:
    // 7F227104: xoris   r0, r17, 0x8000
    ctx->gpr[0] = ctx->gpr[17] ^ (0x8000u << 16);

label_7F227108:
    ctx->pc = 0x7F227108u;
    // 7F227108: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F22710C:
    // 7F22710C: add   r6, r30, r16
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[16];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F227110:
    ctx->pc = 0x7F227110u;
    // 7F227110: stw     r0, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227114:
    // 7F227114: add   r4, r28, r16
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[16];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F227118:
    ctx->pc = 0x7F227118u;
    // 7F227118: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F22711C:
    ctx->pc = 0x7F22711Cu;
    // 7F22711C: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F227120:
    ctx->pc = 0x7F227120u;
    // 7F227120: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F227124:
    ctx->pc = 0x7F227124u;
    // 7F227124: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227128:
    ctx->pc = 0x7F227128u;
    // 7F227128: stw     r21, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

label_7F22712C:
    ctx->pc = 0x7F22712Cu;
    // 7F22712C: stw     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F227130:
    ctx->pc = 0x7F227130u;
    // 7F227130: lfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F227130u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F227134:
    ctx->pc = 0x7F227134u;
    // 7F227134: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227138:
    ctx->pc = 0x7F227138u;
    // 7F227138: fsubs   f0, f0, f29
    if (!ppc_fp_available_inline(ctx, 0x7F227138u)) return;
    ppc_fsubs(ctx, 0, 0, 29);

label_7F22713C:
    ctx->pc = 0x7F22713Cu;
    // 7F22713C: lwz     r3, 0(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F227140:
    ctx->pc = 0x7F227140u;
    // 7F227140: lwz     r0, 4(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227144:
    ctx->pc = 0x7F227144u;
    // 7F227144: fmuls   f27, f28, f0
    if (!ppc_fp_available_inline(ctx, 0x7F227144u)) return;
    ppc_fmuls(ctx, 27, 28, 0);

label_7F227148:
    ctx->pc = 0x7F227148u;
    // 7F227148: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F22714C:
    ctx->pc = 0x7F22714Cu;
    // 7F22714C: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227150:
    ctx->pc = 0x7F227150u;
    // 7F227150: fmr    f1, f27
    if (!ppc_fp_available_inline(ctx, 0x7F227150u)) return;
    ctx->fpr[1] = ctx->fpr[27];

label_7F227154:
    ctx->pc = 0x7F227154u;
    // 7F227154: lwz     r3, 8(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F227158:
    ctx->pc = 0x7F227158u;
    // 7F227158: lwz     r0, 12(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F22715C:
    ctx->pc = 0x7F22715Cu;
    // 7F22715C: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F227160:
    ctx->pc = 0x7F227160u;
    // 7F227160: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227164:
    // 7F227164: bl      0x7F00FAF4
    {
            ctx->lr = 0x7F227168u;
            ctx->pc = 0x7F00FAF4u;
            return;
    }

label_7F227168:
    ctx->pc = 0x7F227168u;
    ctx->downcount -= 5;
    // 7F227168: fmuls   f0, f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F227168u)) return;
    ppc_fmuls(ctx, 0, 30, 1);

label_7F22716C:
    // 7F22716C: add   r18, r27, r16
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[16];
        u32 res = a + b;
        ctx->gpr[18] = res;
    }

label_7F227170:
    ctx->pc = 0x7F227170u;
    // 7F227170: fmr    f1, f27
    if (!ppc_fp_available_inline(ctx, 0x7F227170u)) return;
    ctx->fpr[1] = ctx->fpr[27];

label_7F227174:
    ctx->pc = 0x7F227174u;
    // 7F227174: stfs     f0, 0(r18)
    if (!ppc_fp_available_inline(ctx, 0x7F227174u)) return;
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F227178:
    // 7F227178: bl      0x7F008330
    {
            ctx->lr = 0x7F22717Cu;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F22717C:
    ctx->pc = 0x7F22717Cu;
    ctx->downcount -= 14;
    // 7F22717C: fmuls   f0, f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F22717Cu)) return;
    ppc_fmuls(ctx, 0, 30, 1);

label_7F227180:
    // 7F227180: add   r4, r26, r16
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[16];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F227184:
    // 7F227184: addi    r17, r17, 1
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(1);

label_7F227188:
    // 7F227188: li      r3, 64
    ctx->gpr[3] = (u32)(s32)(64);

label_7F22718C:
    // 7F22718C: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F227190:
    // 7F227190: addi    r16, r16, 16
    ctx->gpr[16] = ctx->gpr[16] + (u32)(s32)(16);

label_7F227194:
    ctx->pc = 0x7F227194u;
    // 7F227194: stfs     f0, 4(r18)
    if (!ppc_fp_available_inline(ctx, 0x7F227194u)) return;
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F227198:
    // 7F227198: cmpwi   r17, 8
    {
        s32 val_a = (s32)(ctx->gpr[17]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F22719C:
    ctx->pc = 0x7F22719Cu;
    // 7F22719C: stfs     f31, 8(r18)
    if (!ppc_fp_available_inline(ctx, 0x7F22719Cu)) return;
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F2271A0:
    ctx->pc = 0x7F2271A0u;
    // 7F2271A0: stfs     f31, 12(r18)
    if (!ppc_fp_available_inline(ctx, 0x7F2271A0u)) return;
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F2271A4:
    ctx->pc = 0x7F2271A4u;
    // 7F2271A4: stb     r3, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2271A8:
    ctx->pc = 0x7F2271A8u;
    // 7F2271A8: sth     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2271AC:
    ctx->pc = 0x7F2271ACu;
    // 7F2271AC: sth     r0, 10(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2271B0:
    // 7F2271B0: bc    12, 0, 0x7F227100
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F227100u;
                return;
            }
            goto label_7F227100;
        }
    }

label_7F2271B4:
    ctx->downcount -= 7;
    // 7F2271B4: addi    r0, r23, 834
    ctx->gpr[0] = ctx->gpr[23] + (u32)(s32)(834);

label_7F2271B8:
    // 7F2271B8: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F2271BC:
    ctx->pc = 0x7F2271BCu;
    // 7F2271BC: sthx    r3, r24, r0
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[0];
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2271C0:
    ctx->pc = 0x7F2271C0u;
    // 7F2271C0: lwzx    r3, r24, r19
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[19];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2271C4:
    // 7F2271C4: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2271C8:
    ctx->pc = 0x7F2271C8u;
    // 7F2271C8: stwx    r0, r24, r19
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[19];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2271CC:
    // 7F2271CC: b       0x7F227394
    {
            goto label_7F227394;
    }

label_7F2271D0:
    ctx->downcount -= 4;
    // 7F2271D0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2271D4:
    // 7F2271D4: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_7F2271D8:
    // 7F2271D8: addi    r16, r3, 17772
    ctx->gpr[16] = ctx->gpr[3] + (u32)(s32)(17772);

label_7F2271DC:
    // 7F2271DC: li      r17, 0
    ctx->gpr[17] = (u32)(s32)(0);

label_7F2271E0:
    ctx->downcount -= 5;
    // 7F2271E0: add   r4, r28, r17
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2271E4:
    // 7F2271E4: add   r20, r27, r17
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[20] = res;
    }

label_7F2271E8:
    // 7F2271E8: or   r3, r20, r20
    {
        ctx->gpr[3] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F2271EC:
    // 7F2271EC: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2271F0:
    // 7F2271F0: bl      0x80025FD8
    {
            ctx->lr = 0x7F2271F4u;
            ctx->pc = 0x80025FD8u;
            return;
    }

label_7F2271F4:
    ctx->pc = 0x7F2271F4u;
    ctx->downcount -= 4;
    // 7F2271F4: lfs     f1, 0(r16)
    if (!ppc_fp_available_inline(ctx, 0x7F2271F4u)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2271F8:
    // 7F2271F8: or   r3, r20, r20
    {
        ctx->gpr[3] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F2271FC:
    // 7F2271FC: or   r4, r20, r20
    {
        ctx->gpr[4] = ctx->gpr[20] | ctx->gpr[20];
    }

label_7F227200:
    // 7F227200: bl      0x80026020
    {
            ctx->lr = 0x7F227204u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F227204:
    ctx->downcount -= 4;
    // 7F227204: addi    r4, r17, 3
    ctx->gpr[4] = ctx->gpr[17] + (u32)(s32)(3);

label_7F227208:
    ctx->pc = 0x7F227208u;
    // 7F227208: lbzx    r3, r26, r4
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[4];
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F22720C:
    // 7F22720C: cmplwi  r3, 0x0000
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

label_7F227210:
    // 7F227210: bc    12, 2, 0x7F22721C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F22721C;
        }
    }

label_7F227214:
    ctx->downcount -= 2;
    // 7F227214: addi    r0, r3, -2
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-2);

label_7F227218:
    ctx->pc = 0x7F227218u;
    // 7F227218: stbx    r0, r26, r4
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[4];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F22721C:
    ctx->downcount -= 4;
    // 7F22721C: addi    r18, r18, 1
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(1);

label_7F227220:
    // 7F227220: addi    r17, r17, 16
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(16);

label_7F227224:
    // 7F227224: cmpwi   r18, 8
    {
        s32 val_a = (s32)(ctx->gpr[18]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F227228:
    // 7F227228: bc    12, 0, 0x7F2271E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2271E0u;
                return;
            }
            goto label_7F2271E0;
        }
    }

label_7F22722C:
    ctx->downcount -= 4;
    // 7F22722C: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F227230:
    // 7F227230: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F227234:
    // 7F227234: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F227238:
    // 7F227238: bl      0x80025FFC
    {
            ctx->lr = 0x7F22723Cu;
            ctx->pc = 0x80025FFCu;
            return;
    }

label_7F22723C:
    ctx->downcount -= 4;
    // 7F22723C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F227240:
    // 7F227240: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F227244:
    // 7F227244: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F227248:
    // 7F227248: bl      0x7F22F07C
    {
            ctx->lr = 0x7F22724Cu;
            ctx->pc = 0x7F22F07Cu;
            return;
    }

label_7F22724C:
    ctx->downcount -= 2;
    // 7F22724C: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F227250:
    // 7F227250: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F227254u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F227254:
    ctx->downcount -= 4;
    // 7F227254: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F227258:
    // 7F227258: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F22725C:
    // 7F22725C: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F227260:
    // 7F227260: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F227264u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F227264:
    ctx->downcount -= 4;
    // 7F227264: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F227268:
    // 7F227268: addi    r3, r29, 16
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(16);

label_7F22726C:
    // 7F22726C: li      r5, 112
    ctx->gpr[5] = (u32)(s32)(112);

label_7F227270:
    // 7F227270: bl      0x800121E0
    {
            ctx->lr = 0x7F227274u;
            ctx->pc = 0x800121E0u;
            return;
    }

label_7F227274:
    ctx->downcount -= 6;
    // 7F227274: addi    r4, r23, 834
    ctx->gpr[4] = ctx->gpr[23] + (u32)(s32)(834);

label_7F227278:
    ctx->pc = 0x7F227278u;
    // 7F227278: lhax    r3, r24, r4
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[4];
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F22727C:
    // 7F22727C: addi    r3, r3, -1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F227280:
    // 7F227280: extsh. r0, r3
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

label_7F227284:
    ctx->pc = 0x7F227284u;
    // 7F227284: sthx    r3, r24, r4
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[4];
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F227288:
    // 7F227288: bc    4, 0, 0x7F227394
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F227394;
        }
    }

label_7F22728C:
    ctx->pc = 0x7F22728Cu;
    ctx->downcount -= 5;
    // 7F22728C: lwzx    r3, r24, r19
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[19];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F227290:
    // 7F227290: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F227294:
    ctx->pc = 0x7F227294u;
    // 7F227294: stwx    r0, r24, r19
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[19];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227298:
    ctx->pc = 0x7F227298u;
    // 7F227298: stwx    r3, r24, r19
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[19];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F22729C:
    // 7F22729C: b       0x7F227394
    {
            goto label_7F227394;
    }

label_7F2272A0:
    ctx->downcount -= 12;
    // 7F2272A0: add   r4, r24, r23
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2272A4:
    // 7F2272A4: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_7F2272A8:
    ctx->pc = 0x7F2272A8u;
    // 7F2272A8: sth     r0, 834(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(834);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2272AC:
    ctx->pc = 0x7F2272ACu;
    // 7F2272AC: lwz     r3, 852(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(852);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2272B0:
    // 7F2272B0: addi    r0, r3, 49
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(49);

label_7F2272B4:
    ctx->pc = 0x7F2272B4u;
    // 7F2272B4: sth     r0, 828(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(828);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2272B8:
    // 7F2272B8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2272BC:
    // 7F2272BC: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F2272C0:
    // 7F2272C0: addi    r3, r3, 12832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F2272C4:
    // 7F2272C4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2272C8:
    ctx->pc = 0x7F2272C8u;
    // 7F2272C8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2272CC:
    loop_7F2272CC(ctx);
    if (ctx->pc == 0x7F22737Cu) goto label_7F22737C;
    return;
label_7F2272D0:
    // 7F2272D0: add   r12, r30, r5
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_7F2272D4:
    ctx->pc = 0x7F2272D4u;
    // 7F2272D4: lwz     r7, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2272D8:
    // 7F2272D8: add   r11, r29, r5
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[11] = res;
    }

label_7F2272DC:
    // 7F2272DC: add   r10, r27, r5
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[10] = res;
    }

label_7F2272E0:
    // 7F2272E0: add   r9, r28, r5
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_7F2272E4:
    ctx->pc = 0x7F2272E4u;
    // 7F2272E4: stw     r0, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2272E8:
    // 7F2272E8: add   r4, r26, r5
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2272EC:
    // 7F2272EC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2272F0:
    // 7F2272F0: li      r0, 128
    ctx->gpr[0] = (u32)(s32)(128);

label_7F2272F4:
    ctx->pc = 0x7F2272F4u;
    // 7F2272F4: stw     r7, 4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2272F8:
    // 7F2272F8: addi    r5, r5, 16
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(16);

label_7F2272FC:
    ctx->pc = 0x7F2272FCu;
    // 7F2272FC: lwz     r8, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F227300:
    ctx->pc = 0x7F227300u;
    // 7F227300: lwz     r7, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F227304:
    ctx->pc = 0x7F227304u;
    // 7F227304: stw     r8, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F227308:
    ctx->pc = 0x7F227308u;
    // 7F227308: stw     r7, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F22730C:
    ctx->pc = 0x7F22730Cu;
    // 7F22730C: lwz     r8, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F227310:
    ctx->pc = 0x7F227310u;
    // 7F227310: lwz     r7, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F227314:
    ctx->pc = 0x7F227314u;
    // 7F227314: stw     r8, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F227318:
    ctx->pc = 0x7F227318u;
    // 7F227318: stw     r7, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F22731C:
    ctx->pc = 0x7F22731Cu;
    // 7F22731C: lwz     r8, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F227320:
    ctx->pc = 0x7F227320u;
    // 7F227320: lwz     r7, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F227324:
    ctx->pc = 0x7F227324u;
    // 7F227324: stw     r8, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F227328:
    ctx->pc = 0x7F227328u;
    // 7F227328: stw     r7, 12(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F22732C:
    ctx->pc = 0x7F22732Cu;
    // 7F22732C: lwz     r8, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F227330:
    ctx->pc = 0x7F227330u;
    // 7F227330: lwz     r7, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F227334:
    ctx->pc = 0x7F227334u;
    // 7F227334: stw     r8, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F227338:
    ctx->pc = 0x7F227338u;
    // 7F227338: stw     r7, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F22733C:
    ctx->pc = 0x7F22733Cu;
    // 7F22733C: lwz     r8, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F227340:
    ctx->pc = 0x7F227340u;
    // 7F227340: lwz     r7, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F227344:
    ctx->pc = 0x7F227344u;
    // 7F227344: stw     r8, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F227348:
    ctx->pc = 0x7F227348u;
    // 7F227348: stw     r7, 12(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F22734C:
    ctx->pc = 0x7F22734Cu;
    // 7F22734C: lwz     r8, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F227350:
    ctx->pc = 0x7F227350u;
    // 7F227350: lwz     r7, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F227354:
    ctx->pc = 0x7F227354u;
    // 7F227354: stw     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F227358:
    ctx->pc = 0x7F227358u;
    // 7F227358: stw     r7, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F22735C:
    ctx->pc = 0x7F22735Cu;
    // 7F22735C: lwz     r8, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F227360:
    ctx->pc = 0x7F227360u;
    // 7F227360: lwz     r7, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F227364:
    ctx->pc = 0x7F227364u;
    // 7F227364: stw     r8, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F227368:
    ctx->pc = 0x7F227368u;
    // 7F227368: stw     r7, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F22736C:
    ctx->pc = 0x7F22736Cu;
    // 7F22736C: sth     r6, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F227370:
    ctx->pc = 0x7F227370u;
    // 7F227370: sth     r6, 10(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F227374:
    ctx->pc = 0x7F227374u;
    // 7F227374: stb     r0, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F227378:
    // 7F227378: bc    16, 0, 0x7F2272CC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2272CCu;
                return;
            }
            goto label_7F2272CC;
        }
    }

label_7F22737C:
    ctx->pc = 0x7F22737Cu;
    ctx->downcount -= 4;
    // 7F22737C: lwzx    r3, r24, r19
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[19];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F227380:
    // 7F227380: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F227384:
    ctx->pc = 0x7F227384u;
    // 7F227384: stwx    r0, r24, r19
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[19];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227388:
    // 7F227388: b       0x7F227394
    {
            goto label_7F227394;
    }

label_7F22738C:
    ctx->downcount -= 2;
    // 7F22738C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F227390:
    ctx->pc = 0x7F227390u;
    // 7F227390: stwx    r0, r24, r19
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[19];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227394:
    ctx->downcount -= 10;
    // 7F227394: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F227398:
    // 7F227398: addi    r28, r28, 128
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(128);

label_7F22739C:
    // 7F22739C: cmpwi   r31, 3
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

label_7F2273A0:
    // 7F2273A0: addi    r30, r30, 128
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(128);

label_7F2273A4:
    // 7F2273A4: addi    r29, r29, 128
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(128);

label_7F2273A8:
    // 7F2273A8: addi    r26, r26, 128
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(128);

label_7F2273AC:
    // 7F2273AC: addi    r23, r23, 2
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(2);

label_7F2273B0:
    // 7F2273B0: addi    r22, r22, 4
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(4);

label_7F2273B4:
    // 7F2273B4: addi    r27, r27, 128
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(128);

label_7F2273B8:
    // 7F2273B8: bc    12, 0, 0x7F226E9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F226E9Cu;
                return;
            }
            goto label_7F226E9C;
        }
    }

label_7F2273BC:
    ctx->pc = 0x7F2273BCu;
    ctx->downcount -= 29;
    // 7F2273BC: lwz     r3, 852(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(852);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2273C0:
    ctx->pc = 0x7F2273C0u;
    // 7F2273C0: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2273C4:
    ctx->pc = 0x7F2273C4u;
    // 7F2273C4: stw     r0, 852(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(852);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2273C8:
    ctx->pc = 0x7F2273C8u;
    // 7F2273C8: psq_l   f31, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2273C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F2273C8u);
        if (ctx->exception) return;
    }

label_7F2273CC:
    ctx->pc = 0x7F2273CCu;
    // 7F2273CC: lfd     f31, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2273CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2273D0:
    ctx->pc = 0x7F2273D0u;
    // 7F2273D0: psq_l   f30, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2273D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F2273D0u);
        if (ctx->exception) return;
    }

label_7F2273D4:
    ctx->pc = 0x7F2273D4u;
    // 7F2273D4: lfd     f30, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2273D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2273D8:
    ctx->pc = 0x7F2273D8u;
    // 7F2273D8: psq_l   f29, 200(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2273D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F2273D8u);
        if (ctx->exception) return;
    }

label_7F2273DC:
    ctx->pc = 0x7F2273DCu;
    // 7F2273DC: lfd     f29, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2273DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2273E0:
    ctx->pc = 0x7F2273E0u;
    // 7F2273E0: psq_l   f28, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2273E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F2273E0u);
        if (ctx->exception) return;
    }

label_7F2273E4:
    ctx->pc = 0x7F2273E4u;
    // 7F2273E4: lfd     f28, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2273E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2273E8:
    ctx->pc = 0x7F2273E8u;
    // 7F2273E8: psq_l   f27, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2273E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F2273E8u);
        if (ctx->exception) return;
    }

label_7F2273EC:
    ctx->pc = 0x7F2273ECu;
    // 7F2273EC: lfd     f27, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2273ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2273F0:
    ctx->pc = 0x7F2273F0u;
    // 7F2273F0: lmw     r16, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        for (u32 r = 16; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2273F4:
    ctx->pc = 0x7F2273F4u;
    // 7F2273F4: lwz     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2273F8:
    ctx->pc = 0x7F2273F8u;
    // 7F2273F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2273FC:
    ctx->pc = 0x7F2273FCu;
    // 7F2273FC: addi    r1, r1, 240
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(240);

label_7F227400:
    ctx->pc = 0x7F227400u;
    // 7F227400: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F227404:
    ctx->pc = 0x7F227404u;
    ctx->downcount -= 4;
    // 7F227404: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F227408:
    ctx->pc = 0x7F227408u;
    // 7F227408: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F22740C:
    ctx->pc = 0x7F22740Cu;
    // 7F22740C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227410:
    ctx->pc = 0x7F227410u;
    // 7F227410: bl      0x7F22745C
    {
            ctx->lr = 0x7F227414u;
            goto label_7F22745C;
    }

label_7F227414:
    ctx->pc = 0x7F227414u;
    ctx->downcount -= 35;
    // 7F227414: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F227418:
    ctx->pc = 0x7F227418u;
    // 7F227418: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F22741C:
    ctx->pc = 0x7F22741Cu;
    // 7F22741C: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F227420:
    ctx->pc = 0x7F227420u;
    // 7F227420: addi    r5, r4, 17792
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(17792);

label_7F227424:
    ctx->pc = 0x7F227424u;
    // 7F227424: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F227428:
    ctx->pc = 0x7F227428u;
    // 7F227428: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F227428u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F22742C:
    ctx->pc = 0x7F22742Cu;
    // 7F22742C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227430:
    ctx->pc = 0x7F227430u;
    // 7F227430: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F227434:
    ctx->pc = 0x7F227434u;
    // 7F227434: lfs     f1, 17784(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F227434u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17784);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F227438:
    ctx->pc = 0x7F227438u;
    // 7F227438: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F227438u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F22743C:
    ctx->pc = 0x7F22743Cu;
    // 7F22743C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227440:
    ctx->pc = 0x7F227440u;
    // 7F227440: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F227440u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F227444:
    ctx->pc = 0x7F227444u;
    // 7F227444: lfs     f0, 17788(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F227444u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17788);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F227448:
    ctx->pc = 0x7F227448u;
    // 7F227448: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F227448u)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_7F22744C:
    ctx->pc = 0x7F22744Cu;
    // 7F22744C: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F22744Cu)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F227450:
    ctx->pc = 0x7F227450u;
    // 7F227450: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F227454:
    ctx->pc = 0x7F227454u;
    // 7F227454: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F227458:
    ctx->pc = 0x7F227458u;
    // 7F227458: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F22745C:
    ctx->pc = 0x7F22745Cu;
    ctx->downcount -= 13;
    // 7F22745C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F227460:
    ctx->pc = 0x7F227460u;
    // 7F227460: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F227464:
    ctx->pc = 0x7F227464u;
    // 7F227464: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F227468:
    ctx->pc = 0x7F227468u;
    // 7F227468: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F22746C:
    ctx->pc = 0x7F22746Cu;
    // 7F22746C: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F227470:
    ctx->pc = 0x7F227470u;
    // 7F227470: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F227474:
    ctx->pc = 0x7F227474u;
    // 7F227474: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F227478:
    ctx->pc = 0x7F227478u;
    // 7F227478: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F22747C:
    ctx->pc = 0x7F22747Cu;
    // 7F22747C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F227480:
    ctx->pc = 0x7F227480u;
    ctx->downcount -= 7;
    // 7F227480: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F227484:
    ctx->pc = 0x7F227484u;
    // 7F227484: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F227488:
    ctx->pc = 0x7F227488u;
    // 7F227488: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F22748C:
    ctx->pc = 0x7F22748Cu;
    // 7F22748C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F227490:
    ctx->pc = 0x7F227490u;
    // 7F227490: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F227494:
    ctx->pc = 0x7F227494u;
    // 7F227494: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F227498:
    ctx->pc = 0x7F227498u;
    // 7F227498: bl      0x7F01B234
    {
            ctx->lr = 0x7F22749Cu;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F22749C:
    ctx->pc = 0x7F22749Cu;
    ctx->downcount -= 7;
    // 7F22749C: stw     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2274A0:
    ctx->pc = 0x7F2274A0u;
    // 7F2274A0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2274A4:
    ctx->pc = 0x7F2274A4u;
    // 7F2274A4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2274A8:
    ctx->pc = 0x7F2274A8u;
    // 7F2274A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2274AC:
    ctx->pc = 0x7F2274ACu;
    // 7F2274AC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2274B0:
    ctx->pc = 0x7F2274B0u;
    // 7F2274B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F2274B4:
    ctx->pc = 0x7F2274B4u;
    ctx->downcount -= 8;
    // 7F2274B4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2274B8:
    ctx->pc = 0x7F2274B8u;
    // 7F2274B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2274BC:
    ctx->pc = 0x7F2274BCu;
    // 7F2274BC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2274C0:
    ctx->pc = 0x7F2274C0u;
    // 7F2274C0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2274C4:
    ctx->pc = 0x7F2274C4u;
    // 7F2274C4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2274C8:
    ctx->pc = 0x7F2274C8u;
    // 7F2274C8: lwz     r3, 840(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(840);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2274CC:
    ctx->pc = 0x7F2274CCu;
    // 7F2274CC: cmplwi  r3, 0x0000
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

label_7F2274D0:
    ctx->pc = 0x7F2274D0u;
    // 7F2274D0: bc    12, 2, 0x7F2274D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2274D8;
        }
    }

label_7F2274D4:
    ctx->pc = 0x7F2274D4u;
    ctx->downcount -= 1;
    // 7F2274D4: bl      0x7F3C2440
    {
            ctx->lr = 0x7F2274D8u;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F2274D8:
    ctx->pc = 0x7F2274D8u;
    ctx->downcount -= 3;
    // 7F2274D8: lwz     r3, 844(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(844);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2274DC:
    ctx->pc = 0x7F2274DCu;
    // 7F2274DC: cmplwi  r3, 0x0000
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

label_7F2274E0:
    ctx->pc = 0x7F2274E0u;
    // 7F2274E0: bc    12, 2, 0x7F2274E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2274E8;
        }
    }

label_7F2274E4:
    ctx->pc = 0x7F2274E4u;
    ctx->downcount -= 1;
    // 7F2274E4: bl      0x7F3C2440
    {
            ctx->lr = 0x7F2274E8u;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F2274E8:
    ctx->pc = 0x7F2274E8u;
    ctx->downcount -= 6;
    // 7F2274E8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2274EC:
    ctx->pc = 0x7F2274ECu;
    // 7F2274EC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2274F0:
    ctx->pc = 0x7F2274F0u;
    // 7F2274F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2274F4:
    ctx->pc = 0x7F2274F4u;
    // 7F2274F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2274F8:
    ctx->pc = 0x7F2274F8u;
    // 7F2274F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F2274FC:
    ctx->pc = 0x7F2274FCu;
    ctx->downcount -= 35;
    // 7F2274FC: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F227500:
    ctx->pc = 0x7F227500u;
    // 7F227500: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F227504:
    ctx->pc = 0x7F227504u;
    // 7F227504: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F227508:
    ctx->pc = 0x7F227508u;
    // 7F227508: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F22750C:
    ctx->pc = 0x7F22750Cu;
    // 7F22750C: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227510:
    ctx->pc = 0x7F227510u;
    // 7F227510: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F227514:
    ctx->pc = 0x7F227514u;
    // 7F227514: li      r11, 0
    ctx->gpr[11] = (u32)(s32)(0);

label_7F227518:
    ctx->pc = 0x7F227518u;
    // 7F227518: li      r12, 0
    ctx->gpr[12] = (u32)(s32)(0);

label_7F22751C:
    ctx->pc = 0x7F22751Cu;
    // 7F22751C: stmw     r23, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F227520:
    ctx->pc = 0x7F227520u;
    // 7F227520: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F227524:
    ctx->pc = 0x7F227524u;
    // 7F227524: addi    r25, r1, 12
    ctx->gpr[25] = ctx->gpr[1] + (u32)(s32)(12);

label_7F227528:
    ctx->pc = 0x7F227528u;
    // 7F227528: addi    r26, r1, 8
    ctx->gpr[26] = ctx->gpr[1] + (u32)(s32)(8);

label_7F22752C:
    ctx->pc = 0x7F22752Cu;
    // 7F22752C: sth     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F227530:
    ctx->pc = 0x7F227530u;
    // 7F227530: lis     r27, 1
    ctx->gpr[27] = ((u32)(s32)(1) << 16);

label_7F227534:
    ctx->pc = 0x7F227534u;
    // 7F227534: sth     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F227538:
    ctx->pc = 0x7F227538u;
    // 7F227538: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F22753C:
    ctx->pc = 0x7F22753Cu;
    // 7F22753C: sth     r0, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F227540:
    ctx->pc = 0x7F227540u;
    // 7F227540: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F227544:
    ctx->pc = 0x7F227544u;
    // 7F227544: lwz     r6, 840(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(840);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F227548:
    ctx->pc = 0x7F227548u;
    // 7F227548: lwz     r4, 844(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(844);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F22754C:
    ctx->pc = 0x7F22754Cu;
    // 7F22754C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F227550:
    ctx->pc = 0x7F227550u;
    // 7F227550: lwz     r7, 184(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(184);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F227554:
    ctx->pc = 0x7F227554u;
    // 7F227554: addi    r3, r3, 12832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F227558:
    ctx->pc = 0x7F227558u;
    // 7F227558: lwz     r8, 192(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(192);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F22755C:
    ctx->pc = 0x7F22755Cu;
    // 7F22755C: lwz     r9, 192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(192);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F227560:
    ctx->downcount -= 11;
    // 7F227560: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F227564:
    // 7F227564: addi    r0, r12, 816
    ctx->gpr[0] = ctx->gpr[12] + (u32)(s32)(816);

label_7F227568:
    ctx->pc = 0x7F227568u;
    // 7F227568: stwx    r4, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F22756C:
    // 7F22756C: add   r24, r31, r10
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[24] = res;
    }

label_7F227570:
    // 7F227570: li      r23, 64
    ctx->gpr[23] = (u32)(s32)(64);

label_7F227574:
    // 7F227574: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F227578:
    ctx->pc = 0x7F227578u;
    // 7F227578: sth     r11, 828(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(828);
        mem_write16(ctx, ea, (u16)ctx->gpr[11]);
    }

label_7F22757C:
    // 7F22757C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F227580:
    ctx->pc = 0x7F227580u;
    // 7F227580: sth     r23, 834(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(834);
        mem_write16(ctx, ea, (u16)ctx->gpr[23]);
    }

label_7F227584:
    ctx->pc = 0x7F227584u;
    // 7F227584: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F227588:
    ctx->pc = 0x7F227588u;
    ctx->downcount -= 26;
    // 7F227588: lwz     r23, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F22758C:
    // 7F22758C: rlwinm r24, r6, 1, 30, 30
    {
        ctx->gpr[24] = dolrecomp_rotl32(ctx->gpr[6], 1u) & 0x00000002u;
    }

label_7F227590:
    ctx->pc = 0x7F227590u;
    // 7F227590: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227594:
    // 7F227594: cmpwi   r6, 0
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

label_7F227598:
    ctx->pc = 0x7F227598u;
    // 7F227598: lhax    r30, r25, r24
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[24];
        ctx->gpr[30] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F22759C:
    // 7F22759C: li      r28, 4094
    ctx->gpr[28] = (u32)(s32)(4094);

label_7F2275A0:
    ctx->pc = 0x7F2275A0u;
    // 7F2275A0: stw     r23, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[23]);
    }

label_7F2275A4:
    ctx->pc = 0x7F2275A4u;
    // 7F2275A4: lhax    r29, r26, r24
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[24];
        ctx->gpr[29] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2275A8:
    ctx->pc = 0x7F2275A8u;
    // 7F2275A8: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2275AC:
    // 7F2275AC: addi    r0, r27, -28673
    ctx->gpr[0] = ctx->gpr[27] + (u32)(s32)(-28673);

label_7F2275B0:
    ctx->pc = 0x7F2275B0u;
    // 7F2275B0: lwz     r24, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F2275B4:
    ctx->pc = 0x7F2275B4u;
    // 7F2275B4: lwz     r23, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F2275B8:
    ctx->pc = 0x7F2275B8u;
    // 7F2275B8: stw     r24, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F2275BC:
    ctx->pc = 0x7F2275BCu;
    // 7F2275BC: stw     r23, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[23]);
    }

label_7F2275C0:
    ctx->pc = 0x7F2275C0u;
    // 7F2275C0: lwz     r24, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F2275C4:
    ctx->pc = 0x7F2275C4u;
    // 7F2275C4: lwz     r23, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F2275C8:
    ctx->pc = 0x7F2275C8u;
    // 7F2275C8: stw     r24, 432(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(432);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F2275CC:
    ctx->pc = 0x7F2275CCu;
    // 7F2275CC: stw     r23, 436(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(436);
        mem_write32(ctx, ea, (u32)ctx->gpr[23]);
    }

label_7F2275D0:
    ctx->pc = 0x7F2275D0u;
    // 7F2275D0: lwz     r23, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F2275D4:
    ctx->pc = 0x7F2275D4u;
    // 7F2275D4: lwz     r24, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F2275D8:
    ctx->pc = 0x7F2275D8u;
    // 7F2275D8: stw     r23, 440(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(440);
        mem_write32(ctx, ea, (u32)ctx->gpr[23]);
    }

label_7F2275DC:
    ctx->pc = 0x7F2275DCu;
    // 7F2275DC: stw     r24, 444(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(444);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F2275E0:
    ctx->pc = 0x7F2275E0u;
    // 7F2275E0: sth     r30, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[30]);
    }

label_7F2275E4:
    ctx->pc = 0x7F2275E4u;
    // 7F2275E4: sth     r29, 6(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[29]);
    }

label_7F2275E8:
    ctx->pc = 0x7F2275E8u;
    // 7F2275E8: sth     r28, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[28]);
    }

label_7F2275EC:
    // 7F2275EC: bc    12, 2, 0x7F2275F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2275F4;
        }
    }

label_7F2275F0:
    ctx->downcount -= 1;
    // 7F2275F0: li      r0, 4095
    ctx->gpr[0] = (u32)(s32)(4095);

label_7F2275F4:
    ctx->pc = 0x7F2275F4u;
    ctx->downcount -= 25;
    // 7F2275F4: sth     r0, 10(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2275F8:
    // 7F2275F8: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F2275FC:
    // 7F2275FC: subfic  r0, r4, 128
    {
        u64 res = (u64)(u32)(s32)(128) + (u64)(~ctx->gpr[4]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F227600:
    // 7F227600: li      r29, 4096
    ctx->gpr[29] = (u32)(s32)(4096);

label_7F227604:
    ctx->pc = 0x7F227604u;
    // 7F227604: sth     r28, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[28]);
    }

label_7F227608:
    // 7F227608: li      r30, 128
    ctx->gpr[30] = (u32)(s32)(128);

label_7F22760C:
    // 7F22760C: addi    r7, r7, 16
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(16);

label_7F227610:
    // 7F227610: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F227614:
    ctx->pc = 0x7F227614u;
    // 7F227614: sth     r28, 6(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[28]);
    }

label_7F227618:
    // 7F227618: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

label_7F22761C:
    ctx->pc = 0x7F22761Cu;
    // 7F22761C: sth     r29, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[29]);
    }

label_7F227620:
    ctx->pc = 0x7F227620u;
    // 7F227620: sth     r29, 14(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[29]);
    }

label_7F227624:
    ctx->pc = 0x7F227624u;
    // 7F227624: sth     r28, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[28]);
    }

label_7F227628:
    ctx->pc = 0x7F227628u;
    // 7F227628: sth     r28, 10(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[28]);
    }

label_7F22762C:
    ctx->pc = 0x7F22762Cu;
    // 7F22762C: stb     r30, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_7F227630:
    ctx->pc = 0x7F227630u;
    // 7F227630: stb     r30, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_7F227634:
    ctx->pc = 0x7F227634u;
    // 7F227634: stb     r30, 1(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_7F227638:
    ctx->pc = 0x7F227638u;
    // 7F227638: stb     r30, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_7F22763C:
    ctx->pc = 0x7F22763Cu;
    // 7F22763C: stb     r30, 2(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_7F227640:
    ctx->pc = 0x7F227640u;
    // 7F227640: stb     r30, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_7F227644:
    ctx->pc = 0x7F227644u;
    // 7F227644: stb     r30, 3(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_7F227648:
    // 7F227648: addi    r8, r8, 16
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(16);

label_7F22764C:
    ctx->pc = 0x7F22764Cu;
    // 7F22764C: stb     r0, 3(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F227650:
    // 7F227650: addi    r9, r9, 12
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(12);

label_7F227654:
    // 7F227654: bc    16, 0, 0x7F227588
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F227588u;
                return;
            }
            goto label_7F227588;
        }
    }

label_7F227658:
    ctx->downcount -= 6;
    // 7F227658: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F22765C:
    // 7F22765C: addi    r11, r11, 49
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(49);

label_7F227660:
    // 7F227660: cmpwi   r5, 3
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

label_7F227664:
    // 7F227664: addi    r12, r12, 4
    ctx->gpr[12] = ctx->gpr[12] + (u32)(s32)(4);

label_7F227668:
    // 7F227668: addi    r10, r10, 2
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(2);

label_7F22766C:
    // 7F22766C: bc    12, 0, 0x7F227560
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F227560u;
                return;
            }
            goto label_7F227560;
        }
    }

label_7F227670:
    ctx->pc = 0x7F227670u;
    ctx->downcount -= 5;
    // 7F227670: lwz     r4, 840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(840);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F227674:
    ctx->pc = 0x7F227674u;
    // 7F227674: li      r5, 384
    ctx->gpr[5] = (u32)(s32)(384);

label_7F227678:
    ctx->pc = 0x7F227678u;
    // 7F227678: lwz     r3, 188(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F22767C:
    ctx->pc = 0x7F22767Cu;
    // 7F22767C: lwz     r4, 184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F227680:
    ctx->pc = 0x7F227680u;
    // 7F227680: bl      0x8000519C
    {
            ctx->lr = 0x7F227684u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F227684:
    ctx->pc = 0x7F227684u;
    ctx->downcount -= 5;
    // 7F227684: lwz     r4, 840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(840);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F227688:
    ctx->pc = 0x7F227688u;
    // 7F227688: li      r5, 384
    ctx->gpr[5] = (u32)(s32)(384);

label_7F22768C:
    ctx->pc = 0x7F22768Cu;
    // 7F22768C: lwz     r3, 196(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F227690:
    ctx->pc = 0x7F227690u;
    // 7F227690: lwz     r4, 192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F227694:
    ctx->pc = 0x7F227694u;
    // 7F227694: bl      0x8000519C
    {
            ctx->lr = 0x7F227698u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F227698:
    ctx->pc = 0x7F227698u;
    ctx->downcount -= 6;
    // 7F227698: lwz     r3, 844(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(844);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F22769C:
    ctx->pc = 0x7F22769Cu;
    // 7F22769C: li      r5, 384
    ctx->gpr[5] = (u32)(s32)(384);

label_7F2276A0:
    ctx->pc = 0x7F2276A0u;
    // 7F2276A0: lwz     r4, 840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(840);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2276A4:
    ctx->pc = 0x7F2276A4u;
    // 7F2276A4: lwz     r3, 188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2276A8:
    ctx->pc = 0x7F2276A8u;
    // 7F2276A8: lwz     r4, 184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2276AC:
    ctx->pc = 0x7F2276ACu;
    // 7F2276AC: bl      0x8000519C
    {
            ctx->lr = 0x7F2276B0u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F2276B0:
    ctx->pc = 0x7F2276B0u;
    ctx->downcount -= 5;
    // 7F2276B0: lwz     r4, 844(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(844);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2276B4:
    ctx->pc = 0x7F2276B4u;
    // 7F2276B4: li      r5, 288
    ctx->gpr[5] = (u32)(s32)(288);

label_7F2276B8:
    ctx->pc = 0x7F2276B8u;
    // 7F2276B8: lwz     r3, 196(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2276BC:
    ctx->pc = 0x7F2276BCu;
    // 7F2276BC: lwz     r4, 192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2276C0:
    ctx->pc = 0x7F2276C0u;
    // 7F2276C0: bl      0x8000519C
    {
            ctx->lr = 0x7F2276C4u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F2276C4:
    ctx->pc = 0x7F2276C4u;
    ctx->downcount -= 4;
    // 7F2276C4: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F2276C8:
    ctx->pc = 0x7F2276C8u;
    // 7F2276C8: addi    r4, r31, 432
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(432);

label_7F2276CC:
    ctx->pc = 0x7F2276CCu;
    // 7F2276CC: li      r5, 384
    ctx->gpr[5] = (u32)(s32)(384);

label_7F2276D0:
    ctx->pc = 0x7F2276D0u;
    // 7F2276D0: bl      0x8000519C
    {
            ctx->lr = 0x7F2276D4u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F2276D4:
    ctx->pc = 0x7F2276D4u;
    ctx->downcount -= 16;
    // 7F2276D4: lmw     r23, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2276D8:
    ctx->pc = 0x7F2276D8u;
    // 7F2276D8: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2276DC:
    ctx->pc = 0x7F2276DCu;
    // 7F2276DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2276E0:
    ctx->pc = 0x7F2276E0u;
    // 7F2276E0: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F2276E4:
    ctx->pc = 0x7F2276E4u;
    // 7F2276E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F2276E8:
    ctx->pc = 0x7F2276E8u;
    ctx->downcount -= 19;
    // 7F2276E8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2276EC:
    ctx->pc = 0x7F2276ECu;
    // 7F2276EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2276F0:
    ctx->pc = 0x7F2276F0u;
    // 7F2276F0: lis     r5, 189
    ctx->gpr[5] = ((u32)(s32)(189) << 16);

label_7F2276F4:
    ctx->pc = 0x7F2276F4u;
    // 7F2276F4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2276F8:
    ctx->pc = 0x7F2276F8u;
    // 7F2276F8: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2276FC:
    ctx->pc = 0x7F2276FCu;
    // 7F2276FC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F227700:
    ctx->pc = 0x7F227700u;
    // 7F227700: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F227704:
    ctx->pc = 0x7F227704u;
    // 7F227704: addi    r3, r5, -26373
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-26373);

label_7F227708:
    ctx->pc = 0x7F227708u;
    // 7F227708: bl      0x7F3B6420
    {
            ctx->lr = 0x7F22770Cu;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F22770C:
    ctx->pc = 0x7F22770Cu;
    ctx->downcount -= 2;
    // 7F22770C: or.   r28, r3, r3
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

label_7F227710:
    ctx->pc = 0x7F227710u;
    // 7F227710: bc    4, 2, 0x7F22771C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F22771C;
        }
    }

label_7F227714:
    ctx->pc = 0x7F227714u;
    ctx->downcount -= 2;
    // 7F227714: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F227718:
    ctx->pc = 0x7F227718u;
    // 7F227718: b       0x7F22781C
    {
            goto label_7F22781C;
    }

label_7F22771C:
    ctx->pc = 0x7F22771Cu;
    ctx->downcount -= 6;
    // 7F22771C: lis     r3, 10
    ctx->gpr[3] = ((u32)(s32)(10) << 16);

label_7F227720:
    ctx->pc = 0x7F227720u;
    // 7F227720: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F227724:
    ctx->pc = 0x7F227724u;
    // 7F227724: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F227728:
    ctx->pc = 0x7F227728u;
    // 7F227728: li      r5, 24
    ctx->gpr[5] = (u32)(s32)(24);

label_7F22772C:
    ctx->pc = 0x7F22772Cu;
    // 7F22772C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F227730:
    ctx->pc = 0x7F227730u;
    // 7F227730: bl      0x7F3C2408
    {
            ctx->lr = 0x7F227734u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F227734:
    ctx->pc = 0x7F227734u;
    ctx->downcount -= 3;
    // 7F227734: or.   r29, r3, r3
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

label_7F227738:
    ctx->pc = 0x7F227738u;
    // 7F227738: stw     r29, 840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(840);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F22773C:
    ctx->pc = 0x7F22773Cu;
    // 7F22773C: bc    4, 2, 0x7F227748
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F227748;
        }
    }

label_7F227740:
    ctx->pc = 0x7F227740u;
    ctx->downcount -= 2;
    // 7F227740: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F227744:
    ctx->pc = 0x7F227744u;
    // 7F227744: b       0x7F22781C
    {
            goto label_7F22781C;
    }

label_7F227748:
    ctx->pc = 0x7F227748u;
    ctx->downcount -= 2;
    // 7F227748: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F22774C:
    ctx->pc = 0x7F22774Cu;
    // 7F22774C: bl      0x7F3C2534
    {
            ctx->lr = 0x7F227750u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F227750:
    ctx->pc = 0x7F227750u;
    ctx->downcount -= 10;
    // 7F227750: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F227754:
    ctx->pc = 0x7F227754u;
    // 7F227754: lis     r3, 131
    ctx->gpr[3] = ((u32)(s32)(131) << 16);

label_7F227758:
    ctx->pc = 0x7F227758u;
    // 7F227758: stw     r0, 204(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F22775C:
    ctx->pc = 0x7F22775Cu;
    // 7F22775C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F227760:
    ctx->pc = 0x7F227760u;
    // 7F227760: addi    r3, r3, 32420
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32420);

label_7F227764:
    ctx->pc = 0x7F227764u;
    // 7F227764: stw     r0, 200(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227768:
    ctx->pc = 0x7F227768u;
    // 7F227768: lwz     r0, 164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F22776C:
    ctx->pc = 0x7F22776Cu;
    // 7F22776C: ori     r0, r0, 0xE000
    ctx->gpr[0] = ctx->gpr[0] | 0xE000u;

label_7F227770:
    ctx->pc = 0x7F227770u;
    // 7F227770: stw     r0, 164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227774:
    ctx->pc = 0x7F227774u;
    // 7F227774: bl      0x7F3B6420
    {
            ctx->lr = 0x7F227778u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F227778:
    ctx->pc = 0x7F227778u;
    ctx->downcount -= 2;
    // 7F227778: or.   r27, r3, r3
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

label_7F22777C:
    ctx->pc = 0x7F22777Cu;
    // 7F22777C: bc    4, 2, 0x7F227788
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F227788;
        }
    }

label_7F227780:
    ctx->pc = 0x7F227780u;
    ctx->downcount -= 2;
    // 7F227780: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F227784:
    ctx->pc = 0x7F227784u;
    // 7F227784: b       0x7F22781C
    {
            goto label_7F22781C;
    }

label_7F227788:
    ctx->pc = 0x7F227788u;
    ctx->downcount -= 6;
    // 7F227788: lis     r3, 91
    ctx->gpr[3] = ((u32)(s32)(91) << 16);

label_7F22778C:
    ctx->pc = 0x7F22778Cu;
    // 7F22778C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F227790:
    ctx->pc = 0x7F227790u;
    // 7F227790: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F227794:
    ctx->pc = 0x7F227794u;
    // 7F227794: li      r5, 24
    ctx->gpr[5] = (u32)(s32)(24);

label_7F227798:
    ctx->pc = 0x7F227798u;
    // 7F227798: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F22779C:
    ctx->pc = 0x7F22779Cu;
    // 7F22779C: bl      0x7F3C2408
    {
            ctx->lr = 0x7F2277A0u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F2277A0:
    ctx->pc = 0x7F2277A0u;
    ctx->downcount -= 3;
    // 7F2277A0: or.   r29, r3, r3
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

label_7F2277A4:
    ctx->pc = 0x7F2277A4u;
    // 7F2277A4: stw     r29, 844(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(844);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F2277A8:
    ctx->pc = 0x7F2277A8u;
    // 7F2277A8: bc    4, 2, 0x7F2277B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2277B4;
        }
    }

label_7F2277AC:
    ctx->pc = 0x7F2277ACu;
    ctx->downcount -= 2;
    // 7F2277AC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2277B0:
    ctx->pc = 0x7F2277B0u;
    // 7F2277B0: b       0x7F22781C
    {
            goto label_7F22781C;
    }

label_7F2277B4:
    ctx->pc = 0x7F2277B4u;
    ctx->downcount -= 2;
    // 7F2277B4: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F2277B8:
    ctx->pc = 0x7F2277B8u;
    // 7F2277B8: bl      0x7F3C2534
    {
            ctx->lr = 0x7F2277BCu;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F2277BC:
    ctx->pc = 0x7F2277BCu;
    ctx->downcount -= 13;
    // 7F2277BC: li      r0, 68
    ctx->gpr[0] = (u32)(s32)(68);

label_7F2277C0:
    ctx->pc = 0x7F2277C0u;
    // 7F2277C0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2277C4:
    ctx->pc = 0x7F2277C4u;
    // 7F2277C4: stw     r0, 204(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2277C8:
    ctx->pc = 0x7F2277C8u;
    // 7F2277C8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2277CC:
    ctx->pc = 0x7F2277CCu;
    // 7F2277CC: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2277D0:
    ctx->pc = 0x7F2277D0u;
    // 7F2277D0: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F2277D4:
    ctx->pc = 0x7F2277D4u;
    // 7F2277D4: stw     r6, 200(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2277D8:
    ctx->pc = 0x7F2277D8u;
    // 7F2277D8: lwz     r0, 164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2277DC:
    ctx->pc = 0x7F2277DCu;
    // 7F2277DC: ori     r0, r0, 0xE000
    ctx->gpr[0] = ctx->gpr[0] | 0xE000u;

label_7F2277E0:
    ctx->pc = 0x7F2277E0u;
    // 7F2277E0: stw     r0, 164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2277E4:
    ctx->pc = 0x7F2277E4u;
    // 7F2277E4: stw     r6, 852(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(852);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2277E8:
    ctx->pc = 0x7F2277E8u;
    // 7F2277E8: stw     r31, 848(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(848);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2277EC:
    ctx->pc = 0x7F2277ECu;
    // 7F2277EC: bl      0x7F2274FC
    {
            ctx->lr = 0x7F2277F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2274FCu;
                return;
            }
            goto label_7F2274FC;
    }

label_7F2277F0:
    ctx->pc = 0x7F2277F0u;
    ctx->downcount -= 5;
    // 7F2277F0: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F2277F4:
    ctx->pc = 0x7F2277F4u;
    // 7F2277F4: lwz     r3, 840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(840);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2277F8:
    ctx->pc = 0x7F2277F8u;
    // 7F2277F8: addi    r4, r4, 18308
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18308);

label_7F2277FC:
    ctx->pc = 0x7F2277FCu;
    // 7F2277FC: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F227800:
    ctx->pc = 0x7F227800u;
    // 7F227800: bl      0x7F227480
    {
            ctx->lr = 0x7F227804u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F227480u;
                return;
            }
            goto label_7F227480;
    }

label_7F227804:
    ctx->pc = 0x7F227804u;
    ctx->downcount -= 5;
    // 7F227804: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F227808:
    ctx->pc = 0x7F227808u;
    // 7F227808: lwz     r3, 844(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(844);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F22780C:
    ctx->pc = 0x7F22780Cu;
    // 7F22780C: addi    r4, r4, 18308
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18308);

label_7F227810:
    ctx->pc = 0x7F227810u;
    // 7F227810: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F227814:
    ctx->pc = 0x7F227814u;
    // 7F227814: bl      0x7F227480
    {
            ctx->lr = 0x7F227818u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F227480u;
                return;
            }
            goto label_7F227480;
    }

label_7F227818:
    ctx->pc = 0x7F227818u;
    ctx->downcount -= 1;
    // 7F227818: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F22781C:
    ctx->pc = 0x7F22781Cu;
    ctx->downcount -= 16;
    // 7F22781C: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F227820:
    ctx->pc = 0x7F227820u;
    // 7F227820: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227824:
    ctx->pc = 0x7F227824u;
    // 7F227824: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F227828:
    ctx->pc = 0x7F227828u;
    // 7F227828: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F22782C:
    ctx->pc = 0x7F22782Cu;
    // 7F22782C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F227830:
    ctx->pc = 0x7F227830u;
    ctx->downcount -= 20;
    // 7F227830: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F227834:
    ctx->pc = 0x7F227834u;
    // 7F227834: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F227838:
    ctx->pc = 0x7F227838u;
    // 7F227838: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F22783C:
    ctx->pc = 0x7F22783Cu;
    // 7F22783C: li      r5, 856
    ctx->gpr[5] = (u32)(s32)(856);

label_7F227840:
    ctx->pc = 0x7F227840u;
    // 7F227840: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227844:
    ctx->pc = 0x7F227844u;
    // 7F227844: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F227848:
    ctx->pc = 0x7F227848u;
    // 7F227848: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F22784C:
    ctx->pc = 0x7F22784Cu;
    // 7F22784C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F227850:
    ctx->pc = 0x7F227850u;
    // 7F227850: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F227854:
    ctx->pc = 0x7F227854u;
    // 7F227854: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F227858u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F227858:
    ctx->pc = 0x7F227858u;
    ctx->downcount -= 2;
    // 7F227858: or.   r31, r3, r3
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

label_7F22785C:
    ctx->pc = 0x7F22785Cu;
    // 7F22785C: bc    12, 2, 0x7F2278C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2278C0;
        }
    }

label_7F227860:
    ctx->pc = 0x7F227860u;
    ctx->downcount -= 5;
    // 7F227860: lis     r4, 32546
    ctx->gpr[4] = ((u32)(s32)(32546) << 16);

label_7F227864:
    ctx->pc = 0x7F227864u;
    // 7F227864: lis     r5, 32546
    ctx->gpr[5] = ((u32)(s32)(32546) << 16);

label_7F227868:
    ctx->pc = 0x7F227868u;
    // 7F227868: addi    r4, r4, 28016
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28016);

label_7F22786C:
    ctx->pc = 0x7F22786Cu;
    // 7F22786C: addi    r5, r5, 29876
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(29876);

label_7F227870:
    ctx->pc = 0x7F227870u;
    // 7F227870: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F227874u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F227874:
    ctx->pc = 0x7F227874u;
    ctx->downcount -= 13;
    // 7F227874: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227878:
    ctx->pc = 0x7F227878u;
    // 7F227878: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F22787C:
    ctx->pc = 0x7F22787Cu;
    // 7F22787C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F227880:
    ctx->pc = 0x7F227880u;
    // 7F227880: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F227884:
    ctx->pc = 0x7F227884u;
    // 7F227884: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F227888:
    ctx->pc = 0x7F227888u;
    // 7F227888: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F22788C:
    ctx->pc = 0x7F22788Cu;
    // 7F22788C: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F227890:
    ctx->pc = 0x7F227890u;
    // 7F227890: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F227894:
    ctx->pc = 0x7F227894u;
    // 7F227894: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F227898:
    ctx->pc = 0x7F227898u;
    // 7F227898: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F22789C:
    ctx->pc = 0x7F22789Cu;
    // 7F22789C: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2278A0:
    ctx->pc = 0x7F2278A0u;
    // 7F2278A0: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2278A4:
    ctx->pc = 0x7F2278A4u;
    // 7F2278A4: bl      0x7F2276E8
    {
            ctx->lr = 0x7F2278A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2276E8u;
                return;
            }
            goto label_7F2276E8;
    }

label_7F2278A8:
    ctx->pc = 0x7F2278A8u;
    ctx->downcount -= 2;
    // 7F2278A8: cmpwi   r3, 0
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

label_7F2278AC:
    ctx->pc = 0x7F2278ACu;
    // 7F2278AC: bc    4, 0, 0x7F2278C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2278C0;
        }
    }

label_7F2278B0:
    ctx->pc = 0x7F2278B0u;
    ctx->downcount -= 2;
    // 7F2278B0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2278B4:
    ctx->pc = 0x7F2278B4u;
    // 7F2278B4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2278B8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2278B8:
    ctx->pc = 0x7F2278B8u;
    ctx->downcount -= 2;
    // 7F2278B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2278BC:
    ctx->pc = 0x7F2278BCu;
    // 7F2278BC: b       0x7F2278C4
    {
            goto label_7F2278C4;
    }

label_7F2278C0:
    ctx->pc = 0x7F2278C0u;
    ctx->downcount -= 1;
    // 7F2278C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2278C4:
    ctx->pc = 0x7F2278C4u;
    ctx->downcount -= 16;
    // 7F2278C4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2278C8:
    ctx->pc = 0x7F2278C8u;
    // 7F2278C8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2278CC:
    ctx->pc = 0x7F2278CCu;
    // 7F2278CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2278D0:
    ctx->pc = 0x7F2278D0u;
    // 7F2278D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2278D4:
    ctx->pc = 0x7F2278D4u;
    // 7F2278D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F2278D8:
    ctx->pc = 0x7F2278D8u;
    ctx->downcount -= 24;
    // 7F2278D8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2278DC:
    ctx->pc = 0x7F2278DCu;
    // 7F2278DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2278E0:
    ctx->pc = 0x7F2278E0u;
    // 7F2278E0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2278E4:
    ctx->pc = 0x7F2278E4u;
    // 7F2278E4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2278E8:
    ctx->pc = 0x7F2278E8u;
    // 7F2278E8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2278EC:
    ctx->pc = 0x7F2278ECu;
    // 7F2278EC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F2278F0:
    ctx->pc = 0x7F2278F0u;
    // 7F2278F0: addi    r4, r3, 18308
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18308);

label_7F2278F4:
    ctx->pc = 0x7F2278F4u;
    // 7F2278F4: lwz     r5, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2278F8:
    ctx->pc = 0x7F2278F8u;
    // 7F2278F8: lwz     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2278FC:
    ctx->pc = 0x7F2278FCu;
    // 7F2278FC: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F227900:
    ctx->pc = 0x7F227900u;
    // 7F227900: stw     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227904:
    ctx->pc = 0x7F227904u;
    // 7F227904: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F227908:
    ctx->pc = 0x7F227908u;
    // 7F227908: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F22790C:
    ctx->pc = 0x7F22790Cu;
    // 7F22790C: bl      0x7F227A00
    {
            ctx->lr = 0x7F227910u;
            goto label_7F227A00;
    }

label_7F227910:
    ctx->pc = 0x7F227910u;
    ctx->downcount -= 12;
    // 7F227910: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F227914:
    ctx->pc = 0x7F227914u;
    // 7F227914: lwz     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227918:
    ctx->pc = 0x7F227918u;
    // 7F227918: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F22791C:
    ctx->pc = 0x7F22791Cu;
    // 7F22791C: stw     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227920:
    ctx->pc = 0x7F227920u;
    // 7F227920: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F227924:
    ctx->pc = 0x7F227924u;
    // 7F227924: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F227928:
    ctx->pc = 0x7F227928u;
    // 7F227928: lwz     r0, 180(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F22792C:
    ctx->pc = 0x7F22792Cu;
    // 7F22792C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F227930:
    ctx->pc = 0x7F227930u;
    // 7F227930: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F227934:
    ctx->pc = 0x7F227934u;
    // 7F227934: lwz     r30, 184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(184);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F227938:
    ctx->pc = 0x7F227938u;
    // 7F227938: lwz     r29, 192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(192);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F22793C:
    ctx->pc = 0x7F22793Cu;
    // 7F22793C: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F227940u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F227940:
    ctx->pc = 0x7F227940u;
    ctx->downcount -= 5;
    // 7F227940: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F227944:
    ctx->pc = 0x7F227944u;
    // 7F227944: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F227948:
    ctx->pc = 0x7F227948u;
    // 7F227948: addi    r3, r3, 8872
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8872);

label_7F22794C:
    ctx->pc = 0x7F22794Cu;
    // 7F22794C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F227950:
    ctx->pc = 0x7F227950u;
    // 7F227950: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F227954u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F227954:
    ctx->pc = 0x7F227954u;
    ctx->downcount -= 3;
    // 7F227954: lha     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F227958:
    ctx->pc = 0x7F227958u;
    // 7F227958: cmpwi   r0, 2
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

label_7F22795C:
    ctx->pc = 0x7F22795Cu;
    // 7F22795C: bc    12, 2, 0x7F227968
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F227968;
        }
    }

label_7F227960:
    ctx->pc = 0x7F227960u;
    ctx->downcount -= 2;
    // 7F227960: cmpwi   r0, 3
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

label_7F227964:
    ctx->pc = 0x7F227964u;
    // 7F227964: bc    4, 2, 0x7F22798C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F22798C;
        }
    }

label_7F227968:
    ctx->pc = 0x7F227968u;
    ctx->downcount -= 9;
    // 7F227968: lha     r0, 58(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(58);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F22796C:
    ctx->pc = 0x7F22796Cu;
    // 7F22796C: sth     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F227970:
    ctx->pc = 0x7F227970u;
    // 7F227970: lha     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F227974:
    ctx->pc = 0x7F227974u;
    // 7F227974: sth     r0, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F227978:
    ctx->pc = 0x7F227978u;
    // 7F227978: lha     r0, 58(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(58);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F22797C:
    ctx->pc = 0x7F22797Cu;
    // 7F22797C: sth     r0, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F227980:
    ctx->pc = 0x7F227980u;
    // 7F227980: lha     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F227984:
    ctx->pc = 0x7F227984u;
    // 7F227984: sth     r0, 40(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F227988:
    ctx->pc = 0x7F227988u;
    // 7F227988: b       0x7F2279BC
    {
            goto label_7F2279BC;
    }

label_7F22798C:
    ctx->pc = 0x7F22798Cu;
    ctx->downcount -= 2;
    // 7F22798C: cmpwi   r0, 4
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

label_7F227990:
    ctx->pc = 0x7F227990u;
    // 7F227990: bc    4, 2, 0x7F2279BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2279BC;
        }
    }

label_7F227994:
    ctx->pc = 0x7F227994u;
    ctx->downcount -= 2;
    // 7F227994: cmpwi   r0, 5
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

label_7F227998:
    ctx->pc = 0x7F227998u;
    // 7F227998: bc    4, 2, 0x7F2279BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2279BC;
        }
    }

label_7F22799C:
    ctx->pc = 0x7F22799Cu;
    ctx->downcount -= 8;
    // 7F22799C: lha     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2279A0:
    ctx->pc = 0x7F2279A0u;
    // 7F2279A0: sth     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2279A4:
    ctx->pc = 0x7F2279A4u;
    // 7F2279A4: lha     r0, 66(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(66);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2279A8:
    ctx->pc = 0x7F2279A8u;
    // 7F2279A8: sth     r0, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2279AC:
    ctx->pc = 0x7F2279ACu;
    // 7F2279AC: lha     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2279B0:
    ctx->pc = 0x7F2279B0u;
    // 7F2279B0: sth     r0, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2279B4:
    ctx->pc = 0x7F2279B4u;
    // 7F2279B4: lha     r0, 66(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(66);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2279B8:
    ctx->pc = 0x7F2279B8u;
    // 7F2279B8: sth     r0, 40(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2279BC:
    ctx->pc = 0x7F2279BCu;
    ctx->downcount -= 6;
    // 7F2279BC: lha     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2279C0:
    ctx->pc = 0x7F2279C0u;
    // 7F2279C0: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2279C4:
    ctx->pc = 0x7F2279C4u;
    // 7F2279C4: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F2279C8:
    ctx->pc = 0x7F2279C8u;
    // 7F2279C8: sth     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2279CC:
    ctx->pc = 0x7F2279CCu;
    // 7F2279CC: cmpwi   r0, 8
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

label_7F2279D0:
    ctx->pc = 0x7F2279D0u;
    // 7F2279D0: bc    12, 0, 0x7F2279EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2279EC;
        }
    }

label_7F2279D4:
    ctx->pc = 0x7F2279D4u;
    ctx->downcount -= 6;
    // 7F2279D4: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2279D8:
    ctx->pc = 0x7F2279D8u;
    // 7F2279D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2279DC:
    ctx->pc = 0x7F2279DCu;
    // 7F2279DC: lwz     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2279E0:
    ctx->pc = 0x7F2279E0u;
    // 7F2279E0: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F2279E4:
    ctx->pc = 0x7F2279E4u;
    // 7F2279E4: stw     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2279E8:
    ctx->pc = 0x7F2279E8u;
    // 7F2279E8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2279ECu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2279EC:
    ctx->pc = 0x7F2279ECu;
    ctx->downcount -= 16;
    // 7F2279EC: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2279F0:
    ctx->pc = 0x7F2279F0u;
    // 7F2279F0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2279F4:
    ctx->pc = 0x7F2279F4u;
    // 7F2279F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2279F8:
    ctx->pc = 0x7F2279F8u;
    // 7F2279F8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2279FC:
    ctx->pc = 0x7F2279FCu;
    // 7F2279FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F227A00:
    ctx->pc = 0x7F227A00u;
    ctx->downcount -= 7;
    // 7F227A00: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F227A04:
    ctx->pc = 0x7F227A04u;
    // 7F227A04: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F227A08:
    ctx->pc = 0x7F227A08u;
    // 7F227A08: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227A0C:
    ctx->pc = 0x7F227A0Cu;
    // 7F227A0C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F227A10:
    ctx->pc = 0x7F227A10u;
    // 7F227A10: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F227A14:
    ctx->pc = 0x7F227A14u;
    // 7F227A14: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F227A18:
    ctx->pc = 0x7F227A18u;
    // 7F227A18: bl      0x7F01B234
    {
            ctx->lr = 0x7F227A1Cu;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F227A1C:
    ctx->pc = 0x7F227A1Cu;
    ctx->downcount -= 7;
    // 7F227A1C: stw     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F227A20:
    ctx->pc = 0x7F227A20u;
    // 7F227A20: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227A24:
    ctx->pc = 0x7F227A24u;
    // 7F227A24: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F227A28:
    ctx->pc = 0x7F227A28u;
    // 7F227A28: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F227A2C:
    ctx->pc = 0x7F227A2Cu;
    // 7F227A2C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F227A30:
    ctx->pc = 0x7F227A30u;
    // 7F227A30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F227A34:
    ctx->pc = 0x7F227A34u;
    ctx->downcount -= 6;
    // 7F227A34: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F227A38:
    ctx->pc = 0x7F227A38u;
    // 7F227A38: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F227A3C:
    ctx->pc = 0x7F227A3Cu;
    // 7F227A3C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227A40:
    ctx->pc = 0x7F227A40u;
    // 7F227A40: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F227A44:
    ctx->pc = 0x7F227A44u;
    // 7F227A44: cmplwi  r3, 0x0000
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

label_7F227A48:
    ctx->pc = 0x7F227A48u;
    // 7F227A48: bc    12, 2, 0x7F227A50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F227A50;
        }
    }

label_7F227A4C:
    ctx->pc = 0x7F227A4Cu;
    ctx->downcount -= 1;
    // 7F227A4C: bl      0x7F3C2440
    {
            ctx->lr = 0x7F227A50u;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F227A50:
    ctx->pc = 0x7F227A50u;
    ctx->downcount -= 5;
    // 7F227A50: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227A54:
    ctx->pc = 0x7F227A54u;
    // 7F227A54: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F227A58:
    ctx->pc = 0x7F227A58u;
    // 7F227A58: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F227A5C:
    ctx->pc = 0x7F227A5Cu;
    // 7F227A5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F227A60:
    ctx->pc = 0x7F227A60u;
    ctx->downcount -= 21;
    // 7F227A60: stwu     r1, -176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-176);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F227A64:
    ctx->pc = 0x7F227A64u;
    // 7F227A64: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F227A68:
    ctx->pc = 0x7F227A68u;
    // 7F227A68: stw     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227A6C:
    ctx->pc = 0x7F227A6Cu;
    // 7F227A6C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F227A70:
    ctx->pc = 0x7F227A70u;
    // 7F227A70: stmw     r29, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F227A74:
    ctx->pc = 0x7F227A74u;
    // 7F227A74: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F227A78:
    ctx->pc = 0x7F227A78u;
    // 7F227A78: sth     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F227A7C:
    ctx->pc = 0x7F227A7Cu;
    // 7F227A7C: sth     r0, 70(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(70);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F227A80:
    ctx->pc = 0x7F227A80u;
    // 7F227A80: lwz     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227A84:
    ctx->pc = 0x7F227A84u;
    // 7F227A84: cmplwi  r0, 0x0000
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

label_7F227A88:
    ctx->pc = 0x7F227A88u;
    // 7F227A88: bc    4, 2, 0x7F227A94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F227A94;
        }
    }

label_7F227A8C:
    ctx->pc = 0x7F227A8Cu;
    ctx->downcount -= 2;
    // 7F227A8C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F227A90:
    ctx->pc = 0x7F227A90u;
    // 7F227A90: b       0x7F227E04
    {
            goto label_7F227E04;
    }

label_7F227A94:
    ctx->pc = 0x7F227A94u;
    ctx->downcount -= 6;
    // 7F227A94: lis     r3, 11
    ctx->gpr[3] = ((u32)(s32)(11) << 16);

label_7F227A98:
    ctx->pc = 0x7F227A98u;
    // 7F227A98: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F227A9C:
    ctx->pc = 0x7F227A9Cu;
    // 7F227A9C: addi    r3, r3, 2
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2);

label_7F227AA0:
    ctx->pc = 0x7F227AA0u;
    // 7F227AA0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F227AA4:
    ctx->pc = 0x7F227AA4u;
    // 7F227AA4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F227AA8:
    ctx->pc = 0x7F227AA8u;
    // 7F227AA8: bl      0x7F3C2408
    {
            ctx->lr = 0x7F227AACu;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F227AAC:
    ctx->pc = 0x7F227AACu;
    ctx->downcount -= 3;
    // 7F227AAC: or.   r31, r3, r3
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

label_7F227AB0:
    ctx->pc = 0x7F227AB0u;
    // 7F227AB0: stw     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F227AB4:
    ctx->pc = 0x7F227AB4u;
    // 7F227AB4: bc    4, 2, 0x7F227AC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F227AC0;
        }
    }

label_7F227AB8:
    ctx->pc = 0x7F227AB8u;
    ctx->downcount -= 2;
    // 7F227AB8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F227ABC:
    ctx->pc = 0x7F227ABCu;
    // 7F227ABC: b       0x7F227E04
    {
            goto label_7F227E04;
    }

label_7F227AC0:
    ctx->pc = 0x7F227AC0u;
    ctx->downcount -= 3;
    // 7F227AC0: lis     r3, 142
    ctx->gpr[3] = ((u32)(s32)(142) << 16);

label_7F227AC4:
    ctx->pc = 0x7F227AC4u;
    // 7F227AC4: addi    r3, r3, -5117
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5117);

label_7F227AC8:
    ctx->pc = 0x7F227AC8u;
    // 7F227AC8: bl      0x7F3B6420
    {
            ctx->lr = 0x7F227ACCu;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F227ACC:
    ctx->pc = 0x7F227ACCu;
    ctx->downcount -= 2;
    // 7F227ACC: or.   r29, r3, r3
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

label_7F227AD0:
    ctx->pc = 0x7F227AD0u;
    // 7F227AD0: bc    4, 2, 0x7F227ADC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F227ADC;
        }
    }

label_7F227AD4:
    ctx->pc = 0x7F227AD4u;
    ctx->downcount -= 2;
    // 7F227AD4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F227AD8:
    ctx->pc = 0x7F227AD8u;
    // 7F227AD8: b       0x7F227E04
    {
            goto label_7F227E04;
    }

label_7F227ADC:
    ctx->pc = 0x7F227ADCu;
    ctx->downcount -= 3;
    // 7F227ADC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F227AE0:
    ctx->pc = 0x7F227AE0u;
    // 7F227AE0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F227AE4:
    ctx->pc = 0x7F227AE4u;
    // 7F227AE4: bl      0x7F3C2534
    {
            ctx->lr = 0x7F227AE8u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F227AE8:
    ctx->pc = 0x7F227AE8u;
    ctx->downcount -= 18;
    // 7F227AE8: li      r0, 68
    ctx->gpr[0] = (u32)(s32)(68);

label_7F227AEC:
    ctx->pc = 0x7F227AECu;
    // 7F227AEC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F227AF0:
    ctx->pc = 0x7F227AF0u;
    // 7F227AF0: stw     r0, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227AF4:
    ctx->pc = 0x7F227AF4u;
    // 7F227AF4: li      r0, 15
    ctx->gpr[0] = (u32)(s32)(15);

label_7F227AF8:
    ctx->pc = 0x7F227AF8u;
    // 7F227AF8: li      r10, 1
    ctx->gpr[10] = (u32)(s32)(1);

label_7F227AFC:
    ctx->pc = 0x7F227AFCu;
    // 7F227AFC: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F227B00:
    ctx->pc = 0x7F227B00u;
    // 7F227B00: stw     r3, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F227B04:
    ctx->pc = 0x7F227B04u;
    // 7F227B04: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_7F227B08:
    ctx->pc = 0x7F227B08u;
    // 7F227B08: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F227B0C:
    ctx->pc = 0x7F227B0Cu;
    // 7F227B0C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F227B10:
    ctx->pc = 0x7F227B10u;
    // 7F227B10: lwz     r8, 84(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(84);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F227B14:
    ctx->pc = 0x7F227B14u;
    // 7F227B14: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F227B18:
    ctx->pc = 0x7F227B18u;
    // 7F227B18: lwz     r9, 80(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(80);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F227B1C:
    ctx->pc = 0x7F227B1Cu;
    // 7F227B1C: rlwinm r8, r8, 6, 0, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[8], 6u) & 0xFFFFFFFFu;
    }

label_7F227B20:
    ctx->pc = 0x7F227B20u;
    // 7F227B20: rlwimi r8, r9, 6, 0, 25
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[9], 6u);
        ctx->gpr[8] = (ctx->gpr[8] & ~0xFFFFFFC0u) | (rot & 0xFFFFFFC0u);
    }

label_7F227B24:
    ctx->pc = 0x7F227B24u;
    // 7F227B24: and   r0, r8, r0
    {
        ctx->gpr[0] = ctx->gpr[8] & ctx->gpr[0];
    }

label_7F227B28:
    ctx->pc = 0x7F227B28u;
    // 7F227B28: slw   r29, r10, r0
    {
        u32 sh = ctx->gpr[0] & 0x3Fu;
        ctx->gpr[29] = sh > 31 ? 0u : (ctx->gpr[10] << sh);
    }

label_7F227B2C:
    ctx->pc = 0x7F227B2Cu;
    // 7F227B2C: bl      0x7F3B69F4
    {
            ctx->lr = 0x7F227B30u;
            ctx->pc = 0x7F3B69F4u;
            return;
    }

label_7F227B30:
    ctx->pc = 0x7F227B30u;
    ctx->downcount -= 266;
    // 7F227B30: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227B34:
    ctx->pc = 0x7F227B34u;
    // 7F227B34: lis     r5, 17200
    ctx->gpr[5] = ((u32)(s32)(17200) << 16);

label_7F227B38:
    ctx->pc = 0x7F227B38u;
    // 7F227B38: xoris   r4, r29, 0x8000
    ctx->gpr[4] = ctx->gpr[29] ^ (0x8000u << 16);

label_7F227B3C:
    ctx->pc = 0x7F227B3Cu;
    // 7F227B3C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F227B40:
    ctx->pc = 0x7F227B40u;
    // 7F227B40: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F227B44:
    ctx->pc = 0x7F227B44u;
    // 7F227B44: lfd     f0, 17800(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F227B44u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17800);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F227B48:
    ctx->pc = 0x7F227B48u;
    // 7F227B48: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227B4C:
    ctx->pc = 0x7F227B4Cu;
    // 7F227B4C: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F227B50:
    ctx->pc = 0x7F227B50u;
    // 7F227B50: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F227B54:
    ctx->pc = 0x7F227B54u;
    // 7F227B54: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F227B58:
    ctx->pc = 0x7F227B58u;
    // 7F227B58: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F227B5C:
    ctx->pc = 0x7F227B5Cu;
    // 7F227B5C: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F227B60:
    ctx->pc = 0x7F227B60u;
    // 7F227B60: divw   r0, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F227B64:
    ctx->pc = 0x7F227B64u;
    // 7F227B64: lfd     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F227B64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F227B68:
    ctx->pc = 0x7F227B68u;
    // 7F227B68: stw     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F227B6C:
    ctx->pc = 0x7F227B6Cu;
    // 7F227B6C: fsubs   f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F227B6Cu)) return;
    ppc_fsubs(ctx, 2, 1, 0);

label_7F227B70:
    ctx->pc = 0x7F227B70u;
    // 7F227B70: lfs     f1, 17812(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F227B70u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(17812);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F227B74:
    ctx->pc = 0x7F227B74u;
    // 7F227B74: stw     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F227B78:
    ctx->pc = 0x7F227B78u;
    // 7F227B78: lfd     f3, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F227B78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F227B7C:
    ctx->pc = 0x7F227B7Cu;
    // 7F227B7C: fadds   f4, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F227B7Cu)) return;
    ppc_fadds(ctx, 4, 1, 2);

label_7F227B80:
    ctx->pc = 0x7F227B80u;
    // 7F227B80: lfs     f2, 17808(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F227B80u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(17808);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F227B84:
    ctx->pc = 0x7F227B84u;
    // 7F227B84: fsubs   f3, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F227B84u)) return;
    ppc_fsubs(ctx, 3, 3, 0);

label_7F227B88:
    ctx->pc = 0x7F227B88u;
    // 7F227B88: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227B8C:
    ctx->pc = 0x7F227B8Cu;
    // 7F227B8C: stw     r5, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F227B90:
    ctx->pc = 0x7F227B90u;
    // 7F227B90: fdivs   f3, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x7F227B90u)) return;
    ppc_fdivs(ctx, 3, 4, 3);

label_7F227B94:
    ctx->pc = 0x7F227B94u;
    // 7F227B94: stw     r4, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F227B98:
    ctx->pc = 0x7F227B98u;
    // 7F227B98: stw     r5, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F227B9C:
    ctx->pc = 0x7F227B9Cu;
    // 7F227B9C: stw     r5, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F227BA0:
    ctx->pc = 0x7F227BA0u;
    // 7F227BA0: stw     r4, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F227BA4:
    ctx->pc = 0x7F227BA4u;
    // 7F227BA4: stw     r5, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F227BA8:
    ctx->pc = 0x7F227BA8u;
    // 7F227BA8: fmuls   f4, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F227BA8u)) return;
    ppc_fmuls(ctx, 4, 2, 3);

label_7F227BAC:
    ctx->pc = 0x7F227BACu;
    // 7F227BAC: lfd     f3, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F227BACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F227BB0:
    ctx->pc = 0x7F227BB0u;
    // 7F227BB0: fctiwz    f5, f4
    if (!ppc_fp_available_inline(ctx, 0x7F227BB0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[4], true, &result)) ctx->fpr[5] = dolrecomp_f64_from_bits(result); }

label_7F227BB4:
    ctx->pc = 0x7F227BB4u;
    // 7F227BB4: fsubs   f4, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F227BB4u)) return;
    ppc_fsubs(ctx, 4, 3, 0);

label_7F227BB8:
    ctx->pc = 0x7F227BB8u;
    // 7F227BB8: lfd     f3, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F227BB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F227BBC:
    ctx->pc = 0x7F227BBCu;
    // 7F227BBC: stfd     f5, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F227BBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[5]));
    }

label_7F227BC0:
    ctx->pc = 0x7F227BC0u;
    // 7F227BC0: fsubs   f3, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F227BC0u)) return;
    ppc_fsubs(ctx, 3, 3, 0);

label_7F227BC4:
    ctx->pc = 0x7F227BC4u;
    // 7F227BC4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227BC8:
    ctx->pc = 0x7F227BC8u;
    // 7F227BC8: sth     r0, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F227BCC:
    ctx->pc = 0x7F227BCCu;
    // 7F227BCC: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F227BD0:
    ctx->pc = 0x7F227BD0u;
    // 7F227BD0: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227BD4:
    ctx->pc = 0x7F227BD4u;
    // 7F227BD4: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F227BD8:
    ctx->pc = 0x7F227BD8u;
    // 7F227BD8: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F227BDC:
    ctx->pc = 0x7F227BDCu;
    // 7F227BDC: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227BE0:
    ctx->pc = 0x7F227BE0u;
    // 7F227BE0: lfd     f5, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F227BE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F227BE4:
    ctx->pc = 0x7F227BE4u;
    // 7F227BE4: fsubs   f5, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x7F227BE4u)) return;
    ppc_fsubs(ctx, 5, 5, 0);

label_7F227BE8:
    ctx->pc = 0x7F227BE8u;
    // 7F227BE8: fadds   f5, f1, f5
    if (!ppc_fp_available_inline(ctx, 0x7F227BE8u)) return;
    ppc_fadds(ctx, 5, 1, 5);

label_7F227BEC:
    ctx->pc = 0x7F227BECu;
    // 7F227BEC: fdivs   f4, f5, f4
    if (!ppc_fp_available_inline(ctx, 0x7F227BECu)) return;
    ppc_fdivs(ctx, 4, 5, 4);

label_7F227BF0:
    ctx->pc = 0x7F227BF0u;
    // 7F227BF0: fmuls   f4, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x7F227BF0u)) return;
    ppc_fmuls(ctx, 4, 2, 4);

label_7F227BF4:
    ctx->pc = 0x7F227BF4u;
    // 7F227BF4: fctiwz    f4, f4
    if (!ppc_fp_available_inline(ctx, 0x7F227BF4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[4], true, &result)) ctx->fpr[4] = dolrecomp_f64_from_bits(result); }

label_7F227BF8:
    ctx->pc = 0x7F227BF8u;
    // 7F227BF8: stfd     f4, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F227BF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[4]));
    }

label_7F227BFC:
    ctx->pc = 0x7F227BFCu;
    // 7F227BFC: lwz     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227C00:
    ctx->pc = 0x7F227C00u;
    // 7F227C00: sth     r0, 58(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(58);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F227C04:
    ctx->pc = 0x7F227C04u;
    // 7F227C04: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227C08:
    ctx->pc = 0x7F227C08u;
    // 7F227C08: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F227C0C:
    ctx->pc = 0x7F227C0Cu;
    // 7F227C0C: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F227C10:
    ctx->pc = 0x7F227C10u;
    // 7F227C10: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F227C14:
    ctx->pc = 0x7F227C14u;
    // 7F227C14: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F227C18:
    ctx->pc = 0x7F227C18u;
    // 7F227C18: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227C1C:
    ctx->pc = 0x7F227C1Cu;
    // 7F227C1C: lfd     f4, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F227C1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F227C20:
    ctx->pc = 0x7F227C20u;
    // 7F227C20: fsubs   f4, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F227C20u)) return;
    ppc_fsubs(ctx, 4, 4, 0);

label_7F227C24:
    ctx->pc = 0x7F227C24u;
    // 7F227C24: fadds   f4, f1, f4
    if (!ppc_fp_available_inline(ctx, 0x7F227C24u)) return;
    ppc_fadds(ctx, 4, 1, 4);

label_7F227C28:
    ctx->pc = 0x7F227C28u;
    // 7F227C28: fdivs   f3, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x7F227C28u)) return;
    ppc_fdivs(ctx, 3, 4, 3);

label_7F227C2C:
    ctx->pc = 0x7F227C2Cu;
    // 7F227C2C: fmuls   f3, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F227C2Cu)) return;
    ppc_fmuls(ctx, 3, 2, 3);

label_7F227C30:
    ctx->pc = 0x7F227C30u;
    // 7F227C30: fctiwz    f3, f3
    if (!ppc_fp_available_inline(ctx, 0x7F227C30u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[3], true, &result)) ctx->fpr[3] = dolrecomp_f64_from_bits(result); }

label_7F227C34:
    ctx->pc = 0x7F227C34u;
    // 7F227C34: stfd     f3, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F227C34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_7F227C38:
    ctx->pc = 0x7F227C38u;
    // 7F227C38: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227C3C:
    ctx->pc = 0x7F227C3Cu;
    // 7F227C3C: sth     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F227C40:
    ctx->pc = 0x7F227C40u;
    // 7F227C40: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F227C44:
    ctx->pc = 0x7F227C44u;
    // 7F227C44: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227C48:
    ctx->pc = 0x7F227C48u;
    // 7F227C48: stw     r5, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F227C4C:
    ctx->pc = 0x7F227C4Cu;
    // 7F227C4C: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F227C50:
    ctx->pc = 0x7F227C50u;
    // 7F227C50: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F227C54:
    ctx->pc = 0x7F227C54u;
    // 7F227C54: stw     r4, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F227C58:
    ctx->pc = 0x7F227C58u;
    // 7F227C58: stw     r0, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227C5C:
    ctx->pc = 0x7F227C5Cu;
    // 7F227C5C: lfd     f3, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F227C5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F227C60:
    ctx->pc = 0x7F227C60u;
    // 7F227C60: stw     r5, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F227C64:
    ctx->pc = 0x7F227C64u;
    // 7F227C64: fsubs   f4, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F227C64u)) return;
    ppc_fsubs(ctx, 4, 3, 0);

label_7F227C68:
    ctx->pc = 0x7F227C68u;
    // 7F227C68: lfd     f3, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F227C68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F227C6C:
    ctx->pc = 0x7F227C6Cu;
    // 7F227C6C: stw     r5, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F227C70:
    ctx->pc = 0x7F227C70u;
    // 7F227C70: fsubs   f4, f4, f1
    if (!ppc_fp_available_inline(ctx, 0x7F227C70u)) return;
    ppc_fsubs(ctx, 4, 4, 1);

label_7F227C74:
    ctx->pc = 0x7F227C74u;
    // 7F227C74: fsubs   f3, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F227C74u)) return;
    ppc_fsubs(ctx, 3, 3, 0);

label_7F227C78:
    ctx->pc = 0x7F227C78u;
    // 7F227C78: stw     r4, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F227C7C:
    ctx->pc = 0x7F227C7Cu;
    // 7F227C7C: stw     r5, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F227C80:
    ctx->pc = 0x7F227C80u;
    // 7F227C80: fdivs   f5, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x7F227C80u)) return;
    ppc_fdivs(ctx, 5, 4, 3);

label_7F227C84:
    ctx->pc = 0x7F227C84u;
    // 7F227C84: lfd     f4, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F227C84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F227C88:
    ctx->pc = 0x7F227C88u;
    // 7F227C88: stw     r5, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F227C8C:
    ctx->pc = 0x7F227C8Cu;
    // 7F227C8C: stw     r4, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F227C90:
    ctx->pc = 0x7F227C90u;
    // 7F227C90: stw     r5, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F227C94:
    ctx->pc = 0x7F227C94u;
    // 7F227C94: lfd     f3, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F227C94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F227C98:
    ctx->pc = 0x7F227C98u;
    // 7F227C98: fmuls   f5, f2, f5
    if (!ppc_fp_available_inline(ctx, 0x7F227C98u)) return;
    ppc_fmuls(ctx, 5, 2, 5);

label_7F227C9C:
    ctx->pc = 0x7F227C9Cu;
    // 7F227C9C: fsubs   f4, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F227C9Cu)) return;
    ppc_fsubs(ctx, 4, 4, 0);

label_7F227CA0:
    ctx->pc = 0x7F227CA0u;
    // 7F227CA0: fsubs   f3, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F227CA0u)) return;
    ppc_fsubs(ctx, 3, 3, 0);

label_7F227CA4:
    ctx->pc = 0x7F227CA4u;
    // 7F227CA4: fctiwz    f5, f5
    if (!ppc_fp_available_inline(ctx, 0x7F227CA4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[5], true, &result)) ctx->fpr[5] = dolrecomp_f64_from_bits(result); }

label_7F227CA8:
    ctx->pc = 0x7F227CA8u;
    // 7F227CA8: stfd     f5, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F227CA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[5]));
    }

label_7F227CAC:
    ctx->pc = 0x7F227CACu;
    // 7F227CAC: lwz     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227CB0:
    ctx->pc = 0x7F227CB0u;
    // 7F227CB0: sth     r0, 62(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(62);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F227CB4:
    ctx->pc = 0x7F227CB4u;
    // 7F227CB4: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227CB8:
    ctx->pc = 0x7F227CB8u;
    // 7F227CB8: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F227CBC:
    ctx->pc = 0x7F227CBCu;
    // 7F227CBC: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F227CC0:
    ctx->pc = 0x7F227CC0u;
    // 7F227CC0: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F227CC4:
    ctx->pc = 0x7F227CC4u;
    // 7F227CC4: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F227CC8:
    ctx->pc = 0x7F227CC8u;
    // 7F227CC8: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227CCC:
    ctx->pc = 0x7F227CCCu;
    // 7F227CCC: lfd     f5, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F227CCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F227CD0:
    ctx->pc = 0x7F227CD0u;
    // 7F227CD0: fsubs   f5, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x7F227CD0u)) return;
    ppc_fsubs(ctx, 5, 5, 0);

label_7F227CD4:
    ctx->pc = 0x7F227CD4u;
    // 7F227CD4: fsubs   f5, f5, f1
    if (!ppc_fp_available_inline(ctx, 0x7F227CD4u)) return;
    ppc_fsubs(ctx, 5, 5, 1);

label_7F227CD8:
    ctx->pc = 0x7F227CD8u;
    // 7F227CD8: fdivs   f4, f5, f4
    if (!ppc_fp_available_inline(ctx, 0x7F227CD8u)) return;
    ppc_fdivs(ctx, 4, 5, 4);

label_7F227CDC:
    ctx->pc = 0x7F227CDCu;
    // 7F227CDC: fmuls   f4, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x7F227CDCu)) return;
    ppc_fmuls(ctx, 4, 2, 4);

label_7F227CE0:
    ctx->pc = 0x7F227CE0u;
    // 7F227CE0: fctiwz    f4, f4
    if (!ppc_fp_available_inline(ctx, 0x7F227CE0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[4], true, &result)) ctx->fpr[4] = dolrecomp_f64_from_bits(result); }

label_7F227CE4:
    ctx->pc = 0x7F227CE4u;
    // 7F227CE4: stfd     f4, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F227CE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[4]));
    }

label_7F227CE8:
    ctx->pc = 0x7F227CE8u;
    // 7F227CE8: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227CEC:
    ctx->pc = 0x7F227CECu;
    // 7F227CEC: sth     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F227CF0:
    ctx->pc = 0x7F227CF0u;
    // 7F227CF0: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227CF4:
    ctx->pc = 0x7F227CF4u;
    // 7F227CF4: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F227CF8:
    ctx->pc = 0x7F227CF8u;
    // 7F227CF8: mulli   r0, r0, 3
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)3);

label_7F227CFC:
    ctx->pc = 0x7F227CFCu;
    // 7F227CFC: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F227D00:
    ctx->pc = 0x7F227D00u;
    // 7F227D00: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F227D04:
    ctx->pc = 0x7F227D04u;
    // 7F227D04: stw     r0, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227D08:
    ctx->pc = 0x7F227D08u;
    // 7F227D08: lfd     f4, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F227D08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F227D0C:
    ctx->pc = 0x7F227D0Cu;
    // 7F227D0C: fsubs   f0, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x7F227D0Cu)) return;
    ppc_fsubs(ctx, 0, 4, 0);

label_7F227D10:
    ctx->pc = 0x7F227D10u;
    // 7F227D10: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F227D10u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F227D14:
    ctx->pc = 0x7F227D14u;
    // 7F227D14: fdivs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F227D14u)) return;
    ppc_fdivs(ctx, 0, 0, 3);

label_7F227D18:
    ctx->pc = 0x7F227D18u;
    // 7F227D18: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F227D18u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F227D1C:
    ctx->pc = 0x7F227D1Cu;
    // 7F227D1C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F227D1Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F227D20:
    ctx->pc = 0x7F227D20u;
    // 7F227D20: stfd     f0, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F227D20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F227D24:
    ctx->pc = 0x7F227D24u;
    // 7F227D24: lwz     r0, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227D28:
    ctx->pc = 0x7F227D28u;
    // 7F227D28: sth     r0, 66(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(66);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F227D2C:
    ctx->pc = 0x7F227D2Cu;
    // 7F227D2C: lwz     r3, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F227D30:
    ctx->pc = 0x7F227D30u;
    // 7F227D30: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F227D34u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F227D34:
    ctx->pc = 0x7F227D34u;
    ctx->downcount -= 5;
    // 7F227D34: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F227D38:
    ctx->pc = 0x7F227D38u;
    // 7F227D38: lwz     r4, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F227D3C:
    ctx->pc = 0x7F227D3Cu;
    // 7F227D3C: addi    r3, r3, 8872
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8872);

label_7F227D40:
    ctx->pc = 0x7F227D40u;
    // 7F227D40: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F227D44:
    ctx->pc = 0x7F227D44u;
    // 7F227D44: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F227D48u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F227D48:
    ctx->pc = 0x7F227D48u;
    ctx->downcount -= 5;
    // 7F227D48: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F227D4C:
    ctx->pc = 0x7F227D4Cu;
    // 7F227D4C: lwz     r4, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F227D50:
    ctx->pc = 0x7F227D50u;
    // 7F227D50: addi    r3, r3, 8872
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8872);

label_7F227D54:
    ctx->pc = 0x7F227D54u;
    // 7F227D54: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F227D58:
    ctx->pc = 0x7F227D58u;
    // 7F227D58: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F227D5Cu;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F227D5C:
    ctx->pc = 0x7F227D5Cu;
    ctx->downcount -= 6;
    // 7F227D5C: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F227D60:
    ctx->pc = 0x7F227D60u;
    // 7F227D60: lwz     r5, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F227D64:
    ctx->pc = 0x7F227D64u;
    // 7F227D64: lwz     r6, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F227D68:
    ctx->pc = 0x7F227D68u;
    // 7F227D68: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F227D6C:
    ctx->pc = 0x7F227D6Cu;
    // 7F227D6C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F227D70:
    ctx->downcount -= 2;
    // 7F227D70: rlwinm. r0, r7, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F227D74:
    // 7F227D74: bc    12, 2, 0x7F227D80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F227D80;
        }
    }

label_7F227D78:
    ctx->pc = 0x7F227D78u;
    ctx->downcount -= 2;
    // 7F227D78: lha     r3, 62(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(62);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F227D7C:
    // 7F227D7C: b       0x7F227D84
    {
            goto label_7F227D84;
    }

label_7F227D80:
    ctx->pc = 0x7F227D80u;
    ctx->downcount -= 1;
    // 7F227D80: lha     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F227D84:
    ctx->downcount -= 9;
    // 7F227D84: rlwinm r0, r7, 31, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 31u) & 0x00000001u;
    }

label_7F227D88:
    ctx->pc = 0x7F227D88u;
    // 7F227D88: sth     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F227D8C:
    // 7F227D8C: neg  r3, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[3] = (~a) + 1u;
    }

label_7F227D90:
    // 7F227D90: cmpwi   r7, 2
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

label_7F227D94:
    // 7F227D94: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F227D98:
    // 7F227D98: andc   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[3];
    }

label_7F227D9C:
    ctx->pc = 0x7F227D9Cu;
    // 7F227D9C: sth     r0, 6(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F227DA0:
    // 7F227DA0: li      r0, 4095
    ctx->gpr[0] = (u32)(s32)(4095);

label_7F227DA4:
    // 7F227DA4: bc    4, 0, 0x7F227DB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F227DB0;
        }
    }

label_7F227DA8:
    ctx->downcount -= 2;
    // 7F227DA8: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F227DAC:
    // 7F227DAC: addi    r0, r3, -28673
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-28673);

label_7F227DB0:
    ctx->pc = 0x7F227DB0u;
    ctx->downcount -= 20;
    // 7F227DB0: sth     r0, 10(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F227DB4:
    // 7F227DB4: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F227DB8:
    // 7F227DB8: li      r4, 164
    ctx->gpr[4] = (u32)(s32)(164);

label_7F227DBC:
    // 7F227DBC: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F227DC0:
    ctx->pc = 0x7F227DC0u;
    // 7F227DC0: sth     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F227DC4:
    // 7F227DC4: li      r0, 128
    ctx->gpr[0] = (u32)(s32)(128);

label_7F227DC8:
    // 7F227DC8: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_7F227DCC:
    ctx->pc = 0x7F227DCCu;
    // 7F227DCC: stb     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F227DD0:
    ctx->pc = 0x7F227DD0u;
    // 7F227DD0: stb     r4, 1(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F227DD4:
    ctx->pc = 0x7F227DD4u;
    // 7F227DD4: stb     r3, 2(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F227DD8:
    ctx->pc = 0x7F227DD8u;
    // 7F227DD8: stb     r0, 3(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F227DDC:
    ctx->pc = 0x7F227DDCu;
    // 7F227DDC: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F227DE0:
    ctx->pc = 0x7F227DE0u;
    // 7F227DE0: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227DE4:
    ctx->pc = 0x7F227DE4u;
    // 7F227DE4: stw     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F227DE8:
    ctx->pc = 0x7F227DE8u;
    // 7F227DE8: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227DEC:
    ctx->pc = 0x7F227DECu;
    // 7F227DEC: lwz     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227DF0:
    // 7F227DF0: addi    r5, r5, 12
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12);

label_7F227DF4:
    ctx->pc = 0x7F227DF4u;
    // 7F227DF4: stw     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227DF8:
    // 7F227DF8: addi    r6, r6, 12
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(12);

label_7F227DFC:
    // 7F227DFC: bc    16, 0, 0x7F227D70
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F227D70u;
                return;
            }
            goto label_7F227D70;
        }
    }

label_7F227E00:
    ctx->pc = 0x7F227E00u;
    ctx->downcount -= 1;
    // 7F227E00: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F227E04:
    ctx->pc = 0x7F227E04u;
    ctx->downcount -= 16;
    // 7F227E04: lmw     r29, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F227E08:
    ctx->pc = 0x7F227E08u;
    // 7F227E08: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227E0C:
    ctx->pc = 0x7F227E0Cu;
    // 7F227E0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F227E10:
    ctx->pc = 0x7F227E10u;
    // 7F227E10: addi    r1, r1, 176
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(176);

label_7F227E14:
    ctx->pc = 0x7F227E14u;
    // 7F227E14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F227E18:
    ctx->pc = 0x7F227E18u;
    ctx->downcount -= 20;
    // 7F227E18: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F227E1C:
    ctx->pc = 0x7F227E1Cu;
    // 7F227E1C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F227E20:
    ctx->pc = 0x7F227E20u;
    // 7F227E20: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F227E24:
    ctx->pc = 0x7F227E24u;
    // 7F227E24: li      r5, 72
    ctx->gpr[5] = (u32)(s32)(72);

label_7F227E28:
    ctx->pc = 0x7F227E28u;
    // 7F227E28: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227E2C:
    ctx->pc = 0x7F227E2Cu;
    // 7F227E2C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F227E30:
    ctx->pc = 0x7F227E30u;
    // 7F227E30: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F227E34:
    ctx->pc = 0x7F227E34u;
    // 7F227E34: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F227E38:
    ctx->pc = 0x7F227E38u;
    // 7F227E38: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F227E3C:
    ctx->pc = 0x7F227E3Cu;
    // 7F227E3C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F227E40u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F227E40:
    ctx->pc = 0x7F227E40u;
    ctx->downcount -= 2;
    // 7F227E40: or.   r31, r3, r3
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

label_7F227E44:
    ctx->pc = 0x7F227E44u;
    // 7F227E44: bc    12, 2, 0x7F227EA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F227EA8;
        }
    }

label_7F227E48:
    ctx->pc = 0x7F227E48u;
    ctx->downcount -= 6;
    // 7F227E48: lis     r4, 32546
    ctx->gpr[4] = ((u32)(s32)(32546) << 16);

label_7F227E4C:
    ctx->pc = 0x7F227E4Cu;
    // 7F227E4C: lis     r5, 32546
    ctx->gpr[5] = ((u32)(s32)(32546) << 16);

label_7F227E50:
    ctx->pc = 0x7F227E50u;
    // 7F227E50: stw     r30, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F227E54:
    ctx->pc = 0x7F227E54u;
    // 7F227E54: addi    r4, r4, 30936
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30936);

label_7F227E58:
    ctx->pc = 0x7F227E58u;
    // 7F227E58: addi    r5, r5, 31284
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(31284);

label_7F227E5C:
    ctx->pc = 0x7F227E5Cu;
    // 7F227E5C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F227E60u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F227E60:
    ctx->pc = 0x7F227E60u;
    ctx->downcount -= 12;
    // 7F227E60: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227E64:
    ctx->pc = 0x7F227E64u;
    // 7F227E64: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F227E68:
    ctx->pc = 0x7F227E68u;
    // 7F227E68: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F227E6C:
    ctx->pc = 0x7F227E6Cu;
    // 7F227E6C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F227E70:
    ctx->pc = 0x7F227E70u;
    // 7F227E70: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F227E74:
    ctx->pc = 0x7F227E74u;
    // 7F227E74: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F227E78:
    ctx->pc = 0x7F227E78u;
    // 7F227E78: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F227E7C:
    ctx->pc = 0x7F227E7Cu;
    // 7F227E7C: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F227E80:
    ctx->pc = 0x7F227E80u;
    // 7F227E80: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F227E84:
    ctx->pc = 0x7F227E84u;
    // 7F227E84: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F227E88:
    ctx->pc = 0x7F227E88u;
    // 7F227E88: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227E8C:
    ctx->pc = 0x7F227E8Cu;
    // 7F227E8C: bl      0x7F227A60
    {
            ctx->lr = 0x7F227E90u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F227A60u;
                return;
            }
            goto label_7F227A60;
    }

label_7F227E90:
    ctx->pc = 0x7F227E90u;
    ctx->downcount -= 2;
    // 7F227E90: cmpwi   r3, 0
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

label_7F227E94:
    ctx->pc = 0x7F227E94u;
    // 7F227E94: bc    4, 0, 0x7F227EA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F227EA8;
        }
    }

label_7F227E98:
    ctx->pc = 0x7F227E98u;
    ctx->downcount -= 2;
    // 7F227E98: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F227E9C:
    ctx->pc = 0x7F227E9Cu;
    // 7F227E9C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F227EA0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F227EA0:
    ctx->pc = 0x7F227EA0u;
    ctx->downcount -= 2;
    // 7F227EA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F227EA4:
    ctx->pc = 0x7F227EA4u;
    // 7F227EA4: b       0x7F227EAC
    {
            goto label_7F227EAC;
    }

label_7F227EA8:
    ctx->pc = 0x7F227EA8u;
    ctx->downcount -= 1;
    // 7F227EA8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F227EAC:
    ctx->pc = 0x7F227EACu;
    ctx->downcount -= 16;
    // 7F227EAC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F227EB0:
    ctx->pc = 0x7F227EB0u;
    // 7F227EB0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227EB4:
    ctx->pc = 0x7F227EB4u;
    // 7F227EB4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F227EB8:
    ctx->pc = 0x7F227EB8u;
    // 7F227EB8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F227EBC:
    ctx->pc = 0x7F227EBCu;
    // 7F227EBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F227EC0:
    ctx->pc = 0x7F227EC0u;
    ctx->downcount -= 5;
    // 7F227EC0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F227EC4:
    ctx->pc = 0x7F227EC4u;
    // 7F227EC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F227EC8:
    ctx->pc = 0x7F227EC8u;
    // 7F227EC8: cmpwi   r4, 0
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

label_7F227ECC:
    ctx->pc = 0x7F227ECCu;
    // 7F227ECC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227ED0:
    ctx->pc = 0x7F227ED0u;
    // 7F227ED0: bc    12, 2, 0x7F227ED8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F227ED8;
        }
    }

label_7F227ED4:
    ctx->pc = 0x7F227ED4u;
    ctx->downcount -= 1;
    // 7F227ED4: b       0x7F227EEC
    {
            goto label_7F227EEC;
    }

label_7F227ED8:
    ctx->pc = 0x7F227ED8u;
    ctx->downcount -= 44;
    // 7F227ED8: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_7F227EDC:
    ctx->pc = 0x7F227EDCu;
    // 7F227EDC: li      r4, 160
    ctx->gpr[4] = (u32)(s32)(160);

label_7F227EE0:
    ctx->pc = 0x7F227EE0u;
    // 7F227EE0: divw   r0, r4, r0
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F227EE4:
    ctx->pc = 0x7F227EE4u;
    // 7F227EE4: sth     r0, 88(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F227EE8:
    ctx->pc = 0x7F227EE8u;
    // 7F227EE8: b       0x7F227EF4
    {
            goto label_7F227EF4;
    }

label_7F227EEC:
    ctx->pc = 0x7F227EECu;
    ctx->downcount -= 1;
    // 7F227EEC: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F227EF0u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F227EF0:
    ctx->pc = 0x7F227EF0u;
    ctx->downcount -= 1;
    // 7F227EF0: b       0x7F227EF8
    {
            goto label_7F227EF8;
    }

label_7F227EF4:
    ctx->pc = 0x7F227EF4u;
    ctx->downcount -= 1;
    // 7F227EF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F227EF8:
    ctx->pc = 0x7F227EF8u;
    ctx->downcount -= 5;
    // 7F227EF8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F227EFC:
    ctx->pc = 0x7F227EFCu;
    // 7F227EFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F227F00:
    ctx->pc = 0x7F227F00u;
    // 7F227F00: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F227F04:
    ctx->pc = 0x7F227F04u;
    // 7F227F04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F227F08:
    ctx->pc = 0x7F227F08u;
    ctx->downcount -= 60;
    // 7F227F08: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F227F0C:
    ctx->pc = 0x7F227F0Cu;
    // 7F227F0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F227F10:
    ctx->pc = 0x7F227F10u;
    // 7F227F10: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F227F14:
    ctx->pc = 0x7F227F14u;
    // 7F227F14: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F227F18:
    ctx->pc = 0x7F227F18u;
    // 7F227F18: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227F1C:
    ctx->pc = 0x7F227F1Cu;
    // 7F227F1C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F227F20:
    ctx->pc = 0x7F227F20u;
    // 7F227F20: stmw     r25, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F227F24:
    ctx->pc = 0x7F227F24u;
    // 7F227F24: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F227F28:
    ctx->pc = 0x7F227F28u;
    // 7F227F28: xoris   r5, r29, 0x8000
    ctx->gpr[5] = ctx->gpr[29] ^ (0x8000u << 16);

label_7F227F2C:
    ctx->pc = 0x7F227F2Cu;
    // 7F227F2C: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F227F30:
    ctx->pc = 0x7F227F30u;
    // 7F227F30: stw     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F227F34:
    ctx->pc = 0x7F227F34u;
    // 7F227F34: addi    r5, r7, 17824
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(17824);

label_7F227F38:
    ctx->pc = 0x7F227F38u;
    // 7F227F38: lfd     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F227F38u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F227F3C:
    ctx->pc = 0x7F227F3Cu;
    // 7F227F3C: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F227F40:
    ctx->pc = 0x7F227F40u;
    // 7F227F40: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F227F44:
    ctx->pc = 0x7F227F44u;
    // 7F227F44: addi    r9, r7, 17832
    ctx->gpr[9] = ctx->gpr[7] + (u32)(s32)(17832);

label_7F227F48:
    ctx->pc = 0x7F227F48u;
    // 7F227F48: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F227F4C:
    ctx->pc = 0x7F227F4Cu;
    // 7F227F4C: lfs     f2, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F227F4Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F227F50:
    ctx->pc = 0x7F227F50u;
    // 7F227F50: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F227F50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F227F54:
    ctx->pc = 0x7F227F54u;
    // 7F227F54: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F227F58:
    ctx->pc = 0x7F227F58u;
    // 7F227F58: addi    r10, r5, 17816
    ctx->gpr[10] = ctx->gpr[5] + (u32)(s32)(17816);

label_7F227F5C:
    ctx->pc = 0x7F227F5Cu;
    // 7F227F5C: rlwinm r0, r29, 26, 0, 5
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 26u) & 0xFC000000u;
    }

label_7F227F60:
    ctx->pc = 0x7F227F60u;
    // 7F227F60: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F227F60u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F227F64:
    ctx->pc = 0x7F227F64u;
    // 7F227F64: rlwinm r5, r29, 7, 31, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[29], 7u) & 0x00000001u;
    }

label_7F227F68:
    ctx->pc = 0x7F227F68u;
    // 7F227F68: addi    r9, r7, 17836
    ctx->gpr[9] = ctx->gpr[7] + (u32)(s32)(17836);

label_7F227F6C:
    ctx->pc = 0x7F227F6Cu;
    // 7F227F6C: lis     r7, 32592
    ctx->gpr[7] = ((u32)(s32)(32592) << 16);

label_7F227F70:
    ctx->pc = 0x7F227F70u;
    // 7F227F70: subf   r0, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F227F74:
    ctx->pc = 0x7F227F74u;
    // 7F227F74: lfs     f1, 0(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F227F74u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F227F78:
    ctx->pc = 0x7F227F78u;
    // 7F227F78: addi    r11, r7, -21852
    ctx->gpr[11] = ctx->gpr[7] + (u32)(s32)(-21852);

label_7F227F7C:
    ctx->pc = 0x7F227F7Cu;
    // 7F227F7C: fmuls   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F227F7Cu)) return;
    ppc_fmuls(ctx, 2, 2, 0);

label_7F227F80:
    ctx->pc = 0x7F227F80u;
    // 7F227F80: rlwinm r0, r0, 12, 0, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 12u) & 0xFFFFFFFFu;
    }

label_7F227F84:
    ctx->pc = 0x7F227F84u;
    // 7F227F84: lfs     f0, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F227F84u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F227F88:
    ctx->pc = 0x7F227F88u;
    // 7F227F88: add   r7, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F227F8C:
    ctx->pc = 0x7F227F8Cu;
    // 7F227F8C: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F227F90:
    ctx->pc = 0x7F227F90u;
    // 7F227F90: addi    r31, r11, 8192
    ctx->gpr[31] = ctx->gpr[11] + (u32)(s32)(8192);

label_7F227F94:
    ctx->pc = 0x7F227F94u;
    // 7F227F94: addi    r30, r31, 16
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(16);

label_7F227F98:
    ctx->pc = 0x7F227F98u;
    // 7F227F98: stfs     f1, 8196(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F227F98u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8196);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F227F9C:
    ctx->pc = 0x7F227F9Cu;
    // 7F227F9C: addi    r0, r5, 12832
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F227FA0:
    ctx->pc = 0x7F227FA0u;
    // 7F227FA0: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F227FA4:
    ctx->pc = 0x7F227FA4u;
    // 7F227FA4: stfs     f2, 8192(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F227FA4u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8192);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F227FA8:
    ctx->pc = 0x7F227FA8u;
    // 7F227FA8: or   r25, r6, r6
    {
        ctx->gpr[25] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F227FAC:
    ctx->pc = 0x7F227FACu;
    // 7F227FAC: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F227FB0:
    ctx->pc = 0x7F227FB0u;
    // 7F227FB0: addi    r26, r30, 16
    ctx->gpr[26] = ctx->gpr[30] + (u32)(s32)(16);

label_7F227FB4:
    ctx->pc = 0x7F227FB4u;
    // 7F227FB4: stfs     f1, 8200(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F227FB4u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8200);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F227FB8:
    ctx->pc = 0x7F227FB8u;
    // 7F227FB8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F227FBC:
    ctx->pc = 0x7F227FBCu;
    // 7F227FBC: stfs     f0, 8204(r11)
    if (!ppc_fp_available_inline(ctx, 0x7F227FBCu)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8204);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F227FC0:
    ctx->pc = 0x7F227FC0u;
    // 7F227FC0: sth     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F227FC4:
    ctx->pc = 0x7F227FC4u;
    // 7F227FC4: sth     r7, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F227FC8:
    ctx->pc = 0x7F227FC8u;
    // 7F227FC8: sth     r8, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F227FCC:
    ctx->pc = 0x7F227FCCu;
    // 7F227FCC: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F227FD0u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F227FD0:
    ctx->pc = 0x7F227FD0u;
    ctx->downcount -= 4;
    // 7F227FD0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F227FD4:
    ctx->pc = 0x7F227FD4u;
    // 7F227FD4: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F227FD8:
    ctx->pc = 0x7F227FD8u;
    // 7F227FD8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F227FDC:
    ctx->pc = 0x7F227FDCu;
    // 7F227FDC: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F227FE0u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F227FE0:
    ctx->pc = 0x7F227FE0u;
    ctx->downcount -= 10;
    // 7F227FE0: lfs     f0, 0(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F227FE0u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F227FE4:
    ctx->pc = 0x7F227FE4u;
    // 7F227FE4: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F227FE8:
    ctx->pc = 0x7F227FE8u;
    // 7F227FE8: stfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F227FE8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F227FEC:
    ctx->pc = 0x7F227FECu;
    // 7F227FEC: lfs     f0, 4(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F227FECu)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F227FF0:
    ctx->pc = 0x7F227FF0u;
    // 7F227FF0: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F227FF0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F227FF4:
    ctx->pc = 0x7F227FF4u;
    // 7F227FF4: lfs     f0, 8(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F227FF4u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F227FF8:
    ctx->pc = 0x7F227FF8u;
    // 7F227FF8: stfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F227FF8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F227FFC:
    ctx->pc = 0x7F227FFCu;
    // 7F227FFC: lfs     f0, 12(r25)
    if (!ppc_fp_available_inline(ctx, 0x7F227FFCu)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F228000:
    ctx->pc = 0x7F228000u;
    // 7F228000: stfs     f0, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F228000u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F228004:
    ctx->pc = 0x7F228004u;
    // 7F228004: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F228008u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F228008:
    ctx->pc = 0x7F228008u;
    ctx->downcount -= 4;
    // 7F228008: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F22800C:
    ctx->pc = 0x7F22800Cu;
    // 7F22800C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F228010:
    ctx->pc = 0x7F228010u;
    // 7F228010: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F228014:
    ctx->pc = 0x7F228014u;
    // 7F228014: bl      0x7F3B3648
    {
            ctx->lr = 0x7F228018u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F228018:
    ctx->pc = 0x7F228018u;
    ctx->downcount -= 31;
    // 7F228018: xoris   r3, r29, 0x8000
    ctx->gpr[3] = ctx->gpr[29] ^ (0x8000u << 16);

label_7F22801C:
    ctx->pc = 0x7F22801Cu;
    // 7F22801C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F228020:
    ctx->pc = 0x7F228020u;
    // 7F228020: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F228024:
    ctx->pc = 0x7F228024u;
    // 7F228024: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F228028:
    ctx->pc = 0x7F228028u;
    // 7F228028: lfs     f3, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F228028u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F22802C:
    ctx->pc = 0x7F22802Cu;
    // 7F22802C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F228030:
    ctx->pc = 0x7F228030u;
    // 7F228030: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F228034:
    ctx->pc = 0x7F228034u;
    // 7F228034: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F228038:
    ctx->pc = 0x7F228038u;
    // 7F228038: lfs     f2, 48(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F228038u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F22803C:
    ctx->pc = 0x7F22803Cu;
    // 7F22803C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F228040:
    ctx->pc = 0x7F228040u;
    // 7F228040: lfd     f1, 17824(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F228040u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(17824);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F228044:
    ctx->pc = 0x7F228044u;
    // 7F228044: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F228048:
    ctx->pc = 0x7F228048u;
    // 7F228048: fadds   f4, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F228048u)) return;
    ppc_fadds(ctx, 4, 3, 2);

label_7F22804C:
    ctx->pc = 0x7F22804Cu;
    // 7F22804C: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F22804Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F228050:
    ctx->pc = 0x7F228050u;
    // 7F228050: lfs     f3, 17844(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F228050u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(17844);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F228054:
    ctx->pc = 0x7F228054u;
    // 7F228054: fsubs   f2, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F228054u)) return;
    ppc_fsubs(ctx, 2, 0, 1);

label_7F228058:
    ctx->pc = 0x7F228058u;
    // 7F228058: lfs     f0, 17840(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F228058u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17840);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F22805C:
    ctx->pc = 0x7F22805Cu;
    // 7F22805C: stfs     f4, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F22805Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F228060:
    ctx->pc = 0x7F228060u;
    // 7F228060: lfs     f1, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F228060u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F228064:
    ctx->pc = 0x7F228064u;
    // 7F228064: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F228068:
    ctx->pc = 0x7F228068u;
    // 7F228068: fmadds f2, f3, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F228068u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[2], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[2] = ctx->ps1[2] = result;
    }

label_7F22806C:
    ctx->pc = 0x7F22806Cu;
    // 7F22806C: lfs     f0, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F22806Cu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F228070:
    ctx->pc = 0x7F228070u;
    // 7F228070: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F228070u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F228074:
    ctx->pc = 0x7F228074u;
    // 7F228074: stfs     f0, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F228074u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F228078:
    ctx->pc = 0x7F228078u;
    // 7F228078: lfs     f0, 56(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F228078u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F22807C:
    ctx->pc = 0x7F22807Cu;
    // 7F22807C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F22807Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F228080:
    ctx->pc = 0x7F228080u;
    // 7F228080: sth     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F228084:
    ctx->pc = 0x7F228084u;
    // 7F228084: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F228088:
    ctx->pc = 0x7F228088u;
    // 7F228088: stfs     f0, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F228088u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F22808C:
    ctx->pc = 0x7F22808Cu;
    // 7F22808C: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F228090:
    ctx->pc = 0x7F228090u;
    // 7F228090: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F228094u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F228094:
    ctx->pc = 0x7F228094u;
    ctx->downcount -= 4;
    // 7F228094: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F228098:
    ctx->pc = 0x7F228098u;
    // 7F228098: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F22809C:
    ctx->pc = 0x7F22809Cu;
    // 7F22809C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2280A0:
    ctx->pc = 0x7F2280A0u;
    // 7F2280A0: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F2280A4u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F2280A4:
    ctx->pc = 0x7F2280A4u;
    ctx->downcount -= 16;
    // 7F2280A4: lmw     r25, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2280A8:
    ctx->pc = 0x7F2280A8u;
    // 7F2280A8: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2280AC:
    ctx->pc = 0x7F2280ACu;
    // 7F2280AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2280B0:
    ctx->pc = 0x7F2280B0u;
    // 7F2280B0: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F2280B4:
    ctx->pc = 0x7F2280B4u;
    // 7F2280B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F2280B8:
    ctx->pc = 0x7F2280B8u;
    ctx->downcount -= 3;
    // 7F2280B8: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F2280BC:
    ctx->pc = 0x7F2280BCu;
    // 7F2280BC: cmpwi   r0, 255
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

label_7F2280C0:
    ctx->pc = 0x7F2280C0u;
    // 7F2280C0: bc    4, 1, 0x7F2280C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2280C8;
        }
    }

label_7F2280C4:
    ctx->pc = 0x7F2280C4u;
    ctx->downcount -= 1;
    // 7F2280C4: li      r3, 255
    ctx->gpr[3] = (u32)(s32)(255);

label_7F2280C8:
    ctx->pc = 0x7F2280C8u;
    ctx->downcount -= 2;
    // 7F2280C8: extsh. r0, r3
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

label_7F2280CC:
    ctx->pc = 0x7F2280CCu;
    // 7F2280CC: bc    4, 0, 0x7F2280D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2280D4;
        }
    }

label_7F2280D0:
    ctx->pc = 0x7F2280D0u;
    ctx->downcount -= 1;
    // 7F2280D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2280D4:
    ctx->pc = 0x7F2280D4u;
    ctx->downcount -= 2;
    // 7F2280D4: rlwinm r3, r3, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_7F2280D8:
    ctx->pc = 0x7F2280D8u;
    // 7F2280D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2240EC;
        }
    }

label_7F2280DC:
    ctx->pc = 0x7F2280DCu;
    ctx->downcount -= 14;
    // 7F2280DC: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2280E0:
    ctx->pc = 0x7F2280E0u;
    // 7F2280E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2280E4:
    ctx->pc = 0x7F2280E4u;
    // 7F2280E4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2280E8:
    ctx->pc = 0x7F2280E8u;
    // 7F2280E8: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

    ctx->pc = 0x7F2280ECu;
    return;
return_dispatch_7F2240EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F224320u: goto label_7F224320;
    case 0x7F224334u: goto label_7F224334;
    case 0x7F22434Cu: goto label_7F22434C;
    case 0x7F224368u: goto label_7F224368;
    case 0x7F224384u: goto label_7F224384;
    case 0x7F22439Cu: goto label_7F22439C;
    case 0x7F2243ECu: goto label_7F2243EC;
    case 0x7F224408u: goto label_7F224408;
    case 0x7F224420u: goto label_7F224420;
    case 0x7F22443Cu: goto label_7F22443C;
    case 0x7F224454u: goto label_7F224454;
    case 0x7F224470u: goto label_7F224470;
    case 0x7F22448Cu: goto label_7F22448C;
    case 0x7F2244A4u: goto label_7F2244A4;
    case 0x7F2244F8u: goto label_7F2244F8;
    case 0x7F224518u: goto label_7F224518;
    case 0x7F224550u: goto label_7F224550;
    case 0x7F224558u: goto label_7F224558;
    case 0x7F224568u: goto label_7F224568;
    case 0x7F224578u: goto label_7F224578;
    case 0x7F224588u: goto label_7F224588;
    case 0x7F22459Cu: goto label_7F22459C;
    case 0x7F224648u: goto label_7F224648;
    case 0x7F224654u: goto label_7F224654;
    case 0x7F224660u: goto label_7F224660;
    case 0x7F224674u: goto label_7F224674;
    case 0x7F224690u: goto label_7F224690;
    case 0x7F224740u: goto label_7F224740;
    case 0x7F224798u: goto label_7F224798;
    case 0x7F22490Cu: goto label_7F22490C;
    case 0x7F224A84u: goto label_7F224A84;
    case 0x7F224A8Cu: goto label_7F224A8C;
    case 0x7F224A94u: goto label_7F224A94;
    case 0x7F224AA8u: goto label_7F224AA8;
    case 0x7F224BC8u: goto label_7F224BC8;
    case 0x7F224BD8u: goto label_7F224BD8;
    case 0x7F224BECu: goto label_7F224BEC;
    case 0x7F224BF0u: goto label_7F224BF0;
    case 0x7F224C04u: goto label_7F224C04;
    case 0x7F224C18u: goto label_7F224C18;
    case 0x7F224C3Cu: goto label_7F224C3C;
    case 0x7F224C44u: goto label_7F224C44;
    case 0x7F224C58u: goto label_7F224C58;
    case 0x7F224C6Cu: goto label_7F224C6C;
    case 0x7F224C90u: goto label_7F224C90;
    case 0x7F224C9Cu: goto label_7F224C9C;
    case 0x7F224CCCu: goto label_7F224CCC;
    case 0x7F224CD0u: goto label_7F224CD0;
    case 0x7F224CDCu: goto label_7F224CDC;
    case 0x7F224CECu: goto label_7F224CEC;
    case 0x7F224CFCu: goto label_7F224CFC;
    case 0x7F224D0Cu: goto label_7F224D0C;
    case 0x7F224D18u: goto label_7F224D18;
    case 0x7F224D24u: goto label_7F224D24;
    case 0x7F224D30u: goto label_7F224D30;
    case 0x7F224D3Cu: goto label_7F224D3C;
    case 0x7F224D48u: goto label_7F224D48;
    case 0x7F224D54u: goto label_7F224D54;
    case 0x7F224D58u: goto label_7F224D58;
    case 0x7F224D60u: goto label_7F224D60;
    case 0x7F224D64u: goto label_7F224D64;
    case 0x7F224D98u: goto label_7F224D98;
    case 0x7F224DA0u: goto label_7F224DA0;
    case 0x7F224DA4u: goto label_7F224DA4;
    case 0x7F224DC4u: goto label_7F224DC4;
    case 0x7F224DCCu: goto label_7F224DCC;
    case 0x7F224DD0u: goto label_7F224DD0;
    case 0x7F224DF0u: goto label_7F224DF0;
    case 0x7F224E04u: goto label_7F224E04;
    case 0x7F224E2Cu: goto label_7F224E2C;
    case 0x7F224E50u: goto label_7F224E50;
    case 0x7F224E7Cu: goto label_7F224E7C;
    case 0x7F224E94u: goto label_7F224E94;
    case 0x7F224EA0u: goto label_7F224EA0;
    case 0x7F224EB4u: goto label_7F224EB4;
    case 0x7F224EC0u: goto label_7F224EC0;
    case 0x7F224ECCu: goto label_7F224ECC;
    case 0x7F224ED4u: goto label_7F224ED4;
    case 0x7F224EDCu: goto label_7F224EDC;
    case 0x7F224EE4u: goto label_7F224EE4;
    case 0x7F224F14u: goto label_7F224F14;
    case 0x7F224F30u: goto label_7F224F30;
    case 0x7F224F60u: goto label_7F224F60;
    case 0x7F224F6Cu: goto label_7F224F6C;
    case 0x7F224F78u: goto label_7F224F78;
    case 0x7F224F84u: goto label_7F224F84;
    case 0x7F224F88u: goto label_7F224F88;
    case 0x7F224FBCu: goto label_7F224FBC;
    case 0x7F224FD8u: goto label_7F224FD8;
    case 0x7F225008u: goto label_7F225008;
    case 0x7F225018u: goto label_7F225018;
    case 0x7F2250D0u: goto label_7F2250D0;
    case 0x7F2250DCu: goto label_7F2250DC;
    case 0x7F2250E8u: goto label_7F2250E8;
    case 0x7F225100u: goto label_7F225100;
    case 0x7F225108u: goto label_7F225108;
    case 0x7F225120u: goto label_7F225120;
    case 0x7F22530Cu: goto label_7F22530C;
    case 0x7F225358u: goto label_7F225358;
    case 0x7F225364u: goto label_7F225364;
    case 0x7F2253ACu: goto label_7F2253AC;
    case 0x7F2253C0u: goto label_7F2253C0;
    case 0x7F2253E4u: goto label_7F2253E4;
    case 0x7F225428u: goto label_7F225428;
    case 0x7F225450u: goto label_7F225450;
    case 0x7F225478u: goto label_7F225478;
    case 0x7F2254A0u: goto label_7F2254A0;
    case 0x7F2255A8u: goto label_7F2255A8;
    case 0x7F2255B8u: goto label_7F2255B8;
    case 0x7F2255C8u: goto label_7F2255C8;
    case 0x7F2255D8u: goto label_7F2255D8;
    case 0x7F22567Cu: goto label_7F22567C;
    case 0x7F22568Cu: goto label_7F22568C;
    case 0x7F22569Cu: goto label_7F22569C;
    case 0x7F2256ACu: goto label_7F2256AC;
    case 0x7F2256BCu: goto label_7F2256BC;
    case 0x7F2256D8u: goto label_7F2256D8;
    case 0x7F2256E0u: goto label_7F2256E0;
    case 0x7F2257C4u: goto label_7F2257C4;
    case 0x7F2257D0u: goto label_7F2257D0;
    case 0x7F2257DCu: goto label_7F2257DC;
    case 0x7F22596Cu: goto label_7F22596C;
    case 0x7F225994u: goto label_7F225994;
    case 0x7F2259ECu: goto label_7F2259EC;
    case 0x7F225AD8u: goto label_7F225AD8;
    case 0x7F225AE8u: goto label_7F225AE8;
    case 0x7F225B04u: goto label_7F225B04;
    case 0x7F225C6Cu: goto label_7F225C6C;
    case 0x7F225C7Cu: goto label_7F225C7C;
    case 0x7F225CA0u: goto label_7F225CA0;
    case 0x7F225DC4u: goto label_7F225DC4;
    case 0x7F225DD4u: goto label_7F225DD4;
    case 0x7F225EA4u: goto label_7F225EA4;
    case 0x7F225EC0u: goto label_7F225EC0;
    case 0x7F225EF4u: goto label_7F225EF4;
    case 0x7F226030u: goto label_7F226030;
    case 0x7F226038u: goto label_7F226038;
    case 0x7F226048u: goto label_7F226048;
    case 0x7F226050u: goto label_7F226050;
    case 0x7F226060u: goto label_7F226060;
    case 0x7F226078u: goto label_7F226078;
    case 0x7F226080u: goto label_7F226080;
    case 0x7F226090u: goto label_7F226090;
    case 0x7F226098u: goto label_7F226098;
    case 0x7F2260A8u: goto label_7F2260A8;
    case 0x7F2260C0u: goto label_7F2260C0;
    case 0x7F2260C8u: goto label_7F2260C8;
    case 0x7F2260D8u: goto label_7F2260D8;
    case 0x7F2260E0u: goto label_7F2260E0;
    case 0x7F2260F0u: goto label_7F2260F0;
    case 0x7F226200u: goto label_7F226200;
    case 0x7F226220u: goto label_7F226220;
    case 0x7F226238u: goto label_7F226238;
    case 0x7F226254u: goto label_7F226254;
    case 0x7F226374u: goto label_7F226374;
    case 0x7F22637Cu: goto label_7F22637C;
    case 0x7F22638Cu: goto label_7F22638C;
    case 0x7F226394u: goto label_7F226394;
    case 0x7F2263A4u: goto label_7F2263A4;
    case 0x7F2263BCu: goto label_7F2263BC;
    case 0x7F2263C4u: goto label_7F2263C4;
    case 0x7F2263D4u: goto label_7F2263D4;
    case 0x7F2263DCu: goto label_7F2263DC;
    case 0x7F2263ECu: goto label_7F2263EC;
    case 0x7F2265FCu: goto label_7F2265FC;
    case 0x7F22660Cu: goto label_7F22660C;
    case 0x7F226648u: goto label_7F226648;
    case 0x7F226654u: goto label_7F226654;
    case 0x7F22665Cu: goto label_7F22665C;
    case 0x7F226664u: goto label_7F226664;
    case 0x7F22668Cu: goto label_7F22668C;
    case 0x7F226698u: goto label_7F226698;
    case 0x7F2266C0u: goto label_7F2266C0;
    case 0x7F2266E8u: goto label_7F2266E8;
    case 0x7F226748u: goto label_7F226748;
    case 0x7F22677Cu: goto label_7F22677C;
    case 0x7F2267B0u: goto label_7F2267B0;
    case 0x7F2267C0u: goto label_7F2267C0;
    case 0x7F2267D0u: goto label_7F2267D0;
    case 0x7F226808u: goto label_7F226808;
    case 0x7F22680Cu: goto label_7F22680C;
    case 0x7F226828u: goto label_7F226828;
    case 0x7F22683Cu: goto label_7F22683C;
    case 0x7F226878u: goto label_7F226878;
    case 0x7F2268BCu: goto label_7F2268BC;
    case 0x7F2268D0u: goto label_7F2268D0;
    case 0x7F226938u: goto label_7F226938;
    case 0x7F22695Cu: goto label_7F22695C;
    case 0x7F226964u: goto label_7F226964;
    case 0x7F22696Cu: goto label_7F22696C;
    case 0x7F226978u: goto label_7F226978;
    case 0x7F226984u: goto label_7F226984;
    case 0x7F22698Cu: goto label_7F22698C;
    case 0x7F226A40u: goto label_7F226A40;
    case 0x7F226A78u: goto label_7F226A78;
    case 0x7F226AC0u: goto label_7F226AC0;
    case 0x7F226AD0u: goto label_7F226AD0;
    case 0x7F226AE0u: goto label_7F226AE0;
    case 0x7F226B04u: goto label_7F226B04;
    case 0x7F226B14u: goto label_7F226B14;
    case 0x7F226B34u: goto label_7F226B34;
    case 0x7F226B5Cu: goto label_7F226B5C;
    case 0x7F226B84u: goto label_7F226B84;
    case 0x7F226BACu: goto label_7F226BAC;
    case 0x7F226BD4u: goto label_7F226BD4;
    case 0x7F226C6Cu: goto label_7F226C6C;
    case 0x7F226C88u: goto label_7F226C88;
    case 0x7F226CC0u: goto label_7F226CC0;
    case 0x7F226CD0u: goto label_7F226CD0;
    case 0x7F226CE0u: goto label_7F226CE0;
    case 0x7F226D10u: goto label_7F226D10;
    case 0x7F226D48u: goto label_7F226D48;
    case 0x7F226D54u: goto label_7F226D54;
    case 0x7F226E14u: goto label_7F226E14;
    case 0x7F226E28u: goto label_7F226E28;
    case 0x7F226E48u: goto label_7F226E48;
    case 0x7F226E60u: goto label_7F226E60;
    case 0x7F226E78u: goto label_7F226E78;
    case 0x7F226E90u: goto label_7F226E90;
    case 0x7F226EECu: goto label_7F226EEC;
    case 0x7F226F0Cu: goto label_7F226F0C;
    case 0x7F226F2Cu: goto label_7F226F2C;
    case 0x7F226F4Cu: goto label_7F226F4C;
    case 0x7F226F60u: goto label_7F226F60;
    case 0x7F226FBCu: goto label_7F226FBC;
    case 0x7F226FCCu: goto label_7F226FCC;
    case 0x7F226FDCu: goto label_7F226FDC;
    case 0x7F227014u: goto label_7F227014;
    case 0x7F227034u: goto label_7F227034;
    case 0x7F227054u: goto label_7F227054;
    case 0x7F227080u: goto label_7F227080;
    case 0x7F227090u: goto label_7F227090;
    case 0x7F2270A0u: goto label_7F2270A0;
    case 0x7F227168u: goto label_7F227168;
    case 0x7F22717Cu: goto label_7F22717C;
    case 0x7F2271F4u: goto label_7F2271F4;
    case 0x7F227204u: goto label_7F227204;
    case 0x7F22723Cu: goto label_7F22723C;
    case 0x7F22724Cu: goto label_7F22724C;
    case 0x7F227254u: goto label_7F227254;
    case 0x7F227264u: goto label_7F227264;
    case 0x7F227274u: goto label_7F227274;
    case 0x7F227414u: goto label_7F227414;
    case 0x7F22749Cu: goto label_7F22749C;
    case 0x7F2274D8u: goto label_7F2274D8;
    case 0x7F2274E8u: goto label_7F2274E8;
    case 0x7F227684u: goto label_7F227684;
    case 0x7F227698u: goto label_7F227698;
    case 0x7F2276B0u: goto label_7F2276B0;
    case 0x7F2276C4u: goto label_7F2276C4;
    case 0x7F2276D4u: goto label_7F2276D4;
    case 0x7F22770Cu: goto label_7F22770C;
    case 0x7F227734u: goto label_7F227734;
    case 0x7F227750u: goto label_7F227750;
    case 0x7F227778u: goto label_7F227778;
    case 0x7F2277A0u: goto label_7F2277A0;
    case 0x7F2277BCu: goto label_7F2277BC;
    case 0x7F2277F0u: goto label_7F2277F0;
    case 0x7F227804u: goto label_7F227804;
    case 0x7F227818u: goto label_7F227818;
    case 0x7F227858u: goto label_7F227858;
    case 0x7F227874u: goto label_7F227874;
    case 0x7F2278A8u: goto label_7F2278A8;
    case 0x7F2278B8u: goto label_7F2278B8;
    case 0x7F227910u: goto label_7F227910;
    case 0x7F227940u: goto label_7F227940;
    case 0x7F227954u: goto label_7F227954;
    case 0x7F2279ECu: goto label_7F2279EC;
    case 0x7F227A1Cu: goto label_7F227A1C;
    case 0x7F227A50u: goto label_7F227A50;
    case 0x7F227AACu: goto label_7F227AAC;
    case 0x7F227ACCu: goto label_7F227ACC;
    case 0x7F227AE8u: goto label_7F227AE8;
    case 0x7F227B30u: goto label_7F227B30;
    case 0x7F227D34u: goto label_7F227D34;
    case 0x7F227D48u: goto label_7F227D48;
    case 0x7F227D5Cu: goto label_7F227D5C;
    case 0x7F227E40u: goto label_7F227E40;
    case 0x7F227E60u: goto label_7F227E60;
    case 0x7F227E90u: goto label_7F227E90;
    case 0x7F227EA0u: goto label_7F227EA0;
    case 0x7F227EF0u: goto label_7F227EF0;
    case 0x7F227FD0u: goto label_7F227FD0;
    case 0x7F227FE0u: goto label_7F227FE0;
    case 0x7F228008u: goto label_7F228008;
    case 0x7F228018u: goto label_7F228018;
    case 0x7F228094u: goto label_7F228094;
    case 0x7F2280A4u: goto label_7F2280A4;
    default: return;
    }
}

