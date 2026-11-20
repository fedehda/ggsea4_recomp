// DolRecomp output
#include "../generated.h"

static void loop_7F1FC0F4(CPUState* ctx) {
label_7F1FC0F4:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1FC0F4u;
    // 7F1FC0F4: lwz     r9, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1FC0F8u;
    // 7F1FC0F8: lwzu     r0, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[10] = ea;
    }

    ctx->pc = 0x7F1FC0FCu;
    // 7F1FC0FC: stw     r9, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

    ctx->pc = 0x7F1FC100u;
    // 7F1FC100: stwu     r0, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[11] = ea;
    }

    // 7F1FC104: bc    16, 0, 0x7F1FC0F4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FC0F4u;
                return;
            }
            goto label_7F1FC0F4;
        }
    }

    ctx->pc = 0x7F1FC108u;
}

static void loop_7F1FC124(CPUState* ctx) {
label_7F1FC124:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1FC124u;
    // 7F1FC124: lwz     r9, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1FC128u;
    // 7F1FC128: lwzu     r0, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[10] = ea;
    }

    ctx->pc = 0x7F1FC12Cu;
    // 7F1FC12C: stw     r9, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

    ctx->pc = 0x7F1FC130u;
    // 7F1FC130: stwu     r0, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[11] = ea;
    }

    // 7F1FC134: bc    16, 0, 0x7F1FC124
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FC124u;
                return;
            }
            goto label_7F1FC124;
        }
    }

    ctx->pc = 0x7F1FC138u;
}

static void loop_7F1FC288(CPUState* ctx) {
label_7F1FC288:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1FC288u;
    // 7F1FC288: lwz     r9, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1FC28Cu;
    // 7F1FC28C: lwzu     r0, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[10] = ea;
    }

    ctx->pc = 0x7F1FC290u;
    // 7F1FC290: stw     r9, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

    ctx->pc = 0x7F1FC294u;
    // 7F1FC294: stwu     r0, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[11] = ea;
    }

    // 7F1FC298: bc    16, 0, 0x7F1FC288
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FC288u;
                return;
            }
            goto label_7F1FC288;
        }
    }

    ctx->pc = 0x7F1FC29Cu;
}

static void loop_7F1FC2AC(CPUState* ctx) {
label_7F1FC2AC:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1FC2ACu;
    // 7F1FC2AC: lwz     r9, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1FC2B0u;
    // 7F1FC2B0: lwzu     r0, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[10] = ea;
    }

    ctx->pc = 0x7F1FC2B4u;
    // 7F1FC2B4: stw     r9, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

    ctx->pc = 0x7F1FC2B8u;
    // 7F1FC2B8: stwu     r0, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[11] = ea;
    }

    // 7F1FC2BC: bc    16, 0, 0x7F1FC2AC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FC2ACu;
                return;
            }
            goto label_7F1FC2AC;
        }
    }

    ctx->pc = 0x7F1FC2C0u;
}

static void loop_7F1FD254(CPUState* ctx) {
label_7F1FD254:
    ctx->downcount -= 4;
    // 7F1FD254: addi    r0, r4, 4560
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(4560);

    // 7F1FD258: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

    ctx->pc = 0x7F1FD25Cu;
    // 7F1FD25C: stwx    r5, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 7F1FD260: bc    16, 0, 0x7F1FD254
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FD254u;
                return;
            }
            goto label_7F1FD254;
        }
    }

    ctx->pc = 0x7F1FD264u;
}

static void loop_7F1FD274(CPUState* ctx) {
label_7F1FD274:
    ctx->downcount -= 4;
    // 7F1FD274: addi    r0, r4, 5424
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(5424);

    // 7F1FD278: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

    ctx->pc = 0x7F1FD27Cu;
    // 7F1FD27C: stwx    r5, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 7F1FD280: bc    16, 0, 0x7F1FD274
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FD274u;
                return;
            }
            goto label_7F1FD274;
        }
    }

    ctx->pc = 0x7F1FD284u;
}

static void loop_7F1FD294(CPUState* ctx) {
label_7F1FD294:
    ctx->downcount -= 4;
    // 7F1FD294: addi    r0, r4, 48
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(48);

    // 7F1FD298: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

    ctx->pc = 0x7F1FD29Cu;
    // 7F1FD29C: stwx    r5, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 7F1FD2A0: bc    16, 0, 0x7F1FD294
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FD294u;
                return;
            }
            goto label_7F1FD294;
        }
    }

    ctx->pc = 0x7F1FD2A4u;
}

static void loop_7F1FD52C(CPUState* ctx) {
label_7F1FD52C:
    ctx->downcount -= 4;
    ctx->pc = 0x7F1FD52Cu;
    // 7F1FD52C: stw     r5, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x7F1FD530u;
    // 7F1FD530: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 7F1FD534: addi    r0, r4, -16
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-16);

    ctx->pc = 0x7F1FD538u;
    // 7F1FD538: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F1FD53C: addic.  r3, r3, -1
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

    // 7F1FD540: bc    4, 0, 0x7F1FD52C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FD52Cu;
                return;
            }
            goto label_7F1FD52C;
        }
    }

    ctx->pc = 0x7F1FD544u;
}

static void loop_7F1FDAE0(CPUState* ctx) {
label_7F1FDAE0:
    ctx->downcount -= 31;
    ctx->pc = 0x7F1FDAE0u;
    // 7F1FDAE0: lwz     r3, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    // 7F1FDAE4: addi    r0, r6, 108
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(108);

    // 7F1FDAE8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

    // 7F1FDAEC: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

    ctx->pc = 0x7F1FDAF0u;
    // 7F1FDAF0: stwx    r3, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    // 7F1FDAF4: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

    // 7F1FDAF8: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

    // 7F1FDAFC: addi    r6, r6, 4
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4);

    ctx->pc = 0x7F1FDB00u;
    // 7F1FDB00: sth     r5, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

    ctx->pc = 0x7F1FDB04u;
    // 7F1FDB04: sth     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

    ctx->pc = 0x7F1FDB08u;
    // 7F1FDB08: sth     r5, 6(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

    ctx->pc = 0x7F1FDB0Cu;
    // 7F1FDB0C: sth     r5, 6(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

    ctx->pc = 0x7F1FDB10u;
    // 7F1FDB10: sth     r4, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

    ctx->pc = 0x7F1FDB14u;
    // 7F1FDB14: sth     r4, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

    ctx->pc = 0x7F1FDB18u;
    // 7F1FDB18: sth     r4, 14(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

    ctx->pc = 0x7F1FDB1Cu;
    // 7F1FDB1C: sth     r4, 14(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

    ctx->pc = 0x7F1FDB20u;
    // 7F1FDB20: sth     r5, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

    ctx->pc = 0x7F1FDB24u;
    // 7F1FDB24: sth     r5, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

    ctx->pc = 0x7F1FDB28u;
    // 7F1FDB28: sth     r5, 10(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

    ctx->pc = 0x7F1FDB2Cu;
    // 7F1FDB2C: sth     r5, 10(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

    ctx->pc = 0x7F1FDB30u;
    // 7F1FDB30: stb     r3, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1FDB34u;
    // 7F1FDB34: stb     r3, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1FDB38u;
    // 7F1FDB38: stb     r3, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1FDB3Cu;
    // 7F1FDB3C: stb     r3, 1(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1FDB40u;
    // 7F1FDB40: stb     r3, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1FDB44u;
    // 7F1FDB44: stb     r3, 2(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1FDB48u;
    // 7F1FDB48: stb     r0, 3(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    // 7F1FDB4C: addi    r8, r8, 16
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(16);

    ctx->pc = 0x7F1FDB50u;
    // 7F1FDB50: stb     r0, 3(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    // 7F1FDB54: addi    r7, r7, 16
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(16);

    // 7F1FDB58: bc    16, 0, 0x7F1FDAE0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FDAE0u;
                return;
            }
            goto label_7F1FDAE0;
        }
    }

    ctx->pc = 0x7F1FDB5Cu;
}

static void loop_7F1FDCDC(CPUState* ctx) {
label_7F1FDCDC:
    ctx->downcount -= 14;
    ctx->pc = 0x7F1FDCDCu;
    // 7F1FDCDC: lbz     r5, 3(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(3);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

    // 7F1FDCE0: addi    r0, r3, 108
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(108);

    ctx->pc = 0x7F1FDCE4u;
    // 7F1FDCE4: lwz     r4, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 7F1FDCE8: addi    r7, r7, 16
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(16);

    // 7F1FDCEC: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

    // 7F1FDCF0: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    // 7F1FDCF4: mullw   r4, r5, r4
    {
        s64 product = (s64)(s32)ctx->gpr[5] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[4] = (u32)product;
    }

    // 7F1FDCF8: srawi r4, r4, 6
    {
        u32 sh = 6u;
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

    // 7F1FDCFC: addze  r4, r4
    {
        u32 a = ctx->gpr[4];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

    ctx->pc = 0x7F1FDD00u;
    // 7F1FDD00: stwx    r4, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x7F1FDD04u;
    // 7F1FDD04: lwz     r0, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F1FDD08: cmpw    r6, r0
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

    // 7F1FDD0C: bc    12, 0, 0x7F1FDCDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FDCDCu;
                return;
            }
            goto label_7F1FDCDC;
        }
    }

    ctx->pc = 0x7F1FDD10u;
}

static void loop_7F1FDE74(CPUState* ctx) {
label_7F1FDE74:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1FDE74u;
    // 7F1FDE74: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1FDE78u;
    // 7F1FDE78: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1FDE7Cu;
    // 7F1FDE7C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1FDE80u;
    // 7F1FDE80: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F1FDE84: bc    16, 0, 0x7F1FDE74
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FDE74u;
                return;
            }
            goto label_7F1FDE74;
        }
    }

    ctx->pc = 0x7F1FDE88u;
}

static void loop_7F1FDEA0(CPUState* ctx) {
label_7F1FDEA0:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1FDEA0u;
    // 7F1FDEA0: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1FDEA4u;
    // 7F1FDEA4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1FDEA8u;
    // 7F1FDEA8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1FDEACu;
    // 7F1FDEAC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F1FDEB0: bc    16, 0, 0x7F1FDEA0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FDEA0u;
                return;
            }
            goto label_7F1FDEA0;
        }
    }

    ctx->pc = 0x7F1FDEB4u;
}

void func_7F1FC0EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F1FC0ECu: goto label_7F1FC0EC;
    case 0x7F1FC0F0u: goto label_7F1FC0F0;
    case 0x7F1FC0F4u: goto label_7F1FC0F4;
    case 0x7F1FC0F8u: goto label_7F1FC0F8;
    case 0x7F1FC0FCu: goto label_7F1FC0FC;
    case 0x7F1FC100u: goto label_7F1FC100;
    case 0x7F1FC104u: goto label_7F1FC104;
    case 0x7F1FC108u: goto label_7F1FC108;
    case 0x7F1FC10Cu: goto label_7F1FC10C;
    case 0x7F1FC110u: goto label_7F1FC110;
    case 0x7F1FC114u: goto label_7F1FC114;
    case 0x7F1FC118u: goto label_7F1FC118;
    case 0x7F1FC11Cu: goto label_7F1FC11C;
    case 0x7F1FC120u: goto label_7F1FC120;
    case 0x7F1FC124u: goto label_7F1FC124;
    case 0x7F1FC128u: goto label_7F1FC128;
    case 0x7F1FC12Cu: goto label_7F1FC12C;
    case 0x7F1FC130u: goto label_7F1FC130;
    case 0x7F1FC134u: goto label_7F1FC134;
    case 0x7F1FC138u: goto label_7F1FC138;
    case 0x7F1FC13Cu: goto label_7F1FC13C;
    case 0x7F1FC140u: goto label_7F1FC140;
    case 0x7F1FC144u: goto label_7F1FC144;
    case 0x7F1FC148u: goto label_7F1FC148;
    case 0x7F1FC14Cu: goto label_7F1FC14C;
    case 0x7F1FC150u: goto label_7F1FC150;
    case 0x7F1FC154u: goto label_7F1FC154;
    case 0x7F1FC158u: goto label_7F1FC158;
    case 0x7F1FC15Cu: goto label_7F1FC15C;
    case 0x7F1FC160u: goto label_7F1FC160;
    case 0x7F1FC164u: goto label_7F1FC164;
    case 0x7F1FC168u: goto label_7F1FC168;
    case 0x7F1FC16Cu: goto label_7F1FC16C;
    case 0x7F1FC170u: goto label_7F1FC170;
    case 0x7F1FC174u: goto label_7F1FC174;
    case 0x7F1FC178u: goto label_7F1FC178;
    case 0x7F1FC17Cu: goto label_7F1FC17C;
    case 0x7F1FC180u: goto label_7F1FC180;
    case 0x7F1FC184u: goto label_7F1FC184;
    case 0x7F1FC188u: goto label_7F1FC188;
    case 0x7F1FC18Cu: goto label_7F1FC18C;
    case 0x7F1FC190u: goto label_7F1FC190;
    case 0x7F1FC194u: goto label_7F1FC194;
    case 0x7F1FC198u: goto label_7F1FC198;
    case 0x7F1FC19Cu: goto label_7F1FC19C;
    case 0x7F1FC1A0u: goto label_7F1FC1A0;
    case 0x7F1FC1A4u: goto label_7F1FC1A4;
    case 0x7F1FC1A8u: goto label_7F1FC1A8;
    case 0x7F1FC1ACu: goto label_7F1FC1AC;
    case 0x7F1FC1B0u: goto label_7F1FC1B0;
    case 0x7F1FC1B4u: goto label_7F1FC1B4;
    case 0x7F1FC1B8u: goto label_7F1FC1B8;
    case 0x7F1FC1BCu: goto label_7F1FC1BC;
    case 0x7F1FC1C0u: goto label_7F1FC1C0;
    case 0x7F1FC1C4u: goto label_7F1FC1C4;
    case 0x7F1FC1C8u: goto label_7F1FC1C8;
    case 0x7F1FC1CCu: goto label_7F1FC1CC;
    case 0x7F1FC1D0u: goto label_7F1FC1D0;
    case 0x7F1FC1D4u: goto label_7F1FC1D4;
    case 0x7F1FC1D8u: goto label_7F1FC1D8;
    case 0x7F1FC1DCu: goto label_7F1FC1DC;
    case 0x7F1FC1E0u: goto label_7F1FC1E0;
    case 0x7F1FC1E4u: goto label_7F1FC1E4;
    case 0x7F1FC1E8u: goto label_7F1FC1E8;
    case 0x7F1FC1ECu: goto label_7F1FC1EC;
    case 0x7F1FC1F0u: goto label_7F1FC1F0;
    case 0x7F1FC1F4u: goto label_7F1FC1F4;
    case 0x7F1FC1F8u: goto label_7F1FC1F8;
    case 0x7F1FC1FCu: goto label_7F1FC1FC;
    case 0x7F1FC200u: goto label_7F1FC200;
    case 0x7F1FC204u: goto label_7F1FC204;
    case 0x7F1FC208u: goto label_7F1FC208;
    case 0x7F1FC20Cu: goto label_7F1FC20C;
    case 0x7F1FC210u: goto label_7F1FC210;
    case 0x7F1FC214u: goto label_7F1FC214;
    case 0x7F1FC218u: goto label_7F1FC218;
    case 0x7F1FC21Cu: goto label_7F1FC21C;
    case 0x7F1FC220u: goto label_7F1FC220;
    case 0x7F1FC224u: goto label_7F1FC224;
    case 0x7F1FC228u: goto label_7F1FC228;
    case 0x7F1FC22Cu: goto label_7F1FC22C;
    case 0x7F1FC230u: goto label_7F1FC230;
    case 0x7F1FC234u: goto label_7F1FC234;
    case 0x7F1FC238u: goto label_7F1FC238;
    case 0x7F1FC23Cu: goto label_7F1FC23C;
    case 0x7F1FC240u: goto label_7F1FC240;
    case 0x7F1FC244u: goto label_7F1FC244;
    case 0x7F1FC248u: goto label_7F1FC248;
    case 0x7F1FC24Cu: goto label_7F1FC24C;
    case 0x7F1FC250u: goto label_7F1FC250;
    case 0x7F1FC254u: goto label_7F1FC254;
    case 0x7F1FC258u: goto label_7F1FC258;
    case 0x7F1FC25Cu: goto label_7F1FC25C;
    case 0x7F1FC260u: goto label_7F1FC260;
    case 0x7F1FC264u: goto label_7F1FC264;
    case 0x7F1FC268u: goto label_7F1FC268;
    case 0x7F1FC26Cu: goto label_7F1FC26C;
    case 0x7F1FC270u: goto label_7F1FC270;
    case 0x7F1FC274u: goto label_7F1FC274;
    case 0x7F1FC278u: goto label_7F1FC278;
    case 0x7F1FC27Cu: goto label_7F1FC27C;
    case 0x7F1FC280u: goto label_7F1FC280;
    case 0x7F1FC284u: goto label_7F1FC284;
    case 0x7F1FC288u: goto label_7F1FC288;
    case 0x7F1FC28Cu: goto label_7F1FC28C;
    case 0x7F1FC290u: goto label_7F1FC290;
    case 0x7F1FC294u: goto label_7F1FC294;
    case 0x7F1FC298u: goto label_7F1FC298;
    case 0x7F1FC29Cu: goto label_7F1FC29C;
    case 0x7F1FC2A0u: goto label_7F1FC2A0;
    case 0x7F1FC2A4u: goto label_7F1FC2A4;
    case 0x7F1FC2A8u: goto label_7F1FC2A8;
    case 0x7F1FC2ACu: goto label_7F1FC2AC;
    case 0x7F1FC2B0u: goto label_7F1FC2B0;
    case 0x7F1FC2B4u: goto label_7F1FC2B4;
    case 0x7F1FC2B8u: goto label_7F1FC2B8;
    case 0x7F1FC2BCu: goto label_7F1FC2BC;
    case 0x7F1FC2C0u: goto label_7F1FC2C0;
    case 0x7F1FC2C4u: goto label_7F1FC2C4;
    case 0x7F1FC2C8u: goto label_7F1FC2C8;
    case 0x7F1FC2CCu: goto label_7F1FC2CC;
    case 0x7F1FC2D0u: goto label_7F1FC2D0;
    case 0x7F1FC2D4u: goto label_7F1FC2D4;
    case 0x7F1FC2D8u: goto label_7F1FC2D8;
    case 0x7F1FC2DCu: goto label_7F1FC2DC;
    case 0x7F1FC2E0u: goto label_7F1FC2E0;
    case 0x7F1FC2E4u: goto label_7F1FC2E4;
    case 0x7F1FC2E8u: goto label_7F1FC2E8;
    case 0x7F1FC2ECu: goto label_7F1FC2EC;
    case 0x7F1FC2F0u: goto label_7F1FC2F0;
    case 0x7F1FC2F4u: goto label_7F1FC2F4;
    case 0x7F1FC2F8u: goto label_7F1FC2F8;
    case 0x7F1FC2FCu: goto label_7F1FC2FC;
    case 0x7F1FC300u: goto label_7F1FC300;
    case 0x7F1FC304u: goto label_7F1FC304;
    case 0x7F1FC308u: goto label_7F1FC308;
    case 0x7F1FC30Cu: goto label_7F1FC30C;
    case 0x7F1FC310u: goto label_7F1FC310;
    case 0x7F1FC314u: goto label_7F1FC314;
    case 0x7F1FC318u: goto label_7F1FC318;
    case 0x7F1FC31Cu: goto label_7F1FC31C;
    case 0x7F1FC320u: goto label_7F1FC320;
    case 0x7F1FC324u: goto label_7F1FC324;
    case 0x7F1FC328u: goto label_7F1FC328;
    case 0x7F1FC32Cu: goto label_7F1FC32C;
    case 0x7F1FC330u: goto label_7F1FC330;
    case 0x7F1FC334u: goto label_7F1FC334;
    case 0x7F1FC338u: goto label_7F1FC338;
    case 0x7F1FC33Cu: goto label_7F1FC33C;
    case 0x7F1FC340u: goto label_7F1FC340;
    case 0x7F1FC344u: goto label_7F1FC344;
    case 0x7F1FC348u: goto label_7F1FC348;
    case 0x7F1FC34Cu: goto label_7F1FC34C;
    case 0x7F1FC350u: goto label_7F1FC350;
    case 0x7F1FC354u: goto label_7F1FC354;
    case 0x7F1FC358u: goto label_7F1FC358;
    case 0x7F1FC35Cu: goto label_7F1FC35C;
    case 0x7F1FC360u: goto label_7F1FC360;
    case 0x7F1FC364u: goto label_7F1FC364;
    case 0x7F1FC368u: goto label_7F1FC368;
    case 0x7F1FC36Cu: goto label_7F1FC36C;
    case 0x7F1FC370u: goto label_7F1FC370;
    case 0x7F1FC374u: goto label_7F1FC374;
    case 0x7F1FC378u: goto label_7F1FC378;
    case 0x7F1FC37Cu: goto label_7F1FC37C;
    case 0x7F1FC380u: goto label_7F1FC380;
    case 0x7F1FC384u: goto label_7F1FC384;
    case 0x7F1FC388u: goto label_7F1FC388;
    case 0x7F1FC38Cu: goto label_7F1FC38C;
    case 0x7F1FC390u: goto label_7F1FC390;
    case 0x7F1FC394u: goto label_7F1FC394;
    case 0x7F1FC398u: goto label_7F1FC398;
    case 0x7F1FC39Cu: goto label_7F1FC39C;
    case 0x7F1FC3A0u: goto label_7F1FC3A0;
    case 0x7F1FC3A4u: goto label_7F1FC3A4;
    case 0x7F1FC3A8u: goto label_7F1FC3A8;
    case 0x7F1FC3ACu: goto label_7F1FC3AC;
    case 0x7F1FC3B0u: goto label_7F1FC3B0;
    case 0x7F1FC3B4u: goto label_7F1FC3B4;
    case 0x7F1FC3B8u: goto label_7F1FC3B8;
    case 0x7F1FC3BCu: goto label_7F1FC3BC;
    case 0x7F1FC3C0u: goto label_7F1FC3C0;
    case 0x7F1FC3C4u: goto label_7F1FC3C4;
    case 0x7F1FC3C8u: goto label_7F1FC3C8;
    case 0x7F1FC3CCu: goto label_7F1FC3CC;
    case 0x7F1FC3D0u: goto label_7F1FC3D0;
    case 0x7F1FC3D4u: goto label_7F1FC3D4;
    case 0x7F1FC3D8u: goto label_7F1FC3D8;
    case 0x7F1FC3DCu: goto label_7F1FC3DC;
    case 0x7F1FC3E0u: goto label_7F1FC3E0;
    case 0x7F1FC3E4u: goto label_7F1FC3E4;
    case 0x7F1FC3E8u: goto label_7F1FC3E8;
    case 0x7F1FC3ECu: goto label_7F1FC3EC;
    case 0x7F1FC3F0u: goto label_7F1FC3F0;
    case 0x7F1FC3F4u: goto label_7F1FC3F4;
    case 0x7F1FC3F8u: goto label_7F1FC3F8;
    case 0x7F1FC3FCu: goto label_7F1FC3FC;
    case 0x7F1FC400u: goto label_7F1FC400;
    case 0x7F1FC404u: goto label_7F1FC404;
    case 0x7F1FC408u: goto label_7F1FC408;
    case 0x7F1FC40Cu: goto label_7F1FC40C;
    case 0x7F1FC410u: goto label_7F1FC410;
    case 0x7F1FC414u: goto label_7F1FC414;
    case 0x7F1FC418u: goto label_7F1FC418;
    case 0x7F1FC41Cu: goto label_7F1FC41C;
    case 0x7F1FC420u: goto label_7F1FC420;
    case 0x7F1FC424u: goto label_7F1FC424;
    case 0x7F1FC428u: goto label_7F1FC428;
    case 0x7F1FC42Cu: goto label_7F1FC42C;
    case 0x7F1FC430u: goto label_7F1FC430;
    case 0x7F1FC434u: goto label_7F1FC434;
    case 0x7F1FC438u: goto label_7F1FC438;
    case 0x7F1FC43Cu: goto label_7F1FC43C;
    case 0x7F1FC440u: goto label_7F1FC440;
    case 0x7F1FC444u: goto label_7F1FC444;
    case 0x7F1FC448u: goto label_7F1FC448;
    case 0x7F1FC44Cu: goto label_7F1FC44C;
    case 0x7F1FC450u: goto label_7F1FC450;
    case 0x7F1FC454u: goto label_7F1FC454;
    case 0x7F1FC458u: goto label_7F1FC458;
    case 0x7F1FC45Cu: goto label_7F1FC45C;
    case 0x7F1FC460u: goto label_7F1FC460;
    case 0x7F1FC464u: goto label_7F1FC464;
    case 0x7F1FC468u: goto label_7F1FC468;
    case 0x7F1FC46Cu: goto label_7F1FC46C;
    case 0x7F1FC470u: goto label_7F1FC470;
    case 0x7F1FC474u: goto label_7F1FC474;
    case 0x7F1FC478u: goto label_7F1FC478;
    case 0x7F1FC47Cu: goto label_7F1FC47C;
    case 0x7F1FC480u: goto label_7F1FC480;
    case 0x7F1FC484u: goto label_7F1FC484;
    case 0x7F1FC488u: goto label_7F1FC488;
    case 0x7F1FC48Cu: goto label_7F1FC48C;
    case 0x7F1FC490u: goto label_7F1FC490;
    case 0x7F1FC494u: goto label_7F1FC494;
    case 0x7F1FC498u: goto label_7F1FC498;
    case 0x7F1FC49Cu: goto label_7F1FC49C;
    case 0x7F1FC4A0u: goto label_7F1FC4A0;
    case 0x7F1FC4A4u: goto label_7F1FC4A4;
    case 0x7F1FC4A8u: goto label_7F1FC4A8;
    case 0x7F1FC4ACu: goto label_7F1FC4AC;
    case 0x7F1FC4B0u: goto label_7F1FC4B0;
    case 0x7F1FC4B4u: goto label_7F1FC4B4;
    case 0x7F1FC4B8u: goto label_7F1FC4B8;
    case 0x7F1FC4BCu: goto label_7F1FC4BC;
    case 0x7F1FC4C0u: goto label_7F1FC4C0;
    case 0x7F1FC4C4u: goto label_7F1FC4C4;
    case 0x7F1FC4C8u: goto label_7F1FC4C8;
    case 0x7F1FC4CCu: goto label_7F1FC4CC;
    case 0x7F1FC4D0u: goto label_7F1FC4D0;
    case 0x7F1FC4D4u: goto label_7F1FC4D4;
    case 0x7F1FC4D8u: goto label_7F1FC4D8;
    case 0x7F1FC4DCu: goto label_7F1FC4DC;
    case 0x7F1FC4E0u: goto label_7F1FC4E0;
    case 0x7F1FC4E4u: goto label_7F1FC4E4;
    case 0x7F1FC4E8u: goto label_7F1FC4E8;
    case 0x7F1FC4ECu: goto label_7F1FC4EC;
    case 0x7F1FC4F0u: goto label_7F1FC4F0;
    case 0x7F1FC4F4u: goto label_7F1FC4F4;
    case 0x7F1FC4F8u: goto label_7F1FC4F8;
    case 0x7F1FC4FCu: goto label_7F1FC4FC;
    case 0x7F1FC500u: goto label_7F1FC500;
    case 0x7F1FC504u: goto label_7F1FC504;
    case 0x7F1FC508u: goto label_7F1FC508;
    case 0x7F1FC50Cu: goto label_7F1FC50C;
    case 0x7F1FC510u: goto label_7F1FC510;
    case 0x7F1FC514u: goto label_7F1FC514;
    case 0x7F1FC518u: goto label_7F1FC518;
    case 0x7F1FC51Cu: goto label_7F1FC51C;
    case 0x7F1FC520u: goto label_7F1FC520;
    case 0x7F1FC524u: goto label_7F1FC524;
    case 0x7F1FC528u: goto label_7F1FC528;
    case 0x7F1FC52Cu: goto label_7F1FC52C;
    case 0x7F1FC530u: goto label_7F1FC530;
    case 0x7F1FC534u: goto label_7F1FC534;
    case 0x7F1FC538u: goto label_7F1FC538;
    case 0x7F1FC53Cu: goto label_7F1FC53C;
    case 0x7F1FC540u: goto label_7F1FC540;
    case 0x7F1FC544u: goto label_7F1FC544;
    case 0x7F1FC548u: goto label_7F1FC548;
    case 0x7F1FC54Cu: goto label_7F1FC54C;
    case 0x7F1FC550u: goto label_7F1FC550;
    case 0x7F1FC554u: goto label_7F1FC554;
    case 0x7F1FC558u: goto label_7F1FC558;
    case 0x7F1FC55Cu: goto label_7F1FC55C;
    case 0x7F1FC560u: goto label_7F1FC560;
    case 0x7F1FC564u: goto label_7F1FC564;
    case 0x7F1FC568u: goto label_7F1FC568;
    case 0x7F1FC56Cu: goto label_7F1FC56C;
    case 0x7F1FC570u: goto label_7F1FC570;
    case 0x7F1FC574u: goto label_7F1FC574;
    case 0x7F1FC578u: goto label_7F1FC578;
    case 0x7F1FC57Cu: goto label_7F1FC57C;
    case 0x7F1FC580u: goto label_7F1FC580;
    case 0x7F1FC584u: goto label_7F1FC584;
    case 0x7F1FC588u: goto label_7F1FC588;
    case 0x7F1FC58Cu: goto label_7F1FC58C;
    case 0x7F1FC590u: goto label_7F1FC590;
    case 0x7F1FC594u: goto label_7F1FC594;
    case 0x7F1FC598u: goto label_7F1FC598;
    case 0x7F1FC59Cu: goto label_7F1FC59C;
    case 0x7F1FC5A0u: goto label_7F1FC5A0;
    case 0x7F1FC5A4u: goto label_7F1FC5A4;
    case 0x7F1FC5A8u: goto label_7F1FC5A8;
    case 0x7F1FC5ACu: goto label_7F1FC5AC;
    case 0x7F1FC5B0u: goto label_7F1FC5B0;
    case 0x7F1FC5B4u: goto label_7F1FC5B4;
    case 0x7F1FC5B8u: goto label_7F1FC5B8;
    case 0x7F1FC5BCu: goto label_7F1FC5BC;
    case 0x7F1FC5C0u: goto label_7F1FC5C0;
    case 0x7F1FC5C4u: goto label_7F1FC5C4;
    case 0x7F1FC5C8u: goto label_7F1FC5C8;
    case 0x7F1FC5CCu: goto label_7F1FC5CC;
    case 0x7F1FC5D0u: goto label_7F1FC5D0;
    case 0x7F1FC5D4u: goto label_7F1FC5D4;
    case 0x7F1FC5D8u: goto label_7F1FC5D8;
    case 0x7F1FC5DCu: goto label_7F1FC5DC;
    case 0x7F1FC5E0u: goto label_7F1FC5E0;
    case 0x7F1FC5E4u: goto label_7F1FC5E4;
    case 0x7F1FC5E8u: goto label_7F1FC5E8;
    case 0x7F1FC5ECu: goto label_7F1FC5EC;
    case 0x7F1FC5F0u: goto label_7F1FC5F0;
    case 0x7F1FC5F4u: goto label_7F1FC5F4;
    case 0x7F1FC5F8u: goto label_7F1FC5F8;
    case 0x7F1FC5FCu: goto label_7F1FC5FC;
    case 0x7F1FC600u: goto label_7F1FC600;
    case 0x7F1FC604u: goto label_7F1FC604;
    case 0x7F1FC608u: goto label_7F1FC608;
    case 0x7F1FC60Cu: goto label_7F1FC60C;
    case 0x7F1FC610u: goto label_7F1FC610;
    case 0x7F1FC614u: goto label_7F1FC614;
    case 0x7F1FC618u: goto label_7F1FC618;
    case 0x7F1FC61Cu: goto label_7F1FC61C;
    case 0x7F1FC620u: goto label_7F1FC620;
    case 0x7F1FC624u: goto label_7F1FC624;
    case 0x7F1FC628u: goto label_7F1FC628;
    case 0x7F1FC62Cu: goto label_7F1FC62C;
    case 0x7F1FC630u: goto label_7F1FC630;
    case 0x7F1FC634u: goto label_7F1FC634;
    case 0x7F1FC638u: goto label_7F1FC638;
    case 0x7F1FC63Cu: goto label_7F1FC63C;
    case 0x7F1FC640u: goto label_7F1FC640;
    case 0x7F1FC644u: goto label_7F1FC644;
    case 0x7F1FC648u: goto label_7F1FC648;
    case 0x7F1FC64Cu: goto label_7F1FC64C;
    case 0x7F1FC650u: goto label_7F1FC650;
    case 0x7F1FC654u: goto label_7F1FC654;
    case 0x7F1FC658u: goto label_7F1FC658;
    case 0x7F1FC65Cu: goto label_7F1FC65C;
    case 0x7F1FC660u: goto label_7F1FC660;
    case 0x7F1FC664u: goto label_7F1FC664;
    case 0x7F1FC668u: goto label_7F1FC668;
    case 0x7F1FC66Cu: goto label_7F1FC66C;
    case 0x7F1FC670u: goto label_7F1FC670;
    case 0x7F1FC674u: goto label_7F1FC674;
    case 0x7F1FC678u: goto label_7F1FC678;
    case 0x7F1FC67Cu: goto label_7F1FC67C;
    case 0x7F1FC680u: goto label_7F1FC680;
    case 0x7F1FC684u: goto label_7F1FC684;
    case 0x7F1FC688u: goto label_7F1FC688;
    case 0x7F1FC68Cu: goto label_7F1FC68C;
    case 0x7F1FC690u: goto label_7F1FC690;
    case 0x7F1FC694u: goto label_7F1FC694;
    case 0x7F1FC698u: goto label_7F1FC698;
    case 0x7F1FC69Cu: goto label_7F1FC69C;
    case 0x7F1FC6A0u: goto label_7F1FC6A0;
    case 0x7F1FC6A4u: goto label_7F1FC6A4;
    case 0x7F1FC6A8u: goto label_7F1FC6A8;
    case 0x7F1FC6ACu: goto label_7F1FC6AC;
    case 0x7F1FC6B0u: goto label_7F1FC6B0;
    case 0x7F1FC6B4u: goto label_7F1FC6B4;
    case 0x7F1FC6B8u: goto label_7F1FC6B8;
    case 0x7F1FC6BCu: goto label_7F1FC6BC;
    case 0x7F1FC6C0u: goto label_7F1FC6C0;
    case 0x7F1FC6C4u: goto label_7F1FC6C4;
    case 0x7F1FC6C8u: goto label_7F1FC6C8;
    case 0x7F1FC6CCu: goto label_7F1FC6CC;
    case 0x7F1FC6D0u: goto label_7F1FC6D0;
    case 0x7F1FC6D4u: goto label_7F1FC6D4;
    case 0x7F1FC6D8u: goto label_7F1FC6D8;
    case 0x7F1FC6DCu: goto label_7F1FC6DC;
    case 0x7F1FC6E0u: goto label_7F1FC6E0;
    case 0x7F1FC6E4u: goto label_7F1FC6E4;
    case 0x7F1FC6E8u: goto label_7F1FC6E8;
    case 0x7F1FC6ECu: goto label_7F1FC6EC;
    case 0x7F1FC6F0u: goto label_7F1FC6F0;
    case 0x7F1FC6F4u: goto label_7F1FC6F4;
    case 0x7F1FC6F8u: goto label_7F1FC6F8;
    case 0x7F1FC6FCu: goto label_7F1FC6FC;
    case 0x7F1FC700u: goto label_7F1FC700;
    case 0x7F1FC704u: goto label_7F1FC704;
    case 0x7F1FC708u: goto label_7F1FC708;
    case 0x7F1FC70Cu: goto label_7F1FC70C;
    case 0x7F1FC710u: goto label_7F1FC710;
    case 0x7F1FC714u: goto label_7F1FC714;
    case 0x7F1FC718u: goto label_7F1FC718;
    case 0x7F1FC71Cu: goto label_7F1FC71C;
    case 0x7F1FC720u: goto label_7F1FC720;
    case 0x7F1FC724u: goto label_7F1FC724;
    case 0x7F1FC728u: goto label_7F1FC728;
    case 0x7F1FC72Cu: goto label_7F1FC72C;
    case 0x7F1FC730u: goto label_7F1FC730;
    case 0x7F1FC734u: goto label_7F1FC734;
    case 0x7F1FC738u: goto label_7F1FC738;
    case 0x7F1FC73Cu: goto label_7F1FC73C;
    case 0x7F1FC740u: goto label_7F1FC740;
    case 0x7F1FC744u: goto label_7F1FC744;
    case 0x7F1FC748u: goto label_7F1FC748;
    case 0x7F1FC74Cu: goto label_7F1FC74C;
    case 0x7F1FC750u: goto label_7F1FC750;
    case 0x7F1FC754u: goto label_7F1FC754;
    case 0x7F1FC758u: goto label_7F1FC758;
    case 0x7F1FC75Cu: goto label_7F1FC75C;
    case 0x7F1FC760u: goto label_7F1FC760;
    case 0x7F1FC764u: goto label_7F1FC764;
    case 0x7F1FC768u: goto label_7F1FC768;
    case 0x7F1FC76Cu: goto label_7F1FC76C;
    case 0x7F1FC770u: goto label_7F1FC770;
    case 0x7F1FC774u: goto label_7F1FC774;
    case 0x7F1FC778u: goto label_7F1FC778;
    case 0x7F1FC77Cu: goto label_7F1FC77C;
    case 0x7F1FC780u: goto label_7F1FC780;
    case 0x7F1FC784u: goto label_7F1FC784;
    case 0x7F1FC788u: goto label_7F1FC788;
    case 0x7F1FC78Cu: goto label_7F1FC78C;
    case 0x7F1FC790u: goto label_7F1FC790;
    case 0x7F1FC794u: goto label_7F1FC794;
    case 0x7F1FC798u: goto label_7F1FC798;
    case 0x7F1FC79Cu: goto label_7F1FC79C;
    case 0x7F1FC7A0u: goto label_7F1FC7A0;
    case 0x7F1FC7A4u: goto label_7F1FC7A4;
    case 0x7F1FC7A8u: goto label_7F1FC7A8;
    case 0x7F1FC7ACu: goto label_7F1FC7AC;
    case 0x7F1FC7B0u: goto label_7F1FC7B0;
    case 0x7F1FC7B4u: goto label_7F1FC7B4;
    case 0x7F1FC7B8u: goto label_7F1FC7B8;
    case 0x7F1FC7BCu: goto label_7F1FC7BC;
    case 0x7F1FC7C0u: goto label_7F1FC7C0;
    case 0x7F1FC7C4u: goto label_7F1FC7C4;
    case 0x7F1FC7C8u: goto label_7F1FC7C8;
    case 0x7F1FC7CCu: goto label_7F1FC7CC;
    case 0x7F1FC7D0u: goto label_7F1FC7D0;
    case 0x7F1FC7D4u: goto label_7F1FC7D4;
    case 0x7F1FC7D8u: goto label_7F1FC7D8;
    case 0x7F1FC7DCu: goto label_7F1FC7DC;
    case 0x7F1FC7E0u: goto label_7F1FC7E0;
    case 0x7F1FC7E4u: goto label_7F1FC7E4;
    case 0x7F1FC7E8u: goto label_7F1FC7E8;
    case 0x7F1FC7ECu: goto label_7F1FC7EC;
    case 0x7F1FC7F0u: goto label_7F1FC7F0;
    case 0x7F1FC7F4u: goto label_7F1FC7F4;
    case 0x7F1FC7F8u: goto label_7F1FC7F8;
    case 0x7F1FC7FCu: goto label_7F1FC7FC;
    case 0x7F1FC800u: goto label_7F1FC800;
    case 0x7F1FC804u: goto label_7F1FC804;
    case 0x7F1FC808u: goto label_7F1FC808;
    case 0x7F1FC80Cu: goto label_7F1FC80C;
    case 0x7F1FC810u: goto label_7F1FC810;
    case 0x7F1FC814u: goto label_7F1FC814;
    case 0x7F1FC818u: goto label_7F1FC818;
    case 0x7F1FC81Cu: goto label_7F1FC81C;
    case 0x7F1FC820u: goto label_7F1FC820;
    case 0x7F1FC824u: goto label_7F1FC824;
    case 0x7F1FC828u: goto label_7F1FC828;
    case 0x7F1FC82Cu: goto label_7F1FC82C;
    case 0x7F1FC830u: goto label_7F1FC830;
    case 0x7F1FC834u: goto label_7F1FC834;
    case 0x7F1FC838u: goto label_7F1FC838;
    case 0x7F1FC83Cu: goto label_7F1FC83C;
    case 0x7F1FC840u: goto label_7F1FC840;
    case 0x7F1FC844u: goto label_7F1FC844;
    case 0x7F1FC848u: goto label_7F1FC848;
    case 0x7F1FC84Cu: goto label_7F1FC84C;
    case 0x7F1FC850u: goto label_7F1FC850;
    case 0x7F1FC854u: goto label_7F1FC854;
    case 0x7F1FC858u: goto label_7F1FC858;
    case 0x7F1FC85Cu: goto label_7F1FC85C;
    case 0x7F1FC860u: goto label_7F1FC860;
    case 0x7F1FC864u: goto label_7F1FC864;
    case 0x7F1FC868u: goto label_7F1FC868;
    case 0x7F1FC86Cu: goto label_7F1FC86C;
    case 0x7F1FC870u: goto label_7F1FC870;
    case 0x7F1FC874u: goto label_7F1FC874;
    case 0x7F1FC878u: goto label_7F1FC878;
    case 0x7F1FC87Cu: goto label_7F1FC87C;
    case 0x7F1FC880u: goto label_7F1FC880;
    case 0x7F1FC884u: goto label_7F1FC884;
    case 0x7F1FC888u: goto label_7F1FC888;
    case 0x7F1FC88Cu: goto label_7F1FC88C;
    case 0x7F1FC890u: goto label_7F1FC890;
    case 0x7F1FC894u: goto label_7F1FC894;
    case 0x7F1FC898u: goto label_7F1FC898;
    case 0x7F1FC89Cu: goto label_7F1FC89C;
    case 0x7F1FC8A0u: goto label_7F1FC8A0;
    case 0x7F1FC8A4u: goto label_7F1FC8A4;
    case 0x7F1FC8A8u: goto label_7F1FC8A8;
    case 0x7F1FC8ACu: goto label_7F1FC8AC;
    case 0x7F1FC8B0u: goto label_7F1FC8B0;
    case 0x7F1FC8B4u: goto label_7F1FC8B4;
    case 0x7F1FC8B8u: goto label_7F1FC8B8;
    case 0x7F1FC8BCu: goto label_7F1FC8BC;
    case 0x7F1FC8C0u: goto label_7F1FC8C0;
    case 0x7F1FC8C4u: goto label_7F1FC8C4;
    case 0x7F1FC8C8u: goto label_7F1FC8C8;
    case 0x7F1FC8CCu: goto label_7F1FC8CC;
    case 0x7F1FC8D0u: goto label_7F1FC8D0;
    case 0x7F1FC8D4u: goto label_7F1FC8D4;
    case 0x7F1FC8D8u: goto label_7F1FC8D8;
    case 0x7F1FC8DCu: goto label_7F1FC8DC;
    case 0x7F1FC8E0u: goto label_7F1FC8E0;
    case 0x7F1FC8E4u: goto label_7F1FC8E4;
    case 0x7F1FC8E8u: goto label_7F1FC8E8;
    case 0x7F1FC8ECu: goto label_7F1FC8EC;
    case 0x7F1FC8F0u: goto label_7F1FC8F0;
    case 0x7F1FC8F4u: goto label_7F1FC8F4;
    case 0x7F1FC8F8u: goto label_7F1FC8F8;
    case 0x7F1FC8FCu: goto label_7F1FC8FC;
    case 0x7F1FC900u: goto label_7F1FC900;
    case 0x7F1FC904u: goto label_7F1FC904;
    case 0x7F1FC908u: goto label_7F1FC908;
    case 0x7F1FC90Cu: goto label_7F1FC90C;
    case 0x7F1FC910u: goto label_7F1FC910;
    case 0x7F1FC914u: goto label_7F1FC914;
    case 0x7F1FC918u: goto label_7F1FC918;
    case 0x7F1FC91Cu: goto label_7F1FC91C;
    case 0x7F1FC920u: goto label_7F1FC920;
    case 0x7F1FC924u: goto label_7F1FC924;
    case 0x7F1FC928u: goto label_7F1FC928;
    case 0x7F1FC92Cu: goto label_7F1FC92C;
    case 0x7F1FC930u: goto label_7F1FC930;
    case 0x7F1FC934u: goto label_7F1FC934;
    case 0x7F1FC938u: goto label_7F1FC938;
    case 0x7F1FC93Cu: goto label_7F1FC93C;
    case 0x7F1FC940u: goto label_7F1FC940;
    case 0x7F1FC944u: goto label_7F1FC944;
    case 0x7F1FC948u: goto label_7F1FC948;
    case 0x7F1FC94Cu: goto label_7F1FC94C;
    case 0x7F1FC950u: goto label_7F1FC950;
    case 0x7F1FC954u: goto label_7F1FC954;
    case 0x7F1FC958u: goto label_7F1FC958;
    case 0x7F1FC95Cu: goto label_7F1FC95C;
    case 0x7F1FC960u: goto label_7F1FC960;
    case 0x7F1FC964u: goto label_7F1FC964;
    case 0x7F1FC968u: goto label_7F1FC968;
    case 0x7F1FC96Cu: goto label_7F1FC96C;
    case 0x7F1FC970u: goto label_7F1FC970;
    case 0x7F1FC974u: goto label_7F1FC974;
    case 0x7F1FC978u: goto label_7F1FC978;
    case 0x7F1FC97Cu: goto label_7F1FC97C;
    case 0x7F1FC980u: goto label_7F1FC980;
    case 0x7F1FC984u: goto label_7F1FC984;
    case 0x7F1FC988u: goto label_7F1FC988;
    case 0x7F1FC98Cu: goto label_7F1FC98C;
    case 0x7F1FC990u: goto label_7F1FC990;
    case 0x7F1FC994u: goto label_7F1FC994;
    case 0x7F1FC998u: goto label_7F1FC998;
    case 0x7F1FC99Cu: goto label_7F1FC99C;
    case 0x7F1FC9A0u: goto label_7F1FC9A0;
    case 0x7F1FC9A4u: goto label_7F1FC9A4;
    case 0x7F1FC9A8u: goto label_7F1FC9A8;
    case 0x7F1FC9ACu: goto label_7F1FC9AC;
    case 0x7F1FC9B0u: goto label_7F1FC9B0;
    case 0x7F1FC9B4u: goto label_7F1FC9B4;
    case 0x7F1FC9B8u: goto label_7F1FC9B8;
    case 0x7F1FC9BCu: goto label_7F1FC9BC;
    case 0x7F1FC9C0u: goto label_7F1FC9C0;
    case 0x7F1FC9C4u: goto label_7F1FC9C4;
    case 0x7F1FC9C8u: goto label_7F1FC9C8;
    case 0x7F1FC9CCu: goto label_7F1FC9CC;
    case 0x7F1FC9D0u: goto label_7F1FC9D0;
    case 0x7F1FC9D4u: goto label_7F1FC9D4;
    case 0x7F1FC9D8u: goto label_7F1FC9D8;
    case 0x7F1FC9DCu: goto label_7F1FC9DC;
    case 0x7F1FC9E0u: goto label_7F1FC9E0;
    case 0x7F1FC9E4u: goto label_7F1FC9E4;
    case 0x7F1FC9E8u: goto label_7F1FC9E8;
    case 0x7F1FC9ECu: goto label_7F1FC9EC;
    case 0x7F1FC9F0u: goto label_7F1FC9F0;
    case 0x7F1FC9F4u: goto label_7F1FC9F4;
    case 0x7F1FC9F8u: goto label_7F1FC9F8;
    case 0x7F1FC9FCu: goto label_7F1FC9FC;
    case 0x7F1FCA00u: goto label_7F1FCA00;
    case 0x7F1FCA04u: goto label_7F1FCA04;
    case 0x7F1FCA08u: goto label_7F1FCA08;
    case 0x7F1FCA0Cu: goto label_7F1FCA0C;
    case 0x7F1FCA10u: goto label_7F1FCA10;
    case 0x7F1FCA14u: goto label_7F1FCA14;
    case 0x7F1FCA18u: goto label_7F1FCA18;
    case 0x7F1FCA1Cu: goto label_7F1FCA1C;
    case 0x7F1FCA20u: goto label_7F1FCA20;
    case 0x7F1FCA24u: goto label_7F1FCA24;
    case 0x7F1FCA28u: goto label_7F1FCA28;
    case 0x7F1FCA2Cu: goto label_7F1FCA2C;
    case 0x7F1FCA30u: goto label_7F1FCA30;
    case 0x7F1FCA34u: goto label_7F1FCA34;
    case 0x7F1FCA38u: goto label_7F1FCA38;
    case 0x7F1FCA3Cu: goto label_7F1FCA3C;
    case 0x7F1FCA40u: goto label_7F1FCA40;
    case 0x7F1FCA44u: goto label_7F1FCA44;
    case 0x7F1FCA48u: goto label_7F1FCA48;
    case 0x7F1FCA4Cu: goto label_7F1FCA4C;
    case 0x7F1FCA50u: goto label_7F1FCA50;
    case 0x7F1FCA54u: goto label_7F1FCA54;
    case 0x7F1FCA58u: goto label_7F1FCA58;
    case 0x7F1FCA5Cu: goto label_7F1FCA5C;
    case 0x7F1FCA60u: goto label_7F1FCA60;
    case 0x7F1FCA64u: goto label_7F1FCA64;
    case 0x7F1FCA68u: goto label_7F1FCA68;
    case 0x7F1FCA6Cu: goto label_7F1FCA6C;
    case 0x7F1FCA70u: goto label_7F1FCA70;
    case 0x7F1FCA74u: goto label_7F1FCA74;
    case 0x7F1FCA78u: goto label_7F1FCA78;
    case 0x7F1FCA7Cu: goto label_7F1FCA7C;
    case 0x7F1FCA80u: goto label_7F1FCA80;
    case 0x7F1FCA84u: goto label_7F1FCA84;
    case 0x7F1FCA88u: goto label_7F1FCA88;
    case 0x7F1FCA8Cu: goto label_7F1FCA8C;
    case 0x7F1FCA90u: goto label_7F1FCA90;
    case 0x7F1FCA94u: goto label_7F1FCA94;
    case 0x7F1FCA98u: goto label_7F1FCA98;
    case 0x7F1FCA9Cu: goto label_7F1FCA9C;
    case 0x7F1FCAA0u: goto label_7F1FCAA0;
    case 0x7F1FCAA4u: goto label_7F1FCAA4;
    case 0x7F1FCAA8u: goto label_7F1FCAA8;
    case 0x7F1FCAACu: goto label_7F1FCAAC;
    case 0x7F1FCAB0u: goto label_7F1FCAB0;
    case 0x7F1FCAB4u: goto label_7F1FCAB4;
    case 0x7F1FCAB8u: goto label_7F1FCAB8;
    case 0x7F1FCABCu: goto label_7F1FCABC;
    case 0x7F1FCAC0u: goto label_7F1FCAC0;
    case 0x7F1FCAC4u: goto label_7F1FCAC4;
    case 0x7F1FCAC8u: goto label_7F1FCAC8;
    case 0x7F1FCACCu: goto label_7F1FCACC;
    case 0x7F1FCAD0u: goto label_7F1FCAD0;
    case 0x7F1FCAD4u: goto label_7F1FCAD4;
    case 0x7F1FCAD8u: goto label_7F1FCAD8;
    case 0x7F1FCADCu: goto label_7F1FCADC;
    case 0x7F1FCAE0u: goto label_7F1FCAE0;
    case 0x7F1FCAE4u: goto label_7F1FCAE4;
    case 0x7F1FCAE8u: goto label_7F1FCAE8;
    case 0x7F1FCAECu: goto label_7F1FCAEC;
    case 0x7F1FCAF0u: goto label_7F1FCAF0;
    case 0x7F1FCAF4u: goto label_7F1FCAF4;
    case 0x7F1FCAF8u: goto label_7F1FCAF8;
    case 0x7F1FCAFCu: goto label_7F1FCAFC;
    case 0x7F1FCB00u: goto label_7F1FCB00;
    case 0x7F1FCB04u: goto label_7F1FCB04;
    case 0x7F1FCB08u: goto label_7F1FCB08;
    case 0x7F1FCB0Cu: goto label_7F1FCB0C;
    case 0x7F1FCB10u: goto label_7F1FCB10;
    case 0x7F1FCB14u: goto label_7F1FCB14;
    case 0x7F1FCB18u: goto label_7F1FCB18;
    case 0x7F1FCB1Cu: goto label_7F1FCB1C;
    case 0x7F1FCB20u: goto label_7F1FCB20;
    case 0x7F1FCB24u: goto label_7F1FCB24;
    case 0x7F1FCB28u: goto label_7F1FCB28;
    case 0x7F1FCB2Cu: goto label_7F1FCB2C;
    case 0x7F1FCB30u: goto label_7F1FCB30;
    case 0x7F1FCB34u: goto label_7F1FCB34;
    case 0x7F1FCB38u: goto label_7F1FCB38;
    case 0x7F1FCB3Cu: goto label_7F1FCB3C;
    case 0x7F1FCB40u: goto label_7F1FCB40;
    case 0x7F1FCB44u: goto label_7F1FCB44;
    case 0x7F1FCB48u: goto label_7F1FCB48;
    case 0x7F1FCB4Cu: goto label_7F1FCB4C;
    case 0x7F1FCB50u: goto label_7F1FCB50;
    case 0x7F1FCB54u: goto label_7F1FCB54;
    case 0x7F1FCB58u: goto label_7F1FCB58;
    case 0x7F1FCB5Cu: goto label_7F1FCB5C;
    case 0x7F1FCB60u: goto label_7F1FCB60;
    case 0x7F1FCB64u: goto label_7F1FCB64;
    case 0x7F1FCB68u: goto label_7F1FCB68;
    case 0x7F1FCB6Cu: goto label_7F1FCB6C;
    case 0x7F1FCB70u: goto label_7F1FCB70;
    case 0x7F1FCB74u: goto label_7F1FCB74;
    case 0x7F1FCB78u: goto label_7F1FCB78;
    case 0x7F1FCB7Cu: goto label_7F1FCB7C;
    case 0x7F1FCB80u: goto label_7F1FCB80;
    case 0x7F1FCB84u: goto label_7F1FCB84;
    case 0x7F1FCB88u: goto label_7F1FCB88;
    case 0x7F1FCB8Cu: goto label_7F1FCB8C;
    case 0x7F1FCB90u: goto label_7F1FCB90;
    case 0x7F1FCB94u: goto label_7F1FCB94;
    case 0x7F1FCB98u: goto label_7F1FCB98;
    case 0x7F1FCB9Cu: goto label_7F1FCB9C;
    case 0x7F1FCBA0u: goto label_7F1FCBA0;
    case 0x7F1FCBA4u: goto label_7F1FCBA4;
    case 0x7F1FCBA8u: goto label_7F1FCBA8;
    case 0x7F1FCBACu: goto label_7F1FCBAC;
    case 0x7F1FCBB0u: goto label_7F1FCBB0;
    case 0x7F1FCBB4u: goto label_7F1FCBB4;
    case 0x7F1FCBB8u: goto label_7F1FCBB8;
    case 0x7F1FCBBCu: goto label_7F1FCBBC;
    case 0x7F1FCBC0u: goto label_7F1FCBC0;
    case 0x7F1FCBC4u: goto label_7F1FCBC4;
    case 0x7F1FCBC8u: goto label_7F1FCBC8;
    case 0x7F1FCBCCu: goto label_7F1FCBCC;
    case 0x7F1FCBD0u: goto label_7F1FCBD0;
    case 0x7F1FCBD4u: goto label_7F1FCBD4;
    case 0x7F1FCBD8u: goto label_7F1FCBD8;
    case 0x7F1FCBDCu: goto label_7F1FCBDC;
    case 0x7F1FCBE0u: goto label_7F1FCBE0;
    case 0x7F1FCBE4u: goto label_7F1FCBE4;
    case 0x7F1FCBE8u: goto label_7F1FCBE8;
    case 0x7F1FCBECu: goto label_7F1FCBEC;
    case 0x7F1FCBF0u: goto label_7F1FCBF0;
    case 0x7F1FCBF4u: goto label_7F1FCBF4;
    case 0x7F1FCBF8u: goto label_7F1FCBF8;
    case 0x7F1FCBFCu: goto label_7F1FCBFC;
    case 0x7F1FCC00u: goto label_7F1FCC00;
    case 0x7F1FCC04u: goto label_7F1FCC04;
    case 0x7F1FCC08u: goto label_7F1FCC08;
    case 0x7F1FCC0Cu: goto label_7F1FCC0C;
    case 0x7F1FCC10u: goto label_7F1FCC10;
    case 0x7F1FCC14u: goto label_7F1FCC14;
    case 0x7F1FCC18u: goto label_7F1FCC18;
    case 0x7F1FCC1Cu: goto label_7F1FCC1C;
    case 0x7F1FCC20u: goto label_7F1FCC20;
    case 0x7F1FCC24u: goto label_7F1FCC24;
    case 0x7F1FCC28u: goto label_7F1FCC28;
    case 0x7F1FCC2Cu: goto label_7F1FCC2C;
    case 0x7F1FCC30u: goto label_7F1FCC30;
    case 0x7F1FCC34u: goto label_7F1FCC34;
    case 0x7F1FCC38u: goto label_7F1FCC38;
    case 0x7F1FCC3Cu: goto label_7F1FCC3C;
    case 0x7F1FCC40u: goto label_7F1FCC40;
    case 0x7F1FCC44u: goto label_7F1FCC44;
    case 0x7F1FCC48u: goto label_7F1FCC48;
    case 0x7F1FCC4Cu: goto label_7F1FCC4C;
    case 0x7F1FCC50u: goto label_7F1FCC50;
    case 0x7F1FCC54u: goto label_7F1FCC54;
    case 0x7F1FCC58u: goto label_7F1FCC58;
    case 0x7F1FCC5Cu: goto label_7F1FCC5C;
    case 0x7F1FCC60u: goto label_7F1FCC60;
    case 0x7F1FCC64u: goto label_7F1FCC64;
    case 0x7F1FCC68u: goto label_7F1FCC68;
    case 0x7F1FCC6Cu: goto label_7F1FCC6C;
    case 0x7F1FCC70u: goto label_7F1FCC70;
    case 0x7F1FCC74u: goto label_7F1FCC74;
    case 0x7F1FCC78u: goto label_7F1FCC78;
    case 0x7F1FCC7Cu: goto label_7F1FCC7C;
    case 0x7F1FCC80u: goto label_7F1FCC80;
    case 0x7F1FCC84u: goto label_7F1FCC84;
    case 0x7F1FCC88u: goto label_7F1FCC88;
    case 0x7F1FCC8Cu: goto label_7F1FCC8C;
    case 0x7F1FCC90u: goto label_7F1FCC90;
    case 0x7F1FCC94u: goto label_7F1FCC94;
    case 0x7F1FCC98u: goto label_7F1FCC98;
    case 0x7F1FCC9Cu: goto label_7F1FCC9C;
    case 0x7F1FCCA0u: goto label_7F1FCCA0;
    case 0x7F1FCCA4u: goto label_7F1FCCA4;
    case 0x7F1FCCA8u: goto label_7F1FCCA8;
    case 0x7F1FCCACu: goto label_7F1FCCAC;
    case 0x7F1FCCB0u: goto label_7F1FCCB0;
    case 0x7F1FCCB4u: goto label_7F1FCCB4;
    case 0x7F1FCCB8u: goto label_7F1FCCB8;
    case 0x7F1FCCBCu: goto label_7F1FCCBC;
    case 0x7F1FCCC0u: goto label_7F1FCCC0;
    case 0x7F1FCCC4u: goto label_7F1FCCC4;
    case 0x7F1FCCC8u: goto label_7F1FCCC8;
    case 0x7F1FCCCCu: goto label_7F1FCCCC;
    case 0x7F1FCCD0u: goto label_7F1FCCD0;
    case 0x7F1FCCD4u: goto label_7F1FCCD4;
    case 0x7F1FCCD8u: goto label_7F1FCCD8;
    case 0x7F1FCCDCu: goto label_7F1FCCDC;
    case 0x7F1FCCE0u: goto label_7F1FCCE0;
    case 0x7F1FCCE4u: goto label_7F1FCCE4;
    case 0x7F1FCCE8u: goto label_7F1FCCE8;
    case 0x7F1FCCECu: goto label_7F1FCCEC;
    case 0x7F1FCCF0u: goto label_7F1FCCF0;
    case 0x7F1FCCF4u: goto label_7F1FCCF4;
    case 0x7F1FCCF8u: goto label_7F1FCCF8;
    case 0x7F1FCCFCu: goto label_7F1FCCFC;
    case 0x7F1FCD00u: goto label_7F1FCD00;
    case 0x7F1FCD04u: goto label_7F1FCD04;
    case 0x7F1FCD08u: goto label_7F1FCD08;
    case 0x7F1FCD0Cu: goto label_7F1FCD0C;
    case 0x7F1FCD10u: goto label_7F1FCD10;
    case 0x7F1FCD14u: goto label_7F1FCD14;
    case 0x7F1FCD18u: goto label_7F1FCD18;
    case 0x7F1FCD1Cu: goto label_7F1FCD1C;
    case 0x7F1FCD20u: goto label_7F1FCD20;
    case 0x7F1FCD24u: goto label_7F1FCD24;
    case 0x7F1FCD28u: goto label_7F1FCD28;
    case 0x7F1FCD2Cu: goto label_7F1FCD2C;
    case 0x7F1FCD30u: goto label_7F1FCD30;
    case 0x7F1FCD34u: goto label_7F1FCD34;
    case 0x7F1FCD38u: goto label_7F1FCD38;
    case 0x7F1FCD3Cu: goto label_7F1FCD3C;
    case 0x7F1FCD40u: goto label_7F1FCD40;
    case 0x7F1FCD44u: goto label_7F1FCD44;
    case 0x7F1FCD48u: goto label_7F1FCD48;
    case 0x7F1FCD4Cu: goto label_7F1FCD4C;
    case 0x7F1FCD50u: goto label_7F1FCD50;
    case 0x7F1FCD54u: goto label_7F1FCD54;
    case 0x7F1FCD58u: goto label_7F1FCD58;
    case 0x7F1FCD5Cu: goto label_7F1FCD5C;
    case 0x7F1FCD60u: goto label_7F1FCD60;
    case 0x7F1FCD64u: goto label_7F1FCD64;
    case 0x7F1FCD68u: goto label_7F1FCD68;
    case 0x7F1FCD6Cu: goto label_7F1FCD6C;
    case 0x7F1FCD70u: goto label_7F1FCD70;
    case 0x7F1FCD74u: goto label_7F1FCD74;
    case 0x7F1FCD78u: goto label_7F1FCD78;
    case 0x7F1FCD7Cu: goto label_7F1FCD7C;
    case 0x7F1FCD80u: goto label_7F1FCD80;
    case 0x7F1FCD84u: goto label_7F1FCD84;
    case 0x7F1FCD88u: goto label_7F1FCD88;
    case 0x7F1FCD8Cu: goto label_7F1FCD8C;
    case 0x7F1FCD90u: goto label_7F1FCD90;
    case 0x7F1FCD94u: goto label_7F1FCD94;
    case 0x7F1FCD98u: goto label_7F1FCD98;
    case 0x7F1FCD9Cu: goto label_7F1FCD9C;
    case 0x7F1FCDA0u: goto label_7F1FCDA0;
    case 0x7F1FCDA4u: goto label_7F1FCDA4;
    case 0x7F1FCDA8u: goto label_7F1FCDA8;
    case 0x7F1FCDACu: goto label_7F1FCDAC;
    case 0x7F1FCDB0u: goto label_7F1FCDB0;
    case 0x7F1FCDB4u: goto label_7F1FCDB4;
    case 0x7F1FCDB8u: goto label_7F1FCDB8;
    case 0x7F1FCDBCu: goto label_7F1FCDBC;
    case 0x7F1FCDC0u: goto label_7F1FCDC0;
    case 0x7F1FCDC4u: goto label_7F1FCDC4;
    case 0x7F1FCDC8u: goto label_7F1FCDC8;
    case 0x7F1FCDCCu: goto label_7F1FCDCC;
    case 0x7F1FCDD0u: goto label_7F1FCDD0;
    case 0x7F1FCDD4u: goto label_7F1FCDD4;
    case 0x7F1FCDD8u: goto label_7F1FCDD8;
    case 0x7F1FCDDCu: goto label_7F1FCDDC;
    case 0x7F1FCDE0u: goto label_7F1FCDE0;
    case 0x7F1FCDE4u: goto label_7F1FCDE4;
    case 0x7F1FCDE8u: goto label_7F1FCDE8;
    case 0x7F1FCDECu: goto label_7F1FCDEC;
    case 0x7F1FCDF0u: goto label_7F1FCDF0;
    case 0x7F1FCDF4u: goto label_7F1FCDF4;
    case 0x7F1FCDF8u: goto label_7F1FCDF8;
    case 0x7F1FCDFCu: goto label_7F1FCDFC;
    case 0x7F1FCE00u: goto label_7F1FCE00;
    case 0x7F1FCE04u: goto label_7F1FCE04;
    case 0x7F1FCE08u: goto label_7F1FCE08;
    case 0x7F1FCE0Cu: goto label_7F1FCE0C;
    case 0x7F1FCE10u: goto label_7F1FCE10;
    case 0x7F1FCE14u: goto label_7F1FCE14;
    case 0x7F1FCE18u: goto label_7F1FCE18;
    case 0x7F1FCE1Cu: goto label_7F1FCE1C;
    case 0x7F1FCE20u: goto label_7F1FCE20;
    case 0x7F1FCE24u: goto label_7F1FCE24;
    case 0x7F1FCE28u: goto label_7F1FCE28;
    case 0x7F1FCE2Cu: goto label_7F1FCE2C;
    case 0x7F1FCE30u: goto label_7F1FCE30;
    case 0x7F1FCE34u: goto label_7F1FCE34;
    case 0x7F1FCE38u: goto label_7F1FCE38;
    case 0x7F1FCE3Cu: goto label_7F1FCE3C;
    case 0x7F1FCE40u: goto label_7F1FCE40;
    case 0x7F1FCE44u: goto label_7F1FCE44;
    case 0x7F1FCE48u: goto label_7F1FCE48;
    case 0x7F1FCE4Cu: goto label_7F1FCE4C;
    case 0x7F1FCE50u: goto label_7F1FCE50;
    case 0x7F1FCE54u: goto label_7F1FCE54;
    case 0x7F1FCE58u: goto label_7F1FCE58;
    case 0x7F1FCE5Cu: goto label_7F1FCE5C;
    case 0x7F1FCE60u: goto label_7F1FCE60;
    case 0x7F1FCE64u: goto label_7F1FCE64;
    case 0x7F1FCE68u: goto label_7F1FCE68;
    case 0x7F1FCE6Cu: goto label_7F1FCE6C;
    case 0x7F1FCE70u: goto label_7F1FCE70;
    case 0x7F1FCE74u: goto label_7F1FCE74;
    case 0x7F1FCE78u: goto label_7F1FCE78;
    case 0x7F1FCE7Cu: goto label_7F1FCE7C;
    case 0x7F1FCE80u: goto label_7F1FCE80;
    case 0x7F1FCE84u: goto label_7F1FCE84;
    case 0x7F1FCE88u: goto label_7F1FCE88;
    case 0x7F1FCE8Cu: goto label_7F1FCE8C;
    case 0x7F1FCE90u: goto label_7F1FCE90;
    case 0x7F1FCE94u: goto label_7F1FCE94;
    case 0x7F1FCE98u: goto label_7F1FCE98;
    case 0x7F1FCE9Cu: goto label_7F1FCE9C;
    case 0x7F1FCEA0u: goto label_7F1FCEA0;
    case 0x7F1FCEA4u: goto label_7F1FCEA4;
    case 0x7F1FCEA8u: goto label_7F1FCEA8;
    case 0x7F1FCEACu: goto label_7F1FCEAC;
    case 0x7F1FCEB0u: goto label_7F1FCEB0;
    case 0x7F1FCEB4u: goto label_7F1FCEB4;
    case 0x7F1FCEB8u: goto label_7F1FCEB8;
    case 0x7F1FCEBCu: goto label_7F1FCEBC;
    case 0x7F1FCEC0u: goto label_7F1FCEC0;
    case 0x7F1FCEC4u: goto label_7F1FCEC4;
    case 0x7F1FCEC8u: goto label_7F1FCEC8;
    case 0x7F1FCECCu: goto label_7F1FCECC;
    case 0x7F1FCED0u: goto label_7F1FCED0;
    case 0x7F1FCED4u: goto label_7F1FCED4;
    case 0x7F1FCED8u: goto label_7F1FCED8;
    case 0x7F1FCEDCu: goto label_7F1FCEDC;
    case 0x7F1FCEE0u: goto label_7F1FCEE0;
    case 0x7F1FCEE4u: goto label_7F1FCEE4;
    case 0x7F1FCEE8u: goto label_7F1FCEE8;
    case 0x7F1FCEECu: goto label_7F1FCEEC;
    case 0x7F1FCEF0u: goto label_7F1FCEF0;
    case 0x7F1FCEF4u: goto label_7F1FCEF4;
    case 0x7F1FCEF8u: goto label_7F1FCEF8;
    case 0x7F1FCEFCu: goto label_7F1FCEFC;
    case 0x7F1FCF00u: goto label_7F1FCF00;
    case 0x7F1FCF04u: goto label_7F1FCF04;
    case 0x7F1FCF08u: goto label_7F1FCF08;
    case 0x7F1FCF0Cu: goto label_7F1FCF0C;
    case 0x7F1FCF10u: goto label_7F1FCF10;
    case 0x7F1FCF14u: goto label_7F1FCF14;
    case 0x7F1FCF18u: goto label_7F1FCF18;
    case 0x7F1FCF1Cu: goto label_7F1FCF1C;
    case 0x7F1FCF20u: goto label_7F1FCF20;
    case 0x7F1FCF24u: goto label_7F1FCF24;
    case 0x7F1FCF28u: goto label_7F1FCF28;
    case 0x7F1FCF2Cu: goto label_7F1FCF2C;
    case 0x7F1FCF30u: goto label_7F1FCF30;
    case 0x7F1FCF34u: goto label_7F1FCF34;
    case 0x7F1FCF38u: goto label_7F1FCF38;
    case 0x7F1FCF3Cu: goto label_7F1FCF3C;
    case 0x7F1FCF40u: goto label_7F1FCF40;
    case 0x7F1FCF44u: goto label_7F1FCF44;
    case 0x7F1FCF48u: goto label_7F1FCF48;
    case 0x7F1FCF4Cu: goto label_7F1FCF4C;
    case 0x7F1FCF50u: goto label_7F1FCF50;
    case 0x7F1FCF54u: goto label_7F1FCF54;
    case 0x7F1FCF58u: goto label_7F1FCF58;
    case 0x7F1FCF5Cu: goto label_7F1FCF5C;
    case 0x7F1FCF60u: goto label_7F1FCF60;
    case 0x7F1FCF64u: goto label_7F1FCF64;
    case 0x7F1FCF68u: goto label_7F1FCF68;
    case 0x7F1FCF6Cu: goto label_7F1FCF6C;
    case 0x7F1FCF70u: goto label_7F1FCF70;
    case 0x7F1FCF74u: goto label_7F1FCF74;
    case 0x7F1FCF78u: goto label_7F1FCF78;
    case 0x7F1FCF7Cu: goto label_7F1FCF7C;
    case 0x7F1FCF80u: goto label_7F1FCF80;
    case 0x7F1FCF84u: goto label_7F1FCF84;
    case 0x7F1FCF88u: goto label_7F1FCF88;
    case 0x7F1FCF8Cu: goto label_7F1FCF8C;
    case 0x7F1FCF90u: goto label_7F1FCF90;
    case 0x7F1FCF94u: goto label_7F1FCF94;
    case 0x7F1FCF98u: goto label_7F1FCF98;
    case 0x7F1FCF9Cu: goto label_7F1FCF9C;
    case 0x7F1FCFA0u: goto label_7F1FCFA0;
    case 0x7F1FCFA4u: goto label_7F1FCFA4;
    case 0x7F1FCFA8u: goto label_7F1FCFA8;
    case 0x7F1FCFACu: goto label_7F1FCFAC;
    case 0x7F1FCFB0u: goto label_7F1FCFB0;
    case 0x7F1FCFB4u: goto label_7F1FCFB4;
    case 0x7F1FCFB8u: goto label_7F1FCFB8;
    case 0x7F1FCFBCu: goto label_7F1FCFBC;
    case 0x7F1FCFC0u: goto label_7F1FCFC0;
    case 0x7F1FCFC4u: goto label_7F1FCFC4;
    case 0x7F1FCFC8u: goto label_7F1FCFC8;
    case 0x7F1FCFCCu: goto label_7F1FCFCC;
    case 0x7F1FCFD0u: goto label_7F1FCFD0;
    case 0x7F1FCFD4u: goto label_7F1FCFD4;
    case 0x7F1FCFD8u: goto label_7F1FCFD8;
    case 0x7F1FCFDCu: goto label_7F1FCFDC;
    case 0x7F1FCFE0u: goto label_7F1FCFE0;
    case 0x7F1FCFE4u: goto label_7F1FCFE4;
    case 0x7F1FCFE8u: goto label_7F1FCFE8;
    case 0x7F1FCFECu: goto label_7F1FCFEC;
    case 0x7F1FCFF0u: goto label_7F1FCFF0;
    case 0x7F1FCFF4u: goto label_7F1FCFF4;
    case 0x7F1FCFF8u: goto label_7F1FCFF8;
    case 0x7F1FCFFCu: goto label_7F1FCFFC;
    case 0x7F1FD000u: goto label_7F1FD000;
    case 0x7F1FD004u: goto label_7F1FD004;
    case 0x7F1FD008u: goto label_7F1FD008;
    case 0x7F1FD00Cu: goto label_7F1FD00C;
    case 0x7F1FD010u: goto label_7F1FD010;
    case 0x7F1FD014u: goto label_7F1FD014;
    case 0x7F1FD018u: goto label_7F1FD018;
    case 0x7F1FD01Cu: goto label_7F1FD01C;
    case 0x7F1FD020u: goto label_7F1FD020;
    case 0x7F1FD024u: goto label_7F1FD024;
    case 0x7F1FD028u: goto label_7F1FD028;
    case 0x7F1FD02Cu: goto label_7F1FD02C;
    case 0x7F1FD030u: goto label_7F1FD030;
    case 0x7F1FD034u: goto label_7F1FD034;
    case 0x7F1FD038u: goto label_7F1FD038;
    case 0x7F1FD03Cu: goto label_7F1FD03C;
    case 0x7F1FD040u: goto label_7F1FD040;
    case 0x7F1FD044u: goto label_7F1FD044;
    case 0x7F1FD048u: goto label_7F1FD048;
    case 0x7F1FD04Cu: goto label_7F1FD04C;
    case 0x7F1FD050u: goto label_7F1FD050;
    case 0x7F1FD054u: goto label_7F1FD054;
    case 0x7F1FD058u: goto label_7F1FD058;
    case 0x7F1FD05Cu: goto label_7F1FD05C;
    case 0x7F1FD060u: goto label_7F1FD060;
    case 0x7F1FD064u: goto label_7F1FD064;
    case 0x7F1FD068u: goto label_7F1FD068;
    case 0x7F1FD06Cu: goto label_7F1FD06C;
    case 0x7F1FD070u: goto label_7F1FD070;
    case 0x7F1FD074u: goto label_7F1FD074;
    case 0x7F1FD078u: goto label_7F1FD078;
    case 0x7F1FD07Cu: goto label_7F1FD07C;
    case 0x7F1FD080u: goto label_7F1FD080;
    case 0x7F1FD084u: goto label_7F1FD084;
    case 0x7F1FD088u: goto label_7F1FD088;
    case 0x7F1FD08Cu: goto label_7F1FD08C;
    case 0x7F1FD090u: goto label_7F1FD090;
    case 0x7F1FD094u: goto label_7F1FD094;
    case 0x7F1FD098u: goto label_7F1FD098;
    case 0x7F1FD09Cu: goto label_7F1FD09C;
    case 0x7F1FD0A0u: goto label_7F1FD0A0;
    case 0x7F1FD0A4u: goto label_7F1FD0A4;
    case 0x7F1FD0A8u: goto label_7F1FD0A8;
    case 0x7F1FD0ACu: goto label_7F1FD0AC;
    case 0x7F1FD0B0u: goto label_7F1FD0B0;
    case 0x7F1FD0B4u: goto label_7F1FD0B4;
    case 0x7F1FD0B8u: goto label_7F1FD0B8;
    case 0x7F1FD0BCu: goto label_7F1FD0BC;
    case 0x7F1FD0C0u: goto label_7F1FD0C0;
    case 0x7F1FD0C4u: goto label_7F1FD0C4;
    case 0x7F1FD0C8u: goto label_7F1FD0C8;
    case 0x7F1FD0CCu: goto label_7F1FD0CC;
    case 0x7F1FD0D0u: goto label_7F1FD0D0;
    case 0x7F1FD0D4u: goto label_7F1FD0D4;
    case 0x7F1FD0D8u: goto label_7F1FD0D8;
    case 0x7F1FD0DCu: goto label_7F1FD0DC;
    case 0x7F1FD0E0u: goto label_7F1FD0E0;
    case 0x7F1FD0E4u: goto label_7F1FD0E4;
    case 0x7F1FD0E8u: goto label_7F1FD0E8;
    case 0x7F1FD0ECu: goto label_7F1FD0EC;
    case 0x7F1FD0F0u: goto label_7F1FD0F0;
    case 0x7F1FD0F4u: goto label_7F1FD0F4;
    case 0x7F1FD0F8u: goto label_7F1FD0F8;
    case 0x7F1FD0FCu: goto label_7F1FD0FC;
    case 0x7F1FD100u: goto label_7F1FD100;
    case 0x7F1FD104u: goto label_7F1FD104;
    case 0x7F1FD108u: goto label_7F1FD108;
    case 0x7F1FD10Cu: goto label_7F1FD10C;
    case 0x7F1FD110u: goto label_7F1FD110;
    case 0x7F1FD114u: goto label_7F1FD114;
    case 0x7F1FD118u: goto label_7F1FD118;
    case 0x7F1FD11Cu: goto label_7F1FD11C;
    case 0x7F1FD120u: goto label_7F1FD120;
    case 0x7F1FD124u: goto label_7F1FD124;
    case 0x7F1FD128u: goto label_7F1FD128;
    case 0x7F1FD12Cu: goto label_7F1FD12C;
    case 0x7F1FD130u: goto label_7F1FD130;
    case 0x7F1FD134u: goto label_7F1FD134;
    case 0x7F1FD138u: goto label_7F1FD138;
    case 0x7F1FD13Cu: goto label_7F1FD13C;
    case 0x7F1FD140u: goto label_7F1FD140;
    case 0x7F1FD144u: goto label_7F1FD144;
    case 0x7F1FD148u: goto label_7F1FD148;
    case 0x7F1FD14Cu: goto label_7F1FD14C;
    case 0x7F1FD150u: goto label_7F1FD150;
    case 0x7F1FD154u: goto label_7F1FD154;
    case 0x7F1FD158u: goto label_7F1FD158;
    case 0x7F1FD15Cu: goto label_7F1FD15C;
    case 0x7F1FD160u: goto label_7F1FD160;
    case 0x7F1FD164u: goto label_7F1FD164;
    case 0x7F1FD168u: goto label_7F1FD168;
    case 0x7F1FD16Cu: goto label_7F1FD16C;
    case 0x7F1FD170u: goto label_7F1FD170;
    case 0x7F1FD174u: goto label_7F1FD174;
    case 0x7F1FD178u: goto label_7F1FD178;
    case 0x7F1FD17Cu: goto label_7F1FD17C;
    case 0x7F1FD180u: goto label_7F1FD180;
    case 0x7F1FD184u: goto label_7F1FD184;
    case 0x7F1FD188u: goto label_7F1FD188;
    case 0x7F1FD18Cu: goto label_7F1FD18C;
    case 0x7F1FD190u: goto label_7F1FD190;
    case 0x7F1FD194u: goto label_7F1FD194;
    case 0x7F1FD198u: goto label_7F1FD198;
    case 0x7F1FD19Cu: goto label_7F1FD19C;
    case 0x7F1FD1A0u: goto label_7F1FD1A0;
    case 0x7F1FD1A4u: goto label_7F1FD1A4;
    case 0x7F1FD1A8u: goto label_7F1FD1A8;
    case 0x7F1FD1ACu: goto label_7F1FD1AC;
    case 0x7F1FD1B0u: goto label_7F1FD1B0;
    case 0x7F1FD1B4u: goto label_7F1FD1B4;
    case 0x7F1FD1B8u: goto label_7F1FD1B8;
    case 0x7F1FD1BCu: goto label_7F1FD1BC;
    case 0x7F1FD1C0u: goto label_7F1FD1C0;
    case 0x7F1FD1C4u: goto label_7F1FD1C4;
    case 0x7F1FD1C8u: goto label_7F1FD1C8;
    case 0x7F1FD1CCu: goto label_7F1FD1CC;
    case 0x7F1FD1D0u: goto label_7F1FD1D0;
    case 0x7F1FD1D4u: goto label_7F1FD1D4;
    case 0x7F1FD1D8u: goto label_7F1FD1D8;
    case 0x7F1FD1DCu: goto label_7F1FD1DC;
    case 0x7F1FD1E0u: goto label_7F1FD1E0;
    case 0x7F1FD1E4u: goto label_7F1FD1E4;
    case 0x7F1FD1E8u: goto label_7F1FD1E8;
    case 0x7F1FD1ECu: goto label_7F1FD1EC;
    case 0x7F1FD1F0u: goto label_7F1FD1F0;
    case 0x7F1FD1F4u: goto label_7F1FD1F4;
    case 0x7F1FD1F8u: goto label_7F1FD1F8;
    case 0x7F1FD1FCu: goto label_7F1FD1FC;
    case 0x7F1FD200u: goto label_7F1FD200;
    case 0x7F1FD204u: goto label_7F1FD204;
    case 0x7F1FD208u: goto label_7F1FD208;
    case 0x7F1FD20Cu: goto label_7F1FD20C;
    case 0x7F1FD210u: goto label_7F1FD210;
    case 0x7F1FD214u: goto label_7F1FD214;
    case 0x7F1FD218u: goto label_7F1FD218;
    case 0x7F1FD21Cu: goto label_7F1FD21C;
    case 0x7F1FD220u: goto label_7F1FD220;
    case 0x7F1FD224u: goto label_7F1FD224;
    case 0x7F1FD228u: goto label_7F1FD228;
    case 0x7F1FD22Cu: goto label_7F1FD22C;
    case 0x7F1FD230u: goto label_7F1FD230;
    case 0x7F1FD234u: goto label_7F1FD234;
    case 0x7F1FD238u: goto label_7F1FD238;
    case 0x7F1FD23Cu: goto label_7F1FD23C;
    case 0x7F1FD240u: goto label_7F1FD240;
    case 0x7F1FD244u: goto label_7F1FD244;
    case 0x7F1FD248u: goto label_7F1FD248;
    case 0x7F1FD24Cu: goto label_7F1FD24C;
    case 0x7F1FD250u: goto label_7F1FD250;
    case 0x7F1FD254u: goto label_7F1FD254;
    case 0x7F1FD258u: goto label_7F1FD258;
    case 0x7F1FD25Cu: goto label_7F1FD25C;
    case 0x7F1FD260u: goto label_7F1FD260;
    case 0x7F1FD264u: goto label_7F1FD264;
    case 0x7F1FD268u: goto label_7F1FD268;
    case 0x7F1FD26Cu: goto label_7F1FD26C;
    case 0x7F1FD270u: goto label_7F1FD270;
    case 0x7F1FD274u: goto label_7F1FD274;
    case 0x7F1FD278u: goto label_7F1FD278;
    case 0x7F1FD27Cu: goto label_7F1FD27C;
    case 0x7F1FD280u: goto label_7F1FD280;
    case 0x7F1FD284u: goto label_7F1FD284;
    case 0x7F1FD288u: goto label_7F1FD288;
    case 0x7F1FD28Cu: goto label_7F1FD28C;
    case 0x7F1FD290u: goto label_7F1FD290;
    case 0x7F1FD294u: goto label_7F1FD294;
    case 0x7F1FD298u: goto label_7F1FD298;
    case 0x7F1FD29Cu: goto label_7F1FD29C;
    case 0x7F1FD2A0u: goto label_7F1FD2A0;
    case 0x7F1FD2A4u: goto label_7F1FD2A4;
    case 0x7F1FD2A8u: goto label_7F1FD2A8;
    case 0x7F1FD2ACu: goto label_7F1FD2AC;
    case 0x7F1FD2B0u: goto label_7F1FD2B0;
    case 0x7F1FD2B4u: goto label_7F1FD2B4;
    case 0x7F1FD2B8u: goto label_7F1FD2B8;
    case 0x7F1FD2BCu: goto label_7F1FD2BC;
    case 0x7F1FD2C0u: goto label_7F1FD2C0;
    case 0x7F1FD2C4u: goto label_7F1FD2C4;
    case 0x7F1FD2C8u: goto label_7F1FD2C8;
    case 0x7F1FD2CCu: goto label_7F1FD2CC;
    case 0x7F1FD2D0u: goto label_7F1FD2D0;
    case 0x7F1FD2D4u: goto label_7F1FD2D4;
    case 0x7F1FD2D8u: goto label_7F1FD2D8;
    case 0x7F1FD2DCu: goto label_7F1FD2DC;
    case 0x7F1FD2E0u: goto label_7F1FD2E0;
    case 0x7F1FD2E4u: goto label_7F1FD2E4;
    case 0x7F1FD2E8u: goto label_7F1FD2E8;
    case 0x7F1FD2ECu: goto label_7F1FD2EC;
    case 0x7F1FD2F0u: goto label_7F1FD2F0;
    case 0x7F1FD2F4u: goto label_7F1FD2F4;
    case 0x7F1FD2F8u: goto label_7F1FD2F8;
    case 0x7F1FD2FCu: goto label_7F1FD2FC;
    case 0x7F1FD300u: goto label_7F1FD300;
    case 0x7F1FD304u: goto label_7F1FD304;
    case 0x7F1FD308u: goto label_7F1FD308;
    case 0x7F1FD30Cu: goto label_7F1FD30C;
    case 0x7F1FD310u: goto label_7F1FD310;
    case 0x7F1FD314u: goto label_7F1FD314;
    case 0x7F1FD318u: goto label_7F1FD318;
    case 0x7F1FD31Cu: goto label_7F1FD31C;
    case 0x7F1FD320u: goto label_7F1FD320;
    case 0x7F1FD324u: goto label_7F1FD324;
    case 0x7F1FD328u: goto label_7F1FD328;
    case 0x7F1FD32Cu: goto label_7F1FD32C;
    case 0x7F1FD330u: goto label_7F1FD330;
    case 0x7F1FD334u: goto label_7F1FD334;
    case 0x7F1FD338u: goto label_7F1FD338;
    case 0x7F1FD33Cu: goto label_7F1FD33C;
    case 0x7F1FD340u: goto label_7F1FD340;
    case 0x7F1FD344u: goto label_7F1FD344;
    case 0x7F1FD348u: goto label_7F1FD348;
    case 0x7F1FD34Cu: goto label_7F1FD34C;
    case 0x7F1FD350u: goto label_7F1FD350;
    case 0x7F1FD354u: goto label_7F1FD354;
    case 0x7F1FD358u: goto label_7F1FD358;
    case 0x7F1FD35Cu: goto label_7F1FD35C;
    case 0x7F1FD360u: goto label_7F1FD360;
    case 0x7F1FD364u: goto label_7F1FD364;
    case 0x7F1FD368u: goto label_7F1FD368;
    case 0x7F1FD36Cu: goto label_7F1FD36C;
    case 0x7F1FD370u: goto label_7F1FD370;
    case 0x7F1FD374u: goto label_7F1FD374;
    case 0x7F1FD378u: goto label_7F1FD378;
    case 0x7F1FD37Cu: goto label_7F1FD37C;
    case 0x7F1FD380u: goto label_7F1FD380;
    case 0x7F1FD384u: goto label_7F1FD384;
    case 0x7F1FD388u: goto label_7F1FD388;
    case 0x7F1FD38Cu: goto label_7F1FD38C;
    case 0x7F1FD390u: goto label_7F1FD390;
    case 0x7F1FD394u: goto label_7F1FD394;
    case 0x7F1FD398u: goto label_7F1FD398;
    case 0x7F1FD39Cu: goto label_7F1FD39C;
    case 0x7F1FD3A0u: goto label_7F1FD3A0;
    case 0x7F1FD3A4u: goto label_7F1FD3A4;
    case 0x7F1FD3A8u: goto label_7F1FD3A8;
    case 0x7F1FD3ACu: goto label_7F1FD3AC;
    case 0x7F1FD3B0u: goto label_7F1FD3B0;
    case 0x7F1FD3B4u: goto label_7F1FD3B4;
    case 0x7F1FD3B8u: goto label_7F1FD3B8;
    case 0x7F1FD3BCu: goto label_7F1FD3BC;
    case 0x7F1FD3C0u: goto label_7F1FD3C0;
    case 0x7F1FD3C4u: goto label_7F1FD3C4;
    case 0x7F1FD3C8u: goto label_7F1FD3C8;
    case 0x7F1FD3CCu: goto label_7F1FD3CC;
    case 0x7F1FD3D0u: goto label_7F1FD3D0;
    case 0x7F1FD3D4u: goto label_7F1FD3D4;
    case 0x7F1FD3D8u: goto label_7F1FD3D8;
    case 0x7F1FD3DCu: goto label_7F1FD3DC;
    case 0x7F1FD3E0u: goto label_7F1FD3E0;
    case 0x7F1FD3E4u: goto label_7F1FD3E4;
    case 0x7F1FD3E8u: goto label_7F1FD3E8;
    case 0x7F1FD3ECu: goto label_7F1FD3EC;
    case 0x7F1FD3F0u: goto label_7F1FD3F0;
    case 0x7F1FD3F4u: goto label_7F1FD3F4;
    case 0x7F1FD3F8u: goto label_7F1FD3F8;
    case 0x7F1FD3FCu: goto label_7F1FD3FC;
    case 0x7F1FD400u: goto label_7F1FD400;
    case 0x7F1FD404u: goto label_7F1FD404;
    case 0x7F1FD408u: goto label_7F1FD408;
    case 0x7F1FD40Cu: goto label_7F1FD40C;
    case 0x7F1FD410u: goto label_7F1FD410;
    case 0x7F1FD414u: goto label_7F1FD414;
    case 0x7F1FD418u: goto label_7F1FD418;
    case 0x7F1FD41Cu: goto label_7F1FD41C;
    case 0x7F1FD420u: goto label_7F1FD420;
    case 0x7F1FD424u: goto label_7F1FD424;
    case 0x7F1FD428u: goto label_7F1FD428;
    case 0x7F1FD42Cu: goto label_7F1FD42C;
    case 0x7F1FD430u: goto label_7F1FD430;
    case 0x7F1FD434u: goto label_7F1FD434;
    case 0x7F1FD438u: goto label_7F1FD438;
    case 0x7F1FD43Cu: goto label_7F1FD43C;
    case 0x7F1FD440u: goto label_7F1FD440;
    case 0x7F1FD444u: goto label_7F1FD444;
    case 0x7F1FD448u: goto label_7F1FD448;
    case 0x7F1FD44Cu: goto label_7F1FD44C;
    case 0x7F1FD450u: goto label_7F1FD450;
    case 0x7F1FD454u: goto label_7F1FD454;
    case 0x7F1FD458u: goto label_7F1FD458;
    case 0x7F1FD45Cu: goto label_7F1FD45C;
    case 0x7F1FD460u: goto label_7F1FD460;
    case 0x7F1FD464u: goto label_7F1FD464;
    case 0x7F1FD468u: goto label_7F1FD468;
    case 0x7F1FD46Cu: goto label_7F1FD46C;
    case 0x7F1FD470u: goto label_7F1FD470;
    case 0x7F1FD474u: goto label_7F1FD474;
    case 0x7F1FD478u: goto label_7F1FD478;
    case 0x7F1FD47Cu: goto label_7F1FD47C;
    case 0x7F1FD480u: goto label_7F1FD480;
    case 0x7F1FD484u: goto label_7F1FD484;
    case 0x7F1FD488u: goto label_7F1FD488;
    case 0x7F1FD48Cu: goto label_7F1FD48C;
    case 0x7F1FD490u: goto label_7F1FD490;
    case 0x7F1FD494u: goto label_7F1FD494;
    case 0x7F1FD498u: goto label_7F1FD498;
    case 0x7F1FD49Cu: goto label_7F1FD49C;
    case 0x7F1FD4A0u: goto label_7F1FD4A0;
    case 0x7F1FD4A4u: goto label_7F1FD4A4;
    case 0x7F1FD4A8u: goto label_7F1FD4A8;
    case 0x7F1FD4ACu: goto label_7F1FD4AC;
    case 0x7F1FD4B0u: goto label_7F1FD4B0;
    case 0x7F1FD4B4u: goto label_7F1FD4B4;
    case 0x7F1FD4B8u: goto label_7F1FD4B8;
    case 0x7F1FD4BCu: goto label_7F1FD4BC;
    case 0x7F1FD4C0u: goto label_7F1FD4C0;
    case 0x7F1FD4C4u: goto label_7F1FD4C4;
    case 0x7F1FD4C8u: goto label_7F1FD4C8;
    case 0x7F1FD4CCu: goto label_7F1FD4CC;
    case 0x7F1FD4D0u: goto label_7F1FD4D0;
    case 0x7F1FD4D4u: goto label_7F1FD4D4;
    case 0x7F1FD4D8u: goto label_7F1FD4D8;
    case 0x7F1FD4DCu: goto label_7F1FD4DC;
    case 0x7F1FD4E0u: goto label_7F1FD4E0;
    case 0x7F1FD4E4u: goto label_7F1FD4E4;
    case 0x7F1FD4E8u: goto label_7F1FD4E8;
    case 0x7F1FD4ECu: goto label_7F1FD4EC;
    case 0x7F1FD4F0u: goto label_7F1FD4F0;
    case 0x7F1FD4F4u: goto label_7F1FD4F4;
    case 0x7F1FD4F8u: goto label_7F1FD4F8;
    case 0x7F1FD4FCu: goto label_7F1FD4FC;
    case 0x7F1FD500u: goto label_7F1FD500;
    case 0x7F1FD504u: goto label_7F1FD504;
    case 0x7F1FD508u: goto label_7F1FD508;
    case 0x7F1FD50Cu: goto label_7F1FD50C;
    case 0x7F1FD510u: goto label_7F1FD510;
    case 0x7F1FD514u: goto label_7F1FD514;
    case 0x7F1FD518u: goto label_7F1FD518;
    case 0x7F1FD51Cu: goto label_7F1FD51C;
    case 0x7F1FD520u: goto label_7F1FD520;
    case 0x7F1FD524u: goto label_7F1FD524;
    case 0x7F1FD528u: goto label_7F1FD528;
    case 0x7F1FD52Cu: goto label_7F1FD52C;
    case 0x7F1FD530u: goto label_7F1FD530;
    case 0x7F1FD534u: goto label_7F1FD534;
    case 0x7F1FD538u: goto label_7F1FD538;
    case 0x7F1FD53Cu: goto label_7F1FD53C;
    case 0x7F1FD540u: goto label_7F1FD540;
    case 0x7F1FD544u: goto label_7F1FD544;
    case 0x7F1FD548u: goto label_7F1FD548;
    case 0x7F1FD54Cu: goto label_7F1FD54C;
    case 0x7F1FD550u: goto label_7F1FD550;
    case 0x7F1FD554u: goto label_7F1FD554;
    case 0x7F1FD558u: goto label_7F1FD558;
    case 0x7F1FD55Cu: goto label_7F1FD55C;
    case 0x7F1FD560u: goto label_7F1FD560;
    case 0x7F1FD564u: goto label_7F1FD564;
    case 0x7F1FD568u: goto label_7F1FD568;
    case 0x7F1FD56Cu: goto label_7F1FD56C;
    case 0x7F1FD570u: goto label_7F1FD570;
    case 0x7F1FD574u: goto label_7F1FD574;
    case 0x7F1FD578u: goto label_7F1FD578;
    case 0x7F1FD57Cu: goto label_7F1FD57C;
    case 0x7F1FD580u: goto label_7F1FD580;
    case 0x7F1FD584u: goto label_7F1FD584;
    case 0x7F1FD588u: goto label_7F1FD588;
    case 0x7F1FD58Cu: goto label_7F1FD58C;
    case 0x7F1FD590u: goto label_7F1FD590;
    case 0x7F1FD594u: goto label_7F1FD594;
    case 0x7F1FD598u: goto label_7F1FD598;
    case 0x7F1FD59Cu: goto label_7F1FD59C;
    case 0x7F1FD5A0u: goto label_7F1FD5A0;
    case 0x7F1FD5A4u: goto label_7F1FD5A4;
    case 0x7F1FD5A8u: goto label_7F1FD5A8;
    case 0x7F1FD5ACu: goto label_7F1FD5AC;
    case 0x7F1FD5B0u: goto label_7F1FD5B0;
    case 0x7F1FD5B4u: goto label_7F1FD5B4;
    case 0x7F1FD5B8u: goto label_7F1FD5B8;
    case 0x7F1FD5BCu: goto label_7F1FD5BC;
    case 0x7F1FD5C0u: goto label_7F1FD5C0;
    case 0x7F1FD5C4u: goto label_7F1FD5C4;
    case 0x7F1FD5C8u: goto label_7F1FD5C8;
    case 0x7F1FD5CCu: goto label_7F1FD5CC;
    case 0x7F1FD5D0u: goto label_7F1FD5D0;
    case 0x7F1FD5D4u: goto label_7F1FD5D4;
    case 0x7F1FD5D8u: goto label_7F1FD5D8;
    case 0x7F1FD5DCu: goto label_7F1FD5DC;
    case 0x7F1FD5E0u: goto label_7F1FD5E0;
    case 0x7F1FD5E4u: goto label_7F1FD5E4;
    case 0x7F1FD5E8u: goto label_7F1FD5E8;
    case 0x7F1FD5ECu: goto label_7F1FD5EC;
    case 0x7F1FD5F0u: goto label_7F1FD5F0;
    case 0x7F1FD5F4u: goto label_7F1FD5F4;
    case 0x7F1FD5F8u: goto label_7F1FD5F8;
    case 0x7F1FD5FCu: goto label_7F1FD5FC;
    case 0x7F1FD600u: goto label_7F1FD600;
    case 0x7F1FD604u: goto label_7F1FD604;
    case 0x7F1FD608u: goto label_7F1FD608;
    case 0x7F1FD60Cu: goto label_7F1FD60C;
    case 0x7F1FD610u: goto label_7F1FD610;
    case 0x7F1FD614u: goto label_7F1FD614;
    case 0x7F1FD618u: goto label_7F1FD618;
    case 0x7F1FD61Cu: goto label_7F1FD61C;
    case 0x7F1FD620u: goto label_7F1FD620;
    case 0x7F1FD624u: goto label_7F1FD624;
    case 0x7F1FD628u: goto label_7F1FD628;
    case 0x7F1FD62Cu: goto label_7F1FD62C;
    case 0x7F1FD630u: goto label_7F1FD630;
    case 0x7F1FD634u: goto label_7F1FD634;
    case 0x7F1FD638u: goto label_7F1FD638;
    case 0x7F1FD63Cu: goto label_7F1FD63C;
    case 0x7F1FD640u: goto label_7F1FD640;
    case 0x7F1FD644u: goto label_7F1FD644;
    case 0x7F1FD648u: goto label_7F1FD648;
    case 0x7F1FD64Cu: goto label_7F1FD64C;
    case 0x7F1FD650u: goto label_7F1FD650;
    case 0x7F1FD654u: goto label_7F1FD654;
    case 0x7F1FD658u: goto label_7F1FD658;
    case 0x7F1FD65Cu: goto label_7F1FD65C;
    case 0x7F1FD660u: goto label_7F1FD660;
    case 0x7F1FD664u: goto label_7F1FD664;
    case 0x7F1FD668u: goto label_7F1FD668;
    case 0x7F1FD66Cu: goto label_7F1FD66C;
    case 0x7F1FD670u: goto label_7F1FD670;
    case 0x7F1FD674u: goto label_7F1FD674;
    case 0x7F1FD678u: goto label_7F1FD678;
    case 0x7F1FD67Cu: goto label_7F1FD67C;
    case 0x7F1FD680u: goto label_7F1FD680;
    case 0x7F1FD684u: goto label_7F1FD684;
    case 0x7F1FD688u: goto label_7F1FD688;
    case 0x7F1FD68Cu: goto label_7F1FD68C;
    case 0x7F1FD690u: goto label_7F1FD690;
    case 0x7F1FD694u: goto label_7F1FD694;
    case 0x7F1FD698u: goto label_7F1FD698;
    case 0x7F1FD69Cu: goto label_7F1FD69C;
    case 0x7F1FD6A0u: goto label_7F1FD6A0;
    case 0x7F1FD6A4u: goto label_7F1FD6A4;
    case 0x7F1FD6A8u: goto label_7F1FD6A8;
    case 0x7F1FD6ACu: goto label_7F1FD6AC;
    case 0x7F1FD6B0u: goto label_7F1FD6B0;
    case 0x7F1FD6B4u: goto label_7F1FD6B4;
    case 0x7F1FD6B8u: goto label_7F1FD6B8;
    case 0x7F1FD6BCu: goto label_7F1FD6BC;
    case 0x7F1FD6C0u: goto label_7F1FD6C0;
    case 0x7F1FD6C4u: goto label_7F1FD6C4;
    case 0x7F1FD6C8u: goto label_7F1FD6C8;
    case 0x7F1FD6CCu: goto label_7F1FD6CC;
    case 0x7F1FD6D0u: goto label_7F1FD6D0;
    case 0x7F1FD6D4u: goto label_7F1FD6D4;
    case 0x7F1FD6D8u: goto label_7F1FD6D8;
    case 0x7F1FD6DCu: goto label_7F1FD6DC;
    case 0x7F1FD6E0u: goto label_7F1FD6E0;
    case 0x7F1FD6E4u: goto label_7F1FD6E4;
    case 0x7F1FD6E8u: goto label_7F1FD6E8;
    case 0x7F1FD6ECu: goto label_7F1FD6EC;
    case 0x7F1FD6F0u: goto label_7F1FD6F0;
    case 0x7F1FD6F4u: goto label_7F1FD6F4;
    case 0x7F1FD6F8u: goto label_7F1FD6F8;
    case 0x7F1FD6FCu: goto label_7F1FD6FC;
    case 0x7F1FD700u: goto label_7F1FD700;
    case 0x7F1FD704u: goto label_7F1FD704;
    case 0x7F1FD708u: goto label_7F1FD708;
    case 0x7F1FD70Cu: goto label_7F1FD70C;
    case 0x7F1FD710u: goto label_7F1FD710;
    case 0x7F1FD714u: goto label_7F1FD714;
    case 0x7F1FD718u: goto label_7F1FD718;
    case 0x7F1FD71Cu: goto label_7F1FD71C;
    case 0x7F1FD720u: goto label_7F1FD720;
    case 0x7F1FD724u: goto label_7F1FD724;
    case 0x7F1FD728u: goto label_7F1FD728;
    case 0x7F1FD72Cu: goto label_7F1FD72C;
    case 0x7F1FD730u: goto label_7F1FD730;
    case 0x7F1FD734u: goto label_7F1FD734;
    case 0x7F1FD738u: goto label_7F1FD738;
    case 0x7F1FD73Cu: goto label_7F1FD73C;
    case 0x7F1FD740u: goto label_7F1FD740;
    case 0x7F1FD744u: goto label_7F1FD744;
    case 0x7F1FD748u: goto label_7F1FD748;
    case 0x7F1FD74Cu: goto label_7F1FD74C;
    case 0x7F1FD750u: goto label_7F1FD750;
    case 0x7F1FD754u: goto label_7F1FD754;
    case 0x7F1FD758u: goto label_7F1FD758;
    case 0x7F1FD75Cu: goto label_7F1FD75C;
    case 0x7F1FD760u: goto label_7F1FD760;
    case 0x7F1FD764u: goto label_7F1FD764;
    case 0x7F1FD768u: goto label_7F1FD768;
    case 0x7F1FD76Cu: goto label_7F1FD76C;
    case 0x7F1FD770u: goto label_7F1FD770;
    case 0x7F1FD774u: goto label_7F1FD774;
    case 0x7F1FD778u: goto label_7F1FD778;
    case 0x7F1FD77Cu: goto label_7F1FD77C;
    case 0x7F1FD780u: goto label_7F1FD780;
    case 0x7F1FD784u: goto label_7F1FD784;
    case 0x7F1FD788u: goto label_7F1FD788;
    case 0x7F1FD78Cu: goto label_7F1FD78C;
    case 0x7F1FD790u: goto label_7F1FD790;
    case 0x7F1FD794u: goto label_7F1FD794;
    case 0x7F1FD798u: goto label_7F1FD798;
    case 0x7F1FD79Cu: goto label_7F1FD79C;
    case 0x7F1FD7A0u: goto label_7F1FD7A0;
    case 0x7F1FD7A4u: goto label_7F1FD7A4;
    case 0x7F1FD7A8u: goto label_7F1FD7A8;
    case 0x7F1FD7ACu: goto label_7F1FD7AC;
    case 0x7F1FD7B0u: goto label_7F1FD7B0;
    case 0x7F1FD7B4u: goto label_7F1FD7B4;
    case 0x7F1FD7B8u: goto label_7F1FD7B8;
    case 0x7F1FD7BCu: goto label_7F1FD7BC;
    case 0x7F1FD7C0u: goto label_7F1FD7C0;
    case 0x7F1FD7C4u: goto label_7F1FD7C4;
    case 0x7F1FD7C8u: goto label_7F1FD7C8;
    case 0x7F1FD7CCu: goto label_7F1FD7CC;
    case 0x7F1FD7D0u: goto label_7F1FD7D0;
    case 0x7F1FD7D4u: goto label_7F1FD7D4;
    case 0x7F1FD7D8u: goto label_7F1FD7D8;
    case 0x7F1FD7DCu: goto label_7F1FD7DC;
    case 0x7F1FD7E0u: goto label_7F1FD7E0;
    case 0x7F1FD7E4u: goto label_7F1FD7E4;
    case 0x7F1FD7E8u: goto label_7F1FD7E8;
    case 0x7F1FD7ECu: goto label_7F1FD7EC;
    case 0x7F1FD7F0u: goto label_7F1FD7F0;
    case 0x7F1FD7F4u: goto label_7F1FD7F4;
    case 0x7F1FD7F8u: goto label_7F1FD7F8;
    case 0x7F1FD7FCu: goto label_7F1FD7FC;
    case 0x7F1FD800u: goto label_7F1FD800;
    case 0x7F1FD804u: goto label_7F1FD804;
    case 0x7F1FD808u: goto label_7F1FD808;
    case 0x7F1FD80Cu: goto label_7F1FD80C;
    case 0x7F1FD810u: goto label_7F1FD810;
    case 0x7F1FD814u: goto label_7F1FD814;
    case 0x7F1FD818u: goto label_7F1FD818;
    case 0x7F1FD81Cu: goto label_7F1FD81C;
    case 0x7F1FD820u: goto label_7F1FD820;
    case 0x7F1FD824u: goto label_7F1FD824;
    case 0x7F1FD828u: goto label_7F1FD828;
    case 0x7F1FD82Cu: goto label_7F1FD82C;
    case 0x7F1FD830u: goto label_7F1FD830;
    case 0x7F1FD834u: goto label_7F1FD834;
    case 0x7F1FD838u: goto label_7F1FD838;
    case 0x7F1FD83Cu: goto label_7F1FD83C;
    case 0x7F1FD840u: goto label_7F1FD840;
    case 0x7F1FD844u: goto label_7F1FD844;
    case 0x7F1FD848u: goto label_7F1FD848;
    case 0x7F1FD84Cu: goto label_7F1FD84C;
    case 0x7F1FD850u: goto label_7F1FD850;
    case 0x7F1FD854u: goto label_7F1FD854;
    case 0x7F1FD858u: goto label_7F1FD858;
    case 0x7F1FD85Cu: goto label_7F1FD85C;
    case 0x7F1FD860u: goto label_7F1FD860;
    case 0x7F1FD864u: goto label_7F1FD864;
    case 0x7F1FD868u: goto label_7F1FD868;
    case 0x7F1FD86Cu: goto label_7F1FD86C;
    case 0x7F1FD870u: goto label_7F1FD870;
    case 0x7F1FD874u: goto label_7F1FD874;
    case 0x7F1FD878u: goto label_7F1FD878;
    case 0x7F1FD87Cu: goto label_7F1FD87C;
    case 0x7F1FD880u: goto label_7F1FD880;
    case 0x7F1FD884u: goto label_7F1FD884;
    case 0x7F1FD888u: goto label_7F1FD888;
    case 0x7F1FD88Cu: goto label_7F1FD88C;
    case 0x7F1FD890u: goto label_7F1FD890;
    case 0x7F1FD894u: goto label_7F1FD894;
    case 0x7F1FD898u: goto label_7F1FD898;
    case 0x7F1FD89Cu: goto label_7F1FD89C;
    case 0x7F1FD8A0u: goto label_7F1FD8A0;
    case 0x7F1FD8A4u: goto label_7F1FD8A4;
    case 0x7F1FD8A8u: goto label_7F1FD8A8;
    case 0x7F1FD8ACu: goto label_7F1FD8AC;
    case 0x7F1FD8B0u: goto label_7F1FD8B0;
    case 0x7F1FD8B4u: goto label_7F1FD8B4;
    case 0x7F1FD8B8u: goto label_7F1FD8B8;
    case 0x7F1FD8BCu: goto label_7F1FD8BC;
    case 0x7F1FD8C0u: goto label_7F1FD8C0;
    case 0x7F1FD8C4u: goto label_7F1FD8C4;
    case 0x7F1FD8C8u: goto label_7F1FD8C8;
    case 0x7F1FD8CCu: goto label_7F1FD8CC;
    case 0x7F1FD8D0u: goto label_7F1FD8D0;
    case 0x7F1FD8D4u: goto label_7F1FD8D4;
    case 0x7F1FD8D8u: goto label_7F1FD8D8;
    case 0x7F1FD8DCu: goto label_7F1FD8DC;
    case 0x7F1FD8E0u: goto label_7F1FD8E0;
    case 0x7F1FD8E4u: goto label_7F1FD8E4;
    case 0x7F1FD8E8u: goto label_7F1FD8E8;
    case 0x7F1FD8ECu: goto label_7F1FD8EC;
    case 0x7F1FD8F0u: goto label_7F1FD8F0;
    case 0x7F1FD8F4u: goto label_7F1FD8F4;
    case 0x7F1FD8F8u: goto label_7F1FD8F8;
    case 0x7F1FD8FCu: goto label_7F1FD8FC;
    case 0x7F1FD900u: goto label_7F1FD900;
    case 0x7F1FD904u: goto label_7F1FD904;
    case 0x7F1FD908u: goto label_7F1FD908;
    case 0x7F1FD90Cu: goto label_7F1FD90C;
    case 0x7F1FD910u: goto label_7F1FD910;
    case 0x7F1FD914u: goto label_7F1FD914;
    case 0x7F1FD918u: goto label_7F1FD918;
    case 0x7F1FD91Cu: goto label_7F1FD91C;
    case 0x7F1FD920u: goto label_7F1FD920;
    case 0x7F1FD924u: goto label_7F1FD924;
    case 0x7F1FD928u: goto label_7F1FD928;
    case 0x7F1FD92Cu: goto label_7F1FD92C;
    case 0x7F1FD930u: goto label_7F1FD930;
    case 0x7F1FD934u: goto label_7F1FD934;
    case 0x7F1FD938u: goto label_7F1FD938;
    case 0x7F1FD93Cu: goto label_7F1FD93C;
    case 0x7F1FD940u: goto label_7F1FD940;
    case 0x7F1FD944u: goto label_7F1FD944;
    case 0x7F1FD948u: goto label_7F1FD948;
    case 0x7F1FD94Cu: goto label_7F1FD94C;
    case 0x7F1FD950u: goto label_7F1FD950;
    case 0x7F1FD954u: goto label_7F1FD954;
    case 0x7F1FD958u: goto label_7F1FD958;
    case 0x7F1FD95Cu: goto label_7F1FD95C;
    case 0x7F1FD960u: goto label_7F1FD960;
    case 0x7F1FD964u: goto label_7F1FD964;
    case 0x7F1FD968u: goto label_7F1FD968;
    case 0x7F1FD96Cu: goto label_7F1FD96C;
    case 0x7F1FD970u: goto label_7F1FD970;
    case 0x7F1FD974u: goto label_7F1FD974;
    case 0x7F1FD978u: goto label_7F1FD978;
    case 0x7F1FD97Cu: goto label_7F1FD97C;
    case 0x7F1FD980u: goto label_7F1FD980;
    case 0x7F1FD984u: goto label_7F1FD984;
    case 0x7F1FD988u: goto label_7F1FD988;
    case 0x7F1FD98Cu: goto label_7F1FD98C;
    case 0x7F1FD990u: goto label_7F1FD990;
    case 0x7F1FD994u: goto label_7F1FD994;
    case 0x7F1FD998u: goto label_7F1FD998;
    case 0x7F1FD99Cu: goto label_7F1FD99C;
    case 0x7F1FD9A0u: goto label_7F1FD9A0;
    case 0x7F1FD9A4u: goto label_7F1FD9A4;
    case 0x7F1FD9A8u: goto label_7F1FD9A8;
    case 0x7F1FD9ACu: goto label_7F1FD9AC;
    case 0x7F1FD9B0u: goto label_7F1FD9B0;
    case 0x7F1FD9B4u: goto label_7F1FD9B4;
    case 0x7F1FD9B8u: goto label_7F1FD9B8;
    case 0x7F1FD9BCu: goto label_7F1FD9BC;
    case 0x7F1FD9C0u: goto label_7F1FD9C0;
    case 0x7F1FD9C4u: goto label_7F1FD9C4;
    case 0x7F1FD9C8u: goto label_7F1FD9C8;
    case 0x7F1FD9CCu: goto label_7F1FD9CC;
    case 0x7F1FD9D0u: goto label_7F1FD9D0;
    case 0x7F1FD9D4u: goto label_7F1FD9D4;
    case 0x7F1FD9D8u: goto label_7F1FD9D8;
    case 0x7F1FD9DCu: goto label_7F1FD9DC;
    case 0x7F1FD9E0u: goto label_7F1FD9E0;
    case 0x7F1FD9E4u: goto label_7F1FD9E4;
    case 0x7F1FD9E8u: goto label_7F1FD9E8;
    case 0x7F1FD9ECu: goto label_7F1FD9EC;
    case 0x7F1FD9F0u: goto label_7F1FD9F0;
    case 0x7F1FD9F4u: goto label_7F1FD9F4;
    case 0x7F1FD9F8u: goto label_7F1FD9F8;
    case 0x7F1FD9FCu: goto label_7F1FD9FC;
    case 0x7F1FDA00u: goto label_7F1FDA00;
    case 0x7F1FDA04u: goto label_7F1FDA04;
    case 0x7F1FDA08u: goto label_7F1FDA08;
    case 0x7F1FDA0Cu: goto label_7F1FDA0C;
    case 0x7F1FDA10u: goto label_7F1FDA10;
    case 0x7F1FDA14u: goto label_7F1FDA14;
    case 0x7F1FDA18u: goto label_7F1FDA18;
    case 0x7F1FDA1Cu: goto label_7F1FDA1C;
    case 0x7F1FDA20u: goto label_7F1FDA20;
    case 0x7F1FDA24u: goto label_7F1FDA24;
    case 0x7F1FDA28u: goto label_7F1FDA28;
    case 0x7F1FDA2Cu: goto label_7F1FDA2C;
    case 0x7F1FDA30u: goto label_7F1FDA30;
    case 0x7F1FDA34u: goto label_7F1FDA34;
    case 0x7F1FDA38u: goto label_7F1FDA38;
    case 0x7F1FDA3Cu: goto label_7F1FDA3C;
    case 0x7F1FDA40u: goto label_7F1FDA40;
    case 0x7F1FDA44u: goto label_7F1FDA44;
    case 0x7F1FDA48u: goto label_7F1FDA48;
    case 0x7F1FDA4Cu: goto label_7F1FDA4C;
    case 0x7F1FDA50u: goto label_7F1FDA50;
    case 0x7F1FDA54u: goto label_7F1FDA54;
    case 0x7F1FDA58u: goto label_7F1FDA58;
    case 0x7F1FDA5Cu: goto label_7F1FDA5C;
    case 0x7F1FDA60u: goto label_7F1FDA60;
    case 0x7F1FDA64u: goto label_7F1FDA64;
    case 0x7F1FDA68u: goto label_7F1FDA68;
    case 0x7F1FDA6Cu: goto label_7F1FDA6C;
    case 0x7F1FDA70u: goto label_7F1FDA70;
    case 0x7F1FDA74u: goto label_7F1FDA74;
    case 0x7F1FDA78u: goto label_7F1FDA78;
    case 0x7F1FDA7Cu: goto label_7F1FDA7C;
    case 0x7F1FDA80u: goto label_7F1FDA80;
    case 0x7F1FDA84u: goto label_7F1FDA84;
    case 0x7F1FDA88u: goto label_7F1FDA88;
    case 0x7F1FDA8Cu: goto label_7F1FDA8C;
    case 0x7F1FDA90u: goto label_7F1FDA90;
    case 0x7F1FDA94u: goto label_7F1FDA94;
    case 0x7F1FDA98u: goto label_7F1FDA98;
    case 0x7F1FDA9Cu: goto label_7F1FDA9C;
    case 0x7F1FDAA0u: goto label_7F1FDAA0;
    case 0x7F1FDAA4u: goto label_7F1FDAA4;
    case 0x7F1FDAA8u: goto label_7F1FDAA8;
    case 0x7F1FDAACu: goto label_7F1FDAAC;
    case 0x7F1FDAB0u: goto label_7F1FDAB0;
    case 0x7F1FDAB4u: goto label_7F1FDAB4;
    case 0x7F1FDAB8u: goto label_7F1FDAB8;
    case 0x7F1FDABCu: goto label_7F1FDABC;
    case 0x7F1FDAC0u: goto label_7F1FDAC0;
    case 0x7F1FDAC4u: goto label_7F1FDAC4;
    case 0x7F1FDAC8u: goto label_7F1FDAC8;
    case 0x7F1FDACCu: goto label_7F1FDACC;
    case 0x7F1FDAD0u: goto label_7F1FDAD0;
    case 0x7F1FDAD4u: goto label_7F1FDAD4;
    case 0x7F1FDAD8u: goto label_7F1FDAD8;
    case 0x7F1FDADCu: goto label_7F1FDADC;
    case 0x7F1FDAE0u: goto label_7F1FDAE0;
    case 0x7F1FDAE4u: goto label_7F1FDAE4;
    case 0x7F1FDAE8u: goto label_7F1FDAE8;
    case 0x7F1FDAECu: goto label_7F1FDAEC;
    case 0x7F1FDAF0u: goto label_7F1FDAF0;
    case 0x7F1FDAF4u: goto label_7F1FDAF4;
    case 0x7F1FDAF8u: goto label_7F1FDAF8;
    case 0x7F1FDAFCu: goto label_7F1FDAFC;
    case 0x7F1FDB00u: goto label_7F1FDB00;
    case 0x7F1FDB04u: goto label_7F1FDB04;
    case 0x7F1FDB08u: goto label_7F1FDB08;
    case 0x7F1FDB0Cu: goto label_7F1FDB0C;
    case 0x7F1FDB10u: goto label_7F1FDB10;
    case 0x7F1FDB14u: goto label_7F1FDB14;
    case 0x7F1FDB18u: goto label_7F1FDB18;
    case 0x7F1FDB1Cu: goto label_7F1FDB1C;
    case 0x7F1FDB20u: goto label_7F1FDB20;
    case 0x7F1FDB24u: goto label_7F1FDB24;
    case 0x7F1FDB28u: goto label_7F1FDB28;
    case 0x7F1FDB2Cu: goto label_7F1FDB2C;
    case 0x7F1FDB30u: goto label_7F1FDB30;
    case 0x7F1FDB34u: goto label_7F1FDB34;
    case 0x7F1FDB38u: goto label_7F1FDB38;
    case 0x7F1FDB3Cu: goto label_7F1FDB3C;
    case 0x7F1FDB40u: goto label_7F1FDB40;
    case 0x7F1FDB44u: goto label_7F1FDB44;
    case 0x7F1FDB48u: goto label_7F1FDB48;
    case 0x7F1FDB4Cu: goto label_7F1FDB4C;
    case 0x7F1FDB50u: goto label_7F1FDB50;
    case 0x7F1FDB54u: goto label_7F1FDB54;
    case 0x7F1FDB58u: goto label_7F1FDB58;
    case 0x7F1FDB5Cu: goto label_7F1FDB5C;
    case 0x7F1FDB60u: goto label_7F1FDB60;
    case 0x7F1FDB64u: goto label_7F1FDB64;
    case 0x7F1FDB68u: goto label_7F1FDB68;
    case 0x7F1FDB6Cu: goto label_7F1FDB6C;
    case 0x7F1FDB70u: goto label_7F1FDB70;
    case 0x7F1FDB74u: goto label_7F1FDB74;
    case 0x7F1FDB78u: goto label_7F1FDB78;
    case 0x7F1FDB7Cu: goto label_7F1FDB7C;
    case 0x7F1FDB80u: goto label_7F1FDB80;
    case 0x7F1FDB84u: goto label_7F1FDB84;
    case 0x7F1FDB88u: goto label_7F1FDB88;
    case 0x7F1FDB8Cu: goto label_7F1FDB8C;
    case 0x7F1FDB90u: goto label_7F1FDB90;
    case 0x7F1FDB94u: goto label_7F1FDB94;
    case 0x7F1FDB98u: goto label_7F1FDB98;
    case 0x7F1FDB9Cu: goto label_7F1FDB9C;
    case 0x7F1FDBA0u: goto label_7F1FDBA0;
    case 0x7F1FDBA4u: goto label_7F1FDBA4;
    case 0x7F1FDBA8u: goto label_7F1FDBA8;
    case 0x7F1FDBACu: goto label_7F1FDBAC;
    case 0x7F1FDBB0u: goto label_7F1FDBB0;
    case 0x7F1FDBB4u: goto label_7F1FDBB4;
    case 0x7F1FDBB8u: goto label_7F1FDBB8;
    case 0x7F1FDBBCu: goto label_7F1FDBBC;
    case 0x7F1FDBC0u: goto label_7F1FDBC0;
    case 0x7F1FDBC4u: goto label_7F1FDBC4;
    case 0x7F1FDBC8u: goto label_7F1FDBC8;
    case 0x7F1FDBCCu: goto label_7F1FDBCC;
    case 0x7F1FDBD0u: goto label_7F1FDBD0;
    case 0x7F1FDBD4u: goto label_7F1FDBD4;
    case 0x7F1FDBD8u: goto label_7F1FDBD8;
    case 0x7F1FDBDCu: goto label_7F1FDBDC;
    case 0x7F1FDBE0u: goto label_7F1FDBE0;
    case 0x7F1FDBE4u: goto label_7F1FDBE4;
    case 0x7F1FDBE8u: goto label_7F1FDBE8;
    case 0x7F1FDBECu: goto label_7F1FDBEC;
    case 0x7F1FDBF0u: goto label_7F1FDBF0;
    case 0x7F1FDBF4u: goto label_7F1FDBF4;
    case 0x7F1FDBF8u: goto label_7F1FDBF8;
    case 0x7F1FDBFCu: goto label_7F1FDBFC;
    case 0x7F1FDC00u: goto label_7F1FDC00;
    case 0x7F1FDC04u: goto label_7F1FDC04;
    case 0x7F1FDC08u: goto label_7F1FDC08;
    case 0x7F1FDC0Cu: goto label_7F1FDC0C;
    case 0x7F1FDC10u: goto label_7F1FDC10;
    case 0x7F1FDC14u: goto label_7F1FDC14;
    case 0x7F1FDC18u: goto label_7F1FDC18;
    case 0x7F1FDC1Cu: goto label_7F1FDC1C;
    case 0x7F1FDC20u: goto label_7F1FDC20;
    case 0x7F1FDC24u: goto label_7F1FDC24;
    case 0x7F1FDC28u: goto label_7F1FDC28;
    case 0x7F1FDC2Cu: goto label_7F1FDC2C;
    case 0x7F1FDC30u: goto label_7F1FDC30;
    case 0x7F1FDC34u: goto label_7F1FDC34;
    case 0x7F1FDC38u: goto label_7F1FDC38;
    case 0x7F1FDC3Cu: goto label_7F1FDC3C;
    case 0x7F1FDC40u: goto label_7F1FDC40;
    case 0x7F1FDC44u: goto label_7F1FDC44;
    case 0x7F1FDC48u: goto label_7F1FDC48;
    case 0x7F1FDC4Cu: goto label_7F1FDC4C;
    case 0x7F1FDC50u: goto label_7F1FDC50;
    case 0x7F1FDC54u: goto label_7F1FDC54;
    case 0x7F1FDC58u: goto label_7F1FDC58;
    case 0x7F1FDC5Cu: goto label_7F1FDC5C;
    case 0x7F1FDC60u: goto label_7F1FDC60;
    case 0x7F1FDC64u: goto label_7F1FDC64;
    case 0x7F1FDC68u: goto label_7F1FDC68;
    case 0x7F1FDC6Cu: goto label_7F1FDC6C;
    case 0x7F1FDC70u: goto label_7F1FDC70;
    case 0x7F1FDC74u: goto label_7F1FDC74;
    case 0x7F1FDC78u: goto label_7F1FDC78;
    case 0x7F1FDC7Cu: goto label_7F1FDC7C;
    case 0x7F1FDC80u: goto label_7F1FDC80;
    case 0x7F1FDC84u: goto label_7F1FDC84;
    case 0x7F1FDC88u: goto label_7F1FDC88;
    case 0x7F1FDC8Cu: goto label_7F1FDC8C;
    case 0x7F1FDC90u: goto label_7F1FDC90;
    case 0x7F1FDC94u: goto label_7F1FDC94;
    case 0x7F1FDC98u: goto label_7F1FDC98;
    case 0x7F1FDC9Cu: goto label_7F1FDC9C;
    case 0x7F1FDCA0u: goto label_7F1FDCA0;
    case 0x7F1FDCA4u: goto label_7F1FDCA4;
    case 0x7F1FDCA8u: goto label_7F1FDCA8;
    case 0x7F1FDCACu: goto label_7F1FDCAC;
    case 0x7F1FDCB0u: goto label_7F1FDCB0;
    case 0x7F1FDCB4u: goto label_7F1FDCB4;
    case 0x7F1FDCB8u: goto label_7F1FDCB8;
    case 0x7F1FDCBCu: goto label_7F1FDCBC;
    case 0x7F1FDCC0u: goto label_7F1FDCC0;
    case 0x7F1FDCC4u: goto label_7F1FDCC4;
    case 0x7F1FDCC8u: goto label_7F1FDCC8;
    case 0x7F1FDCCCu: goto label_7F1FDCCC;
    case 0x7F1FDCD0u: goto label_7F1FDCD0;
    case 0x7F1FDCD4u: goto label_7F1FDCD4;
    case 0x7F1FDCD8u: goto label_7F1FDCD8;
    case 0x7F1FDCDCu: goto label_7F1FDCDC;
    case 0x7F1FDCE0u: goto label_7F1FDCE0;
    case 0x7F1FDCE4u: goto label_7F1FDCE4;
    case 0x7F1FDCE8u: goto label_7F1FDCE8;
    case 0x7F1FDCECu: goto label_7F1FDCEC;
    case 0x7F1FDCF0u: goto label_7F1FDCF0;
    case 0x7F1FDCF4u: goto label_7F1FDCF4;
    case 0x7F1FDCF8u: goto label_7F1FDCF8;
    case 0x7F1FDCFCu: goto label_7F1FDCFC;
    case 0x7F1FDD00u: goto label_7F1FDD00;
    case 0x7F1FDD04u: goto label_7F1FDD04;
    case 0x7F1FDD08u: goto label_7F1FDD08;
    case 0x7F1FDD0Cu: goto label_7F1FDD0C;
    case 0x7F1FDD10u: goto label_7F1FDD10;
    case 0x7F1FDD14u: goto label_7F1FDD14;
    case 0x7F1FDD18u: goto label_7F1FDD18;
    case 0x7F1FDD1Cu: goto label_7F1FDD1C;
    case 0x7F1FDD20u: goto label_7F1FDD20;
    case 0x7F1FDD24u: goto label_7F1FDD24;
    case 0x7F1FDD28u: goto label_7F1FDD28;
    case 0x7F1FDD2Cu: goto label_7F1FDD2C;
    case 0x7F1FDD30u: goto label_7F1FDD30;
    case 0x7F1FDD34u: goto label_7F1FDD34;
    case 0x7F1FDD38u: goto label_7F1FDD38;
    case 0x7F1FDD3Cu: goto label_7F1FDD3C;
    case 0x7F1FDD40u: goto label_7F1FDD40;
    case 0x7F1FDD44u: goto label_7F1FDD44;
    case 0x7F1FDD48u: goto label_7F1FDD48;
    case 0x7F1FDD4Cu: goto label_7F1FDD4C;
    case 0x7F1FDD50u: goto label_7F1FDD50;
    case 0x7F1FDD54u: goto label_7F1FDD54;
    case 0x7F1FDD58u: goto label_7F1FDD58;
    case 0x7F1FDD5Cu: goto label_7F1FDD5C;
    case 0x7F1FDD60u: goto label_7F1FDD60;
    case 0x7F1FDD64u: goto label_7F1FDD64;
    case 0x7F1FDD68u: goto label_7F1FDD68;
    case 0x7F1FDD6Cu: goto label_7F1FDD6C;
    case 0x7F1FDD70u: goto label_7F1FDD70;
    case 0x7F1FDD74u: goto label_7F1FDD74;
    case 0x7F1FDD78u: goto label_7F1FDD78;
    case 0x7F1FDD7Cu: goto label_7F1FDD7C;
    case 0x7F1FDD80u: goto label_7F1FDD80;
    case 0x7F1FDD84u: goto label_7F1FDD84;
    case 0x7F1FDD88u: goto label_7F1FDD88;
    case 0x7F1FDD8Cu: goto label_7F1FDD8C;
    case 0x7F1FDD90u: goto label_7F1FDD90;
    case 0x7F1FDD94u: goto label_7F1FDD94;
    case 0x7F1FDD98u: goto label_7F1FDD98;
    case 0x7F1FDD9Cu: goto label_7F1FDD9C;
    case 0x7F1FDDA0u: goto label_7F1FDDA0;
    case 0x7F1FDDA4u: goto label_7F1FDDA4;
    case 0x7F1FDDA8u: goto label_7F1FDDA8;
    case 0x7F1FDDACu: goto label_7F1FDDAC;
    case 0x7F1FDDB0u: goto label_7F1FDDB0;
    case 0x7F1FDDB4u: goto label_7F1FDDB4;
    case 0x7F1FDDB8u: goto label_7F1FDDB8;
    case 0x7F1FDDBCu: goto label_7F1FDDBC;
    case 0x7F1FDDC0u: goto label_7F1FDDC0;
    case 0x7F1FDDC4u: goto label_7F1FDDC4;
    case 0x7F1FDDC8u: goto label_7F1FDDC8;
    case 0x7F1FDDCCu: goto label_7F1FDDCC;
    case 0x7F1FDDD0u: goto label_7F1FDDD0;
    case 0x7F1FDDD4u: goto label_7F1FDDD4;
    case 0x7F1FDDD8u: goto label_7F1FDDD8;
    case 0x7F1FDDDCu: goto label_7F1FDDDC;
    case 0x7F1FDDE0u: goto label_7F1FDDE0;
    case 0x7F1FDDE4u: goto label_7F1FDDE4;
    case 0x7F1FDDE8u: goto label_7F1FDDE8;
    case 0x7F1FDDECu: goto label_7F1FDDEC;
    case 0x7F1FDDF0u: goto label_7F1FDDF0;
    case 0x7F1FDDF4u: goto label_7F1FDDF4;
    case 0x7F1FDDF8u: goto label_7F1FDDF8;
    case 0x7F1FDDFCu: goto label_7F1FDDFC;
    case 0x7F1FDE00u: goto label_7F1FDE00;
    case 0x7F1FDE04u: goto label_7F1FDE04;
    case 0x7F1FDE08u: goto label_7F1FDE08;
    case 0x7F1FDE0Cu: goto label_7F1FDE0C;
    case 0x7F1FDE10u: goto label_7F1FDE10;
    case 0x7F1FDE14u: goto label_7F1FDE14;
    case 0x7F1FDE18u: goto label_7F1FDE18;
    case 0x7F1FDE1Cu: goto label_7F1FDE1C;
    case 0x7F1FDE20u: goto label_7F1FDE20;
    case 0x7F1FDE24u: goto label_7F1FDE24;
    case 0x7F1FDE28u: goto label_7F1FDE28;
    case 0x7F1FDE2Cu: goto label_7F1FDE2C;
    case 0x7F1FDE30u: goto label_7F1FDE30;
    case 0x7F1FDE34u: goto label_7F1FDE34;
    case 0x7F1FDE38u: goto label_7F1FDE38;
    case 0x7F1FDE3Cu: goto label_7F1FDE3C;
    case 0x7F1FDE40u: goto label_7F1FDE40;
    case 0x7F1FDE44u: goto label_7F1FDE44;
    case 0x7F1FDE48u: goto label_7F1FDE48;
    case 0x7F1FDE4Cu: goto label_7F1FDE4C;
    case 0x7F1FDE50u: goto label_7F1FDE50;
    case 0x7F1FDE54u: goto label_7F1FDE54;
    case 0x7F1FDE58u: goto label_7F1FDE58;
    case 0x7F1FDE5Cu: goto label_7F1FDE5C;
    case 0x7F1FDE60u: goto label_7F1FDE60;
    case 0x7F1FDE64u: goto label_7F1FDE64;
    case 0x7F1FDE68u: goto label_7F1FDE68;
    case 0x7F1FDE6Cu: goto label_7F1FDE6C;
    case 0x7F1FDE70u: goto label_7F1FDE70;
    case 0x7F1FDE74u: goto label_7F1FDE74;
    case 0x7F1FDE78u: goto label_7F1FDE78;
    case 0x7F1FDE7Cu: goto label_7F1FDE7C;
    case 0x7F1FDE80u: goto label_7F1FDE80;
    case 0x7F1FDE84u: goto label_7F1FDE84;
    case 0x7F1FDE88u: goto label_7F1FDE88;
    case 0x7F1FDE8Cu: goto label_7F1FDE8C;
    case 0x7F1FDE90u: goto label_7F1FDE90;
    case 0x7F1FDE94u: goto label_7F1FDE94;
    case 0x7F1FDE98u: goto label_7F1FDE98;
    case 0x7F1FDE9Cu: goto label_7F1FDE9C;
    case 0x7F1FDEA0u: goto label_7F1FDEA0;
    case 0x7F1FDEA4u: goto label_7F1FDEA4;
    case 0x7F1FDEA8u: goto label_7F1FDEA8;
    case 0x7F1FDEACu: goto label_7F1FDEAC;
    case 0x7F1FDEB0u: goto label_7F1FDEB0;
    case 0x7F1FDEB4u: goto label_7F1FDEB4;
    case 0x7F1FDEB8u: goto label_7F1FDEB8;
    case 0x7F1FDEBCu: goto label_7F1FDEBC;
    case 0x7F1FDEC0u: goto label_7F1FDEC0;
    case 0x7F1FDEC4u: goto label_7F1FDEC4;
    case 0x7F1FDEC8u: goto label_7F1FDEC8;
    case 0x7F1FDECCu: goto label_7F1FDECC;
    case 0x7F1FDED0u: goto label_7F1FDED0;
    case 0x7F1FDED4u: goto label_7F1FDED4;
    case 0x7F1FDED8u: goto label_7F1FDED8;
    case 0x7F1FDEDCu: goto label_7F1FDEDC;
    case 0x7F1FDEE0u: goto label_7F1FDEE0;
    case 0x7F1FDEE4u: goto label_7F1FDEE4;
    case 0x7F1FDEE8u: goto label_7F1FDEE8;
    case 0x7F1FDEECu: goto label_7F1FDEEC;
    case 0x7F1FDEF0u: goto label_7F1FDEF0;
    case 0x7F1FDEF4u: goto label_7F1FDEF4;
    case 0x7F1FDEF8u: goto label_7F1FDEF8;
    case 0x7F1FDEFCu: goto label_7F1FDEFC;
    case 0x7F1FDF00u: goto label_7F1FDF00;
    case 0x7F1FDF04u: goto label_7F1FDF04;
    case 0x7F1FDF08u: goto label_7F1FDF08;
    case 0x7F1FDF0Cu: goto label_7F1FDF0C;
    case 0x7F1FDF10u: goto label_7F1FDF10;
    case 0x7F1FDF14u: goto label_7F1FDF14;
    case 0x7F1FDF18u: goto label_7F1FDF18;
    case 0x7F1FDF1Cu: goto label_7F1FDF1C;
    case 0x7F1FDF20u: goto label_7F1FDF20;
    case 0x7F1FDF24u: goto label_7F1FDF24;
    case 0x7F1FDF28u: goto label_7F1FDF28;
    case 0x7F1FDF2Cu: goto label_7F1FDF2C;
    case 0x7F1FDF30u: goto label_7F1FDF30;
    case 0x7F1FDF34u: goto label_7F1FDF34;
    case 0x7F1FDF38u: goto label_7F1FDF38;
    case 0x7F1FDF3Cu: goto label_7F1FDF3C;
    case 0x7F1FDF40u: goto label_7F1FDF40;
    case 0x7F1FDF44u: goto label_7F1FDF44;
    case 0x7F1FDF48u: goto label_7F1FDF48;
    case 0x7F1FDF4Cu: goto label_7F1FDF4C;
    case 0x7F1FDF50u: goto label_7F1FDF50;
    case 0x7F1FDF54u: goto label_7F1FDF54;
    case 0x7F1FDF58u: goto label_7F1FDF58;
    case 0x7F1FDF5Cu: goto label_7F1FDF5C;
    case 0x7F1FDF60u: goto label_7F1FDF60;
    case 0x7F1FDF64u: goto label_7F1FDF64;
    case 0x7F1FDF68u: goto label_7F1FDF68;
    case 0x7F1FDF6Cu: goto label_7F1FDF6C;
    case 0x7F1FDF70u: goto label_7F1FDF70;
    case 0x7F1FDF74u: goto label_7F1FDF74;
    case 0x7F1FDF78u: goto label_7F1FDF78;
    case 0x7F1FDF7Cu: goto label_7F1FDF7C;
    case 0x7F1FDF80u: goto label_7F1FDF80;
    case 0x7F1FDF84u: goto label_7F1FDF84;
    case 0x7F1FDF88u: goto label_7F1FDF88;
    case 0x7F1FDF8Cu: goto label_7F1FDF8C;
    case 0x7F1FDF90u: goto label_7F1FDF90;
    case 0x7F1FDF94u: goto label_7F1FDF94;
    case 0x7F1FDF98u: goto label_7F1FDF98;
    case 0x7F1FDF9Cu: goto label_7F1FDF9C;
    case 0x7F1FDFA0u: goto label_7F1FDFA0;
    case 0x7F1FDFA4u: goto label_7F1FDFA4;
    case 0x7F1FDFA8u: goto label_7F1FDFA8;
    case 0x7F1FDFACu: goto label_7F1FDFAC;
    case 0x7F1FDFB0u: goto label_7F1FDFB0;
    case 0x7F1FDFB4u: goto label_7F1FDFB4;
    case 0x7F1FDFB8u: goto label_7F1FDFB8;
    case 0x7F1FDFBCu: goto label_7F1FDFBC;
    case 0x7F1FDFC0u: goto label_7F1FDFC0;
    case 0x7F1FDFC4u: goto label_7F1FDFC4;
    case 0x7F1FDFC8u: goto label_7F1FDFC8;
    case 0x7F1FDFCCu: goto label_7F1FDFCC;
    case 0x7F1FDFD0u: goto label_7F1FDFD0;
    case 0x7F1FDFD4u: goto label_7F1FDFD4;
    case 0x7F1FDFD8u: goto label_7F1FDFD8;
    case 0x7F1FDFDCu: goto label_7F1FDFDC;
    case 0x7F1FDFE0u: goto label_7F1FDFE0;
    case 0x7F1FDFE4u: goto label_7F1FDFE4;
    case 0x7F1FDFE8u: goto label_7F1FDFE8;
    case 0x7F1FDFECu: goto label_7F1FDFEC;
    case 0x7F1FDFF0u: goto label_7F1FDFF0;
    case 0x7F1FDFF4u: goto label_7F1FDFF4;
    case 0x7F1FDFF8u: goto label_7F1FDFF8;
    case 0x7F1FDFFCu: goto label_7F1FDFFC;
    case 0x7F1FE000u: goto label_7F1FE000;
    case 0x7F1FE004u: goto label_7F1FE004;
    case 0x7F1FE008u: goto label_7F1FE008;
    case 0x7F1FE00Cu: goto label_7F1FE00C;
    case 0x7F1FE010u: goto label_7F1FE010;
    case 0x7F1FE014u: goto label_7F1FE014;
    case 0x7F1FE018u: goto label_7F1FE018;
    case 0x7F1FE01Cu: goto label_7F1FE01C;
    case 0x7F1FE020u: goto label_7F1FE020;
    case 0x7F1FE024u: goto label_7F1FE024;
    case 0x7F1FE028u: goto label_7F1FE028;
    case 0x7F1FE02Cu: goto label_7F1FE02C;
    case 0x7F1FE030u: goto label_7F1FE030;
    case 0x7F1FE034u: goto label_7F1FE034;
    case 0x7F1FE038u: goto label_7F1FE038;
    case 0x7F1FE03Cu: goto label_7F1FE03C;
    case 0x7F1FE040u: goto label_7F1FE040;
    case 0x7F1FE044u: goto label_7F1FE044;
    case 0x7F1FE048u: goto label_7F1FE048;
    case 0x7F1FE04Cu: goto label_7F1FE04C;
    case 0x7F1FE050u: goto label_7F1FE050;
    case 0x7F1FE054u: goto label_7F1FE054;
    case 0x7F1FE058u: goto label_7F1FE058;
    case 0x7F1FE05Cu: goto label_7F1FE05C;
    case 0x7F1FE060u: goto label_7F1FE060;
    case 0x7F1FE064u: goto label_7F1FE064;
    case 0x7F1FE068u: goto label_7F1FE068;
    case 0x7F1FE06Cu: goto label_7F1FE06C;
    case 0x7F1FE070u: goto label_7F1FE070;
    case 0x7F1FE074u: goto label_7F1FE074;
    case 0x7F1FE078u: goto label_7F1FE078;
    case 0x7F1FE07Cu: goto label_7F1FE07C;
    case 0x7F1FE080u: goto label_7F1FE080;
    case 0x7F1FE084u: goto label_7F1FE084;
    case 0x7F1FE088u: goto label_7F1FE088;
    case 0x7F1FE08Cu: goto label_7F1FE08C;
    case 0x7F1FE090u: goto label_7F1FE090;
    case 0x7F1FE094u: goto label_7F1FE094;
    case 0x7F1FE098u: goto label_7F1FE098;
    case 0x7F1FE09Cu: goto label_7F1FE09C;
    case 0x7F1FE0A0u: goto label_7F1FE0A0;
    case 0x7F1FE0A4u: goto label_7F1FE0A4;
    case 0x7F1FE0A8u: goto label_7F1FE0A8;
    case 0x7F1FE0ACu: goto label_7F1FE0AC;
    case 0x7F1FE0B0u: goto label_7F1FE0B0;
    case 0x7F1FE0B4u: goto label_7F1FE0B4;
    case 0x7F1FE0B8u: goto label_7F1FE0B8;
    case 0x7F1FE0BCu: goto label_7F1FE0BC;
    case 0x7F1FE0C0u: goto label_7F1FE0C0;
    case 0x7F1FE0C4u: goto label_7F1FE0C4;
    case 0x7F1FE0C8u: goto label_7F1FE0C8;
    case 0x7F1FE0CCu: goto label_7F1FE0CC;
    case 0x7F1FE0D0u: goto label_7F1FE0D0;
    case 0x7F1FE0D4u: goto label_7F1FE0D4;
    case 0x7F1FE0D8u: goto label_7F1FE0D8;
    case 0x7F1FE0DCu: goto label_7F1FE0DC;
    case 0x7F1FE0E0u: goto label_7F1FE0E0;
    case 0x7F1FE0E4u: goto label_7F1FE0E4;
    case 0x7F1FE0E8u: goto label_7F1FE0E8;
    case 0x7F1FE0ECu: goto label_7F1FE0EC;
    case 0x7F1FE0F0u: goto label_7F1FE0F0;
    case 0x7F1FE0F4u: goto label_7F1FE0F4;
    case 0x7F1FE0F8u: goto label_7F1FE0F8;
    case 0x7F1FE0FCu: goto label_7F1FE0FC;
    case 0x7F1FE100u: goto label_7F1FE100;
    case 0x7F1FE104u: goto label_7F1FE104;
    case 0x7F1FE108u: goto label_7F1FE108;
    case 0x7F1FE10Cu: goto label_7F1FE10C;
    case 0x7F1FE110u: goto label_7F1FE110;
    case 0x7F1FE114u: goto label_7F1FE114;
    case 0x7F1FE118u: goto label_7F1FE118;
    case 0x7F1FE11Cu: goto label_7F1FE11C;
    case 0x7F1FE120u: goto label_7F1FE120;
    case 0x7F1FE124u: goto label_7F1FE124;
    case 0x7F1FE128u: goto label_7F1FE128;
    case 0x7F1FE12Cu: goto label_7F1FE12C;
    case 0x7F1FE130u: goto label_7F1FE130;
    case 0x7F1FE134u: goto label_7F1FE134;
    case 0x7F1FE138u: goto label_7F1FE138;
    case 0x7F1FE13Cu: goto label_7F1FE13C;
    case 0x7F1FE140u: goto label_7F1FE140;
    case 0x7F1FE144u: goto label_7F1FE144;
    case 0x7F1FE148u: goto label_7F1FE148;
    case 0x7F1FE14Cu: goto label_7F1FE14C;
    case 0x7F1FE150u: goto label_7F1FE150;
    case 0x7F1FE154u: goto label_7F1FE154;
    case 0x7F1FE158u: goto label_7F1FE158;
    case 0x7F1FE15Cu: goto label_7F1FE15C;
    case 0x7F1FE160u: goto label_7F1FE160;
    case 0x7F1FE164u: goto label_7F1FE164;
    case 0x7F1FE168u: goto label_7F1FE168;
    case 0x7F1FE16Cu: goto label_7F1FE16C;
    case 0x7F1FE170u: goto label_7F1FE170;
    case 0x7F1FE174u: goto label_7F1FE174;
    case 0x7F1FE178u: goto label_7F1FE178;
    case 0x7F1FE17Cu: goto label_7F1FE17C;
    case 0x7F1FE180u: goto label_7F1FE180;
    case 0x7F1FE184u: goto label_7F1FE184;
    case 0x7F1FE188u: goto label_7F1FE188;
    case 0x7F1FE18Cu: goto label_7F1FE18C;
    case 0x7F1FE190u: goto label_7F1FE190;
    case 0x7F1FE194u: goto label_7F1FE194;
    case 0x7F1FE198u: goto label_7F1FE198;
    case 0x7F1FE19Cu: goto label_7F1FE19C;
    case 0x7F1FE1A0u: goto label_7F1FE1A0;
    case 0x7F1FE1A4u: goto label_7F1FE1A4;
    case 0x7F1FE1A8u: goto label_7F1FE1A8;
    case 0x7F1FE1ACu: goto label_7F1FE1AC;
    case 0x7F1FE1B0u: goto label_7F1FE1B0;
    case 0x7F1FE1B4u: goto label_7F1FE1B4;
    case 0x7F1FE1B8u: goto label_7F1FE1B8;
    case 0x7F1FE1BCu: goto label_7F1FE1BC;
    case 0x7F1FE1C0u: goto label_7F1FE1C0;
    case 0x7F1FE1C4u: goto label_7F1FE1C4;
    case 0x7F1FE1C8u: goto label_7F1FE1C8;
    case 0x7F1FE1CCu: goto label_7F1FE1CC;
    case 0x7F1FE1D0u: goto label_7F1FE1D0;
    case 0x7F1FE1D4u: goto label_7F1FE1D4;
    case 0x7F1FE1D8u: goto label_7F1FE1D8;
    case 0x7F1FE1DCu: goto label_7F1FE1DC;
    case 0x7F1FE1E0u: goto label_7F1FE1E0;
    case 0x7F1FE1E4u: goto label_7F1FE1E4;
    case 0x7F1FE1E8u: goto label_7F1FE1E8;
    case 0x7F1FE1ECu: goto label_7F1FE1EC;
    case 0x7F1FE1F0u: goto label_7F1FE1F0;
    case 0x7F1FE1F4u: goto label_7F1FE1F4;
    case 0x7F1FE1F8u: goto label_7F1FE1F8;
    case 0x7F1FE1FCu: goto label_7F1FE1FC;
    case 0x7F1FE200u: goto label_7F1FE200;
    case 0x7F1FE204u: goto label_7F1FE204;
    case 0x7F1FE208u: goto label_7F1FE208;
    case 0x7F1FE20Cu: goto label_7F1FE20C;
    case 0x7F1FE210u: goto label_7F1FE210;
    case 0x7F1FE214u: goto label_7F1FE214;
    case 0x7F1FE218u: goto label_7F1FE218;
    case 0x7F1FE21Cu: goto label_7F1FE21C;
    case 0x7F1FE220u: goto label_7F1FE220;
    case 0x7F1FE224u: goto label_7F1FE224;
    case 0x7F1FE228u: goto label_7F1FE228;
    case 0x7F1FE22Cu: goto label_7F1FE22C;
    case 0x7F1FE230u: goto label_7F1FE230;
    case 0x7F1FE234u: goto label_7F1FE234;
    case 0x7F1FE238u: goto label_7F1FE238;
    case 0x7F1FE23Cu: goto label_7F1FE23C;
    case 0x7F1FE240u: goto label_7F1FE240;
    case 0x7F1FE244u: goto label_7F1FE244;
    case 0x7F1FE248u: goto label_7F1FE248;
    case 0x7F1FE24Cu: goto label_7F1FE24C;
    case 0x7F1FE250u: goto label_7F1FE250;
    case 0x7F1FE254u: goto label_7F1FE254;
    case 0x7F1FE258u: goto label_7F1FE258;
    case 0x7F1FE25Cu: goto label_7F1FE25C;
    case 0x7F1FE260u: goto label_7F1FE260;
    case 0x7F1FE264u: goto label_7F1FE264;
    case 0x7F1FE268u: goto label_7F1FE268;
    case 0x7F1FE26Cu: goto label_7F1FE26C;
    case 0x7F1FE270u: goto label_7F1FE270;
    case 0x7F1FE274u: goto label_7F1FE274;
    case 0x7F1FE278u: goto label_7F1FE278;
    case 0x7F1FE27Cu: goto label_7F1FE27C;
    case 0x7F1FE280u: goto label_7F1FE280;
    case 0x7F1FE284u: goto label_7F1FE284;
    case 0x7F1FE288u: goto label_7F1FE288;
    case 0x7F1FE28Cu: goto label_7F1FE28C;
    case 0x7F1FE290u: goto label_7F1FE290;
    case 0x7F1FE294u: goto label_7F1FE294;
    case 0x7F1FE298u: goto label_7F1FE298;
    case 0x7F1FE29Cu: goto label_7F1FE29C;
    case 0x7F1FE2A0u: goto label_7F1FE2A0;
    case 0x7F1FE2A4u: goto label_7F1FE2A4;
    case 0x7F1FE2A8u: goto label_7F1FE2A8;
    case 0x7F1FE2ACu: goto label_7F1FE2AC;
    case 0x7F1FE2B0u: goto label_7F1FE2B0;
    case 0x7F1FE2B4u: goto label_7F1FE2B4;
    case 0x7F1FE2B8u: goto label_7F1FE2B8;
    case 0x7F1FE2BCu: goto label_7F1FE2BC;
    case 0x7F1FE2C0u: goto label_7F1FE2C0;
    case 0x7F1FE2C4u: goto label_7F1FE2C4;
    case 0x7F1FE2C8u: goto label_7F1FE2C8;
    case 0x7F1FE2CCu: goto label_7F1FE2CC;
    case 0x7F1FE2D0u: goto label_7F1FE2D0;
    case 0x7F1FE2D4u: goto label_7F1FE2D4;
    case 0x7F1FE2D8u: goto label_7F1FE2D8;
    case 0x7F1FE2DCu: goto label_7F1FE2DC;
    case 0x7F1FE2E0u: goto label_7F1FE2E0;
    case 0x7F1FE2E4u: goto label_7F1FE2E4;
    case 0x7F1FE2E8u: goto label_7F1FE2E8;
    case 0x7F1FE2ECu: goto label_7F1FE2EC;
    case 0x7F1FE2F0u: goto label_7F1FE2F0;
    case 0x7F1FE2F4u: goto label_7F1FE2F4;
    case 0x7F1FE2F8u: goto label_7F1FE2F8;
    case 0x7F1FE2FCu: goto label_7F1FE2FC;
    case 0x7F1FE300u: goto label_7F1FE300;
    case 0x7F1FE304u: goto label_7F1FE304;
    case 0x7F1FE308u: goto label_7F1FE308;
    case 0x7F1FE30Cu: goto label_7F1FE30C;
    case 0x7F1FE310u: goto label_7F1FE310;
    case 0x7F1FE314u: goto label_7F1FE314;
    case 0x7F1FE318u: goto label_7F1FE318;
    case 0x7F1FE31Cu: goto label_7F1FE31C;
    case 0x7F1FE320u: goto label_7F1FE320;
    case 0x7F1FE324u: goto label_7F1FE324;
    case 0x7F1FE328u: goto label_7F1FE328;
    case 0x7F1FE32Cu: goto label_7F1FE32C;
    case 0x7F1FE330u: goto label_7F1FE330;
    case 0x7F1FE334u: goto label_7F1FE334;
    case 0x7F1FE338u: goto label_7F1FE338;
    case 0x7F1FE33Cu: goto label_7F1FE33C;
    case 0x7F1FE340u: goto label_7F1FE340;
    case 0x7F1FE344u: goto label_7F1FE344;
    case 0x7F1FE348u: goto label_7F1FE348;
    case 0x7F1FE34Cu: goto label_7F1FE34C;
    case 0x7F1FE350u: goto label_7F1FE350;
    case 0x7F1FE354u: goto label_7F1FE354;
    case 0x7F1FE358u: goto label_7F1FE358;
    case 0x7F1FE35Cu: goto label_7F1FE35C;
    case 0x7F1FE360u: goto label_7F1FE360;
    case 0x7F1FE364u: goto label_7F1FE364;
    case 0x7F1FE368u: goto label_7F1FE368;
    case 0x7F1FE36Cu: goto label_7F1FE36C;
    case 0x7F1FE370u: goto label_7F1FE370;
    case 0x7F1FE374u: goto label_7F1FE374;
    case 0x7F1FE378u: goto label_7F1FE378;
    case 0x7F1FE37Cu: goto label_7F1FE37C;
    case 0x7F1FE380u: goto label_7F1FE380;
    case 0x7F1FE384u: goto label_7F1FE384;
    case 0x7F1FE388u: goto label_7F1FE388;
    case 0x7F1FE38Cu: goto label_7F1FE38C;
    case 0x7F1FE390u: goto label_7F1FE390;
    case 0x7F1FE394u: goto label_7F1FE394;
    case 0x7F1FE398u: goto label_7F1FE398;
    case 0x7F1FE39Cu: goto label_7F1FE39C;
    case 0x7F1FE3A0u: goto label_7F1FE3A0;
    case 0x7F1FE3A4u: goto label_7F1FE3A4;
    case 0x7F1FE3A8u: goto label_7F1FE3A8;
    case 0x7F1FE3ACu: goto label_7F1FE3AC;
    case 0x7F1FE3B0u: goto label_7F1FE3B0;
    case 0x7F1FE3B4u: goto label_7F1FE3B4;
    case 0x7F1FE3B8u: goto label_7F1FE3B8;
    case 0x7F1FE3BCu: goto label_7F1FE3BC;
    case 0x7F1FE3C0u: goto label_7F1FE3C0;
    case 0x7F1FE3C4u: goto label_7F1FE3C4;
    case 0x7F1FE3C8u: goto label_7F1FE3C8;
    case 0x7F1FE3CCu: goto label_7F1FE3CC;
    case 0x7F1FE3D0u: goto label_7F1FE3D0;
    case 0x7F1FE3D4u: goto label_7F1FE3D4;
    case 0x7F1FE3D8u: goto label_7F1FE3D8;
    case 0x7F1FE3DCu: goto label_7F1FE3DC;
    case 0x7F1FE3E0u: goto label_7F1FE3E0;
    case 0x7F1FE3E4u: goto label_7F1FE3E4;
    case 0x7F1FE3E8u: goto label_7F1FE3E8;
    case 0x7F1FE3ECu: goto label_7F1FE3EC;
    case 0x7F1FE3F0u: goto label_7F1FE3F0;
    case 0x7F1FE3F4u: goto label_7F1FE3F4;
    case 0x7F1FE3F8u: goto label_7F1FE3F8;
    case 0x7F1FE3FCu: goto label_7F1FE3FC;
    case 0x7F1FE400u: goto label_7F1FE400;
    case 0x7F1FE404u: goto label_7F1FE404;
    case 0x7F1FE408u: goto label_7F1FE408;
    case 0x7F1FE40Cu: goto label_7F1FE40C;
    case 0x7F1FE410u: goto label_7F1FE410;
    case 0x7F1FE414u: goto label_7F1FE414;
    case 0x7F1FE418u: goto label_7F1FE418;
    case 0x7F1FE41Cu: goto label_7F1FE41C;
    case 0x7F1FE420u: goto label_7F1FE420;
    case 0x7F1FE424u: goto label_7F1FE424;
    case 0x7F1FE428u: goto label_7F1FE428;
    case 0x7F1FE42Cu: goto label_7F1FE42C;
    case 0x7F1FE430u: goto label_7F1FE430;
    case 0x7F1FE434u: goto label_7F1FE434;
    case 0x7F1FE438u: goto label_7F1FE438;
    case 0x7F1FE43Cu: goto label_7F1FE43C;
    case 0x7F1FE440u: goto label_7F1FE440;
    case 0x7F1FE444u: goto label_7F1FE444;
    case 0x7F1FE448u: goto label_7F1FE448;
    case 0x7F1FE44Cu: goto label_7F1FE44C;
    case 0x7F1FE450u: goto label_7F1FE450;
    case 0x7F1FE454u: goto label_7F1FE454;
    case 0x7F1FE458u: goto label_7F1FE458;
    case 0x7F1FE45Cu: goto label_7F1FE45C;
    case 0x7F1FE460u: goto label_7F1FE460;
    case 0x7F1FE464u: goto label_7F1FE464;
    case 0x7F1FE468u: goto label_7F1FE468;
    case 0x7F1FE46Cu: goto label_7F1FE46C;
    case 0x7F1FE470u: goto label_7F1FE470;
    case 0x7F1FE474u: goto label_7F1FE474;
    case 0x7F1FE478u: goto label_7F1FE478;
    case 0x7F1FE47Cu: goto label_7F1FE47C;
    case 0x7F1FE480u: goto label_7F1FE480;
    case 0x7F1FE484u: goto label_7F1FE484;
    case 0x7F1FE488u: goto label_7F1FE488;
    case 0x7F1FE48Cu: goto label_7F1FE48C;
    case 0x7F1FE490u: goto label_7F1FE490;
    case 0x7F1FE494u: goto label_7F1FE494;
    case 0x7F1FE498u: goto label_7F1FE498;
    case 0x7F1FE49Cu: goto label_7F1FE49C;
    case 0x7F1FE4A0u: goto label_7F1FE4A0;
    case 0x7F1FE4A4u: goto label_7F1FE4A4;
    case 0x7F1FE4A8u: goto label_7F1FE4A8;
    case 0x7F1FE4ACu: goto label_7F1FE4AC;
    case 0x7F1FE4B0u: goto label_7F1FE4B0;
    case 0x7F1FE4B4u: goto label_7F1FE4B4;
    case 0x7F1FE4B8u: goto label_7F1FE4B8;
    case 0x7F1FE4BCu: goto label_7F1FE4BC;
    case 0x7F1FE4C0u: goto label_7F1FE4C0;
    case 0x7F1FE4C4u: goto label_7F1FE4C4;
    case 0x7F1FE4C8u: goto label_7F1FE4C8;
    case 0x7F1FE4CCu: goto label_7F1FE4CC;
    case 0x7F1FE4D0u: goto label_7F1FE4D0;
    case 0x7F1FE4D4u: goto label_7F1FE4D4;
    case 0x7F1FE4D8u: goto label_7F1FE4D8;
    case 0x7F1FE4DCu: goto label_7F1FE4DC;
    case 0x7F1FE4E0u: goto label_7F1FE4E0;
    case 0x7F1FE4E4u: goto label_7F1FE4E4;
    case 0x7F1FE4E8u: goto label_7F1FE4E8;
    case 0x7F1FE4ECu: goto label_7F1FE4EC;
    case 0x7F1FE4F0u: goto label_7F1FE4F0;
    case 0x7F1FE4F4u: goto label_7F1FE4F4;
    case 0x7F1FE4F8u: goto label_7F1FE4F8;
    case 0x7F1FE4FCu: goto label_7F1FE4FC;
    case 0x7F1FE500u: goto label_7F1FE500;
    case 0x7F1FE504u: goto label_7F1FE504;
    case 0x7F1FE508u: goto label_7F1FE508;
    case 0x7F1FE50Cu: goto label_7F1FE50C;
    case 0x7F1FE510u: goto label_7F1FE510;
    case 0x7F1FE514u: goto label_7F1FE514;
    case 0x7F1FE518u: goto label_7F1FE518;
    case 0x7F1FE51Cu: goto label_7F1FE51C;
    case 0x7F1FE520u: goto label_7F1FE520;
    case 0x7F1FE524u: goto label_7F1FE524;
    case 0x7F1FE528u: goto label_7F1FE528;
    case 0x7F1FE52Cu: goto label_7F1FE52C;
    case 0x7F1FE530u: goto label_7F1FE530;
    case 0x7F1FE534u: goto label_7F1FE534;
    case 0x7F1FE538u: goto label_7F1FE538;
    case 0x7F1FE53Cu: goto label_7F1FE53C;
    case 0x7F1FE540u: goto label_7F1FE540;
    case 0x7F1FE544u: goto label_7F1FE544;
    case 0x7F1FE548u: goto label_7F1FE548;
    case 0x7F1FE54Cu: goto label_7F1FE54C;
    case 0x7F1FE550u: goto label_7F1FE550;
    case 0x7F1FE554u: goto label_7F1FE554;
    case 0x7F1FE558u: goto label_7F1FE558;
    case 0x7F1FE55Cu: goto label_7F1FE55C;
    case 0x7F1FE560u: goto label_7F1FE560;
    case 0x7F1FE564u: goto label_7F1FE564;
    case 0x7F1FE568u: goto label_7F1FE568;
    case 0x7F1FE56Cu: goto label_7F1FE56C;
    case 0x7F1FE570u: goto label_7F1FE570;
    case 0x7F1FE574u: goto label_7F1FE574;
    case 0x7F1FE578u: goto label_7F1FE578;
    case 0x7F1FE57Cu: goto label_7F1FE57C;
    case 0x7F1FE580u: goto label_7F1FE580;
    case 0x7F1FE584u: goto label_7F1FE584;
    case 0x7F1FE588u: goto label_7F1FE588;
    case 0x7F1FE58Cu: goto label_7F1FE58C;
    case 0x7F1FE590u: goto label_7F1FE590;
    case 0x7F1FE594u: goto label_7F1FE594;
    case 0x7F1FE598u: goto label_7F1FE598;
    case 0x7F1FE59Cu: goto label_7F1FE59C;
    case 0x7F1FE5A0u: goto label_7F1FE5A0;
    case 0x7F1FE5A4u: goto label_7F1FE5A4;
    case 0x7F1FE5A8u: goto label_7F1FE5A8;
    case 0x7F1FE5ACu: goto label_7F1FE5AC;
    case 0x7F1FE5B0u: goto label_7F1FE5B0;
    case 0x7F1FE5B4u: goto label_7F1FE5B4;
    case 0x7F1FE5B8u: goto label_7F1FE5B8;
    case 0x7F1FE5BCu: goto label_7F1FE5BC;
    case 0x7F1FE5C0u: goto label_7F1FE5C0;
    case 0x7F1FE5C4u: goto label_7F1FE5C4;
    case 0x7F1FE5C8u: goto label_7F1FE5C8;
    case 0x7F1FE5CCu: goto label_7F1FE5CC;
    case 0x7F1FE5D0u: goto label_7F1FE5D0;
    case 0x7F1FE5D4u: goto label_7F1FE5D4;
    case 0x7F1FE5D8u: goto label_7F1FE5D8;
    case 0x7F1FE5DCu: goto label_7F1FE5DC;
    case 0x7F1FE5E0u: goto label_7F1FE5E0;
    case 0x7F1FE5E4u: goto label_7F1FE5E4;
    case 0x7F1FE5E8u: goto label_7F1FE5E8;
    case 0x7F1FE5ECu: goto label_7F1FE5EC;
    case 0x7F1FE5F0u: goto label_7F1FE5F0;
    case 0x7F1FE5F4u: goto label_7F1FE5F4;
    case 0x7F1FE5F8u: goto label_7F1FE5F8;
    case 0x7F1FE5FCu: goto label_7F1FE5FC;
    case 0x7F1FE600u: goto label_7F1FE600;
    case 0x7F1FE604u: goto label_7F1FE604;
    case 0x7F1FE608u: goto label_7F1FE608;
    case 0x7F1FE60Cu: goto label_7F1FE60C;
    case 0x7F1FE610u: goto label_7F1FE610;
    case 0x7F1FE614u: goto label_7F1FE614;
    case 0x7F1FE618u: goto label_7F1FE618;
    case 0x7F1FE61Cu: goto label_7F1FE61C;
    case 0x7F1FE620u: goto label_7F1FE620;
    case 0x7F1FE624u: goto label_7F1FE624;
    case 0x7F1FE628u: goto label_7F1FE628;
    case 0x7F1FE62Cu: goto label_7F1FE62C;
    case 0x7F1FE630u: goto label_7F1FE630;
    case 0x7F1FE634u: goto label_7F1FE634;
    case 0x7F1FE638u: goto label_7F1FE638;
    case 0x7F1FE63Cu: goto label_7F1FE63C;
    case 0x7F1FE640u: goto label_7F1FE640;
    case 0x7F1FE644u: goto label_7F1FE644;
    case 0x7F1FE648u: goto label_7F1FE648;
    case 0x7F1FE64Cu: goto label_7F1FE64C;
    case 0x7F1FE650u: goto label_7F1FE650;
    case 0x7F1FE654u: goto label_7F1FE654;
    case 0x7F1FE658u: goto label_7F1FE658;
    case 0x7F1FE65Cu: goto label_7F1FE65C;
    case 0x7F1FE660u: goto label_7F1FE660;
    case 0x7F1FE664u: goto label_7F1FE664;
    case 0x7F1FE668u: goto label_7F1FE668;
    case 0x7F1FE66Cu: goto label_7F1FE66C;
    case 0x7F1FE670u: goto label_7F1FE670;
    case 0x7F1FE674u: goto label_7F1FE674;
    case 0x7F1FE678u: goto label_7F1FE678;
    case 0x7F1FE67Cu: goto label_7F1FE67C;
    case 0x7F1FE680u: goto label_7F1FE680;
    case 0x7F1FE684u: goto label_7F1FE684;
    case 0x7F1FE688u: goto label_7F1FE688;
    case 0x7F1FE68Cu: goto label_7F1FE68C;
    case 0x7F1FE690u: goto label_7F1FE690;
    case 0x7F1FE694u: goto label_7F1FE694;
    case 0x7F1FE698u: goto label_7F1FE698;
    case 0x7F1FE69Cu: goto label_7F1FE69C;
    case 0x7F1FE6A0u: goto label_7F1FE6A0;
    case 0x7F1FE6A4u: goto label_7F1FE6A4;
    case 0x7F1FE6A8u: goto label_7F1FE6A8;
    case 0x7F1FE6ACu: goto label_7F1FE6AC;
    case 0x7F1FE6B0u: goto label_7F1FE6B0;
    case 0x7F1FE6B4u: goto label_7F1FE6B4;
    case 0x7F1FE6B8u: goto label_7F1FE6B8;
    case 0x7F1FE6BCu: goto label_7F1FE6BC;
    case 0x7F1FE6C0u: goto label_7F1FE6C0;
    case 0x7F1FE6C4u: goto label_7F1FE6C4;
    case 0x7F1FE6C8u: goto label_7F1FE6C8;
    case 0x7F1FE6CCu: goto label_7F1FE6CC;
    case 0x7F1FE6D0u: goto label_7F1FE6D0;
    case 0x7F1FE6D4u: goto label_7F1FE6D4;
    case 0x7F1FE6D8u: goto label_7F1FE6D8;
    case 0x7F1FE6DCu: goto label_7F1FE6DC;
    case 0x7F1FE6E0u: goto label_7F1FE6E0;
    case 0x7F1FE6E4u: goto label_7F1FE6E4;
    case 0x7F1FE6E8u: goto label_7F1FE6E8;
    case 0x7F1FE6ECu: goto label_7F1FE6EC;
    case 0x7F1FE6F0u: goto label_7F1FE6F0;
    case 0x7F1FE6F4u: goto label_7F1FE6F4;
    case 0x7F1FE6F8u: goto label_7F1FE6F8;
    case 0x7F1FE6FCu: goto label_7F1FE6FC;
    case 0x7F1FE700u: goto label_7F1FE700;
    case 0x7F1FE704u: goto label_7F1FE704;
    case 0x7F1FE708u: goto label_7F1FE708;
    case 0x7F1FE70Cu: goto label_7F1FE70C;
    case 0x7F1FE710u: goto label_7F1FE710;
    case 0x7F1FE714u: goto label_7F1FE714;
    case 0x7F1FE718u: goto label_7F1FE718;
    case 0x7F1FE71Cu: goto label_7F1FE71C;
    case 0x7F1FE720u: goto label_7F1FE720;
    case 0x7F1FE724u: goto label_7F1FE724;
    case 0x7F1FE728u: goto label_7F1FE728;
    case 0x7F1FE72Cu: goto label_7F1FE72C;
    case 0x7F1FE730u: goto label_7F1FE730;
    case 0x7F1FE734u: goto label_7F1FE734;
    case 0x7F1FE738u: goto label_7F1FE738;
    case 0x7F1FE73Cu: goto label_7F1FE73C;
    case 0x7F1FE740u: goto label_7F1FE740;
    case 0x7F1FE744u: goto label_7F1FE744;
    case 0x7F1FE748u: goto label_7F1FE748;
    case 0x7F1FE74Cu: goto label_7F1FE74C;
    case 0x7F1FE750u: goto label_7F1FE750;
    case 0x7F1FE754u: goto label_7F1FE754;
    case 0x7F1FE758u: goto label_7F1FE758;
    case 0x7F1FE75Cu: goto label_7F1FE75C;
    case 0x7F1FE760u: goto label_7F1FE760;
    case 0x7F1FE764u: goto label_7F1FE764;
    case 0x7F1FE768u: goto label_7F1FE768;
    case 0x7F1FE76Cu: goto label_7F1FE76C;
    case 0x7F1FE770u: goto label_7F1FE770;
    case 0x7F1FE774u: goto label_7F1FE774;
    case 0x7F1FE778u: goto label_7F1FE778;
    case 0x7F1FE77Cu: goto label_7F1FE77C;
    case 0x7F1FE780u: goto label_7F1FE780;
    case 0x7F1FE784u: goto label_7F1FE784;
    case 0x7F1FE788u: goto label_7F1FE788;
    case 0x7F1FE78Cu: goto label_7F1FE78C;
    case 0x7F1FE790u: goto label_7F1FE790;
    case 0x7F1FE794u: goto label_7F1FE794;
    case 0x7F1FE798u: goto label_7F1FE798;
    case 0x7F1FE79Cu: goto label_7F1FE79C;
    case 0x7F1FE7A0u: goto label_7F1FE7A0;
    case 0x7F1FE7A4u: goto label_7F1FE7A4;
    case 0x7F1FE7A8u: goto label_7F1FE7A8;
    case 0x7F1FE7ACu: goto label_7F1FE7AC;
    case 0x7F1FE7B0u: goto label_7F1FE7B0;
    case 0x7F1FE7B4u: goto label_7F1FE7B4;
    case 0x7F1FE7B8u: goto label_7F1FE7B8;
    case 0x7F1FE7BCu: goto label_7F1FE7BC;
    case 0x7F1FE7C0u: goto label_7F1FE7C0;
    case 0x7F1FE7C4u: goto label_7F1FE7C4;
    case 0x7F1FE7C8u: goto label_7F1FE7C8;
    case 0x7F1FE7CCu: goto label_7F1FE7CC;
    case 0x7F1FE7D0u: goto label_7F1FE7D0;
    case 0x7F1FE7D4u: goto label_7F1FE7D4;
    case 0x7F1FE7D8u: goto label_7F1FE7D8;
    case 0x7F1FE7DCu: goto label_7F1FE7DC;
    case 0x7F1FE7E0u: goto label_7F1FE7E0;
    case 0x7F1FE7E4u: goto label_7F1FE7E4;
    case 0x7F1FE7E8u: goto label_7F1FE7E8;
    case 0x7F1FE7ECu: goto label_7F1FE7EC;
    case 0x7F1FE7F0u: goto label_7F1FE7F0;
    case 0x7F1FE7F4u: goto label_7F1FE7F4;
    case 0x7F1FE7F8u: goto label_7F1FE7F8;
    case 0x7F1FE7FCu: goto label_7F1FE7FC;
    case 0x7F1FE800u: goto label_7F1FE800;
    case 0x7F1FE804u: goto label_7F1FE804;
    case 0x7F1FE808u: goto label_7F1FE808;
    case 0x7F1FE80Cu: goto label_7F1FE80C;
    case 0x7F1FE810u: goto label_7F1FE810;
    case 0x7F1FE814u: goto label_7F1FE814;
    case 0x7F1FE818u: goto label_7F1FE818;
    case 0x7F1FE81Cu: goto label_7F1FE81C;
    case 0x7F1FE820u: goto label_7F1FE820;
    case 0x7F1FE824u: goto label_7F1FE824;
    case 0x7F1FE828u: goto label_7F1FE828;
    case 0x7F1FE82Cu: goto label_7F1FE82C;
    case 0x7F1FE830u: goto label_7F1FE830;
    case 0x7F1FE834u: goto label_7F1FE834;
    case 0x7F1FE838u: goto label_7F1FE838;
    case 0x7F1FE83Cu: goto label_7F1FE83C;
    case 0x7F1FE840u: goto label_7F1FE840;
    case 0x7F1FE844u: goto label_7F1FE844;
    case 0x7F1FE848u: goto label_7F1FE848;
    case 0x7F1FE84Cu: goto label_7F1FE84C;
    case 0x7F1FE850u: goto label_7F1FE850;
    case 0x7F1FE854u: goto label_7F1FE854;
    case 0x7F1FE858u: goto label_7F1FE858;
    case 0x7F1FE85Cu: goto label_7F1FE85C;
    case 0x7F1FE860u: goto label_7F1FE860;
    case 0x7F1FE864u: goto label_7F1FE864;
    case 0x7F1FE868u: goto label_7F1FE868;
    case 0x7F1FE86Cu: goto label_7F1FE86C;
    case 0x7F1FE870u: goto label_7F1FE870;
    case 0x7F1FE874u: goto label_7F1FE874;
    case 0x7F1FE878u: goto label_7F1FE878;
    case 0x7F1FE87Cu: goto label_7F1FE87C;
    case 0x7F1FE880u: goto label_7F1FE880;
    case 0x7F1FE884u: goto label_7F1FE884;
    case 0x7F1FE888u: goto label_7F1FE888;
    case 0x7F1FE88Cu: goto label_7F1FE88C;
    case 0x7F1FE890u: goto label_7F1FE890;
    case 0x7F1FE894u: goto label_7F1FE894;
    case 0x7F1FE898u: goto label_7F1FE898;
    case 0x7F1FE89Cu: goto label_7F1FE89C;
    case 0x7F1FE8A0u: goto label_7F1FE8A0;
    case 0x7F1FE8A4u: goto label_7F1FE8A4;
    case 0x7F1FE8A8u: goto label_7F1FE8A8;
    case 0x7F1FE8ACu: goto label_7F1FE8AC;
    case 0x7F1FE8B0u: goto label_7F1FE8B0;
    case 0x7F1FE8B4u: goto label_7F1FE8B4;
    case 0x7F1FE8B8u: goto label_7F1FE8B8;
    case 0x7F1FE8BCu: goto label_7F1FE8BC;
    case 0x7F1FE8C0u: goto label_7F1FE8C0;
    case 0x7F1FE8C4u: goto label_7F1FE8C4;
    case 0x7F1FE8C8u: goto label_7F1FE8C8;
    case 0x7F1FE8CCu: goto label_7F1FE8CC;
    case 0x7F1FE8D0u: goto label_7F1FE8D0;
    case 0x7F1FE8D4u: goto label_7F1FE8D4;
    case 0x7F1FE8D8u: goto label_7F1FE8D8;
    case 0x7F1FE8DCu: goto label_7F1FE8DC;
    case 0x7F1FE8E0u: goto label_7F1FE8E0;
    case 0x7F1FE8E4u: goto label_7F1FE8E4;
    case 0x7F1FE8E8u: goto label_7F1FE8E8;
    case 0x7F1FE8ECu: goto label_7F1FE8EC;
    case 0x7F1FE8F0u: goto label_7F1FE8F0;
    case 0x7F1FE8F4u: goto label_7F1FE8F4;
    case 0x7F1FE8F8u: goto label_7F1FE8F8;
    case 0x7F1FE8FCu: goto label_7F1FE8FC;
    case 0x7F1FE900u: goto label_7F1FE900;
    case 0x7F1FE904u: goto label_7F1FE904;
    case 0x7F1FE908u: goto label_7F1FE908;
    case 0x7F1FE90Cu: goto label_7F1FE90C;
    case 0x7F1FE910u: goto label_7F1FE910;
    case 0x7F1FE914u: goto label_7F1FE914;
    case 0x7F1FE918u: goto label_7F1FE918;
    case 0x7F1FE91Cu: goto label_7F1FE91C;
    case 0x7F1FE920u: goto label_7F1FE920;
    case 0x7F1FE924u: goto label_7F1FE924;
    case 0x7F1FE928u: goto label_7F1FE928;
    case 0x7F1FE92Cu: goto label_7F1FE92C;
    case 0x7F1FE930u: goto label_7F1FE930;
    case 0x7F1FE934u: goto label_7F1FE934;
    case 0x7F1FE938u: goto label_7F1FE938;
    case 0x7F1FE93Cu: goto label_7F1FE93C;
    case 0x7F1FE940u: goto label_7F1FE940;
    case 0x7F1FE944u: goto label_7F1FE944;
    case 0x7F1FE948u: goto label_7F1FE948;
    case 0x7F1FE94Cu: goto label_7F1FE94C;
    case 0x7F1FE950u: goto label_7F1FE950;
    case 0x7F1FE954u: goto label_7F1FE954;
    case 0x7F1FE958u: goto label_7F1FE958;
    case 0x7F1FE95Cu: goto label_7F1FE95C;
    case 0x7F1FE960u: goto label_7F1FE960;
    case 0x7F1FE964u: goto label_7F1FE964;
    case 0x7F1FE968u: goto label_7F1FE968;
    case 0x7F1FE96Cu: goto label_7F1FE96C;
    case 0x7F1FE970u: goto label_7F1FE970;
    case 0x7F1FE974u: goto label_7F1FE974;
    case 0x7F1FE978u: goto label_7F1FE978;
    case 0x7F1FE97Cu: goto label_7F1FE97C;
    case 0x7F1FE980u: goto label_7F1FE980;
    case 0x7F1FE984u: goto label_7F1FE984;
    case 0x7F1FE988u: goto label_7F1FE988;
    case 0x7F1FE98Cu: goto label_7F1FE98C;
    case 0x7F1FE990u: goto label_7F1FE990;
    case 0x7F1FE994u: goto label_7F1FE994;
    case 0x7F1FE998u: goto label_7F1FE998;
    case 0x7F1FE99Cu: goto label_7F1FE99C;
    case 0x7F1FE9A0u: goto label_7F1FE9A0;
    case 0x7F1FE9A4u: goto label_7F1FE9A4;
    case 0x7F1FE9A8u: goto label_7F1FE9A8;
    case 0x7F1FE9ACu: goto label_7F1FE9AC;
    case 0x7F1FE9B0u: goto label_7F1FE9B0;
    case 0x7F1FE9B4u: goto label_7F1FE9B4;
    case 0x7F1FE9B8u: goto label_7F1FE9B8;
    case 0x7F1FE9BCu: goto label_7F1FE9BC;
    case 0x7F1FE9C0u: goto label_7F1FE9C0;
    case 0x7F1FE9C4u: goto label_7F1FE9C4;
    case 0x7F1FE9C8u: goto label_7F1FE9C8;
    case 0x7F1FE9CCu: goto label_7F1FE9CC;
    case 0x7F1FE9D0u: goto label_7F1FE9D0;
    case 0x7F1FE9D4u: goto label_7F1FE9D4;
    case 0x7F1FE9D8u: goto label_7F1FE9D8;
    case 0x7F1FE9DCu: goto label_7F1FE9DC;
    case 0x7F1FE9E0u: goto label_7F1FE9E0;
    case 0x7F1FE9E4u: goto label_7F1FE9E4;
    case 0x7F1FE9E8u: goto label_7F1FE9E8;
    case 0x7F1FE9ECu: goto label_7F1FE9EC;
    case 0x7F1FE9F0u: goto label_7F1FE9F0;
    case 0x7F1FE9F4u: goto label_7F1FE9F4;
    case 0x7F1FE9F8u: goto label_7F1FE9F8;
    case 0x7F1FE9FCu: goto label_7F1FE9FC;
    case 0x7F1FEA00u: goto label_7F1FEA00;
    case 0x7F1FEA04u: goto label_7F1FEA04;
    case 0x7F1FEA08u: goto label_7F1FEA08;
    case 0x7F1FEA0Cu: goto label_7F1FEA0C;
    case 0x7F1FEA10u: goto label_7F1FEA10;
    case 0x7F1FEA14u: goto label_7F1FEA14;
    case 0x7F1FEA18u: goto label_7F1FEA18;
    case 0x7F1FEA1Cu: goto label_7F1FEA1C;
    case 0x7F1FEA20u: goto label_7F1FEA20;
    case 0x7F1FEA24u: goto label_7F1FEA24;
    case 0x7F1FEA28u: goto label_7F1FEA28;
    case 0x7F1FEA2Cu: goto label_7F1FEA2C;
    case 0x7F1FEA30u: goto label_7F1FEA30;
    case 0x7F1FEA34u: goto label_7F1FEA34;
    case 0x7F1FEA38u: goto label_7F1FEA38;
    case 0x7F1FEA3Cu: goto label_7F1FEA3C;
    case 0x7F1FEA40u: goto label_7F1FEA40;
    case 0x7F1FEA44u: goto label_7F1FEA44;
    case 0x7F1FEA48u: goto label_7F1FEA48;
    case 0x7F1FEA4Cu: goto label_7F1FEA4C;
    case 0x7F1FEA50u: goto label_7F1FEA50;
    case 0x7F1FEA54u: goto label_7F1FEA54;
    case 0x7F1FEA58u: goto label_7F1FEA58;
    case 0x7F1FEA5Cu: goto label_7F1FEA5C;
    case 0x7F1FEA60u: goto label_7F1FEA60;
    case 0x7F1FEA64u: goto label_7F1FEA64;
    case 0x7F1FEA68u: goto label_7F1FEA68;
    case 0x7F1FEA6Cu: goto label_7F1FEA6C;
    case 0x7F1FEA70u: goto label_7F1FEA70;
    case 0x7F1FEA74u: goto label_7F1FEA74;
    case 0x7F1FEA78u: goto label_7F1FEA78;
    case 0x7F1FEA7Cu: goto label_7F1FEA7C;
    case 0x7F1FEA80u: goto label_7F1FEA80;
    case 0x7F1FEA84u: goto label_7F1FEA84;
    case 0x7F1FEA88u: goto label_7F1FEA88;
    case 0x7F1FEA8Cu: goto label_7F1FEA8C;
    case 0x7F1FEA90u: goto label_7F1FEA90;
    case 0x7F1FEA94u: goto label_7F1FEA94;
    case 0x7F1FEA98u: goto label_7F1FEA98;
    case 0x7F1FEA9Cu: goto label_7F1FEA9C;
    case 0x7F1FEAA0u: goto label_7F1FEAA0;
    case 0x7F1FEAA4u: goto label_7F1FEAA4;
    case 0x7F1FEAA8u: goto label_7F1FEAA8;
    case 0x7F1FEAACu: goto label_7F1FEAAC;
    case 0x7F1FEAB0u: goto label_7F1FEAB0;
    case 0x7F1FEAB4u: goto label_7F1FEAB4;
    case 0x7F1FEAB8u: goto label_7F1FEAB8;
    case 0x7F1FEABCu: goto label_7F1FEABC;
    case 0x7F1FEAC0u: goto label_7F1FEAC0;
    case 0x7F1FEAC4u: goto label_7F1FEAC4;
    case 0x7F1FEAC8u: goto label_7F1FEAC8;
    case 0x7F1FEACCu: goto label_7F1FEACC;
    case 0x7F1FEAD0u: goto label_7F1FEAD0;
    case 0x7F1FEAD4u: goto label_7F1FEAD4;
    case 0x7F1FEAD8u: goto label_7F1FEAD8;
    case 0x7F1FEADCu: goto label_7F1FEADC;
    case 0x7F1FEAE0u: goto label_7F1FEAE0;
    case 0x7F1FEAE4u: goto label_7F1FEAE4;
    case 0x7F1FEAE8u: goto label_7F1FEAE8;
    case 0x7F1FEAECu: goto label_7F1FEAEC;
    case 0x7F1FEAF0u: goto label_7F1FEAF0;
    case 0x7F1FEAF4u: goto label_7F1FEAF4;
    case 0x7F1FEAF8u: goto label_7F1FEAF8;
    case 0x7F1FEAFCu: goto label_7F1FEAFC;
    case 0x7F1FEB00u: goto label_7F1FEB00;
    case 0x7F1FEB04u: goto label_7F1FEB04;
    case 0x7F1FEB08u: goto label_7F1FEB08;
    case 0x7F1FEB0Cu: goto label_7F1FEB0C;
    case 0x7F1FEB10u: goto label_7F1FEB10;
    case 0x7F1FEB14u: goto label_7F1FEB14;
    case 0x7F1FEB18u: goto label_7F1FEB18;
    case 0x7F1FEB1Cu: goto label_7F1FEB1C;
    case 0x7F1FEB20u: goto label_7F1FEB20;
    case 0x7F1FEB24u: goto label_7F1FEB24;
    case 0x7F1FEB28u: goto label_7F1FEB28;
    case 0x7F1FEB2Cu: goto label_7F1FEB2C;
    case 0x7F1FEB30u: goto label_7F1FEB30;
    case 0x7F1FEB34u: goto label_7F1FEB34;
    case 0x7F1FEB38u: goto label_7F1FEB38;
    case 0x7F1FEB3Cu: goto label_7F1FEB3C;
    case 0x7F1FEB40u: goto label_7F1FEB40;
    case 0x7F1FEB44u: goto label_7F1FEB44;
    case 0x7F1FEB48u: goto label_7F1FEB48;
    case 0x7F1FEB4Cu: goto label_7F1FEB4C;
    case 0x7F1FEB50u: goto label_7F1FEB50;
    case 0x7F1FEB54u: goto label_7F1FEB54;
    case 0x7F1FEB58u: goto label_7F1FEB58;
    case 0x7F1FEB5Cu: goto label_7F1FEB5C;
    case 0x7F1FEB60u: goto label_7F1FEB60;
    case 0x7F1FEB64u: goto label_7F1FEB64;
    case 0x7F1FEB68u: goto label_7F1FEB68;
    case 0x7F1FEB6Cu: goto label_7F1FEB6C;
    case 0x7F1FEB70u: goto label_7F1FEB70;
    case 0x7F1FEB74u: goto label_7F1FEB74;
    case 0x7F1FEB78u: goto label_7F1FEB78;
    case 0x7F1FEB7Cu: goto label_7F1FEB7C;
    case 0x7F1FEB80u: goto label_7F1FEB80;
    case 0x7F1FEB84u: goto label_7F1FEB84;
    case 0x7F1FEB88u: goto label_7F1FEB88;
    case 0x7F1FEB8Cu: goto label_7F1FEB8C;
    case 0x7F1FEB90u: goto label_7F1FEB90;
    case 0x7F1FEB94u: goto label_7F1FEB94;
    case 0x7F1FEB98u: goto label_7F1FEB98;
    case 0x7F1FEB9Cu: goto label_7F1FEB9C;
    case 0x7F1FEBA0u: goto label_7F1FEBA0;
    case 0x7F1FEBA4u: goto label_7F1FEBA4;
    case 0x7F1FEBA8u: goto label_7F1FEBA8;
    case 0x7F1FEBACu: goto label_7F1FEBAC;
    case 0x7F1FEBB0u: goto label_7F1FEBB0;
    case 0x7F1FEBB4u: goto label_7F1FEBB4;
    case 0x7F1FEBB8u: goto label_7F1FEBB8;
    case 0x7F1FEBBCu: goto label_7F1FEBBC;
    case 0x7F1FEBC0u: goto label_7F1FEBC0;
    case 0x7F1FEBC4u: goto label_7F1FEBC4;
    case 0x7F1FEBC8u: goto label_7F1FEBC8;
    case 0x7F1FEBCCu: goto label_7F1FEBCC;
    case 0x7F1FEBD0u: goto label_7F1FEBD0;
    case 0x7F1FEBD4u: goto label_7F1FEBD4;
    case 0x7F1FEBD8u: goto label_7F1FEBD8;
    case 0x7F1FEBDCu: goto label_7F1FEBDC;
    case 0x7F1FEBE0u: goto label_7F1FEBE0;
    case 0x7F1FEBE4u: goto label_7F1FEBE4;
    case 0x7F1FEBE8u: goto label_7F1FEBE8;
    case 0x7F1FEBECu: goto label_7F1FEBEC;
    case 0x7F1FEBF0u: goto label_7F1FEBF0;
    case 0x7F1FEBF4u: goto label_7F1FEBF4;
    case 0x7F1FEBF8u: goto label_7F1FEBF8;
    case 0x7F1FEBFCu: goto label_7F1FEBFC;
    case 0x7F1FEC00u: goto label_7F1FEC00;
    case 0x7F1FEC04u: goto label_7F1FEC04;
    case 0x7F1FEC08u: goto label_7F1FEC08;
    case 0x7F1FEC0Cu: goto label_7F1FEC0C;
    case 0x7F1FEC10u: goto label_7F1FEC10;
    case 0x7F1FEC14u: goto label_7F1FEC14;
    case 0x7F1FEC18u: goto label_7F1FEC18;
    case 0x7F1FEC1Cu: goto label_7F1FEC1C;
    case 0x7F1FEC20u: goto label_7F1FEC20;
    case 0x7F1FEC24u: goto label_7F1FEC24;
    case 0x7F1FEC28u: goto label_7F1FEC28;
    case 0x7F1FEC2Cu: goto label_7F1FEC2C;
    case 0x7F1FEC30u: goto label_7F1FEC30;
    case 0x7F1FEC34u: goto label_7F1FEC34;
    case 0x7F1FEC38u: goto label_7F1FEC38;
    case 0x7F1FEC3Cu: goto label_7F1FEC3C;
    case 0x7F1FEC40u: goto label_7F1FEC40;
    case 0x7F1FEC44u: goto label_7F1FEC44;
    case 0x7F1FEC48u: goto label_7F1FEC48;
    case 0x7F1FEC4Cu: goto label_7F1FEC4C;
    case 0x7F1FEC50u: goto label_7F1FEC50;
    case 0x7F1FEC54u: goto label_7F1FEC54;
    case 0x7F1FEC58u: goto label_7F1FEC58;
    case 0x7F1FEC5Cu: goto label_7F1FEC5C;
    case 0x7F1FEC60u: goto label_7F1FEC60;
    case 0x7F1FEC64u: goto label_7F1FEC64;
    case 0x7F1FEC68u: goto label_7F1FEC68;
    case 0x7F1FEC6Cu: goto label_7F1FEC6C;
    case 0x7F1FEC70u: goto label_7F1FEC70;
    case 0x7F1FEC74u: goto label_7F1FEC74;
    case 0x7F1FEC78u: goto label_7F1FEC78;
    case 0x7F1FEC7Cu: goto label_7F1FEC7C;
    case 0x7F1FEC80u: goto label_7F1FEC80;
    case 0x7F1FEC84u: goto label_7F1FEC84;
    case 0x7F1FEC88u: goto label_7F1FEC88;
    case 0x7F1FEC8Cu: goto label_7F1FEC8C;
    case 0x7F1FEC90u: goto label_7F1FEC90;
    case 0x7F1FEC94u: goto label_7F1FEC94;
    case 0x7F1FEC98u: goto label_7F1FEC98;
    case 0x7F1FEC9Cu: goto label_7F1FEC9C;
    case 0x7F1FECA0u: goto label_7F1FECA0;
    case 0x7F1FECA4u: goto label_7F1FECA4;
    case 0x7F1FECA8u: goto label_7F1FECA8;
    case 0x7F1FECACu: goto label_7F1FECAC;
    case 0x7F1FECB0u: goto label_7F1FECB0;
    case 0x7F1FECB4u: goto label_7F1FECB4;
    case 0x7F1FECB8u: goto label_7F1FECB8;
    case 0x7F1FECBCu: goto label_7F1FECBC;
    case 0x7F1FECC0u: goto label_7F1FECC0;
    case 0x7F1FECC4u: goto label_7F1FECC4;
    case 0x7F1FECC8u: goto label_7F1FECC8;
    case 0x7F1FECCCu: goto label_7F1FECCC;
    case 0x7F1FECD0u: goto label_7F1FECD0;
    case 0x7F1FECD4u: goto label_7F1FECD4;
    case 0x7F1FECD8u: goto label_7F1FECD8;
    case 0x7F1FECDCu: goto label_7F1FECDC;
    case 0x7F1FECE0u: goto label_7F1FECE0;
    case 0x7F1FECE4u: goto label_7F1FECE4;
    case 0x7F1FECE8u: goto label_7F1FECE8;
    case 0x7F1FECECu: goto label_7F1FECEC;
    case 0x7F1FECF0u: goto label_7F1FECF0;
    case 0x7F1FECF4u: goto label_7F1FECF4;
    case 0x7F1FECF8u: goto label_7F1FECF8;
    case 0x7F1FECFCu: goto label_7F1FECFC;
    case 0x7F1FED00u: goto label_7F1FED00;
    case 0x7F1FED04u: goto label_7F1FED04;
    case 0x7F1FED08u: goto label_7F1FED08;
    case 0x7F1FED0Cu: goto label_7F1FED0C;
    case 0x7F1FED10u: goto label_7F1FED10;
    case 0x7F1FED14u: goto label_7F1FED14;
    case 0x7F1FED18u: goto label_7F1FED18;
    case 0x7F1FED1Cu: goto label_7F1FED1C;
    case 0x7F1FED20u: goto label_7F1FED20;
    case 0x7F1FED24u: goto label_7F1FED24;
    case 0x7F1FED28u: goto label_7F1FED28;
    case 0x7F1FED2Cu: goto label_7F1FED2C;
    case 0x7F1FED30u: goto label_7F1FED30;
    case 0x7F1FED34u: goto label_7F1FED34;
    case 0x7F1FED38u: goto label_7F1FED38;
    case 0x7F1FED3Cu: goto label_7F1FED3C;
    case 0x7F1FED40u: goto label_7F1FED40;
    case 0x7F1FED44u: goto label_7F1FED44;
    case 0x7F1FED48u: goto label_7F1FED48;
    case 0x7F1FED4Cu: goto label_7F1FED4C;
    case 0x7F1FED50u: goto label_7F1FED50;
    case 0x7F1FED54u: goto label_7F1FED54;
    case 0x7F1FED58u: goto label_7F1FED58;
    case 0x7F1FED5Cu: goto label_7F1FED5C;
    case 0x7F1FED60u: goto label_7F1FED60;
    case 0x7F1FED64u: goto label_7F1FED64;
    case 0x7F1FED68u: goto label_7F1FED68;
    case 0x7F1FED6Cu: goto label_7F1FED6C;
    case 0x7F1FED70u: goto label_7F1FED70;
    case 0x7F1FED74u: goto label_7F1FED74;
    case 0x7F1FED78u: goto label_7F1FED78;
    case 0x7F1FED7Cu: goto label_7F1FED7C;
    case 0x7F1FED80u: goto label_7F1FED80;
    case 0x7F1FED84u: goto label_7F1FED84;
    case 0x7F1FED88u: goto label_7F1FED88;
    case 0x7F1FED8Cu: goto label_7F1FED8C;
    case 0x7F1FED90u: goto label_7F1FED90;
    case 0x7F1FED94u: goto label_7F1FED94;
    case 0x7F1FED98u: goto label_7F1FED98;
    case 0x7F1FED9Cu: goto label_7F1FED9C;
    case 0x7F1FEDA0u: goto label_7F1FEDA0;
    case 0x7F1FEDA4u: goto label_7F1FEDA4;
    case 0x7F1FEDA8u: goto label_7F1FEDA8;
    case 0x7F1FEDACu: goto label_7F1FEDAC;
    case 0x7F1FEDB0u: goto label_7F1FEDB0;
    case 0x7F1FEDB4u: goto label_7F1FEDB4;
    case 0x7F1FEDB8u: goto label_7F1FEDB8;
    case 0x7F1FEDBCu: goto label_7F1FEDBC;
    case 0x7F1FEDC0u: goto label_7F1FEDC0;
    case 0x7F1FEDC4u: goto label_7F1FEDC4;
    case 0x7F1FEDC8u: goto label_7F1FEDC8;
    case 0x7F1FEDCCu: goto label_7F1FEDCC;
    case 0x7F1FEDD0u: goto label_7F1FEDD0;
    case 0x7F1FEDD4u: goto label_7F1FEDD4;
    case 0x7F1FEDD8u: goto label_7F1FEDD8;
    case 0x7F1FEDDCu: goto label_7F1FEDDC;
    case 0x7F1FEDE0u: goto label_7F1FEDE0;
    case 0x7F1FEDE4u: goto label_7F1FEDE4;
    case 0x7F1FEDE8u: goto label_7F1FEDE8;
    case 0x7F1FEDECu: goto label_7F1FEDEC;
    case 0x7F1FEDF0u: goto label_7F1FEDF0;
    case 0x7F1FEDF4u: goto label_7F1FEDF4;
    case 0x7F1FEDF8u: goto label_7F1FEDF8;
    case 0x7F1FEDFCu: goto label_7F1FEDFC;
    case 0x7F1FEE00u: goto label_7F1FEE00;
    case 0x7F1FEE04u: goto label_7F1FEE04;
    case 0x7F1FEE08u: goto label_7F1FEE08;
    case 0x7F1FEE0Cu: goto label_7F1FEE0C;
    case 0x7F1FEE10u: goto label_7F1FEE10;
    case 0x7F1FEE14u: goto label_7F1FEE14;
    case 0x7F1FEE18u: goto label_7F1FEE18;
    case 0x7F1FEE1Cu: goto label_7F1FEE1C;
    case 0x7F1FEE20u: goto label_7F1FEE20;
    case 0x7F1FEE24u: goto label_7F1FEE24;
    case 0x7F1FEE28u: goto label_7F1FEE28;
    case 0x7F1FEE2Cu: goto label_7F1FEE2C;
    case 0x7F1FEE30u: goto label_7F1FEE30;
    case 0x7F1FEE34u: goto label_7F1FEE34;
    case 0x7F1FEE38u: goto label_7F1FEE38;
    case 0x7F1FEE3Cu: goto label_7F1FEE3C;
    case 0x7F1FEE40u: goto label_7F1FEE40;
    case 0x7F1FEE44u: goto label_7F1FEE44;
    case 0x7F1FEE48u: goto label_7F1FEE48;
    case 0x7F1FEE4Cu: goto label_7F1FEE4C;
    case 0x7F1FEE50u: goto label_7F1FEE50;
    case 0x7F1FEE54u: goto label_7F1FEE54;
    case 0x7F1FEE58u: goto label_7F1FEE58;
    case 0x7F1FEE5Cu: goto label_7F1FEE5C;
    case 0x7F1FEE60u: goto label_7F1FEE60;
    case 0x7F1FEE64u: goto label_7F1FEE64;
    case 0x7F1FEE68u: goto label_7F1FEE68;
    case 0x7F1FEE6Cu: goto label_7F1FEE6C;
    case 0x7F1FEE70u: goto label_7F1FEE70;
    case 0x7F1FEE74u: goto label_7F1FEE74;
    case 0x7F1FEE78u: goto label_7F1FEE78;
    case 0x7F1FEE7Cu: goto label_7F1FEE7C;
    case 0x7F1FEE80u: goto label_7F1FEE80;
    case 0x7F1FEE84u: goto label_7F1FEE84;
    case 0x7F1FEE88u: goto label_7F1FEE88;
    case 0x7F1FEE8Cu: goto label_7F1FEE8C;
    case 0x7F1FEE90u: goto label_7F1FEE90;
    case 0x7F1FEE94u: goto label_7F1FEE94;
    case 0x7F1FEE98u: goto label_7F1FEE98;
    case 0x7F1FEE9Cu: goto label_7F1FEE9C;
    case 0x7F1FEEA0u: goto label_7F1FEEA0;
    case 0x7F1FEEA4u: goto label_7F1FEEA4;
    case 0x7F1FEEA8u: goto label_7F1FEEA8;
    case 0x7F1FEEACu: goto label_7F1FEEAC;
    case 0x7F1FEEB0u: goto label_7F1FEEB0;
    case 0x7F1FEEB4u: goto label_7F1FEEB4;
    case 0x7F1FEEB8u: goto label_7F1FEEB8;
    case 0x7F1FEEBCu: goto label_7F1FEEBC;
    case 0x7F1FEEC0u: goto label_7F1FEEC0;
    case 0x7F1FEEC4u: goto label_7F1FEEC4;
    case 0x7F1FEEC8u: goto label_7F1FEEC8;
    case 0x7F1FEECCu: goto label_7F1FEECC;
    case 0x7F1FEED0u: goto label_7F1FEED0;
    case 0x7F1FEED4u: goto label_7F1FEED4;
    case 0x7F1FEED8u: goto label_7F1FEED8;
    case 0x7F1FEEDCu: goto label_7F1FEEDC;
    case 0x7F1FEEE0u: goto label_7F1FEEE0;
    case 0x7F1FEEE4u: goto label_7F1FEEE4;
    case 0x7F1FEEE8u: goto label_7F1FEEE8;
    case 0x7F1FEEECu: goto label_7F1FEEEC;
    case 0x7F1FEEF0u: goto label_7F1FEEF0;
    case 0x7F1FEEF4u: goto label_7F1FEEF4;
    case 0x7F1FEEF8u: goto label_7F1FEEF8;
    case 0x7F1FEEFCu: goto label_7F1FEEFC;
    case 0x7F1FEF00u: goto label_7F1FEF00;
    case 0x7F1FEF04u: goto label_7F1FEF04;
    case 0x7F1FEF08u: goto label_7F1FEF08;
    case 0x7F1FEF0Cu: goto label_7F1FEF0C;
    case 0x7F1FEF10u: goto label_7F1FEF10;
    case 0x7F1FEF14u: goto label_7F1FEF14;
    case 0x7F1FEF18u: goto label_7F1FEF18;
    case 0x7F1FEF1Cu: goto label_7F1FEF1C;
    case 0x7F1FEF20u: goto label_7F1FEF20;
    case 0x7F1FEF24u: goto label_7F1FEF24;
    case 0x7F1FEF28u: goto label_7F1FEF28;
    case 0x7F1FEF2Cu: goto label_7F1FEF2C;
    case 0x7F1FEF30u: goto label_7F1FEF30;
    case 0x7F1FEF34u: goto label_7F1FEF34;
    case 0x7F1FEF38u: goto label_7F1FEF38;
    case 0x7F1FEF3Cu: goto label_7F1FEF3C;
    case 0x7F1FEF40u: goto label_7F1FEF40;
    case 0x7F1FEF44u: goto label_7F1FEF44;
    case 0x7F1FEF48u: goto label_7F1FEF48;
    case 0x7F1FEF4Cu: goto label_7F1FEF4C;
    case 0x7F1FEF50u: goto label_7F1FEF50;
    case 0x7F1FEF54u: goto label_7F1FEF54;
    case 0x7F1FEF58u: goto label_7F1FEF58;
    case 0x7F1FEF5Cu: goto label_7F1FEF5C;
    case 0x7F1FEF60u: goto label_7F1FEF60;
    case 0x7F1FEF64u: goto label_7F1FEF64;
    case 0x7F1FEF68u: goto label_7F1FEF68;
    case 0x7F1FEF6Cu: goto label_7F1FEF6C;
    case 0x7F1FEF70u: goto label_7F1FEF70;
    case 0x7F1FEF74u: goto label_7F1FEF74;
    case 0x7F1FEF78u: goto label_7F1FEF78;
    case 0x7F1FEF7Cu: goto label_7F1FEF7C;
    case 0x7F1FEF80u: goto label_7F1FEF80;
    case 0x7F1FEF84u: goto label_7F1FEF84;
    case 0x7F1FEF88u: goto label_7F1FEF88;
    case 0x7F1FEF8Cu: goto label_7F1FEF8C;
    case 0x7F1FEF90u: goto label_7F1FEF90;
    case 0x7F1FEF94u: goto label_7F1FEF94;
    case 0x7F1FEF98u: goto label_7F1FEF98;
    case 0x7F1FEF9Cu: goto label_7F1FEF9C;
    case 0x7F1FEFA0u: goto label_7F1FEFA0;
    case 0x7F1FEFA4u: goto label_7F1FEFA4;
    case 0x7F1FEFA8u: goto label_7F1FEFA8;
    case 0x7F1FEFACu: goto label_7F1FEFAC;
    case 0x7F1FEFB0u: goto label_7F1FEFB0;
    case 0x7F1FEFB4u: goto label_7F1FEFB4;
    case 0x7F1FEFB8u: goto label_7F1FEFB8;
    case 0x7F1FEFBCu: goto label_7F1FEFBC;
    case 0x7F1FEFC0u: goto label_7F1FEFC0;
    case 0x7F1FEFC4u: goto label_7F1FEFC4;
    case 0x7F1FEFC8u: goto label_7F1FEFC8;
    case 0x7F1FEFCCu: goto label_7F1FEFCC;
    case 0x7F1FEFD0u: goto label_7F1FEFD0;
    case 0x7F1FEFD4u: goto label_7F1FEFD4;
    case 0x7F1FEFD8u: goto label_7F1FEFD8;
    case 0x7F1FEFDCu: goto label_7F1FEFDC;
    case 0x7F1FEFE0u: goto label_7F1FEFE0;
    case 0x7F1FEFE4u: goto label_7F1FEFE4;
    case 0x7F1FEFE8u: goto label_7F1FEFE8;
    case 0x7F1FEFECu: goto label_7F1FEFEC;
    case 0x7F1FEFF0u: goto label_7F1FEFF0;
    case 0x7F1FEFF4u: goto label_7F1FEFF4;
    case 0x7F1FEFF8u: goto label_7F1FEFF8;
    case 0x7F1FEFFCu: goto label_7F1FEFFC;
    case 0x7F1FF000u: goto label_7F1FF000;
    case 0x7F1FF004u: goto label_7F1FF004;
    case 0x7F1FF008u: goto label_7F1FF008;
    case 0x7F1FF00Cu: goto label_7F1FF00C;
    case 0x7F1FF010u: goto label_7F1FF010;
    case 0x7F1FF014u: goto label_7F1FF014;
    case 0x7F1FF018u: goto label_7F1FF018;
    case 0x7F1FF01Cu: goto label_7F1FF01C;
    case 0x7F1FF020u: goto label_7F1FF020;
    case 0x7F1FF024u: goto label_7F1FF024;
    case 0x7F1FF028u: goto label_7F1FF028;
    case 0x7F1FF02Cu: goto label_7F1FF02C;
    case 0x7F1FF030u: goto label_7F1FF030;
    case 0x7F1FF034u: goto label_7F1FF034;
    case 0x7F1FF038u: goto label_7F1FF038;
    case 0x7F1FF03Cu: goto label_7F1FF03C;
    case 0x7F1FF040u: goto label_7F1FF040;
    case 0x7F1FF044u: goto label_7F1FF044;
    case 0x7F1FF048u: goto label_7F1FF048;
    case 0x7F1FF04Cu: goto label_7F1FF04C;
    case 0x7F1FF050u: goto label_7F1FF050;
    case 0x7F1FF054u: goto label_7F1FF054;
    case 0x7F1FF058u: goto label_7F1FF058;
    case 0x7F1FF05Cu: goto label_7F1FF05C;
    case 0x7F1FF060u: goto label_7F1FF060;
    case 0x7F1FF064u: goto label_7F1FF064;
    case 0x7F1FF068u: goto label_7F1FF068;
    case 0x7F1FF06Cu: goto label_7F1FF06C;
    case 0x7F1FF070u: goto label_7F1FF070;
    case 0x7F1FF074u: goto label_7F1FF074;
    case 0x7F1FF078u: goto label_7F1FF078;
    case 0x7F1FF07Cu: goto label_7F1FF07C;
    case 0x7F1FF080u: goto label_7F1FF080;
    case 0x7F1FF084u: goto label_7F1FF084;
    case 0x7F1FF088u: goto label_7F1FF088;
    case 0x7F1FF08Cu: goto label_7F1FF08C;
    case 0x7F1FF090u: goto label_7F1FF090;
    case 0x7F1FF094u: goto label_7F1FF094;
    case 0x7F1FF098u: goto label_7F1FF098;
    case 0x7F1FF09Cu: goto label_7F1FF09C;
    case 0x7F1FF0A0u: goto label_7F1FF0A0;
    case 0x7F1FF0A4u: goto label_7F1FF0A4;
    case 0x7F1FF0A8u: goto label_7F1FF0A8;
    case 0x7F1FF0ACu: goto label_7F1FF0AC;
    case 0x7F1FF0B0u: goto label_7F1FF0B0;
    case 0x7F1FF0B4u: goto label_7F1FF0B4;
    case 0x7F1FF0B8u: goto label_7F1FF0B8;
    case 0x7F1FF0BCu: goto label_7F1FF0BC;
    case 0x7F1FF0C0u: goto label_7F1FF0C0;
    case 0x7F1FF0C4u: goto label_7F1FF0C4;
    case 0x7F1FF0C8u: goto label_7F1FF0C8;
    case 0x7F1FF0CCu: goto label_7F1FF0CC;
    case 0x7F1FF0D0u: goto label_7F1FF0D0;
    case 0x7F1FF0D4u: goto label_7F1FF0D4;
    case 0x7F1FF0D8u: goto label_7F1FF0D8;
    case 0x7F1FF0DCu: goto label_7F1FF0DC;
    case 0x7F1FF0E0u: goto label_7F1FF0E0;
    case 0x7F1FF0E4u: goto label_7F1FF0E4;
    case 0x7F1FF0E8u: goto label_7F1FF0E8;
    case 0x7F1FF0ECu: goto label_7F1FF0EC;
    case 0x7F1FF0F0u: goto label_7F1FF0F0;
    case 0x7F1FF0F4u: goto label_7F1FF0F4;
    case 0x7F1FF0F8u: goto label_7F1FF0F8;
    case 0x7F1FF0FCu: goto label_7F1FF0FC;
    case 0x7F1FF100u: goto label_7F1FF100;
    case 0x7F1FF104u: goto label_7F1FF104;
    case 0x7F1FF108u: goto label_7F1FF108;
    case 0x7F1FF10Cu: goto label_7F1FF10C;
    case 0x7F1FF110u: goto label_7F1FF110;
    case 0x7F1FF114u: goto label_7F1FF114;
    case 0x7F1FF118u: goto label_7F1FF118;
    case 0x7F1FF11Cu: goto label_7F1FF11C;
    case 0x7F1FF120u: goto label_7F1FF120;
    case 0x7F1FF124u: goto label_7F1FF124;
    case 0x7F1FF128u: goto label_7F1FF128;
    case 0x7F1FF12Cu: goto label_7F1FF12C;
    case 0x7F1FF130u: goto label_7F1FF130;
    case 0x7F1FF134u: goto label_7F1FF134;
    case 0x7F1FF138u: goto label_7F1FF138;
    case 0x7F1FF13Cu: goto label_7F1FF13C;
    case 0x7F1FF140u: goto label_7F1FF140;
    case 0x7F1FF144u: goto label_7F1FF144;
    case 0x7F1FF148u: goto label_7F1FF148;
    case 0x7F1FF14Cu: goto label_7F1FF14C;
    case 0x7F1FF150u: goto label_7F1FF150;
    case 0x7F1FF154u: goto label_7F1FF154;
    case 0x7F1FF158u: goto label_7F1FF158;
    case 0x7F1FF15Cu: goto label_7F1FF15C;
    case 0x7F1FF160u: goto label_7F1FF160;
    case 0x7F1FF164u: goto label_7F1FF164;
    case 0x7F1FF168u: goto label_7F1FF168;
    case 0x7F1FF16Cu: goto label_7F1FF16C;
    case 0x7F1FF170u: goto label_7F1FF170;
    case 0x7F1FF174u: goto label_7F1FF174;
    case 0x7F1FF178u: goto label_7F1FF178;
    case 0x7F1FF17Cu: goto label_7F1FF17C;
    case 0x7F1FF180u: goto label_7F1FF180;
    case 0x7F1FF184u: goto label_7F1FF184;
    case 0x7F1FF188u: goto label_7F1FF188;
    case 0x7F1FF18Cu: goto label_7F1FF18C;
    case 0x7F1FF190u: goto label_7F1FF190;
    case 0x7F1FF194u: goto label_7F1FF194;
    case 0x7F1FF198u: goto label_7F1FF198;
    case 0x7F1FF19Cu: goto label_7F1FF19C;
    case 0x7F1FF1A0u: goto label_7F1FF1A0;
    case 0x7F1FF1A4u: goto label_7F1FF1A4;
    case 0x7F1FF1A8u: goto label_7F1FF1A8;
    case 0x7F1FF1ACu: goto label_7F1FF1AC;
    case 0x7F1FF1B0u: goto label_7F1FF1B0;
    case 0x7F1FF1B4u: goto label_7F1FF1B4;
    case 0x7F1FF1B8u: goto label_7F1FF1B8;
    case 0x7F1FF1BCu: goto label_7F1FF1BC;
    case 0x7F1FF1C0u: goto label_7F1FF1C0;
    case 0x7F1FF1C4u: goto label_7F1FF1C4;
    case 0x7F1FF1C8u: goto label_7F1FF1C8;
    case 0x7F1FF1CCu: goto label_7F1FF1CC;
    case 0x7F1FF1D0u: goto label_7F1FF1D0;
    case 0x7F1FF1D4u: goto label_7F1FF1D4;
    case 0x7F1FF1D8u: goto label_7F1FF1D8;
    case 0x7F1FF1DCu: goto label_7F1FF1DC;
    case 0x7F1FF1E0u: goto label_7F1FF1E0;
    case 0x7F1FF1E4u: goto label_7F1FF1E4;
    case 0x7F1FF1E8u: goto label_7F1FF1E8;
    case 0x7F1FF1ECu: goto label_7F1FF1EC;
    case 0x7F1FF1F0u: goto label_7F1FF1F0;
    case 0x7F1FF1F4u: goto label_7F1FF1F4;
    case 0x7F1FF1F8u: goto label_7F1FF1F8;
    case 0x7F1FF1FCu: goto label_7F1FF1FC;
    case 0x7F1FF200u: goto label_7F1FF200;
    case 0x7F1FF204u: goto label_7F1FF204;
    case 0x7F1FF208u: goto label_7F1FF208;
    case 0x7F1FF20Cu: goto label_7F1FF20C;
    case 0x7F1FF210u: goto label_7F1FF210;
    case 0x7F1FF214u: goto label_7F1FF214;
    case 0x7F1FF218u: goto label_7F1FF218;
    case 0x7F1FF21Cu: goto label_7F1FF21C;
    case 0x7F1FF220u: goto label_7F1FF220;
    case 0x7F1FF224u: goto label_7F1FF224;
    case 0x7F1FF228u: goto label_7F1FF228;
    case 0x7F1FF22Cu: goto label_7F1FF22C;
    case 0x7F1FF230u: goto label_7F1FF230;
    case 0x7F1FF234u: goto label_7F1FF234;
    case 0x7F1FF238u: goto label_7F1FF238;
    case 0x7F1FF23Cu: goto label_7F1FF23C;
    case 0x7F1FF240u: goto label_7F1FF240;
    case 0x7F1FF244u: goto label_7F1FF244;
    case 0x7F1FF248u: goto label_7F1FF248;
    case 0x7F1FF24Cu: goto label_7F1FF24C;
    case 0x7F1FF250u: goto label_7F1FF250;
    case 0x7F1FF254u: goto label_7F1FF254;
    case 0x7F1FF258u: goto label_7F1FF258;
    case 0x7F1FF25Cu: goto label_7F1FF25C;
    case 0x7F1FF260u: goto label_7F1FF260;
    case 0x7F1FF264u: goto label_7F1FF264;
    case 0x7F1FF268u: goto label_7F1FF268;
    case 0x7F1FF26Cu: goto label_7F1FF26C;
    case 0x7F1FF270u: goto label_7F1FF270;
    case 0x7F1FF274u: goto label_7F1FF274;
    case 0x7F1FF278u: goto label_7F1FF278;
    case 0x7F1FF27Cu: goto label_7F1FF27C;
    case 0x7F1FF280u: goto label_7F1FF280;
    case 0x7F1FF284u: goto label_7F1FF284;
    case 0x7F1FF288u: goto label_7F1FF288;
    case 0x7F1FF28Cu: goto label_7F1FF28C;
    case 0x7F1FF290u: goto label_7F1FF290;
    case 0x7F1FF294u: goto label_7F1FF294;
    case 0x7F1FF298u: goto label_7F1FF298;
    case 0x7F1FF29Cu: goto label_7F1FF29C;
    case 0x7F1FF2A0u: goto label_7F1FF2A0;
    case 0x7F1FF2A4u: goto label_7F1FF2A4;
    case 0x7F1FF2A8u: goto label_7F1FF2A8;
    case 0x7F1FF2ACu: goto label_7F1FF2AC;
    case 0x7F1FF2B0u: goto label_7F1FF2B0;
    case 0x7F1FF2B4u: goto label_7F1FF2B4;
    case 0x7F1FF2B8u: goto label_7F1FF2B8;
    case 0x7F1FF2BCu: goto label_7F1FF2BC;
    case 0x7F1FF2C0u: goto label_7F1FF2C0;
    case 0x7F1FF2C4u: goto label_7F1FF2C4;
    case 0x7F1FF2C8u: goto label_7F1FF2C8;
    case 0x7F1FF2CCu: goto label_7F1FF2CC;
    case 0x7F1FF2D0u: goto label_7F1FF2D0;
    case 0x7F1FF2D4u: goto label_7F1FF2D4;
    case 0x7F1FF2D8u: goto label_7F1FF2D8;
    case 0x7F1FF2DCu: goto label_7F1FF2DC;
    case 0x7F1FF2E0u: goto label_7F1FF2E0;
    case 0x7F1FF2E4u: goto label_7F1FF2E4;
    case 0x7F1FF2E8u: goto label_7F1FF2E8;
    case 0x7F1FF2ECu: goto label_7F1FF2EC;
    case 0x7F1FF2F0u: goto label_7F1FF2F0;
    case 0x7F1FF2F4u: goto label_7F1FF2F4;
    case 0x7F1FF2F8u: goto label_7F1FF2F8;
    case 0x7F1FF2FCu: goto label_7F1FF2FC;
    case 0x7F1FF300u: goto label_7F1FF300;
    case 0x7F1FF304u: goto label_7F1FF304;
    case 0x7F1FF308u: goto label_7F1FF308;
    case 0x7F1FF30Cu: goto label_7F1FF30C;
    case 0x7F1FF310u: goto label_7F1FF310;
    case 0x7F1FF314u: goto label_7F1FF314;
    case 0x7F1FF318u: goto label_7F1FF318;
    case 0x7F1FF31Cu: goto label_7F1FF31C;
    case 0x7F1FF320u: goto label_7F1FF320;
    case 0x7F1FF324u: goto label_7F1FF324;
    case 0x7F1FF328u: goto label_7F1FF328;
    case 0x7F1FF32Cu: goto label_7F1FF32C;
    case 0x7F1FF330u: goto label_7F1FF330;
    case 0x7F1FF334u: goto label_7F1FF334;
    case 0x7F1FF338u: goto label_7F1FF338;
    case 0x7F1FF33Cu: goto label_7F1FF33C;
    case 0x7F1FF340u: goto label_7F1FF340;
    case 0x7F1FF344u: goto label_7F1FF344;
    case 0x7F1FF348u: goto label_7F1FF348;
    case 0x7F1FF34Cu: goto label_7F1FF34C;
    case 0x7F1FF350u: goto label_7F1FF350;
    case 0x7F1FF354u: goto label_7F1FF354;
    case 0x7F1FF358u: goto label_7F1FF358;
    case 0x7F1FF35Cu: goto label_7F1FF35C;
    case 0x7F1FF360u: goto label_7F1FF360;
    case 0x7F1FF364u: goto label_7F1FF364;
    case 0x7F1FF368u: goto label_7F1FF368;
    case 0x7F1FF36Cu: goto label_7F1FF36C;
    case 0x7F1FF370u: goto label_7F1FF370;
    case 0x7F1FF374u: goto label_7F1FF374;
    case 0x7F1FF378u: goto label_7F1FF378;
    case 0x7F1FF37Cu: goto label_7F1FF37C;
    case 0x7F1FF380u: goto label_7F1FF380;
    case 0x7F1FF384u: goto label_7F1FF384;
    case 0x7F1FF388u: goto label_7F1FF388;
    case 0x7F1FF38Cu: goto label_7F1FF38C;
    case 0x7F1FF390u: goto label_7F1FF390;
    case 0x7F1FF394u: goto label_7F1FF394;
    case 0x7F1FF398u: goto label_7F1FF398;
    case 0x7F1FF39Cu: goto label_7F1FF39C;
    case 0x7F1FF3A0u: goto label_7F1FF3A0;
    case 0x7F1FF3A4u: goto label_7F1FF3A4;
    case 0x7F1FF3A8u: goto label_7F1FF3A8;
    case 0x7F1FF3ACu: goto label_7F1FF3AC;
    case 0x7F1FF3B0u: goto label_7F1FF3B0;
    case 0x7F1FF3B4u: goto label_7F1FF3B4;
    case 0x7F1FF3B8u: goto label_7F1FF3B8;
    case 0x7F1FF3BCu: goto label_7F1FF3BC;
    case 0x7F1FF3C0u: goto label_7F1FF3C0;
    case 0x7F1FF3C4u: goto label_7F1FF3C4;
    case 0x7F1FF3C8u: goto label_7F1FF3C8;
    case 0x7F1FF3CCu: goto label_7F1FF3CC;
    case 0x7F1FF3D0u: goto label_7F1FF3D0;
    case 0x7F1FF3D4u: goto label_7F1FF3D4;
    case 0x7F1FF3D8u: goto label_7F1FF3D8;
    case 0x7F1FF3DCu: goto label_7F1FF3DC;
    case 0x7F1FF3E0u: goto label_7F1FF3E0;
    case 0x7F1FF3E4u: goto label_7F1FF3E4;
    case 0x7F1FF3E8u: goto label_7F1FF3E8;
    case 0x7F1FF3ECu: goto label_7F1FF3EC;
    case 0x7F1FF3F0u: goto label_7F1FF3F0;
    case 0x7F1FF3F4u: goto label_7F1FF3F4;
    case 0x7F1FF3F8u: goto label_7F1FF3F8;
    case 0x7F1FF3FCu: goto label_7F1FF3FC;
    case 0x7F1FF400u: goto label_7F1FF400;
    case 0x7F1FF404u: goto label_7F1FF404;
    case 0x7F1FF408u: goto label_7F1FF408;
    case 0x7F1FF40Cu: goto label_7F1FF40C;
    case 0x7F1FF410u: goto label_7F1FF410;
    case 0x7F1FF414u: goto label_7F1FF414;
    case 0x7F1FF418u: goto label_7F1FF418;
    case 0x7F1FF41Cu: goto label_7F1FF41C;
    case 0x7F1FF420u: goto label_7F1FF420;
    case 0x7F1FF424u: goto label_7F1FF424;
    case 0x7F1FF428u: goto label_7F1FF428;
    case 0x7F1FF42Cu: goto label_7F1FF42C;
    case 0x7F1FF430u: goto label_7F1FF430;
    case 0x7F1FF434u: goto label_7F1FF434;
    case 0x7F1FF438u: goto label_7F1FF438;
    case 0x7F1FF43Cu: goto label_7F1FF43C;
    case 0x7F1FF440u: goto label_7F1FF440;
    case 0x7F1FF444u: goto label_7F1FF444;
    case 0x7F1FF448u: goto label_7F1FF448;
    case 0x7F1FF44Cu: goto label_7F1FF44C;
    case 0x7F1FF450u: goto label_7F1FF450;
    case 0x7F1FF454u: goto label_7F1FF454;
    case 0x7F1FF458u: goto label_7F1FF458;
    case 0x7F1FF45Cu: goto label_7F1FF45C;
    case 0x7F1FF460u: goto label_7F1FF460;
    case 0x7F1FF464u: goto label_7F1FF464;
    case 0x7F1FF468u: goto label_7F1FF468;
    case 0x7F1FF46Cu: goto label_7F1FF46C;
    case 0x7F1FF470u: goto label_7F1FF470;
    case 0x7F1FF474u: goto label_7F1FF474;
    case 0x7F1FF478u: goto label_7F1FF478;
    case 0x7F1FF47Cu: goto label_7F1FF47C;
    case 0x7F1FF480u: goto label_7F1FF480;
    case 0x7F1FF484u: goto label_7F1FF484;
    case 0x7F1FF488u: goto label_7F1FF488;
    case 0x7F1FF48Cu: goto label_7F1FF48C;
    case 0x7F1FF490u: goto label_7F1FF490;
    case 0x7F1FF494u: goto label_7F1FF494;
    case 0x7F1FF498u: goto label_7F1FF498;
    case 0x7F1FF49Cu: goto label_7F1FF49C;
    case 0x7F1FF4A0u: goto label_7F1FF4A0;
    case 0x7F1FF4A4u: goto label_7F1FF4A4;
    case 0x7F1FF4A8u: goto label_7F1FF4A8;
    case 0x7F1FF4ACu: goto label_7F1FF4AC;
    case 0x7F1FF4B0u: goto label_7F1FF4B0;
    case 0x7F1FF4B4u: goto label_7F1FF4B4;
    case 0x7F1FF4B8u: goto label_7F1FF4B8;
    case 0x7F1FF4BCu: goto label_7F1FF4BC;
    case 0x7F1FF4C0u: goto label_7F1FF4C0;
    case 0x7F1FF4C4u: goto label_7F1FF4C4;
    case 0x7F1FF4C8u: goto label_7F1FF4C8;
    case 0x7F1FF4CCu: goto label_7F1FF4CC;
    case 0x7F1FF4D0u: goto label_7F1FF4D0;
    case 0x7F1FF4D4u: goto label_7F1FF4D4;
    case 0x7F1FF4D8u: goto label_7F1FF4D8;
    case 0x7F1FF4DCu: goto label_7F1FF4DC;
    case 0x7F1FF4E0u: goto label_7F1FF4E0;
    case 0x7F1FF4E4u: goto label_7F1FF4E4;
    case 0x7F1FF4E8u: goto label_7F1FF4E8;
    case 0x7F1FF4ECu: goto label_7F1FF4EC;
    case 0x7F1FF4F0u: goto label_7F1FF4F0;
    case 0x7F1FF4F4u: goto label_7F1FF4F4;
    case 0x7F1FF4F8u: goto label_7F1FF4F8;
    case 0x7F1FF4FCu: goto label_7F1FF4FC;
    case 0x7F1FF500u: goto label_7F1FF500;
    case 0x7F1FF504u: goto label_7F1FF504;
    case 0x7F1FF508u: goto label_7F1FF508;
    case 0x7F1FF50Cu: goto label_7F1FF50C;
    case 0x7F1FF510u: goto label_7F1FF510;
    case 0x7F1FF514u: goto label_7F1FF514;
    case 0x7F1FF518u: goto label_7F1FF518;
    case 0x7F1FF51Cu: goto label_7F1FF51C;
    case 0x7F1FF520u: goto label_7F1FF520;
    case 0x7F1FF524u: goto label_7F1FF524;
    case 0x7F1FF528u: goto label_7F1FF528;
    case 0x7F1FF52Cu: goto label_7F1FF52C;
    case 0x7F1FF530u: goto label_7F1FF530;
    case 0x7F1FF534u: goto label_7F1FF534;
    case 0x7F1FF538u: goto label_7F1FF538;
    case 0x7F1FF53Cu: goto label_7F1FF53C;
    case 0x7F1FF540u: goto label_7F1FF540;
    case 0x7F1FF544u: goto label_7F1FF544;
    case 0x7F1FF548u: goto label_7F1FF548;
    case 0x7F1FF54Cu: goto label_7F1FF54C;
    case 0x7F1FF550u: goto label_7F1FF550;
    case 0x7F1FF554u: goto label_7F1FF554;
    case 0x7F1FF558u: goto label_7F1FF558;
    case 0x7F1FF55Cu: goto label_7F1FF55C;
    case 0x7F1FF560u: goto label_7F1FF560;
    case 0x7F1FF564u: goto label_7F1FF564;
    case 0x7F1FF568u: goto label_7F1FF568;
    case 0x7F1FF56Cu: goto label_7F1FF56C;
    case 0x7F1FF570u: goto label_7F1FF570;
    case 0x7F1FF574u: goto label_7F1FF574;
    case 0x7F1FF578u: goto label_7F1FF578;
    case 0x7F1FF57Cu: goto label_7F1FF57C;
    case 0x7F1FF580u: goto label_7F1FF580;
    case 0x7F1FF584u: goto label_7F1FF584;
    case 0x7F1FF588u: goto label_7F1FF588;
    case 0x7F1FF58Cu: goto label_7F1FF58C;
    case 0x7F1FF590u: goto label_7F1FF590;
    case 0x7F1FF594u: goto label_7F1FF594;
    case 0x7F1FF598u: goto label_7F1FF598;
    case 0x7F1FF59Cu: goto label_7F1FF59C;
    case 0x7F1FF5A0u: goto label_7F1FF5A0;
    case 0x7F1FF5A4u: goto label_7F1FF5A4;
    case 0x7F1FF5A8u: goto label_7F1FF5A8;
    case 0x7F1FF5ACu: goto label_7F1FF5AC;
    case 0x7F1FF5B0u: goto label_7F1FF5B0;
    case 0x7F1FF5B4u: goto label_7F1FF5B4;
    case 0x7F1FF5B8u: goto label_7F1FF5B8;
    case 0x7F1FF5BCu: goto label_7F1FF5BC;
    case 0x7F1FF5C0u: goto label_7F1FF5C0;
    case 0x7F1FF5C4u: goto label_7F1FF5C4;
    case 0x7F1FF5C8u: goto label_7F1FF5C8;
    case 0x7F1FF5CCu: goto label_7F1FF5CC;
    case 0x7F1FF5D0u: goto label_7F1FF5D0;
    case 0x7F1FF5D4u: goto label_7F1FF5D4;
    case 0x7F1FF5D8u: goto label_7F1FF5D8;
    case 0x7F1FF5DCu: goto label_7F1FF5DC;
    case 0x7F1FF5E0u: goto label_7F1FF5E0;
    case 0x7F1FF5E4u: goto label_7F1FF5E4;
    case 0x7F1FF5E8u: goto label_7F1FF5E8;
    case 0x7F1FF5ECu: goto label_7F1FF5EC;
    case 0x7F1FF5F0u: goto label_7F1FF5F0;
    case 0x7F1FF5F4u: goto label_7F1FF5F4;
    case 0x7F1FF5F8u: goto label_7F1FF5F8;
    case 0x7F1FF5FCu: goto label_7F1FF5FC;
    case 0x7F1FF600u: goto label_7F1FF600;
    case 0x7F1FF604u: goto label_7F1FF604;
    case 0x7F1FF608u: goto label_7F1FF608;
    case 0x7F1FF60Cu: goto label_7F1FF60C;
    case 0x7F1FF610u: goto label_7F1FF610;
    case 0x7F1FF614u: goto label_7F1FF614;
    case 0x7F1FF618u: goto label_7F1FF618;
    case 0x7F1FF61Cu: goto label_7F1FF61C;
    case 0x7F1FF620u: goto label_7F1FF620;
    case 0x7F1FF624u: goto label_7F1FF624;
    case 0x7F1FF628u: goto label_7F1FF628;
    case 0x7F1FF62Cu: goto label_7F1FF62C;
    case 0x7F1FF630u: goto label_7F1FF630;
    case 0x7F1FF634u: goto label_7F1FF634;
    case 0x7F1FF638u: goto label_7F1FF638;
    case 0x7F1FF63Cu: goto label_7F1FF63C;
    case 0x7F1FF640u: goto label_7F1FF640;
    case 0x7F1FF644u: goto label_7F1FF644;
    case 0x7F1FF648u: goto label_7F1FF648;
    case 0x7F1FF64Cu: goto label_7F1FF64C;
    case 0x7F1FF650u: goto label_7F1FF650;
    case 0x7F1FF654u: goto label_7F1FF654;
    case 0x7F1FF658u: goto label_7F1FF658;
    case 0x7F1FF65Cu: goto label_7F1FF65C;
    case 0x7F1FF660u: goto label_7F1FF660;
    case 0x7F1FF664u: goto label_7F1FF664;
    case 0x7F1FF668u: goto label_7F1FF668;
    case 0x7F1FF66Cu: goto label_7F1FF66C;
    case 0x7F1FF670u: goto label_7F1FF670;
    case 0x7F1FF674u: goto label_7F1FF674;
    case 0x7F1FF678u: goto label_7F1FF678;
    case 0x7F1FF67Cu: goto label_7F1FF67C;
    case 0x7F1FF680u: goto label_7F1FF680;
    case 0x7F1FF684u: goto label_7F1FF684;
    case 0x7F1FF688u: goto label_7F1FF688;
    case 0x7F1FF68Cu: goto label_7F1FF68C;
    case 0x7F1FF690u: goto label_7F1FF690;
    case 0x7F1FF694u: goto label_7F1FF694;
    case 0x7F1FF698u: goto label_7F1FF698;
    case 0x7F1FF69Cu: goto label_7F1FF69C;
    case 0x7F1FF6A0u: goto label_7F1FF6A0;
    case 0x7F1FF6A4u: goto label_7F1FF6A4;
    case 0x7F1FF6A8u: goto label_7F1FF6A8;
    case 0x7F1FF6ACu: goto label_7F1FF6AC;
    case 0x7F1FF6B0u: goto label_7F1FF6B0;
    case 0x7F1FF6B4u: goto label_7F1FF6B4;
    case 0x7F1FF6B8u: goto label_7F1FF6B8;
    case 0x7F1FF6BCu: goto label_7F1FF6BC;
    case 0x7F1FF6C0u: goto label_7F1FF6C0;
    case 0x7F1FF6C4u: goto label_7F1FF6C4;
    case 0x7F1FF6C8u: goto label_7F1FF6C8;
    case 0x7F1FF6CCu: goto label_7F1FF6CC;
    case 0x7F1FF6D0u: goto label_7F1FF6D0;
    case 0x7F1FF6D4u: goto label_7F1FF6D4;
    case 0x7F1FF6D8u: goto label_7F1FF6D8;
    case 0x7F1FF6DCu: goto label_7F1FF6DC;
    case 0x7F1FF6E0u: goto label_7F1FF6E0;
    case 0x7F1FF6E4u: goto label_7F1FF6E4;
    case 0x7F1FF6E8u: goto label_7F1FF6E8;
    case 0x7F1FF6ECu: goto label_7F1FF6EC;
    case 0x7F1FF6F0u: goto label_7F1FF6F0;
    case 0x7F1FF6F4u: goto label_7F1FF6F4;
    case 0x7F1FF6F8u: goto label_7F1FF6F8;
    case 0x7F1FF6FCu: goto label_7F1FF6FC;
    case 0x7F1FF700u: goto label_7F1FF700;
    case 0x7F1FF704u: goto label_7F1FF704;
    case 0x7F1FF708u: goto label_7F1FF708;
    case 0x7F1FF70Cu: goto label_7F1FF70C;
    case 0x7F1FF710u: goto label_7F1FF710;
    case 0x7F1FF714u: goto label_7F1FF714;
    case 0x7F1FF718u: goto label_7F1FF718;
    case 0x7F1FF71Cu: goto label_7F1FF71C;
    case 0x7F1FF720u: goto label_7F1FF720;
    case 0x7F1FF724u: goto label_7F1FF724;
    case 0x7F1FF728u: goto label_7F1FF728;
    case 0x7F1FF72Cu: goto label_7F1FF72C;
    case 0x7F1FF730u: goto label_7F1FF730;
    case 0x7F1FF734u: goto label_7F1FF734;
    case 0x7F1FF738u: goto label_7F1FF738;
    case 0x7F1FF73Cu: goto label_7F1FF73C;
    case 0x7F1FF740u: goto label_7F1FF740;
    case 0x7F1FF744u: goto label_7F1FF744;
    case 0x7F1FF748u: goto label_7F1FF748;
    case 0x7F1FF74Cu: goto label_7F1FF74C;
    case 0x7F1FF750u: goto label_7F1FF750;
    case 0x7F1FF754u: goto label_7F1FF754;
    case 0x7F1FF758u: goto label_7F1FF758;
    case 0x7F1FF75Cu: goto label_7F1FF75C;
    case 0x7F1FF760u: goto label_7F1FF760;
    case 0x7F1FF764u: goto label_7F1FF764;
    case 0x7F1FF768u: goto label_7F1FF768;
    case 0x7F1FF76Cu: goto label_7F1FF76C;
    case 0x7F1FF770u: goto label_7F1FF770;
    case 0x7F1FF774u: goto label_7F1FF774;
    case 0x7F1FF778u: goto label_7F1FF778;
    case 0x7F1FF77Cu: goto label_7F1FF77C;
    case 0x7F1FF780u: goto label_7F1FF780;
    case 0x7F1FF784u: goto label_7F1FF784;
    case 0x7F1FF788u: goto label_7F1FF788;
    case 0x7F1FF78Cu: goto label_7F1FF78C;
    case 0x7F1FF790u: goto label_7F1FF790;
    case 0x7F1FF794u: goto label_7F1FF794;
    case 0x7F1FF798u: goto label_7F1FF798;
    case 0x7F1FF79Cu: goto label_7F1FF79C;
    case 0x7F1FF7A0u: goto label_7F1FF7A0;
    case 0x7F1FF7A4u: goto label_7F1FF7A4;
    case 0x7F1FF7A8u: goto label_7F1FF7A8;
    case 0x7F1FF7ACu: goto label_7F1FF7AC;
    case 0x7F1FF7B0u: goto label_7F1FF7B0;
    case 0x7F1FF7B4u: goto label_7F1FF7B4;
    case 0x7F1FF7B8u: goto label_7F1FF7B8;
    case 0x7F1FF7BCu: goto label_7F1FF7BC;
    case 0x7F1FF7C0u: goto label_7F1FF7C0;
    case 0x7F1FF7C4u: goto label_7F1FF7C4;
    case 0x7F1FF7C8u: goto label_7F1FF7C8;
    case 0x7F1FF7CCu: goto label_7F1FF7CC;
    case 0x7F1FF7D0u: goto label_7F1FF7D0;
    case 0x7F1FF7D4u: goto label_7F1FF7D4;
    case 0x7F1FF7D8u: goto label_7F1FF7D8;
    case 0x7F1FF7DCu: goto label_7F1FF7DC;
    case 0x7F1FF7E0u: goto label_7F1FF7E0;
    case 0x7F1FF7E4u: goto label_7F1FF7E4;
    case 0x7F1FF7E8u: goto label_7F1FF7E8;
    case 0x7F1FF7ECu: goto label_7F1FF7EC;
    case 0x7F1FF7F0u: goto label_7F1FF7F0;
    case 0x7F1FF7F4u: goto label_7F1FF7F4;
    case 0x7F1FF7F8u: goto label_7F1FF7F8;
    case 0x7F1FF7FCu: goto label_7F1FF7FC;
    case 0x7F1FF800u: goto label_7F1FF800;
    case 0x7F1FF804u: goto label_7F1FF804;
    case 0x7F1FF808u: goto label_7F1FF808;
    case 0x7F1FF80Cu: goto label_7F1FF80C;
    case 0x7F1FF810u: goto label_7F1FF810;
    case 0x7F1FF814u: goto label_7F1FF814;
    case 0x7F1FF818u: goto label_7F1FF818;
    case 0x7F1FF81Cu: goto label_7F1FF81C;
    case 0x7F1FF820u: goto label_7F1FF820;
    case 0x7F1FF824u: goto label_7F1FF824;
    case 0x7F1FF828u: goto label_7F1FF828;
    case 0x7F1FF82Cu: goto label_7F1FF82C;
    case 0x7F1FF830u: goto label_7F1FF830;
    case 0x7F1FF834u: goto label_7F1FF834;
    case 0x7F1FF838u: goto label_7F1FF838;
    case 0x7F1FF83Cu: goto label_7F1FF83C;
    case 0x7F1FF840u: goto label_7F1FF840;
    case 0x7F1FF844u: goto label_7F1FF844;
    case 0x7F1FF848u: goto label_7F1FF848;
    case 0x7F1FF84Cu: goto label_7F1FF84C;
    case 0x7F1FF850u: goto label_7F1FF850;
    case 0x7F1FF854u: goto label_7F1FF854;
    case 0x7F1FF858u: goto label_7F1FF858;
    case 0x7F1FF85Cu: goto label_7F1FF85C;
    case 0x7F1FF860u: goto label_7F1FF860;
    case 0x7F1FF864u: goto label_7F1FF864;
    case 0x7F1FF868u: goto label_7F1FF868;
    case 0x7F1FF86Cu: goto label_7F1FF86C;
    case 0x7F1FF870u: goto label_7F1FF870;
    case 0x7F1FF874u: goto label_7F1FF874;
    case 0x7F1FF878u: goto label_7F1FF878;
    case 0x7F1FF87Cu: goto label_7F1FF87C;
    case 0x7F1FF880u: goto label_7F1FF880;
    case 0x7F1FF884u: goto label_7F1FF884;
    case 0x7F1FF888u: goto label_7F1FF888;
    case 0x7F1FF88Cu: goto label_7F1FF88C;
    case 0x7F1FF890u: goto label_7F1FF890;
    case 0x7F1FF894u: goto label_7F1FF894;
    case 0x7F1FF898u: goto label_7F1FF898;
    case 0x7F1FF89Cu: goto label_7F1FF89C;
    case 0x7F1FF8A0u: goto label_7F1FF8A0;
    case 0x7F1FF8A4u: goto label_7F1FF8A4;
    case 0x7F1FF8A8u: goto label_7F1FF8A8;
    case 0x7F1FF8ACu: goto label_7F1FF8AC;
    case 0x7F1FF8B0u: goto label_7F1FF8B0;
    case 0x7F1FF8B4u: goto label_7F1FF8B4;
    case 0x7F1FF8B8u: goto label_7F1FF8B8;
    case 0x7F1FF8BCu: goto label_7F1FF8BC;
    case 0x7F1FF8C0u: goto label_7F1FF8C0;
    case 0x7F1FF8C4u: goto label_7F1FF8C4;
    case 0x7F1FF8C8u: goto label_7F1FF8C8;
    case 0x7F1FF8CCu: goto label_7F1FF8CC;
    case 0x7F1FF8D0u: goto label_7F1FF8D0;
    case 0x7F1FF8D4u: goto label_7F1FF8D4;
    case 0x7F1FF8D8u: goto label_7F1FF8D8;
    case 0x7F1FF8DCu: goto label_7F1FF8DC;
    case 0x7F1FF8E0u: goto label_7F1FF8E0;
    case 0x7F1FF8E4u: goto label_7F1FF8E4;
    case 0x7F1FF8E8u: goto label_7F1FF8E8;
    case 0x7F1FF8ECu: goto label_7F1FF8EC;
    case 0x7F1FF8F0u: goto label_7F1FF8F0;
    case 0x7F1FF8F4u: goto label_7F1FF8F4;
    case 0x7F1FF8F8u: goto label_7F1FF8F8;
    case 0x7F1FF8FCu: goto label_7F1FF8FC;
    case 0x7F1FF900u: goto label_7F1FF900;
    case 0x7F1FF904u: goto label_7F1FF904;
    case 0x7F1FF908u: goto label_7F1FF908;
    case 0x7F1FF90Cu: goto label_7F1FF90C;
    case 0x7F1FF910u: goto label_7F1FF910;
    case 0x7F1FF914u: goto label_7F1FF914;
    case 0x7F1FF918u: goto label_7F1FF918;
    case 0x7F1FF91Cu: goto label_7F1FF91C;
    case 0x7F1FF920u: goto label_7F1FF920;
    case 0x7F1FF924u: goto label_7F1FF924;
    case 0x7F1FF928u: goto label_7F1FF928;
    case 0x7F1FF92Cu: goto label_7F1FF92C;
    case 0x7F1FF930u: goto label_7F1FF930;
    case 0x7F1FF934u: goto label_7F1FF934;
    case 0x7F1FF938u: goto label_7F1FF938;
    case 0x7F1FF93Cu: goto label_7F1FF93C;
    case 0x7F1FF940u: goto label_7F1FF940;
    case 0x7F1FF944u: goto label_7F1FF944;
    case 0x7F1FF948u: goto label_7F1FF948;
    case 0x7F1FF94Cu: goto label_7F1FF94C;
    case 0x7F1FF950u: goto label_7F1FF950;
    case 0x7F1FF954u: goto label_7F1FF954;
    case 0x7F1FF958u: goto label_7F1FF958;
    case 0x7F1FF95Cu: goto label_7F1FF95C;
    case 0x7F1FF960u: goto label_7F1FF960;
    case 0x7F1FF964u: goto label_7F1FF964;
    case 0x7F1FF968u: goto label_7F1FF968;
    case 0x7F1FF96Cu: goto label_7F1FF96C;
    case 0x7F1FF970u: goto label_7F1FF970;
    case 0x7F1FF974u: goto label_7F1FF974;
    case 0x7F1FF978u: goto label_7F1FF978;
    case 0x7F1FF97Cu: goto label_7F1FF97C;
    case 0x7F1FF980u: goto label_7F1FF980;
    case 0x7F1FF984u: goto label_7F1FF984;
    case 0x7F1FF988u: goto label_7F1FF988;
    case 0x7F1FF98Cu: goto label_7F1FF98C;
    case 0x7F1FF990u: goto label_7F1FF990;
    case 0x7F1FF994u: goto label_7F1FF994;
    case 0x7F1FF998u: goto label_7F1FF998;
    case 0x7F1FF99Cu: goto label_7F1FF99C;
    case 0x7F1FF9A0u: goto label_7F1FF9A0;
    case 0x7F1FF9A4u: goto label_7F1FF9A4;
    case 0x7F1FF9A8u: goto label_7F1FF9A8;
    case 0x7F1FF9ACu: goto label_7F1FF9AC;
    case 0x7F1FF9B0u: goto label_7F1FF9B0;
    case 0x7F1FF9B4u: goto label_7F1FF9B4;
    case 0x7F1FF9B8u: goto label_7F1FF9B8;
    case 0x7F1FF9BCu: goto label_7F1FF9BC;
    case 0x7F1FF9C0u: goto label_7F1FF9C0;
    case 0x7F1FF9C4u: goto label_7F1FF9C4;
    case 0x7F1FF9C8u: goto label_7F1FF9C8;
    case 0x7F1FF9CCu: goto label_7F1FF9CC;
    case 0x7F1FF9D0u: goto label_7F1FF9D0;
    case 0x7F1FF9D4u: goto label_7F1FF9D4;
    case 0x7F1FF9D8u: goto label_7F1FF9D8;
    case 0x7F1FF9DCu: goto label_7F1FF9DC;
    case 0x7F1FF9E0u: goto label_7F1FF9E0;
    case 0x7F1FF9E4u: goto label_7F1FF9E4;
    case 0x7F1FF9E8u: goto label_7F1FF9E8;
    case 0x7F1FF9ECu: goto label_7F1FF9EC;
    case 0x7F1FF9F0u: goto label_7F1FF9F0;
    case 0x7F1FF9F4u: goto label_7F1FF9F4;
    case 0x7F1FF9F8u: goto label_7F1FF9F8;
    case 0x7F1FF9FCu: goto label_7F1FF9FC;
    case 0x7F1FFA00u: goto label_7F1FFA00;
    case 0x7F1FFA04u: goto label_7F1FFA04;
    case 0x7F1FFA08u: goto label_7F1FFA08;
    case 0x7F1FFA0Cu: goto label_7F1FFA0C;
    case 0x7F1FFA10u: goto label_7F1FFA10;
    case 0x7F1FFA14u: goto label_7F1FFA14;
    case 0x7F1FFA18u: goto label_7F1FFA18;
    case 0x7F1FFA1Cu: goto label_7F1FFA1C;
    case 0x7F1FFA20u: goto label_7F1FFA20;
    case 0x7F1FFA24u: goto label_7F1FFA24;
    case 0x7F1FFA28u: goto label_7F1FFA28;
    case 0x7F1FFA2Cu: goto label_7F1FFA2C;
    case 0x7F1FFA30u: goto label_7F1FFA30;
    case 0x7F1FFA34u: goto label_7F1FFA34;
    case 0x7F1FFA38u: goto label_7F1FFA38;
    case 0x7F1FFA3Cu: goto label_7F1FFA3C;
    case 0x7F1FFA40u: goto label_7F1FFA40;
    case 0x7F1FFA44u: goto label_7F1FFA44;
    case 0x7F1FFA48u: goto label_7F1FFA48;
    case 0x7F1FFA4Cu: goto label_7F1FFA4C;
    case 0x7F1FFA50u: goto label_7F1FFA50;
    case 0x7F1FFA54u: goto label_7F1FFA54;
    case 0x7F1FFA58u: goto label_7F1FFA58;
    case 0x7F1FFA5Cu: goto label_7F1FFA5C;
    case 0x7F1FFA60u: goto label_7F1FFA60;
    case 0x7F1FFA64u: goto label_7F1FFA64;
    case 0x7F1FFA68u: goto label_7F1FFA68;
    case 0x7F1FFA6Cu: goto label_7F1FFA6C;
    case 0x7F1FFA70u: goto label_7F1FFA70;
    case 0x7F1FFA74u: goto label_7F1FFA74;
    case 0x7F1FFA78u: goto label_7F1FFA78;
    case 0x7F1FFA7Cu: goto label_7F1FFA7C;
    case 0x7F1FFA80u: goto label_7F1FFA80;
    case 0x7F1FFA84u: goto label_7F1FFA84;
    case 0x7F1FFA88u: goto label_7F1FFA88;
    case 0x7F1FFA8Cu: goto label_7F1FFA8C;
    case 0x7F1FFA90u: goto label_7F1FFA90;
    case 0x7F1FFA94u: goto label_7F1FFA94;
    case 0x7F1FFA98u: goto label_7F1FFA98;
    case 0x7F1FFA9Cu: goto label_7F1FFA9C;
    case 0x7F1FFAA0u: goto label_7F1FFAA0;
    case 0x7F1FFAA4u: goto label_7F1FFAA4;
    case 0x7F1FFAA8u: goto label_7F1FFAA8;
    case 0x7F1FFAACu: goto label_7F1FFAAC;
    case 0x7F1FFAB0u: goto label_7F1FFAB0;
    case 0x7F1FFAB4u: goto label_7F1FFAB4;
    case 0x7F1FFAB8u: goto label_7F1FFAB8;
    case 0x7F1FFABCu: goto label_7F1FFABC;
    case 0x7F1FFAC0u: goto label_7F1FFAC0;
    case 0x7F1FFAC4u: goto label_7F1FFAC4;
    case 0x7F1FFAC8u: goto label_7F1FFAC8;
    case 0x7F1FFACCu: goto label_7F1FFACC;
    case 0x7F1FFAD0u: goto label_7F1FFAD0;
    case 0x7F1FFAD4u: goto label_7F1FFAD4;
    case 0x7F1FFAD8u: goto label_7F1FFAD8;
    case 0x7F1FFADCu: goto label_7F1FFADC;
    case 0x7F1FFAE0u: goto label_7F1FFAE0;
    case 0x7F1FFAE4u: goto label_7F1FFAE4;
    case 0x7F1FFAE8u: goto label_7F1FFAE8;
    case 0x7F1FFAECu: goto label_7F1FFAEC;
    case 0x7F1FFAF0u: goto label_7F1FFAF0;
    case 0x7F1FFAF4u: goto label_7F1FFAF4;
    case 0x7F1FFAF8u: goto label_7F1FFAF8;
    case 0x7F1FFAFCu: goto label_7F1FFAFC;
    case 0x7F1FFB00u: goto label_7F1FFB00;
    case 0x7F1FFB04u: goto label_7F1FFB04;
    case 0x7F1FFB08u: goto label_7F1FFB08;
    case 0x7F1FFB0Cu: goto label_7F1FFB0C;
    case 0x7F1FFB10u: goto label_7F1FFB10;
    case 0x7F1FFB14u: goto label_7F1FFB14;
    case 0x7F1FFB18u: goto label_7F1FFB18;
    case 0x7F1FFB1Cu: goto label_7F1FFB1C;
    case 0x7F1FFB20u: goto label_7F1FFB20;
    case 0x7F1FFB24u: goto label_7F1FFB24;
    case 0x7F1FFB28u: goto label_7F1FFB28;
    case 0x7F1FFB2Cu: goto label_7F1FFB2C;
    case 0x7F1FFB30u: goto label_7F1FFB30;
    case 0x7F1FFB34u: goto label_7F1FFB34;
    case 0x7F1FFB38u: goto label_7F1FFB38;
    case 0x7F1FFB3Cu: goto label_7F1FFB3C;
    case 0x7F1FFB40u: goto label_7F1FFB40;
    case 0x7F1FFB44u: goto label_7F1FFB44;
    case 0x7F1FFB48u: goto label_7F1FFB48;
    case 0x7F1FFB4Cu: goto label_7F1FFB4C;
    case 0x7F1FFB50u: goto label_7F1FFB50;
    case 0x7F1FFB54u: goto label_7F1FFB54;
    case 0x7F1FFB58u: goto label_7F1FFB58;
    case 0x7F1FFB5Cu: goto label_7F1FFB5C;
    case 0x7F1FFB60u: goto label_7F1FFB60;
    case 0x7F1FFB64u: goto label_7F1FFB64;
    case 0x7F1FFB68u: goto label_7F1FFB68;
    case 0x7F1FFB6Cu: goto label_7F1FFB6C;
    case 0x7F1FFB70u: goto label_7F1FFB70;
    case 0x7F1FFB74u: goto label_7F1FFB74;
    case 0x7F1FFB78u: goto label_7F1FFB78;
    case 0x7F1FFB7Cu: goto label_7F1FFB7C;
    case 0x7F1FFB80u: goto label_7F1FFB80;
    case 0x7F1FFB84u: goto label_7F1FFB84;
    case 0x7F1FFB88u: goto label_7F1FFB88;
    case 0x7F1FFB8Cu: goto label_7F1FFB8C;
    case 0x7F1FFB90u: goto label_7F1FFB90;
    case 0x7F1FFB94u: goto label_7F1FFB94;
    case 0x7F1FFB98u: goto label_7F1FFB98;
    case 0x7F1FFB9Cu: goto label_7F1FFB9C;
    case 0x7F1FFBA0u: goto label_7F1FFBA0;
    case 0x7F1FFBA4u: goto label_7F1FFBA4;
    case 0x7F1FFBA8u: goto label_7F1FFBA8;
    case 0x7F1FFBACu: goto label_7F1FFBAC;
    case 0x7F1FFBB0u: goto label_7F1FFBB0;
    case 0x7F1FFBB4u: goto label_7F1FFBB4;
    case 0x7F1FFBB8u: goto label_7F1FFBB8;
    case 0x7F1FFBBCu: goto label_7F1FFBBC;
    case 0x7F1FFBC0u: goto label_7F1FFBC0;
    case 0x7F1FFBC4u: goto label_7F1FFBC4;
    case 0x7F1FFBC8u: goto label_7F1FFBC8;
    case 0x7F1FFBCCu: goto label_7F1FFBCC;
    case 0x7F1FFBD0u: goto label_7F1FFBD0;
    case 0x7F1FFBD4u: goto label_7F1FFBD4;
    case 0x7F1FFBD8u: goto label_7F1FFBD8;
    case 0x7F1FFBDCu: goto label_7F1FFBDC;
    case 0x7F1FFBE0u: goto label_7F1FFBE0;
    case 0x7F1FFBE4u: goto label_7F1FFBE4;
    case 0x7F1FFBE8u: goto label_7F1FFBE8;
    case 0x7F1FFBECu: goto label_7F1FFBEC;
    case 0x7F1FFBF0u: goto label_7F1FFBF0;
    case 0x7F1FFBF4u: goto label_7F1FFBF4;
    case 0x7F1FFBF8u: goto label_7F1FFBF8;
    case 0x7F1FFBFCu: goto label_7F1FFBFC;
    case 0x7F1FFC00u: goto label_7F1FFC00;
    case 0x7F1FFC04u: goto label_7F1FFC04;
    case 0x7F1FFC08u: goto label_7F1FFC08;
    case 0x7F1FFC0Cu: goto label_7F1FFC0C;
    case 0x7F1FFC10u: goto label_7F1FFC10;
    case 0x7F1FFC14u: goto label_7F1FFC14;
    case 0x7F1FFC18u: goto label_7F1FFC18;
    case 0x7F1FFC1Cu: goto label_7F1FFC1C;
    case 0x7F1FFC20u: goto label_7F1FFC20;
    case 0x7F1FFC24u: goto label_7F1FFC24;
    case 0x7F1FFC28u: goto label_7F1FFC28;
    case 0x7F1FFC2Cu: goto label_7F1FFC2C;
    case 0x7F1FFC30u: goto label_7F1FFC30;
    case 0x7F1FFC34u: goto label_7F1FFC34;
    case 0x7F1FFC38u: goto label_7F1FFC38;
    case 0x7F1FFC3Cu: goto label_7F1FFC3C;
    case 0x7F1FFC40u: goto label_7F1FFC40;
    case 0x7F1FFC44u: goto label_7F1FFC44;
    case 0x7F1FFC48u: goto label_7F1FFC48;
    case 0x7F1FFC4Cu: goto label_7F1FFC4C;
    case 0x7F1FFC50u: goto label_7F1FFC50;
    case 0x7F1FFC54u: goto label_7F1FFC54;
    case 0x7F1FFC58u: goto label_7F1FFC58;
    case 0x7F1FFC5Cu: goto label_7F1FFC5C;
    case 0x7F1FFC60u: goto label_7F1FFC60;
    case 0x7F1FFC64u: goto label_7F1FFC64;
    case 0x7F1FFC68u: goto label_7F1FFC68;
    case 0x7F1FFC6Cu: goto label_7F1FFC6C;
    case 0x7F1FFC70u: goto label_7F1FFC70;
    case 0x7F1FFC74u: goto label_7F1FFC74;
    case 0x7F1FFC78u: goto label_7F1FFC78;
    case 0x7F1FFC7Cu: goto label_7F1FFC7C;
    case 0x7F1FFC80u: goto label_7F1FFC80;
    case 0x7F1FFC84u: goto label_7F1FFC84;
    case 0x7F1FFC88u: goto label_7F1FFC88;
    case 0x7F1FFC8Cu: goto label_7F1FFC8C;
    case 0x7F1FFC90u: goto label_7F1FFC90;
    case 0x7F1FFC94u: goto label_7F1FFC94;
    case 0x7F1FFC98u: goto label_7F1FFC98;
    case 0x7F1FFC9Cu: goto label_7F1FFC9C;
    case 0x7F1FFCA0u: goto label_7F1FFCA0;
    case 0x7F1FFCA4u: goto label_7F1FFCA4;
    case 0x7F1FFCA8u: goto label_7F1FFCA8;
    case 0x7F1FFCACu: goto label_7F1FFCAC;
    case 0x7F1FFCB0u: goto label_7F1FFCB0;
    case 0x7F1FFCB4u: goto label_7F1FFCB4;
    case 0x7F1FFCB8u: goto label_7F1FFCB8;
    case 0x7F1FFCBCu: goto label_7F1FFCBC;
    case 0x7F1FFCC0u: goto label_7F1FFCC0;
    case 0x7F1FFCC4u: goto label_7F1FFCC4;
    case 0x7F1FFCC8u: goto label_7F1FFCC8;
    case 0x7F1FFCCCu: goto label_7F1FFCCC;
    case 0x7F1FFCD0u: goto label_7F1FFCD0;
    case 0x7F1FFCD4u: goto label_7F1FFCD4;
    case 0x7F1FFCD8u: goto label_7F1FFCD8;
    case 0x7F1FFCDCu: goto label_7F1FFCDC;
    case 0x7F1FFCE0u: goto label_7F1FFCE0;
    case 0x7F1FFCE4u: goto label_7F1FFCE4;
    case 0x7F1FFCE8u: goto label_7F1FFCE8;
    case 0x7F1FFCECu: goto label_7F1FFCEC;
    case 0x7F1FFCF0u: goto label_7F1FFCF0;
    case 0x7F1FFCF4u: goto label_7F1FFCF4;
    case 0x7F1FFCF8u: goto label_7F1FFCF8;
    case 0x7F1FFCFCu: goto label_7F1FFCFC;
    case 0x7F1FFD00u: goto label_7F1FFD00;
    case 0x7F1FFD04u: goto label_7F1FFD04;
    case 0x7F1FFD08u: goto label_7F1FFD08;
    case 0x7F1FFD0Cu: goto label_7F1FFD0C;
    case 0x7F1FFD10u: goto label_7F1FFD10;
    case 0x7F1FFD14u: goto label_7F1FFD14;
    case 0x7F1FFD18u: goto label_7F1FFD18;
    case 0x7F1FFD1Cu: goto label_7F1FFD1C;
    case 0x7F1FFD20u: goto label_7F1FFD20;
    case 0x7F1FFD24u: goto label_7F1FFD24;
    case 0x7F1FFD28u: goto label_7F1FFD28;
    case 0x7F1FFD2Cu: goto label_7F1FFD2C;
    case 0x7F1FFD30u: goto label_7F1FFD30;
    case 0x7F1FFD34u: goto label_7F1FFD34;
    case 0x7F1FFD38u: goto label_7F1FFD38;
    case 0x7F1FFD3Cu: goto label_7F1FFD3C;
    case 0x7F1FFD40u: goto label_7F1FFD40;
    case 0x7F1FFD44u: goto label_7F1FFD44;
    case 0x7F1FFD48u: goto label_7F1FFD48;
    case 0x7F1FFD4Cu: goto label_7F1FFD4C;
    case 0x7F1FFD50u: goto label_7F1FFD50;
    case 0x7F1FFD54u: goto label_7F1FFD54;
    case 0x7F1FFD58u: goto label_7F1FFD58;
    case 0x7F1FFD5Cu: goto label_7F1FFD5C;
    case 0x7F1FFD60u: goto label_7F1FFD60;
    case 0x7F1FFD64u: goto label_7F1FFD64;
    case 0x7F1FFD68u: goto label_7F1FFD68;
    case 0x7F1FFD6Cu: goto label_7F1FFD6C;
    case 0x7F1FFD70u: goto label_7F1FFD70;
    case 0x7F1FFD74u: goto label_7F1FFD74;
    case 0x7F1FFD78u: goto label_7F1FFD78;
    case 0x7F1FFD7Cu: goto label_7F1FFD7C;
    case 0x7F1FFD80u: goto label_7F1FFD80;
    case 0x7F1FFD84u: goto label_7F1FFD84;
    case 0x7F1FFD88u: goto label_7F1FFD88;
    case 0x7F1FFD8Cu: goto label_7F1FFD8C;
    case 0x7F1FFD90u: goto label_7F1FFD90;
    case 0x7F1FFD94u: goto label_7F1FFD94;
    case 0x7F1FFD98u: goto label_7F1FFD98;
    case 0x7F1FFD9Cu: goto label_7F1FFD9C;
    case 0x7F1FFDA0u: goto label_7F1FFDA0;
    case 0x7F1FFDA4u: goto label_7F1FFDA4;
    case 0x7F1FFDA8u: goto label_7F1FFDA8;
    case 0x7F1FFDACu: goto label_7F1FFDAC;
    case 0x7F1FFDB0u: goto label_7F1FFDB0;
    case 0x7F1FFDB4u: goto label_7F1FFDB4;
    case 0x7F1FFDB8u: goto label_7F1FFDB8;
    case 0x7F1FFDBCu: goto label_7F1FFDBC;
    case 0x7F1FFDC0u: goto label_7F1FFDC0;
    case 0x7F1FFDC4u: goto label_7F1FFDC4;
    case 0x7F1FFDC8u: goto label_7F1FFDC8;
    case 0x7F1FFDCCu: goto label_7F1FFDCC;
    case 0x7F1FFDD0u: goto label_7F1FFDD0;
    case 0x7F1FFDD4u: goto label_7F1FFDD4;
    case 0x7F1FFDD8u: goto label_7F1FFDD8;
    case 0x7F1FFDDCu: goto label_7F1FFDDC;
    case 0x7F1FFDE0u: goto label_7F1FFDE0;
    case 0x7F1FFDE4u: goto label_7F1FFDE4;
    case 0x7F1FFDE8u: goto label_7F1FFDE8;
    case 0x7F1FFDECu: goto label_7F1FFDEC;
    case 0x7F1FFDF0u: goto label_7F1FFDF0;
    case 0x7F1FFDF4u: goto label_7F1FFDF4;
    case 0x7F1FFDF8u: goto label_7F1FFDF8;
    case 0x7F1FFDFCu: goto label_7F1FFDFC;
    case 0x7F1FFE00u: goto label_7F1FFE00;
    case 0x7F1FFE04u: goto label_7F1FFE04;
    case 0x7F1FFE08u: goto label_7F1FFE08;
    case 0x7F1FFE0Cu: goto label_7F1FFE0C;
    case 0x7F1FFE10u: goto label_7F1FFE10;
    case 0x7F1FFE14u: goto label_7F1FFE14;
    case 0x7F1FFE18u: goto label_7F1FFE18;
    case 0x7F1FFE1Cu: goto label_7F1FFE1C;
    case 0x7F1FFE20u: goto label_7F1FFE20;
    case 0x7F1FFE24u: goto label_7F1FFE24;
    case 0x7F1FFE28u: goto label_7F1FFE28;
    case 0x7F1FFE2Cu: goto label_7F1FFE2C;
    case 0x7F1FFE30u: goto label_7F1FFE30;
    case 0x7F1FFE34u: goto label_7F1FFE34;
    case 0x7F1FFE38u: goto label_7F1FFE38;
    case 0x7F1FFE3Cu: goto label_7F1FFE3C;
    case 0x7F1FFE40u: goto label_7F1FFE40;
    case 0x7F1FFE44u: goto label_7F1FFE44;
    case 0x7F1FFE48u: goto label_7F1FFE48;
    case 0x7F1FFE4Cu: goto label_7F1FFE4C;
    case 0x7F1FFE50u: goto label_7F1FFE50;
    case 0x7F1FFE54u: goto label_7F1FFE54;
    case 0x7F1FFE58u: goto label_7F1FFE58;
    case 0x7F1FFE5Cu: goto label_7F1FFE5C;
    case 0x7F1FFE60u: goto label_7F1FFE60;
    case 0x7F1FFE64u: goto label_7F1FFE64;
    case 0x7F1FFE68u: goto label_7F1FFE68;
    case 0x7F1FFE6Cu: goto label_7F1FFE6C;
    case 0x7F1FFE70u: goto label_7F1FFE70;
    case 0x7F1FFE74u: goto label_7F1FFE74;
    case 0x7F1FFE78u: goto label_7F1FFE78;
    case 0x7F1FFE7Cu: goto label_7F1FFE7C;
    case 0x7F1FFE80u: goto label_7F1FFE80;
    case 0x7F1FFE84u: goto label_7F1FFE84;
    case 0x7F1FFE88u: goto label_7F1FFE88;
    case 0x7F1FFE8Cu: goto label_7F1FFE8C;
    case 0x7F1FFE90u: goto label_7F1FFE90;
    case 0x7F1FFE94u: goto label_7F1FFE94;
    case 0x7F1FFE98u: goto label_7F1FFE98;
    case 0x7F1FFE9Cu: goto label_7F1FFE9C;
    case 0x7F1FFEA0u: goto label_7F1FFEA0;
    case 0x7F1FFEA4u: goto label_7F1FFEA4;
    case 0x7F1FFEA8u: goto label_7F1FFEA8;
    case 0x7F1FFEACu: goto label_7F1FFEAC;
    case 0x7F1FFEB0u: goto label_7F1FFEB0;
    case 0x7F1FFEB4u: goto label_7F1FFEB4;
    case 0x7F1FFEB8u: goto label_7F1FFEB8;
    case 0x7F1FFEBCu: goto label_7F1FFEBC;
    case 0x7F1FFEC0u: goto label_7F1FFEC0;
    case 0x7F1FFEC4u: goto label_7F1FFEC4;
    case 0x7F1FFEC8u: goto label_7F1FFEC8;
    case 0x7F1FFECCu: goto label_7F1FFECC;
    case 0x7F1FFED0u: goto label_7F1FFED0;
    case 0x7F1FFED4u: goto label_7F1FFED4;
    case 0x7F1FFED8u: goto label_7F1FFED8;
    case 0x7F1FFEDCu: goto label_7F1FFEDC;
    case 0x7F1FFEE0u: goto label_7F1FFEE0;
    case 0x7F1FFEE4u: goto label_7F1FFEE4;
    case 0x7F1FFEE8u: goto label_7F1FFEE8;
    case 0x7F1FFEECu: goto label_7F1FFEEC;
    case 0x7F1FFEF0u: goto label_7F1FFEF0;
    case 0x7F1FFEF4u: goto label_7F1FFEF4;
    case 0x7F1FFEF8u: goto label_7F1FFEF8;
    case 0x7F1FFEFCu: goto label_7F1FFEFC;
    case 0x7F1FFF00u: goto label_7F1FFF00;
    case 0x7F1FFF04u: goto label_7F1FFF04;
    case 0x7F1FFF08u: goto label_7F1FFF08;
    case 0x7F1FFF0Cu: goto label_7F1FFF0C;
    case 0x7F1FFF10u: goto label_7F1FFF10;
    case 0x7F1FFF14u: goto label_7F1FFF14;
    case 0x7F1FFF18u: goto label_7F1FFF18;
    case 0x7F1FFF1Cu: goto label_7F1FFF1C;
    case 0x7F1FFF20u: goto label_7F1FFF20;
    case 0x7F1FFF24u: goto label_7F1FFF24;
    case 0x7F1FFF28u: goto label_7F1FFF28;
    case 0x7F1FFF2Cu: goto label_7F1FFF2C;
    case 0x7F1FFF30u: goto label_7F1FFF30;
    case 0x7F1FFF34u: goto label_7F1FFF34;
    case 0x7F1FFF38u: goto label_7F1FFF38;
    case 0x7F1FFF3Cu: goto label_7F1FFF3C;
    case 0x7F1FFF40u: goto label_7F1FFF40;
    case 0x7F1FFF44u: goto label_7F1FFF44;
    case 0x7F1FFF48u: goto label_7F1FFF48;
    case 0x7F1FFF4Cu: goto label_7F1FFF4C;
    case 0x7F1FFF50u: goto label_7F1FFF50;
    case 0x7F1FFF54u: goto label_7F1FFF54;
    case 0x7F1FFF58u: goto label_7F1FFF58;
    case 0x7F1FFF5Cu: goto label_7F1FFF5C;
    case 0x7F1FFF60u: goto label_7F1FFF60;
    case 0x7F1FFF64u: goto label_7F1FFF64;
    case 0x7F1FFF68u: goto label_7F1FFF68;
    case 0x7F1FFF6Cu: goto label_7F1FFF6C;
    case 0x7F1FFF70u: goto label_7F1FFF70;
    case 0x7F1FFF74u: goto label_7F1FFF74;
    case 0x7F1FFF78u: goto label_7F1FFF78;
    case 0x7F1FFF7Cu: goto label_7F1FFF7C;
    case 0x7F1FFF80u: goto label_7F1FFF80;
    case 0x7F1FFF84u: goto label_7F1FFF84;
    case 0x7F1FFF88u: goto label_7F1FFF88;
    case 0x7F1FFF8Cu: goto label_7F1FFF8C;
    case 0x7F1FFF90u: goto label_7F1FFF90;
    case 0x7F1FFF94u: goto label_7F1FFF94;
    case 0x7F1FFF98u: goto label_7F1FFF98;
    case 0x7F1FFF9Cu: goto label_7F1FFF9C;
    case 0x7F1FFFA0u: goto label_7F1FFFA0;
    case 0x7F1FFFA4u: goto label_7F1FFFA4;
    case 0x7F1FFFA8u: goto label_7F1FFFA8;
    case 0x7F1FFFACu: goto label_7F1FFFAC;
    case 0x7F1FFFB0u: goto label_7F1FFFB0;
    case 0x7F1FFFB4u: goto label_7F1FFFB4;
    case 0x7F1FFFB8u: goto label_7F1FFFB8;
    case 0x7F1FFFBCu: goto label_7F1FFFBC;
    case 0x7F1FFFC0u: goto label_7F1FFFC0;
    case 0x7F1FFFC4u: goto label_7F1FFFC4;
    case 0x7F1FFFC8u: goto label_7F1FFFC8;
    case 0x7F1FFFCCu: goto label_7F1FFFCC;
    case 0x7F1FFFD0u: goto label_7F1FFFD0;
    case 0x7F1FFFD4u: goto label_7F1FFFD4;
    case 0x7F1FFFD8u: goto label_7F1FFFD8;
    case 0x7F1FFFDCu: goto label_7F1FFFDC;
    case 0x7F1FFFE0u: goto label_7F1FFFE0;
    case 0x7F1FFFE4u: goto label_7F1FFFE4;
    case 0x7F1FFFE8u: goto label_7F1FFFE8;
    case 0x7F1FFFECu: goto label_7F1FFFEC;
    case 0x7F1FFFF0u: goto label_7F1FFFF0;
    case 0x7F1FFFF4u: goto label_7F1FFFF4;
    case 0x7F1FFFF8u: goto label_7F1FFFF8;
    case 0x7F1FFFFCu: goto label_7F1FFFFC;
    case 0x7F200000u: goto label_7F200000;
    case 0x7F200004u: goto label_7F200004;
    case 0x7F200008u: goto label_7F200008;
    case 0x7F20000Cu: goto label_7F20000C;
    case 0x7F200010u: goto label_7F200010;
    case 0x7F200014u: goto label_7F200014;
    case 0x7F200018u: goto label_7F200018;
    case 0x7F20001Cu: goto label_7F20001C;
    case 0x7F200020u: goto label_7F200020;
    case 0x7F200024u: goto label_7F200024;
    case 0x7F200028u: goto label_7F200028;
    case 0x7F20002Cu: goto label_7F20002C;
    case 0x7F200030u: goto label_7F200030;
    case 0x7F200034u: goto label_7F200034;
    case 0x7F200038u: goto label_7F200038;
    case 0x7F20003Cu: goto label_7F20003C;
    case 0x7F200040u: goto label_7F200040;
    case 0x7F200044u: goto label_7F200044;
    case 0x7F200048u: goto label_7F200048;
    case 0x7F20004Cu: goto label_7F20004C;
    case 0x7F200050u: goto label_7F200050;
    case 0x7F200054u: goto label_7F200054;
    case 0x7F200058u: goto label_7F200058;
    case 0x7F20005Cu: goto label_7F20005C;
    case 0x7F200060u: goto label_7F200060;
    case 0x7F200064u: goto label_7F200064;
    case 0x7F200068u: goto label_7F200068;
    case 0x7F20006Cu: goto label_7F20006C;
    case 0x7F200070u: goto label_7F200070;
    case 0x7F200074u: goto label_7F200074;
    case 0x7F200078u: goto label_7F200078;
    case 0x7F20007Cu: goto label_7F20007C;
    case 0x7F200080u: goto label_7F200080;
    case 0x7F200084u: goto label_7F200084;
    case 0x7F200088u: goto label_7F200088;
    case 0x7F20008Cu: goto label_7F20008C;
    case 0x7F200090u: goto label_7F200090;
    case 0x7F200094u: goto label_7F200094;
    case 0x7F200098u: goto label_7F200098;
    case 0x7F20009Cu: goto label_7F20009C;
    case 0x7F2000A0u: goto label_7F2000A0;
    case 0x7F2000A4u: goto label_7F2000A4;
    case 0x7F2000A8u: goto label_7F2000A8;
    case 0x7F2000ACu: goto label_7F2000AC;
    case 0x7F2000B0u: goto label_7F2000B0;
    case 0x7F2000B4u: goto label_7F2000B4;
    case 0x7F2000B8u: goto label_7F2000B8;
    case 0x7F2000BCu: goto label_7F2000BC;
    case 0x7F2000C0u: goto label_7F2000C0;
    case 0x7F2000C4u: goto label_7F2000C4;
    case 0x7F2000C8u: goto label_7F2000C8;
    case 0x7F2000CCu: goto label_7F2000CC;
    case 0x7F2000D0u: goto label_7F2000D0;
    case 0x7F2000D4u: goto label_7F2000D4;
    case 0x7F2000D8u: goto label_7F2000D8;
    case 0x7F2000DCu: goto label_7F2000DC;
    case 0x7F2000E0u: goto label_7F2000E0;
    case 0x7F2000E4u: goto label_7F2000E4;
    case 0x7F2000E8u: goto label_7F2000E8;
    default: return;
    }
label_7F1FC0EC:
    ctx->pc = 0x7F1FC0ECu;
    ctx->downcount -= 3;
    // 7F1FC0EC: addi    r10, r9, -4
    ctx->gpr[10] = ctx->gpr[9] + (u32)(s32)(-4);

label_7F1FC0F0:
    ctx->pc = 0x7F1FC0F0u;
    // 7F1FC0F0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1FC0F4:
    loop_7F1FC0F4(ctx);
    if (ctx->pc == 0x7F1FC108u) goto label_7F1FC108;
    return;
label_7F1FC0F8:
    ctx->pc = 0x7F1FC0F8u;
    // 7F1FC0F8: lwzu     r0, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[10] = ea;
    }

label_7F1FC0FC:
    ctx->pc = 0x7F1FC0FCu;
    // 7F1FC0FC: stw     r9, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F1FC100:
    ctx->pc = 0x7F1FC100u;
    // 7F1FC100: stwu     r0, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[11] = ea;
    }

label_7F1FC104:
    // 7F1FC104: bc    16, 0, 0x7F1FC0F4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FC0F4u;
                return;
            }
            goto label_7F1FC0F4;
        }
    }

label_7F1FC108:
    ctx->pc = 0x7F1FC108u;
    ctx->downcount -= 8;
    // 7F1FC108: lwz     r9, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F1FC10C:
    ctx->pc = 0x7F1FC10Cu;
    // 7F1FC10C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1FC110:
    ctx->pc = 0x7F1FC110u;
    // 7F1FC110: addi    r11, r5, -4
    ctx->gpr[11] = ctx->gpr[5] + (u32)(s32)(-4);

label_7F1FC114:
    ctx->pc = 0x7F1FC114u;
    // 7F1FC114: lwz     r9, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F1FC118:
    ctx->pc = 0x7F1FC118u;
    // 7F1FC118: lwz     r9, 100(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(100);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F1FC11C:
    ctx->pc = 0x7F1FC11Cu;
    // 7F1FC11C: addi    r10, r9, 60
    ctx->gpr[10] = ctx->gpr[9] + (u32)(s32)(60);

label_7F1FC120:
    ctx->pc = 0x7F1FC120u;
    // 7F1FC120: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1FC124:
    loop_7F1FC124(ctx);
    if (ctx->pc == 0x7F1FC138u) goto label_7F1FC138;
    return;
label_7F1FC128:
    ctx->pc = 0x7F1FC128u;
    // 7F1FC128: lwzu     r0, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[10] = ea;
    }

label_7F1FC12C:
    ctx->pc = 0x7F1FC12Cu;
    // 7F1FC12C: stw     r9, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F1FC130:
    ctx->pc = 0x7F1FC130u;
    // 7F1FC130: stwu     r0, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[11] = ea;
    }

label_7F1FC134:
    // 7F1FC134: bc    16, 0, 0x7F1FC124
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FC124u;
                return;
            }
            goto label_7F1FC124;
        }
    }

label_7F1FC138:
    ctx->pc = 0x7F1FC138u;
    ctx->downcount -= 13;
    // 7F1FC138: lwz     r0, 48(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FC13C:
    ctx->pc = 0x7F1FC13Cu;
    // 7F1FC13C: lis     r9, 32582
    ctx->gpr[9] = ((u32)(s32)(32582) << 16);

label_7F1FC140:
    ctx->pc = 0x7F1FC140u;
    // 7F1FC140: lwz     r11, 52(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(52);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F1FC144:
    ctx->pc = 0x7F1FC144u;
    // 7F1FC144: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC148:
    ctx->pc = 0x7F1FC148u;
    // 7F1FC148: lwz     r10, 56(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(56);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F1FC14C:
    ctx->pc = 0x7F1FC14Cu;
    // 7F1FC14C: lfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC14Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FC150:
    ctx->pc = 0x7F1FC150u;
    // 7F1FC150: lfs     f0, 13344(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC150u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(13344);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FC154:
    ctx->pc = 0x7F1FC154u;
    // 7F1FC154: lwz     r0, 60(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FC158:
    ctx->pc = 0x7F1FC158u;
    // 7F1FC158: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FC158u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1FC15C:
    ctx->pc = 0x7F1FC15Cu;
    // 7F1FC15C: stw     r11, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F1FC160:
    ctx->pc = 0x7F1FC160u;
    // 7F1FC160: stw     r10, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F1FC164:
    ctx->pc = 0x7F1FC164u;
    // 7F1FC164: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC168:
    ctx->pc = 0x7F1FC168u;
    // 7F1FC168: bc    4, 0, 0x7F1FC170
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC170;
        }
    }

label_7F1FC16C:
    ctx->pc = 0x7F1FC16Cu;
    ctx->downcount -= 1;
    // 7F1FC16C: b       0x7F1FC174
    {
            goto label_7F1FC174;
    }

label_7F1FC170:
    ctx->pc = 0x7F1FC170u;
    ctx->downcount -= 1;
    // 7F1FC170: fmr    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FC170u)) return;
    ctx->fpr[0] = ctx->fpr[1];

label_7F1FC174:
    ctx->pc = 0x7F1FC174u;
    ctx->downcount -= 6;
    // 7F1FC174: lis     r9, 32582
    ctx->gpr[9] = ((u32)(s32)(32582) << 16);

label_7F1FC178:
    ctx->pc = 0x7F1FC178u;
    // 7F1FC178: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC178u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FC17C:
    ctx->pc = 0x7F1FC17Cu;
    // 7F1FC17C: lfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC17Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FC180:
    ctx->pc = 0x7F1FC180u;
    // 7F1FC180: lfs     f0, 13344(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC180u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(13344);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FC184:
    ctx->pc = 0x7F1FC184u;
    // 7F1FC184: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FC184u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1FC188:
    ctx->pc = 0x7F1FC188u;
    // 7F1FC188: bc    4, 0, 0x7F1FC190
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC190;
        }
    }

label_7F1FC18C:
    ctx->pc = 0x7F1FC18Cu;
    ctx->downcount -= 1;
    // 7F1FC18C: b       0x7F1FC194
    {
            goto label_7F1FC194;
    }

label_7F1FC190:
    ctx->pc = 0x7F1FC190u;
    ctx->downcount -= 1;
    // 7F1FC190: fmr    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FC190u)) return;
    ctx->fpr[0] = ctx->fpr[1];

label_7F1FC194:
    ctx->pc = 0x7F1FC194u;
    ctx->downcount -= 6;
    // 7F1FC194: lis     r9, 32582
    ctx->gpr[9] = ((u32)(s32)(32582) << 16);

label_7F1FC198:
    ctx->pc = 0x7F1FC198u;
    // 7F1FC198: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC198u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FC19C:
    ctx->pc = 0x7F1FC19Cu;
    // 7F1FC19C: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC19Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FC1A0:
    ctx->pc = 0x7F1FC1A0u;
    // 7F1FC1A0: lfs     f0, 13344(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC1A0u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(13344);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FC1A4:
    ctx->pc = 0x7F1FC1A4u;
    // 7F1FC1A4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FC1A4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1FC1A8:
    ctx->pc = 0x7F1FC1A8u;
    // 7F1FC1A8: bc    4, 0, 0x7F1FC1B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC1B0;
        }
    }

label_7F1FC1AC:
    ctx->pc = 0x7F1FC1ACu;
    ctx->downcount -= 1;
    // 7F1FC1AC: b       0x7F1FC1B4
    {
            goto label_7F1FC1B4;
    }

label_7F1FC1B0:
    ctx->pc = 0x7F1FC1B0u;
    ctx->downcount -= 1;
    // 7F1FC1B0: fmr    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FC1B0u)) return;
    ctx->fpr[0] = ctx->fpr[1];

label_7F1FC1B4:
    ctx->pc = 0x7F1FC1B4u;
    ctx->downcount -= 22;
    // 7F1FC1B4: lwz     r10, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F1FC1B8:
    ctx->pc = 0x7F1FC1B8u;
    // 7F1FC1B8: lis     r9, 32582
    ctx->gpr[9] = ((u32)(s32)(32582) << 16);

label_7F1FC1BC:
    ctx->pc = 0x7F1FC1BCu;
    // 7F1FC1BC: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC1BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FC1C0:
    ctx->pc = 0x7F1FC1C0u;
    // 7F1FC1C0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FC1C4:
    ctx->pc = 0x7F1FC1C4u;
    // 7F1FC1C4: stw     r10, 48(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F1FC1C8:
    ctx->pc = 0x7F1FC1C8u;
    // 7F1FC1C8: lwz     r10, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F1FC1CC:
    ctx->pc = 0x7F1FC1CCu;
    // 7F1FC1CC: stw     r0, 52(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC1D0:
    ctx->pc = 0x7F1FC1D0u;
    // 7F1FC1D0: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FC1D4:
    ctx->pc = 0x7F1FC1D4u;
    // 7F1FC1D4: stw     r10, 56(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F1FC1D8:
    ctx->pc = 0x7F1FC1D8u;
    // 7F1FC1D8: lfs     f0, 13344(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC1D8u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(13344);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FC1DC:
    ctx->pc = 0x7F1FC1DCu;
    // 7F1FC1DC: stw     r0, 60(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC1E0:
    ctx->pc = 0x7F1FC1E0u;
    // 7F1FC1E0: lwz     r0, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FC1E4:
    ctx->pc = 0x7F1FC1E4u;
    // 7F1FC1E4: lwz     r10, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F1FC1E8:
    ctx->pc = 0x7F1FC1E8u;
    // 7F1FC1E8: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC1EC:
    ctx->pc = 0x7F1FC1ECu;
    // 7F1FC1EC: lwz     r9, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F1FC1F0:
    ctx->pc = 0x7F1FC1F0u;
    // 7F1FC1F0: lfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC1F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FC1F4:
    ctx->pc = 0x7F1FC1F4u;
    // 7F1FC1F4: lwz     r0, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FC1F8:
    ctx->pc = 0x7F1FC1F8u;
    // 7F1FC1F8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FC1F8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1FC1FC:
    ctx->pc = 0x7F1FC1FCu;
    // 7F1FC1FC: stw     r10, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F1FC200:
    ctx->pc = 0x7F1FC200u;
    // 7F1FC200: stw     r9, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F1FC204:
    ctx->pc = 0x7F1FC204u;
    // 7F1FC204: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC208:
    ctx->pc = 0x7F1FC208u;
    // 7F1FC208: bc    4, 0, 0x7F1FC210
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC210;
        }
    }

label_7F1FC20C:
    ctx->pc = 0x7F1FC20Cu;
    ctx->downcount -= 1;
    // 7F1FC20C: b       0x7F1FC214
    {
            goto label_7F1FC214;
    }

label_7F1FC210:
    ctx->pc = 0x7F1FC210u;
    ctx->downcount -= 1;
    // 7F1FC210: fmr    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FC210u)) return;
    ctx->fpr[0] = ctx->fpr[1];

label_7F1FC214:
    ctx->pc = 0x7F1FC214u;
    ctx->downcount -= 6;
    // 7F1FC214: lis     r9, 32582
    ctx->gpr[9] = ((u32)(s32)(32582) << 16);

label_7F1FC218:
    ctx->pc = 0x7F1FC218u;
    // 7F1FC218: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC218u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FC21C:
    ctx->pc = 0x7F1FC21Cu;
    // 7F1FC21C: lfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC21Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FC220:
    ctx->pc = 0x7F1FC220u;
    // 7F1FC220: lfs     f0, 13344(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC220u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(13344);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FC224:
    ctx->pc = 0x7F1FC224u;
    // 7F1FC224: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FC224u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1FC228:
    ctx->pc = 0x7F1FC228u;
    // 7F1FC228: bc    4, 0, 0x7F1FC230
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC230;
        }
    }

label_7F1FC22C:
    ctx->pc = 0x7F1FC22Cu;
    ctx->downcount -= 1;
    // 7F1FC22C: b       0x7F1FC234
    {
            goto label_7F1FC234;
    }

label_7F1FC230:
    ctx->pc = 0x7F1FC230u;
    ctx->downcount -= 1;
    // 7F1FC230: fmr    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FC230u)) return;
    ctx->fpr[0] = ctx->fpr[1];

label_7F1FC234:
    ctx->pc = 0x7F1FC234u;
    ctx->downcount -= 6;
    // 7F1FC234: lis     r9, 32582
    ctx->gpr[9] = ((u32)(s32)(32582) << 16);

label_7F1FC238:
    ctx->pc = 0x7F1FC238u;
    // 7F1FC238: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC238u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FC23C:
    ctx->pc = 0x7F1FC23Cu;
    // 7F1FC23C: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC23Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FC240:
    ctx->pc = 0x7F1FC240u;
    // 7F1FC240: lfs     f0, 13344(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC240u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(13344);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FC244:
    ctx->pc = 0x7F1FC244u;
    // 7F1FC244: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FC244u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1FC248:
    ctx->pc = 0x7F1FC248u;
    // 7F1FC248: bc    4, 0, 0x7F1FC250
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC250;
        }
    }

label_7F1FC24C:
    ctx->pc = 0x7F1FC24Cu;
    ctx->downcount -= 1;
    // 7F1FC24C: b       0x7F1FC254
    {
            goto label_7F1FC254;
    }

label_7F1FC250:
    ctx->pc = 0x7F1FC250u;
    ctx->downcount -= 1;
    // 7F1FC250: fmr    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FC250u)) return;
    ctx->fpr[0] = ctx->fpr[1];

label_7F1FC254:
    ctx->pc = 0x7F1FC254u;
    ctx->downcount -= 14;
    // 7F1FC254: lwz     r12, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F1FC258:
    ctx->pc = 0x7F1FC258u;
    // 7F1FC258: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1FC25C:
    ctx->pc = 0x7F1FC25Cu;
    // 7F1FC25C: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC25Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FC260:
    ctx->pc = 0x7F1FC260u;
    // 7F1FC260: addi    r11, r6, -4
    ctx->gpr[11] = ctx->gpr[6] + (u32)(s32)(-4);

label_7F1FC264:
    ctx->pc = 0x7F1FC264u;
    // 7F1FC264: lwz     r9, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F1FC268:
    ctx->pc = 0x7F1FC268u;
    // 7F1FC268: addi    r10, r4, -4
    ctx->gpr[10] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F1FC26C:
    ctx->pc = 0x7F1FC26Cu;
    // 7F1FC26C: stw     r12, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F1FC270:
    ctx->pc = 0x7F1FC270u;
    // 7F1FC270: lwz     r12, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F1FC274:
    ctx->pc = 0x7F1FC274u;
    // 7F1FC274: stw     r9, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F1FC278:
    ctx->pc = 0x7F1FC278u;
    // 7F1FC278: lwz     r9, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F1FC27C:
    ctx->pc = 0x7F1FC27Cu;
    // 7F1FC27C: stw     r12, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F1FC280:
    ctx->pc = 0x7F1FC280u;
    // 7F1FC280: stw     r9, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F1FC284:
    ctx->pc = 0x7F1FC284u;
    // 7F1FC284: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1FC288:
    loop_7F1FC288(ctx);
    if (ctx->pc == 0x7F1FC29Cu) goto label_7F1FC29C;
    return;
label_7F1FC28C:
    ctx->pc = 0x7F1FC28Cu;
    // 7F1FC28C: lwzu     r0, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[10] = ea;
    }

label_7F1FC290:
    ctx->pc = 0x7F1FC290u;
    // 7F1FC290: stw     r9, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F1FC294:
    ctx->pc = 0x7F1FC294u;
    // 7F1FC294: stwu     r0, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[11] = ea;
    }

label_7F1FC298:
    // 7F1FC298: bc    16, 0, 0x7F1FC288
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FC288u;
                return;
            }
            goto label_7F1FC288;
        }
    }

label_7F1FC29C:
    ctx->pc = 0x7F1FC29Cu;
    ctx->downcount -= 5;
    // 7F1FC29C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1FC2A0:
    ctx->pc = 0x7F1FC2A0u;
    // 7F1FC2A0: addi    r11, r7, -4
    ctx->gpr[11] = ctx->gpr[7] + (u32)(s32)(-4);

label_7F1FC2A4:
    ctx->pc = 0x7F1FC2A4u;
    // 7F1FC2A4: addi    r10, r5, -4
    ctx->gpr[10] = ctx->gpr[5] + (u32)(s32)(-4);

label_7F1FC2A8:
    ctx->pc = 0x7F1FC2A8u;
    // 7F1FC2A8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1FC2AC:
    loop_7F1FC2AC(ctx);
    if (ctx->pc == 0x7F1FC2C0u) goto label_7F1FC2C0;
    return;
label_7F1FC2B0:
    ctx->pc = 0x7F1FC2B0u;
    // 7F1FC2B0: lwzu     r0, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[10] = ea;
    }

label_7F1FC2B4:
    ctx->pc = 0x7F1FC2B4u;
    // 7F1FC2B4: stw     r9, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F1FC2B8:
    ctx->pc = 0x7F1FC2B8u;
    // 7F1FC2B8: stwu     r0, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[11] = ea;
    }

label_7F1FC2BC:
    // 7F1FC2BC: bc    16, 0, 0x7F1FC2AC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FC2ACu;
                return;
            }
            goto label_7F1FC2AC;
        }
    }

label_7F1FC2C0:
    ctx->pc = 0x7F1FC2C0u;
    ctx->downcount -= 13;
    // 7F1FC2C0: lis     r9, 32582
    ctx->gpr[9] = ((u32)(s32)(32582) << 16);

label_7F1FC2C4:
    ctx->pc = 0x7F1FC2C4u;
    // 7F1FC2C4: lfs     f0, 13348(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC2C4u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(13348);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FC2C8:
    ctx->pc = 0x7F1FC2C8u;
    // 7F1FC2C8: stfs     f0, 48(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC2C8u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FC2CC:
    ctx->pc = 0x7F1FC2CCu;
    // 7F1FC2CC: stfs     f0, 52(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC2CCu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FC2D0:
    ctx->pc = 0x7F1FC2D0u;
    // 7F1FC2D0: stfs     f0, 56(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC2D0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FC2D4:
    ctx->pc = 0x7F1FC2D4u;
    // 7F1FC2D4: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1FC2D8:
    ctx->pc = 0x7F1FC2D8u;
    // 7F1FC2D8: addi    r5, r5, 128
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(128);

label_7F1FC2DC:
    ctx->pc = 0x7F1FC2DCu;
    // 7F1FC2DC: cmpwi   r3, 8
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FC2E0:
    ctx->pc = 0x7F1FC2E0u;
    // 7F1FC2E0: addi    r6, r6, 128
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(128);

label_7F1FC2E4:
    ctx->pc = 0x7F1FC2E4u;
    // 7F1FC2E4: addi    r7, r7, 128
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(128);

label_7F1FC2E8:
    ctx->pc = 0x7F1FC2E8u;
    // 7F1FC2E8: addi    r8, r8, 4
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(4);

label_7F1FC2EC:
    ctx->pc = 0x7F1FC2ECu;
    // 7F1FC2EC: addi    r4, r4, 128
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(128);

label_7F1FC2F0:
    ctx->pc = 0x7F1FC2F0u;
    // 7F1FC2F0: bc    12, 0, 0x7F1FC0C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F1FC0C8u;
            return;
        }
    }

label_7F1FC2F4:
    ctx->pc = 0x7F1FC2F4u;
    ctx->downcount -= 7;
    // 7F1FC2F4: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F1FC2F8:
    ctx->pc = 0x7F1FC2F8u;
    // 7F1FC2F8: addi    r29, r27, 2384
    ctx->gpr[29] = ctx->gpr[27] + (u32)(s32)(2384);

label_7F1FC2FC:
    ctx->pc = 0x7F1FC2FCu;
    // 7F1FC2FC: sth     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[30]);
    }

label_7F1FC300:
    ctx->pc = 0x7F1FC300u;
    // 7F1FC300: or   r25, r30, r30
    {
        ctx->gpr[25] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FC304:
    ctx->pc = 0x7F1FC304u;
    // 7F1FC304: addi    r28, r27, 4560
    ctx->gpr[28] = ctx->gpr[27] + (u32)(s32)(4560);

label_7F1FC308:
    ctx->pc = 0x7F1FC308u;
    // 7F1FC308: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F1FC30C:
    ctx->pc = 0x7F1FC30Cu;
    // 7F1FC30C: sth     r30, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[30]);
    }

label_7F1FC310:
    ctx->pc = 0x7F1FC310u;
    ctx->downcount -= 3;
    // 7F1FC310: lwz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FC314:
    // 7F1FC314: cmpwi   r0, -1
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

label_7F1FC318:
    // 7F1FC318: bc    12, 2, 0x7F1FC3D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC3D4;
        }
    }

label_7F1FC31C:
    ctx->downcount -= 5;
    // 7F1FC31C: rlwinm r3, r0, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1FC320:
    // 7F1FC320: addi    r0, r3, 48
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(48);

label_7F1FC324:
    ctx->pc = 0x7F1FC324u;
    // 7F1FC324: lwzx    r3, r27, r0
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FC328:
    // 7F1FC328: cmplwi  r3, 0x0000
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

label_7F1FC32C:
    // 7F1FC32C: bc    4, 2, 0x7F1FC348
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC348;
        }
    }

label_7F1FC330:
    ctx->downcount -= 3;
    // 7F1FC330: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F1FC334:
    // 7F1FC334: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FC338:
    // 7F1FC338: bl      0x7F1FBFF8
    {
            ctx->lr = 0x7F1FC33Cu;
            ctx->pc = 0x7F1FBFF8u;
            return;
    }

label_7F1FC33C:
    ctx->downcount -= 3;
    // 7F1FC33C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F1FC340:
    ctx->pc = 0x7F1FC340u;
    // 7F1FC340: stw     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC344:
    // 7F1FC344: b       0x7F1FC3D4
    {
            goto label_7F1FC3D4;
    }

label_7F1FC348:
    ctx->pc = 0x7F1FC348u;
    ctx->downcount -= 3;
    // 7F1FC348: lwz     r0, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FC34C:
    // 7F1FC34C: rlwinm. r0, r0, 0, 18, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00003000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1FC350:
    // 7F1FC350: bc    12, 2, 0x7F1FC36C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC36C;
        }
    }

label_7F1FC354:
    ctx->downcount -= 6;
    // 7F1FC354: addi    r0, r25, 2128
    ctx->gpr[0] = ctx->gpr[25] + (u32)(s32)(2128);

label_7F1FC358:
    ctx->pc = 0x7F1FC358u;
    // 7F1FC358: lwzx    r3, r27, r0
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FC35C:
    ctx->pc = 0x7F1FC35Cu;
    // 7F1FC35C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FC360:
    // 7F1FC360: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F1FC364:
    ctx->pc = 0x7F1FC364u;
    // 7F1FC364: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC368:
    // 7F1FC368: b       0x7F1FC3D4
    {
            goto label_7F1FC3D4;
    }

label_7F1FC36C:
    ctx->downcount -= 12;
    // 7F1FC36C: addi    r31, r25, 2128
    ctx->gpr[31] = ctx->gpr[25] + (u32)(s32)(2128);

label_7F1FC370:
    ctx->pc = 0x7F1FC370u;
    // 7F1FC370: lwzx    r3, r27, r31
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[31];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FC374:
    ctx->pc = 0x7F1FC374u;
    // 7F1FC374: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FC378:
    // 7F1FC378: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F1FC37C:
    ctx->pc = 0x7F1FC37Cu;
    // 7F1FC37C: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC380:
    ctx->pc = 0x7F1FC380u;
    // 7F1FC380: lwz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FC384:
    // 7F1FC384: rlwinm r3, r0, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1FC388:
    // 7F1FC388: addi    r0, r3, 48
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(48);

label_7F1FC38C:
    ctx->pc = 0x7F1FC38Cu;
    // 7F1FC38C: lwzx    r3, r27, r0
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FC390:
    ctx->pc = 0x7F1FC390u;
    // 7F1FC390: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FC394:
    // 7F1FC394: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F1FC398:
    // 7F1FC398: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F1FC39Cu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F1FC39C:
    ctx->downcount -= 2;
    // 7F1FC39C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1FC3A0:
    // 7F1FC3A0: bl      0x7F3B3134
    {
            ctx->lr = 0x7F1FC3A4u;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F1FC3A4:
    ctx->downcount -= 5;
    // 7F1FC3A4: addi    r0, r26, 4432
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(4432);

label_7F1FC3A8:
    // 7F1FC3A8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1FC3AC:
    ctx->pc = 0x7F1FC3ACu;
    // 7F1FC3AC: lhax    r0, r27, r0
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1FC3B0:
    ctx->pc = 0x7F1FC3B0u;
    // 7F1FC3B0: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1FC3B4:
    // 7F1FC3B4: bl      0x7F3B31DC
    {
            ctx->lr = 0x7F1FC3B8u;
            ctx->pc = 0x7F3B31DCu;
            return;
    }

label_7F1FC3B8:
    ctx->pc = 0x7F1FC3B8u;
    ctx->downcount -= 2;
    // 7F1FC3B8: lwzx    r3, r27, r31
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[31];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FC3BC:
    // 7F1FC3BC: bl      0x7F3B35CC
    {
            ctx->lr = 0x7F1FC3C0u;
            ctx->pc = 0x7F3B35CCu;
            return;
    }

label_7F1FC3C0:
    ctx->downcount -= 5;
    // 7F1FC3C0: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F1FC3C4:
    ctx->pc = 0x7F1FC3C4u;
    // 7F1FC3C4: lwzx    r3, r27, r31
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[31];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FC3C8:
    // 7F1FC3C8: addi    r4, r4, 18308
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18308);

label_7F1FC3CC:
    ctx->pc = 0x7F1FC3CCu;
    // 7F1FC3CC: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FC3D0:
    // 7F1FC3D0: bl      0x7F1FC58C
    {
            ctx->lr = 0x7F1FC3D4u;
            goto label_7F1FC58C;
    }

label_7F1FC3D4:
    ctx->pc = 0x7F1FC3D4u;
    ctx->downcount -= 3;
    // 7F1FC3D4: lwz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FC3D8:
    // 7F1FC3D8: cmpwi   r0, -1
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

label_7F1FC3DC:
    // 7F1FC3DC: bc    12, 2, 0x7F1FC400
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC400;
        }
    }

label_7F1FC3E0:
    ctx->downcount -= 8;
    // 7F1FC3E0: rlwinm r3, r0, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1FC3E4:
    // 7F1FC3E4: addi    r0, r25, 2128
    ctx->gpr[0] = ctx->gpr[25] + (u32)(s32)(2128);

label_7F1FC3E8:
    // 7F1FC3E8: addi    r4, r3, 48
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(48);

label_7F1FC3EC:
    ctx->pc = 0x7F1FC3ECu;
    // 7F1FC3EC: lwzx    r3, r27, r0
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FC3F0:
    ctx->pc = 0x7F1FC3F0u;
    // 7F1FC3F0: lwzx    r4, r27, r4
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[4];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FC3F4:
    ctx->pc = 0x7F1FC3F4u;
    // 7F1FC3F4: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FC3F8:
    ctx->pc = 0x7F1FC3F8u;
    // 7F1FC3F8: lwz     r0, 84(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FC3FC:
    ctx->pc = 0x7F1FC3FCu;
    // 7F1FC3FC: stw     r0, 84(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC400:
    ctx->downcount -= 7;
    // 7F1FC400: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F1FC404:
    // 7F1FC404: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_7F1FC408:
    // 7F1FC408: cmpwi   r30, 64
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

label_7F1FC40C:
    // 7F1FC40C: addi    r26, r26, 2
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(2);

label_7F1FC410:
    // 7F1FC410: addi    r25, r25, 4
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(4);

label_7F1FC414:
    // 7F1FC414: addi    r29, r29, 16
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(16);

label_7F1FC418:
    // 7F1FC418: bc    12, 0, 0x7F1FC310
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FC310u;
                return;
            }
            goto label_7F1FC310;
        }
    }

label_7F1FC41C:
    ctx->pc = 0x7F1FC41Cu;
    ctx->downcount -= 7;
    // 7F1FC41C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F1FC420:
    ctx->pc = 0x7F1FC420u;
    // 7F1FC420: addi    r30, r27, 4880
    ctx->gpr[30] = ctx->gpr[27] + (u32)(s32)(4880);

label_7F1FC424:
    ctx->pc = 0x7F1FC424u;
    // 7F1FC424: sth     r31, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_7F1FC428:
    ctx->pc = 0x7F1FC428u;
    // 7F1FC428: addi    r29, r27, 5424
    ctx->gpr[29] = ctx->gpr[27] + (u32)(s32)(5424);

label_7F1FC42C:
    ctx->pc = 0x7F1FC42Cu;
    // 7F1FC42C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F1FC430:
    ctx->pc = 0x7F1FC430u;
    // 7F1FC430: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F1FC434:
    ctx->pc = 0x7F1FC434u;
    // 7F1FC434: sth     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_7F1FC438:
    ctx->pc = 0x7F1FC438u;
    ctx->downcount -= 4;
    // 7F1FC438: lwz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FC43C:
    // 7F1FC43C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1FC440:
    // 7F1FC440: cmpwi   r0, -1
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

label_7F1FC444:
    // 7F1FC444: bc    4, 2, 0x7F1FC450
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC450;
        }
    }

label_7F1FC448:
    ctx->downcount -= 2;
    // 7F1FC448: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1FC44C:
    // 7F1FC44C: b       0x7F1FC4D0
    {
            goto label_7F1FC4D0;
    }

label_7F1FC450:
    ctx->downcount -= 5;
    // 7F1FC450: rlwinm r3, r0, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1FC454:
    // 7F1FC454: addi    r0, r3, 48
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(48);

label_7F1FC458:
    ctx->pc = 0x7F1FC458u;
    // 7F1FC458: lwzx    r3, r27, r0
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FC45C:
    // 7F1FC45C: cmplwi  r3, 0x0000
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

label_7F1FC460:
    // 7F1FC460: bc    4, 2, 0x7F1FC480
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC480;
        }
    }

label_7F1FC464:
    ctx->downcount -= 3;
    // 7F1FC464: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F1FC468:
    // 7F1FC468: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FC46C:
    // 7F1FC46C: bl      0x7F1FC044
    {
            ctx->lr = 0x7F1FC470u;
            ctx->pc = 0x7F1FC044u;
            return;
    }

label_7F1FC470:
    ctx->downcount -= 4;
    // 7F1FC470: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F1FC474:
    // 7F1FC474: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1FC478:
    ctx->pc = 0x7F1FC478u;
    // 7F1FC478: stw     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC47C:
    // 7F1FC47C: b       0x7F1FC4D0
    {
            goto label_7F1FC4D0;
    }

label_7F1FC480:
    ctx->pc = 0x7F1FC480u;
    ctx->downcount -= 3;
    // 7F1FC480: lwz     r0, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FC484:
    // 7F1FC484: rlwinm. r0, r0, 0, 18, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00003000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1FC488:
    // 7F1FC488: bc    4, 2, 0x7F1FC4A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC4A4;
        }
    }

label_7F1FC48C:
    ctx->downcount -= 6;
    // 7F1FC48C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F1FC490:
    // 7F1FC490: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F1FC494:
    ctx->pc = 0x7F1FC494u;
    // 7F1FC494: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FC498:
    ctx->pc = 0x7F1FC498u;
    // 7F1FC498: lha     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1FC49C:
    // 7F1FC49C: rlwinm. r0, r0, 0, 28, 28
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

label_7F1FC4A0:
    // 7F1FC4A0: bc    12, 2, 0x7F1FC4BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC4BC;
        }
    }

label_7F1FC4A4:
    ctx->downcount -= 6;
    // 7F1FC4A4: addi    r0, r26, 4816
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(4816);

label_7F1FC4A8:
    ctx->pc = 0x7F1FC4A8u;
    // 7F1FC4A8: lwzx    r3, r27, r0
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FC4AC:
    ctx->pc = 0x7F1FC4ACu;
    // 7F1FC4AC: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FC4B0:
    // 7F1FC4B0: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F1FC4B4:
    ctx->pc = 0x7F1FC4B4u;
    // 7F1FC4B4: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC4B8:
    // 7F1FC4B8: b       0x7F1FC4D0
    {
            goto label_7F1FC4D0;
    }

label_7F1FC4BC:
    ctx->downcount -= 5;
    // 7F1FC4BC: addi    r0, r26, 4816
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(4816);

label_7F1FC4C0:
    ctx->pc = 0x7F1FC4C0u;
    // 7F1FC4C0: lwzx    r3, r27, r0
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FC4C4:
    ctx->pc = 0x7F1FC4C4u;
    // 7F1FC4C4: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FC4C8:
    // 7F1FC4C8: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F1FC4CC:
    ctx->pc = 0x7F1FC4CCu;
    // 7F1FC4CC: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC4D0:
    ctx->downcount -= 2;
    // 7F1FC4D0: cmpwi   r4, 0
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

label_7F1FC4D4:
    // 7F1FC4D4: bc    12, 2, 0x7F1FC530
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC530;
        }
    }

label_7F1FC4D8:
    ctx->pc = 0x7F1FC4D8u;
    ctx->downcount -= 7;
    // 7F1FC4D8: lwz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FC4DC:
    // 7F1FC4DC: rlwinm r3, r0, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1FC4E0:
    // 7F1FC4E0: addi    r0, r3, 48
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(48);

label_7F1FC4E4:
    ctx->pc = 0x7F1FC4E4u;
    // 7F1FC4E4: lwzx    r3, r27, r0
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FC4E8:
    ctx->pc = 0x7F1FC4E8u;
    // 7F1FC4E8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FC4EC:
    // 7F1FC4EC: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F1FC4F0:
    // 7F1FC4F0: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F1FC4F4u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F1FC4F4:
    ctx->downcount -= 2;
    // 7F1FC4F4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FC4F8:
    // 7F1FC4F8: bl      0x7F3B3134
    {
            ctx->lr = 0x7F1FC4FCu;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F1FC4FC:
    ctx->downcount -= 5;
    // 7F1FC4FC: addi    r0, r28, 5392
    ctx->gpr[0] = ctx->gpr[28] + (u32)(s32)(5392);

label_7F1FC500:
    // 7F1FC500: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1FC504:
    ctx->pc = 0x7F1FC504u;
    // 7F1FC504: lhax    r0, r27, r0
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1FC508:
    ctx->pc = 0x7F1FC508u;
    // 7F1FC508: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1FC50C:
    // 7F1FC50C: bl      0x7F3B31DC
    {
            ctx->lr = 0x7F1FC510u;
            ctx->pc = 0x7F3B31DCu;
            return;
    }

label_7F1FC510:
    ctx->downcount -= 3;
    // 7F1FC510: addi    r25, r26, 4816
    ctx->gpr[25] = ctx->gpr[26] + (u32)(s32)(4816);

label_7F1FC514:
    ctx->pc = 0x7F1FC514u;
    // 7F1FC514: lwzx    r3, r27, r25
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[25];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FC518:
    // 7F1FC518: bl      0x7F3B35CC
    {
            ctx->lr = 0x7F1FC51Cu;
            ctx->pc = 0x7F3B35CCu;
            return;
    }

label_7F1FC51C:
    ctx->downcount -= 5;
    // 7F1FC51C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F1FC520:
    ctx->pc = 0x7F1FC520u;
    // 7F1FC520: lwzx    r3, r27, r25
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[25];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FC524:
    // 7F1FC524: addi    r4, r4, 18308
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18308);

label_7F1FC528:
    ctx->pc = 0x7F1FC528u;
    // 7F1FC528: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FC52C:
    // 7F1FC52C: bl      0x7F1FC58C
    {
            ctx->lr = 0x7F1FC530u;
            goto label_7F1FC58C;
    }

label_7F1FC530:
    ctx->pc = 0x7F1FC530u;
    ctx->downcount -= 3;
    // 7F1FC530: lwz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FC534:
    // 7F1FC534: cmpwi   r0, -1
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

label_7F1FC538:
    // 7F1FC538: bc    12, 2, 0x7F1FC55C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC55C;
        }
    }

label_7F1FC53C:
    ctx->downcount -= 8;
    // 7F1FC53C: rlwinm r3, r0, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1FC540:
    // 7F1FC540: addi    r0, r26, 4816
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(4816);

label_7F1FC544:
    // 7F1FC544: addi    r4, r3, 48
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(48);

label_7F1FC548:
    ctx->pc = 0x7F1FC548u;
    // 7F1FC548: lwzx    r3, r27, r0
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FC54C:
    ctx->pc = 0x7F1FC54Cu;
    // 7F1FC54C: lwzx    r4, r27, r4
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[4];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FC550:
    ctx->pc = 0x7F1FC550u;
    // 7F1FC550: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FC554:
    ctx->pc = 0x7F1FC554u;
    // 7F1FC554: lwz     r0, 84(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FC558:
    ctx->pc = 0x7F1FC558u;
    // 7F1FC558: stw     r0, 84(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC55C:
    ctx->downcount -= 7;
    // 7F1FC55C: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F1FC560:
    // 7F1FC560: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_7F1FC564:
    // 7F1FC564: cmpwi   r31, 16
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

label_7F1FC568:
    // 7F1FC568: addi    r28, r28, 2
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(2);

label_7F1FC56C:
    // 7F1FC56C: addi    r26, r26, 4
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(4);

label_7F1FC570:
    // 7F1FC570: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_7F1FC574:
    // 7F1FC574: bc    12, 0, 0x7F1FC438
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FC438u;
                return;
            }
            goto label_7F1FC438;
        }
    }

label_7F1FC578:
    ctx->pc = 0x7F1FC578u;
    ctx->downcount -= 16;
    // 7F1FC578: lmw     r25, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FC57C:
    ctx->pc = 0x7F1FC57Cu;
    // 7F1FC57C: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FC580:
    ctx->pc = 0x7F1FC580u;
    // 7F1FC580: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FC584:
    ctx->pc = 0x7F1FC584u;
    // 7F1FC584: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F1FC588:
    ctx->pc = 0x7F1FC588u;
    // 7F1FC588: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FC58C:
    ctx->pc = 0x7F1FC58Cu;
    ctx->downcount -= 7;
    // 7F1FC58C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FC590:
    ctx->pc = 0x7F1FC590u;
    // 7F1FC590: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FC594:
    ctx->pc = 0x7F1FC594u;
    // 7F1FC594: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC598:
    ctx->pc = 0x7F1FC598u;
    // 7F1FC598: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1FC59C:
    ctx->pc = 0x7F1FC59Cu;
    // 7F1FC59C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FC5A0:
    ctx->pc = 0x7F1FC5A0u;
    // 7F1FC5A0: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FC5A4:
    ctx->pc = 0x7F1FC5A4u;
    // 7F1FC5A4: bl      0x7F01B234
    {
            ctx->lr = 0x7F1FC5A8u;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F1FC5A8:
    ctx->pc = 0x7F1FC5A8u;
    ctx->downcount -= 7;
    // 7F1FC5A8: stw     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FC5AC:
    ctx->pc = 0x7F1FC5ACu;
    // 7F1FC5AC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FC5B0:
    ctx->pc = 0x7F1FC5B0u;
    // 7F1FC5B0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1FC5B4:
    ctx->pc = 0x7F1FC5B4u;
    // 7F1FC5B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FC5B8:
    ctx->pc = 0x7F1FC5B8u;
    // 7F1FC5B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1FC5BC:
    ctx->pc = 0x7F1FC5BCu;
    // 7F1FC5BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FC5C0:
    ctx->pc = 0x7F1FC5C0u;
    ctx->downcount -= 25;
    // 7F1FC5C0: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FC5C4:
    ctx->pc = 0x7F1FC5C4u;
    // 7F1FC5C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FC5C8:
    ctx->pc = 0x7F1FC5C8u;
    // 7F1FC5C8: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC5CC:
    ctx->pc = 0x7F1FC5CCu;
    // 7F1FC5CC: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC5CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1FC5D0:
    ctx->pc = 0x7F1FC5D0u;
    // 7F1FC5D0: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FC5D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1FC5D0u);
        if (ctx->exception) return;
    }

label_7F1FC5D4:
    ctx->pc = 0x7F1FC5D4u;
    // 7F1FC5D4: stfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC5D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1FC5D8:
    ctx->pc = 0x7F1FC5D8u;
    // 7F1FC5D8: psq_st   f30, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FC5D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F1FC5D8u);
        if (ctx->exception) return;
    }

label_7F1FC5DC:
    ctx->pc = 0x7F1FC5DCu;
    // 7F1FC5DC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FC5E0:
    ctx->pc = 0x7F1FC5E0u;
    // 7F1FC5E0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1FC5E4:
    ctx->pc = 0x7F1FC5E4u;
    // 7F1FC5E4: lfs     f1, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC5E4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FC5E8:
    ctx->pc = 0x7F1FC5E8u;
    // 7F1FC5E8: lfs     f0, 13328(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC5E8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(13328);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FC5EC:
    ctx->pc = 0x7F1FC5ECu;
    // 7F1FC5EC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FC5F0:
    ctx->pc = 0x7F1FC5F0u;
    // 7F1FC5F0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FC5F4:
    ctx->pc = 0x7F1FC5F4u;
    // 7F1FC5F4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FC5F4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1FC5F8:
    ctx->pc = 0x7F1FC5F8u;
    // 7F1FC5F8: bc    4, 0, 0x7F1FC60C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC60C;
        }
    }

label_7F1FC5FC:
    ctx->pc = 0x7F1FC5FCu;
    ctx->downcount -= 4;
    // 7F1FC5FC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FC600:
    ctx->pc = 0x7F1FC600u;
    // 7F1FC600: lfs     f0, 13352(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC600u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13352);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FC604:
    ctx->pc = 0x7F1FC604u;
    // 7F1FC604: fadds   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FC604u)) return;
    ppc_fadds(ctx, 31, 0, 1);

label_7F1FC608:
    ctx->pc = 0x7F1FC608u;
    // 7F1FC608: b       0x7F1FC618
    {
            goto label_7F1FC618;
    }

label_7F1FC60C:
    ctx->pc = 0x7F1FC60Cu;
    ctx->downcount -= 3;
    // 7F1FC60C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FC610:
    ctx->pc = 0x7F1FC610u;
    // 7F1FC610: lfs     f0, 13352(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC610u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13352);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FC614:
    ctx->pc = 0x7F1FC614u;
    // 7F1FC614: fsubs   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FC614u)) return;
    ppc_fsubs(ctx, 31, 0, 1);

label_7F1FC618:
    ctx->pc = 0x7F1FC618u;
    ctx->downcount -= 5;
    // 7F1FC618: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FC61C:
    ctx->pc = 0x7F1FC61Cu;
    // 7F1FC61C: lfs     f1, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC61Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FC620:
    ctx->pc = 0x7F1FC620u;
    // 7F1FC620: lfs     f0, 13328(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC620u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13328);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FC624:
    ctx->pc = 0x7F1FC624u;
    // 7F1FC624: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FC624u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1FC628:
    ctx->pc = 0x7F1FC628u;
    // 7F1FC628: bc    4, 0, 0x7F1FC63C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC63C;
        }
    }

label_7F1FC62C:
    ctx->pc = 0x7F1FC62Cu;
    ctx->downcount -= 4;
    // 7F1FC62C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FC630:
    ctx->pc = 0x7F1FC630u;
    // 7F1FC630: lfs     f0, 13356(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC630u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13356);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FC634:
    ctx->pc = 0x7F1FC634u;
    // 7F1FC634: fadds   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FC634u)) return;
    ppc_fadds(ctx, 30, 0, 1);

label_7F1FC638:
    ctx->pc = 0x7F1FC638u;
    // 7F1FC638: b       0x7F1FC648
    {
            goto label_7F1FC648;
    }

label_7F1FC63C:
    ctx->pc = 0x7F1FC63Cu;
    ctx->downcount -= 3;
    // 7F1FC63C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FC640:
    ctx->pc = 0x7F1FC640u;
    // 7F1FC640: lfs     f0, 13356(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC640u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13356);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FC644:
    ctx->pc = 0x7F1FC644u;
    // 7F1FC644: fsubs   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FC644u)) return;
    ppc_fsubs(ctx, 30, 0, 1);

label_7F1FC648:
    ctx->pc = 0x7F1FC648u;
    ctx->downcount -= 4;
    // 7F1FC648: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FC64C:
    ctx->pc = 0x7F1FC64Cu;
    // 7F1FC64C: lfs     f0, 13360(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC64Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13360);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FC650:
    ctx->pc = 0x7F1FC650u;
    // 7F1FC650: fcmpo   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FC650u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], true);

label_7F1FC654:
    ctx->pc = 0x7F1FC654u;
    // 7F1FC654: bc    4, 0, 0x7F1FC668
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC668;
        }
    }

label_7F1FC658:
    ctx->pc = 0x7F1FC658u;
    ctx->downcount -= 2;
    // 7F1FC658: fcmpo   cr0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FC658u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[0], true);

label_7F1FC65C:
    ctx->pc = 0x7F1FC65Cu;
    // 7F1FC65C: bc    4, 0, 0x7F1FC668
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC668;
        }
    }

label_7F1FC660:
    ctx->pc = 0x7F1FC660u;
    ctx->downcount -= 2;
    // 7F1FC660: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1FC664:
    ctx->pc = 0x7F1FC664u;
    // 7F1FC664: b       0x7F1FC764
    {
            goto label_7F1FC764;
    }

label_7F1FC668:
    ctx->pc = 0x7F1FC668u;
    ctx->downcount -= 1;
    // 7F1FC668: bl      0x7F1FC788
    {
            ctx->lr = 0x7F1FC66Cu;
            goto label_7F1FC788;
    }

label_7F1FC66C:
    ctx->pc = 0x7F1FC66Cu;
    ctx->downcount -= 12;
    // 7F1FC66C: rlwinm. r6, r3, 0, 31, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[6];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1FC670:
    ctx->pc = 0x7F1FC670u;
    // 7F1FC670: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FC674:
    ctx->pc = 0x7F1FC674u;
    // 7F1FC674: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F1FC678:
    ctx->pc = 0x7F1FC678u;
    // 7F1FC678: lfd     f1, 13336(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC678u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13336);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FC67C:
    ctx->pc = 0x7F1FC67Cu;
    // 7F1FC67C: addi    r5, r5, -11548
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11548);

label_7F1FC680:
    ctx->pc = 0x7F1FC680u;
    // 7F1FC680: rlwinm r3, r3, 2, 29, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0x00000004u;
    }

label_7F1FC684:
    ctx->pc = 0x7F1FC684u;
    // 7F1FC684: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_7F1FC688:
    ctx->pc = 0x7F1FC688u;
    // 7F1FC688: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F1FC68C:
    ctx->pc = 0x7F1FC68Cu;
    // 7F1FC68C: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F1FC690:
    ctx->pc = 0x7F1FC690u;
    // 7F1FC690: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1FC694:
    ctx->pc = 0x7F1FC694u;
    // 7F1FC694: bc    12, 0, 0x7F1FC6E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC6E4;
        }
    }

label_7F1FC698:
    ctx->pc = 0x7F1FC698u;
    ctx->downcount -= 8;
    // 7F1FC698: lwzx    r0, r5, r3
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[3];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FC69C:
    ctx->pc = 0x7F1FC69Cu;
    // 7F1FC69C: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1FC6A0:
    // 7F1FC6A0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1FC6A4:
    ctx->pc = 0x7F1FC6A4u;
    // 7F1FC6A4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC6A8:
    ctx->pc = 0x7F1FC6A8u;
    // 7F1FC6A8: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC6A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FC6AC:
    ctx->pc = 0x7F1FC6ACu;
    // 7F1FC6AC: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FC6ACu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1FC6B0:
    ctx->pc = 0x7F1FC6B0u;
    // 7F1FC6B0: fcmpo   cr0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1FC6B0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[31], true);

label_7F1FC6B4:
    // 7F1FC6B4: bc    4, 0, 0x7F1FC6D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC6D8;
        }
    }

label_7F1FC6B8:
    ctx->pc = 0x7F1FC6B8u;
    ctx->downcount -= 6;
    // 7F1FC6B8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC6BC:
    ctx->pc = 0x7F1FC6BCu;
    // 7F1FC6BC: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1FC6C0:
    ctx->pc = 0x7F1FC6C0u;
    // 7F1FC6C0: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC6C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FC6C4:
    ctx->pc = 0x7F1FC6C4u;
    // 7F1FC6C4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FC6C4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1FC6C8:
    ctx->pc = 0x7F1FC6C8u;
    // 7F1FC6C8: fcmpo   cr0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1FC6C8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[30], true);

label_7F1FC6CC:
    // 7F1FC6CC: bc    4, 0, 0x7F1FC6D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC6D8;
        }
    }

label_7F1FC6D0:
    ctx->downcount -= 2;
    // 7F1FC6D0: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1FC6D4:
    // 7F1FC6D4: b       0x7F1FC6E4
    {
            goto label_7F1FC6E4;
    }

label_7F1FC6D8:
    ctx->downcount -= 3;
    // 7F1FC6D8: addi    r6, r6, -1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1);

label_7F1FC6DC:
    // 7F1FC6DC: addi    r3, r3, -4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F1FC6E0:
    // 7F1FC6E0: bc    16, 0, 0x7F1FC698
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FC698u;
                return;
            }
            goto label_7F1FC698;
        }
    }

label_7F1FC6E4:
    ctx->pc = 0x7F1FC6E4u;
    ctx->downcount -= 2;
    // 7F1FC6E4: cmpwi   r6, -1
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FC6E8:
    ctx->pc = 0x7F1FC6E8u;
    // 7F1FC6E8: bc    12, 1, 0x7F1FC6F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC6F4;
        }
    }

label_7F1FC6EC:
    ctx->pc = 0x7F1FC6ECu;
    ctx->downcount -= 2;
    // 7F1FC6EC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1FC6F0:
    ctx->pc = 0x7F1FC6F0u;
    // 7F1FC6F0: b       0x7F1FC764
    {
            goto label_7F1FC764;
    }

label_7F1FC6F4:
    ctx->pc = 0x7F1FC6F4u;
    ctx->downcount -= 21;
    // 7F1FC6F4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FC6F8:
    ctx->pc = 0x7F1FC6F8u;
    // 7F1FC6F8: lfs     f1, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC6F8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FC6FC:
    ctx->pc = 0x7F1FC6FCu;
    // 7F1FC6FC: lfs     f0, 13364(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC6FCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13364);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FC700:
    ctx->pc = 0x7F1FC700u;
    // 7F1FC700: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FC700u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F1FC704:
    ctx->pc = 0x7F1FC704u;
    // 7F1FC704: bl      0x7F17D2FC
    {
            ctx->lr = 0x7F1FC708u;
            ctx->pc = 0x7F17D2FCu;
            return;
    }

label_7F1FC708:
    ctx->pc = 0x7F1FC708u;
    ctx->downcount -= 2;
    // 7F1FC708: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FC708u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F1FC70C:
    ctx->pc = 0x7F1FC70Cu;
    // 7F1FC70C: bl      0x7F00FAF4
    {
            ctx->lr = 0x7F1FC710u;
            ctx->pc = 0x7F00FAF4u;
            return;
    }

label_7F1FC710:
    ctx->pc = 0x7F1FC710u;
    ctx->downcount -= 37;
    // 7F1FC710: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FC714:
    ctx->pc = 0x7F1FC714u;
    // 7F1FC714: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1FC718:
    ctx->pc = 0x7F1FC718u;
    // 7F1FC718: lfs     f0, 13376(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC718u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13376);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FC71C:
    ctx->pc = 0x7F1FC71Cu;
    // 7F1FC71C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FC720:
    ctx->pc = 0x7F1FC720u;
    // 7F1FC720: lfs     f4, 13368(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC720u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(13368);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F1FC724:
    ctx->pc = 0x7F1FC724u;
    // 7F1FC724: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FC728:
    ctx->pc = 0x7F1FC728u;
    // 7F1FC728: fmuls   f2, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1FC728u)) return;
    ppc_fmuls(ctx, 2, 0, 31);

label_7F1FC72C:
    ctx->pc = 0x7F1FC72Cu;
    // 7F1FC72C: lfs     f0, 13380(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC72Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13380);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FC730:
    ctx->pc = 0x7F1FC730u;
    // 7F1FC730: fsubs   f1, f4, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FC730u)) return;
    ppc_fsubs(ctx, 1, 4, 1);

label_7F1FC734:
    ctx->pc = 0x7F1FC734u;
    // 7F1FC734: lfs     f3, 13364(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC734u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13364);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1FC738:
    ctx->pc = 0x7F1FC738u;
    // 7F1FC738: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FC73C:
    ctx->pc = 0x7F1FC73Cu;
    // 7F1FC73C: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FC73Cu)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_7F1FC740:
    ctx->pc = 0x7F1FC740u;
    // 7F1FC740: lfs     f2, 13372(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC740u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13372);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1FC744:
    ctx->pc = 0x7F1FC744u;
    // 7F1FC744: addi    r3, r31, 3
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3);

label_7F1FC748:
    ctx->pc = 0x7F1FC748u;
    // 7F1FC748: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FC748u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1FC74C:
    ctx->pc = 0x7F1FC74Cu;
    // 7F1FC74C: fmuls   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FC74Cu)) return;
    ppc_fmuls(ctx, 1, 3, 1);

label_7F1FC750:
    ctx->pc = 0x7F1FC750u;
    // 7F1FC750: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC750u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1FC754:
    ctx->pc = 0x7F1FC754u;
    // 7F1FC754: fsubs   f0, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FC754u)) return;
    ppc_fsubs(ctx, 0, 2, 1);

label_7F1FC758:
    ctx->pc = 0x7F1FC758u;
    // 7F1FC758: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FC75C:
    ctx->pc = 0x7F1FC75Cu;
    // 7F1FC75C: stfs     f0, 0(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC75Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FC760:
    ctx->pc = 0x7F1FC760u;
    // 7F1FC760: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1FC764:
    ctx->pc = 0x7F1FC764u;
    ctx->downcount -= 20;
    // 7F1FC764: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FC764u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1FC764u);
        if (ctx->exception) return;
    }

label_7F1FC768:
    ctx->pc = 0x7F1FC768u;
    // 7F1FC768: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC768u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FC76C:
    ctx->pc = 0x7F1FC76Cu;
    // 7F1FC76C: psq_l   f30, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FC76Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F1FC76Cu);
        if (ctx->exception) return;
    }

label_7F1FC770:
    ctx->pc = 0x7F1FC770u;
    // 7F1FC770: lfd     f30, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC770u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FC774:
    ctx->pc = 0x7F1FC774u;
    // 7F1FC774: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FC778:
    ctx->pc = 0x7F1FC778u;
    // 7F1FC778: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FC77C:
    ctx->pc = 0x7F1FC77Cu;
    // 7F1FC77C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FC780:
    ctx->pc = 0x7F1FC780u;
    // 7F1FC780: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F1FC784:
    ctx->pc = 0x7F1FC784u;
    // 7F1FC784: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FC788:
    ctx->pc = 0x7F1FC788u;
    ctx->downcount -= 13;
    // 7F1FC788: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1FC78C:
    ctx->pc = 0x7F1FC78Cu;
    // 7F1FC78C: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F1FC790:
    ctx->pc = 0x7F1FC790u;
    // 7F1FC790: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F1FC794:
    ctx->pc = 0x7F1FC794u;
    // 7F1FC794: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FC798:
    ctx->pc = 0x7F1FC798u;
    // 7F1FC798: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F1FC79C:
    ctx->pc = 0x7F1FC79Cu;
    // 7F1FC79C: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F1FC7A0:
    ctx->pc = 0x7F1FC7A0u;
    // 7F1FC7A0: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1FC7A4:
    ctx->pc = 0x7F1FC7A4u;
    // 7F1FC7A4: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FC7A8:
    ctx->pc = 0x7F1FC7A8u;
    // 7F1FC7A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FC7AC:
    ctx->pc = 0x7F1FC7ACu;
    ctx->downcount -= 25;
    // 7F1FC7AC: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FC7B0:
    ctx->pc = 0x7F1FC7B0u;
    // 7F1FC7B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FC7B4:
    ctx->pc = 0x7F1FC7B4u;
    // 7F1FC7B4: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC7B8:
    ctx->pc = 0x7F1FC7B8u;
    // 7F1FC7B8: stfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC7B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1FC7BC:
    ctx->pc = 0x7F1FC7BCu;
    // 7F1FC7BC: psq_st   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FC7BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1FC7BCu);
        if (ctx->exception) return;
    }

label_7F1FC7C0:
    ctx->pc = 0x7F1FC7C0u;
    // 7F1FC7C0: stfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC7C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1FC7C4:
    ctx->pc = 0x7F1FC7C4u;
    // 7F1FC7C4: psq_st   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FC7C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F1FC7C4u);
        if (ctx->exception) return;
    }

label_7F1FC7C8:
    ctx->pc = 0x7F1FC7C8u;
    // 7F1FC7C8: stmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FC7CC:
    ctx->pc = 0x7F1FC7CCu;
    // 7F1FC7CC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1FC7D0:
    ctx->pc = 0x7F1FC7D0u;
    // 7F1FC7D0: lfs     f1, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC7D0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FC7D4:
    ctx->pc = 0x7F1FC7D4u;
    // 7F1FC7D4: lfs     f0, 13328(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC7D4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(13328);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FC7D8:
    ctx->pc = 0x7F1FC7D8u;
    // 7F1FC7D8: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FC7DC:
    ctx->pc = 0x7F1FC7DCu;
    // 7F1FC7DC: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FC7E0:
    ctx->pc = 0x7F1FC7E0u;
    // 7F1FC7E0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FC7E0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1FC7E4:
    ctx->pc = 0x7F1FC7E4u;
    // 7F1FC7E4: bc    4, 0, 0x7F1FC7FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC7FC;
        }
    }

label_7F1FC7E8:
    ctx->pc = 0x7F1FC7E8u;
    ctx->downcount -= 5;
    // 7F1FC7E8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FC7EC:
    ctx->pc = 0x7F1FC7ECu;
    // 7F1FC7EC: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F1FC7F0:
    ctx->pc = 0x7F1FC7F0u;
    // 7F1FC7F0: lfs     f0, 13352(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC7F0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13352);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FC7F4:
    ctx->pc = 0x7F1FC7F4u;
    // 7F1FC7F4: fadds   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FC7F4u)) return;
    ppc_fadds(ctx, 31, 0, 1);

label_7F1FC7F8:
    ctx->pc = 0x7F1FC7F8u;
    // 7F1FC7F8: b       0x7F1FC80C
    {
            goto label_7F1FC80C;
    }

label_7F1FC7FC:
    ctx->pc = 0x7F1FC7FCu;
    ctx->downcount -= 4;
    // 7F1FC7FC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FC800:
    ctx->pc = 0x7F1FC800u;
    // 7F1FC800: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_7F1FC804:
    ctx->pc = 0x7F1FC804u;
    // 7F1FC804: lfs     f0, 13352(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC804u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13352);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FC808:
    ctx->pc = 0x7F1FC808u;
    // 7F1FC808: fsubs   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FC808u)) return;
    ppc_fsubs(ctx, 31, 0, 1);

label_7F1FC80C:
    ctx->pc = 0x7F1FC80Cu;
    ctx->downcount -= 5;
    // 7F1FC80C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FC810:
    ctx->pc = 0x7F1FC810u;
    // 7F1FC810: lfs     f1, 4(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC810u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FC814:
    ctx->pc = 0x7F1FC814u;
    // 7F1FC814: lfs     f0, 13328(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC814u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13328);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FC818:
    ctx->pc = 0x7F1FC818u;
    // 7F1FC818: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FC818u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1FC81C:
    ctx->pc = 0x7F1FC81Cu;
    // 7F1FC81C: bc    4, 0, 0x7F1FC834
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC834;
        }
    }

label_7F1FC820:
    ctx->pc = 0x7F1FC820u;
    ctx->downcount -= 5;
    // 7F1FC820: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FC824:
    ctx->pc = 0x7F1FC824u;
    // 7F1FC824: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F1FC828:
    ctx->pc = 0x7F1FC828u;
    // 7F1FC828: lfs     f0, 13356(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC828u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13356);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FC82C:
    ctx->pc = 0x7F1FC82Cu;
    // 7F1FC82C: fadds   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FC82Cu)) return;
    ppc_fadds(ctx, 30, 0, 1);

label_7F1FC830:
    ctx->pc = 0x7F1FC830u;
    // 7F1FC830: b       0x7F1FC844
    {
            goto label_7F1FC844;
    }

label_7F1FC834:
    ctx->pc = 0x7F1FC834u;
    ctx->downcount -= 4;
    // 7F1FC834: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FC838:
    ctx->pc = 0x7F1FC838u;
    // 7F1FC838: li      r29, 1
    ctx->gpr[29] = (u32)(s32)(1);

label_7F1FC83C:
    ctx->pc = 0x7F1FC83Cu;
    // 7F1FC83C: lfs     f0, 13356(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC83Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13356);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FC840:
    ctx->pc = 0x7F1FC840u;
    // 7F1FC840: fsubs   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FC840u)) return;
    ppc_fsubs(ctx, 30, 0, 1);

label_7F1FC844:
    ctx->pc = 0x7F1FC844u;
    ctx->downcount -= 4;
    // 7F1FC844: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FC848:
    ctx->pc = 0x7F1FC848u;
    // 7F1FC848: lfs     f0, 13360(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC848u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13360);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FC84C:
    ctx->pc = 0x7F1FC84Cu;
    // 7F1FC84C: fcmpo   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FC84Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], true);

label_7F1FC850:
    ctx->pc = 0x7F1FC850u;
    // 7F1FC850: bc    4, 0, 0x7F1FC864
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC864;
        }
    }

label_7F1FC854:
    ctx->pc = 0x7F1FC854u;
    ctx->downcount -= 2;
    // 7F1FC854: fcmpo   cr0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FC854u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[0], true);

label_7F1FC858:
    ctx->pc = 0x7F1FC858u;
    // 7F1FC858: bc    4, 0, 0x7F1FC864
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC864;
        }
    }

label_7F1FC85C:
    ctx->pc = 0x7F1FC85Cu;
    ctx->downcount -= 2;
    // 7F1FC85C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1FC860:
    ctx->pc = 0x7F1FC860u;
    // 7F1FC860: b       0x7F1FCB00
    {
            goto label_7F1FCB00;
    }

label_7F1FC864:
    ctx->pc = 0x7F1FC864u;
    ctx->downcount -= 6;
    // 7F1FC864: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F1FC868:
    ctx->pc = 0x7F1FC868u;
    // 7F1FC868: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F1FC86C:
    ctx->pc = 0x7F1FC86Cu;
    // 7F1FC86C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FC870:
    ctx->pc = 0x7F1FC870u;
    // 7F1FC870: stw     r0, -11552(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11552);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC874:
    ctx->pc = 0x7F1FC874u;
    // 7F1FC874: stw     r0, -11556(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11556);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC878:
    ctx->pc = 0x7F1FC878u;
    // 7F1FC878: bl      0x7F1FC788
    {
            ctx->lr = 0x7F1FC87Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FC788u;
                return;
            }
            goto label_7F1FC788;
    }

label_7F1FC87C:
    ctx->pc = 0x7F1FC87Cu;
    ctx->downcount -= 58;
    // 7F1FC87C: li      r6, 6
    ctx->gpr[6] = (u32)(s32)(6);

label_7F1FC880:
    ctx->pc = 0x7F1FC880u;
    // 7F1FC880: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FC884:
    ctx->pc = 0x7F1FC884u;
    // 7F1FC884: divwu   r0, r3, r6
    {
        u32 divisor = ctx->gpr[6];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F1FC888:
    ctx->pc = 0x7F1FC888u;
    // 7F1FC888: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F1FC88C:
    ctx->pc = 0x7F1FC88Cu;
    // 7F1FC88C: lfd     f1, 13336(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC88Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13336);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FC890:
    ctx->pc = 0x7F1FC890u;
    // 7F1FC890: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F1FC894:
    ctx->pc = 0x7F1FC894u;
    // 7F1FC894: addi    r5, r5, -11460
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11460);

label_7F1FC898:
    ctx->pc = 0x7F1FC898u;
    // 7F1FC898: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F1FC89C:
    ctx->pc = 0x7F1FC89Cu;
    // 7F1FC89C: mullw   r0, r0, r6
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[0] = (u32)product;
    }

label_7F1FC8A0:
    ctx->pc = 0x7F1FC8A0u;
    // 7F1FC8A0: subf.   r6, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[6] = res;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[6];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1FC8A4:
    ctx->pc = 0x7F1FC8A4u;
    // 7F1FC8A4: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_7F1FC8A8:
    ctx->pc = 0x7F1FC8A8u;
    // 7F1FC8A8: rlwinm r3, r6, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[6], 2u) & 0xFFFFFFFCu;
    }

label_7F1FC8AC:
    ctx->pc = 0x7F1FC8ACu;
    // 7F1FC8AC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1FC8B0:
    ctx->pc = 0x7F1FC8B0u;
    // 7F1FC8B0: bc    12, 0, 0x7F1FC900
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC900;
        }
    }

label_7F1FC8B4:
    ctx->pc = 0x7F1FC8B4u;
    ctx->downcount -= 8;
    // 7F1FC8B4: lwzx    r0, r5, r3
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[3];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FC8B8:
    ctx->pc = 0x7F1FC8B8u;
    // 7F1FC8B8: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1FC8BC:
    // 7F1FC8BC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1FC8C0:
    ctx->pc = 0x7F1FC8C0u;
    // 7F1FC8C0: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC8C4:
    ctx->pc = 0x7F1FC8C4u;
    // 7F1FC8C4: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC8C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FC8C8:
    ctx->pc = 0x7F1FC8C8u;
    // 7F1FC8C8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FC8C8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1FC8CC:
    ctx->pc = 0x7F1FC8CCu;
    // 7F1FC8CC: fcmpo   cr0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1FC8CCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[31], true);

label_7F1FC8D0:
    // 7F1FC8D0: bc    4, 0, 0x7F1FC8F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC8F4;
        }
    }

label_7F1FC8D4:
    ctx->pc = 0x7F1FC8D4u;
    ctx->downcount -= 6;
    // 7F1FC8D4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC8D8:
    ctx->pc = 0x7F1FC8D8u;
    // 7F1FC8D8: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1FC8DC:
    ctx->pc = 0x7F1FC8DCu;
    // 7F1FC8DC: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC8DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FC8E0:
    ctx->pc = 0x7F1FC8E0u;
    // 7F1FC8E0: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FC8E0u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1FC8E4:
    ctx->pc = 0x7F1FC8E4u;
    // 7F1FC8E4: fcmpo   cr0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1FC8E4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[30], true);

label_7F1FC8E8:
    // 7F1FC8E8: bc    4, 0, 0x7F1FC8F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC8F4;
        }
    }

label_7F1FC8EC:
    ctx->downcount -= 2;
    // 7F1FC8EC: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1FC8F0:
    // 7F1FC8F0: b       0x7F1FC900
    {
            goto label_7F1FC900;
    }

label_7F1FC8F4:
    ctx->downcount -= 3;
    // 7F1FC8F4: addi    r6, r6, -1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1);

label_7F1FC8F8:
    // 7F1FC8F8: addi    r3, r3, -4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F1FC8FC:
    // 7F1FC8FC: bc    16, 0, 0x7F1FC8B4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FC8B4u;
                return;
            }
            goto label_7F1FC8B4;
        }
    }

label_7F1FC900:
    ctx->pc = 0x7F1FC900u;
    ctx->downcount -= 2;
    // 7F1FC900: cmpwi   r6, -1
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FC904:
    ctx->pc = 0x7F1FC904u;
    // 7F1FC904: bc    12, 1, 0x7F1FCA90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCA90;
        }
    }

label_7F1FC908:
    ctx->pc = 0x7F1FC908u;
    ctx->downcount -= 5;
    // 7F1FC908: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F1FC90C:
    ctx->pc = 0x7F1FC90Cu;
    // 7F1FC90C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F1FC910:
    ctx->pc = 0x7F1FC910u;
    // 7F1FC910: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_7F1FC914:
    ctx->pc = 0x7F1FC914u;
    // 7F1FC914: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1FC918:
    ctx->pc = 0x7F1FC918u;
    ctx->downcount -= 2;
    // 7F1FC918: fcmpo   cr0, f31, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1FC918u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[30], true);

label_7F1FC91C:
    // 7F1FC91C: bc    4, 0, 0x7F1FC9E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC9E0;
        }
    }

label_7F1FC920:
    ctx->downcount -= 14;
    // 7F1FC920: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F1FC924:
    // 7F1FC924: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1FC928:
    // 7F1FC928: addi    r6, r5, -11520
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-11520);

label_7F1FC92C:
    // 7F1FC92C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1FC930:
    ctx->pc = 0x7F1FC930u;
    // 7F1FC930: lwzx    r7, r6, r4
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[4];
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1FC934:
    // 7F1FC934: addi    r6, r5, 13336
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(13336);

label_7F1FC938:
    ctx->pc = 0x7F1FC938u;
    // 7F1FC938: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC93C:
    // 7F1FC93C: xoris   r5, r7, 0x8000
    ctx->gpr[5] = ctx->gpr[7] ^ (0x8000u << 16);

label_7F1FC940:
    ctx->pc = 0x7F1FC940u;
    // 7F1FC940: lfd     f3, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC940u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FC944:
    ctx->pc = 0x7F1FC944u;
    // 7F1FC944: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1FC948:
    ctx->pc = 0x7F1FC948u;
    // 7F1FC948: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC948u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FC94C:
    ctx->pc = 0x7F1FC94Cu;
    // 7F1FC94C: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1FC94Cu)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F1FC950:
    ctx->pc = 0x7F1FC950u;
    // 7F1FC950: fcmpo   cr0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1FC950u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[31], true);

label_7F1FC954:
    // 7F1FC954: bc    4, 0, 0x7F1FCA70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCA70;
        }
    }

label_7F1FC958:
    ctx->downcount -= 4;
    // 7F1FC958: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F1FC95C:
    // 7F1FC95C: cmpwi   r30, 0
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

label_7F1FC960:
    ctx->pc = 0x7F1FC960u;
    // 7F1FC960: stw     r30, -11552(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11552);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1FC964:
    // 7F1FC964: bc    4, 2, 0x7F1FC9A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FC9A4;
        }
    }

label_7F1FC968:
    ctx->pc = 0x7F1FC968u;
    ctx->downcount -= 15;
    // 7F1FC968: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1FC96C:
    // 7F1FC96C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FC970:
    // 7F1FC970: addi    r5, r4, 13384
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(13384);

label_7F1FC974:
    ctx->pc = 0x7F1FC974u;
    // 7F1FC974: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC978:
    // 7F1FC978: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FC97C:
    ctx->pc = 0x7F1FC97Cu;
    // 7F1FC97C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC97Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1FC980:
    ctx->pc = 0x7F1FC980u;
    // 7F1FC980: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC980u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FC984:
    ctx->pc = 0x7F1FC984u;
    // 7F1FC984: lfs     f0, 13388(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC984u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13388);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FC988:
    ctx->pc = 0x7F1FC988u;
    // 7F1FC988: fsubs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1FC988u)) return;
    ppc_fsubs(ctx, 1, 1, 3);

label_7F1FC98C:
    ctx->pc = 0x7F1FC98Cu;
    // 7F1FC98C: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FC98Cu)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F1FC990:
    ctx->pc = 0x7F1FC990u;
    // 7F1FC990: stfs     f1, 8(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC990u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FC994:
    ctx->pc = 0x7F1FC994u;
    // 7F1FC994: lfs     f1, 8(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC994u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FC998:
    ctx->pc = 0x7F1FC998u;
    // 7F1FC998: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FC998u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1FC99C:
    ctx->pc = 0x7F1FC99Cu;
    // 7F1FC99C: stfs     f0, 8(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC99Cu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FC9A0:
    // 7F1FC9A0: b       0x7F1FCA7C
    {
            goto label_7F1FCA7C;
    }

label_7F1FC9A4:
    ctx->pc = 0x7F1FC9A4u;
    ctx->downcount -= 15;
    // 7F1FC9A4: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1FC9A8:
    // 7F1FC9A8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FC9AC:
    // 7F1FC9AC: addi    r5, r4, 13352
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(13352);

label_7F1FC9B0:
    ctx->pc = 0x7F1FC9B0u;
    // 7F1FC9B0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC9B4:
    // 7F1FC9B4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FC9B8:
    ctx->pc = 0x7F1FC9B8u;
    // 7F1FC9B8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC9B8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1FC9BC:
    ctx->pc = 0x7F1FC9BCu;
    // 7F1FC9BC: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC9BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FC9C0:
    ctx->pc = 0x7F1FC9C0u;
    // 7F1FC9C0: lfs     f0, 13388(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC9C0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13388);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FC9C4:
    ctx->pc = 0x7F1FC9C4u;
    // 7F1FC9C4: fsubs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1FC9C4u)) return;
    ppc_fsubs(ctx, 1, 1, 3);

label_7F1FC9C8:
    ctx->pc = 0x7F1FC9C8u;
    // 7F1FC9C8: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FC9C8u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F1FC9CC:
    ctx->pc = 0x7F1FC9CCu;
    // 7F1FC9CC: stfs     f1, 8(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC9CCu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FC9D0:
    ctx->pc = 0x7F1FC9D0u;
    // 7F1FC9D0: lfs     f1, 8(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC9D0u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FC9D4:
    ctx->pc = 0x7F1FC9D4u;
    // 7F1FC9D4: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FC9D4u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F1FC9D8:
    ctx->pc = 0x7F1FC9D8u;
    // 7F1FC9D8: stfs     f0, 8(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F1FC9D8u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FC9DC:
    // 7F1FC9DC: b       0x7F1FCA7C
    {
            goto label_7F1FCA7C;
    }

label_7F1FC9E0:
    ctx->downcount -= 14;
    // 7F1FC9E0: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F1FC9E4:
    // 7F1FC9E4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1FC9E8:
    // 7F1FC9E8: addi    r6, r5, -11520
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-11520);

label_7F1FC9EC:
    // 7F1FC9EC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1FC9F0:
    ctx->pc = 0x7F1FC9F0u;
    // 7F1FC9F0: lwzx    r7, r6, r4
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[4];
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1FC9F4:
    // 7F1FC9F4: addi    r6, r5, 13336
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(13336);

label_7F1FC9F8:
    ctx->pc = 0x7F1FC9F8u;
    // 7F1FC9F8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FC9FC:
    // 7F1FC9FC: xoris   r5, r7, 0x8000
    ctx->gpr[5] = ctx->gpr[7] ^ (0x8000u << 16);

label_7F1FCA00:
    ctx->pc = 0x7F1FCA00u;
    // 7F1FCA00: lfd     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCA00u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FCA04:
    ctx->pc = 0x7F1FCA04u;
    // 7F1FCA04: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1FCA08:
    ctx->pc = 0x7F1FCA08u;
    // 7F1FCA08: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCA08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FCA0C:
    ctx->pc = 0x7F1FCA0Cu;
    // 7F1FCA0C: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1FCA0Cu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1FCA10:
    ctx->pc = 0x7F1FCA10u;
    // 7F1FCA10: fcmpo   cr0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1FCA10u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[30], true);

label_7F1FCA14:
    // 7F1FCA14: bc    4, 0, 0x7F1FCA70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCA70;
        }
    }

label_7F1FCA18:
    ctx->downcount -= 4;
    // 7F1FCA18: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F1FCA1C:
    // 7F1FCA1C: cmpwi   r29, 0
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

label_7F1FCA20:
    ctx->pc = 0x7F1FCA20u;
    // 7F1FCA20: stw     r29, -11556(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11556);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F1FCA24:
    // 7F1FCA24: bc    4, 2, 0x7F1FCA4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCA4C;
        }
    }

label_7F1FCA28:
    ctx->pc = 0x7F1FCA28u;
    ctx->downcount -= 9;
    // 7F1FCA28: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1FCA2C:
    // 7F1FCA2C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FCA30:
    ctx->pc = 0x7F1FCA30u;
    // 7F1FCA30: lfs     f1, 13392(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCA30u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13392);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FCA34:
    ctx->pc = 0x7F1FCA34u;
    // 7F1FCA34: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FCA38:
    ctx->pc = 0x7F1FCA38u;
    // 7F1FCA38: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCA38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FCA3C:
    ctx->pc = 0x7F1FCA3Cu;
    // 7F1FCA3C: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1FCA3Cu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1FCA40:
    ctx->pc = 0x7F1FCA40u;
    // 7F1FCA40: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FCA40u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1FCA44:
    ctx->pc = 0x7F1FCA44u;
    // 7F1FCA44: stfs     f0, 4(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCA44u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FCA48:
    // 7F1FCA48: b       0x7F1FCA7C
    {
            goto label_7F1FCA7C;
    }

label_7F1FCA4C:
    ctx->pc = 0x7F1FCA4Cu;
    ctx->downcount -= 9;
    // 7F1FCA4C: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1FCA50:
    // 7F1FCA50: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FCA54:
    ctx->pc = 0x7F1FCA54u;
    // 7F1FCA54: lfs     f1, 13356(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCA54u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13356);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FCA58:
    ctx->pc = 0x7F1FCA58u;
    // 7F1FCA58: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FCA5C:
    ctx->pc = 0x7F1FCA5Cu;
    // 7F1FCA5C: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCA5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FCA60:
    ctx->pc = 0x7F1FCA60u;
    // 7F1FCA60: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1FCA60u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1FCA64:
    ctx->pc = 0x7F1FCA64u;
    // 7F1FCA64: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FCA64u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F1FCA68:
    ctx->pc = 0x7F1FCA68u;
    // 7F1FCA68: stfs     f0, 4(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCA68u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FCA6C:
    // 7F1FCA6C: b       0x7F1FCA7C
    {
            goto label_7F1FCA7C;
    }

label_7F1FCA70:
    ctx->downcount -= 3;
    // 7F1FCA70: addi    r3, r3, -1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F1FCA74:
    // 7F1FCA74: addi    r4, r4, -4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F1FCA78:
    // 7F1FCA78: bc    16, 0, 0x7F1FC918
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FC918u;
                return;
            }
            goto label_7F1FC918;
        }
    }

label_7F1FCA7C:
    ctx->pc = 0x7F1FCA7Cu;
    ctx->downcount -= 3;
    // 7F1FCA7C: cmpwi   r3, -1
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

label_7F1FCA80:
    ctx->pc = 0x7F1FCA80u;
    // 7F1FCA80: addi    r31, r3, 100
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(100);

label_7F1FCA84:
    ctx->pc = 0x7F1FCA84u;
    // 7F1FCA84: bc    12, 1, 0x7F1FCA90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCA90;
        }
    }

label_7F1FCA88:
    ctx->pc = 0x7F1FCA88u;
    ctx->downcount -= 2;
    // 7F1FCA88: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1FCA8C:
    ctx->pc = 0x7F1FCA8Cu;
    // 7F1FCA8C: b       0x7F1FCB00
    {
            goto label_7F1FCB00;
    }

label_7F1FCA90:
    ctx->pc = 0x7F1FCA90u;
    ctx->downcount -= 21;
    // 7F1FCA90: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FCA94:
    ctx->pc = 0x7F1FCA94u;
    // 7F1FCA94: lfs     f1, 8(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCA94u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FCA98:
    ctx->pc = 0x7F1FCA98u;
    // 7F1FCA98: lfs     f0, 13364(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCA98u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13364);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FCA9C:
    ctx->pc = 0x7F1FCA9Cu;
    // 7F1FCA9C: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FCA9Cu)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F1FCAA0:
    ctx->pc = 0x7F1FCAA0u;
    // 7F1FCAA0: bl      0x7F17D2FC
    {
            ctx->lr = 0x7F1FCAA4u;
            ctx->pc = 0x7F17D2FCu;
            return;
    }

label_7F1FCAA4:
    ctx->pc = 0x7F1FCAA4u;
    ctx->downcount -= 2;
    // 7F1FCAA4: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FCAA4u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F1FCAA8:
    ctx->pc = 0x7F1FCAA8u;
    // 7F1FCAA8: bl      0x7F00FAF4
    {
            ctx->lr = 0x7F1FCAACu;
            ctx->pc = 0x7F00FAF4u;
            return;
    }

label_7F1FCAAC:
    ctx->pc = 0x7F1FCAACu;
    ctx->downcount -= 37;
    // 7F1FCAAC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FCAB0:
    ctx->pc = 0x7F1FCAB0u;
    // 7F1FCAB0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1FCAB4:
    ctx->pc = 0x7F1FCAB4u;
    // 7F1FCAB4: lfs     f0, 13376(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCAB4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13376);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FCAB8:
    ctx->pc = 0x7F1FCAB8u;
    // 7F1FCAB8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FCABC:
    ctx->pc = 0x7F1FCABCu;
    // 7F1FCABC: lfs     f4, 13368(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCABCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(13368);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F1FCAC0:
    ctx->pc = 0x7F1FCAC0u;
    // 7F1FCAC0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FCAC4:
    ctx->pc = 0x7F1FCAC4u;
    // 7F1FCAC4: fmuls   f2, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1FCAC4u)) return;
    ppc_fmuls(ctx, 2, 0, 31);

label_7F1FCAC8:
    ctx->pc = 0x7F1FCAC8u;
    // 7F1FCAC8: lfs     f0, 13380(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCAC8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13380);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FCACC:
    ctx->pc = 0x7F1FCACCu;
    // 7F1FCACC: fsubs   f1, f4, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FCACCu)) return;
    ppc_fsubs(ctx, 1, 4, 1);

label_7F1FCAD0:
    ctx->pc = 0x7F1FCAD0u;
    // 7F1FCAD0: lfs     f3, 13364(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCAD0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13364);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1FCAD4:
    ctx->pc = 0x7F1FCAD4u;
    // 7F1FCAD4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FCAD8:
    ctx->pc = 0x7F1FCAD8u;
    // 7F1FCAD8: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FCAD8u)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_7F1FCADC:
    ctx->pc = 0x7F1FCADCu;
    // 7F1FCADC: lfs     f2, 13396(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCADCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13396);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1FCAE0:
    ctx->pc = 0x7F1FCAE0u;
    // 7F1FCAE0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FCAE4:
    ctx->pc = 0x7F1FCAE4u;
    // 7F1FCAE4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FCAE4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1FCAE8:
    ctx->pc = 0x7F1FCAE8u;
    // 7F1FCAE8: fmuls   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FCAE8u)) return;
    ppc_fmuls(ctx, 1, 3, 1);

label_7F1FCAEC:
    ctx->pc = 0x7F1FCAECu;
    // 7F1FCAEC: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCAECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1FCAF0:
    ctx->pc = 0x7F1FCAF0u;
    // 7F1FCAF0: fsubs   f0, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FCAF0u)) return;
    ppc_fsubs(ctx, 0, 2, 1);

label_7F1FCAF4:
    ctx->pc = 0x7F1FCAF4u;
    // 7F1FCAF4: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FCAF8:
    ctx->pc = 0x7F1FCAF8u;
    // 7F1FCAF8: stfs     f0, 0(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCAF8u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FCAFC:
    ctx->pc = 0x7F1FCAFCu;
    // 7F1FCAFC: sth     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1FCB00:
    ctx->pc = 0x7F1FCB00u;
    ctx->downcount -= 20;
    // 7F1FCB00: psq_l   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FCB00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1FCB00u);
        if (ctx->exception) return;
    }

label_7F1FCB04:
    ctx->pc = 0x7F1FCB04u;
    // 7F1FCB04: lfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCB04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FCB08:
    ctx->pc = 0x7F1FCB08u;
    // 7F1FCB08: psq_l   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FCB08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F1FCB08u);
        if (ctx->exception) return;
    }

label_7F1FCB0C:
    ctx->pc = 0x7F1FCB0Cu;
    // 7F1FCB0C: lfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCB0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FCB10:
    ctx->pc = 0x7F1FCB10u;
    // 7F1FCB10: lmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FCB14:
    ctx->pc = 0x7F1FCB14u;
    // 7F1FCB14: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FCB18:
    ctx->pc = 0x7F1FCB18u;
    // 7F1FCB18: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FCB1C:
    ctx->pc = 0x7F1FCB1Cu;
    // 7F1FCB1C: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1FCB20:
    ctx->pc = 0x7F1FCB20u;
    // 7F1FCB20: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FCB24:
    ctx->pc = 0x7F1FCB24u;
    ctx->downcount -= 20;
    // 7F1FCB24: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FCB28:
    ctx->pc = 0x7F1FCB28u;
    // 7F1FCB28: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FCB2C:
    ctx->pc = 0x7F1FCB2Cu;
    // 7F1FCB2C: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F1FCB30:
    ctx->pc = 0x7F1FCB30u;
    // 7F1FCB30: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FCB34:
    ctx->pc = 0x7F1FCB34u;
    // 7F1FCB34: stmw     r25, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FCB38:
    ctx->pc = 0x7F1FCB38u;
    // 7F1FCB38: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FCB3C:
    ctx->pc = 0x7F1FCB3Cu;
    // 7F1FCB3C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FCB40:
    ctx->pc = 0x7F1FCB40u;
    // 7F1FCB40: lwz     r4, -11560(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-11560);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FCB44:
    ctx->pc = 0x7F1FCB44u;
    // 7F1FCB44: cmplwi  r4, 0x0000
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

label_7F1FCB48:
    ctx->pc = 0x7F1FCB48u;
    // 7F1FCB48: bc    12, 2, 0x7F1FCD5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCD5C;
        }
    }

label_7F1FCB4C:
    ctx->pc = 0x7F1FCB4Cu;
    ctx->downcount -= 6;
    // 7F1FCB4C: addi    r26, r4, 4560
    ctx->gpr[26] = ctx->gpr[4] + (u32)(s32)(4560);

label_7F1FCB50:
    ctx->pc = 0x7F1FCB50u;
    // 7F1FCB50: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_7F1FCB54:
    ctx->pc = 0x7F1FCB54u;
    // 7F1FCB54: or   r6, r26, r26
    {
        ctx->gpr[6] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F1FCB58:
    ctx->pc = 0x7F1FCB58u;
    // 7F1FCB58: li      r31, -1
    ctx->gpr[31] = (u32)(s32)(-1);

label_7F1FCB5C:
    ctx->pc = 0x7F1FCB5Cu;
    // 7F1FCB5C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1FCB60:
    ctx->pc = 0x7F1FCB60u;
    ctx->downcount -= 3;
    // 7F1FCB60: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1FCB64:
    // 7F1FCB64: cmpwi   r5, -1
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FCB68:
    // 7F1FCB68: bc    12, 2, 0x7F1FCB88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCB88;
        }
    }

label_7F1FCB6C:
    ctx->downcount -= 5;
    // 7F1FCB6C: rlwinm r3, r5, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_7F1FCB70:
    // 7F1FCB70: addi    r0, r3, 48
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(48);

label_7F1FCB74:
    ctx->pc = 0x7F1FCB74u;
    // 7F1FCB74: lwzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FCB78:
    // 7F1FCB78: cmplw   r0, r28
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[28]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FCB7C:
    // 7F1FCB7C: bc    4, 2, 0x7F1FCB88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCB88;
        }
    }

label_7F1FCB80:
    ctx->downcount -= 2;
    // 7F1FCB80: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1FCB84:
    // 7F1FCB84: b       0x7F1FCB90
    {
            goto label_7F1FCB90;
    }

label_7F1FCB88:
    ctx->downcount -= 2;
    // 7F1FCB88: addi    r6, r6, 4
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4);

label_7F1FCB8C:
    // 7F1FCB8C: bc    16, 0, 0x7F1FCB60
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FCB60u;
                return;
            }
            goto label_7F1FCB60;
        }
    }

label_7F1FCB90:
    ctx->pc = 0x7F1FCB90u;
    ctx->downcount -= 2;
    // 7F1FCB90: cmpwi   r31, -1
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

label_7F1FCB94:
    ctx->pc = 0x7F1FCB94u;
    // 7F1FCB94: bc    12, 2, 0x7F1FCBCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCBCC;
        }
    }

label_7F1FCB98:
    ctx->pc = 0x7F1FCB98u;
    ctx->downcount -= 3;
    // 7F1FCB98: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FCB9C:
    ctx->pc = 0x7F1FCB9Cu;
    // 7F1FCB9C: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F1FCBA0:
    ctx->pc = 0x7F1FCBA0u;
    // 7F1FCBA0: addi    r27, r3, -11560
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(-11560);

label_7F1FCBA4:
    ctx->pc = 0x7F1FCBA4u;
    ctx->downcount -= 3;
    // 7F1FCBA4: lwz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FCBA8:
    // 7F1FCBA8: cmpw    r0, r31
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

label_7F1FCBAC:
    // 7F1FCBAC: bc    4, 2, 0x7F1FCBBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCBBC;
        }
    }

label_7F1FCBB0:
    ctx->pc = 0x7F1FCBB0u;
    ctx->downcount -= 3;
    // 7F1FCBB0: lwz     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FCBB4:
    // 7F1FCBB4: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F1FCBB8:
    // 7F1FCBB8: bl      0x7F1FBFF8
    {
            ctx->lr = 0x7F1FCBBCu;
            ctx->pc = 0x7F1FBFF8u;
            return;
    }

label_7F1FCBBC:
    ctx->downcount -= 4;
    // 7F1FCBBC: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F1FCBC0:
    // 7F1FCBC0: addi    r26, r26, 4
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(4);

label_7F1FCBC4:
    // 7F1FCBC4: cmpwi   r25, 64
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(64);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FCBC8:
    // 7F1FCBC8: bc    12, 0, 0x7F1FCBA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FCBA4u;
                return;
            }
            goto label_7F1FCBA4;
        }
    }

label_7F1FCBCC:
    ctx->pc = 0x7F1FCBCCu;
    ctx->downcount -= 8;
    // 7F1FCBCC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FCBD0:
    ctx->pc = 0x7F1FCBD0u;
    // 7F1FCBD0: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F1FCBD4:
    ctx->pc = 0x7F1FCBD4u;
    // 7F1FCBD4: lwz     r4, -11560(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11560);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FCBD8:
    ctx->pc = 0x7F1FCBD8u;
    // 7F1FCBD8: li      r30, -1
    ctx->gpr[30] = (u32)(s32)(-1);

label_7F1FCBDC:
    ctx->pc = 0x7F1FCBDCu;
    // 7F1FCBDC: addi    r26, r4, 5424
    ctx->gpr[26] = ctx->gpr[4] + (u32)(s32)(5424);

label_7F1FCBE0:
    ctx->pc = 0x7F1FCBE0u;
    // 7F1FCBE0: or   r6, r26, r26
    {
        ctx->gpr[6] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F1FCBE4:
    ctx->pc = 0x7F1FCBE4u;
    // 7F1FCBE4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1FCBE8:
    ctx->pc = 0x7F1FCBE8u;
    ctx->downcount -= 3;
    // 7F1FCBE8: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1FCBEC:
    // 7F1FCBEC: cmpwi   r5, -1
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FCBF0:
    // 7F1FCBF0: bc    12, 2, 0x7F1FCC10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCC10;
        }
    }

label_7F1FCBF4:
    ctx->downcount -= 5;
    // 7F1FCBF4: rlwinm r3, r5, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_7F1FCBF8:
    // 7F1FCBF8: addi    r0, r3, 48
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(48);

label_7F1FCBFC:
    ctx->pc = 0x7F1FCBFCu;
    // 7F1FCBFC: lwzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FCC00:
    // 7F1FCC00: cmplw   r0, r28
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[28]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FCC04:
    // 7F1FCC04: bc    4, 2, 0x7F1FCC10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCC10;
        }
    }

label_7F1FCC08:
    ctx->downcount -= 2;
    // 7F1FCC08: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1FCC0C:
    // 7F1FCC0C: b       0x7F1FCC18
    {
            goto label_7F1FCC18;
    }

label_7F1FCC10:
    ctx->downcount -= 2;
    // 7F1FCC10: addi    r6, r6, 4
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4);

label_7F1FCC14:
    // 7F1FCC14: bc    16, 0, 0x7F1FCBE8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FCBE8u;
                return;
            }
            goto label_7F1FCBE8;
        }
    }

label_7F1FCC18:
    ctx->pc = 0x7F1FCC18u;
    ctx->downcount -= 2;
    // 7F1FCC18: cmpwi   r30, -1
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FCC1C:
    ctx->pc = 0x7F1FCC1Cu;
    // 7F1FCC1C: bc    12, 2, 0x7F1FCC54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCC54;
        }
    }

label_7F1FCC20:
    ctx->pc = 0x7F1FCC20u;
    ctx->downcount -= 3;
    // 7F1FCC20: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FCC24:
    ctx->pc = 0x7F1FCC24u;
    // 7F1FCC24: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F1FCC28:
    ctx->pc = 0x7F1FCC28u;
    // 7F1FCC28: addi    r27, r3, -11560
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(-11560);

label_7F1FCC2C:
    ctx->pc = 0x7F1FCC2Cu;
    ctx->downcount -= 3;
    // 7F1FCC2C: lwz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FCC30:
    // 7F1FCC30: cmpw    r0, r30
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[30]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FCC34:
    // 7F1FCC34: bc    4, 2, 0x7F1FCC44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCC44;
        }
    }

label_7F1FCC38:
    ctx->pc = 0x7F1FCC38u;
    ctx->downcount -= 3;
    // 7F1FCC38: lwz     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FCC3C:
    // 7F1FCC3C: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F1FCC40:
    // 7F1FCC40: bl      0x7F1FC044
    {
            ctx->lr = 0x7F1FCC44u;
            ctx->pc = 0x7F1FC044u;
            return;
    }

label_7F1FCC44:
    ctx->downcount -= 4;
    // 7F1FCC44: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F1FCC48:
    // 7F1FCC48: addi    r26, r26, 4
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(4);

label_7F1FCC4C:
    // 7F1FCC4C: cmpwi   r25, 16
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FCC50:
    // 7F1FCC50: bc    12, 0, 0x7F1FCC2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FCC2Cu;
                return;
            }
            goto label_7F1FCC2C;
        }
    }

label_7F1FCC54:
    ctx->pc = 0x7F1FCC54u;
    ctx->downcount -= 2;
    // 7F1FCC54: cmpwi   r29, 0
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

label_7F1FCC58:
    ctx->pc = 0x7F1FCC58u;
    // 7F1FCC58: bc    4, 2, 0x7F1FCD14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCD14;
        }
    }

label_7F1FCC5C:
    ctx->pc = 0x7F1FCC5Cu;
    ctx->downcount -= 2;
    // 7F1FCC5C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1FCC60:
    ctx->pc = 0x7F1FCC60u;
    // 7F1FCC60: bl      0x7F1FBD20
    {
            ctx->lr = 0x7F1FCC64u;
            ctx->pc = 0x7F1FBD20u;
            return;
    }

label_7F1FCC64:
    ctx->pc = 0x7F1FCC64u;
    ctx->downcount -= 12;
    // 7F1FCC64: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1FCC68:
    ctx->pc = 0x7F1FCC68u;
    // 7F1FCC68: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FCC6C:
    ctx->pc = 0x7F1FCC6Cu;
    // 7F1FCC6C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FCC70:
    ctx->pc = 0x7F1FCC70u;
    // 7F1FCC70: lfs     f2, 13400(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCC70u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(13400);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1FCC74:
    ctx->pc = 0x7F1FCC74u;
    // 7F1FCC74: lfs     f1, 13404(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCC74u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13404);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FCC78:
    ctx->pc = 0x7F1FCC78u;
    // 7F1FCC78: lfs     f0, 13408(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCC78u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13408);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FCC7C:
    ctx->pc = 0x7F1FCC7Cu;
    // 7F1FCC7C: stfs     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCC7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F1FCC80:
    ctx->pc = 0x7F1FCC80u;
    // 7F1FCC80: stfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCC80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FCC84:
    ctx->pc = 0x7F1FCC84u;
    // 7F1FCC84: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCC84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FCC88:
    ctx->pc = 0x7F1FCC88u;
    // 7F1FCC88: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FCC8C:
    ctx->pc = 0x7F1FCC8Cu;
    // 7F1FCC8C: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F1FCC90:
    ctx->pc = 0x7F1FCC90u;
    // 7F1FCC90: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F1FCC94u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F1FCC94:
    ctx->pc = 0x7F1FCC94u;
    ctx->downcount -= 2;
    // 7F1FCC94: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1FCC98:
    ctx->pc = 0x7F1FCC98u;
    // 7F1FCC98: bl      0x7F3B3134
    {
            ctx->lr = 0x7F1FCC9Cu;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F1FCC9C:
    ctx->pc = 0x7F1FCC9Cu;
    ctx->downcount -= 2;
    // 7F1FCC9C: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1FCCA0:
    ctx->pc = 0x7F1FCCA0u;
    // 7F1FCCA0: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F1FCCA4u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F1FCCA4:
    ctx->pc = 0x7F1FCCA4u;
    ctx->downcount -= 9;
    // 7F1FCCA4: lwz     r5, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1FCCA8:
    ctx->pc = 0x7F1FCCA8u;
    // 7F1FCCA8: lwz     r4, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FCCAC:
    ctx->pc = 0x7F1FCCACu;
    // 7F1FCCAC: lwz     r3, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FCCB0:
    ctx->pc = 0x7F1FCCB0u;
    // 7F1FCCB0: lwz     r0, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FCCB4:
    ctx->pc = 0x7F1FCCB4u;
    // 7F1FCCB4: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1FCCB8:
    ctx->pc = 0x7F1FCCB8u;
    // 7F1FCCB8: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1FCCBC:
    ctx->pc = 0x7F1FCCBCu;
    // 7F1FCCBC: stw     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FCCC0:
    ctx->pc = 0x7F1FCCC0u;
    // 7F1FCCC0: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FCCC4:
    ctx->pc = 0x7F1FCCC4u;
    // 7F1FCCC4: bl      0x7F1FC788
    {
            ctx->lr = 0x7F1FCCC8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FC788u;
                return;
            }
            goto label_7F1FC788;
    }

label_7F1FCCC8:
    ctx->pc = 0x7F1FCCC8u;
    ctx->downcount -= 3;
    // 7F1FCCC8: rlwinm r0, r3, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F1FCCCC:
    ctx->pc = 0x7F1FCCCCu;
    // 7F1FCCCC: sth     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1FCCD0:
    ctx->pc = 0x7F1FCCD0u;
    // 7F1FCCD0: bl      0x7F1FC788
    {
            ctx->lr = 0x7F1FCCD4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FC788u;
                return;
            }
            goto label_7F1FC788;
    }

label_7F1FCCD4:
    ctx->pc = 0x7F1FCCD4u;
    ctx->downcount -= 3;
    // 7F1FCCD4: rlwinm r0, r3, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F1FCCD8:
    ctx->pc = 0x7F1FCCD8u;
    // 7F1FCCD8: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1FCCDC:
    ctx->pc = 0x7F1FCCDCu;
    // 7F1FCCDC: bl      0x7F1FC788
    {
            ctx->lr = 0x7F1FCCE0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FC788u;
                return;
            }
            goto label_7F1FC788;
    }

label_7F1FCCE0:
    ctx->pc = 0x7F1FCCE0u;
    ctx->downcount -= 13;
    // 7F1FCCE0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FCCE4:
    ctx->pc = 0x7F1FCCE4u;
    // 7F1FCCE4: rlwinm r0, r3, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F1FCCE8:
    ctx->pc = 0x7F1FCCE8u;
    // 7F1FCCE8: addi    r3, r4, 13412
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(13412);

label_7F1FCCEC:
    ctx->pc = 0x7F1FCCECu;
    // 7F1FCCEC: lis     r6, 43
    ctx->gpr[6] = ((u32)(s32)(43) << 16);

label_7F1FCCF0:
    ctx->pc = 0x7F1FCCF0u;
    // 7F1FCCF0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1FCCF4:
    ctx->pc = 0x7F1FCCF4u;
    // 7F1FCCF4: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCCF4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FCCF8:
    ctx->pc = 0x7F1FCCF8u;
    // 7F1FCCF8: addi    r5, r4, 12832
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F1FCCFC:
    ctx->pc = 0x7F1FCCFCu;
    // 7F1FCCFC: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1FCD00:
    ctx->pc = 0x7F1FCD00u;
    // 7F1FCD00: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1FCD04:
    ctx->pc = 0x7F1FCD04u;
    // 7F1FCD04: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1FCD08:
    ctx->pc = 0x7F1FCD08u;
    // 7F1FCD08: addi    r6, r6, 26000
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(26000);

label_7F1FCD0C:
    ctx->pc = 0x7F1FCD0Cu;
    // 7F1FCD0C: li      r7, 180
    ctx->gpr[7] = (u32)(s32)(180);

label_7F1FCD10:
    ctx->pc = 0x7F1FCD10u;
    // 7F1FCD10: bl      0x7F1F83C4
    {
            ctx->lr = 0x7F1FCD14u;
            ctx->pc = 0x7F1F83C4u;
            return;
    }

label_7F1FCD14:
    ctx->pc = 0x7F1FCD14u;
    ctx->downcount -= 2;
    // 7F1FCD14: cmpwi   r31, -1
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

label_7F1FCD18:
    ctx->pc = 0x7F1FCD18u;
    // 7F1FCD18: bc    12, 2, 0x7F1FCD38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCD38;
        }
    }

label_7F1FCD1C:
    ctx->pc = 0x7F1FCD1Cu;
    ctx->downcount -= 7;
    // 7F1FCD1C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FCD20:
    ctx->pc = 0x7F1FCD20u;
    // 7F1FCD20: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_7F1FCD24:
    ctx->pc = 0x7F1FCD24u;
    // 7F1FCD24: addi    r3, r3, -11560
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11560);

label_7F1FCD28:
    ctx->pc = 0x7F1FCD28u;
    // 7F1FCD28: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1FCD2C:
    ctx->pc = 0x7F1FCD2Cu;
    // 7F1FCD2C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FCD30:
    ctx->pc = 0x7F1FCD30u;
    // 7F1FCD30: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1FCD34:
    ctx->pc = 0x7F1FCD34u;
    // 7F1FCD34: stw     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1FCD38:
    ctx->pc = 0x7F1FCD38u;
    ctx->downcount -= 2;
    // 7F1FCD38: cmpwi   r30, -1
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FCD3C:
    ctx->pc = 0x7F1FCD3Cu;
    // 7F1FCD3C: bc    12, 2, 0x7F1FCD5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCD5C;
        }
    }

label_7F1FCD40:
    ctx->pc = 0x7F1FCD40u;
    ctx->downcount -= 7;
    // 7F1FCD40: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FCD44:
    ctx->pc = 0x7F1FCD44u;
    // 7F1FCD44: rlwinm r0, r30, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 2u) & 0xFFFFFFFCu;
    }

label_7F1FCD48:
    ctx->pc = 0x7F1FCD48u;
    // 7F1FCD48: addi    r3, r3, -11560
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11560);

label_7F1FCD4C:
    ctx->pc = 0x7F1FCD4Cu;
    // 7F1FCD4C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1FCD50:
    ctx->pc = 0x7F1FCD50u;
    // 7F1FCD50: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FCD54:
    ctx->pc = 0x7F1FCD54u;
    // 7F1FCD54: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1FCD58:
    ctx->pc = 0x7F1FCD58u;
    // 7F1FCD58: stw     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1FCD5C:
    ctx->pc = 0x7F1FCD5Cu;
    ctx->downcount -= 16;
    // 7F1FCD5C: lmw     r25, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FCD60:
    ctx->pc = 0x7F1FCD60u;
    // 7F1FCD60: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FCD64:
    ctx->pc = 0x7F1FCD64u;
    // 7F1FCD64: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FCD68:
    ctx->pc = 0x7F1FCD68u;
    // 7F1FCD68: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F1FCD6C:
    ctx->pc = 0x7F1FCD6Cu;
    // 7F1FCD6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FCD70:
    ctx->pc = 0x7F1FCD70u;
    ctx->downcount -= 19;
    // 7F1FCD70: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FCD74:
    ctx->pc = 0x7F1FCD74u;
    // 7F1FCD74: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FCD78:
    ctx->pc = 0x7F1FCD78u;
    // 7F1FCD78: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F1FCD7C:
    ctx->pc = 0x7F1FCD7Cu;
    // 7F1FCD7C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FCD80:
    ctx->pc = 0x7F1FCD80u;
    // 7F1FCD80: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FCD84:
    ctx->pc = 0x7F1FCD84u;
    // 7F1FCD84: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FCD88:
    ctx->pc = 0x7F1FCD88u;
    // 7F1FCD88: lwz     r6, -11560(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-11560);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1FCD8C:
    ctx->pc = 0x7F1FCD8Cu;
    // 7F1FCD8C: cmplwi  r6, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FCD90:
    ctx->pc = 0x7F1FCD90u;
    // 7F1FCD90: bc    12, 2, 0x7F1FCF64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCF64;
        }
    }

label_7F1FCD94:
    ctx->pc = 0x7F1FCD94u;
    ctx->downcount -= 5;
    // 7F1FCD94: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F1FCD98:
    ctx->pc = 0x7F1FCD98u;
    // 7F1FCD98: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1FCD9C:
    ctx->pc = 0x7F1FCD9Cu;
    // 7F1FCD9C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1FCDA0:
    ctx->pc = 0x7F1FCDA0u;
    // 7F1FCDA0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1FCDA4:
    ctx->downcount -= 4;
    // 7F1FCDA4: addi    r0, r3, 5424
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(5424);

label_7F1FCDA8:
    ctx->pc = 0x7F1FCDA8u;
    // 7F1FCDA8: lwzx    r0, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FCDAC:
    // 7F1FCDAC: cmpwi   r0, -1
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

label_7F1FCDB0:
    // 7F1FCDB0: bc    12, 2, 0x7F1FCDC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCDC0;
        }
    }

label_7F1FCDB4:
    ctx->downcount -= 3;
    // 7F1FCDB4: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F1FCDB8:
    // 7F1FCDB8: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F1FCDBC:
    // 7F1FCDBC: bc    16, 0, 0x7F1FCDA4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FCDA4u;
                return;
            }
            goto label_7F1FCDA4;
        }
    }

label_7F1FCDC0:
    ctx->pc = 0x7F1FCDC0u;
    ctx->downcount -= 2;
    // 7F1FCDC0: cmpwi   r5, 16
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FCDC4:
    ctx->pc = 0x7F1FCDC4u;
    // 7F1FCDC4: bc    12, 2, 0x7F1FCF64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCF64;
        }
    }

label_7F1FCDC8:
    ctx->pc = 0x7F1FCDC8u;
    ctx->downcount -= 8;
    // 7F1FCDC8: addi    r3, r6, 48
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(48);

label_7F1FCDCC:
    ctx->pc = 0x7F1FCDCCu;
    // 7F1FCDCC: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1FCDD0:
    ctx->pc = 0x7F1FCDD0u;
    // 7F1FCDD0: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1FCDD4:
    ctx->pc = 0x7F1FCDD4u;
    // 7F1FCDD4: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F1FCDD8:
    ctx->pc = 0x7F1FCDD8u;
    // 7F1FCDD8: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FCDDC:
    ctx->pc = 0x7F1FCDDCu;
    // 7F1FCDDC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1FCDE0:
    ctx->pc = 0x7F1FCDE0u;
    // 7F1FCDE0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1FCDE4:
    ctx->pc = 0x7F1FCDE4u;
    ctx->downcount -= 3;
    // 7F1FCDE4: lwz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FCDE8:
    // 7F1FCDE8: cmplw   r0, r27
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[27]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FCDEC:
    // 7F1FCDEC: bc    4, 2, 0x7F1FCDF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCDF8;
        }
    }

label_7F1FCDF0:
    ctx->downcount -= 2;
    // 7F1FCDF0: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1FCDF4:
    // 7F1FCDF4: b       0x7F1FCE04
    {
            goto label_7F1FCE04;
    }

label_7F1FCDF8:
    ctx->downcount -= 3;
    // 7F1FCDF8: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_7F1FCDFC:
    // 7F1FCDFC: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F1FCE00:
    // 7F1FCE00: bc    16, 0, 0x7F1FCDE4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FCDE4u;
                return;
            }
            goto label_7F1FCDE4;
        }
    }

label_7F1FCE04:
    ctx->pc = 0x7F1FCE04u;
    ctx->downcount -= 2;
    // 7F1FCE04: cmpwi   r5, 8
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FCE08:
    ctx->pc = 0x7F1FCE08u;
    // 7F1FCE08: bc    4, 2, 0x7F1FCE44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCE44;
        }
    }

label_7F1FCE0C:
    ctx->pc = 0x7F1FCE0Cu;
    ctx->downcount -= 5;
    // 7F1FCE0C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1FCE10:
    ctx->pc = 0x7F1FCE10u;
    // 7F1FCE10: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FCE14:
    ctx->pc = 0x7F1FCE14u;
    // 7F1FCE14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1FCE18:
    ctx->pc = 0x7F1FCE18u;
    // 7F1FCE18: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1FCE1C:
    ctx->pc = 0x7F1FCE1Cu;
    ctx->downcount -= 3;
    // 7F1FCE1C: lwz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FCE20:
    // 7F1FCE20: cmplwi  r0, 0x0000
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

label_7F1FCE24:
    // 7F1FCE24: bc    4, 2, 0x7F1FCE30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCE30;
        }
    }

label_7F1FCE28:
    ctx->downcount -= 2;
    // 7F1FCE28: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FCE2C:
    // 7F1FCE2C: b       0x7F1FCE3C
    {
            goto label_7F1FCE3C;
    }

label_7F1FCE30:
    ctx->downcount -= 3;
    // 7F1FCE30: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_7F1FCE34:
    // 7F1FCE34: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1FCE38:
    // 7F1FCE38: bc    16, 0, 0x7F1FCE1C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FCE1Cu;
                return;
            }
            goto label_7F1FCE1C;
        }
    }

label_7F1FCE3C:
    ctx->pc = 0x7F1FCE3Cu;
    ctx->downcount -= 2;
    // 7F1FCE3C: cmpwi   r3, 8
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FCE40:
    ctx->pc = 0x7F1FCE40u;
    // 7F1FCE40: bc    12, 2, 0x7F1FCF64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCF64;
        }
    }

label_7F1FCE44:
    ctx->pc = 0x7F1FCE44u;
    ctx->downcount -= 10;
    // 7F1FCE44: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FCE48:
    ctx->pc = 0x7F1FCE48u;
    // 7F1FCE48: rlwinm r5, r31, 4, 0, 27
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[31], 4u) & 0xFFFFFFF0u;
    }

label_7F1FCE4C:
    ctx->pc = 0x7F1FCE4Cu;
    // 7F1FCE4C: addi    r29, r5, 4880
    ctx->gpr[29] = ctx->gpr[5] + (u32)(s32)(4880);

label_7F1FCE50:
    ctx->pc = 0x7F1FCE50u;
    // 7F1FCE50: lfs     f0, 13328(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCE50u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13328);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FCE54:
    ctx->pc = 0x7F1FCE54u;
    // 7F1FCE54: add   r29, r6, r29
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_7F1FCE58:
    ctx->pc = 0x7F1FCE58u;
    // 7F1FCE58: cmpwi   r4, 13
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FCE5C:
    ctx->pc = 0x7F1FCE5Cu;
    // 7F1FCE5C: stfs     f0, 0(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCE5Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FCE60:
    ctx->pc = 0x7F1FCE60u;
    // 7F1FCE60: stfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCE60u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FCE64:
    ctx->pc = 0x7F1FCE64u;
    // 7F1FCE64: stfs     f0, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCE64u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FCE68:
    ctx->pc = 0x7F1FCE68u;
    // 7F1FCE68: bc    4, 0, 0x7F1FCE78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCE78;
        }
    }

label_7F1FCE6C:
    ctx->pc = 0x7F1FCE6Cu;
    ctx->downcount -= 2;
    // 7F1FCE6C: cmpwi   r4, -1
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

label_7F1FCE70:
    ctx->pc = 0x7F1FCE70u;
    // 7F1FCE70: bc    12, 2, 0x7F1FCE8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCE8C;
        }
    }

label_7F1FCE74:
    ctx->pc = 0x7F1FCE74u;
    ctx->downcount -= 1;
    // 7F1FCE74: b       0x7F1FCEA4
    {
            goto label_7F1FCEA4;
    }

label_7F1FCE78:
    ctx->pc = 0x7F1FCE78u;
    ctx->downcount -= 2;
    // 7F1FCE78: cmpwi   r4, 21
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(21);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FCE7C:
    ctx->pc = 0x7F1FCE7Cu;
    // 7F1FCE7C: bc    4, 0, 0x7F1FCEA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCEA4;
        }
    }

label_7F1FCE80:
    ctx->pc = 0x7F1FCE80u;
    ctx->downcount -= 2;
    // 7F1FCE80: cmpwi   r4, 17
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(17);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FCE84:
    ctx->pc = 0x7F1FCE84u;
    // 7F1FCE84: bc    4, 0, 0x7F1FCE94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCE94;
        }
    }

label_7F1FCE88:
    ctx->pc = 0x7F1FCE88u;
    ctx->downcount -= 1;
    // 7F1FCE88: b       0x7F1FCE9C
    {
            goto label_7F1FCE9C;
    }

label_7F1FCE8C:
    ctx->pc = 0x7F1FCE8Cu;
    ctx->downcount -= 2;
    // 7F1FCE8C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1FCE90:
    ctx->pc = 0x7F1FCE90u;
    // 7F1FCE90: b       0x7F1FCF28
    {
            goto label_7F1FCF28;
    }

label_7F1FCE94:
    ctx->pc = 0x7F1FCE94u;
    ctx->downcount -= 2;
    // 7F1FCE94: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F1FCE98:
    ctx->pc = 0x7F1FCE98u;
    // 7F1FCE98: b       0x7F1FCF28
    {
            goto label_7F1FCF28;
    }

label_7F1FCE9C:
    ctx->pc = 0x7F1FCE9Cu;
    ctx->downcount -= 2;
    // 7F1FCE9C: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F1FCEA0:
    ctx->pc = 0x7F1FCEA0u;
    // 7F1FCEA0: b       0x7F1FCF28
    {
            goto label_7F1FCF28;
    }

label_7F1FCEA4:
    ctx->pc = 0x7F1FCEA4u;
    ctx->downcount -= 1;
    // 7F1FCEA4: bl      0x7F1FCF78
    {
            ctx->lr = 0x7F1FCEA8u;
            goto label_7F1FCF78;
    }

label_7F1FCEA8:
    ctx->pc = 0x7F1FCEA8u;
    ctx->downcount -= 7;
    // 7F1FCEA8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FCEAC:
    ctx->pc = 0x7F1FCEACu;
    // 7F1FCEAC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FCEB0:
    ctx->pc = 0x7F1FCEB0u;
    // 7F1FCEB0: lfs     f2, 13416(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCEB0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13416);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1FCEB4:
    ctx->pc = 0x7F1FCEB4u;
    // 7F1FCEB4: lfs     f0, 13420(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCEB4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13420);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FCEB8:
    ctx->pc = 0x7F1FCEB8u;
    // 7F1FCEB8: fmsubs f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FCEB8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, true, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1FCEBC:
    ctx->pc = 0x7F1FCEBCu;
    // 7F1FCEBC: stfs     f0, 0(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCEBCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FCEC0:
    ctx->pc = 0x7F1FCEC0u;
    // 7F1FCEC0: bl      0x7F1FCF78
    {
            ctx->lr = 0x7F1FCEC4u;
            goto label_7F1FCF78;
    }

label_7F1FCEC4:
    ctx->pc = 0x7F1FCEC4u;
    ctx->downcount -= 7;
    // 7F1FCEC4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FCEC8:
    ctx->pc = 0x7F1FCEC8u;
    // 7F1FCEC8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FCECC:
    ctx->pc = 0x7F1FCECCu;
    // 7F1FCECC: lfs     f2, 13424(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCECCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13424);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1FCED0:
    ctx->pc = 0x7F1FCED0u;
    // 7F1FCED0: lfs     f0, 13356(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCED0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13356);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FCED4:
    ctx->pc = 0x7F1FCED4u;
    // 7F1FCED4: fmsubs f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FCED4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, true, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1FCED8:
    ctx->pc = 0x7F1FCED8u;
    // 7F1FCED8: stfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCED8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FCEDC:
    ctx->pc = 0x7F1FCEDCu;
    // 7F1FCEDC: bl      0x7F1FCF78
    {
            ctx->lr = 0x7F1FCEE0u;
            goto label_7F1FCF78;
    }

label_7F1FCEE0:
    ctx->pc = 0x7F1FCEE0u;
    ctx->downcount -= 15;
    // 7F1FCEE0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FCEE4:
    ctx->pc = 0x7F1FCEE4u;
    // 7F1FCEE4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FCEE8:
    ctx->pc = 0x7F1FCEE8u;
    // 7F1FCEE8: addi    r5, r3, 13428
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13428);

label_7F1FCEEC:
    ctx->pc = 0x7F1FCEECu;
    // 7F1FCEEC: lfs     f0, 13352(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCEECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13352);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FCEF0:
    ctx->pc = 0x7F1FCEF0u;
    // 7F1FCEF0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCEF0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1FCEF4:
    ctx->pc = 0x7F1FCEF4u;
    // 7F1FCEF4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FCEF8:
    ctx->pc = 0x7F1FCEF8u;
    // 7F1FCEF8: addi    r5, r3, -11560
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-11560);

label_7F1FCEFC:
    ctx->pc = 0x7F1FCEFCu;
    // 7F1FCEFC: rlwinm r4, r31, 1, 0, 30
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[31], 1u) & 0xFFFFFFFEu;
    }

label_7F1FCF00:
    ctx->pc = 0x7F1FCF00u;
    // 7F1FCF00: fmsubs f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FCF00u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, true, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1FCF04:
    ctx->pc = 0x7F1FCF04u;
    // 7F1FCF04: addi    r4, r4, 5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(5392);

label_7F1FCF08:
    ctx->pc = 0x7F1FCF08u;
    // 7F1FCF08: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1FCF0C:
    ctx->pc = 0x7F1FCF0Cu;
    // 7F1FCF0C: stfs     f0, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCF0Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FCF10:
    ctx->pc = 0x7F1FCF10u;
    // 7F1FCF10: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FCF14:
    ctx->pc = 0x7F1FCF14u;
    // 7F1FCF14: add   r4, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F1FCF18:
    ctx->pc = 0x7F1FCF18u;
    // 7F1FCF18: bl      0x7F1FC5C0
    {
            ctx->lr = 0x7F1FCF1Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FC5C0u;
                return;
            }
            goto label_7F1FC5C0;
    }

label_7F1FCF1C:
    ctx->pc = 0x7F1FCF1Cu;
    ctx->downcount -= 3;
    // 7F1FCF1C: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FCF20:
    ctx->pc = 0x7F1FCF20u;
    // 7F1FCF20: cmpwi   r6, -1
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FCF24:
    ctx->pc = 0x7F1FCF24u;
    // 7F1FCF24: bc    12, 2, 0x7F1FCF64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCF64;
        }
    }

label_7F1FCF28:
    ctx->pc = 0x7F1FCF28u;
    ctx->downcount -= 7;
    // 7F1FCF28: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FCF2C:
    ctx->pc = 0x7F1FCF2Cu;
    // 7F1FCF2C: stw     r27, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F1FCF30:
    ctx->pc = 0x7F1FCF30u;
    // 7F1FCF30: addi    r3, r3, -11560
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11560);

label_7F1FCF34:
    ctx->pc = 0x7F1FCF34u;
    // 7F1FCF34: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FCF38:
    ctx->pc = 0x7F1FCF38u;
    // 7F1FCF38: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FCF3C:
    ctx->pc = 0x7F1FCF3Cu;
    // 7F1FCF3C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FCF40:
    ctx->pc = 0x7F1FCF40u;
    // 7F1FCF40: bl      0x7F1FBDC8
    {
            ctx->lr = 0x7F1FCF44u;
            ctx->pc = 0x7F1FBDC8u;
            return;
    }

label_7F1FCF44:
    ctx->pc = 0x7F1FCF44u;
    ctx->downcount -= 2;
    // 7F1FCF44: cmpwi   r3, 0
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

label_7F1FCF48:
    ctx->pc = 0x7F1FCF48u;
    // 7F1FCF48: bc    12, 2, 0x7F1FCF64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FCF64;
        }
    }

label_7F1FCF4C:
    ctx->pc = 0x7F1FCF4Cu;
    ctx->downcount -= 6;
    // 7F1FCF4C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FCF50:
    ctx->pc = 0x7F1FCF50u;
    // 7F1FCF50: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_7F1FCF54:
    ctx->pc = 0x7F1FCF54u;
    // 7F1FCF54: addi    r3, r3, -11560
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11560);

label_7F1FCF58:
    ctx->pc = 0x7F1FCF58u;
    // 7F1FCF58: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FCF5C:
    ctx->pc = 0x7F1FCF5Cu;
    // 7F1FCF5C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1FCF60:
    ctx->pc = 0x7F1FCF60u;
    // 7F1FCF60: stw     r30, 5424(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5424);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1FCF64:
    ctx->pc = 0x7F1FCF64u;
    ctx->downcount -= 16;
    // 7F1FCF64: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FCF68:
    ctx->pc = 0x7F1FCF68u;
    // 7F1FCF68: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FCF6C:
    ctx->pc = 0x7F1FCF6Cu;
    // 7F1FCF6C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FCF70:
    ctx->pc = 0x7F1FCF70u;
    // 7F1FCF70: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1FCF74:
    ctx->pc = 0x7F1FCF74u;
    // 7F1FCF74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FCF78:
    ctx->pc = 0x7F1FCF78u;
    ctx->downcount -= 4;
    // 7F1FCF78: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FCF7C:
    ctx->pc = 0x7F1FCF7Cu;
    // 7F1FCF7C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FCF80:
    ctx->pc = 0x7F1FCF80u;
    // 7F1FCF80: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FCF84:
    ctx->pc = 0x7F1FCF84u;
    // 7F1FCF84: bl      0x7F1FC788
    {
            ctx->lr = 0x7F1FCF88u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FC788u;
                return;
            }
            goto label_7F1FC788;
    }

label_7F1FCF88:
    ctx->pc = 0x7F1FCF88u;
    ctx->downcount -= 31;
    // 7F1FCF88: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1FCF8C:
    ctx->pc = 0x7F1FCF8Cu;
    // 7F1FCF8C: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FCF90:
    ctx->pc = 0x7F1FCF90u;
    // 7F1FCF90: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FCF94:
    ctx->pc = 0x7F1FCF94u;
    // 7F1FCF94: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FCF98:
    ctx->pc = 0x7F1FCF98u;
    // 7F1FCF98: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FCF9C:
    ctx->pc = 0x7F1FCF9Cu;
    // 7F1FCF9C: lfd     f2, 13440(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCF9Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13440);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FCFA0:
    ctx->pc = 0x7F1FCFA0u;
    // 7F1FCFA0: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCFA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FCFA4:
    ctx->pc = 0x7F1FCFA4u;
    // 7F1FCFA4: lfs     f0, 13432(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FCFA4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13432);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FCFA8:
    ctx->pc = 0x7F1FCFA8u;
    // 7F1FCFA8: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1FCFA8u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1FCFAC:
    ctx->pc = 0x7F1FCFACu;
    // 7F1FCFAC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FCFB0:
    ctx->pc = 0x7F1FCFB0u;
    // 7F1FCFB0: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FCFB0u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F1FCFB4:
    ctx->pc = 0x7F1FCFB4u;
    // 7F1FCFB4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FCFB8:
    ctx->pc = 0x7F1FCFB8u;
    // 7F1FCFB8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1FCFBC:
    ctx->pc = 0x7F1FCFBCu;
    // 7F1FCFBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FCFC0:
    ctx->pc = 0x7F1FCFC0u;
    ctx->downcount -= 16;
    // 7F1FCFC0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FCFC4:
    ctx->pc = 0x7F1FCFC4u;
    // 7F1FCFC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FCFC8:
    ctx->pc = 0x7F1FCFC8u;
    // 7F1FCFC8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FCFCC:
    ctx->pc = 0x7F1FCFCCu;
    // 7F1FCFCC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FCFD0:
    ctx->pc = 0x7F1FCFD0u;
    // 7F1FCFD0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FCFD4:
    ctx->pc = 0x7F1FCFD4u;
    // 7F1FCFD4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F1FCFD8:
    ctx->downcount -= 3;
    // 7F1FCFD8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FCFDC:
    // 7F1FCFDC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1FCFE0:
    // 7F1FCFE0: bl      0x7F1FCD70
    {
            ctx->lr = 0x7F1FCFE4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FCD70u;
                return;
            }
            goto label_7F1FCD70;
    }

label_7F1FCFE4:
    ctx->downcount -= 3;
    // 7F1FCFE4: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F1FCFE8:
    // 7F1FCFE8: cmpwi   r31, 8
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

label_7F1FCFEC:
    // 7F1FCFEC: bc    12, 0, 0x7F1FCFD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FCFD8u;
                return;
            }
            goto label_7F1FCFD8;
        }
    }

label_7F1FCFF0:
    ctx->pc = 0x7F1FCFF0u;
    ctx->downcount -= 16;
    // 7F1FCFF0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FCFF4:
    ctx->pc = 0x7F1FCFF4u;
    // 7F1FCFF4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FCFF8:
    ctx->pc = 0x7F1FCFF8u;
    // 7F1FCFF8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FCFFC:
    ctx->pc = 0x7F1FCFFCu;
    // 7F1FCFFC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1FD000:
    ctx->pc = 0x7F1FD000u;
    // 7F1FD000: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FD004:
    ctx->pc = 0x7F1FD004u;
    ctx->downcount -= 20;
    // 7F1FD004: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FD008:
    ctx->pc = 0x7F1FD008u;
    // 7F1FD008: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FD00C:
    ctx->pc = 0x7F1FD00Cu;
    // 7F1FD00C: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F1FD010:
    ctx->pc = 0x7F1FD010u;
    // 7F1FD010: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD014:
    ctx->pc = 0x7F1FD014u;
    // 7F1FD014: stmw     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FD018:
    ctx->pc = 0x7F1FD018u;
    // 7F1FD018: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FD01C:
    ctx->pc = 0x7F1FD01Cu;
    // 7F1FD01C: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FD020:
    ctx->pc = 0x7F1FD020u;
    // 7F1FD020: lwz     r4, -11560(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-11560);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FD024:
    ctx->pc = 0x7F1FD024u;
    // 7F1FD024: cmplwi  r4, 0x0000
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

label_7F1FD028:
    ctx->pc = 0x7F1FD028u;
    // 7F1FD028: bc    12, 2, 0x7F1FD190
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD190;
        }
    }

label_7F1FD02C:
    ctx->pc = 0x7F1FD02Cu;
    ctx->downcount -= 5;
    // 7F1FD02C: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_7F1FD030:
    ctx->pc = 0x7F1FD030u;
    // 7F1FD030: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1FD034:
    ctx->pc = 0x7F1FD034u;
    // 7F1FD034: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1FD038:
    ctx->pc = 0x7F1FD038u;
    // 7F1FD038: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1FD03C:
    ctx->downcount -= 4;
    // 7F1FD03C: addi    r0, r3, 4560
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4560);

label_7F1FD040:
    ctx->pc = 0x7F1FD040u;
    // 7F1FD040: lwzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD044:
    // 7F1FD044: cmpwi   r0, -1
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

label_7F1FD048:
    // 7F1FD048: bc    12, 2, 0x7F1FD058
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD058;
        }
    }

label_7F1FD04C:
    ctx->downcount -= 3;
    // 7F1FD04C: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F1FD050:
    // 7F1FD050: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F1FD054:
    // 7F1FD054: bc    16, 0, 0x7F1FD03C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FD03Cu;
                return;
            }
            goto label_7F1FD03C;
        }
    }

label_7F1FD058:
    ctx->pc = 0x7F1FD058u;
    ctx->downcount -= 2;
    // 7F1FD058: cmpwi   r5, 64
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(64);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FD05C:
    ctx->pc = 0x7F1FD05Cu;
    // 7F1FD05C: bc    12, 2, 0x7F1FD190
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD190;
        }
    }

label_7F1FD060:
    ctx->pc = 0x7F1FD060u;
    ctx->downcount -= 8;
    // 7F1FD060: addi    r3, r4, 48
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(48);

label_7F1FD064:
    ctx->pc = 0x7F1FD064u;
    // 7F1FD064: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1FD068:
    ctx->pc = 0x7F1FD068u;
    // 7F1FD068: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1FD06C:
    ctx->pc = 0x7F1FD06Cu;
    // 7F1FD06C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F1FD070:
    ctx->pc = 0x7F1FD070u;
    // 7F1FD070: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FD074:
    ctx->pc = 0x7F1FD074u;
    // 7F1FD074: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1FD078:
    ctx->pc = 0x7F1FD078u;
    // 7F1FD078: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1FD07C:
    ctx->pc = 0x7F1FD07Cu;
    ctx->downcount -= 3;
    // 7F1FD07C: lwz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD080:
    // 7F1FD080: cmplw   r0, r27
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[27]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FD084:
    // 7F1FD084: bc    4, 2, 0x7F1FD090
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD090;
        }
    }

label_7F1FD088:
    ctx->downcount -= 2;
    // 7F1FD088: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FD08C:
    // 7F1FD08C: b       0x7F1FD09C
    {
            goto label_7F1FD09C;
    }

label_7F1FD090:
    ctx->downcount -= 3;
    // 7F1FD090: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_7F1FD094:
    // 7F1FD094: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F1FD098:
    // 7F1FD098: bc    16, 0, 0x7F1FD07C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FD07Cu;
                return;
            }
            goto label_7F1FD07C;
        }
    }

label_7F1FD09C:
    ctx->pc = 0x7F1FD09Cu;
    ctx->downcount -= 2;
    // 7F1FD09C: cmpwi   r4, 8
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

label_7F1FD0A0:
    ctx->pc = 0x7F1FD0A0u;
    // 7F1FD0A0: bc    4, 2, 0x7F1FD0DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD0DC;
        }
    }

label_7F1FD0A4:
    ctx->pc = 0x7F1FD0A4u;
    ctx->downcount -= 5;
    // 7F1FD0A4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1FD0A8:
    ctx->pc = 0x7F1FD0A8u;
    // 7F1FD0A8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FD0AC:
    ctx->pc = 0x7F1FD0ACu;
    // 7F1FD0AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1FD0B0:
    ctx->pc = 0x7F1FD0B0u;
    // 7F1FD0B0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1FD0B4:
    ctx->pc = 0x7F1FD0B4u;
    ctx->downcount -= 3;
    // 7F1FD0B4: lwz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD0B8:
    // 7F1FD0B8: cmplwi  r0, 0x0000
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

label_7F1FD0BC:
    // 7F1FD0BC: bc    4, 2, 0x7F1FD0C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD0C8;
        }
    }

label_7F1FD0C0:
    ctx->downcount -= 2;
    // 7F1FD0C0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FD0C4:
    // 7F1FD0C4: b       0x7F1FD0D4
    {
            goto label_7F1FD0D4;
    }

label_7F1FD0C8:
    ctx->downcount -= 3;
    // 7F1FD0C8: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_7F1FD0CC:
    // 7F1FD0CC: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1FD0D0:
    // 7F1FD0D0: bc    16, 0, 0x7F1FD0B4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FD0B4u;
                return;
            }
            goto label_7F1FD0B4;
        }
    }

label_7F1FD0D4:
    ctx->pc = 0x7F1FD0D4u;
    ctx->downcount -= 2;
    // 7F1FD0D4: cmpwi   r3, 8
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FD0D8:
    ctx->pc = 0x7F1FD0D8u;
    // 7F1FD0D8: bc    12, 2, 0x7F1FD190
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD190;
        }
    }

label_7F1FD0DC:
    ctx->pc = 0x7F1FD0DCu;
    ctx->downcount -= 4;
    // 7F1FD0DC: lwz     r4, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FD0E0:
    ctx->pc = 0x7F1FD0E0u;
    // 7F1FD0E0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1FD0E4:
    ctx->pc = 0x7F1FD0E4u;
    // 7F1FD0E4: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F1FD0E8:
    ctx->pc = 0x7F1FD0E8u;
    // 7F1FD0E8: bl      0x7F1FD1A4
    {
            ctx->lr = 0x7F1FD0ECu;
            goto label_7F1FD1A4;
    }

label_7F1FD0EC:
    ctx->pc = 0x7F1FD0ECu;
    ctx->downcount -= 2;
    // 7F1FD0EC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1FD0F0:
    ctx->pc = 0x7F1FD0F0u;
    // 7F1FD0F0: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F1FD0F4u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F1FD0F4:
    ctx->pc = 0x7F1FD0F4u;
    ctx->downcount -= 10;
    // 7F1FD0F4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FD0F8:
    ctx->pc = 0x7F1FD0F8u;
    // 7F1FD0F8: rlwinm r4, r31, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[31], 4u) & 0xFFFFFFF0u;
    }

label_7F1FD0FC:
    ctx->pc = 0x7F1FD0FCu;
    // 7F1FD0FC: addi    r5, r3, -11560
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-11560);

label_7F1FD100:
    ctx->pc = 0x7F1FD100u;
    // 7F1FD100: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1FD104:
    ctx->pc = 0x7F1FD104u;
    // 7F1FD104: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD108:
    ctx->pc = 0x7F1FD108u;
    // 7F1FD108: addi    r26, r4, 2384
    ctx->gpr[26] = ctx->gpr[4] + (u32)(s32)(2384);

label_7F1FD10C:
    ctx->pc = 0x7F1FD10Cu;
    // 7F1FD10C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1FD110:
    ctx->pc = 0x7F1FD110u;
    // 7F1FD110: add   r26, r0, r26
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_7F1FD114:
    ctx->pc = 0x7F1FD114u;
    // 7F1FD114: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F1FD118:
    ctx->pc = 0x7F1FD118u;
    // 7F1FD118: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F1FD11Cu;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F1FD11C:
    ctx->pc = 0x7F1FD11Cu;
    ctx->downcount -= 8;
    // 7F1FD11C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FD120:
    ctx->pc = 0x7F1FD120u;
    // 7F1FD120: rlwinm r4, r31, 1, 0, 30
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[31], 1u) & 0xFFFFFFFEu;
    }

label_7F1FD124:
    ctx->pc = 0x7F1FD124u;
    // 7F1FD124: addi    r5, r3, -11560
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-11560);

label_7F1FD128:
    ctx->pc = 0x7F1FD128u;
    // 7F1FD128: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F1FD12C:
    ctx->pc = 0x7F1FD12Cu;
    // 7F1FD12C: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD130:
    ctx->pc = 0x7F1FD130u;
    // 7F1FD130: addi    r4, r4, 4432
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4432);

label_7F1FD134:
    ctx->pc = 0x7F1FD134u;
    // 7F1FD134: add   r4, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F1FD138:
    ctx->pc = 0x7F1FD138u;
    // 7F1FD138: bl      0x7F1FC7AC
    {
            ctx->lr = 0x7F1FD13Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FC7ACu;
                return;
            }
            goto label_7F1FC7AC;
    }

label_7F1FD13C:
    ctx->pc = 0x7F1FD13Cu;
    ctx->downcount -= 3;
    // 7F1FD13C: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FD140:
    ctx->pc = 0x7F1FD140u;
    // 7F1FD140: cmpwi   r6, -1
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FD144:
    ctx->pc = 0x7F1FD144u;
    // 7F1FD144: bc    12, 2, 0x7F1FD190
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD190;
        }
    }

label_7F1FD148:
    ctx->pc = 0x7F1FD148u;
    ctx->downcount -= 7;
    // 7F1FD148: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FD14C:
    ctx->pc = 0x7F1FD14Cu;
    // 7F1FD14C: stw     r27, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F1FD150:
    ctx->pc = 0x7F1FD150u;
    // 7F1FD150: addi    r3, r3, -11560
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11560);

label_7F1FD154:
    ctx->pc = 0x7F1FD154u;
    // 7F1FD154: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FD158:
    ctx->pc = 0x7F1FD158u;
    // 7F1FD158: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FD15C:
    ctx->pc = 0x7F1FD15Cu;
    // 7F1FD15C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FD160:
    ctx->pc = 0x7F1FD160u;
    // 7F1FD160: bl      0x7F1FBE88
    {
            ctx->lr = 0x7F1FD164u;
            ctx->pc = 0x7F1FBE88u;
            return;
    }

label_7F1FD164:
    ctx->pc = 0x7F1FD164u;
    ctx->downcount -= 2;
    // 7F1FD164: cmpwi   r3, 0
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

label_7F1FD168:
    ctx->pc = 0x7F1FD168u;
    // 7F1FD168: bc    12, 2, 0x7F1FD190
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD190;
        }
    }

label_7F1FD16C:
    ctx->pc = 0x7F1FD16Cu;
    ctx->downcount -= 9;
    // 7F1FD16C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FD170:
    ctx->pc = 0x7F1FD170u;
    // 7F1FD170: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_7F1FD174:
    ctx->pc = 0x7F1FD174u;
    // 7F1FD174: lwz     r6, -11560(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11560);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1FD178:
    ctx->pc = 0x7F1FD178u;
    // 7F1FD178: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1FD17C:
    ctx->pc = 0x7F1FD17Cu;
    // 7F1FD17C: li      r3, 458
    ctx->gpr[3] = (u32)(s32)(458);

label_7F1FD180:
    ctx->pc = 0x7F1FD180u;
    // 7F1FD180: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1FD184:
    ctx->pc = 0x7F1FD184u;
    // 7F1FD184: add   r6, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F1FD188:
    ctx->pc = 0x7F1FD188u;
    // 7F1FD188: stw     r30, 4560(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4560);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1FD18C:
    ctx->pc = 0x7F1FD18Cu;
    // 7F1FD18C: bl      0x7F0117B8
    {
            ctx->lr = 0x7F1FD190u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F1FD190:
    ctx->pc = 0x7F1FD190u;
    ctx->downcount -= 16;
    // 7F1FD190: lmw     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FD194:
    ctx->pc = 0x7F1FD194u;
    // 7F1FD194: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD198:
    ctx->pc = 0x7F1FD198u;
    // 7F1FD198: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FD19C:
    ctx->pc = 0x7F1FD19Cu;
    // 7F1FD19C: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F1FD1A0:
    ctx->pc = 0x7F1FD1A0u;
    // 7F1FD1A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FD1A4:
    ctx->pc = 0x7F1FD1A4u;
    ctx->downcount -= 7;
    // 7F1FD1A4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FD1A8:
    ctx->pc = 0x7F1FD1A8u;
    // 7F1FD1A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FD1AC:
    ctx->pc = 0x7F1FD1ACu;
    // 7F1FD1AC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD1B0:
    ctx->pc = 0x7F1FD1B0u;
    // 7F1FD1B0: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FD1B4:
    ctx->pc = 0x7F1FD1B4u;
    // 7F1FD1B4: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FD1B8:
    ctx->pc = 0x7F1FD1B8u;
    // 7F1FD1B8: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F1FD1BC:
    ctx->pc = 0x7F1FD1BCu;
    // 7F1FD1BC: bl      0x7F1146A0
    {
            ctx->lr = 0x7F1FD1C0u;
            ctx->pc = 0x7F1146A0u;
            return;
    }

label_7F1FD1C0:
    ctx->pc = 0x7F1FD1C0u;
    ctx->downcount -= 5;
    // 7F1FD1C0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD1C4:
    ctx->pc = 0x7F1FD1C4u;
    // 7F1FD1C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FD1C8:
    ctx->pc = 0x7F1FD1C8u;
    // 7F1FD1C8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1FD1CC:
    ctx->pc = 0x7F1FD1CCu;
    // 7F1FD1CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FD1D0:
    ctx->pc = 0x7F1FD1D0u;
    ctx->downcount -= 16;
    // 7F1FD1D0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FD1D4:
    ctx->pc = 0x7F1FD1D4u;
    // 7F1FD1D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FD1D8:
    ctx->pc = 0x7F1FD1D8u;
    // 7F1FD1D8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD1DC:
    ctx->pc = 0x7F1FD1DCu;
    // 7F1FD1DC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FD1E0:
    ctx->pc = 0x7F1FD1E0u;
    // 7F1FD1E0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FD1E4:
    ctx->pc = 0x7F1FD1E4u;
    // 7F1FD1E4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F1FD1E8:
    ctx->downcount -= 3;
    // 7F1FD1E8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FD1EC:
    // 7F1FD1EC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FD1F0:
    // 7F1FD1F0: bl      0x7F1FBFF8
    {
            ctx->lr = 0x7F1FD1F4u;
            ctx->pc = 0x7F1FBFF8u;
            return;
    }

label_7F1FD1F4:
    ctx->downcount -= 3;
    // 7F1FD1F4: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F1FD1F8:
    // 7F1FD1F8: cmpwi   r31, 64
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

label_7F1FD1FC:
    // 7F1FD1FC: bc    12, 0, 0x7F1FD1E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FD1E8u;
                return;
            }
            goto label_7F1FD1E8;
        }
    }

label_7F1FD200:
    ctx->pc = 0x7F1FD200u;
    ctx->downcount -= 1;
    // 7F1FD200: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F1FD204:
    ctx->downcount -= 3;
    // 7F1FD204: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FD208:
    // 7F1FD208: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FD20C:
    // 7F1FD20C: bl      0x7F1FC044
    {
            ctx->lr = 0x7F1FD210u;
            ctx->pc = 0x7F1FC044u;
            return;
    }

label_7F1FD210:
    ctx->downcount -= 3;
    // 7F1FD210: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F1FD214:
    // 7F1FD214: cmpwi   r31, 16
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

label_7F1FD218:
    // 7F1FD218: bc    12, 0, 0x7F1FD204
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FD204u;
                return;
            }
            goto label_7F1FD204;
        }
    }

label_7F1FD21C:
    ctx->pc = 0x7F1FD21Cu;
    ctx->downcount -= 19;
    // 7F1FD21C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FD220:
    ctx->pc = 0x7F1FD220u;
    // 7F1FD220: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1FD224:
    ctx->pc = 0x7F1FD224u;
    // 7F1FD224: stw     r0, -11560(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11560);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD228:
    ctx->pc = 0x7F1FD228u;
    // 7F1FD228: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FD22C:
    ctx->pc = 0x7F1FD22Cu;
    // 7F1FD22C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD230:
    ctx->pc = 0x7F1FD230u;
    // 7F1FD230: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FD234:
    ctx->pc = 0x7F1FD234u;
    // 7F1FD234: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1FD238:
    ctx->pc = 0x7F1FD238u;
    // 7F1FD238: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FD23C:
    ctx->pc = 0x7F1FD23Cu;
    ctx->downcount -= 17;
    // 7F1FD23C: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FD240:
    ctx->pc = 0x7F1FD240u;
    // 7F1FD240: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_7F1FD244:
    ctx->pc = 0x7F1FD244u;
    // 7F1FD244: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1FD248:
    ctx->pc = 0x7F1FD248u;
    // 7F1FD248: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_7F1FD24C:
    ctx->pc = 0x7F1FD24Cu;
    // 7F1FD24C: stmw     r14, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 14; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FD250:
    ctx->pc = 0x7F1FD250u;
    // 7F1FD250: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1FD254:
    loop_7F1FD254(ctx);
    if (ctx->pc == 0x7F1FD264u) goto label_7F1FD264;
    return;
label_7F1FD258:
    // 7F1FD258: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F1FD25C:
    ctx->pc = 0x7F1FD25Cu;
    // 7F1FD25C: stwx    r5, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1FD260:
    // 7F1FD260: bc    16, 0, 0x7F1FD254
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FD254u;
                return;
            }
            goto label_7F1FD254;
        }
    }

label_7F1FD264:
    ctx->pc = 0x7F1FD264u;
    ctx->downcount -= 5;
    // 7F1FD264: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F1FD268:
    ctx->pc = 0x7F1FD268u;
    // 7F1FD268: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1FD26C:
    ctx->pc = 0x7F1FD26Cu;
    // 7F1FD26C: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_7F1FD270:
    ctx->pc = 0x7F1FD270u;
    // 7F1FD270: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1FD274:
    loop_7F1FD274(ctx);
    if (ctx->pc == 0x7F1FD284u) goto label_7F1FD284;
    return;
label_7F1FD278:
    // 7F1FD278: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F1FD27C:
    ctx->pc = 0x7F1FD27Cu;
    // 7F1FD27C: stwx    r5, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1FD280:
    // 7F1FD280: bc    16, 0, 0x7F1FD274
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FD274u;
                return;
            }
            goto label_7F1FD274;
        }
    }

label_7F1FD284:
    ctx->pc = 0x7F1FD284u;
    ctx->downcount -= 5;
    // 7F1FD284: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1FD288:
    ctx->pc = 0x7F1FD288u;
    // 7F1FD288: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1FD28C:
    ctx->pc = 0x7F1FD28Cu;
    // 7F1FD28C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1FD290:
    ctx->pc = 0x7F1FD290u;
    // 7F1FD290: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1FD294:
    loop_7F1FD294(ctx);
    if (ctx->pc == 0x7F1FD2A4u) goto label_7F1FD2A4;
    return;
label_7F1FD298:
    // 7F1FD298: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F1FD29C:
    ctx->pc = 0x7F1FD29Cu;
    // 7F1FD29C: stwx    r5, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1FD2A0:
    // 7F1FD2A0: bc    16, 0, 0x7F1FD294
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FD294u;
                return;
            }
            goto label_7F1FD294;
        }
    }

label_7F1FD2A4:
    ctx->pc = 0x7F1FD2A4u;
    ctx->downcount -= 109;
    // 7F1FD2A4: lis     r5, 38
    ctx->gpr[5] = ((u32)(s32)(38) << 16);

label_7F1FD2A8:
    ctx->pc = 0x7F1FD2A8u;
    // 7F1FD2A8: lis     r9, 32589
    ctx->gpr[9] = ((u32)(s32)(32589) << 16);

label_7F1FD2AC:
    ctx->pc = 0x7F1FD2ACu;
    // 7F1FD2AC: lis     r3, 39
    ctx->gpr[3] = ((u32)(s32)(39) << 16);

label_7F1FD2B0:
    ctx->pc = 0x7F1FD2B0u;
    // 7F1FD2B0: lis     r11, 32589
    ctx->gpr[11] = ((u32)(s32)(32589) << 16);

label_7F1FD2B4:
    ctx->pc = 0x7F1FD2B4u;
    // 7F1FD2B4: lis     r10, 32589
    ctx->gpr[10] = ((u32)(s32)(32589) << 16);

label_7F1FD2B8:
    ctx->pc = 0x7F1FD2B8u;
    // 7F1FD2B8: lis     r8, 32589
    ctx->gpr[8] = ((u32)(s32)(32589) << 16);

label_7F1FD2BC:
    ctx->pc = 0x7F1FD2BCu;
    // 7F1FD2BC: addi    r21, r11, -11460
    ctx->gpr[21] = ctx->gpr[11] + (u32)(s32)(-11460);

label_7F1FD2C0:
    ctx->pc = 0x7F1FD2C0u;
    // 7F1FD2C0: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F1FD2C4:
    ctx->pc = 0x7F1FD2C4u;
    // 7F1FD2C4: addi    r27, r9, -11484
    ctx->gpr[27] = ctx->gpr[9] + (u32)(s32)(-11484);

label_7F1FD2C8:
    ctx->pc = 0x7F1FD2C8u;
    // 7F1FD2C8: addi    r23, r10, -11472
    ctx->gpr[23] = ctx->gpr[10] + (u32)(s32)(-11472);

label_7F1FD2CC:
    ctx->pc = 0x7F1FD2CCu;
    // 7F1FD2CC: addi    r22, r5, 28817
    ctx->gpr[22] = ctx->gpr[5] + (u32)(s32)(28817);

label_7F1FD2D0:
    ctx->pc = 0x7F1FD2D0u;
    // 7F1FD2D0: addi    r24, r5, 28816
    ctx->gpr[24] = ctx->gpr[5] + (u32)(s32)(28816);

label_7F1FD2D4:
    ctx->pc = 0x7F1FD2D4u;
    // 7F1FD2D4: addi    r25, r5, 28815
    ctx->gpr[25] = ctx->gpr[5] + (u32)(s32)(28815);

label_7F1FD2D8:
    ctx->pc = 0x7F1FD2D8u;
    // 7F1FD2D8: addi    r26, r5, 29009
    ctx->gpr[26] = ctx->gpr[5] + (u32)(s32)(29009);

label_7F1FD2DC:
    ctx->pc = 0x7F1FD2DCu;
    // 7F1FD2DC: addi    r28, r5, 29008
    ctx->gpr[28] = ctx->gpr[5] + (u32)(s32)(29008);

label_7F1FD2E0:
    ctx->pc = 0x7F1FD2E0u;
    // 7F1FD2E0: addi    r29, r5, 29007
    ctx->gpr[29] = ctx->gpr[5] + (u32)(s32)(29007);

label_7F1FD2E4:
    ctx->pc = 0x7F1FD2E4u;
    // 7F1FD2E4: addi    r31, r8, -11496
    ctx->gpr[31] = ctx->gpr[8] + (u32)(s32)(-11496);

label_7F1FD2E8:
    ctx->pc = 0x7F1FD2E8u;
    // 7F1FD2E8: addi    r30, r5, 29105
    ctx->gpr[30] = ctx->gpr[5] + (u32)(s32)(29105);

label_7F1FD2EC:
    ctx->pc = 0x7F1FD2ECu;
    // 7F1FD2EC: addi    r12, r5, 29104
    ctx->gpr[12] = ctx->gpr[5] + (u32)(s32)(29104);

label_7F1FD2F0:
    ctx->pc = 0x7F1FD2F0u;
    // 7F1FD2F0: addi    r11, r5, 29103
    ctx->gpr[11] = ctx->gpr[5] + (u32)(s32)(29103);

label_7F1FD2F4:
    ctx->pc = 0x7F1FD2F4u;
    // 7F1FD2F4: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F1FD2F8:
    ctx->pc = 0x7F1FD2F8u;
    // 7F1FD2F8: addi    r9, r7, -11508
    ctx->gpr[9] = ctx->gpr[7] + (u32)(s32)(-11508);

label_7F1FD2FC:
    ctx->pc = 0x7F1FD2FCu;
    // 7F1FD2FC: addi    r0, r5, 28559
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(28559);

label_7F1FD300:
    ctx->pc = 0x7F1FD300u;
    // 7F1FD300: addi    r10, r5, 28561
    ctx->gpr[10] = ctx->gpr[5] + (u32)(s32)(28561);

label_7F1FD304:
    ctx->pc = 0x7F1FD304u;
    // 7F1FD304: addi    r8, r5, 28560
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(28560);

label_7F1FD308:
    ctx->pc = 0x7F1FD308u;
    // 7F1FD308: addi    r5, r3, -8145
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-8145);

label_7F1FD30C:
    ctx->pc = 0x7F1FD30Cu;
    // 7F1FD30C: stw     r0, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD310:
    ctx->pc = 0x7F1FD310u;
    // 7F1FD310: addi    r7, r6, -11520
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-11520);

label_7F1FD314:
    ctx->pc = 0x7F1FD314u;
    // 7F1FD314: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F1FD318:
    ctx->pc = 0x7F1FD318u;
    // 7F1FD318: addi    r15, r3, -27505
    ctx->gpr[15] = ctx->gpr[3] + (u32)(s32)(-27505);

label_7F1FD31C:
    ctx->pc = 0x7F1FD31Cu;
    // 7F1FD31C: stw     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1FD320:
    ctx->pc = 0x7F1FD320u;
    // 7F1FD320: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F1FD324:
    ctx->pc = 0x7F1FD324u;
    // 7F1FD324: addi    r6, r5, -11540
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-11540);

label_7F1FD328:
    ctx->pc = 0x7F1FD328u;
    // 7F1FD328: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F1FD32C:
    ctx->pc = 0x7F1FD32Cu;
    // 7F1FD32C: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD330:
    ctx->pc = 0x7F1FD330u;
    // 7F1FD330: li      r0, 17
    ctx->gpr[0] = (u32)(s32)(17);

label_7F1FD334:
    ctx->pc = 0x7F1FD334u;
    // 7F1FD334: addi    r5, r3, -8144
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-8144);

label_7F1FD338:
    ctx->pc = 0x7F1FD338u;
    // 7F1FD338: addi    r14, r3, -8141
    ctx->gpr[14] = ctx->gpr[3] + (u32)(s32)(-8141);

label_7F1FD33C:
    ctx->pc = 0x7F1FD33Cu;
    // 7F1FD33C: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD340:
    ctx->pc = 0x7F1FD340u;
    // 7F1FD340: li      r0, 25
    ctx->gpr[0] = (u32)(s32)(25);

label_7F1FD344:
    ctx->pc = 0x7F1FD344u;
    // 7F1FD344: addi    r16, r3, -27504
    ctx->gpr[16] = ctx->gpr[3] + (u32)(s32)(-27504);

label_7F1FD348:
    ctx->pc = 0x7F1FD348u;
    // 7F1FD348: addi    r17, r3, -27503
    ctx->gpr[17] = ctx->gpr[3] + (u32)(s32)(-27503);

label_7F1FD34C:
    ctx->pc = 0x7F1FD34Cu;
    // 7F1FD34C: stwu     r15, -11436(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11436);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
        ctx->gpr[4] = ea;
    }

label_7F1FD350:
    ctx->pc = 0x7F1FD350u;
    // 7F1FD350: addi    r18, r3, -27502
    ctx->gpr[18] = ctx->gpr[3] + (u32)(s32)(-27502);

label_7F1FD354:
    ctx->pc = 0x7F1FD354u;
    // 7F1FD354: addi    r19, r3, -27501
    ctx->gpr[19] = ctx->gpr[3] + (u32)(s32)(-27501);

label_7F1FD358:
    ctx->pc = 0x7F1FD358u;
    // 7F1FD358: addi    r20, r3, -27500
    ctx->gpr[20] = ctx->gpr[3] + (u32)(s32)(-27500);

label_7F1FD35C:
    ctx->pc = 0x7F1FD35Cu;
    // 7F1FD35C: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1FD360:
    ctx->pc = 0x7F1FD360u;
    // 7F1FD360: addi    r5, r3, -8143
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-8143);

label_7F1FD364:
    ctx->pc = 0x7F1FD364u;
    // 7F1FD364: stw     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD368:
    ctx->pc = 0x7F1FD368u;
    // 7F1FD368: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD36C:
    ctx->pc = 0x7F1FD36Cu;
    // 7F1FD36C: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1FD370:
    ctx->pc = 0x7F1FD370u;
    // 7F1FD370: addi    r5, r3, -8142
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-8142);

label_7F1FD374:
    ctx->pc = 0x7F1FD374u;
    // 7F1FD374: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FD378:
    ctx->pc = 0x7F1FD378u;
    // 7F1FD378: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD37C:
    ctx->pc = 0x7F1FD37Cu;
    // 7F1FD37C: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD380:
    ctx->pc = 0x7F1FD380u;
    // 7F1FD380: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1FD384:
    ctx->pc = 0x7F1FD384u;
    // 7F1FD384: addi    r5, r3, -11548
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-11548);

label_7F1FD388:
    ctx->pc = 0x7F1FD388u;
    // 7F1FD388: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1FD38C:
    ctx->pc = 0x7F1FD38Cu;
    // 7F1FD38C: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD390:
    ctx->pc = 0x7F1FD390u;
    // 7F1FD390: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD394:
    ctx->pc = 0x7F1FD394u;
    // 7F1FD394: stw     r16, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[16]);
    }

label_7F1FD398:
    ctx->pc = 0x7F1FD398u;
    // 7F1FD398: stw     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD39C:
    ctx->pc = 0x7F1FD39Cu;
    // 7F1FD39C: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD3A0:
    ctx->pc = 0x7F1FD3A0u;
    // 7F1FD3A0: stw     r17, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[17]);
    }

label_7F1FD3A4:
    ctx->pc = 0x7F1FD3A4u;
    // 7F1FD3A4: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD3A8:
    ctx->pc = 0x7F1FD3A8u;
    // 7F1FD3A8: li      r0, 70
    ctx->gpr[0] = (u32)(s32)(70);

label_7F1FD3AC:
    ctx->pc = 0x7F1FD3ACu;
    // 7F1FD3AC: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD3B0:
    ctx->pc = 0x7F1FD3B0u;
    // 7F1FD3B0: li      r0, 60
    ctx->gpr[0] = (u32)(s32)(60);

label_7F1FD3B4:
    ctx->pc = 0x7F1FD3B4u;
    // 7F1FD3B4: stw     r18, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[18]);
    }

label_7F1FD3B8:
    ctx->pc = 0x7F1FD3B8u;
    // 7F1FD3B8: stw     r19, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[19]);
    }

label_7F1FD3BC:
    ctx->pc = 0x7F1FD3BCu;
    // 7F1FD3BC: stw     r20, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[20]);
    }

label_7F1FD3C0:
    ctx->pc = 0x7F1FD3C0u;
    // 7F1FD3C0: li      r4, 45
    ctx->gpr[4] = (u32)(s32)(45);

label_7F1FD3C4:
    ctx->pc = 0x7F1FD3C4u;
    // 7F1FD3C4: stw     r4, 0(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1FD3C8:
    ctx->pc = 0x7F1FD3C8u;
    // 7F1FD3C8: li      r4, 47
    ctx->gpr[4] = (u32)(s32)(47);

label_7F1FD3CC:
    ctx->pc = 0x7F1FD3CCu;
    // 7F1FD3CC: stw     r4, 4(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1FD3D0:
    ctx->pc = 0x7F1FD3D0u;
    // 7F1FD3D0: li      r4, 49
    ctx->gpr[4] = (u32)(s32)(49);

label_7F1FD3D4:
    ctx->pc = 0x7F1FD3D4u;
    // 7F1FD3D4: stw     r4, 8(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1FD3D8:
    ctx->pc = 0x7F1FD3D8u;
    // 7F1FD3D8: li      r4, 55
    ctx->gpr[4] = (u32)(s32)(55);

label_7F1FD3DC:
    ctx->pc = 0x7F1FD3DCu;
    // 7F1FD3DC: stw     r4, 12(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1FD3E0:
    ctx->pc = 0x7F1FD3E0u;
    // 7F1FD3E0: li      r4, 67
    ctx->gpr[4] = (u32)(s32)(67);

label_7F1FD3E4:
    ctx->pc = 0x7F1FD3E4u;
    // 7F1FD3E4: stw     r4, 16(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1FD3E8:
    ctx->pc = 0x7F1FD3E8u;
    // 7F1FD3E8: li      r4, 78
    ctx->gpr[4] = (u32)(s32)(78);

label_7F1FD3EC:
    ctx->pc = 0x7F1FD3ECu;
    // 7F1FD3EC: stw     r4, 20(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1FD3F0:
    ctx->pc = 0x7F1FD3F0u;
    // 7F1FD3F0: stw     r22, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F1FD3F4:
    ctx->pc = 0x7F1FD3F4u;
    // 7F1FD3F4: stw     r24, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F1FD3F8:
    ctx->pc = 0x7F1FD3F8u;
    // 7F1FD3F8: stw     r25, 8(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F1FD3FC:
    ctx->pc = 0x7F1FD3FCu;
    // 7F1FD3FC: stw     r26, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F1FD400:
    ctx->pc = 0x7F1FD400u;
    // 7F1FD400: stw     r28, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F1FD404:
    ctx->pc = 0x7F1FD404u;
    // 7F1FD404: stw     r29, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F1FD408:
    ctx->pc = 0x7F1FD408u;
    // 7F1FD408: stw     r30, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1FD40C:
    ctx->pc = 0x7F1FD40Cu;
    // 7F1FD40C: stw     r12, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F1FD410:
    ctx->pc = 0x7F1FD410u;
    // 7F1FD410: stw     r11, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F1FD414:
    ctx->pc = 0x7F1FD414u;
    // 7F1FD414: stw     r10, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F1FD418:
    ctx->pc = 0x7F1FD418u;
    // 7F1FD418: stw     r8, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1FD41C:
    ctx->pc = 0x7F1FD41Cu;
    // 7F1FD41C: stw     r14, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[14]);
    }

label_7F1FD420:
    ctx->pc = 0x7F1FD420u;
    // 7F1FD420: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD424:
    ctx->pc = 0x7F1FD424u;
    // 7F1FD424: lmw     r14, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 14; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FD428:
    ctx->pc = 0x7F1FD428u;
    // 7F1FD428: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F1FD42C:
    ctx->pc = 0x7F1FD42Cu;
    // 7F1FD42C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FD430:
    ctx->pc = 0x7F1FD430u;
    ctx->downcount -= 8;
    // 7F1FD430: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FD434:
    ctx->pc = 0x7F1FD434u;
    // 7F1FD434: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FD438:
    ctx->pc = 0x7F1FD438u;
    // 7F1FD438: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FD43C:
    ctx->pc = 0x7F1FD43Cu;
    // 7F1FD43C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD440:
    ctx->pc = 0x7F1FD440u;
    // 7F1FD440: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1FD444:
    ctx->pc = 0x7F1FD444u;
    // 7F1FD444: lwz     r0, -11560(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11560);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD448:
    ctx->pc = 0x7F1FD448u;
    // 7F1FD448: cmplwi  r0, 0x0000
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

label_7F1FD44C:
    ctx->pc = 0x7F1FD44Cu;
    // 7F1FD44C: bc    12, 2, 0x7F1FD458
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD458;
        }
    }

label_7F1FD450:
    ctx->pc = 0x7F1FD450u;
    ctx->downcount -= 2;
    // 7F1FD450: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1FD454:
    ctx->pc = 0x7F1FD454u;
    // 7F1FD454: b       0x7F1FD4DC
    {
            goto label_7F1FD4DC;
    }

label_7F1FD458:
    ctx->pc = 0x7F1FD458u;
    ctx->downcount -= 5;
    // 7F1FD458: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F1FD45C:
    ctx->pc = 0x7F1FD45Cu;
    // 7F1FD45C: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F1FD460:
    ctx->pc = 0x7F1FD460u;
    // 7F1FD460: li      r5, 5488
    ctx->gpr[5] = (u32)(s32)(5488);

label_7F1FD464:
    ctx->pc = 0x7F1FD464u;
    // 7F1FD464: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1FD468:
    ctx->pc = 0x7F1FD468u;
    // 7F1FD468: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1FD46Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1FD46C:
    ctx->pc = 0x7F1FD46Cu;
    ctx->downcount -= 2;
    // 7F1FD46C: or.   r31, r3, r3
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

label_7F1FD470:
    ctx->pc = 0x7F1FD470u;
    // 7F1FD470: bc    12, 2, 0x7F1FD4D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD4D0;
        }
    }

label_7F1FD474:
    ctx->pc = 0x7F1FD474u;
    ctx->downcount -= 5;
    // 7F1FD474: lis     r4, 32544
    ctx->gpr[4] = ((u32)(s32)(32544) << 16);

label_7F1FD478:
    ctx->pc = 0x7F1FD478u;
    // 7F1FD478: lis     r5, 32544
    ctx->gpr[5] = ((u32)(s32)(32544) << 16);

label_7F1FD47C:
    ctx->pc = 0x7F1FD47Cu;
    // 7F1FD47C: addi    r4, r4, -16240
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16240);

label_7F1FD480:
    ctx->pc = 0x7F1FD480u;
    // 7F1FD480: addi    r5, r5, -11824
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11824);

label_7F1FD484:
    ctx->pc = 0x7F1FD484u;
    // 7F1FD484: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1FD488u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1FD488:
    ctx->pc = 0x7F1FD488u;
    ctx->downcount -= 12;
    // 7F1FD488: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD48C:
    ctx->pc = 0x7F1FD48Cu;
    // 7F1FD48C: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1FD490:
    ctx->pc = 0x7F1FD490u;
    // 7F1FD490: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1FD494:
    ctx->pc = 0x7F1FD494u;
    // 7F1FD494: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FD498:
    ctx->pc = 0x7F1FD498u;
    // 7F1FD498: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F1FD49C:
    ctx->pc = 0x7F1FD49Cu;
    // 7F1FD49C: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1FD4A0:
    ctx->pc = 0x7F1FD4A0u;
    // 7F1FD4A0: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1FD4A4:
    ctx->pc = 0x7F1FD4A4u;
    // 7F1FD4A4: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1FD4A8:
    ctx->pc = 0x7F1FD4A8u;
    // 7F1FD4A8: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1FD4AC:
    ctx->pc = 0x7F1FD4ACu;
    // 7F1FD4AC: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1FD4B0:
    ctx->pc = 0x7F1FD4B0u;
    // 7F1FD4B0: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD4B4:
    ctx->pc = 0x7F1FD4B4u;
    // 7F1FD4B4: bl      0x7F1FD23C
    {
            ctx->lr = 0x7F1FD4B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FD23Cu;
                return;
            }
            goto label_7F1FD23C;
    }

label_7F1FD4B8:
    ctx->pc = 0x7F1FD4B8u;
    ctx->downcount -= 2;
    // 7F1FD4B8: cmpwi   r3, 0
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

label_7F1FD4BC:
    ctx->pc = 0x7F1FD4BCu;
    // 7F1FD4BC: bc    4, 0, 0x7F1FD4D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD4D0;
        }
    }

label_7F1FD4C0:
    ctx->pc = 0x7F1FD4C0u;
    ctx->downcount -= 2;
    // 7F1FD4C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FD4C4:
    ctx->pc = 0x7F1FD4C4u;
    // 7F1FD4C4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1FD4C8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1FD4C8:
    ctx->pc = 0x7F1FD4C8u;
    ctx->downcount -= 2;
    // 7F1FD4C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1FD4CC:
    ctx->pc = 0x7F1FD4CCu;
    // 7F1FD4CC: b       0x7F1FD4DC
    {
            goto label_7F1FD4DC;
    }

label_7F1FD4D0:
    ctx->pc = 0x7F1FD4D0u;
    ctx->downcount -= 3;
    // 7F1FD4D0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F1FD4D4:
    ctx->pc = 0x7F1FD4D4u;
    // 7F1FD4D4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FD4D8:
    ctx->pc = 0x7F1FD4D8u;
    // 7F1FD4D8: stw     r31, -11560(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11560);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1FD4DC:
    ctx->pc = 0x7F1FD4DCu;
    ctx->downcount -= 6;
    // 7F1FD4DC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD4E0:
    ctx->pc = 0x7F1FD4E0u;
    // 7F1FD4E0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1FD4E4:
    ctx->pc = 0x7F1FD4E4u;
    // 7F1FD4E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FD4E8:
    ctx->pc = 0x7F1FD4E8u;
    // 7F1FD4E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1FD4EC:
    ctx->pc = 0x7F1FD4ECu;
    // 7F1FD4EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FD4F0:
    ctx->pc = 0x7F1FD4F0u;
    ctx->downcount -= 8;
    // 7F1FD4F0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FD4F4:
    ctx->pc = 0x7F1FD4F4u;
    // 7F1FD4F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FD4F8:
    ctx->pc = 0x7F1FD4F8u;
    // 7F1FD4F8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD4FC:
    ctx->pc = 0x7F1FD4FCu;
    // 7F1FD4FC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1FD500:
    ctx->pc = 0x7F1FD500u;
    // 7F1FD500: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1FD504:
    ctx->pc = 0x7F1FD504u;
    // 7F1FD504: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FD508:
    ctx->pc = 0x7F1FD508u;
    // 7F1FD508: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FD50C:
    ctx->pc = 0x7F1FD50Cu;
    // 7F1FD50C: bl      0x7F3C9624
    {
            ctx->lr = 0x7F1FD510u;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F1FD510:
    ctx->pc = 0x7F1FD510u;
    ctx->downcount -= 7;
    // 7F1FD510: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F1FD514:
    ctx->pc = 0x7F1FD514u;
    // 7F1FD514: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FD518:
    ctx->pc = 0x7F1FD518u;
    // 7F1FD518: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F1FD51C:
    ctx->pc = 0x7F1FD51Cu;
    // 7F1FD51C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1FD520:
    ctx->pc = 0x7F1FD520u;
    // 7F1FD520: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1FD524:
    ctx->pc = 0x7F1FD524u;
    // 7F1FD524: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD528:
    ctx->pc = 0x7F1FD528u;
    // 7F1FD528: b       0x7F1FD53C
    {
            goto label_7F1FD53C;
    }

label_7F1FD52C:
    loop_7F1FD52C(ctx);
    if (ctx->pc == 0x7F1FD544u) goto label_7F1FD544;
    return;
label_7F1FD530:
    ctx->pc = 0x7F1FD530u;
    // 7F1FD530: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FD534:
    // 7F1FD534: addi    r0, r4, -16
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-16);

label_7F1FD538:
    ctx->pc = 0x7F1FD538u;
    // 7F1FD538: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD53C:
    ctx->downcount -= 2;
    // 7F1FD53C: addic.  r3, r3, -1
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

label_7F1FD540:
    // 7F1FD540: bc    4, 0, 0x7F1FD52C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FD52Cu;
                return;
            }
            goto label_7F1FD52C;
        }
    }

label_7F1FD544:
    ctx->pc = 0x7F1FD544u;
    ctx->downcount -= 6;
    // 7F1FD544: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD548:
    ctx->pc = 0x7F1FD548u;
    // 7F1FD548: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1FD54C:
    ctx->pc = 0x7F1FD54Cu;
    // 7F1FD54C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FD550:
    ctx->pc = 0x7F1FD550u;
    // 7F1FD550: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1FD554:
    ctx->pc = 0x7F1FD554u;
    // 7F1FD554: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FD558:
    ctx->pc = 0x7F1FD558u;
    ctx->downcount -= 22;
    // 7F1FD558: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FD55C:
    ctx->pc = 0x7F1FD55Cu;
    // 7F1FD55C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FD560:
    ctx->pc = 0x7F1FD560u;
    // 7F1FD560: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD564:
    ctx->pc = 0x7F1FD564u;
    // 7F1FD564: stfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FD564u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1FD568:
    ctx->pc = 0x7F1FD568u;
    // 7F1FD568: psq_st   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FD568u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1FD568u);
        if (ctx->exception) return;
    }

label_7F1FD56C:
    ctx->pc = 0x7F1FD56Cu;
    // 7F1FD56C: stfd     f30, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FD56Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1FD570:
    ctx->pc = 0x7F1FD570u;
    // 7F1FD570: psq_st   f30, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FD570u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F1FD570u);
        if (ctx->exception) return;
    }

label_7F1FD574:
    ctx->pc = 0x7F1FD574u;
    // 7F1FD574: stmw     r29, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FD578:
    ctx->pc = 0x7F1FD578u;
    // 7F1FD578: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FD57C:
    ctx->pc = 0x7F1FD57Cu;
    // 7F1FD57C: lwz     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD580:
    ctx->pc = 0x7F1FD580u;
    // 7F1FD580: cmpwi   r0, 1
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

label_7F1FD584:
    ctx->pc = 0x7F1FD584u;
    // 7F1FD584: bc    4, 2, 0x7F1FD58C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD58C;
        }
    }

label_7F1FD588:
    ctx->pc = 0x7F1FD588u;
    ctx->downcount -= 1;
    // 7F1FD588: bl      0x7F1FD4F0
    {
            ctx->lr = 0x7F1FD58Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FD4F0u;
                return;
            }
            goto label_7F1FD4F0;
    }

label_7F1FD58C:
    ctx->pc = 0x7F1FD58Cu;
    ctx->downcount -= 3;
    // 7F1FD58C: lwz     r0, 132(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD590:
    ctx->pc = 0x7F1FD590u;
    // 7F1FD590: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FD594:
    ctx->pc = 0x7F1FD594u;
    // 7F1FD594: bc    12, 2, 0x7F1FD5B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD5B4;
        }
    }

label_7F1FD598:
    ctx->pc = 0x7F1FD598u;
    ctx->downcount -= 6;
    // 7F1FD598: lwz     r4, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FD59C:
    ctx->pc = 0x7F1FD59Cu;
    // 7F1FD59C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1FD5A0:
    ctx->pc = 0x7F1FD5A0u;
    // 7F1FD5A0: lwz     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD5A4:
    ctx->pc = 0x7F1FD5A4u;
    // 7F1FD5A4: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F1FD5A8:
    ctx->pc = 0x7F1FD5A8u;
    // 7F1FD5A8: stw     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD5AC:
    ctx->pc = 0x7F1FD5ACu;
    // 7F1FD5AC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1FD5B0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1FD5B0:
    ctx->pc = 0x7F1FD5B0u;
    ctx->downcount -= 1;
    // 7F1FD5B0: b       0x7F1FD97C
    {
            goto label_7F1FD97C;
    }

label_7F1FD5B4:
    ctx->pc = 0x7F1FD5B4u;
    ctx->downcount -= 6;
    // 7F1FD5B4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F1FD5B8:
    ctx->pc = 0x7F1FD5B8u;
    // 7F1FD5B8: lwz     r3, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FD5BC:
    ctx->pc = 0x7F1FD5BCu;
    // 7F1FD5BC: addi    r4, r4, 18308
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18308);

label_7F1FD5C0:
    ctx->pc = 0x7F1FD5C0u;
    // 7F1FD5C0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F1FD5C4:
    ctx->pc = 0x7F1FD5C4u;
    // 7F1FD5C4: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FD5C8:
    ctx->pc = 0x7F1FD5C8u;
    // 7F1FD5C8: bl      0x7F1FDA1C
    {
            ctx->lr = 0x7F1FD5CCu;
            goto label_7F1FDA1C;
    }

label_7F1FD5CC:
    ctx->pc = 0x7F1FD5CCu;
    ctx->downcount -= 22;
    // 7F1FD5CC: lwz     r3, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FD5D0:
    ctx->pc = 0x7F1FD5D0u;
    // 7F1FD5D0: addi    r7, r29, 108
    ctx->gpr[7] = ctx->gpr[29] + (u32)(s32)(108);

label_7F1FD5D4:
    ctx->pc = 0x7F1FD5D4u;
    // 7F1FD5D4: lwz     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD5D8:
    ctx->pc = 0x7F1FD5D8u;
    // 7F1FD5D8: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F1FD5DC:
    ctx->pc = 0x7F1FD5DCu;
    // 7F1FD5DC: stw     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD5E0:
    ctx->pc = 0x7F1FD5E0u;
    // 7F1FD5E0: lwz     r4, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FD5E4:
    ctx->pc = 0x7F1FD5E4u;
    // 7F1FD5E4: lwz     r3, 100(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FD5E8:
    ctx->pc = 0x7F1FD5E8u;
    // 7F1FD5E8: lwz     r6, 180(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(180);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1FD5EC:
    ctx->pc = 0x7F1FD5ECu;
    // 7F1FD5EC: addi    r5, r4, 184
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(184);

label_7F1FD5F0:
    ctx->pc = 0x7F1FD5F0u;
    // 7F1FD5F0: addi    r8, r4, 192
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(192);

label_7F1FD5F4:
    ctx->pc = 0x7F1FD5F4u;
    // 7F1FD5F4: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F1FD5F8:
    ctx->pc = 0x7F1FD5F8u;
    // 7F1FD5F8: subfic  r3, r6, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[6]) + 1u;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1FD5FC:
    ctx->pc = 0x7F1FD5FCu;
    // 7F1FD5FC: rlwinm r31, r6, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[6], 2u) & 0xFFFFFFFCu;
    }

label_7F1FD600:
    ctx->pc = 0x7F1FD600u;
    // 7F1FD600: rlwinm r6, r3, 2, 0, 29
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F1FD604:
    ctx->pc = 0x7F1FD604u;
    // 7F1FD604: lwzx    r3, r5, r31
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[31];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FD608:
    ctx->pc = 0x7F1FD608u;
    // 7F1FD608: lwzx    r4, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FD60C:
    ctx->pc = 0x7F1FD60Cu;
    // 7F1FD60C: lwzx    r5, r8, r31
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[31];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1FD610:
    ctx->pc = 0x7F1FD610u;
    // 7F1FD610: lwzx    r6, r8, r6
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[6];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1FD614:
    ctx->pc = 0x7F1FD614u;
    // 7F1FD614: stw     r0, 100(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD618:
    ctx->pc = 0x7F1FD618u;
    // 7F1FD618: lwz     r0, 100(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD61C:
    ctx->pc = 0x7F1FD61Cu;
    // 7F1FD61C: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FD620:
    ctx->pc = 0x7F1FD620u;
    // 7F1FD620: bc    12, 1, 0x7F1FD6A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD6A0;
        }
    }

label_7F1FD624:
    ctx->pc = 0x7F1FD624u;
    ctx->downcount -= 6;
    // 7F1FD624: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1FD628:
    ctx->pc = 0x7F1FD628u;
    // 7F1FD628: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F1FD62C:
    ctx->pc = 0x7F1FD62Cu;
    // 7F1FD62C: stw     r0, 100(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD630:
    ctx->pc = 0x7F1FD630u;
    // 7F1FD630: addi    r7, r3, 32304
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(32304);

label_7F1FD634:
    ctx->pc = 0x7F1FD634u;
    // 7F1FD634: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1FD638:
    ctx->pc = 0x7F1FD638u;
    // 7F1FD638: b       0x7F1FD680
    {
            goto label_7F1FD680;
    }

label_7F1FD63C:
    ctx->pc = 0x7F1FD63Cu;
    ctx->downcount -= 51;
    // 7F1FD63C: lwz     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FD640:
    // 7F1FD640: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1FD644:
    ctx->pc = 0x7F1FD644u;
    // 7F1FD644: lbz     r9, 3(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3);
        ctx->gpr[9] = mem_read8(ctx, ea);
    }

label_7F1FD648:
    // 7F1FD648: divw   r0, r4, r3
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1FD64C:
    // 7F1FD64C: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F1FD650:
    // 7F1FD650: subf   r0, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1FD654:
    // 7F1FD654: cmpw    r8, r0
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FD658:
    // 7F1FD658: bc    4, 2, 0x7F1FD660
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD660;
        }
    }

label_7F1FD65C:
    ctx->downcount -= 1;
    // 7F1FD65C: addi    r9, r9, -1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(-1);

label_7F1FD660:
    ctx->downcount -= 2;
    // 7F1FD660: cmpwi   r9, 0
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FD664:
    // 7F1FD664: bc    12, 1, 0x7F1FD670
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD670;
        }
    }

label_7F1FD668:
    ctx->downcount -= 2;
    // 7F1FD668: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1FD66C:
    // 7F1FD66C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F1FD670:
    ctx->pc = 0x7F1FD670u;
    ctx->downcount -= 4;
    // 7F1FD670: stb     r9, 3(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_7F1FD674:
    // 7F1FD674: addi    r5, r5, 16
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(16);

label_7F1FD678:
    // 7F1FD678: addi    r6, r6, 16
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(16);

label_7F1FD67C:
    // 7F1FD67C: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_7F1FD680:
    ctx->pc = 0x7F1FD680u;
    ctx->downcount -= 3;
    // 7F1FD680: lwz     r3, 124(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FD684:
    // 7F1FD684: cmpw    r8, r3
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FD688:
    // 7F1FD688: bc    12, 0, 0x7F1FD63C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FD63Cu;
                return;
            }
            goto label_7F1FD63C;
        }
    }

label_7F1FD68C:
    ctx->pc = 0x7F1FD68Cu;
    ctx->downcount -= 2;
    // 7F1FD68C: cmpw    r30, r3
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FD690:
    ctx->pc = 0x7F1FD690u;
    // 7F1FD690: bc    12, 0, 0x7F1FD748
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD748;
        }
    }

label_7F1FD694:
    ctx->pc = 0x7F1FD694u;
    ctx->downcount -= 2;
    // 7F1FD694: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1FD698:
    ctx->pc = 0x7F1FD698u;
    // 7F1FD698: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1FD69Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1FD69C:
    ctx->pc = 0x7F1FD69Cu;
    ctx->downcount -= 1;
    // 7F1FD69C: b       0x7F1FD748
    {
            goto label_7F1FD748;
    }

label_7F1FD6A0:
    ctx->pc = 0x7F1FD6A0u;
    ctx->downcount -= 2;
    // 7F1FD6A0: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1FD6A4:
    ctx->pc = 0x7F1FD6A4u;
    // 7F1FD6A4: b       0x7F1FD73C
    {
            goto label_7F1FD73C;
    }

label_7F1FD6A8:
    ctx->pc = 0x7F1FD6A8u;
    ctx->downcount -= 17;
    // 7F1FD6A8: lwz     r8, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1FD6AC:
    ctx->pc = 0x7F1FD6ACu;
    // 7F1FD6AC: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD6B0:
    ctx->pc = 0x7F1FD6B0u;
    // 7F1FD6B0: stw     r8, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1FD6B4:
    ctx->pc = 0x7F1FD6B4u;
    // 7F1FD6B4: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD6B8:
    ctx->pc = 0x7F1FD6B8u;
    // 7F1FD6B8: lwz     r8, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1FD6BC:
    ctx->pc = 0x7F1FD6BCu;
    // 7F1FD6BC: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD6C0:
    ctx->pc = 0x7F1FD6C0u;
    // 7F1FD6C0: stw     r8, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1FD6C4:
    ctx->pc = 0x7F1FD6C4u;
    // 7F1FD6C4: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD6C8:
    ctx->pc = 0x7F1FD6C8u;
    // 7F1FD6C8: lha     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1FD6CC:
    ctx->pc = 0x7F1FD6CCu;
    // 7F1FD6CC: sth     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1FD6D0:
    ctx->pc = 0x7F1FD6D0u;
    // 7F1FD6D0: lha     r0, 10(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(10);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1FD6D4:
    ctx->pc = 0x7F1FD6D4u;
    // 7F1FD6D4: sth     r0, 10(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1FD6D8:
    ctx->pc = 0x7F1FD6D8u;
    // 7F1FD6D8: lbz     r0, 3(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F1FD6DC:
    ctx->pc = 0x7F1FD6DCu;
    // 7F1FD6DC: stb     r0, 3(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1FD6E0:
    ctx->pc = 0x7F1FD6E0u;
    // 7F1FD6E0: lwz     r0, 128(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD6E4:
    // 7F1FD6E4: cmpwi   r0, 1
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

label_7F1FD6E8:
    // 7F1FD6E8: bc    4, 2, 0x7F1FD6F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD6F8;
        }
    }

label_7F1FD6EC:
    ctx->downcount -= 3;
    // 7F1FD6EC: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_7F1FD6F0:
    ctx->pc = 0x7F1FD6F0u;
    // 7F1FD6F0: stb     r0, 3(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1FD6F4:
    // 7F1FD6F4: b       0x7F1FD724
    {
            goto label_7F1FD724;
    }

label_7F1FD6F8:
    ctx->pc = 0x7F1FD6F8u;
    ctx->downcount -= 4;
    // 7F1FD6F8: lwz     r8, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1FD6FC:
    ctx->pc = 0x7F1FD6FCu;
    // 7F1FD6FC: lwz     r0, 96(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD700:
    // 7F1FD700: cmpw    r8, r0
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FD704:
    // 7F1FD704: bc    4, 0, 0x7F1FD710
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD710;
        }
    }

label_7F1FD708:
    ctx->downcount -= 2;
    // 7F1FD708: addi    r0, r8, 1
    ctx->gpr[0] = ctx->gpr[8] + (u32)(s32)(1);

label_7F1FD70C:
    ctx->pc = 0x7F1FD70Cu;
    // 7F1FD70C: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD710:
    ctx->pc = 0x7F1FD710u;
    ctx->downcount -= 44;
    // 7F1FD710: lwz     r8, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1FD714:
    ctx->pc = 0x7F1FD714u;
    // 7F1FD714: lwz     r0, 96(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD718:
    // 7F1FD718: rlwinm r8, r8, 6, 0, 25
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[8], 6u) & 0xFFFFFFC0u;
    }

label_7F1FD71C:
    // 7F1FD71C: divw   r0, r8, r0
    {
        s32 dividend = (s32)ctx->gpr[8];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1FD720:
    ctx->pc = 0x7F1FD720u;
    // 7F1FD720: stb     r0, 3(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1FD724:
    ctx->downcount -= 6;
    // 7F1FD724: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_7F1FD728:
    // 7F1FD728: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

label_7F1FD72C:
    // 7F1FD72C: addi    r5, r5, 16
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(16);

label_7F1FD730:
    // 7F1FD730: addi    r6, r6, 16
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(16);

label_7F1FD734:
    // 7F1FD734: addi    r7, r7, 4
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(4);

label_7F1FD738:
    // 7F1FD738: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_7F1FD73C:
    ctx->pc = 0x7F1FD73Cu;
    ctx->downcount -= 3;
    // 7F1FD73C: lwz     r0, 124(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD740:
    // 7F1FD740: cmpw    r9, r0
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FD744:
    // 7F1FD744: bc    12, 0, 0x7F1FD6A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FD6A8u;
                return;
            }
            goto label_7F1FD6A8;
        }
    }

label_7F1FD748:
    ctx->pc = 0x7F1FD748u;
    ctx->downcount -= 5;
    // 7F1FD748: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F1FD74C:
    ctx->pc = 0x7F1FD74Cu;
    // 7F1FD74C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1FD750:
    ctx->pc = 0x7F1FD750u;
    // 7F1FD750: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1FD754:
    ctx->pc = 0x7F1FD754u;
    // 7F1FD754: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1FD758:
    ctx->pc = 0x7F1FD758u;
    // 7F1FD758: bl      0x7F012018
    {
            ctx->lr = 0x7F1FD75Cu;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F1FD75C:
    ctx->pc = 0x7F1FD75Cu;
    ctx->downcount -= 5;
    // 7F1FD75C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1FD760:
    ctx->pc = 0x7F1FD760u;
    // 7F1FD760: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F1FD764:
    ctx->pc = 0x7F1FD764u;
    // 7F1FD764: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F1FD768:
    ctx->pc = 0x7F1FD768u;
    // 7F1FD768: or.   r0, r4, r0
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

label_7F1FD76C:
    ctx->pc = 0x7F1FD76Cu;
    // 7F1FD76C: bc    4, 2, 0x7F1FD77C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD77C;
        }
    }

label_7F1FD770:
    ctx->pc = 0x7F1FD770u;
    ctx->downcount -= 3;
    // 7F1FD770: lwz     r0, 128(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD774:
    ctx->pc = 0x7F1FD774u;
    // 7F1FD774: cmpwi   r0, 1
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

label_7F1FD778:
    ctx->pc = 0x7F1FD778u;
    // 7F1FD778: bc    4, 2, 0x7F1FD790
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD790;
        }
    }

label_7F1FD77C:
    ctx->pc = 0x7F1FD77Cu;
    ctx->downcount -= 5;
    // 7F1FD77C: lwz     r3, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FD780:
    ctx->pc = 0x7F1FD780u;
    // 7F1FD780: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD784:
    ctx->pc = 0x7F1FD784u;
    // 7F1FD784: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F1FD788:
    ctx->pc = 0x7F1FD788u;
    // 7F1FD788: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD78C:
    ctx->pc = 0x7F1FD78Cu;
    // 7F1FD78C: b       0x7F1FD7A4
    {
            goto label_7F1FD7A4;
    }

label_7F1FD790:
    ctx->pc = 0x7F1FD790u;
    ctx->downcount -= 5;
    // 7F1FD790: lwz     r3, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FD794:
    ctx->pc = 0x7F1FD794u;
    // 7F1FD794: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD798:
    ctx->pc = 0x7F1FD798u;
    // 7F1FD798: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F1FD79C:
    ctx->pc = 0x7F1FD79Cu;
    // 7F1FD79C: stw     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD7A0:
    ctx->pc = 0x7F1FD7A0u;
    // 7F1FD7A0: b       0x7F1FD97C
    {
            goto label_7F1FD97C;
    }

label_7F1FD7A4:
    ctx->pc = 0x7F1FD7A4u;
    ctx->downcount -= 3;
    // 7F1FD7A4: lwz     r0, 100(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD7A8:
    ctx->pc = 0x7F1FD7A8u;
    // 7F1FD7A8: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FD7AC:
    ctx->pc = 0x7F1FD7ACu;
    // 7F1FD7AC: bc    4, 1, 0x7F1FD97C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD97C;
        }
    }

label_7F1FD7B0:
    ctx->pc = 0x7F1FD7B0u;
    ctx->downcount -= 2;
    // 7F1FD7B0: cmpwi   r0, 2
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

label_7F1FD7B4:
    ctx->pc = 0x7F1FD7B4u;
    // 7F1FD7B4: bc    4, 1, 0x7F1FD97C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD97C;
        }
    }

label_7F1FD7B8:
    ctx->pc = 0x7F1FD7B8u;
    ctx->downcount -= 5;
    // 7F1FD7B8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F1FD7BC:
    ctx->pc = 0x7F1FD7BCu;
    // 7F1FD7BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1FD7C0:
    ctx->pc = 0x7F1FD7C0u;
    // 7F1FD7C0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1FD7C4:
    ctx->pc = 0x7F1FD7C4u;
    // 7F1FD7C4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1FD7C8:
    ctx->pc = 0x7F1FD7C8u;
    // 7F1FD7C8: bl      0x7F012018
    {
            ctx->lr = 0x7F1FD7CCu;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F1FD7CC:
    ctx->pc = 0x7F1FD7CCu;
    ctx->downcount -= 5;
    // 7F1FD7CC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1FD7D0:
    ctx->pc = 0x7F1FD7D0u;
    // 7F1FD7D0: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F1FD7D4:
    ctx->pc = 0x7F1FD7D4u;
    // 7F1FD7D4: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F1FD7D8:
    ctx->pc = 0x7F1FD7D8u;
    // 7F1FD7D8: or.   r0, r4, r0
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

label_7F1FD7DC:
    ctx->pc = 0x7F1FD7DCu;
    // 7F1FD7DC: bc    12, 2, 0x7F1FD97C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD97C;
        }
    }

label_7F1FD7E0:
    ctx->pc = 0x7F1FD7E0u;
    ctx->downcount -= 14;
    // 7F1FD7E0: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F1FD7E4:
    ctx->pc = 0x7F1FD7E4u;
    // 7F1FD7E4: addi    r3, r29, 60
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(60);

label_7F1FD7E8:
    ctx->pc = 0x7F1FD7E8u;
    // 7F1FD7E8: addi    r9, r4, 28636
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(28636);

label_7F1FD7EC:
    ctx->pc = 0x7F1FD7ECu;
    // 7F1FD7EC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1FD7F0:
    ctx->pc = 0x7F1FD7F0u;
    // 7F1FD7F0: lwz     r8, 176(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(176);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1FD7F4:
    ctx->pc = 0x7F1FD7F4u;
    // 7F1FD7F4: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1FD7F8:
    ctx->pc = 0x7F1FD7F8u;
    // 7F1FD7F8: lwz     r7, 180(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(180);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1FD7FC:
    ctx->pc = 0x7F1FD7FCu;
    // 7F1FD7FC: lwz     r6, 184(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(184);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1FD800:
    ctx->pc = 0x7F1FD800u;
    // 7F1FD800: lwz     r0, 188(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(188);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD804:
    ctx->pc = 0x7F1FD804u;
    // 7F1FD804: stw     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1FD808:
    ctx->pc = 0x7F1FD808u;
    // 7F1FD808: stw     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1FD80C:
    ctx->pc = 0x7F1FD80Cu;
    // 7F1FD80C: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1FD810:
    ctx->pc = 0x7F1FD810u;
    // 7F1FD810: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD814:
    ctx->pc = 0x7F1FD814u;
    // 7F1FD814: bl      0x800261D8
    {
            ctx->lr = 0x7F1FD818u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F1FD818:
    ctx->pc = 0x7F1FD818u;
    ctx->downcount -= 2;
    // 7F1FD818: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1FD81C:
    ctx->pc = 0x7F1FD81Cu;
    // 7F1FD81C: bl      0x7F3CC594
    {
            ctx->lr = 0x7F1FD820u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F1FD820:
    ctx->pc = 0x7F1FD820u;
    ctx->downcount -= 5;
    // 7F1FD820: fmr    f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FD820u)) return;
    ctx->fpr[30] = ctx->fpr[1];

label_7F1FD824:
    ctx->pc = 0x7F1FD824u;
    // 7F1FD824: addi    r3, r29, 76
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(76);

label_7F1FD828:
    ctx->pc = 0x7F1FD828u;
    // 7F1FD828: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1FD82C:
    ctx->pc = 0x7F1FD82Cu;
    // 7F1FD82C: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1FD830:
    ctx->pc = 0x7F1FD830u;
    // 7F1FD830: bl      0x800261D8
    {
            ctx->lr = 0x7F1FD834u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F1FD834:
    ctx->pc = 0x7F1FD834u;
    ctx->downcount -= 2;
    // 7F1FD834: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1FD838:
    ctx->pc = 0x7F1FD838u;
    // 7F1FD838: bl      0x7F3CC594
    {
            ctx->lr = 0x7F1FD83Cu;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F1FD83C:
    ctx->pc = 0x7F1FD83Cu;
    ctx->downcount -= 2;
    // 7F1FD83C: fcmpo   cr0, f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FD83Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[1], true);

label_7F1FD840:
    ctx->pc = 0x7F1FD840u;
    // 7F1FD840: bc    4, 0, 0x7F1FD848
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD848;
        }
    }

label_7F1FD844:
    ctx->pc = 0x7F1FD844u;
    ctx->downcount -= 1;
    // 7F1FD844: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1FD844u)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F1FD848:
    ctx->pc = 0x7F1FD848u;
    ctx->downcount -= 4;
    // 7F1FD848: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FD84C:
    ctx->pc = 0x7F1FD84Cu;
    // 7F1FD84C: lfs     f0, 13464(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FD84Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13464);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FD850:
    ctx->pc = 0x7F1FD850u;
    // 7F1FD850: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FD850u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1FD854:
    ctx->pc = 0x7F1FD854u;
    // 7F1FD854: bc    4, 0, 0x7F1FD97C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD97C;
        }
    }

label_7F1FD858:
    ctx->pc = 0x7F1FD858u;
    ctx->downcount -= 7;
    // 7F1FD858: lwz     r3, 104(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FD85C:
    ctx->pc = 0x7F1FD85Cu;
    // 7F1FD85C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1FD860:
    ctx->pc = 0x7F1FD860u;
    // 7F1FD860: stw     r0, 104(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD864:
    ctx->pc = 0x7F1FD864u;
    // 7F1FD864: lwz     r3, 104(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FD868:
    ctx->pc = 0x7F1FD868u;
    // 7F1FD868: lwz     r0, 96(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD86C:
    ctx->pc = 0x7F1FD86Cu;
    // 7F1FD86C: cmpw    r3, r0
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

label_7F1FD870:
    ctx->pc = 0x7F1FD870u;
    // 7F1FD870: bc    12, 0, 0x7F1FD97C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD97C;
        }
    }

label_7F1FD874:
    ctx->pc = 0x7F1FD874u;
    ctx->downcount -= 5;
    // 7F1FD874: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1FD878:
    ctx->pc = 0x7F1FD878u;
    // 7F1FD878: stw     r0, 104(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD87C:
    ctx->pc = 0x7F1FD87Cu;
    // 7F1FD87C: lwz     r10, 124(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(124);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F1FD880:
    ctx->pc = 0x7F1FD880u;
    // 7F1FD880: cmpwi   r10, 4
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FD884:
    ctx->pc = 0x7F1FD884u;
    // 7F1FD884: bc    4, 0, 0x7F1FD97C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FD97C;
        }
    }

label_7F1FD888:
    ctx->pc = 0x7F1FD888u;
    ctx->downcount -= 108;
    // 7F1FD888: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F1FD88C:
    ctx->pc = 0x7F1FD88Cu;
    // 7F1FD88C: lis     r5, 17200
    ctx->gpr[5] = ((u32)(s32)(17200) << 16);

label_7F1FD890:
    ctx->pc = 0x7F1FD890u;
    // 7F1FD890: addi    r8, r3, 28636
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F1FD894:
    ctx->pc = 0x7F1FD894u;
    // 7F1FD894: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F1FD898:
    ctx->pc = 0x7F1FD898u;
    // 7F1FD898: lwz     r6, 920(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(920);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1FD89C:
    ctx->pc = 0x7F1FD89Cu;
    // 7F1FD89C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FD8A0:
    ctx->pc = 0x7F1FD8A0u;
    // 7F1FD8A0: addi    r4, r3, 13456
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13456);

label_7F1FD8A4:
    ctx->pc = 0x7F1FD8A4u;
    // 7F1FD8A4: lwz     r0, 924(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(924);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD8A8:
    ctx->pc = 0x7F1FD8A8u;
    // 7F1FD8A8: xoris   r3, r6, 0x8000
    ctx->gpr[3] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F1FD8AC:
    ctx->pc = 0x7F1FD8ACu;
    // 7F1FD8AC: stw     r5, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1FD8B0:
    ctx->pc = 0x7F1FD8B0u;
    // 7F1FD8B0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1FD8B4:
    ctx->pc = 0x7F1FD8B4u;
    // 7F1FD8B4: lfd     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FD8B4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FD8B8:
    ctx->pc = 0x7F1FD8B8u;
    // 7F1FD8B8: stw     r3, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FD8BC:
    ctx->pc = 0x7F1FD8BCu;
    // 7F1FD8BC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FD8C0:
    ctx->pc = 0x7F1FD8C0u;
    // 7F1FD8C0: addi    r4, r3, 13476
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13476);

label_7F1FD8C4:
    ctx->pc = 0x7F1FD8C4u;
    // 7F1FD8C4: lfs     f3, 13472(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1FD8C4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(13472);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1FD8C8:
    ctx->pc = 0x7F1FD8C8u;
    // 7F1FD8C8: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FD8C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FD8CC:
    ctx->pc = 0x7F1FD8CCu;
    // 7F1FD8CC: lis     r9, 32582
    ctx->gpr[9] = ((u32)(s32)(32582) << 16);

label_7F1FD8D0:
    ctx->pc = 0x7F1FD8D0u;
    // 7F1FD8D0: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD8D4:
    ctx->pc = 0x7F1FD8D4u;
    // 7F1FD8D4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FD8D8:
    ctx->pc = 0x7F1FD8D8u;
    // 7F1FD8D8: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1FD8D8u)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_7F1FD8DC:
    ctx->pc = 0x7F1FD8DCu;
    // 7F1FD8DC: lfs     f4, 896(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F1FD8DCu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(896);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F1FD8E0:
    ctx->pc = 0x7F1FD8E0u;
    // 7F1FD8E0: stw     r5, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1FD8E4:
    ctx->pc = 0x7F1FD8E4u;
    // 7F1FD8E4: rlwinm r6, r10, 4, 0, 27
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[10], 4u) & 0xFFFFFFF0u;
    }

label_7F1FD8E8:
    ctx->pc = 0x7F1FD8E8u;
    // 7F1FD8E8: lwz     r0, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD8EC:
    ctx->pc = 0x7F1FD8ECu;
    // 7F1FD8EC: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FD8ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FD8F0:
    ctx->pc = 0x7F1FD8F0u;
    // 7F1FD8F0: fmuls   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FD8F0u)) return;
    ppc_fmuls(ctx, 1, 3, 1);

label_7F1FD8F4:
    ctx->pc = 0x7F1FD8F4u;
    // 7F1FD8F4: add   r5, r0, r31
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F1FD8F8:
    ctx->pc = 0x7F1FD8F8u;
    // 7F1FD8F8: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1FD8F8u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1FD8FC:
    ctx->pc = 0x7F1FD8FCu;
    // 7F1FD8FC: lfs     f3, 13468(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F1FD8FCu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(13468);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1FD900:
    ctx->pc = 0x7F1FD900u;
    // 7F1FD900: lwz     r30, 184(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(184);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F1FD904:
    ctx->pc = 0x7F1FD904u;
    // 7F1FD904: lwz     r31, 192(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(192);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1FD908:
    ctx->pc = 0x7F1FD908u;
    // 7F1FD908: fdivs   f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FD908u)) return;
    ppc_fdivs(ctx, 2, 1, 0);

label_7F1FD90C:
    ctx->pc = 0x7F1FD90Cu;
    // 7F1FD90C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FD90Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FD910:
    ctx->pc = 0x7F1FD910u;
    // 7F1FD910: lfs     f0, 13480(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FD910u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13480);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FD914:
    ctx->pc = 0x7F1FD914u;
    // 7F1FD914: add   r30, r30, r6
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_7F1FD918:
    ctx->pc = 0x7F1FD918u;
    // 7F1FD918: add   r31, r31, r6
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F1FD91C:
    ctx->pc = 0x7F1FD91Cu;
    // 7F1FD91C: stfs     f0, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FD91Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FD920:
    ctx->pc = 0x7F1FD920u;
    // 7F1FD920: fdivs   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1FD920u)) return;
    ppc_fdivs(ctx, 2, 3, 2);

label_7F1FD924:
    ctx->pc = 0x7F1FD924u;
    // 7F1FD924: fdivs   f31, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x7F1FD924u)) return;
    ppc_fdivs(ctx, 31, 3, 4);

label_7F1FD928:
    ctx->pc = 0x7F1FD928u;
    // 7F1FD928: fdivs   f30, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x7F1FD928u)) return;
    ppc_fdivs(ctx, 30, 2, 4);

label_7F1FD92C:
    ctx->pc = 0x7F1FD92Cu;
    // 7F1FD92C: fmuls   f31, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FD92Cu)) return;
    ppc_fmuls(ctx, 31, 31, 1);

label_7F1FD930:
    ctx->pc = 0x7F1FD930u;
    // 7F1FD930: fmuls   f30, f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FD930u)) return;
    ppc_fmuls(ctx, 30, 30, 1);

label_7F1FD934:
    ctx->pc = 0x7F1FD934u;
    // 7F1FD934: bl      0x7F1FD9A0
    {
            ctx->lr = 0x7F1FD938u;
            goto label_7F1FD9A0;
    }

label_7F1FD938:
    ctx->pc = 0x7F1FD938u;
    ctx->downcount -= 3;
    // 7F1FD938: fmuls   f0, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FD938u)) return;
    ppc_fmuls(ctx, 0, 31, 1);

label_7F1FD93C:
    ctx->pc = 0x7F1FD93Cu;
    // 7F1FD93C: stfs     f0, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FD93Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FD940:
    ctx->pc = 0x7F1FD940u;
    // 7F1FD940: bl      0x7F1FD9A0
    {
            ctx->lr = 0x7F1FD944u;
            goto label_7F1FD9A0;
    }

label_7F1FD944:
    ctx->pc = 0x7F1FD944u;
    ctx->downcount -= 14;
    // 7F1FD944: fmuls   f0, f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FD944u)) return;
    ppc_fmuls(ctx, 0, 30, 1);

label_7F1FD948:
    ctx->pc = 0x7F1FD948u;
    // 7F1FD948: li      r0, 51
    ctx->gpr[0] = (u32)(s32)(51);

label_7F1FD94C:
    ctx->pc = 0x7F1FD94Cu;
    // 7F1FD94C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1FD950:
    ctx->pc = 0x7F1FD950u;
    // 7F1FD950: stfs     f0, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FD950u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FD954:
    ctx->pc = 0x7F1FD954u;
    // 7F1FD954: sth     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1FD958:
    ctx->pc = 0x7F1FD958u;
    // 7F1FD958: sth     r0, 10(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1FD95C:
    ctx->pc = 0x7F1FD95Cu;
    // 7F1FD95C: stb     r4, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F1FD960:
    ctx->pc = 0x7F1FD960u;
    // 7F1FD960: lwz     r0, 124(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD964:
    ctx->pc = 0x7F1FD964u;
    // 7F1FD964: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1FD968:
    ctx->pc = 0x7F1FD968u;
    // 7F1FD968: add   r3, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1FD96C:
    ctx->pc = 0x7F1FD96Cu;
    // 7F1FD96C: stw     r4, 108(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1FD970:
    ctx->pc = 0x7F1FD970u;
    // 7F1FD970: lwz     r3, 124(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FD974:
    ctx->pc = 0x7F1FD974u;
    // 7F1FD974: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1FD978:
    ctx->pc = 0x7F1FD978u;
    // 7F1FD978: stw     r0, 124(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD97C:
    ctx->pc = 0x7F1FD97Cu;
    ctx->downcount -= 20;
    // 7F1FD97C: psq_l   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FD97Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1FD97Cu);
        if (ctx->exception) return;
    }

label_7F1FD980:
    ctx->pc = 0x7F1FD980u;
    // 7F1FD980: lfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FD980u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FD984:
    ctx->pc = 0x7F1FD984u;
    // 7F1FD984: psq_l   f30, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FD984u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F1FD984u);
        if (ctx->exception) return;
    }

label_7F1FD988:
    ctx->pc = 0x7F1FD988u;
    // 7F1FD988: lfd     f30, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FD988u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FD98C:
    ctx->pc = 0x7F1FD98Cu;
    // 7F1FD98C: lmw     r29, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FD990:
    ctx->pc = 0x7F1FD990u;
    // 7F1FD990: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD994:
    ctx->pc = 0x7F1FD994u;
    // 7F1FD994: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FD998:
    ctx->pc = 0x7F1FD998u;
    // 7F1FD998: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F1FD99C:
    ctx->pc = 0x7F1FD99Cu;
    // 7F1FD99C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FD9A0:
    ctx->pc = 0x7F1FD9A0u;
    ctx->downcount -= 4;
    // 7F1FD9A0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FD9A4:
    ctx->pc = 0x7F1FD9A4u;
    // 7F1FD9A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FD9A8:
    ctx->pc = 0x7F1FD9A8u;
    // 7F1FD9A8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD9AC:
    ctx->pc = 0x7F1FD9ACu;
    // 7F1FD9AC: bl      0x7F1FD9F8
    {
            ctx->lr = 0x7F1FD9B0u;
            goto label_7F1FD9F8;
    }

label_7F1FD9B0:
    ctx->pc = 0x7F1FD9B0u;
    ctx->downcount -= 35;
    // 7F1FD9B0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1FD9B4:
    ctx->pc = 0x7F1FD9B4u;
    // 7F1FD9B4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FD9B8:
    ctx->pc = 0x7F1FD9B8u;
    // 7F1FD9B8: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FD9BC:
    ctx->pc = 0x7F1FD9BCu;
    // 7F1FD9BC: addi    r5, r4, 13496
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(13496);

label_7F1FD9C0:
    ctx->pc = 0x7F1FD9C0u;
    // 7F1FD9C0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FD9C4:
    ctx->pc = 0x7F1FD9C4u;
    // 7F1FD9C4: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1FD9C4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FD9C8:
    ctx->pc = 0x7F1FD9C8u;
    // 7F1FD9C8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FD9CC:
    ctx->pc = 0x7F1FD9CCu;
    // 7F1FD9CC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FD9D0:
    ctx->pc = 0x7F1FD9D0u;
    // 7F1FD9D0: lfs     f1, 13484(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FD9D0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13484);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FD9D4:
    ctx->pc = 0x7F1FD9D4u;
    // 7F1FD9D4: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FD9D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FD9D8:
    ctx->pc = 0x7F1FD9D8u;
    // 7F1FD9D8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FD9DC:
    ctx->pc = 0x7F1FD9DCu;
    // 7F1FD9DC: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1FD9DCu)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F1FD9E0:
    ctx->pc = 0x7F1FD9E0u;
    // 7F1FD9E0: lfs     f0, 13488(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FD9E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13488);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FD9E4:
    ctx->pc = 0x7F1FD9E4u;
    // 7F1FD9E4: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FD9E4u)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_7F1FD9E8:
    ctx->pc = 0x7F1FD9E8u;
    // 7F1FD9E8: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FD9E8u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F1FD9EC:
    ctx->pc = 0x7F1FD9ECu;
    // 7F1FD9EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FD9F0:
    ctx->pc = 0x7F1FD9F0u;
    // 7F1FD9F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1FD9F4:
    ctx->pc = 0x7F1FD9F4u;
    // 7F1FD9F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FD9F8:
    ctx->pc = 0x7F1FD9F8u;
    ctx->downcount -= 13;
    // 7F1FD9F8: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1FD9FC:
    ctx->pc = 0x7F1FD9FCu;
    // 7F1FD9FC: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F1FDA00:
    ctx->pc = 0x7F1FDA00u;
    // 7F1FDA00: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F1FDA04:
    ctx->pc = 0x7F1FDA04u;
    // 7F1FDA04: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FDA08:
    ctx->pc = 0x7F1FDA08u;
    // 7F1FDA08: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F1FDA0C:
    ctx->pc = 0x7F1FDA0Cu;
    // 7F1FDA0C: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F1FDA10:
    ctx->pc = 0x7F1FDA10u;
    // 7F1FDA10: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1FDA14:
    ctx->pc = 0x7F1FDA14u;
    // 7F1FDA14: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FDA18:
    ctx->pc = 0x7F1FDA18u;
    // 7F1FDA18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FDA1C:
    ctx->pc = 0x7F1FDA1Cu;
    ctx->downcount -= 7;
    // 7F1FDA1C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FDA20:
    ctx->pc = 0x7F1FDA20u;
    // 7F1FDA20: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FDA24:
    ctx->pc = 0x7F1FDA24u;
    // 7F1FDA24: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FDA28:
    ctx->pc = 0x7F1FDA28u;
    // 7F1FDA28: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1FDA2C:
    ctx->pc = 0x7F1FDA2Cu;
    // 7F1FDA2C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FDA30:
    ctx->pc = 0x7F1FDA30u;
    // 7F1FDA30: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FDA34:
    ctx->pc = 0x7F1FDA34u;
    // 7F1FDA34: bl      0x7F01B234
    {
            ctx->lr = 0x7F1FDA38u;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F1FDA38:
    ctx->pc = 0x7F1FDA38u;
    ctx->downcount -= 7;
    // 7F1FDA38: stw     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FDA3C:
    ctx->pc = 0x7F1FDA3Cu;
    // 7F1FDA3C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FDA40:
    ctx->pc = 0x7F1FDA40u;
    // 7F1FDA40: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1FDA44:
    ctx->pc = 0x7F1FDA44u;
    // 7F1FDA44: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FDA48:
    ctx->pc = 0x7F1FDA48u;
    // 7F1FDA48: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1FDA4C:
    ctx->pc = 0x7F1FDA4Cu;
    // 7F1FDA4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FDA50:
    ctx->pc = 0x7F1FDA50u;
    ctx->downcount -= 7;
    // 7F1FDA50: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FDA54:
    ctx->pc = 0x7F1FDA54u;
    // 7F1FDA54: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FDA58:
    ctx->pc = 0x7F1FDA58u;
    // 7F1FDA58: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FDA5C:
    ctx->pc = 0x7F1FDA5Cu;
    // 7F1FDA5C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1FDA60:
    ctx->pc = 0x7F1FDA60u;
    // 7F1FDA60: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FDA64:
    ctx->pc = 0x7F1FDA64u;
    // 7F1FDA64: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FDA68:
    ctx->pc = 0x7F1FDA68u;
    // 7F1FDA68: bl      0x7F1C6BB4
    {
            ctx->lr = 0x7F1FDA6Cu;
            ctx->pc = 0x7F1C6BB4u;
            return;
    }

label_7F1FDA6C:
    ctx->pc = 0x7F1FDA6Cu;
    ctx->downcount -= 10;
    // 7F1FDA6C: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FDA70:
    ctx->pc = 0x7F1FDA70u;
    // 7F1FDA70: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F1FDA74:
    ctx->pc = 0x7F1FDA74u;
    // 7F1FDA74: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1FDA78:
    ctx->pc = 0x7F1FDA78u;
    // 7F1FDA78: stw     r0, -11408(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11408);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FDA7C:
    ctx->pc = 0x7F1FDA7Cu;
    // 7F1FDA7C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FDA80:
    ctx->pc = 0x7F1FDA80u;
    // 7F1FDA80: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1FDA84:
    ctx->pc = 0x7F1FDA84u;
    // 7F1FDA84: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FDA88:
    ctx->pc = 0x7F1FDA88u;
    // 7F1FDA88: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1FDA8C:
    ctx->pc = 0x7F1FDA8Cu;
    // 7F1FDA8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FDA90:
    ctx->pc = 0x7F1FDA90u;
    ctx->downcount -= 22;
    // 7F1FDA90: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FDA94:
    ctx->pc = 0x7F1FDA94u;
    // 7F1FDA94: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FDA98:
    ctx->pc = 0x7F1FDA98u;
    // 7F1FDA98: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_7F1FDA9C:
    ctx->pc = 0x7F1FDA9Cu;
    // 7F1FDA9C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FDAA0:
    ctx->pc = 0x7F1FDAA0u;
    // 7F1FDAA0: addi    r0, r6, -5536
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-5536);

label_7F1FDAA4:
    ctx->pc = 0x7F1FDAA4u;
    // 7F1FDAA4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FDAA8:
    ctx->pc = 0x7F1FDAA8u;
    // 7F1FDAA8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FDAAC:
    ctx->pc = 0x7F1FDAACu;
    // 7F1FDAAC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FDAB0:
    ctx->pc = 0x7F1FDAB0u;
    // 7F1FDAB0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FDAB4:
    ctx->pc = 0x7F1FDAB4u;
    // 7F1FDAB4: stw     r0, 304(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FDAB8:
    ctx->pc = 0x7F1FDAB8u;
    // 7F1FDAB8: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1FDABC:
    ctx->pc = 0x7F1FDABCu;
    // 7F1FDABC: bl      0x7F3C2534
    {
            ctx->lr = 0x7F1FDAC0u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F1FDAC0:
    ctx->pc = 0x7F1FDAC0u;
    ctx->downcount -= 9;
    // 7F1FDAC0: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F1FDAC4:
    ctx->pc = 0x7F1FDAC4u;
    // 7F1FDAC4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1FDAC8:
    ctx->pc = 0x7F1FDAC8u;
    // 7F1FDAC8: stw     r0, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FDACC:
    ctx->pc = 0x7F1FDACCu;
    // 7F1FDACC: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F1FDAD0:
    ctx->pc = 0x7F1FDAD0u;
    // 7F1FDAD0: stw     r6, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1FDAD4:
    ctx->pc = 0x7F1FDAD4u;
    // 7F1FDAD4: lwz     r7, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1FDAD8:
    ctx->pc = 0x7F1FDAD8u;
    // 7F1FDAD8: lwz     r8, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1FDADC:
    ctx->pc = 0x7F1FDADCu;
    // 7F1FDADC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1FDAE0:
    loop_7F1FDAE0(ctx);
    if (ctx->pc == 0x7F1FDB5Cu) goto label_7F1FDB5C;
    return;
label_7F1FDAE4:
    // 7F1FDAE4: addi    r0, r6, 108
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(108);

label_7F1FDAE8:
    // 7F1FDAE8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1FDAEC:
    // 7F1FDAEC: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F1FDAF0:
    ctx->pc = 0x7F1FDAF0u;
    // 7F1FDAF0: stwx    r3, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FDAF4:
    // 7F1FDAF4: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F1FDAF8:
    // 7F1FDAF8: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_7F1FDAFC:
    // 7F1FDAFC: addi    r6, r6, 4
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4);

label_7F1FDB00:
    ctx->pc = 0x7F1FDB00u;
    // 7F1FDB00: sth     r5, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F1FDB04:
    ctx->pc = 0x7F1FDB04u;
    // 7F1FDB04: sth     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F1FDB08:
    ctx->pc = 0x7F1FDB08u;
    // 7F1FDB08: sth     r5, 6(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F1FDB0C:
    ctx->pc = 0x7F1FDB0Cu;
    // 7F1FDB0C: sth     r5, 6(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F1FDB10:
    ctx->pc = 0x7F1FDB10u;
    // 7F1FDB10: sth     r4, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F1FDB14:
    ctx->pc = 0x7F1FDB14u;
    // 7F1FDB14: sth     r4, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F1FDB18:
    ctx->pc = 0x7F1FDB18u;
    // 7F1FDB18: sth     r4, 14(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F1FDB1C:
    ctx->pc = 0x7F1FDB1Cu;
    // 7F1FDB1C: sth     r4, 14(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F1FDB20:
    ctx->pc = 0x7F1FDB20u;
    // 7F1FDB20: sth     r5, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F1FDB24:
    ctx->pc = 0x7F1FDB24u;
    // 7F1FDB24: sth     r5, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F1FDB28:
    ctx->pc = 0x7F1FDB28u;
    // 7F1FDB28: sth     r5, 10(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F1FDB2C:
    ctx->pc = 0x7F1FDB2Cu;
    // 7F1FDB2C: sth     r5, 10(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F1FDB30:
    ctx->pc = 0x7F1FDB30u;
    // 7F1FDB30: stb     r3, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F1FDB34:
    ctx->pc = 0x7F1FDB34u;
    // 7F1FDB34: stb     r3, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F1FDB38:
    ctx->pc = 0x7F1FDB38u;
    // 7F1FDB38: stb     r3, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F1FDB3C:
    ctx->pc = 0x7F1FDB3Cu;
    // 7F1FDB3C: stb     r3, 1(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F1FDB40:
    ctx->pc = 0x7F1FDB40u;
    // 7F1FDB40: stb     r3, 2(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F1FDB44:
    ctx->pc = 0x7F1FDB44u;
    // 7F1FDB44: stb     r3, 2(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F1FDB48:
    ctx->pc = 0x7F1FDB48u;
    // 7F1FDB48: stb     r0, 3(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1FDB4C:
    // 7F1FDB4C: addi    r8, r8, 16
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(16);

label_7F1FDB50:
    ctx->pc = 0x7F1FDB50u;
    // 7F1FDB50: stb     r0, 3(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1FDB54:
    // 7F1FDB54: addi    r7, r7, 16
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(16);

label_7F1FDB58:
    // 7F1FDB58: bc    16, 0, 0x7F1FDAE0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FDAE0u;
                return;
            }
            goto label_7F1FDAE0;
        }
    }

label_7F1FDB5C:
    ctx->pc = 0x7F1FDB5Cu;
    ctx->downcount -= 3;
    // 7F1FDB5C: lwz     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FDB60:
    ctx->pc = 0x7F1FDB60u;
    // 7F1FDB60: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_7F1FDB64:
    ctx->pc = 0x7F1FDB64u;
    // 7F1FDB64: bl      0x7F3C9120
    {
            ctx->lr = 0x7F1FDB68u;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F1FDB68:
    ctx->pc = 0x7F1FDB68u;
    ctx->downcount -= 3;
    // 7F1FDB68: lwz     r3, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FDB6C:
    ctx->pc = 0x7F1FDB6Cu;
    // 7F1FDB6C: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_7F1FDB70:
    ctx->pc = 0x7F1FDB70u;
    // 7F1FDB70: bl      0x7F3C9120
    {
            ctx->lr = 0x7F1FDB74u;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F1FDB74:
    ctx->pc = 0x7F1FDB74u;
    ctx->downcount -= 17;
    // 7F1FDB74: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FDB78:
    ctx->pc = 0x7F1FDB78u;
    // 7F1FDB78: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1FDB7C:
    ctx->pc = 0x7F1FDB7Cu;
    // 7F1FDB7C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FDB80:
    ctx->pc = 0x7F1FDB80u;
    // 7F1FDB80: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FDB84:
    ctx->pc = 0x7F1FDB84u;
    // 7F1FDB84: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1FDB88:
    ctx->pc = 0x7F1FDB88u;
    // 7F1FDB88: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FDB8C:
    ctx->pc = 0x7F1FDB8Cu;
    ctx->downcount -= 22;
    // 7F1FDB8C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FDB90:
    ctx->pc = 0x7F1FDB90u;
    // 7F1FDB90: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FDB94:
    ctx->pc = 0x7F1FDB94u;
    // 7F1FDB94: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FDB98:
    ctx->pc = 0x7F1FDB98u;
    // 7F1FDB98: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1FDB9C:
    ctx->pc = 0x7F1FDB9Cu;
    // 7F1FDB9C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FDBA0:
    ctx->pc = 0x7F1FDBA0u;
    // 7F1FDBA0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FDBA4:
    ctx->pc = 0x7F1FDBA4u;
    // 7F1FDBA4: stw     r0, 132(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FDBA8:
    ctx->pc = 0x7F1FDBA8u;
    // 7F1FDBA8: lis     r3, 187
    ctx->gpr[3] = ((u32)(s32)(187) << 16);

label_7F1FDBAC:
    ctx->pc = 0x7F1FDBACu;
    // 7F1FDBAC: addi    r3, r3, -11026
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11026);

label_7F1FDBB0:
    ctx->pc = 0x7F1FDBB0u;
    // 7F1FDBB0: stw     r0, 124(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FDBB4:
    ctx->pc = 0x7F1FDBB4u;
    // 7F1FDBB4: stw     r0, 104(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FDBB8:
    ctx->pc = 0x7F1FDBB8u;
    // 7F1FDBB8: bl      0x7F3B6420
    {
            ctx->lr = 0x7F1FDBBCu;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F1FDBBC:
    ctx->pc = 0x7F1FDBBCu;
    ctx->downcount -= 7;
    // 7F1FDBBC: lis     r5, 10
    ctx->gpr[5] = ((u32)(s32)(10) << 16);

label_7F1FDBC0:
    ctx->pc = 0x7F1FDBC0u;
    // 7F1FDBC0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FDBC4:
    ctx->pc = 0x7F1FDBC4u;
    // 7F1FDBC4: addi    r3, r5, 1028
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(1028);

label_7F1FDBC8:
    ctx->pc = 0x7F1FDBC8u;
    // 7F1FDBC8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1FDBCC:
    ctx->pc = 0x7F1FDBCCu;
    // 7F1FDBCC: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F1FDBD0:
    ctx->pc = 0x7F1FDBD0u;
    // 7F1FDBD0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1FDBD4:
    ctx->pc = 0x7F1FDBD4u;
    // 7F1FDBD4: bl      0x7F3C2408
    {
            ctx->lr = 0x7F1FDBD8u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F1FDBD8:
    ctx->pc = 0x7F1FDBD8u;
    ctx->downcount -= 3;
    // 7F1FDBD8: or.   r31, r3, r3
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

label_7F1FDBDC:
    ctx->pc = 0x7F1FDBDCu;
    // 7F1FDBDC: stw     r3, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FDBE0:
    ctx->pc = 0x7F1FDBE0u;
    // 7F1FDBE0: bc    4, 2, 0x7F1FDBEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FDBEC;
        }
    }

label_7F1FDBE4:
    ctx->pc = 0x7F1FDBE4u;
    ctx->downcount -= 2;
    // 7F1FDBE4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1FDBE8:
    ctx->pc = 0x7F1FDBE8u;
    // 7F1FDBE8: b       0x7F1FDC1C
    {
            goto label_7F1FDC1C;
    }

label_7F1FDBEC:
    ctx->pc = 0x7F1FDBECu;
    ctx->downcount -= 4;
    // 7F1FDBEC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1FDBF0:
    ctx->pc = 0x7F1FDBF0u;
    // 7F1FDBF0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FDBF4:
    ctx->pc = 0x7F1FDBF4u;
    // 7F1FDBF4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FDBF8:
    ctx->pc = 0x7F1FDBF8u;
    // 7F1FDBF8: bl      0x7F1FDA90
    {
            ctx->lr = 0x7F1FDBFCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FDA90u;
                return;
            }
            goto label_7F1FDA90;
    }

label_7F1FDBFC:
    ctx->pc = 0x7F1FDBFCu;
    ctx->downcount -= 2;
    // 7F1FDBFC: cmpwi   r3, 0
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

label_7F1FDC00:
    ctx->pc = 0x7F1FDC00u;
    // 7F1FDC00: bc    4, 2, 0x7F1FDC0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FDC0C;
        }
    }

label_7F1FDC04:
    ctx->pc = 0x7F1FDC04u;
    ctx->downcount -= 2;
    // 7F1FDC04: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1FDC08:
    ctx->pc = 0x7F1FDC08u;
    // 7F1FDC08: b       0x7F1FDC1C
    {
            goto label_7F1FDC1C;
    }

label_7F1FDC0C:
    ctx->pc = 0x7F1FDC0Cu;
    ctx->downcount -= 4;
    // 7F1FDC0C: lwz     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FDC10:
    ctx->pc = 0x7F1FDC10u;
    // 7F1FDC10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1FDC14:
    ctx->pc = 0x7F1FDC14u;
    // 7F1FDC14: ori     r0, r0, 0xE000
    ctx->gpr[0] = ctx->gpr[0] | 0xE000u;

label_7F1FDC18:
    ctx->pc = 0x7F1FDC18u;
    // 7F1FDC18: stw     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FDC1C:
    ctx->pc = 0x7F1FDC1Cu;
    ctx->downcount -= 16;
    // 7F1FDC1C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FDC20:
    ctx->pc = 0x7F1FDC20u;
    // 7F1FDC20: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FDC24:
    ctx->pc = 0x7F1FDC24u;
    // 7F1FDC24: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FDC28:
    ctx->pc = 0x7F1FDC28u;
    // 7F1FDC28: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1FDC2C:
    ctx->pc = 0x7F1FDC2Cu;
    // 7F1FDC2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FDC30:
    ctx->pc = 0x7F1FDC30u;
    ctx->downcount -= 24;
    // 7F1FDC30: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FDC34:
    ctx->pc = 0x7F1FDC34u;
    // 7F1FDC34: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FDC38:
    ctx->pc = 0x7F1FDC38u;
    // 7F1FDC38: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FDC3C:
    ctx->pc = 0x7F1FDC3Cu;
    // 7F1FDC3C: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDC3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1FDC40:
    ctx->pc = 0x7F1FDC40u;
    // 7F1FDC40: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FDC40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1FDC40u);
        if (ctx->exception) return;
    }

label_7F1FDC44:
    ctx->pc = 0x7F1FDC44u;
    // 7F1FDC44: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FDC48:
    ctx->pc = 0x7F1FDC48u;
    // 7F1FDC48: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F1FDC4C:
    ctx->pc = 0x7F1FDC4Cu;
    // 7F1FDC4C: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FDC4Cu)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F1FDC50:
    ctx->pc = 0x7F1FDC50u;
    // 7F1FDC50: lwz     r31, -11408(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-11408);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1FDC54:
    ctx->pc = 0x7F1FDC54u;
    // 7F1FDC54: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FDC58:
    ctx->pc = 0x7F1FDC58u;
    // 7F1FDC58: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FDC5C:
    ctx->pc = 0x7F1FDC5Cu;
    // 7F1FDC5C: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1FDC60:
    ctx->pc = 0x7F1FDC60u;
    // 7F1FDC60: cmplwi  r31, 0x0000
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

label_7F1FDC64:
    ctx->pc = 0x7F1FDC64u;
    // 7F1FDC64: bc    12, 2, 0x7F1FDD18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FDD18;
        }
    }

label_7F1FDC68:
    ctx->pc = 0x7F1FDC68u;
    ctx->downcount -= 10;
    // 7F1FDC68: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1FDC6C:
    ctx->pc = 0x7F1FDC6Cu;
    // 7F1FDC6C: fneg    f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1FDC6Cu)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[31]) ^ 0x8000000000000000ull);

label_7F1FDC70:
    ctx->pc = 0x7F1FDC70u;
    // 7F1FDC70: lfs     f1, 13448(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDC70u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(13448);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FDC74:
    ctx->pc = 0x7F1FDC74u;
    // 7F1FDC74: stfs     f1, 60(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDC74u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FDC78:
    ctx->pc = 0x7F1FDC78u;
    // 7F1FDC78: stfs     f1, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDC78u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FDC7C:
    ctx->pc = 0x7F1FDC7Cu;
    // 7F1FDC7C: stfs     f1, 68(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDC7Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FDC80:
    ctx->pc = 0x7F1FDC80u;
    // 7F1FDC80: stfs     f1, 76(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDC80u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FDC84:
    ctx->pc = 0x7F1FDC84u;
    // 7F1FDC84: stfs     f1, 80(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDC84u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FDC88:
    ctx->pc = 0x7F1FDC88u;
    // 7F1FDC88: stfs     f0, 84(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDC88u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FDC8C:
    ctx->pc = 0x7F1FDC8Cu;
    // 7F1FDC8C: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F1FDC90u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F1FDC90:
    ctx->pc = 0x7F1FDC90u;
    ctx->downcount -= 4;
    // 7F1FDC90: addi    r3, r31, 60
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(60);

label_7F1FDC94:
    ctx->pc = 0x7F1FDC94u;
    // 7F1FDC94: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F1FDC98:
    ctx->pc = 0x7F1FDC98u;
    // 7F1FDC98: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FDC9C:
    ctx->pc = 0x7F1FDC9Cu;
    // 7F1FDC9C: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F1FDCA0u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F1FDCA0:
    ctx->pc = 0x7F1FDCA0u;
    ctx->downcount -= 8;
    // 7F1FDCA0: stw     r30, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1FDCA4:
    ctx->pc = 0x7F1FDCA4u;
    // 7F1FDCA4: srawi r0, r30, 2
    {
        u32 sh = 2u;
        u32 value = ctx->gpr[30];
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

label_7F1FDCA8:
    ctx->pc = 0x7F1FDCA8u;
    // 7F1FDCA8: addze  r0, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F1FDCAC:
    ctx->pc = 0x7F1FDCACu;
    // 7F1FDCAC: stw     r30, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1FDCB0:
    ctx->pc = 0x7F1FDCB0u;
    // 7F1FDCB0: stw     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FDCB4:
    ctx->pc = 0x7F1FDCB4u;
    // 7F1FDCB4: lwz     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FDCB8:
    ctx->pc = 0x7F1FDCB8u;
    // 7F1FDCB8: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FDCBC:
    ctx->pc = 0x7F1FDCBCu;
    // 7F1FDCBC: bc    12, 1, 0x7F1FDCC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FDCC8;
        }
    }

label_7F1FDCC0:
    ctx->pc = 0x7F1FDCC0u;
    ctx->downcount -= 2;
    // 7F1FDCC0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1FDCC4:
    ctx->pc = 0x7F1FDCC4u;
    // 7F1FDCC4: stw     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FDCC8:
    ctx->pc = 0x7F1FDCC8u;
    ctx->downcount -= 5;
    // 7F1FDCC8: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FDCCC:
    ctx->pc = 0x7F1FDCCCu;
    // 7F1FDCCC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1FDCD0:
    ctx->pc = 0x7F1FDCD0u;
    // 7F1FDCD0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1FDCD4:
    ctx->pc = 0x7F1FDCD4u;
    // 7F1FDCD4: lwz     r7, 192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(192);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1FDCD8:
    ctx->pc = 0x7F1FDCD8u;
    // 7F1FDCD8: b       0x7F1FDD04
    {
            goto label_7F1FDD04;
    }

label_7F1FDCDC:
    loop_7F1FDCDC(ctx);
    if (ctx->pc == 0x7F1FDD10u) goto label_7F1FDD10;
    return;
label_7F1FDCE0:
    // 7F1FDCE0: addi    r0, r3, 108
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(108);

label_7F1FDCE4:
    ctx->pc = 0x7F1FDCE4u;
    // 7F1FDCE4: lwz     r4, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FDCE8:
    // 7F1FDCE8: addi    r7, r7, 16
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(16);

label_7F1FDCEC:
    // 7F1FDCEC: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F1FDCF0:
    // 7F1FDCF0: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F1FDCF4:
    // 7F1FDCF4: mullw   r4, r5, r4
    {
        s64 product = (s64)(s32)ctx->gpr[5] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[4] = (u32)product;
    }

label_7F1FDCF8:
    // 7F1FDCF8: srawi r4, r4, 6
    {
        u32 sh = 6u;
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

label_7F1FDCFC:
    // 7F1FDCFC: addze  r4, r4
    {
        u32 a = ctx->gpr[4];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F1FDD00:
    ctx->pc = 0x7F1FDD00u;
    // 7F1FDD00: stwx    r4, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1FDD04:
    ctx->pc = 0x7F1FDD04u;
    ctx->downcount -= 3;
    // 7F1FDD04: lwz     r0, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FDD08:
    // 7F1FDD08: cmpw    r6, r0
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

label_7F1FDD0C:
    // 7F1FDD0C: bc    12, 0, 0x7F1FDCDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FDCDCu;
                return;
            }
            goto label_7F1FDCDC;
        }
    }

label_7F1FDD10:
    ctx->pc = 0x7F1FDD10u;
    ctx->downcount -= 2;
    // 7F1FDD10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1FDD14:
    ctx->pc = 0x7F1FDD14u;
    // 7F1FDD14: b       0x7F1FDE10
    {
            goto label_7F1FDE10;
    }

label_7F1FDD18:
    ctx->pc = 0x7F1FDD18u;
    ctx->downcount -= 5;
    // 7F1FDD18: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F1FDD1C:
    ctx->pc = 0x7F1FDD1Cu;
    // 7F1FDD1C: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F1FDD20:
    ctx->pc = 0x7F1FDD20u;
    // 7F1FDD20: li      r5, 136
    ctx->gpr[5] = (u32)(s32)(136);

label_7F1FDD24:
    ctx->pc = 0x7F1FDD24u;
    // 7F1FDD24: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1FDD28:
    ctx->pc = 0x7F1FDD28u;
    // 7F1FDD28: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1FDD2Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1FDD2C:
    ctx->pc = 0x7F1FDD2Cu;
    ctx->downcount -= 2;
    // 7F1FDD2C: or.   r31, r3, r3
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

label_7F1FDD30:
    ctx->pc = 0x7F1FDD30u;
    // 7F1FDD30: bc    12, 2, 0x7F1FDDF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FDDF8;
        }
    }

label_7F1FDD34:
    ctx->pc = 0x7F1FDD34u;
    ctx->downcount -= 5;
    // 7F1FDD34: lis     r4, 32544
    ctx->gpr[4] = ((u32)(s32)(32544) << 16);

label_7F1FDD38:
    ctx->pc = 0x7F1FDD38u;
    // 7F1FDD38: lis     r5, 32544
    ctx->gpr[5] = ((u32)(s32)(32544) << 16);

label_7F1FDD3C:
    ctx->pc = 0x7F1FDD3Cu;
    // 7F1FDD3C: addi    r4, r4, -10920
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-10920);

label_7F1FDD40:
    ctx->pc = 0x7F1FDD40u;
    // 7F1FDD40: addi    r5, r5, -9648
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9648);

label_7F1FDD44:
    ctx->pc = 0x7F1FDD44u;
    // 7F1FDD44: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1FDD48u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1FDD48:
    ctx->pc = 0x7F1FDD48u;
    ctx->downcount -= 22;
    // 7F1FDD48: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FDD4C:
    ctx->pc = 0x7F1FDD4Cu;
    // 7F1FDD4C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FDD50:
    ctx->pc = 0x7F1FDD50u;
    // 7F1FDD50: lfs     f1, 13448(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDD50u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13448);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FDD54:
    ctx->pc = 0x7F1FDD54u;
    // 7F1FDD54: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1FDD58:
    ctx->pc = 0x7F1FDD58u;
    // 7F1FDD58: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F1FDD5C:
    ctx->pc = 0x7F1FDD5Cu;
    // 7F1FDD5C: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1FDD60:
    ctx->pc = 0x7F1FDD60u;
    // 7F1FDD60: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1FDD64:
    ctx->pc = 0x7F1FDD64u;
    // 7F1FDD64: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1FDD68:
    ctx->pc = 0x7F1FDD68u;
    // 7F1FDD68: fneg    f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1FDD68u)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[31]) ^ 0x8000000000000000ull);

label_7F1FDD6C:
    ctx->pc = 0x7F1FDD6Cu;
    // 7F1FDD6C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1FDD70:
    ctx->pc = 0x7F1FDD70u;
    // 7F1FDD70: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1FDD74:
    ctx->pc = 0x7F1FDD74u;
    // 7F1FDD74: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1FDD78:
    ctx->pc = 0x7F1FDD78u;
    // 7F1FDD78: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1FDD7C:
    ctx->pc = 0x7F1FDD7Cu;
    // 7F1FDD7C: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1FDD80:
    ctx->pc = 0x7F1FDD80u;
    // 7F1FDD80: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FDD84:
    ctx->pc = 0x7F1FDD84u;
    // 7F1FDD84: stfs     f1, 60(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDD84u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FDD88:
    ctx->pc = 0x7F1FDD88u;
    // 7F1FDD88: stfs     f1, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDD88u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FDD8C:
    ctx->pc = 0x7F1FDD8Cu;
    // 7F1FDD8C: stfs     f1, 68(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDD8Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FDD90:
    ctx->pc = 0x7F1FDD90u;
    // 7F1FDD90: stfs     f1, 76(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDD90u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FDD94:
    ctx->pc = 0x7F1FDD94u;
    // 7F1FDD94: stfs     f1, 80(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDD94u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FDD98:
    ctx->pc = 0x7F1FDD98u;
    // 7F1FDD98: stfs     f0, 84(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDD98u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FDD9C:
    ctx->pc = 0x7F1FDD9Cu;
    // 7F1FDD9C: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F1FDDA0u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F1FDDA0:
    ctx->pc = 0x7F1FDDA0u;
    ctx->downcount -= 4;
    // 7F1FDDA0: addi    r3, r31, 60
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(60);

label_7F1FDDA4:
    ctx->pc = 0x7F1FDDA4u;
    // 7F1FDDA4: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F1FDDA8:
    ctx->pc = 0x7F1FDDA8u;
    // 7F1FDDA8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FDDAC:
    ctx->pc = 0x7F1FDDACu;
    // 7F1FDDAC: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F1FDDB0u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F1FDDB0:
    ctx->pc = 0x7F1FDDB0u;
    ctx->downcount -= 8;
    // 7F1FDDB0: stw     r30, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1FDDB4:
    ctx->pc = 0x7F1FDDB4u;
    // 7F1FDDB4: srawi r0, r30, 2
    {
        u32 sh = 2u;
        u32 value = ctx->gpr[30];
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

label_7F1FDDB8:
    ctx->pc = 0x7F1FDDB8u;
    // 7F1FDDB8: addze  r0, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F1FDDBC:
    ctx->pc = 0x7F1FDDBCu;
    // 7F1FDDBC: stw     r30, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1FDDC0:
    ctx->pc = 0x7F1FDDC0u;
    // 7F1FDDC0: stw     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FDDC4:
    ctx->pc = 0x7F1FDDC4u;
    // 7F1FDDC4: lwz     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FDDC8:
    ctx->pc = 0x7F1FDDC8u;
    // 7F1FDDC8: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FDDCC:
    ctx->pc = 0x7F1FDDCCu;
    // 7F1FDDCC: bc    12, 1, 0x7F1FDDD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FDDD8;
        }
    }

label_7F1FDDD0:
    ctx->pc = 0x7F1FDDD0u;
    ctx->downcount -= 2;
    // 7F1FDDD0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1FDDD4:
    ctx->pc = 0x7F1FDDD4u;
    // 7F1FDDD4: stw     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FDDD8:
    ctx->pc = 0x7F1FDDD8u;
    ctx->downcount -= 2;
    // 7F1FDDD8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FDDDC:
    ctx->pc = 0x7F1FDDDCu;
    // 7F1FDDDC: bl      0x7F1FDB8C
    {
            ctx->lr = 0x7F1FDDE0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FDB8Cu;
                return;
            }
            goto label_7F1FDB8C;
    }

label_7F1FDDE0:
    ctx->pc = 0x7F1FDDE0u;
    ctx->downcount -= 2;
    // 7F1FDDE0: cmpwi   r3, 0
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

label_7F1FDDE4:
    ctx->pc = 0x7F1FDDE4u;
    // 7F1FDDE4: bc    4, 0, 0x7F1FDDF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FDDF8;
        }
    }

label_7F1FDDE8:
    ctx->pc = 0x7F1FDDE8u;
    ctx->downcount -= 2;
    // 7F1FDDE8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FDDEC:
    ctx->pc = 0x7F1FDDECu;
    // 7F1FDDEC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1FDDF0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1FDDF0:
    ctx->pc = 0x7F1FDDF0u;
    ctx->downcount -= 2;
    // 7F1FDDF0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1FDDF4:
    ctx->pc = 0x7F1FDDF4u;
    // 7F1FDDF4: b       0x7F1FDE10
    {
            goto label_7F1FDE10;
    }

label_7F1FDDF8:
    ctx->pc = 0x7F1FDDF8u;
    ctx->downcount -= 6;
    // 7F1FDDF8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1FDDFC:
    ctx->pc = 0x7F1FDDFCu;
    // 7F1FDDFC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FDE00:
    ctx->pc = 0x7F1FDE00u;
    // 7F1FDE00: stw     r0, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FDE04:
    ctx->pc = 0x7F1FDE04u;
    // 7F1FDE04: addi    r4, r3, -11408
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-11408);

label_7F1FDE08:
    ctx->pc = 0x7F1FDE08u;
    // 7F1FDE08: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FDE0C:
    ctx->pc = 0x7F1FDE0Cu;
    // 7F1FDE0C: stw     r31, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1FDE10:
    ctx->pc = 0x7F1FDE10u;
    ctx->downcount -= 18;
    // 7F1FDE10: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FDE10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1FDE10u);
        if (ctx->exception) return;
    }

label_7F1FDE14:
    ctx->pc = 0x7F1FDE14u;
    // 7F1FDE14: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDE14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FDE18:
    ctx->pc = 0x7F1FDE18u;
    // 7F1FDE18: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FDE1C:
    ctx->pc = 0x7F1FDE1Cu;
    // 7F1FDE1C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FDE20:
    ctx->pc = 0x7F1FDE20u;
    // 7F1FDE20: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FDE24:
    ctx->pc = 0x7F1FDE24u;
    // 7F1FDE24: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1FDE28:
    ctx->pc = 0x7F1FDE28u;
    // 7F1FDE28: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FDE2C:
    ctx->pc = 0x7F1FDE2Cu;
    ctx->downcount -= 29;
    // 7F1FDE2C: stwu     r1, -240(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-240);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FDE30:
    ctx->pc = 0x7F1FDE30u;
    // 7F1FDE30: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FDE34:
    ctx->pc = 0x7F1FDE34u;
    // 7F1FDE34: stw     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FDE38:
    ctx->pc = 0x7F1FDE38u;
    // 7F1FDE38: stfd     f31, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDE38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1FDE3C:
    ctx->pc = 0x7F1FDE3Cu;
    // 7F1FDE3C: psq_st   f31, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FDE3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1FDE3Cu);
        if (ctx->exception) return;
    }

label_7F1FDE40:
    ctx->pc = 0x7F1FDE40u;
    // 7F1FDE40: stfd     f30, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDE40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1FDE44:
    ctx->pc = 0x7F1FDE44u;
    // 7F1FDE44: psq_st   f30, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FDE44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F1FDE44u);
        if (ctx->exception) return;
    }

label_7F1FDE48:
    ctx->pc = 0x7F1FDE48u;
    // 7F1FDE48: stmw     r28, 192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FDE4C:
    ctx->pc = 0x7F1FDE4Cu;
    // 7F1FDE4C: lis     r7, 32590
    ctx->gpr[7] = ((u32)(s32)(32590) << 16);

label_7F1FDE50:
    ctx->pc = 0x7F1FDE50u;
    // 7F1FDE50: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1FDE54:
    ctx->pc = 0x7F1FDE54u;
    // 7F1FDE54: addi    r7, r7, 28636
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(28636);

label_7F1FDE58:
    ctx->pc = 0x7F1FDE58u;
    // 7F1FDE58: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FDE5C:
    ctx->pc = 0x7F1FDE5Cu;
    // 7F1FDE5C: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FDE60:
    ctx->pc = 0x7F1FDE60u;
    // 7F1FDE60: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1FDE64:
    ctx->pc = 0x7F1FDE64u;
    // 7F1FDE64: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1FDE68:
    ctx->pc = 0x7F1FDE68u;
    // 7F1FDE68: addi    r5, r1, 100
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(100);

label_7F1FDE6C:
    ctx->pc = 0x7F1FDE6Cu;
    // 7F1FDE6C: addi    r4, r7, 188
    ctx->gpr[4] = ctx->gpr[7] + (u32)(s32)(188);

label_7F1FDE70:
    ctx->pc = 0x7F1FDE70u;
    // 7F1FDE70: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1FDE74:
    loop_7F1FDE74(ctx);
    if (ctx->pc == 0x7F1FDE88u) goto label_7F1FDE88;
    return;
label_7F1FDE78:
    ctx->pc = 0x7F1FDE78u;
    // 7F1FDE78: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1FDE7C:
    ctx->pc = 0x7F1FDE7Cu;
    // 7F1FDE7C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FDE80:
    ctx->pc = 0x7F1FDE80u;
    // 7F1FDE80: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F1FDE84:
    // 7F1FDE84: bc    16, 0, 0x7F1FDE74
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FDE74u;
                return;
            }
            goto label_7F1FDE74;
        }
    }

label_7F1FDE88:
    ctx->pc = 0x7F1FDE88u;
    ctx->downcount -= 7;
    // 7F1FDE88: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F1FDE8C:
    ctx->pc = 0x7F1FDE8Cu;
    // 7F1FDE8C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1FDE90:
    ctx->pc = 0x7F1FDE90u;
    // 7F1FDE90: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F1FDE94:
    ctx->pc = 0x7F1FDE94u;
    // 7F1FDE94: addi    r5, r1, 36
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(36);

label_7F1FDE98:
    ctx->pc = 0x7F1FDE98u;
    // 7F1FDE98: addi    r4, r3, 60
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(60);

label_7F1FDE9C:
    ctx->pc = 0x7F1FDE9Cu;
    // 7F1FDE9C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1FDEA0:
    loop_7F1FDEA0(ctx);
    if (ctx->pc == 0x7F1FDEB4u) goto label_7F1FDEB4;
    return;
label_7F1FDEA4:
    ctx->pc = 0x7F1FDEA4u;
    // 7F1FDEA4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1FDEA8:
    ctx->pc = 0x7F1FDEA8u;
    // 7F1FDEA8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FDEAC:
    ctx->pc = 0x7F1FDEACu;
    // 7F1FDEAC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F1FDEB0:
    // 7F1FDEB0: bc    16, 0, 0x7F1FDEA0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FDEA0u;
                return;
            }
            goto label_7F1FDEA0;
        }
    }

label_7F1FDEB4:
    ctx->pc = 0x7F1FDEB4u;
    ctx->downcount -= 4;
    // 7F1FDEB4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FDEB8:
    ctx->pc = 0x7F1FDEB8u;
    // 7F1FDEB8: lfs     f30, 13504(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDEB8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13504);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F1FDEBC:
    ctx->pc = 0x7F1FDEBCu;
    // 7F1FDEBC: fmr    f31, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1FDEBCu)) return;
    ctx->fpr[31] = ctx->fpr[30];

label_7F1FDEC0:
    ctx->pc = 0x7F1FDEC0u;
    // 7F1FDEC0: b       0x7F1FE030
    {
            goto label_7F1FE030;
    }

label_7F1FDEC4:
    ctx->downcount -= 2;
    // 7F1FDEC4: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1FDEC8:
    // 7F1FDEC8: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F1FDECCu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F1FDECC:
    ctx->downcount -= 4;
    // 7F1FDECC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FDED0:
    // 7F1FDED0: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1FDED4:
    // 7F1FDED4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1FDED8:
    // 7F1FDED8: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F1FDEDCu;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F1FDEDC:
    ctx->pc = 0x7F1FDEDCu;
    ctx->downcount -= 3;
    // 7F1FDEDC: lfs     f5, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDEDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F1FDEE0:
    ctx->pc = 0x7F1FDEE0u;
    // 7F1FDEE0: fcmpo   cr0, f5, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1FDEE0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[31], true);

label_7F1FDEE4:
    // 7F1FDEE4: bc    4, 0, 0x7F1FE00C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE00C;
        }
    }

label_7F1FDEE8:
    ctx->pc = 0x7F1FDEE8u;
    ctx->downcount -= 26;
    // 7F1FDEE8: lha     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1FDEEC:
    // 7F1FDEEC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1FDEF0:
    // 7F1FDEF0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FDEF4:
    ctx->pc = 0x7F1FDEF4u;
    // 7F1FDEF4: stw     r0, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FDEF8:
    // 7F1FDEF8: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1FDEFC:
    ctx->pc = 0x7F1FDEFCu;
    // 7F1FDEFC: lfd     f3, 13512(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDEFCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13512);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FDF00:
    ctx->pc = 0x7F1FDF00u;
    // 7F1FDF00: stw     r3, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FDF04:
    // 7F1FDF04: addi    r3, r1, 104
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(104);

label_7F1FDF08:
    ctx->pc = 0x7F1FDF08u;
    // 7F1FDF08: lfs     f4, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDF08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F1FDF0C:
    ctx->pc = 0x7F1FDF0Cu;
    // 7F1FDF0C: lfd     f0, 168(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDF0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FDF10:
    ctx->pc = 0x7F1FDF10u;
    // 7F1FDF10: stw     r0, 176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FDF14:
    ctx->pc = 0x7F1FDF14u;
    // 7F1FDF14: fsubs   f1, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1FDF14u)) return;
    ppc_fsubs(ctx, 1, 0, 3);

label_7F1FDF18:
    ctx->pc = 0x7F1FDF18u;
    // 7F1FDF18: lfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDF18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FDF1C:
    ctx->pc = 0x7F1FDF1Cu;
    // 7F1FDF1C: lfs     f2, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDF1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1FDF20:
    ctx->pc = 0x7F1FDF20u;
    // 7F1FDF20: fadds   f1, f4, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FDF20u)) return;
    ppc_fadds(ctx, 1, 4, 1);

label_7F1FDF24:
    ctx->pc = 0x7F1FDF24u;
    // 7F1FDF24: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDF24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FDF28:
    ctx->pc = 0x7F1FDF28u;
    // 7F1FDF28: lha     r0, 10(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1FDF2C:
    // 7F1FDF2C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1FDF30:
    ctx->pc = 0x7F1FDF30u;
    // 7F1FDF30: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDF30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FDF34:
    ctx->pc = 0x7F1FDF34u;
    // 7F1FDF34: stw     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FDF38:
    ctx->pc = 0x7F1FDF38u;
    // 7F1FDF38: lfd     f1, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDF38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FDF3C:
    ctx->pc = 0x7F1FDF3Cu;
    // 7F1FDF3C: stfs     f5, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDF3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F1FDF40:
    ctx->pc = 0x7F1FDF40u;
    // 7F1FDF40: fsubs   f0, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1FDF40u)) return;
    ppc_fsubs(ctx, 0, 1, 3);

label_7F1FDF44:
    ctx->pc = 0x7F1FDF44u;
    // 7F1FDF44: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FDF44u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F1FDF48:
    ctx->pc = 0x7F1FDF48u;
    // 7F1FDF48: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDF48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FDF4C:
    // 7F1FDF4C: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F1FDF50u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F1FDF50:
    ctx->downcount -= 4;
    // 7F1FDF50: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1FDF54:
    // 7F1FDF54: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1FDF58:
    // 7F1FDF58: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FDF5C:
    // 7F1FDF5C: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F1FDF60u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F1FDF60:
    ctx->downcount -= 4;
    // 7F1FDF60: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1FDF64:
    // 7F1FDF64: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1FDF68:
    // 7F1FDF68: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FDF6C:
    // 7F1FDF6C: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F1FDF70u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F1FDF70:
    ctx->pc = 0x7F1FDF70u;
    ctx->downcount -= 121;
    // 7F1FDF70: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDF70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FDF74:
    // 7F1FDF74: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FDF78:
    ctx->pc = 0x7F1FDF78u;
    // 7F1FDF78: lfs     f8, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDF78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[8] = value;
        ctx->ps1[8] = value;
    }

label_7F1FDF7C:
    ctx->pc = 0x7F1FDF7Cu;
    // 7F1FDF7C: lfs     f3, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDF7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1FDF80:
    ctx->pc = 0x7F1FDF80u;
    // 7F1FDF80: fdivs   f7, f0, f8
    if (!ppc_fp_available_inline(ctx, 0x7F1FDF80u)) return;
    ppc_fdivs(ctx, 7, 0, 8);

label_7F1FDF84:
    ctx->pc = 0x7F1FDF84u;
    // 7F1FDF84: lfs     f4, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDF84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F1FDF88:
    ctx->pc = 0x7F1FDF88u;
    // 7F1FDF88: lfs     f6, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDF88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F1FDF8C:
    ctx->pc = 0x7F1FDF8Cu;
    // 7F1FDF8C: lfs     f5, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDF8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F1FDF90:
    ctx->pc = 0x7F1FDF90u;
    // 7F1FDF90: lfs     f2, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDF90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1FDF94:
    ctx->pc = 0x7F1FDF94u;
    // 7F1FDF94: lfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDF94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FDF98:
    ctx->pc = 0x7F1FDF98u;
    // 7F1FDF98: fdivs   f3, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x7F1FDF98u)) return;
    ppc_fdivs(ctx, 3, 3, 4);

label_7F1FDF9C:
    ctx->pc = 0x7F1FDF9Cu;
    // 7F1FDF9C: lfs     f0, 13504(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDF9Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13504);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FDFA0:
    ctx->pc = 0x7F1FDFA0u;
    // 7F1FDFA0: stfs     f7, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDFA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

label_7F1FDFA4:
    ctx->pc = 0x7F1FDFA4u;
    // 7F1FDFA4: fdivs   f6, f6, f8
    if (!ppc_fp_available_inline(ctx, 0x7F1FDFA4u)) return;
    ppc_fdivs(ctx, 6, 6, 8);

label_7F1FDFA8:
    ctx->pc = 0x7F1FDFA8u;
    // 7F1FDFA8: stfs     f3, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDFA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F1FDFAC:
    ctx->pc = 0x7F1FDFACu;
    // 7F1FDFAC: fdivs   f5, f5, f8
    if (!ppc_fp_available_inline(ctx, 0x7F1FDFACu)) return;
    ppc_fdivs(ctx, 5, 5, 8);

label_7F1FDFB0:
    ctx->pc = 0x7F1FDFB0u;
    // 7F1FDFB0: stfs     f6, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDFB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

label_7F1FDFB4:
    ctx->pc = 0x7F1FDFB4u;
    // 7F1FDFB4: fdivs   f2, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x7F1FDFB4u)) return;
    ppc_fdivs(ctx, 2, 2, 4);

label_7F1FDFB8:
    ctx->pc = 0x7F1FDFB8u;
    // 7F1FDFB8: stfs     f5, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDFB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F1FDFBC:
    ctx->pc = 0x7F1FDFBCu;
    // 7F1FDFBC: fdivs   f1, f1, f4
    if (!ppc_fp_available_inline(ctx, 0x7F1FDFBCu)) return;
    ppc_fdivs(ctx, 1, 1, 4);

label_7F1FDFC0:
    ctx->pc = 0x7F1FDFC0u;
    // 7F1FDFC0: stfs     f2, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDFC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F1FDFC4:
    ctx->pc = 0x7F1FDFC4u;
    // 7F1FDFC4: fsubs   f3, f7, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1FDFC4u)) return;
    ppc_fsubs(ctx, 3, 7, 3);

label_7F1FDFC8:
    ctx->pc = 0x7F1FDFC8u;
    // 7F1FDFC8: stfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDFC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FDFCC:
    ctx->pc = 0x7F1FDFCCu;
    // 7F1FDFCC: fcmpo   cr0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FDFCCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[3], ctx->fpr[0], true);

label_7F1FDFD0:
    // 7F1FDFD0: bc    4, 0, 0x7F1FDFD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FDFD8;
        }
    }

label_7F1FDFD4:
    ctx->pc = 0x7F1FDFD4u;
    ctx->downcount -= 1;
    // 7F1FDFD4: fneg    f3, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1FDFD4u)) return;
    ctx->fpr[3] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[3]) ^ 0x8000000000000000ull);

label_7F1FDFD8:
    ctx->pc = 0x7F1FDFD8u;
    ctx->downcount -= 7;
    // 7F1FDFD8: lfs     f2, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDFD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1FDFDC:
    // 7F1FDFDC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FDFE0:
    ctx->pc = 0x7F1FDFE0u;
    // 7F1FDFE0: lfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDFE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FDFE4:
    ctx->pc = 0x7F1FDFE4u;
    // 7F1FDFE4: lfs     f0, 13504(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDFE4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13504);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FDFE8:
    ctx->pc = 0x7F1FDFE8u;
    // 7F1FDFE8: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FDFE8u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F1FDFEC:
    ctx->pc = 0x7F1FDFECu;
    // 7F1FDFEC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FDFECu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1FDFF0:
    // 7F1FDFF0: bc    4, 0, 0x7F1FDFF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FDFF8;
        }
    }

label_7F1FDFF4:
    ctx->pc = 0x7F1FDFF4u;
    ctx->downcount -= 1;
    // 7F1FDFF4: fneg    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FDFF4u)) return;
    ctx->fpr[1] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[1]) ^ 0x8000000000000000ull);

label_7F1FDFF8:
    ctx->pc = 0x7F1FDFF8u;
    ctx->downcount -= 5;
    // 7F1FDFF8: fmuls   f0, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FDFF8u)) return;
    ppc_fmuls(ctx, 0, 3, 1);

label_7F1FDFFC:
    ctx->pc = 0x7F1FDFFCu;
    // 7F1FDFFC: stfs     f0, 0(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1FDFFCu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FE000:
    ctx->pc = 0x7F1FE000u;
    // 7F1FE000: fadds   f30, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE000u)) return;
    ppc_fadds(ctx, 30, 30, 0);

label_7F1FE004:
    ctx->pc = 0x7F1FE004u;
    // 7F1FE004: stw     r31, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1FE008:
    // 7F1FE008: b       0x7F1FE020
    {
            goto label_7F1FE020;
    }

label_7F1FE00C:
    ctx->downcount -= 5;
    // 7F1FE00C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FE010:
    // 7F1FE010: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1FE014:
    ctx->pc = 0x7F1FE014u;
    // 7F1FE014: lfs     f0, 13504(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE014u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13504);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE018:
    ctx->pc = 0x7F1FE018u;
    // 7F1FE018: stfs     f0, 0(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE018u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FE01C:
    ctx->pc = 0x7F1FE01Cu;
    // 7F1FE01C: stw     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE020:
    ctx->downcount -= 4;
    // 7F1FE020: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_7F1FE024:
    // 7F1FE024: addi    r31, r31, 16
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16);

label_7F1FE028:
    // 7F1FE028: addi    r28, r28, 8
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(8);

label_7F1FE02C:
    // 7F1FE02C: addi    r29, r29, -1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(-1);

label_7F1FE030:
    ctx->downcount -= 2;
    // 7F1FE030: cmpwi   r29, 0
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

label_7F1FE034:
    // 7F1FE034: bc    4, 2, 0x7F1FDEC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FDEC4u;
                return;
            }
            goto label_7F1FDEC4;
        }
    }

label_7F1FE038:
    ctx->pc = 0x7F1FE038u;
    ctx->downcount -= 21;
    // 7F1FE038: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1FE038u)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_7F1FE03C:
    ctx->pc = 0x7F1FE03Cu;
    // 7F1FE03C: psq_l   f31, 232(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE03Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1FE03Cu);
        if (ctx->exception) return;
    }

label_7F1FE040:
    ctx->pc = 0x7F1FE040u;
    // 7F1FE040: lfd     f31, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE040u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FE044:
    ctx->pc = 0x7F1FE044u;
    // 7F1FE044: psq_l   f30, 216(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE044u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F1FE044u);
        if (ctx->exception) return;
    }

label_7F1FE048:
    ctx->pc = 0x7F1FE048u;
    // 7F1FE048: lfd     f30, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE048u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FE04C:
    ctx->pc = 0x7F1FE04Cu;
    // 7F1FE04C: lmw     r28, 192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FE050:
    ctx->pc = 0x7F1FE050u;
    // 7F1FE050: lwz     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE054:
    ctx->pc = 0x7F1FE054u;
    // 7F1FE054: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FE058:
    ctx->pc = 0x7F1FE058u;
    // 7F1FE058: addi    r1, r1, 240
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(240);

label_7F1FE05C:
    ctx->pc = 0x7F1FE05Cu;
    // 7F1FE05C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FE060:
    ctx->pc = 0x7F1FE060u;
    ctx->downcount -= 24;
    // 7F1FE060: stwu     r1, -384(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-384);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FE064:
    ctx->pc = 0x7F1FE064u;
    // 7F1FE064: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FE068:
    ctx->pc = 0x7F1FE068u;
    // 7F1FE068: stw     r0, 388(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE06C:
    ctx->pc = 0x7F1FE06Cu;
    // 7F1FE06C: stfd     f31, 368(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE06Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(368);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1FE070:
    ctx->pc = 0x7F1FE070u;
    // 7F1FE070: psq_st   f31, 376(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE070u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(376);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1FE070u);
        if (ctx->exception) return;
    }

label_7F1FE074:
    ctx->pc = 0x7F1FE074u;
    // 7F1FE074: stfd     f30, 352(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE074u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(352);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1FE078:
    ctx->pc = 0x7F1FE078u;
    // 7F1FE078: psq_st   f30, 360(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE078u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F1FE078u);
        if (ctx->exception) return;
    }

label_7F1FE07C:
    ctx->pc = 0x7F1FE07Cu;
    // 7F1FE07C: stmw     r16, 288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        for (u32 r = 16; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FE080:
    ctx->pc = 0x7F1FE080u;
    // 7F1FE080: or   r16, r3, r3
    {
        ctx->gpr[16] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FE084:
    ctx->pc = 0x7F1FE084u;
    // 7F1FE084: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FE088:
    ctx->pc = 0x7F1FE088u;
    // 7F1FE088: lwz     r0, 1280(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(1280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE08C:
    ctx->pc = 0x7F1FE08Cu;
    // 7F1FE08C: lfs     f30, 13504(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE08Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13504);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F1FE090:
    ctx->pc = 0x7F1FE090u;
    // 7F1FE090: cmplwi  r0, 0x000A
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

label_7F1FE094:
    ctx->pc = 0x7F1FE094u;
    // 7F1FE094: bc    12, 1, 0x7F1FE0B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE0B0;
        }
    }

label_7F1FE098:
    ctx->pc = 0x7F1FE098u;
    ctx->downcount -= 7;
    // 7F1FE098: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1FE09C:
    ctx->pc = 0x7F1FE09Cu;
    // 7F1FE09C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1FE0A0:
    ctx->pc = 0x7F1FE0A0u;
    // 7F1FE0A0: addi    r3, r3, -3776
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3776);

label_7F1FE0A4:
    ctx->pc = 0x7F1FE0A4u;
    // 7F1FE0A4: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE0A8:
    ctx->pc = 0x7F1FE0A8u;
    // 7F1FE0A8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1FE0AC:
    ctx->pc = 0x7F1FE0ACu;
    // 7F1FE0AC: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F1FE0B0:
    ctx->pc = 0x7F1FE0B0u;
    ctx->downcount -= 4;
    // 7F1FE0B0: li      r22, 100
    ctx->gpr[22] = (u32)(s32)(100);

label_7F1FE0B4:
    ctx->pc = 0x7F1FE0B4u;
    // 7F1FE0B4: li      r21, 10
    ctx->gpr[21] = (u32)(s32)(10);

label_7F1FE0B8:
    ctx->pc = 0x7F1FE0B8u;
    // 7F1FE0B8: li      r20, 600
    ctx->gpr[20] = (u32)(s32)(600);

label_7F1FE0BC:
    ctx->pc = 0x7F1FE0BCu;
    // 7F1FE0BC: b       0x7F1FE0FC
    {
            goto label_7F1FE0FC;
    }

label_7F1FE0C0:
    ctx->pc = 0x7F1FE0C0u;
    ctx->downcount -= 4;
    // 7F1FE0C0: li      r22, 100
    ctx->gpr[22] = (u32)(s32)(100);

label_7F1FE0C4:
    ctx->pc = 0x7F1FE0C4u;
    // 7F1FE0C4: li      r21, 10
    ctx->gpr[21] = (u32)(s32)(10);

label_7F1FE0C8:
    ctx->pc = 0x7F1FE0C8u;
    // 7F1FE0C8: li      r20, 1000
    ctx->gpr[20] = (u32)(s32)(1000);

label_7F1FE0CC:
    ctx->pc = 0x7F1FE0CCu;
    // 7F1FE0CC: b       0x7F1FE0FC
    {
            goto label_7F1FE0FC;
    }

label_7F1FE0D0:
    ctx->pc = 0x7F1FE0D0u;
    ctx->downcount -= 4;
    // 7F1FE0D0: li      r22, 100
    ctx->gpr[22] = (u32)(s32)(100);

label_7F1FE0D4:
    ctx->pc = 0x7F1FE0D4u;
    // 7F1FE0D4: li      r21, 25
    ctx->gpr[21] = (u32)(s32)(25);

label_7F1FE0D8:
    ctx->pc = 0x7F1FE0D8u;
    // 7F1FE0D8: li      r20, 1500
    ctx->gpr[20] = (u32)(s32)(1500);

label_7F1FE0DC:
    ctx->pc = 0x7F1FE0DCu;
    // 7F1FE0DC: b       0x7F1FE0FC
    {
            goto label_7F1FE0FC;
    }

label_7F1FE0E0:
    ctx->pc = 0x7F1FE0E0u;
    ctx->downcount -= 4;
    // 7F1FE0E0: li      r22, 100
    ctx->gpr[22] = (u32)(s32)(100);

label_7F1FE0E4:
    ctx->pc = 0x7F1FE0E4u;
    // 7F1FE0E4: li      r21, 15
    ctx->gpr[21] = (u32)(s32)(15);

label_7F1FE0E8:
    ctx->pc = 0x7F1FE0E8u;
    // 7F1FE0E8: li      r20, 3000
    ctx->gpr[20] = (u32)(s32)(3000);

label_7F1FE0EC:
    ctx->pc = 0x7F1FE0ECu;
    // 7F1FE0EC: b       0x7F1FE0FC
    {
            goto label_7F1FE0FC;
    }

label_7F1FE0F0:
    ctx->pc = 0x7F1FE0F0u;
    ctx->downcount -= 3;
    // 7F1FE0F0: li      r22, 100
    ctx->gpr[22] = (u32)(s32)(100);

label_7F1FE0F4:
    ctx->pc = 0x7F1FE0F4u;
    // 7F1FE0F4: li      r21, 25
    ctx->gpr[21] = (u32)(s32)(25);

label_7F1FE0F8:
    ctx->pc = 0x7F1FE0F8u;
    // 7F1FE0F8: li      r20, 1500
    ctx->gpr[20] = (u32)(s32)(1500);

label_7F1FE0FC:
    ctx->pc = 0x7F1FE0FCu;
    ctx->downcount -= 5;
    // 7F1FE0FC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F1FE100:
    ctx->pc = 0x7F1FE100u;
    // 7F1FE100: lwz     r3, 52(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FE104:
    ctx->pc = 0x7F1FE104u;
    // 7F1FE104: addi    r4, r4, 18308
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18308);

label_7F1FE108:
    ctx->pc = 0x7F1FE108u;
    // 7F1FE108: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FE10C:
    ctx->pc = 0x7F1FE10Cu;
    // 7F1FE10C: bl      0x7F1FE7E8
    {
            ctx->lr = 0x7F1FE110u;
            goto label_7F1FE7E8;
    }

label_7F1FE110:
    ctx->pc = 0x7F1FE110u;
    ctx->downcount -= 22;
    // 7F1FE110: lwz     r4, 52(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FE114:
    ctx->pc = 0x7F1FE114u;
    // 7F1FE114: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FE118:
    ctx->pc = 0x7F1FE118u;
    // 7F1FE118: lfs     f31, 13504(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE118u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13504);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F1FE11C:
    ctx->pc = 0x7F1FE11Cu;
    // 7F1FE11C: addi    r30, r16, 152
    ctx->gpr[30] = ctx->gpr[16] + (u32)(s32)(152);

label_7F1FE120:
    ctx->pc = 0x7F1FE120u;
    // 7F1FE120: lwz     r0, 180(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE124:
    ctx->pc = 0x7F1FE124u;
    // 7F1FE124: addi    r23, r16, 664
    ctx->gpr[23] = ctx->gpr[16] + (u32)(s32)(664);

label_7F1FE128:
    ctx->pc = 0x7F1FE128u;
    // 7F1FE128: addi    r19, r1, 8
    ctx->gpr[19] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1FE12C:
    ctx->pc = 0x7F1FE12Cu;
    // 7F1FE12C: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F1FE130:
    ctx->pc = 0x7F1FE130u;
    // 7F1FE130: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F1FE134:
    ctx->pc = 0x7F1FE134u;
    // 7F1FE134: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F1FE138:
    ctx->pc = 0x7F1FE138u;
    // 7F1FE138: stw     r0, 180(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE13C:
    ctx->pc = 0x7F1FE13Cu;
    // 7F1FE13C: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F1FE140:
    ctx->pc = 0x7F1FE140u;
    // 7F1FE140: lwz     r3, 52(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FE144:
    ctx->pc = 0x7F1FE144u;
    // 7F1FE144: lwz     r0, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE148:
    ctx->pc = 0x7F1FE148u;
    // 7F1FE148: addi    r4, r3, 184
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(184);

label_7F1FE14C:
    ctx->pc = 0x7F1FE14Cu;
    // 7F1FE14C: rlwinm r5, r0, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1FE150:
    ctx->pc = 0x7F1FE150u;
    // 7F1FE150: subfic  r0, r0, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1FE154:
    ctx->pc = 0x7F1FE154u;
    // 7F1FE154: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1FE158:
    ctx->pc = 0x7F1FE158u;
    // 7F1FE158: lwzx    r29, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F1FE15C:
    ctx->pc = 0x7F1FE15Cu;
    // 7F1FE15C: add   r3, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F1FE160:
    ctx->pc = 0x7F1FE160u;
    // 7F1FE160: lwzx    r28, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F1FE164:
    ctx->pc = 0x7F1FE164u;
    // 7F1FE164: lwz     r31, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1FE168:
    ctx->downcount -= 3;
    // 7F1FE168: or   r18, r29, r29
    {
        ctx->gpr[18] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1FE16C:
    // 7F1FE16C: or   r17, r31, r31
    {
        ctx->gpr[17] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FE170:
    // 7F1FE170: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F1FE174:
    ctx->pc = 0x7F1FE174u;
    ctx->downcount -= 3;
    // 7F1FE174: lfs     f1, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE174u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FE178:
    ctx->pc = 0x7F1FE178u;
    // 7F1FE178: fcmpu   cr0, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FE178u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[1], false);

label_7F1FE17C:
    // 7F1FE17C: bc    4, 2, 0x7F1FE22C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE22C;
        }
    }

label_7F1FE180:
    ctx->pc = 0x7F1FE180u;
    ctx->downcount -= 3;
    // 7F1FE180: lwz     r0, 796(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(796);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE184:
    // 7F1FE184: cmpw    r24, r0
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

label_7F1FE188:
    // 7F1FE188: bc    4, 0, 0x7F1FE474
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE474;
        }
    }

label_7F1FE18C:
    ctx->downcount -= 1;
    // 7F1FE18C: bl      0x7F1FE77C
    {
            ctx->lr = 0x7F1FE190u;
            goto label_7F1FE77C;
    }

label_7F1FE190:
    ctx->downcount -= 27;
    // 7F1FE190: xoris   r3, r22, 0x8000
    ctx->gpr[3] = ctx->gpr[22] ^ (0x8000u << 16);

label_7F1FE194:
    // 7F1FE194: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1FE198:
    ctx->pc = 0x7F1FE198u;
    // 7F1FE198: stw     r3, 268(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FE19C:
    // 7F1FE19C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FE1A0:
    ctx->pc = 0x7F1FE1A0u;
    // 7F1FE1A0: lfd     f3, 13512(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE1A0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13512);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FE1A4:
    ctx->pc = 0x7F1FE1A4u;
    // 7F1FE1A4: stw     r0, 264(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE1A8:
    ctx->pc = 0x7F1FE1A8u;
    // 7F1FE1A8: lfd     f0, 264(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE1A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FE1AC:
    ctx->pc = 0x7F1FE1ACu;
    // 7F1FE1AC: stw     r3, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FE1B0:
    ctx->pc = 0x7F1FE1B0u;
    // 7F1FE1B0: fsubs   f2, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1FE1B0u)) return;
    ppc_fsubs(ctx, 2, 0, 3);

label_7F1FE1B4:
    ctx->pc = 0x7F1FE1B4u;
    // 7F1FE1B4: stw     r0, 272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE1B8:
    ctx->pc = 0x7F1FE1B8u;
    // 7F1FE1B8: lfd     f0, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE1B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FE1BC:
    ctx->pc = 0x7F1FE1BCu;
    // 7F1FE1BC: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1FE1BCu)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F1FE1C0:
    ctx->pc = 0x7F1FE1C0u;
    // 7F1FE1C0: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE1C0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1FE1C4:
    ctx->pc = 0x7F1FE1C4u;
    // 7F1FE1C4: stfs     f0, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE1C4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FE1C8:
    ctx->pc = 0x7F1FE1C8u;
    // 7F1FE1C8: lfs     f1, 136(r16)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE1C8u)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FE1CC:
    ctx->pc = 0x7F1FE1CCu;
    // 7F1FE1CC: lfs     f0, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE1CCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE1D0:
    ctx->pc = 0x7F1FE1D0u;
    // 7F1FE1D0: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE1D0u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1FE1D4:
    ctx->pc = 0x7F1FE1D4u;
    // 7F1FE1D4: stfs     f0, 0(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE1D4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FE1D8:
    ctx->pc = 0x7F1FE1D8u;
    // 7F1FE1D8: lfs     f1, 140(r16)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE1D8u)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FE1DC:
    ctx->pc = 0x7F1FE1DCu;
    // 7F1FE1DC: lfs     f0, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE1DCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE1E0:
    ctx->pc = 0x7F1FE1E0u;
    // 7F1FE1E0: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE1E0u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1FE1E4:
    ctx->pc = 0x7F1FE1E4u;
    // 7F1FE1E4: stfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE1E4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FE1E8:
    ctx->pc = 0x7F1FE1E8u;
    // 7F1FE1E8: lfs     f1, 144(r16)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE1E8u)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FE1EC:
    ctx->pc = 0x7F1FE1ECu;
    // 7F1FE1EC: lfs     f0, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE1ECu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE1F0:
    ctx->pc = 0x7F1FE1F0u;
    // 7F1FE1F0: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE1F0u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1FE1F4:
    ctx->pc = 0x7F1FE1F4u;
    // 7F1FE1F4: stfs     f0, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE1F4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FE1F8:
    // 7F1FE1F8: bl      0x7F1FE77C
    {
            ctx->lr = 0x7F1FE1FCu;
            goto label_7F1FE77C;
    }

label_7F1FE1FC:
    ctx->downcount -= 12;
    // 7F1FE1FC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FE200:
    // 7F1FE200: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F1FE204:
    ctx->pc = 0x7F1FE204u;
    // 7F1FE204: lfs     f0, 13520(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE204u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13520);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE208:
    ctx->pc = 0x7F1FE208u;
    // 7F1FE208: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FE208u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1FE20C:
    ctx->pc = 0x7F1FE20Cu;
    // 7F1FE20C: stfs     f0, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE20Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FE210:
    ctx->pc = 0x7F1FE210u;
    // 7F1FE210: lfs     f0, 132(r16)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE210u)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(132);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE214:
    ctx->pc = 0x7F1FE214u;
    // 7F1FE214: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE214u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1FE218:
    ctx->pc = 0x7F1FE218u;
    // 7F1FE218: stfd     f0, 280(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE218u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1FE21C:
    ctx->pc = 0x7F1FE21Cu;
    // 7F1FE21C: lwz     r3, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FE220:
    ctx->pc = 0x7F1FE220u;
    // 7F1FE220: stb     r3, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F1FE224:
    ctx->pc = 0x7F1FE224u;
    // 7F1FE224: stw     r0, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE228:
    // 7F1FE228: b       0x7F1FE474
    {
            goto label_7F1FE474;
    }

label_7F1FE22C:
    ctx->pc = 0x7F1FE22Cu;
    ctx->downcount -= 3;
    // 7F1FE22C: lwz     r0, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE230:
    // 7F1FE230: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FE234:
    // 7F1FE234: bc    4, 0, 0x7F1FE358
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE358;
        }
    }

label_7F1FE238:
    ctx->downcount -= 2;
    // 7F1FE238: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F1FE23C:
    // 7F1FE23C: bl      0x7F1FE77C
    {
            ctx->lr = 0x7F1FE240u;
            goto label_7F1FE77C;
    }

label_7F1FE240:
    ctx->downcount -= 27;
    // 7F1FE240: xoris   r3, r22, 0x8000
    ctx->gpr[3] = ctx->gpr[22] ^ (0x8000u << 16);

label_7F1FE244:
    // 7F1FE244: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1FE248:
    ctx->pc = 0x7F1FE248u;
    // 7F1FE248: stw     r3, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FE24C:
    // 7F1FE24C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FE250:
    ctx->pc = 0x7F1FE250u;
    // 7F1FE250: lfd     f3, 13512(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE250u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13512);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FE254:
    ctx->pc = 0x7F1FE254u;
    // 7F1FE254: stw     r0, 280(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE258:
    ctx->pc = 0x7F1FE258u;
    // 7F1FE258: lfd     f0, 280(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE258u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FE25C:
    ctx->pc = 0x7F1FE25Cu;
    // 7F1FE25C: stw     r3, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FE260:
    ctx->pc = 0x7F1FE260u;
    // 7F1FE260: fsubs   f2, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1FE260u)) return;
    ppc_fsubs(ctx, 2, 0, 3);

label_7F1FE264:
    ctx->pc = 0x7F1FE264u;
    // 7F1FE264: stw     r0, 272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE268:
    ctx->pc = 0x7F1FE268u;
    // 7F1FE268: lfd     f0, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE268u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FE26C:
    ctx->pc = 0x7F1FE26Cu;
    // 7F1FE26C: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1FE26Cu)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F1FE270:
    ctx->pc = 0x7F1FE270u;
    // 7F1FE270: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE270u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1FE274:
    ctx->pc = 0x7F1FE274u;
    // 7F1FE274: stfs     f0, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE274u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FE278:
    ctx->pc = 0x7F1FE278u;
    // 7F1FE278: lfs     f1, 136(r16)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE278u)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FE27C:
    ctx->pc = 0x7F1FE27Cu;
    // 7F1FE27C: lfs     f0, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE27Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE280:
    ctx->pc = 0x7F1FE280u;
    // 7F1FE280: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE280u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1FE284:
    ctx->pc = 0x7F1FE284u;
    // 7F1FE284: stfs     f0, 0(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE284u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FE288:
    ctx->pc = 0x7F1FE288u;
    // 7F1FE288: lfs     f1, 140(r16)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE288u)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FE28C:
    ctx->pc = 0x7F1FE28Cu;
    // 7F1FE28C: lfs     f0, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE28Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE290:
    ctx->pc = 0x7F1FE290u;
    // 7F1FE290: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE290u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1FE294:
    ctx->pc = 0x7F1FE294u;
    // 7F1FE294: stfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE294u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FE298:
    ctx->pc = 0x7F1FE298u;
    // 7F1FE298: lfs     f1, 144(r16)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE298u)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FE29C:
    ctx->pc = 0x7F1FE29Cu;
    // 7F1FE29C: lfs     f0, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE29Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE2A0:
    ctx->pc = 0x7F1FE2A0u;
    // 7F1FE2A0: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE2A0u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1FE2A4:
    ctx->pc = 0x7F1FE2A4u;
    // 7F1FE2A4: stfs     f0, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE2A4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FE2A8:
    // 7F1FE2A8: bl      0x7F1FE77C
    {
            ctx->lr = 0x7F1FE2ACu;
            goto label_7F1FE77C;
    }

label_7F1FE2AC:
    ctx->downcount -= 8;
    // 7F1FE2AC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FE2B0:
    ctx->pc = 0x7F1FE2B0u;
    // 7F1FE2B0: lfs     f0, 13520(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE2B0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13520);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE2B4:
    ctx->pc = 0x7F1FE2B4u;
    // 7F1FE2B4: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FE2B4u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1FE2B8:
    ctx->pc = 0x7F1FE2B8u;
    // 7F1FE2B8: stfs     f0, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE2B8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FE2BC:
    ctx->pc = 0x7F1FE2BCu;
    // 7F1FE2BC: lwz     r3, 796(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(796);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FE2C0:
    ctx->pc = 0x7F1FE2C0u;
    // 7F1FE2C0: lwz     r0, 808(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(808);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE2C4:
    // 7F1FE2C4: cmpw    r3, r0
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

label_7F1FE2C8:
    // 7F1FE2C8: bc    4, 0, 0x7F1FE2EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE2EC;
        }
    }

label_7F1FE2CC:
    ctx->downcount -= 8;
    // 7F1FE2CC: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F1FE2D0:
    ctx->pc = 0x7F1FE2D0u;
    // 7F1FE2D0: stw     r0, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE2D4:
    ctx->pc = 0x7F1FE2D4u;
    // 7F1FE2D4: lfs     f0, 132(r16)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE2D4u)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(132);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE2D8:
    ctx->pc = 0x7F1FE2D8u;
    // 7F1FE2D8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE2D8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1FE2DC:
    ctx->pc = 0x7F1FE2DCu;
    // 7F1FE2DC: stfd     f0, 280(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE2DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1FE2E0:
    ctx->pc = 0x7F1FE2E0u;
    // 7F1FE2E0: lwz     r0, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE2E4:
    ctx->pc = 0x7F1FE2E4u;
    // 7F1FE2E4: stb     r0, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1FE2E8:
    // 7F1FE2E8: b       0x7F1FE474
    {
            goto label_7F1FE474;
    }

label_7F1FE2EC:
    ctx->downcount -= 6;
    // 7F1FE2EC: subf   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1FE2F0:
    // 7F1FE2F0: subfic  r0, r0, 32
    {
        u64 res = (u64)(u32)(s32)(32) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1FE2F4:
    ctx->pc = 0x7F1FE2F4u;
    // 7F1FE2F4: stw     r0, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE2F8:
    ctx->pc = 0x7F1FE2F8u;
    // 7F1FE2F8: lwz     r0, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE2FC:
    // 7F1FE2FC: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FE300:
    // 7F1FE300: bc    4, 1, 0x7F1FE34C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE34C;
        }
    }

label_7F1FE304:
    ctx->downcount -= 18;
    // 7F1FE304: xoris   r3, r0, 0x8000
    ctx->gpr[3] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1FE308:
    // 7F1FE308: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1FE30C:
    ctx->pc = 0x7F1FE30Cu;
    // 7F1FE30C: stw     r3, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FE310:
    // 7F1FE310: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FE314:
    ctx->pc = 0x7F1FE314u;
    // 7F1FE314: lfd     f1, 13512(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE314u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13512);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FE318:
    // 7F1FE318: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FE31C:
    ctx->pc = 0x7F1FE31Cu;
    // 7F1FE31C: stw     r0, 280(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE320:
    ctx->pc = 0x7F1FE320u;
    // 7F1FE320: lfs     f2, 132(r16)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE320u)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(132);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1FE324:
    ctx->pc = 0x7F1FE324u;
    // 7F1FE324: lfd     f0, 280(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE324u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FE328:
    ctx->pc = 0x7F1FE328u;
    // 7F1FE328: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FE328u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F1FE32C:
    ctx->pc = 0x7F1FE32Cu;
    // 7F1FE32C: lfs     f0, 13524(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE32Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13524);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE330:
    ctx->pc = 0x7F1FE330u;
    // 7F1FE330: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FE330u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F1FE334:
    ctx->pc = 0x7F1FE334u;
    // 7F1FE334: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE334u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1FE338:
    ctx->pc = 0x7F1FE338u;
    // 7F1FE338: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE338u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1FE33C:
    ctx->pc = 0x7F1FE33Cu;
    // 7F1FE33C: stfd     f0, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE33Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1FE340:
    ctx->pc = 0x7F1FE340u;
    // 7F1FE340: lwz     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE344:
    ctx->pc = 0x7F1FE344u;
    // 7F1FE344: stb     r0, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1FE348:
    // 7F1FE348: b       0x7F1FE474
    {
            goto label_7F1FE474;
    }

label_7F1FE34C:
    ctx->downcount -= 3;
    // 7F1FE34C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1FE350:
    ctx->pc = 0x7F1FE350u;
    // 7F1FE350: stb     r0, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1FE354:
    // 7F1FE354: b       0x7F1FE474
    {
            goto label_7F1FE474;
    }

label_7F1FE358:
    ctx->downcount -= 18;
    // 7F1FE358: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_7F1FE35C:
    // 7F1FE35C: xoris   r0, r21, 0x8000
    ctx->gpr[0] = ctx->gpr[21] ^ (0x8000u << 16);

label_7F1FE360:
    ctx->pc = 0x7F1FE360u;
    // 7F1FE360: stw     r0, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE364:
    // 7F1FE364: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FE368:
    // 7F1FE368: xoris   r0, r20, 0x8000
    ctx->gpr[0] = ctx->gpr[20] ^ (0x8000u << 16);

label_7F1FE36C:
    ctx->pc = 0x7F1FE36Cu;
    // 7F1FE36C: lfd     f2, 13512(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE36Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13512);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FE370:
    ctx->pc = 0x7F1FE370u;
    // 7F1FE370: stw     r3, 280(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FE374:
    ctx->pc = 0x7F1FE374u;
    // 7F1FE374: lfd     f0, 280(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE374u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FE378:
    ctx->pc = 0x7F1FE378u;
    // 7F1FE378: stw     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE37C:
    ctx->pc = 0x7F1FE37Cu;
    // 7F1FE37C: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1FE37Cu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1FE380:
    ctx->pc = 0x7F1FE380u;
    // 7F1FE380: stw     r3, 272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FE384:
    ctx->pc = 0x7F1FE384u;
    // 7F1FE384: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE384u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F1FE388:
    ctx->pc = 0x7F1FE388u;
    // 7F1FE388: lfd     f0, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE388u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FE38C:
    ctx->pc = 0x7F1FE38Cu;
    // 7F1FE38C: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1FE38Cu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1FE390:
    ctx->pc = 0x7F1FE390u;
    // 7F1FE390: stfs     f1, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE390u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FE394:
    ctx->pc = 0x7F1FE394u;
    // 7F1FE394: lfs     f1, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE394u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FE398:
    ctx->pc = 0x7F1FE398u;
    // 7F1FE398: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE398u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1FE39C:
    // 7F1FE39C: bc    4, 1, 0x7F1FE3B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE3B4;
        }
    }

label_7F1FE3A0:
    ctx->pc = 0x7F1FE3A0u;
    ctx->downcount -= 5;
    // 7F1FE3A0: stw     r0, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE3A4:
    ctx->pc = 0x7F1FE3A4u;
    // 7F1FE3A4: stw     r3, 280(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FE3A8:
    ctx->pc = 0x7F1FE3A8u;
    // 7F1FE3A8: lfd     f0, 280(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE3A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FE3AC:
    ctx->pc = 0x7F1FE3ACu;
    // 7F1FE3AC: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1FE3ACu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F1FE3B0:
    ctx->pc = 0x7F1FE3B0u;
    // 7F1FE3B0: stfs     f0, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE3B0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FE3B4:
    ctx->pc = 0x7F1FE3B4u;
    ctx->downcount -= 17;
    // 7F1FE3B4: lfs     f1, 0(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE3B4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FE3B8:
    // 7F1FE3B8: rlwinm r3, r26, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[26], 1u) & 0x00000001u;
    }

label_7F1FE3BC:
    ctx->pc = 0x7F1FE3BCu;
    // 7F1FE3BC: lfs     f0, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE3BCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE3C0:
    // 7F1FE3C0: rlwinm r0, r26, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[26], 0u) & 0x00000001u;
    }

label_7F1FE3C4:
    // 7F1FE3C4: xor   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[3];
    }

label_7F1FE3C8:
    ctx->pc = 0x7F1FE3C8u;
    // 7F1FE3C8: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE3C8u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1FE3CC:
    // 7F1FE3CC: subf.   r0, r3, r0
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

label_7F1FE3D0:
    ctx->pc = 0x7F1FE3D0u;
    // 7F1FE3D0: stfs     f0, 0(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE3D0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FE3D4:
    ctx->pc = 0x7F1FE3D4u;
    // 7F1FE3D4: lfs     f1, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE3D4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FE3D8:
    ctx->pc = 0x7F1FE3D8u;
    // 7F1FE3D8: lfs     f0, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE3D8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE3DC:
    ctx->pc = 0x7F1FE3DCu;
    // 7F1FE3DC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE3DCu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1FE3E0:
    ctx->pc = 0x7F1FE3E0u;
    // 7F1FE3E0: stfs     f0, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE3E0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FE3E4:
    ctx->pc = 0x7F1FE3E4u;
    // 7F1FE3E4: lfs     f1, 8(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE3E4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FE3E8:
    ctx->pc = 0x7F1FE3E8u;
    // 7F1FE3E8: lfs     f0, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE3E8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE3EC:
    ctx->pc = 0x7F1FE3ECu;
    // 7F1FE3EC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE3ECu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1FE3F0:
    ctx->pc = 0x7F1FE3F0u;
    // 7F1FE3F0: stfs     f0, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE3F0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FE3F4:
    // 7F1FE3F4: bc    12, 2, 0x7F1FE414
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE414;
        }
    }

label_7F1FE3F8:
    ctx->downcount -= 1;
    // 7F1FE3F8: bl      0x7F1FE77C
    {
            ctx->lr = 0x7F1FE3FCu;
            goto label_7F1FE77C;
    }

label_7F1FE3FC:
    ctx->downcount -= 6;
    // 7F1FE3FC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FE400:
    ctx->pc = 0x7F1FE400u;
    // 7F1FE400: lfs     f0, 12(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE400u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE404:
    ctx->pc = 0x7F1FE404u;
    // 7F1FE404: lfs     f2, 13528(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE404u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13528);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1FE408:
    ctx->pc = 0x7F1FE408u;
    // 7F1FE408: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE408u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1FE40C:
    ctx->pc = 0x7F1FE40Cu;
    // 7F1FE40C: stfs     f0, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE40Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FE410:
    // 7F1FE410: b       0x7F1FE42C
    {
            goto label_7F1FE42C;
    }

label_7F1FE414:
    ctx->downcount -= 1;
    // 7F1FE414: bl      0x7F1FE77C
    {
            ctx->lr = 0x7F1FE418u;
            goto label_7F1FE77C;
    }

label_7F1FE418:
    ctx->downcount -= 5;
    // 7F1FE418: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FE41C:
    ctx->pc = 0x7F1FE41Cu;
    // 7F1FE41C: lfs     f0, 12(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE41Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE420:
    ctx->pc = 0x7F1FE420u;
    // 7F1FE420: lfs     f2, 13528(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE420u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13528);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1FE424:
    ctx->pc = 0x7F1FE424u;
    // 7F1FE424: fnmsubs f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE424u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, true, true, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1FE428:
    ctx->pc = 0x7F1FE428u;
    // 7F1FE428: stfs     f0, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE428u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FE42C:
    ctx->pc = 0x7F1FE42Cu;
    ctx->downcount -= 18;
    // 7F1FE42C: lwz     r4, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FE430:
    // 7F1FE430: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1FE434:
    // 7F1FE434: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1FE438:
    ctx->pc = 0x7F1FE438u;
    // 7F1FE438: stw     r0, 280(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE43C:
    // 7F1FE43C: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F1FE440:
    ctx->pc = 0x7F1FE440u;
    // 7F1FE440: lfd     f1, 13512(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE440u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(13512);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FE444:
    ctx->pc = 0x7F1FE444u;
    // 7F1FE444: stw     r4, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1FE448:
    // 7F1FE448: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FE44C:
    ctx->pc = 0x7F1FE44Cu;
    // 7F1FE44C: lfs     f2, 132(r16)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE44Cu)) return;
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(132);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1FE450:
    ctx->pc = 0x7F1FE450u;
    // 7F1FE450: lfd     f0, 280(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE450u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FE454:
    ctx->pc = 0x7F1FE454u;
    // 7F1FE454: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FE454u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F1FE458:
    ctx->pc = 0x7F1FE458u;
    // 7F1FE458: lfs     f0, 13524(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE458u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13524);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE45C:
    ctx->pc = 0x7F1FE45Cu;
    // 7F1FE45C: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FE45Cu)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F1FE460:
    ctx->pc = 0x7F1FE460u;
    // 7F1FE460: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE460u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1FE464:
    ctx->pc = 0x7F1FE464u;
    // 7F1FE464: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE464u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1FE468:
    ctx->pc = 0x7F1FE468u;
    // 7F1FE468: stfd     f0, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE468u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1FE46C:
    ctx->pc = 0x7F1FE46Cu;
    // 7F1FE46C: lwz     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE470:
    ctx->pc = 0x7F1FE470u;
    // 7F1FE470: stb     r0, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1FE474:
    ctx->pc = 0x7F1FE474u;
    ctx->downcount -= 2;
    // 7F1FE474: lfs     f1, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE474u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FE478:
    // 7F1FE478: bl      0x7F00FAF4
    {
            ctx->lr = 0x7F1FE47Cu;
            ctx->pc = 0x7F00FAF4u;
            return;
    }

label_7F1FE47C:
    ctx->pc = 0x7F1FE47Cu;
    ctx->downcount -= 8;
    // 7F1FE47C: lfs     f0, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE47Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE480:
    ctx->pc = 0x7F1FE480u;
    // 7F1FE480: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FE480u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1FE484:
    ctx->pc = 0x7F1FE484u;
    // 7F1FE484: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE484u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1FE488:
    ctx->pc = 0x7F1FE488u;
    // 7F1FE488: stfd     f0, 280(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE488u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(280);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1FE48C:
    ctx->pc = 0x7F1FE48Cu;
    // 7F1FE48C: lwz     r0, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE490:
    ctx->pc = 0x7F1FE490u;
    // 7F1FE490: sth     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1FE494:
    ctx->pc = 0x7F1FE494u;
    // 7F1FE494: lfs     f1, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE494u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FE498:
    // 7F1FE498: bl      0x7F008330
    {
            ctx->lr = 0x7F1FE49Cu;
            ctx->pc = 0x7F008330u;
            return;
    }

label_7F1FE49C:
    ctx->pc = 0x7F1FE49Cu;
    ctx->downcount -= 18;
    // 7F1FE49C: lfs     f0, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE49Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE4A0:
    // 7F1FE4A0: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F1FE4A4:
    // 7F1FE4A4: cmpwi   r26, 16
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FE4A8:
    // 7F1FE4A8: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_7F1FE4AC:
    ctx->pc = 0x7F1FE4ACu;
    // 7F1FE4AC: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FE4ACu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1FE4B0:
    // 7F1FE4B0: addi    r29, r29, 16
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(16);

label_7F1FE4B4:
    // 7F1FE4B4: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

label_7F1FE4B8:
    // 7F1FE4B8: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_7F1FE4BC:
    ctx->pc = 0x7F1FE4BCu;
    // 7F1FE4BC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE4BCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1FE4C0:
    ctx->pc = 0x7F1FE4C0u;
    // 7F1FE4C0: stfd     f0, 272(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE4C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(272);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1FE4C4:
    ctx->pc = 0x7F1FE4C4u;
    // 7F1FE4C4: lwz     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE4C8:
    ctx->pc = 0x7F1FE4C8u;
    // 7F1FE4C8: sth     r0, 10(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1FE4CC:
    // 7F1FE4CC: addi    r31, r31, 16
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16);

label_7F1FE4D0:
    ctx->pc = 0x7F1FE4D0u;
    // 7F1FE4D0: lwz     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FE4D4:
    // 7F1FE4D4: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F1FE4D8:
    ctx->pc = 0x7F1FE4D8u;
    // 7F1FE4D8: stw     r0, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE4DC:
    // 7F1FE4DC: addi    r23, r23, 4
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(4);

label_7F1FE4E0:
    // 7F1FE4E0: bc    12, 0, 0x7F1FE174
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FE174u;
                return;
            }
            goto label_7F1FE174;
        }
    }

label_7F1FE4E4:
    ctx->downcount -= 5;
    // 7F1FE4E4: or   r3, r19, r19
    {
        ctx->gpr[3] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F1FE4E8:
    // 7F1FE4E8: or   r5, r18, r18
    {
        ctx->gpr[5] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F1FE4EC:
    // 7F1FE4EC: or   r6, r17, r17
    {
        ctx->gpr[6] = ctx->gpr[17] | ctx->gpr[17];
    }

label_7F1FE4F0:
    // 7F1FE4F0: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_7F1FE4F4:
    // 7F1FE4F4: bl      0x7F1FDE2C
    {
            ctx->lr = 0x7F1FE4F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FDE2Cu;
                return;
            }
            goto label_7F1FDE2C;
    }

label_7F1FE4F8:
    ctx->downcount -= 5;
    // 7F1FE4F8: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F1FE4FC:
    ctx->pc = 0x7F1FE4FCu;
    // 7F1FE4FC: fadds   f30, f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FE4FCu)) return;
    ppc_fadds(ctx, 30, 30, 1);

label_7F1FE500:
    // 7F1FE500: cmpwi   r27, 2
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

label_7F1FE504:
    // 7F1FE504: addi    r19, r19, 128
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(128);

label_7F1FE508:
    // 7F1FE508: bc    12, 0, 0x7F1FE168
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FE168u;
                return;
            }
            goto label_7F1FE168;
        }
    }

label_7F1FE50C:
    ctx->pc = 0x7F1FE50Cu;
    ctx->downcount -= 7;
    // 7F1FE50C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F1FE510:
    ctx->pc = 0x7F1FE510u;
    // 7F1FE510: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F1FE514:
    ctx->pc = 0x7F1FE514u;
    // 7F1FE514: addi    r5, r4, -11384
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-11384);

label_7F1FE518:
    ctx->pc = 0x7F1FE518u;
    // 7F1FE518: lwz     r6, 32304(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32304);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1FE51C:
    ctx->pc = 0x7F1FE51Cu;
    // 7F1FE51C: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE520:
    ctx->pc = 0x7F1FE520u;
    // 7F1FE520: cmpw    r0, r6
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FE524:
    ctx->pc = 0x7F1FE524u;
    // 7F1FE524: bc    12, 2, 0x7F1FE544
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE544;
        }
    }

label_7F1FE528:
    ctx->pc = 0x7F1FE528u;
    ctx->downcount -= 7;
    // 7F1FE528: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F1FE52C:
    ctx->pc = 0x7F1FE52Cu;
    // 7F1FE52C: lfsu     f0, -11388(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE52Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11388);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
        ctx->gpr[4] = ea;
    }

label_7F1FE530:
    ctx->pc = 0x7F1FE530u;
    // 7F1FE530: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FE534:
    ctx->pc = 0x7F1FE534u;
    // 7F1FE534: stw     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1FE538:
    ctx->pc = 0x7F1FE538u;
    // 7F1FE538: stfs     f0, -11392(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE538u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11392);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FE53C:
    ctx->pc = 0x7F1FE53Cu;
    // 7F1FE53C: stfs     f30, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE53Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

label_7F1FE540:
    ctx->pc = 0x7F1FE540u;
    // 7F1FE540: b       0x7F1FE554
    {
            goto label_7F1FE554;
    }

label_7F1FE544:
    ctx->pc = 0x7F1FE544u;
    ctx->downcount -= 4;
    // 7F1FE544: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FE548:
    ctx->pc = 0x7F1FE548u;
    // 7F1FE548: lfsu     f0, -11388(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE548u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11388);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
        ctx->gpr[3] = ea;
    }

label_7F1FE54C:
    ctx->pc = 0x7F1FE54Cu;
    // 7F1FE54C: fadds   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1FE54Cu)) return;
    ppc_fadds(ctx, 0, 0, 30);

label_7F1FE550:
    ctx->pc = 0x7F1FE550u;
    // 7F1FE550: stfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE550u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FE554:
    ctx->pc = 0x7F1FE554u;
    ctx->downcount -= 7;
    // 7F1FE554: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F1FE558:
    ctx->pc = 0x7F1FE558u;
    // 7F1FE558: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FE55C:
    ctx->pc = 0x7F1FE55Cu;
    // 7F1FE55C: lfs     f3, -11392(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE55Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11392);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1FE560:
    ctx->pc = 0x7F1FE560u;
    // 7F1FE560: lfs     f2, 13532(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE560u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13532);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1FE564:
    ctx->pc = 0x7F1FE564u;
    // 7F1FE564: fcmpo   cr0, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1FE564u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[3], ctx->fpr[2], true);

label_7F1FE568:
    ctx->pc = 0x7F1FE568u;
    // 7F1FE568: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1FE56C:
    ctx->pc = 0x7F1FE56Cu;
    // 7F1FE56C: bc    4, 2, 0x7F1FE5CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE5CC;
        }
    }

label_7F1FE570:
    ctx->pc = 0x7F1FE570u;
    ctx->downcount -= 25;
    // 7F1FE570: fdivs   f1, f30, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1FE570u)) return;
    ppc_fdivs(ctx, 1, 30, 3);

label_7F1FE574:
    ctx->pc = 0x7F1FE574u;
    // 7F1FE574: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FE578:
    ctx->pc = 0x7F1FE578u;
    // 7F1FE578: lfs     f0, 13504(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE578u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13504);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE57C:
    ctx->pc = 0x7F1FE57Cu;
    // 7F1FE57C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1FE580:
    ctx->pc = 0x7F1FE580u;
    // 7F1FE580: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_7F1FE584:
    ctx->pc = 0x7F1FE584u;
    // 7F1FE584: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1FE588:
    ctx->pc = 0x7F1FE588u;
    // 7F1FE588: fsubs   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1FE588u)) return;
    ppc_fsubs(ctx, 2, 3, 2);

label_7F1FE58C:
    ctx->pc = 0x7F1FE58Cu;
    // 7F1FE58C: fmuls   f2, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FE58Cu)) return;
    ppc_fmuls(ctx, 2, 2, 1);

label_7F1FE590:
    ctx->pc = 0x7F1FE590u;
    // 7F1FE590: b       0x7F1FE5BC
    {
            goto label_7F1FE5BC;
    }

label_7F1FE594:
    ctx->pc = 0x7F1FE594u;
    ctx->downcount -= 3;
    // 7F1FE594: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FE598:
    // 7F1FE598: cmplwi  r3, 0x0000
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

label_7F1FE59C:
    // 7F1FE59C: bc    12, 2, 0x7F1FE5B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE5B4;
        }
    }

label_7F1FE5A0:
    ctx->pc = 0x7F1FE5A0u;
    ctx->downcount -= 5;
    // 7F1FE5A0: sth     r0, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1FE5A4:
    ctx->pc = 0x7F1FE5A4u;
    // 7F1FE5A4: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FE5A8:
    ctx->pc = 0x7F1FE5A8u;
    // 7F1FE5A8: sth     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1FE5AC:
    ctx->pc = 0x7F1FE5ACu;
    // 7F1FE5AC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE5ACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FE5B0:
    ctx->pc = 0x7F1FE5B0u;
    // 7F1FE5B0: fsubs   f2, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FE5B0u)) return;
    ppc_fsubs(ctx, 2, 2, 1);

label_7F1FE5B4:
    ctx->downcount -= 2;
    // 7F1FE5B4: addi    r4, r4, 8
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8);

label_7F1FE5B8:
    // 7F1FE5B8: addi    r5, r5, -1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F1FE5BC:
    ctx->pc = 0x7F1FE5BCu;
    ctx->downcount -= 2;
    // 7F1FE5BC: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE5BCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F1FE5C0:
    // 7F1FE5C0: bc    4, 1, 0x7F1FE5CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE5CC;
        }
    }

label_7F1FE5C4:
    ctx->downcount -= 2;
    // 7F1FE5C4: cmpwi   r5, 0
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

label_7F1FE5C8:
    // 7F1FE5C8: bc    12, 1, 0x7F1FE594
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FE594u;
                return;
            }
            goto label_7F1FE594;
        }
    }

label_7F1FE5CC:
    ctx->pc = 0x7F1FE5CCu;
    ctx->downcount -= 3;
    // 7F1FE5CC: lwz     r0, 812(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(812);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE5D0:
    ctx->pc = 0x7F1FE5D0u;
    // 7F1FE5D0: cmpwi   r0, 2
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

label_7F1FE5D4:
    ctx->pc = 0x7F1FE5D4u;
    // 7F1FE5D4: bc    12, 2, 0x7F1FE6BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE6BC;
        }
    }

label_7F1FE5D8:
    ctx->pc = 0x7F1FE5D8u;
    ctx->downcount -= 1;
    // 7F1FE5D8: bc    4, 0, 0x7F1FE73C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE73C;
        }
    }

label_7F1FE5DC:
    ctx->pc = 0x7F1FE5DCu;
    ctx->downcount -= 2;
    // 7F1FE5DC: cmpwi   r0, 1
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

label_7F1FE5E0:
    ctx->pc = 0x7F1FE5E0u;
    // 7F1FE5E0: bc    4, 0, 0x7F1FE5E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE5E8;
        }
    }

label_7F1FE5E4:
    ctx->pc = 0x7F1FE5E4u;
    ctx->downcount -= 1;
    // 7F1FE5E4: b       0x7F1FE73C
    {
            goto label_7F1FE73C;
    }

label_7F1FE5E8:
    ctx->pc = 0x7F1FE5E8u;
    ctx->downcount -= 4;
    // 7F1FE5E8: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F1FE5EC:
    ctx->pc = 0x7F1FE5ECu;
    // 7F1FE5EC: lwz     r0, 32304(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32304);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE5F0:
    ctx->pc = 0x7F1FE5F0u;
    // 7F1FE5F0: rlwinm. r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1FE5F4:
    ctx->pc = 0x7F1FE5F4u;
    // 7F1FE5F4: bc    4, 2, 0x7F1FE73C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE73C;
        }
    }

label_7F1FE5F8:
    ctx->pc = 0x7F1FE5F8u;
    ctx->downcount -= 2;
    // 7F1FE5F8: li      r3, 42
    ctx->gpr[3] = (u32)(s32)(42);

label_7F1FE5FC:
    ctx->pc = 0x7F1FE5FCu;
    // 7F1FE5FC: bl      0x7F01ED70
    {
            ctx->lr = 0x7F1FE600u;
            ctx->pc = 0x7F01ED70u;
            return;
    }

label_7F1FE600:
    ctx->pc = 0x7F1FE600u;
    ctx->downcount -= 2;
    // 7F1FE600: cmpwi   r3, 0
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

label_7F1FE604:
    ctx->pc = 0x7F1FE604u;
    // 7F1FE604: bc    12, 2, 0x7F1FE678
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE678;
        }
    }

label_7F1FE608:
    ctx->pc = 0x7F1FE608u;
    ctx->downcount -= 3;
    // 7F1FE608: lwz     r0, 1288(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(1288);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE60C:
    ctx->pc = 0x7F1FE60Cu;
    // 7F1FE60C: cmpwi   r0, -1
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

label_7F1FE610:
    ctx->pc = 0x7F1FE610u;
    // 7F1FE610: bc    12, 2, 0x7F1FE678
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE678;
        }
    }

label_7F1FE614:
    ctx->pc = 0x7F1FE614u;
    ctx->downcount -= 10;
    // 7F1FE614: lwz     r3, 984(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(984);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FE618:
    ctx->pc = 0x7F1FE618u;
    // 7F1FE618: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1FE61C:
    ctx->pc = 0x7F1FE61Cu;
    // 7F1FE61C: lwz     r5, 988(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(988);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1FE620:
    ctx->pc = 0x7F1FE620u;
    // 7F1FE620: xoris   r4, r0, 0x8000
    ctx->gpr[4] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1FE624:
    ctx->pc = 0x7F1FE624u;
    // 7F1FE624: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1FE628:
    ctx->pc = 0x7F1FE628u;
    // 7F1FE628: subfc   r0, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F1FE62C:
    ctx->pc = 0x7F1FE62Cu;
    // 7F1FE62C: subfe   r3, r3, r4
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F1FE630:
    ctx->pc = 0x7F1FE630u;
    // 7F1FE630: subfe   r3, r4, r4
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[4];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F1FE634:
    ctx->pc = 0x7F1FE634u;
    // 7F1FE634: neg.  r3, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[3] = (~a) + 1u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1FE638:
    ctx->pc = 0x7F1FE638u;
    // 7F1FE638: bc    12, 2, 0x7F1FE678
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE678;
        }
    }

label_7F1FE63C:
    ctx->pc = 0x7F1FE63Cu;
    ctx->downcount -= 6;
    // 7F1FE63C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F1FE640:
    ctx->pc = 0x7F1FE640u;
    // 7F1FE640: lis     r3, 71
    ctx->gpr[3] = ((u32)(s32)(71) << 16);

label_7F1FE644:
    ctx->pc = 0x7F1FE644u;
    // 7F1FE644: lbz     r0, -11396(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-11396);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F1FE648:
    ctx->pc = 0x7F1FE648u;
    // 7F1FE648: addi    r3, r3, 3449
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3449);

label_7F1FE64C:
    ctx->pc = 0x7F1FE64Cu;
    // 7F1FE64C: cmplwi  r0, 0x0000
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

label_7F1FE650:
    ctx->pc = 0x7F1FE650u;
    // 7F1FE650: bc    12, 2, 0x7F1FE65C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE65C;
        }
    }

label_7F1FE654:
    ctx->pc = 0x7F1FE654u;
    ctx->downcount -= 2;
    // 7F1FE654: lis     r3, 247
    ctx->gpr[3] = ((u32)(s32)(247) << 16);

label_7F1FE658:
    ctx->pc = 0x7F1FE658u;
    // 7F1FE658: addi    r3, r3, 10440
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10440);

label_7F1FE65C:
    ctx->pc = 0x7F1FE65Cu;
    ctx->downcount -= 2;
    // 7F1FE65C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1FE660:
    ctx->pc = 0x7F1FE660u;
    // 7F1FE660: bl      0x7F3C7728
    {
            ctx->lr = 0x7F1FE664u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F1FE664:
    ctx->pc = 0x7F1FE664u;
    ctx->downcount -= 5;
    // 7F1FE664: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1FE668:
    ctx->pc = 0x7F1FE668u;
    // 7F1FE668: stw     r0, 988(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(988);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE66C:
    ctx->pc = 0x7F1FE66Cu;
    // 7F1FE66C: stw     r0, 984(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(984);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE670:
    ctx->pc = 0x7F1FE670u;
    // 7F1FE670: stw     r0, 1212(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(1212);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE674:
    ctx->pc = 0x7F1FE674u;
    // 7F1FE674: stw     r0, 1208(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(1208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE678:
    ctx->pc = 0x7F1FE678u;
    ctx->downcount -= 6;
    // 7F1FE678: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F1FE67C:
    ctx->pc = 0x7F1FE67Cu;
    // 7F1FE67C: addi    r3, r16, 832
    ctx->gpr[3] = ctx->gpr[16] + (u32)(s32)(832);

label_7F1FE680:
    ctx->pc = 0x7F1FE680u;
    // 7F1FE680: addi    r5, r4, 18308
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18308);

label_7F1FE684:
    ctx->pc = 0x7F1FE684u;
    // 7F1FE684: addi    r4, r16, 56
    ctx->gpr[4] = ctx->gpr[16] + (u32)(s32)(56);

label_7F1FE688:
    ctx->pc = 0x7F1FE688u;
    // 7F1FE688: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1FE68C:
    ctx->pc = 0x7F1FE68Cu;
    // 7F1FE68C: bl      0x7F014964
    {
            ctx->lr = 0x7F1FE690u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F1FE690:
    ctx->pc = 0x7F1FE690u;
    ctx->downcount -= 2;
    // 7F1FE690: addi    r3, r16, 832
    ctx->gpr[3] = ctx->gpr[16] + (u32)(s32)(832);

label_7F1FE694:
    ctx->pc = 0x7F1FE694u;
    // 7F1FE694: bl      0x7F0148A0
    {
            ctx->lr = 0x7F1FE698u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F1FE698:
    ctx->pc = 0x7F1FE698u;
    ctx->downcount -= 6;
    // 7F1FE698: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F1FE69C:
    ctx->pc = 0x7F1FE69Cu;
    // 7F1FE69C: addi    r3, r16, 1056
    ctx->gpr[3] = ctx->gpr[16] + (u32)(s32)(1056);

label_7F1FE6A0:
    ctx->pc = 0x7F1FE6A0u;
    // 7F1FE6A0: addi    r5, r4, 18308
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18308);

label_7F1FE6A4:
    ctx->pc = 0x7F1FE6A4u;
    // 7F1FE6A4: addi    r4, r16, 56
    ctx->gpr[4] = ctx->gpr[16] + (u32)(s32)(56);

label_7F1FE6A8:
    ctx->pc = 0x7F1FE6A8u;
    // 7F1FE6A8: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1FE6AC:
    ctx->pc = 0x7F1FE6ACu;
    // 7F1FE6AC: bl      0x7F014964
    {
            ctx->lr = 0x7F1FE6B0u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F1FE6B0:
    ctx->pc = 0x7F1FE6B0u;
    ctx->downcount -= 2;
    // 7F1FE6B0: addi    r3, r16, 1056
    ctx->gpr[3] = ctx->gpr[16] + (u32)(s32)(1056);

label_7F1FE6B4:
    ctx->pc = 0x7F1FE6B4u;
    // 7F1FE6B4: bl      0x7F0148A0
    {
            ctx->lr = 0x7F1FE6B8u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F1FE6B8:
    ctx->pc = 0x7F1FE6B8u;
    ctx->downcount -= 1;
    // 7F1FE6B8: b       0x7F1FE73C
    {
            goto label_7F1FE73C;
    }

label_7F1FE6BC:
    ctx->pc = 0x7F1FE6BCu;
    ctx->downcount -= 51;
    // 7F1FE6BC: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F1FE6C0:
    ctx->pc = 0x7F1FE6C0u;
    // 7F1FE6C0: li      r3, 15
    ctx->gpr[3] = (u32)(s32)(15);

label_7F1FE6C4:
    ctx->pc = 0x7F1FE6C4u;
    // 7F1FE6C4: addi    r4, r4, 32304
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32304);

label_7F1FE6C8:
    ctx->pc = 0x7F1FE6C8u;
    // 7F1FE6C8: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FE6CC:
    ctx->pc = 0x7F1FE6CCu;
    // 7F1FE6CC: divw   r0, r4, r3
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1FE6D0:
    ctx->pc = 0x7F1FE6D0u;
    // 7F1FE6D0: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F1FE6D4:
    ctx->pc = 0x7F1FE6D4u;
    // 7F1FE6D4: subf.   r0, r0, r4
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

label_7F1FE6D8:
    ctx->pc = 0x7F1FE6D8u;
    // 7F1FE6D8: bc    4, 2, 0x7F1FE6FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE6FC;
        }
    }

label_7F1FE6DC:
    ctx->pc = 0x7F1FE6DCu;
    ctx->downcount -= 6;
    // 7F1FE6DC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F1FE6E0:
    ctx->pc = 0x7F1FE6E0u;
    // 7F1FE6E0: addi    r3, r16, 832
    ctx->gpr[3] = ctx->gpr[16] + (u32)(s32)(832);

label_7F1FE6E4:
    ctx->pc = 0x7F1FE6E4u;
    // 7F1FE6E4: addi    r5, r4, 18308
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18308);

label_7F1FE6E8:
    ctx->pc = 0x7F1FE6E8u;
    // 7F1FE6E8: addi    r4, r16, 56
    ctx->gpr[4] = ctx->gpr[16] + (u32)(s32)(56);

label_7F1FE6EC:
    ctx->pc = 0x7F1FE6ECu;
    // 7F1FE6EC: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1FE6F0:
    ctx->pc = 0x7F1FE6F0u;
    // 7F1FE6F0: bl      0x7F014964
    {
            ctx->lr = 0x7F1FE6F4u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F1FE6F4:
    ctx->pc = 0x7F1FE6F4u;
    ctx->downcount -= 2;
    // 7F1FE6F4: addi    r3, r16, 832
    ctx->gpr[3] = ctx->gpr[16] + (u32)(s32)(832);

label_7F1FE6F8:
    ctx->pc = 0x7F1FE6F8u;
    // 7F1FE6F8: bl      0x7F0148A0
    {
            ctx->lr = 0x7F1FE6FCu;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F1FE6FC:
    ctx->pc = 0x7F1FE6FCu;
    ctx->downcount -= 51;
    // 7F1FE6FC: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F1FE700:
    ctx->pc = 0x7F1FE700u;
    // 7F1FE700: li      r3, 240
    ctx->gpr[3] = (u32)(s32)(240);

label_7F1FE704:
    ctx->pc = 0x7F1FE704u;
    // 7F1FE704: addi    r4, r4, 32304
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32304);

label_7F1FE708:
    ctx->pc = 0x7F1FE708u;
    // 7F1FE708: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FE70C:
    ctx->pc = 0x7F1FE70Cu;
    // 7F1FE70C: divw   r0, r4, r3
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F1FE710:
    ctx->pc = 0x7F1FE710u;
    // 7F1FE710: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F1FE714:
    ctx->pc = 0x7F1FE714u;
    // 7F1FE714: subf.   r0, r0, r4
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

label_7F1FE718:
    ctx->pc = 0x7F1FE718u;
    // 7F1FE718: bc    4, 2, 0x7F1FE73C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE73C;
        }
    }

label_7F1FE71C:
    ctx->pc = 0x7F1FE71Cu;
    ctx->downcount -= 6;
    // 7F1FE71C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F1FE720:
    ctx->pc = 0x7F1FE720u;
    // 7F1FE720: addi    r3, r16, 1056
    ctx->gpr[3] = ctx->gpr[16] + (u32)(s32)(1056);

label_7F1FE724:
    ctx->pc = 0x7F1FE724u;
    // 7F1FE724: addi    r5, r4, 18308
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18308);

label_7F1FE728:
    ctx->pc = 0x7F1FE728u;
    // 7F1FE728: addi    r4, r16, 56
    ctx->gpr[4] = ctx->gpr[16] + (u32)(s32)(56);

label_7F1FE72C:
    ctx->pc = 0x7F1FE72Cu;
    // 7F1FE72C: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1FE730:
    ctx->pc = 0x7F1FE730u;
    // 7F1FE730: bl      0x7F014964
    {
            ctx->lr = 0x7F1FE734u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F1FE734:
    ctx->pc = 0x7F1FE734u;
    ctx->downcount -= 2;
    // 7F1FE734: addi    r3, r16, 1056
    ctx->gpr[3] = ctx->gpr[16] + (u32)(s32)(1056);

label_7F1FE738:
    ctx->pc = 0x7F1FE738u;
    // 7F1FE738: bl      0x7F0148A0
    {
            ctx->lr = 0x7F1FE73Cu;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F1FE73C:
    ctx->pc = 0x7F1FE73Cu;
    ctx->downcount -= 5;
    // 7F1FE73C: lwz     r3, 796(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(796);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FE740:
    ctx->pc = 0x7F1FE740u;
    // 7F1FE740: cmpwi   r25, 31
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(31);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FE744:
    ctx->pc = 0x7F1FE744u;
    // 7F1FE744: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1FE748:
    ctx->pc = 0x7F1FE748u;
    // 7F1FE748: stw     r0, 796(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(796);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE74C:
    ctx->pc = 0x7F1FE74Cu;
    // 7F1FE74C: bc    12, 0, 0x7F1FE758
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE758;
        }
    }

label_7F1FE750:
    ctx->pc = 0x7F1FE750u;
    ctx->downcount -= 2;
    // 7F1FE750: or   r3, r16, r16
    {
        ctx->gpr[3] = ctx->gpr[16] | ctx->gpr[16];
    }

label_7F1FE754:
    ctx->pc = 0x7F1FE754u;
    // 7F1FE754: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1FE758u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1FE758:
    ctx->pc = 0x7F1FE758u;
    ctx->downcount -= 20;
    // 7F1FE758: psq_l   f31, 376(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE758u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(376);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1FE758u);
        if (ctx->exception) return;
    }

label_7F1FE75C:
    ctx->pc = 0x7F1FE75Cu;
    // 7F1FE75C: lfd     f31, 368(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE75Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(368);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FE760:
    ctx->pc = 0x7F1FE760u;
    // 7F1FE760: psq_l   f30, 360(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE760u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F1FE760u);
        if (ctx->exception) return;
    }

label_7F1FE764:
    ctx->pc = 0x7F1FE764u;
    // 7F1FE764: lfd     f30, 352(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE764u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(352);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FE768:
    ctx->pc = 0x7F1FE768u;
    // 7F1FE768: lmw     r16, 288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        for (u32 r = 16; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FE76C:
    ctx->pc = 0x7F1FE76Cu;
    // 7F1FE76C: lwz     r0, 388(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(388);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE770:
    ctx->pc = 0x7F1FE770u;
    // 7F1FE770: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FE774:
    ctx->pc = 0x7F1FE774u;
    // 7F1FE774: addi    r1, r1, 384
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(384);

label_7F1FE778:
    ctx->pc = 0x7F1FE778u;
    // 7F1FE778: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FE77C:
    ctx->pc = 0x7F1FE77Cu;
    ctx->downcount -= 4;
    // 7F1FE77C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FE780:
    ctx->pc = 0x7F1FE780u;
    // 7F1FE780: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FE784:
    ctx->pc = 0x7F1FE784u;
    // 7F1FE784: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE788:
    ctx->pc = 0x7F1FE788u;
    // 7F1FE788: bl      0x7F1FE7C4
    {
            ctx->lr = 0x7F1FE78Cu;
            goto label_7F1FE7C4;
    }

label_7F1FE78C:
    ctx->pc = 0x7F1FE78Cu;
    ctx->downcount -= 31;
    // 7F1FE78C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1FE790:
    ctx->pc = 0x7F1FE790u;
    // 7F1FE790: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FE794:
    ctx->pc = 0x7F1FE794u;
    // 7F1FE794: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FE798:
    ctx->pc = 0x7F1FE798u;
    // 7F1FE798: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FE79C:
    ctx->pc = 0x7F1FE79Cu;
    // 7F1FE79C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE7A0:
    ctx->pc = 0x7F1FE7A0u;
    // 7F1FE7A0: lfd     f2, 13544(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE7A0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13544);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FE7A4:
    ctx->pc = 0x7F1FE7A4u;
    // 7F1FE7A4: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE7A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FE7A8:
    ctx->pc = 0x7F1FE7A8u;
    // 7F1FE7A8: lfs     f0, 13536(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE7A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13536);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE7AC:
    ctx->pc = 0x7F1FE7ACu;
    // 7F1FE7AC: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1FE7ACu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1FE7B0:
    ctx->pc = 0x7F1FE7B0u;
    // 7F1FE7B0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE7B4:
    ctx->pc = 0x7F1FE7B4u;
    // 7F1FE7B4: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE7B4u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F1FE7B8:
    ctx->pc = 0x7F1FE7B8u;
    // 7F1FE7B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FE7BC:
    ctx->pc = 0x7F1FE7BCu;
    // 7F1FE7BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1FE7C0:
    ctx->pc = 0x7F1FE7C0u;
    // 7F1FE7C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FE7C4:
    ctx->pc = 0x7F1FE7C4u;
    ctx->downcount -= 13;
    // 7F1FE7C4: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1FE7C8:
    ctx->pc = 0x7F1FE7C8u;
    // 7F1FE7C8: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F1FE7CC:
    ctx->pc = 0x7F1FE7CCu;
    // 7F1FE7CC: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F1FE7D0:
    ctx->pc = 0x7F1FE7D0u;
    // 7F1FE7D0: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FE7D4:
    ctx->pc = 0x7F1FE7D4u;
    // 7F1FE7D4: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F1FE7D8:
    ctx->pc = 0x7F1FE7D8u;
    // 7F1FE7D8: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F1FE7DC:
    ctx->pc = 0x7F1FE7DCu;
    // 7F1FE7DC: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1FE7E0:
    ctx->pc = 0x7F1FE7E0u;
    // 7F1FE7E0: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FE7E4:
    ctx->pc = 0x7F1FE7E4u;
    // 7F1FE7E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FE7E8:
    ctx->pc = 0x7F1FE7E8u;
    ctx->downcount -= 7;
    // 7F1FE7E8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FE7EC:
    ctx->pc = 0x7F1FE7ECu;
    // 7F1FE7EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FE7F0:
    ctx->pc = 0x7F1FE7F0u;
    // 7F1FE7F0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE7F4:
    ctx->pc = 0x7F1FE7F4u;
    // 7F1FE7F4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1FE7F8:
    ctx->pc = 0x7F1FE7F8u;
    // 7F1FE7F8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FE7FC:
    ctx->pc = 0x7F1FE7FCu;
    // 7F1FE7FC: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FE800:
    ctx->pc = 0x7F1FE800u;
    // 7F1FE800: bl      0x7F01B234
    {
            ctx->lr = 0x7F1FE804u;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F1FE804:
    ctx->pc = 0x7F1FE804u;
    ctx->downcount -= 7;
    // 7F1FE804: stw     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FE808:
    ctx->pc = 0x7F1FE808u;
    // 7F1FE808: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE80C:
    ctx->pc = 0x7F1FE80Cu;
    // 7F1FE80C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1FE810:
    ctx->pc = 0x7F1FE810u;
    // 7F1FE810: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FE814:
    ctx->pc = 0x7F1FE814u;
    // 7F1FE814: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1FE818:
    ctx->pc = 0x7F1FE818u;
    // 7F1FE818: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FE81C:
    ctx->pc = 0x7F1FE81Cu;
    ctx->downcount -= 7;
    // 7F1FE81C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FE820:
    ctx->pc = 0x7F1FE820u;
    // 7F1FE820: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FE824:
    ctx->pc = 0x7F1FE824u;
    // 7F1FE824: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE828:
    ctx->pc = 0x7F1FE828u;
    // 7F1FE828: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1FE82C:
    ctx->pc = 0x7F1FE82Cu;
    // 7F1FE82C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FE830:
    ctx->pc = 0x7F1FE830u;
    // 7F1FE830: lwz     r3, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FE834:
    ctx->pc = 0x7F1FE834u;
    // 7F1FE834: bl      0x7F1C6BB4
    {
            ctx->lr = 0x7F1FE838u;
            ctx->pc = 0x7F1C6BB4u;
            return;
    }

label_7F1FE838:
    ctx->pc = 0x7F1FE838u;
    ctx->downcount -= 7;
    // 7F1FE838: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FE83C:
    ctx->pc = 0x7F1FE83Cu;
    // 7F1FE83C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE840:
    ctx->pc = 0x7F1FE840u;
    // 7F1FE840: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1FE844:
    ctx->pc = 0x7F1FE844u;
    // 7F1FE844: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FE848:
    ctx->pc = 0x7F1FE848u;
    // 7F1FE848: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1FE84C:
    ctx->pc = 0x7F1FE84Cu;
    // 7F1FE84C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FE850:
    ctx->pc = 0x7F1FE850u;
    ctx->downcount -= 19;
    // 7F1FE850: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FE854:
    ctx->pc = 0x7F1FE854u;
    // 7F1FE854: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FE858:
    ctx->pc = 0x7F1FE858u;
    // 7F1FE858: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE85C:
    ctx->pc = 0x7F1FE85Cu;
    // 7F1FE85C: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FE860:
    ctx->pc = 0x7F1FE860u;
    // 7F1FE860: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FE864:
    ctx->pc = 0x7F1FE864u;
    // 7F1FE864: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FE868:
    ctx->pc = 0x7F1FE868u;
    // 7F1FE868: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1FE86C:
    ctx->pc = 0x7F1FE86Cu;
    // 7F1FE86C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FE870:
    ctx->pc = 0x7F1FE870u;
    // 7F1FE870: bl      0x7F3C2534
    {
            ctx->lr = 0x7F1FE874u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F1FE874:
    ctx->pc = 0x7F1FE874u;
    ctx->downcount -= 7;
    // 7F1FE874: li      r3, 68
    ctx->gpr[3] = (u32)(s32)(68);

label_7F1FE878:
    ctx->pc = 0x7F1FE878u;
    // 7F1FE878: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1FE87C:
    ctx->pc = 0x7F1FE87Cu;
    // 7F1FE87C: stw     r3, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FE880:
    ctx->pc = 0x7F1FE880u;
    // 7F1FE880: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1FE884:
    ctx->pc = 0x7F1FE884u;
    // 7F1FE884: stw     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE888:
    ctx->pc = 0x7F1FE888u;
    // 7F1FE888: lwz     r4, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FE88C:
    ctx->pc = 0x7F1FE88Cu;
    // 7F1FE88C: lwz     r5, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1FE890:
    ctx->downcount -= 3;
    // 7F1FE890: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F1FE894:
    ctx->pc = 0x7F1FE894u;
    // 7F1FE894: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1FE898:
    ctx->downcount -= 37;
    // 7F1FE898: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1FE89C:
    // 7F1FE89C: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F1FE8A0:
    ctx->pc = 0x7F1FE8A0u;
    // 7F1FE8A0: sth     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1FE8A4:
    ctx->pc = 0x7F1FE8A4u;
    // 7F1FE8A4: sth     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1FE8A8:
    ctx->pc = 0x7F1FE8A8u;
    // 7F1FE8A8: sth     r3, 6(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1FE8AC:
    ctx->pc = 0x7F1FE8ACu;
    // 7F1FE8AC: sth     r3, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1FE8B0:
    ctx->pc = 0x7F1FE8B0u;
    // 7F1FE8B0: sth     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1FE8B4:
    ctx->pc = 0x7F1FE8B4u;
    // 7F1FE8B4: sth     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1FE8B8:
    ctx->pc = 0x7F1FE8B8u;
    // 7F1FE8B8: sth     r0, 14(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1FE8BC:
    ctx->pc = 0x7F1FE8BCu;
    // 7F1FE8BC: sth     r0, 14(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1FE8C0:
    ctx->pc = 0x7F1FE8C0u;
    // 7F1FE8C0: sth     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1FE8C4:
    ctx->pc = 0x7F1FE8C4u;
    // 7F1FE8C4: sth     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1FE8C8:
    ctx->pc = 0x7F1FE8C8u;
    // 7F1FE8C8: sth     r3, 10(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1FE8CC:
    ctx->pc = 0x7F1FE8CCu;
    // 7F1FE8CC: sth     r3, 10(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1FE8D0:
    ctx->pc = 0x7F1FE8D0u;
    // 7F1FE8D0: lfs     f0, 120(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE8D0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE8D4:
    ctx->pc = 0x7F1FE8D4u;
    // 7F1FE8D4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE8D4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1FE8D8:
    ctx->pc = 0x7F1FE8D8u;
    // 7F1FE8D8: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE8D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1FE8DC:
    ctx->pc = 0x7F1FE8DCu;
    // 7F1FE8DC: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE8E0:
    ctx->pc = 0x7F1FE8E0u;
    // 7F1FE8E0: stb     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1FE8E4:
    ctx->pc = 0x7F1FE8E4u;
    // 7F1FE8E4: stb     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1FE8E8:
    ctx->pc = 0x7F1FE8E8u;
    // 7F1FE8E8: lfs     f0, 124(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE8E8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE8EC:
    ctx->pc = 0x7F1FE8ECu;
    // 7F1FE8EC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE8ECu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1FE8F0:
    ctx->pc = 0x7F1FE8F0u;
    // 7F1FE8F0: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE8F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1FE8F4:
    ctx->pc = 0x7F1FE8F4u;
    // 7F1FE8F4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE8F8:
    ctx->pc = 0x7F1FE8F8u;
    // 7F1FE8F8: stb     r0, 1(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1FE8FC:
    ctx->pc = 0x7F1FE8FCu;
    // 7F1FE8FC: stb     r0, 1(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1FE900:
    ctx->pc = 0x7F1FE900u;
    // 7F1FE900: lfs     f0, 128(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE900u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(128);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE904:
    ctx->pc = 0x7F1FE904u;
    // 7F1FE904: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FE904u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1FE908:
    ctx->pc = 0x7F1FE908u;
    // 7F1FE908: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE908u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1FE90C:
    ctx->pc = 0x7F1FE90Cu;
    // 7F1FE90C: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE910:
    ctx->pc = 0x7F1FE910u;
    // 7F1FE910: stb     r0, 2(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1FE914:
    ctx->pc = 0x7F1FE914u;
    // 7F1FE914: stb     r0, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F1FE918:
    ctx->pc = 0x7F1FE918u;
    // 7F1FE918: stb     r3, 3(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F1FE91C:
    // 7F1FE91C: addi    r5, r5, 16
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(16);

label_7F1FE920:
    ctx->pc = 0x7F1FE920u;
    // 7F1FE920: stb     r3, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F1FE924:
    // 7F1FE924: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

label_7F1FE928:
    // 7F1FE928: bc    16, 0, 0x7F1FE898
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FE898u;
                return;
            }
            goto label_7F1FE898;
        }
    }

label_7F1FE92C:
    ctx->downcount -= 3;
    // 7F1FE92C: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F1FE930:
    // 7F1FE930: cmpwi   r6, 2
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FE934:
    // 7F1FE934: bc    12, 0, 0x7F1FE890
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FE890u;
                return;
            }
            goto label_7F1FE890;
        }
    }

label_7F1FE938:
    ctx->pc = 0x7F1FE938u;
    ctx->downcount -= 16;
    // 7F1FE938: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FE93C:
    ctx->pc = 0x7F1FE93Cu;
    // 7F1FE93C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE940:
    ctx->pc = 0x7F1FE940u;
    // 7F1FE940: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FE944:
    ctx->pc = 0x7F1FE944u;
    // 7F1FE944: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1FE948:
    ctx->pc = 0x7F1FE948u;
    // 7F1FE948: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FE94C:
    ctx->pc = 0x7F1FE94Cu;
    ctx->downcount -= 22;
    // 7F1FE94C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FE950:
    ctx->pc = 0x7F1FE950u;
    // 7F1FE950: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FE954:
    ctx->pc = 0x7F1FE954u;
    // 7F1FE954: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FE958:
    ctx->pc = 0x7F1FE958u;
    // 7F1FE958: stmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FE95C:
    ctx->pc = 0x7F1FE95Cu;
    // 7F1FE95C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FE960:
    ctx->pc = 0x7F1FE960u;
    // 7F1FE960: lis     r3, 5120
    ctx->gpr[3] = ((u32)(s32)(5120) << 16);

label_7F1FE964:
    ctx->pc = 0x7F1FE964u;
    // 7F1FE964: li      r29, 1
    ctx->gpr[29] = (u32)(s32)(1);

label_7F1FE968:
    ctx->pc = 0x7F1FE968u;
    // 7F1FE968: addi    r31, r3, 4096
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(4096);

label_7F1FE96C:
    ctx->pc = 0x7F1FE96Cu;
    // 7F1FE96C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F1FE970:
    ctx->pc = 0x7F1FE970u;
    // 7F1FE970: lwz     r0, 1280(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FE974:
    ctx->pc = 0x7F1FE974u;
    // 7F1FE974: cmpwi   r0, 10
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

label_7F1FE978:
    ctx->pc = 0x7F1FE978u;
    // 7F1FE978: bc    12, 2, 0x7F1FE98C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE98C;
        }
    }

label_7F1FE97C:
    ctx->pc = 0x7F1FE97Cu;
    ctx->downcount -= 1;
    // 7F1FE97C: bc    4, 0, 0x7F1FE998
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE998;
        }
    }

label_7F1FE980:
    ctx->pc = 0x7F1FE980u;
    ctx->downcount -= 2;
    // 7F1FE980: cmpwi   r0, 5
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

label_7F1FE984:
    ctx->pc = 0x7F1FE984u;
    // 7F1FE984: bc    4, 0, 0x7F1FE998
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE998;
        }
    }

label_7F1FE988:
    ctx->pc = 0x7F1FE988u;
    ctx->downcount -= 1;
    // 7F1FE988: b       0x7F1FE998
    {
            goto label_7F1FE998;
    }

label_7F1FE98C:
    ctx->pc = 0x7F1FE98Cu;
    ctx->downcount -= 3;
    // 7F1FE98C: lis     r3, 4224
    ctx->gpr[3] = ((u32)(s32)(4224) << 16);

label_7F1FE990:
    ctx->pc = 0x7F1FE990u;
    // 7F1FE990: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F1FE994:
    ctx->pc = 0x7F1FE994u;
    // 7F1FE994: addi    r31, r3, 4096
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(4096);

label_7F1FE998:
    ctx->pc = 0x7F1FE998u;
    ctx->downcount -= 2;
    // 7F1FE998: cmpwi   r0, 4
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

label_7F1FE99C:
    ctx->pc = 0x7F1FE99Cu;
    // 7F1FE99C: bc    4, 2, 0x7F1FE9A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FE9A4;
        }
    }

label_7F1FE9A0:
    ctx->pc = 0x7F1FE9A0u;
    ctx->downcount -= 1;
    // 7F1FE9A0: li      r29, 5
    ctx->gpr[29] = (u32)(s32)(5);

label_7F1FE9A4:
    ctx->pc = 0x7F1FE9A4u;
    ctx->downcount -= 33;
    // 7F1FE9A4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FE9A8:
    ctx->pc = 0x7F1FE9A8u;
    // 7F1FE9A8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FE9AC:
    ctx->pc = 0x7F1FE9ACu;
    // 7F1FE9AC: addi    r5, r3, 13552
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13552);

label_7F1FE9B0:
    ctx->pc = 0x7F1FE9B0u;
    // 7F1FE9B0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FE9B4:
    ctx->pc = 0x7F1FE9B4u;
    // 7F1FE9B4: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE9B4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE9B8:
    ctx->pc = 0x7F1FE9B8u;
    // 7F1FE9B8: addi    r8, r4, 13556
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(13556);

label_7F1FE9BC:
    ctx->pc = 0x7F1FE9BCu;
    // 7F1FE9BC: addi    r5, r3, 13504
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13504);

label_7F1FE9C0:
    ctx->pc = 0x7F1FE9C0u;
    // 7F1FE9C0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FE9C4:
    ctx->pc = 0x7F1FE9C4u;
    // 7F1FE9C4: stfs     f0, 820(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE9C4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(820);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FE9C8:
    ctx->pc = 0x7F1FE9C8u;
    // 7F1FE9C8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FE9CC:
    ctx->pc = 0x7F1FE9CCu;
    // 7F1FE9CC: addi    r7, r3, 13564
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(13564);

label_7F1FE9D0:
    ctx->pc = 0x7F1FE9D0u;
    // 7F1FE9D0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F1FE9D4:
    ctx->pc = 0x7F1FE9D4u;
    // 7F1FE9D4: stfs     f0, 816(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE9D4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(816);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FE9D8:
    ctx->pc = 0x7F1FE9D8u;
    // 7F1FE9D8: addi    r6, r4, 13560
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(13560);

label_7F1FE9DC:
    ctx->pc = 0x7F1FE9DCu;
    // 7F1FE9DC: lfs     f0, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE9DCu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FE9E0:
    ctx->pc = 0x7F1FE9E0u;
    // 7F1FE9E0: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_7F1FE9E4:
    ctx->pc = 0x7F1FE9E4u;
    // 7F1FE9E4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE9E4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FE9E8:
    ctx->pc = 0x7F1FE9E8u;
    // 7F1FE9E8: addi    r5, r3, 18308
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(18308);

label_7F1FE9EC:
    ctx->pc = 0x7F1FE9ECu;
    // 7F1FE9EC: stfs     f0, 824(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE9ECu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(824);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FE9F0:
    ctx->pc = 0x7F1FE9F0u;
    // 7F1FE9F0: addi    r3, r28, 832
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(832);

label_7F1FE9F4:
    ctx->pc = 0x7F1FE9F4u;
    // 7F1FE9F4: lfs     f2, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE9F4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1FE9F8:
    ctx->pc = 0x7F1FE9F8u;
    // 7F1FE9F8: addi    r4, r4, 16384
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16384);

label_7F1FE9FC:
    ctx->pc = 0x7F1FE9FCu;
    // 7F1FE9FC: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FE9FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FEA00:
    ctx->pc = 0x7F1FEA00u;
    // 7F1FEA00: addi    r7, r28, 816
    ctx->gpr[7] = ctx->gpr[28] + (u32)(s32)(816);

label_7F1FEA04:
    ctx->pc = 0x7F1FEA04u;
    // 7F1FEA04: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEA04u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FEA08:
    ctx->pc = 0x7F1FEA08u;
    // 7F1FEA08: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1FEA0C:
    ctx->pc = 0x7F1FEA0Cu;
    // 7F1FEA0C: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEA0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FEA10:
    ctx->pc = 0x7F1FEA10u;
    // 7F1FEA10: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F1FEA14:
    ctx->pc = 0x7F1FEA14u;
    // 7F1FEA14: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1FEA18:
    ctx->pc = 0x7F1FEA18u;
    // 7F1FEA18: lfs     f1, 824(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEA18u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(824);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FEA1C:
    ctx->pc = 0x7F1FEA1Cu;
    // 7F1FEA1C: fnmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FEA1Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, true, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1FEA20:
    ctx->pc = 0x7F1FEA20u;
    // 7F1FEA20: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEA20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FEA24:
    ctx->pc = 0x7F1FEA24u;
    // 7F1FEA24: bl      0x7F014788
    {
            ctx->lr = 0x7F1FEA28u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F1FEA28:
    ctx->pc = 0x7F1FEA28u;
    ctx->downcount -= 9;
    // 7F1FEA28: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1FEA2C:
    ctx->pc = 0x7F1FEA2Cu;
    // 7F1FEA2C: addi    r3, r28, 832
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(832);

label_7F1FEA30:
    ctx->pc = 0x7F1FEA30u;
    // 7F1FEA30: addi    r9, r4, 12832
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F1FEA34:
    ctx->pc = 0x7F1FEA34u;
    // 7F1FEA34: rlwinm r8, r29, 0, 16, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x0000FFFFu;
    }

label_7F1FEA38:
    ctx->pc = 0x7F1FEA38u;
    // 7F1FEA38: addi    r4, r28, 1024
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(1024);

label_7F1FEA3C:
    ctx->pc = 0x7F1FEA3Cu;
    // 7F1FEA3C: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F1FEA40:
    ctx->pc = 0x7F1FEA40u;
    // 7F1FEA40: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F1FEA44:
    ctx->pc = 0x7F1FEA44u;
    // 7F1FEA44: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F1FEA48:
    ctx->pc = 0x7F1FEA48u;
    // 7F1FEA48: bl      0x7F014B78
    {
            ctx->lr = 0x7F1FEA4Cu;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F1FEA4C:
    ctx->pc = 0x7F1FEA4Cu;
    ctx->downcount -= 4;
    // 7F1FEA4C: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FEA50:
    ctx->pc = 0x7F1FEA50u;
    // 7F1FEA50: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FEA54:
    ctx->pc = 0x7F1FEA54u;
    // 7F1FEA54: addi    r3, r28, 832
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(832);

label_7F1FEA58:
    ctx->pc = 0x7F1FEA58u;
    // 7F1FEA58: bl      0x7F014B60
    {
            ctx->lr = 0x7F1FEA5Cu;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F1FEA5C:
    ctx->pc = 0x7F1FEA5Cu;
    ctx->downcount -= 3;
    // 7F1FEA5C: addi    r3, r28, 832
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(832);

label_7F1FEA60:
    ctx->pc = 0x7F1FEA60u;
    // 7F1FEA60: li      r4, 1000
    ctx->gpr[4] = (u32)(s32)(1000);

label_7F1FEA64:
    ctx->pc = 0x7F1FEA64u;
    // 7F1FEA64: bl      0x7F01488C
    {
            ctx->lr = 0x7F1FEA68u;
            ctx->pc = 0x7F01488Cu;
            return;
    }

label_7F1FEA68:
    ctx->pc = 0x7F1FEA68u;
    ctx->downcount -= 6;
    // 7F1FEA68: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F1FEA6C:
    ctx->pc = 0x7F1FEA6Cu;
    // 7F1FEA6C: addi    r3, r28, 832
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(832);

label_7F1FEA70:
    ctx->pc = 0x7F1FEA70u;
    // 7F1FEA70: addi    r5, r4, 18308
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18308);

label_7F1FEA74:
    ctx->pc = 0x7F1FEA74u;
    // 7F1FEA74: addi    r4, r28, 56
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(56);

label_7F1FEA78:
    ctx->pc = 0x7F1FEA78u;
    // 7F1FEA78: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1FEA7C:
    ctx->pc = 0x7F1FEA7Cu;
    // 7F1FEA7C: bl      0x7F014964
    {
            ctx->lr = 0x7F1FEA80u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F1FEA80:
    ctx->pc = 0x7F1FEA80u;
    ctx->downcount -= 2;
    // 7F1FEA80: addi    r3, r28, 832
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(832);

label_7F1FEA84:
    ctx->pc = 0x7F1FEA84u;
    // 7F1FEA84: bl      0x7F0148A0
    {
            ctx->lr = 0x7F1FEA88u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F1FEA88:
    ctx->pc = 0x7F1FEA88u;
    ctx->downcount -= 10;
    // 7F1FEA88: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F1FEA8C:
    ctx->pc = 0x7F1FEA8Cu;
    // 7F1FEA8C: lis     r6, 256
    ctx->gpr[6] = ((u32)(s32)(256) << 16);

label_7F1FEA90:
    ctx->pc = 0x7F1FEA90u;
    // 7F1FEA90: addi    r4, r3, 18308
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18308);

label_7F1FEA94:
    ctx->pc = 0x7F1FEA94u;
    // 7F1FEA94: addi    r3, r28, 1056
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(1056);

label_7F1FEA98:
    ctx->pc = 0x7F1FEA98u;
    // 7F1FEA98: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1FEA9C:
    ctx->pc = 0x7F1FEA9Cu;
    // 7F1FEA9C: addi    r4, r6, 16384
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(16384);

label_7F1FEAA0:
    ctx->pc = 0x7F1FEAA0u;
    // 7F1FEAA0: addi    r7, r28, 816
    ctx->gpr[7] = ctx->gpr[28] + (u32)(s32)(816);

label_7F1FEAA4:
    ctx->pc = 0x7F1FEAA4u;
    // 7F1FEAA4: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1FEAA8:
    ctx->pc = 0x7F1FEAA8u;
    // 7F1FEAA8: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F1FEAAC:
    ctx->pc = 0x7F1FEAACu;
    // 7F1FEAAC: bl      0x7F014788
    {
            ctx->lr = 0x7F1FEAB0u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F1FEAB0:
    ctx->pc = 0x7F1FEAB0u;
    ctx->downcount -= 9;
    // 7F1FEAB0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1FEAB4:
    ctx->pc = 0x7F1FEAB4u;
    // 7F1FEAB4: addi    r3, r28, 1056
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(1056);

label_7F1FEAB8:
    ctx->pc = 0x7F1FEAB8u;
    // 7F1FEAB8: addi    r9, r4, 12832
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F1FEABC:
    ctx->pc = 0x7F1FEABCu;
    // 7F1FEABC: rlwinm r8, r29, 0, 16, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x0000FFFFu;
    }

label_7F1FEAC0:
    ctx->pc = 0x7F1FEAC0u;
    // 7F1FEAC0: addi    r4, r28, 1248
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(1248);

label_7F1FEAC4:
    ctx->pc = 0x7F1FEAC4u;
    // 7F1FEAC4: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F1FEAC8:
    ctx->pc = 0x7F1FEAC8u;
    // 7F1FEAC8: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F1FEACC:
    ctx->pc = 0x7F1FEACCu;
    // 7F1FEACC: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F1FEAD0:
    ctx->pc = 0x7F1FEAD0u;
    // 7F1FEAD0: bl      0x7F014B78
    {
            ctx->lr = 0x7F1FEAD4u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F1FEAD4:
    ctx->pc = 0x7F1FEAD4u;
    ctx->downcount -= 4;
    // 7F1FEAD4: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FEAD8:
    ctx->pc = 0x7F1FEAD8u;
    // 7F1FEAD8: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FEADC:
    ctx->pc = 0x7F1FEADCu;
    // 7F1FEADC: addi    r3, r28, 1056
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(1056);

label_7F1FEAE0:
    ctx->pc = 0x7F1FEAE0u;
    // 7F1FEAE0: bl      0x7F014B60
    {
            ctx->lr = 0x7F1FEAE4u;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F1FEAE4:
    ctx->pc = 0x7F1FEAE4u;
    ctx->downcount -= 3;
    // 7F1FEAE4: addi    r3, r28, 1056
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(1056);

label_7F1FEAE8:
    ctx->pc = 0x7F1FEAE8u;
    // 7F1FEAE8: li      r4, 1000
    ctx->gpr[4] = (u32)(s32)(1000);

label_7F1FEAEC:
    ctx->pc = 0x7F1FEAECu;
    // 7F1FEAEC: bl      0x7F01488C
    {
            ctx->lr = 0x7F1FEAF0u;
            ctx->pc = 0x7F01488Cu;
            return;
    }

label_7F1FEAF0:
    ctx->pc = 0x7F1FEAF0u;
    ctx->downcount -= 6;
    // 7F1FEAF0: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F1FEAF4:
    ctx->pc = 0x7F1FEAF4u;
    // 7F1FEAF4: addi    r3, r28, 1056
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(1056);

label_7F1FEAF8:
    ctx->pc = 0x7F1FEAF8u;
    // 7F1FEAF8: addi    r5, r4, 18308
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18308);

label_7F1FEAFC:
    ctx->pc = 0x7F1FEAFCu;
    // 7F1FEAFC: addi    r4, r28, 56
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(56);

label_7F1FEB00:
    ctx->pc = 0x7F1FEB00u;
    // 7F1FEB00: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1FEB04:
    ctx->pc = 0x7F1FEB04u;
    // 7F1FEB04: bl      0x7F014964
    {
            ctx->lr = 0x7F1FEB08u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F1FEB08:
    ctx->pc = 0x7F1FEB08u;
    ctx->downcount -= 2;
    // 7F1FEB08: addi    r3, r28, 1056
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(1056);

label_7F1FEB0C:
    ctx->pc = 0x7F1FEB0Cu;
    // 7F1FEB0C: bl      0x7F0148A0
    {
            ctx->lr = 0x7F1FEB10u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F1FEB10:
    ctx->pc = 0x7F1FEB10u;
    ctx->downcount -= 17;
    // 7F1FEB10: lmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FEB14:
    ctx->pc = 0x7F1FEB14u;
    // 7F1FEB14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1FEB18:
    ctx->pc = 0x7F1FEB18u;
    // 7F1FEB18: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FEB1C:
    ctx->pc = 0x7F1FEB1Cu;
    // 7F1FEB1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FEB20:
    ctx->pc = 0x7F1FEB20u;
    // 7F1FEB20: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1FEB24:
    ctx->pc = 0x7F1FEB24u;
    // 7F1FEB24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FEB28:
    ctx->pc = 0x7F1FEB28u;
    ctx->downcount -= 29;
    // 7F1FEB28: stwu     r1, -176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-176);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FEB2C:
    ctx->pc = 0x7F1FEB2Cu;
    // 7F1FEB2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FEB30:
    ctx->pc = 0x7F1FEB30u;
    // 7F1FEB30: stw     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FEB34:
    ctx->pc = 0x7F1FEB34u;
    // 7F1FEB34: stfd     f31, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEB34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1FEB38:
    ctx->pc = 0x7F1FEB38u;
    // 7F1FEB38: psq_st   f31, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FEB38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1FEB38u);
        if (ctx->exception) return;
    }

label_7F1FEB3C:
    ctx->pc = 0x7F1FEB3Cu;
    // 7F1FEB3C: stfd     f30, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEB3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1FEB40:
    ctx->pc = 0x7F1FEB40u;
    // 7F1FEB40: psq_st   f30, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FEB40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F1FEB40u);
        if (ctx->exception) return;
    }

label_7F1FEB44:
    ctx->pc = 0x7F1FEB44u;
    // 7F1FEB44: stfd     f29, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEB44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F1FEB48:
    ctx->pc = 0x7F1FEB48u;
    // 7F1FEB48: psq_st   f29, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FEB48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F1FEB48u);
        if (ctx->exception) return;
    }

label_7F1FEB4C:
    ctx->pc = 0x7F1FEB4Cu;
    // 7F1FEB4C: stfd     f28, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEB4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F1FEB50:
    ctx->pc = 0x7F1FEB50u;
    // 7F1FEB50: psq_st   f28, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FEB50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F1FEB50u);
        if (ctx->exception) return;
    }

label_7F1FEB54:
    ctx->pc = 0x7F1FEB54u;
    // 7F1FEB54: stmw     r24, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FEB58:
    ctx->pc = 0x7F1FEB58u;
    // 7F1FEB58: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1FEB5C:
    ctx->pc = 0x7F1FEB5Cu;
    // 7F1FEB5C: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FEB60:
    ctx->pc = 0x7F1FEB60u;
    // 7F1FEB60: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FEB64:
    ctx->pc = 0x7F1FEB64u;
    // 7F1FEB64: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F1FEB68:
    ctx->pc = 0x7F1FEB68u;
    // 7F1FEB68: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F1FEB6C:
    ctx->pc = 0x7F1FEB6Cu;
    // 7F1FEB6C: li      r26, -1
    ctx->gpr[26] = (u32)(s32)(-1);

label_7F1FEB70:
    ctx->pc = 0x7F1FEB70u;
    // 7F1FEB70: bl      0x7F114F50
    {
            ctx->lr = 0x7F1FEB74u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F1FEB74:
    ctx->pc = 0x7F1FEB74u;
    ctx->downcount -= 6;
    // 7F1FEB74: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FEB78:
    ctx->pc = 0x7F1FEB78u;
    // 7F1FEB78: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F1FEB7C:
    ctx->pc = 0x7F1FEB7Cu;
    // 7F1FEB7C: addi    r5, r4, 13568
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(13568);

label_7F1FEB80:
    ctx->pc = 0x7F1FEB80u;
    // 7F1FEB80: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1FEB84:
    ctx->pc = 0x7F1FEB84u;
    // 7F1FEB84: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEB84u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FEB88:
    ctx->pc = 0x7F1FEB88u;
    // 7F1FEB88: bl      0x800261FC
    {
            ctx->lr = 0x7F1FEB8Cu;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1FEB8C:
    ctx->pc = 0x7F1FEB8Cu;
    ctx->downcount -= 4;
    // 7F1FEB8C: addi    r3, r28, 48
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(48);

label_7F1FEB90:
    ctx->pc = 0x7F1FEB90u;
    // 7F1FEB90: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1FEB94:
    ctx->pc = 0x7F1FEB94u;
    // 7F1FEB94: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1FEB98:
    ctx->pc = 0x7F1FEB98u;
    // 7F1FEB98: bl      0x800261B4
    {
            ctx->lr = 0x7F1FEB9Cu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1FEB9C:
    ctx->pc = 0x7F1FEB9Cu;
    ctx->downcount -= 6;
    // 7F1FEB9C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FEBA0:
    ctx->pc = 0x7F1FEBA0u;
    // 7F1FEBA0: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_7F1FEBA4:
    ctx->pc = 0x7F1FEBA4u;
    // 7F1FEBA4: addi    r5, r4, 13572
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(13572);

label_7F1FEBA8:
    ctx->pc = 0x7F1FEBA8u;
    // 7F1FEBA8: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1FEBAC:
    ctx->pc = 0x7F1FEBACu;
    // 7F1FEBAC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEBACu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FEBB0:
    ctx->pc = 0x7F1FEBB0u;
    // 7F1FEBB0: bl      0x800261FC
    {
            ctx->lr = 0x7F1FEBB4u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1FEBB4:
    ctx->pc = 0x7F1FEBB4u;
    ctx->downcount -= 4;
    // 7F1FEBB4: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1FEBB8:
    ctx->pc = 0x7F1FEBB8u;
    // 7F1FEBB8: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1FEBBC:
    ctx->pc = 0x7F1FEBBCu;
    // 7F1FEBBC: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FEBC0:
    ctx->pc = 0x7F1FEBC0u;
    // 7F1FEBC0: bl      0x800261B4
    {
            ctx->lr = 0x7F1FEBC4u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1FEBC4:
    ctx->pc = 0x7F1FEBC4u;
    ctx->downcount -= 13;
    // 7F1FEBC4: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F1FEBC8:
    ctx->pc = 0x7F1FEBC8u;
    // 7F1FEBC8: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1FEBCC:
    ctx->pc = 0x7F1FEBCCu;
    // 7F1FEBCC: stw     r0, 1288(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(1288);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FEBD0:
    ctx->pc = 0x7F1FEBD0u;
    // 7F1FEBD0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1FEBD4:
    ctx->pc = 0x7F1FEBD4u;
    // 7F1FEBD4: addi    r3, r3, -27956
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27956);

label_7F1FEBD8:
    ctx->pc = 0x7F1FEBD8u;
    // 7F1FEBD8: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1FEBDC:
    ctx->pc = 0x7F1FEBDCu;
    // 7F1FEBDC: stw     r0, 1284(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(1284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FEBE0:
    ctx->pc = 0x7F1FEBE0u;
    // 7F1FEBE0: addi    r5, r1, 40
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1FEBE4:
    ctx->pc = 0x7F1FEBE4u;
    // 7F1FEBE4: li      r6, 79
    ctx->gpr[6] = (u32)(s32)(79);

label_7F1FEBE8:
    ctx->pc = 0x7F1FEBE8u;
    // 7F1FEBE8: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_7F1FEBEC:
    ctx->pc = 0x7F1FEBECu;
    // 7F1FEBEC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FEBF0:
    ctx->pc = 0x7F1FEBF0u;
    // 7F1FEBF0: li      r8, 4
    ctx->gpr[8] = (u32)(s32)(4);

label_7F1FEBF4:
    ctx->pc = 0x7F1FEBF4u;
    // 7F1FEBF4: bl      0x7F10B744
    {
            ctx->lr = 0x7F1FEBF8u;
            ctx->pc = 0x7F10B744u;
            return;
    }

label_7F1FEBF8:
    ctx->pc = 0x7F1FEBF8u;
    ctx->downcount -= 2;
    // 7F1FEBF8: cmpwi   r3, 0
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

label_7F1FEBFC:
    ctx->pc = 0x7F1FEBFCu;
    // 7F1FEBFC: bc    12, 2, 0x7F1FEC08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FEC08;
        }
    }

label_7F1FEC00:
    ctx->pc = 0x7F1FEC00u;
    ctx->downcount -= 2;
    // 7F1FEC00: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1FEC04:
    ctx->pc = 0x7F1FEC04u;
    // 7F1FEC04: stw     r0, 1284(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(1284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FEC08:
    ctx->pc = 0x7F1FEC08u;
    ctx->downcount -= 3;
    // 7F1FEC08: lwz     r0, 1280(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(1280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FEC0C:
    ctx->pc = 0x7F1FEC0Cu;
    // 7F1FEC0C: cmplwi  r0, 0x000A
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

label_7F1FEC10:
    ctx->pc = 0x7F1FEC10u;
    // 7F1FEC10: bc    12, 1, 0x7F1FEC2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FEC2C;
        }
    }

label_7F1FEC14:
    ctx->pc = 0x7F1FEC14u;
    ctx->downcount -= 7;
    // 7F1FEC14: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1FEC18:
    ctx->pc = 0x7F1FEC18u;
    // 7F1FEC18: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1FEC1C:
    ctx->pc = 0x7F1FEC1Cu;
    // 7F1FEC1C: addi    r3, r3, -3732
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3732);

label_7F1FEC20:
    ctx->pc = 0x7F1FEC20u;
    // 7F1FEC20: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FEC24:
    ctx->pc = 0x7F1FEC24u;
    // 7F1FEC24: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1FEC28:
    ctx->pc = 0x7F1FEC28u;
    // 7F1FEC28: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F1FEC2C:
    ctx->pc = 0x7F1FEC2Cu;
    ctx->downcount -= 5;
    // 7F1FEC2C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FEC30:
    ctx->pc = 0x7F1FEC30u;
    // 7F1FEC30: addi    r4, r3, -11400
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-11400);

label_7F1FEC34:
    ctx->pc = 0x7F1FEC34u;
    // 7F1FEC34: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FEC38:
    ctx->pc = 0x7F1FEC38u;
    // 7F1FEC38: cmpwi   r3, 1
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

label_7F1FEC3C:
    ctx->pc = 0x7F1FEC3Cu;
    // 7F1FEC3C: bc    12, 2, 0x7F1FEC60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FEC60;
        }
    }

label_7F1FEC40:
    ctx->pc = 0x7F1FEC40u;
    ctx->downcount -= 1;
    // 7F1FEC40: bc    4, 0, 0x7F1FEC60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FEC60;
        }
    }

label_7F1FEC44:
    ctx->pc = 0x7F1FEC44u;
    ctx->downcount -= 2;
    // 7F1FEC44: cmpwi   r3, 0
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

label_7F1FEC48:
    ctx->pc = 0x7F1FEC48u;
    // 7F1FEC48: bc    4, 0, 0x7F1FEC50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FEC50;
        }
    }

label_7F1FEC4C:
    ctx->pc = 0x7F1FEC4Cu;
    ctx->downcount -= 1;
    // 7F1FEC4C: b       0x7F1FEC60
    {
            goto label_7F1FEC60;
    }

label_7F1FEC50:
    ctx->pc = 0x7F1FEC50u;
    ctx->downcount -= 4;
    // 7F1FEC50: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1FEC54:
    ctx->pc = 0x7F1FEC54u;
    // 7F1FEC54: li      r26, 591
    ctx->gpr[26] = (u32)(s32)(591);

label_7F1FEC58:
    ctx->pc = 0x7F1FEC58u;
    // 7F1FEC58: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FEC5C:
    ctx->pc = 0x7F1FEC5Cu;
    // 7F1FEC5C: b       0x7F1FED14
    {
            goto label_7F1FED14;
    }

label_7F1FEC60:
    ctx->pc = 0x7F1FEC60u;
    ctx->downcount -= 5;
    // 7F1FEC60: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FEC64:
    ctx->pc = 0x7F1FEC64u;
    // 7F1FEC64: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1FEC68:
    ctx->pc = 0x7F1FEC68u;
    // 7F1FEC68: stw     r0, -11400(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11400);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FEC6C:
    ctx->pc = 0x7F1FEC6Cu;
    // 7F1FEC6C: li      r26, 592
    ctx->gpr[26] = (u32)(s32)(592);

label_7F1FEC70:
    ctx->pc = 0x7F1FEC70u;
    // 7F1FEC70: b       0x7F1FED14
    {
            goto label_7F1FED14;
    }

label_7F1FEC74:
    ctx->pc = 0x7F1FEC74u;
    ctx->downcount -= 5;
    // 7F1FEC74: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FEC78:
    ctx->pc = 0x7F1FEC78u;
    // 7F1FEC78: addi    r4, r3, -11400
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-11400);

label_7F1FEC7C:
    ctx->pc = 0x7F1FEC7Cu;
    // 7F1FEC7C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FEC80:
    ctx->pc = 0x7F1FEC80u;
    // 7F1FEC80: cmpwi   r3, 1
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

label_7F1FEC84:
    ctx->pc = 0x7F1FEC84u;
    // 7F1FEC84: bc    12, 2, 0x7F1FECA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FECA8;
        }
    }

label_7F1FEC88:
    ctx->pc = 0x7F1FEC88u;
    ctx->downcount -= 1;
    // 7F1FEC88: bc    4, 0, 0x7F1FECA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FECA8;
        }
    }

label_7F1FEC8C:
    ctx->pc = 0x7F1FEC8Cu;
    ctx->downcount -= 2;
    // 7F1FEC8C: cmpwi   r3, 0
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

label_7F1FEC90:
    ctx->pc = 0x7F1FEC90u;
    // 7F1FEC90: bc    4, 0, 0x7F1FEC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FEC98;
        }
    }

label_7F1FEC94:
    ctx->pc = 0x7F1FEC94u;
    ctx->downcount -= 1;
    // 7F1FEC94: b       0x7F1FECA8
    {
            goto label_7F1FECA8;
    }

label_7F1FEC98:
    ctx->pc = 0x7F1FEC98u;
    ctx->downcount -= 4;
    // 7F1FEC98: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1FEC9C:
    ctx->pc = 0x7F1FEC9Cu;
    // 7F1FEC9C: li      r26, 589
    ctx->gpr[26] = (u32)(s32)(589);

label_7F1FECA0:
    ctx->pc = 0x7F1FECA0u;
    // 7F1FECA0: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FECA4:
    ctx->pc = 0x7F1FECA4u;
    // 7F1FECA4: b       0x7F1FED14
    {
            goto label_7F1FED14;
    }

label_7F1FECA8:
    ctx->pc = 0x7F1FECA8u;
    ctx->downcount -= 5;
    // 7F1FECA8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FECAC:
    ctx->pc = 0x7F1FECACu;
    // 7F1FECAC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1FECB0:
    ctx->pc = 0x7F1FECB0u;
    // 7F1FECB0: stw     r0, -11400(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11400);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FECB4:
    ctx->pc = 0x7F1FECB4u;
    // 7F1FECB4: li      r26, 590
    ctx->gpr[26] = (u32)(s32)(590);

label_7F1FECB8:
    ctx->pc = 0x7F1FECB8u;
    // 7F1FECB8: b       0x7F1FED14
    {
            goto label_7F1FED14;
    }

label_7F1FECBC:
    ctx->pc = 0x7F1FECBCu;
    ctx->downcount -= 5;
    // 7F1FECBC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FECC0:
    ctx->pc = 0x7F1FECC0u;
    // 7F1FECC0: addi    r4, r3, -11400
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-11400);

label_7F1FECC4:
    ctx->pc = 0x7F1FECC4u;
    // 7F1FECC4: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FECC8:
    ctx->pc = 0x7F1FECC8u;
    // 7F1FECC8: cmpwi   r3, 1
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

label_7F1FECCC:
    ctx->pc = 0x7F1FECCCu;
    // 7F1FECCC: bc    12, 2, 0x7F1FECF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FECF0;
        }
    }

label_7F1FECD0:
    ctx->pc = 0x7F1FECD0u;
    ctx->downcount -= 1;
    // 7F1FECD0: bc    4, 0, 0x7F1FECF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FECF0;
        }
    }

label_7F1FECD4:
    ctx->pc = 0x7F1FECD4u;
    ctx->downcount -= 2;
    // 7F1FECD4: cmpwi   r3, 0
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

label_7F1FECD8:
    ctx->pc = 0x7F1FECD8u;
    // 7F1FECD8: bc    4, 0, 0x7F1FECE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FECE0;
        }
    }

label_7F1FECDC:
    ctx->pc = 0x7F1FECDCu;
    ctx->downcount -= 1;
    // 7F1FECDC: b       0x7F1FECF0
    {
            goto label_7F1FECF0;
    }

label_7F1FECE0:
    ctx->pc = 0x7F1FECE0u;
    ctx->downcount -= 4;
    // 7F1FECE0: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1FECE4:
    ctx->pc = 0x7F1FECE4u;
    // 7F1FECE4: li      r26, 587
    ctx->gpr[26] = (u32)(s32)(587);

label_7F1FECE8:
    ctx->pc = 0x7F1FECE8u;
    // 7F1FECE8: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FECEC:
    ctx->pc = 0x7F1FECECu;
    // 7F1FECEC: b       0x7F1FED14
    {
            goto label_7F1FED14;
    }

label_7F1FECF0:
    ctx->pc = 0x7F1FECF0u;
    ctx->downcount -= 5;
    // 7F1FECF0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FECF4:
    ctx->pc = 0x7F1FECF4u;
    // 7F1FECF4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1FECF8:
    ctx->pc = 0x7F1FECF8u;
    // 7F1FECF8: stw     r0, -11400(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11400);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FECFC:
    ctx->pc = 0x7F1FECFCu;
    // 7F1FECFC: li      r26, 588
    ctx->gpr[26] = (u32)(s32)(588);

label_7F1FED00:
    ctx->pc = 0x7F1FED00u;
    // 7F1FED00: b       0x7F1FED14
    {
            goto label_7F1FED14;
    }

label_7F1FED04:
    ctx->pc = 0x7F1FED04u;
    ctx->downcount -= 2;
    // 7F1FED04: addi    r3, r28, 48
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(48);

label_7F1FED08:
    ctx->pc = 0x7F1FED08u;
    // 7F1FED08: bl      0x7F22B074
    {
            ctx->lr = 0x7F1FED0Cu;
            ctx->pc = 0x7F22B074u;
            return;
    }

label_7F1FED0C:
    ctx->pc = 0x7F1FED0Cu;
    ctx->downcount -= 2;
    // 7F1FED0C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1FED10:
    ctx->pc = 0x7F1FED10u;
    // 7F1FED10: bl      0x7F22D458
    {
            ctx->lr = 0x7F1FED14u;
            ctx->pc = 0x7F22D458u;
            return;
    }

label_7F1FED14:
    ctx->pc = 0x7F1FED14u;
    ctx->downcount -= 2;
    // 7F1FED14: cmpwi   r26, -1
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FED18:
    ctx->pc = 0x7F1FED18u;
    // 7F1FED18: bc    12, 2, 0x7F1FED38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FED38;
        }
    }

label_7F1FED1C:
    ctx->pc = 0x7F1FED1Cu;
    ctx->downcount -= 7;
    // 7F1FED1C: lwz     r0, 812(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(812);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FED20:
    ctx->pc = 0x7F1FED20u;
    // 7F1FED20: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F1FED24:
    ctx->pc = 0x7F1FED24u;
    // 7F1FED24: addi    r4, r28, 48
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(48);

label_7F1FED28:
    ctx->pc = 0x7F1FED28u;
    // 7F1FED28: subfic  r0, r0, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1FED2C:
    ctx->pc = 0x7F1FED2Cu;
    // 7F1FED2C: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_7F1FED30:
    ctx->pc = 0x7F1FED30u;
    // 7F1FED30: rlwinm r5, r0, 27, 5, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_7F1FED34:
    ctx->pc = 0x7F1FED34u;
    // 7F1FED34: bl      0x7F0117B8
    {
            ctx->lr = 0x7F1FED38u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F1FED38:
    ctx->pc = 0x7F1FED38u;
    ctx->downcount -= 11;
    // 7F1FED38: lwz     r4, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FED3C:
    ctx->pc = 0x7F1FED3Cu;
    // 7F1FED3C: lis     r3, 153
    ctx->gpr[3] = ((u32)(s32)(153) << 16);

label_7F1FED40:
    ctx->pc = 0x7F1FED40u;
    // 7F1FED40: lwz     r0, 52(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FED44:
    ctx->pc = 0x7F1FED44u;
    // 7F1FED44: addi    r3, r3, -28514
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28514);

label_7F1FED48:
    ctx->pc = 0x7F1FED48u;
    // 7F1FED48: stw     r4, 136(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1FED4C:
    ctx->pc = 0x7F1FED4Cu;
    // 7F1FED4C: stw     r0, 140(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FED50:
    ctx->pc = 0x7F1FED50u;
    // 7F1FED50: lwz     r4, 56(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FED54:
    ctx->pc = 0x7F1FED54u;
    // 7F1FED54: lwz     r0, 60(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FED58:
    ctx->pc = 0x7F1FED58u;
    // 7F1FED58: stw     r4, 144(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1FED5C:
    ctx->pc = 0x7F1FED5Cu;
    // 7F1FED5C: stw     r0, 148(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FED60:
    ctx->pc = 0x7F1FED60u;
    // 7F1FED60: bl      0x7F3B6420
    {
            ctx->lr = 0x7F1FED64u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F1FED64:
    ctx->pc = 0x7F1FED64u;
    ctx->downcount -= 7;
    // 7F1FED64: lis     r5, 14
    ctx->gpr[5] = ((u32)(s32)(14) << 16);

label_7F1FED68:
    ctx->pc = 0x7F1FED68u;
    // 7F1FED68: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FED6C:
    ctx->pc = 0x7F1FED6Cu;
    // 7F1FED6C: addi    r3, r5, 5
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(5);

label_7F1FED70:
    ctx->pc = 0x7F1FED70u;
    // 7F1FED70: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F1FED74:
    ctx->pc = 0x7F1FED74u;
    // 7F1FED74: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F1FED78:
    ctx->pc = 0x7F1FED78u;
    // 7F1FED78: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1FED7C:
    ctx->pc = 0x7F1FED7Cu;
    // 7F1FED7C: bl      0x7F3C2408
    {
            ctx->lr = 0x7F1FED80u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F1FED80:
    ctx->pc = 0x7F1FED80u;
    ctx->downcount -= 3;
    // 7F1FED80: or.   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1FED84:
    ctx->pc = 0x7F1FED84u;
    // 7F1FED84: stw     r3, 52(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FED88:
    ctx->pc = 0x7F1FED88u;
    // 7F1FED88: bc    4, 2, 0x7F1FED94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FED94;
        }
    }

label_7F1FED8C:
    ctx->pc = 0x7F1FED8Cu;
    ctx->downcount -= 2;
    // 7F1FED8C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1FED90:
    ctx->pc = 0x7F1FED90u;
    // 7F1FED90: b       0x7F1FF01C
    {
            goto label_7F1FF01C;
    }

label_7F1FED94:
    ctx->pc = 0x7F1FED94u;
    ctx->downcount -= 3;
    // 7F1FED94: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F1FED98:
    ctx->pc = 0x7F1FED98u;
    // 7F1FED98: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F1FED9C:
    ctx->pc = 0x7F1FED9Cu;
    // 7F1FED9C: bl      0x7F1FE850
    {
            ctx->lr = 0x7F1FEDA0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FE850u;
                return;
            }
            goto label_7F1FE850;
    }

label_7F1FEDA0:
    ctx->pc = 0x7F1FEDA0u;
    ctx->downcount -= 10;
    // 7F1FEDA0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FEDA4:
    ctx->pc = 0x7F1FEDA4u;
    // 7F1FEDA4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FEDA8:
    ctx->pc = 0x7F1FEDA8u;
    // 7F1FEDA8: addi    r5, r3, 13504
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13504);

label_7F1FEDAC:
    ctx->pc = 0x7F1FEDACu;
    // 7F1FEDAC: lfs     f0, 13576(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEDACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13576);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FEDB0:
    ctx->pc = 0x7F1FEDB0u;
    // 7F1FEDB0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEDB0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FEDB4:
    ctx->pc = 0x7F1FEDB4u;
    // 7F1FEDB4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1FEDB8:
    ctx->pc = 0x7F1FEDB8u;
    // 7F1FEDB8: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEDB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FEDBC:
    ctx->pc = 0x7F1FEDBCu;
    // 7F1FEDBC: stfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEDBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FEDC0:
    ctx->pc = 0x7F1FEDC0u;
    // 7F1FEDC0: stfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEDC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FEDC4:
    ctx->pc = 0x7F1FEDC4u;
    // 7F1FEDC4: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F1FEDC8u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F1FEDC8:
    ctx->pc = 0x7F1FEDC8u;
    ctx->downcount -= 4;
    // 7F1FEDC8: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1FEDCC:
    ctx->pc = 0x7F1FEDCCu;
    // 7F1FEDCC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1FEDD0:
    ctx->pc = 0x7F1FEDD0u;
    // 7F1FEDD0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FEDD4:
    ctx->pc = 0x7F1FEDD4u;
    // 7F1FEDD4: bl      0x7F3B3648
    {
            ctx->lr = 0x7F1FEDD8u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F1FEDD8:
    ctx->pc = 0x7F1FEDD8u;
    ctx->downcount -= 3;
    // 7F1FEDD8: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F1FEDDC:
    ctx->pc = 0x7F1FEDDCu;
    // 7F1FEDDC: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1FEDE0:
    ctx->pc = 0x7F1FEDE0u;
    // 7F1FEDE0: bl      0x7F1FF050
    {
            ctx->lr = 0x7F1FEDE4u;
            goto label_7F1FF050;
    }

label_7F1FEDE4:
    ctx->pc = 0x7F1FEDE4u;
    ctx->downcount -= 4;
    // 7F1FEDE4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FEDE8:
    ctx->pc = 0x7F1FEDE8u;
    // 7F1FEDE8: lfs     f0, 13504(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEDE8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13504);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FEDEC:
    ctx->pc = 0x7F1FEDECu;
    // 7F1FEDEC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FEDECu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1FEDF0:
    ctx->pc = 0x7F1FEDF0u;
    // 7F1FEDF0: bc    4, 0, 0x7F1FEE20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FEE20;
        }
    }

label_7F1FEDF4:
    ctx->pc = 0x7F1FEDF4u;
    ctx->downcount -= 11;
    // 7F1FEDF4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FEDF8:
    ctx->pc = 0x7F1FEDF8u;
    // 7F1FEDF8: lfs     f0, 0(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEDF8u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FEDFC:
    ctx->pc = 0x7F1FEDFCu;
    // 7F1FEDFC: lfs     f1, 13576(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEDFCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13576);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FEE00:
    ctx->pc = 0x7F1FEE00u;
    // 7F1FEE00: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FEE00u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1FEE04:
    ctx->pc = 0x7F1FEE04u;
    // 7F1FEE04: stfs     f0, 0(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEE04u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FEE08:
    ctx->pc = 0x7F1FEE08u;
    // 7F1FEE08: lfs     f0, 4(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEE08u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FEE0C:
    ctx->pc = 0x7F1FEE0Cu;
    // 7F1FEE0C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FEE0Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1FEE10:
    ctx->pc = 0x7F1FEE10u;
    // 7F1FEE10: stfs     f0, 4(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEE10u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FEE14:
    ctx->pc = 0x7F1FEE14u;
    // 7F1FEE14: lfs     f0, 8(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEE14u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FEE18:
    ctx->pc = 0x7F1FEE18u;
    // 7F1FEE18: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FEE18u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1FEE1C:
    ctx->pc = 0x7F1FEE1Cu;
    // 7F1FEE1C: stfs     f0, 8(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEE1Cu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FEE20:
    ctx->pc = 0x7F1FEE20u;
    ctx->downcount -= 5;
    // 7F1FEE20: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F1FEE24:
    ctx->pc = 0x7F1FEE24u;
    // 7F1FEE24: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F1FEE28:
    ctx->pc = 0x7F1FEE28u;
    // 7F1FEE28: addi    r3, r3, 12832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F1FEE2C:
    ctx->pc = 0x7F1FEE2Cu;
    // 7F1FEE2C: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1FEE30:
    ctx->pc = 0x7F1FEE30u;
    // 7F1FEE30: bl      0x7F1C6BF4
    {
            ctx->lr = 0x7F1FEE34u;
            ctx->pc = 0x7F1C6BF4u;
            return;
    }

label_7F1FEE34:
    ctx->pc = 0x7F1FEE34u;
    ctx->downcount -= 1;
    // 7F1FEE34: bl      0x7F1FE7C4
    {
            ctx->lr = 0x7F1FEE38u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FE7C4u;
                return;
            }
            goto label_7F1FE7C4;
    }

label_7F1FEE38:
    ctx->pc = 0x7F1FEE38u;
    ctx->downcount -= 5;
    // 7F1FEE38: lha     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1FEE3C:
    ctx->pc = 0x7F1FEE3Cu;
    // 7F1FEE3C: rlwinm r3, r3, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_7F1FEE40:
    ctx->pc = 0x7F1FEE40u;
    // 7F1FEE40: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1FEE44:
    ctx->pc = 0x7F1FEE44u;
    // 7F1FEE44: sth     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1FEE48:
    ctx->pc = 0x7F1FEE48u;
    // 7F1FEE48: bl      0x7F1FE7C4
    {
            ctx->lr = 0x7F1FEE4Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FE7C4u;
                return;
            }
            goto label_7F1FE7C4;
    }

label_7F1FEE4C:
    ctx->pc = 0x7F1FEE4Cu;
    ctx->downcount -= 7;
    // 7F1FEE4C: lha     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1FEE50:
    ctx->pc = 0x7F1FEE50u;
    // 7F1FEE50: rlwinm r5, r3, 0, 20, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F1FEE54:
    ctx->pc = 0x7F1FEE54u;
    // 7F1FEE54: addi    r3, r25, 136
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(136);

label_7F1FEE58:
    ctx->pc = 0x7F1FEE58u;
    // 7F1FEE58: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1FEE5C:
    ctx->pc = 0x7F1FEE5Cu;
    // 7F1FEE5C: add   r0, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1FEE60:
    ctx->pc = 0x7F1FEE60u;
    // 7F1FEE60: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1FEE64:
    ctx->pc = 0x7F1FEE64u;
    // 7F1FEE64: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F1FEE68u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F1FEE68:
    ctx->pc = 0x7F1FEE68u;
    ctx->downcount -= 2;
    // 7F1FEE68: addi    r3, r25, 56
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(56);

label_7F1FEE6C:
    ctx->pc = 0x7F1FEE6Cu;
    // 7F1FEE6C: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F1FEE70u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F1FEE70:
    ctx->pc = 0x7F1FEE70u;
    ctx->downcount -= 20;
    // 7F1FEE70: lwz     r8, 52(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(52);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1FEE74:
    ctx->pc = 0x7F1FEE74u;
    // 7F1FEE74: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F1FEE78:
    ctx->pc = 0x7F1FEE78u;
    // 7F1FEE78: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1FEE7C:
    ctx->pc = 0x7F1FEE7Cu;
    // 7F1FEE7C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FEE80:
    ctx->pc = 0x7F1FEE80u;
    // 7F1FEE80: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FEE84:
    ctx->pc = 0x7F1FEE84u;
    // 7F1FEE84: addi    r7, r6, 13520
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(13520);

label_7F1FEE88:
    ctx->pc = 0x7F1FEE88u;
    // 7F1FEE88: addi    r6, r5, 13504
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(13504);

label_7F1FEE8C:
    ctx->pc = 0x7F1FEE8Cu;
    // 7F1FEE8C: addi    r5, r4, 13584
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(13584);

label_7F1FEE90:
    ctx->pc = 0x7F1FEE90u;
    // 7F1FEE90: addi    r4, r3, 13580
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13580);

label_7F1FEE94:
    ctx->pc = 0x7F1FEE94u;
    // 7F1FEE94: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F1FEE98:
    ctx->pc = 0x7F1FEE98u;
    // 7F1FEE98: lwz     r28, 184(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(184);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F1FEE9C:
    ctx->pc = 0x7F1FEE9Cu;
    // 7F1FEE9C: addi    r29, r25, 152
    ctx->gpr[29] = ctx->gpr[25] + (u32)(s32)(152);

label_7F1FEEA0:
    ctx->pc = 0x7F1FEEA0u;
    // 7F1FEEA0: lwz     r27, 188(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(188);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F1FEEA4:
    ctx->pc = 0x7F1FEEA4u;
    // 7F1FEEA4: addi    r26, r25, 664
    ctx->gpr[26] = ctx->gpr[25] + (u32)(s32)(664);

label_7F1FEEA8:
    ctx->pc = 0x7F1FEEA8u;
    // 7F1FEEA8: lfs     f28, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEEA8u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F1FEEAC:
    ctx->pc = 0x7F1FEEACu;
    // 7F1FEEAC: addi    r24, r3, 12832
    ctx->gpr[24] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F1FEEB0:
    ctx->pc = 0x7F1FEEB0u;
    // 7F1FEEB0: lfs     f29, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEEB0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F1FEEB4:
    ctx->pc = 0x7F1FEEB4u;
    // 7F1FEEB4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F1FEEB8:
    ctx->pc = 0x7F1FEEB8u;
    // 7F1FEEB8: lfs     f30, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEEB8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F1FEEBC:
    ctx->pc = 0x7F1FEEBCu;
    // 7F1FEEBC: lfs     f31, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEEBCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F1FEEC0:
    ctx->downcount -= 1;
    // 7F1FEEC0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F1FEEC4:
    ctx->pc = 0x7F1FEEC4u;
    ctx->downcount -= 17;
    // 7F1FEEC4: lwz     r3, 136(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(136);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FEEC8:
    ctx->pc = 0x7F1FEEC8u;
    // 7F1FEEC8: lwz     r0, 140(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FEECC:
    ctx->pc = 0x7F1FEECCu;
    // 7F1FEECC: stw     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FEED0:
    ctx->pc = 0x7F1FEED0u;
    // 7F1FEED0: stw     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FEED4:
    ctx->pc = 0x7F1FEED4u;
    // 7F1FEED4: lwz     r3, 144(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(144);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FEED8:
    ctx->pc = 0x7F1FEED8u;
    // 7F1FEED8: lwz     r0, 148(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FEEDC:
    ctx->pc = 0x7F1FEEDCu;
    // 7F1FEEDC: stw     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FEEE0:
    ctx->pc = 0x7F1FEEE0u;
    // 7F1FEEE0: stw     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FEEE4:
    ctx->pc = 0x7F1FEEE4u;
    // 7F1FEEE4: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FEEE8:
    ctx->pc = 0x7F1FEEE8u;
    // 7F1FEEE8: lwz     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FEEEC:
    ctx->pc = 0x7F1FEEECu;
    // 7F1FEEEC: stw     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FEEF0:
    ctx->pc = 0x7F1FEEF0u;
    // 7F1FEEF0: stw     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FEEF4:
    ctx->pc = 0x7F1FEEF4u;
    // 7F1FEEF4: lwz     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FEEF8:
    ctx->pc = 0x7F1FEEF8u;
    // 7F1FEEF8: lwz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FEEFC:
    ctx->pc = 0x7F1FEEFCu;
    // 7F1FEEFC: stw     r3, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FEF00:
    ctx->pc = 0x7F1FEF00u;
    // 7F1FEF00: stw     r0, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FEF04:
    // 7F1FEF04: bl      0x7F1FE77C
    {
            ctx->lr = 0x7F1FEF08u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FE77Cu;
                return;
            }
            goto label_7F1FE77C;
    }

label_7F1FEF08:
    ctx->pc = 0x7F1FEF08u;
    ctx->downcount -= 6;
    // 7F1FEF08: fmuls   f0, f28, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FEF08u)) return;
    ppc_fmuls(ctx, 0, 28, 1);

label_7F1FEF0C:
    ctx->pc = 0x7F1FEF0Cu;
    // 7F1FEF0C: stfs     f0, 12(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEF0Cu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FEF10:
    ctx->pc = 0x7F1FEF10u;
    // 7F1FEF10: stfs     f0, 12(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEF10u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FEF14:
    ctx->pc = 0x7F1FEF14u;
    // 7F1FEF14: stfs     f29, 0(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEF14u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

label_7F1FEF18:
    ctx->pc = 0x7F1FEF18u;
    // 7F1FEF18: stfs     f29, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEF18u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

label_7F1FEF1C:
    // 7F1FEF1C: bl      0x7F1FE77C
    {
            ctx->lr = 0x7F1FEF20u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FE77Cu;
                return;
            }
            goto label_7F1FE77C;
    }

label_7F1FEF20:
    ctx->pc = 0x7F1FEF20u;
    ctx->downcount -= 5;
    // 7F1FEF20: fnmadds f0, f30, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1FEF20u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[30], ctx->fpr[1], ctx->fpr[31], true, false, true, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F1FEF24:
    ctx->pc = 0x7F1FEF24u;
    // 7F1FEF24: stfs     f0, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEF24u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FEF28:
    ctx->pc = 0x7F1FEF28u;
    // 7F1FEF28: lwz     r0, 1284(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(1284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FEF2C:
    // 7F1FEF2C: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FEF30:
    // 7F1FEF30: bc    12, 2, 0x7F1FEF48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FEF48;
        }
    }

label_7F1FEF34:
    ctx->downcount -= 5;
    // 7F1FEF34: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FEF38:
    ctx->pc = 0x7F1FEF38u;
    // 7F1FEF38: lfs     f1, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEF38u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FEF3C:
    ctx->pc = 0x7F1FEF3Cu;
    // 7F1FEF3C: lfs     f0, 13588(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEF3Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13588);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FEF40:
    ctx->pc = 0x7F1FEF40u;
    // 7F1FEF40: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FEF40u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1FEF44:
    ctx->pc = 0x7F1FEF44u;
    // 7F1FEF44: stfs     f0, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEF44u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FEF48:
    ctx->downcount -= 1;
    // 7F1FEF48: bl      0x7F1FE7C4
    {
            ctx->lr = 0x7F1FEF4Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FE7C4u;
                return;
            }
            goto label_7F1FE7C4;
    }

label_7F1FEF4C:
    ctx->downcount -= 6;
    // 7F1FEF4C: rlwinm r4, r3, 0, 25, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000007Fu;
    }

label_7F1FEF50:
    ctx->pc = 0x7F1FEF50u;
    // 7F1FEF50: lha     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1FEF54:
    // 7F1FEF54: addi    r0, r4, -64
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-64);

label_7F1FEF58:
    // 7F1FEF58: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1FEF5C:
    ctx->pc = 0x7F1FEF5Cu;
    // 7F1FEF5C: sth     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1FEF60:
    // 7F1FEF60: bl      0x7F1FE7C4
    {
            ctx->lr = 0x7F1FEF64u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FE7C4u;
                return;
            }
            goto label_7F1FE7C4;
    }

label_7F1FEF64:
    ctx->downcount -= 6;
    // 7F1FEF64: rlwinm r4, r3, 0, 25, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000007Fu;
    }

label_7F1FEF68:
    ctx->pc = 0x7F1FEF68u;
    // 7F1FEF68: lha     r3, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1FEF6C:
    // 7F1FEF6C: addi    r0, r4, -64
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-64);

label_7F1FEF70:
    // 7F1FEF70: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1FEF74:
    ctx->pc = 0x7F1FEF74u;
    // 7F1FEF74: sth     r0, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1FEF78:
    // 7F1FEF78: bl      0x7F1FE7C4
    {
            ctx->lr = 0x7F1FEF7Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FE7C4u;
                return;
            }
            goto label_7F1FE7C4;
    }

label_7F1FEF7C:
    ctx->downcount -= 5;
    // 7F1FEF7C: rlwinm r0, r3, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F1FEF80:
    // 7F1FEF80: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F1FEF84:
    ctx->pc = 0x7F1FEF84u;
    // 7F1FEF84: sth     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1FEF88:
    // 7F1FEF88: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1FEF8C:
    // 7F1FEF8C: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F1FEF90u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F1FEF90:
    ctx->downcount -= 4;
    // 7F1FEF90: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1FEF94:
    // 7F1FEF94: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1FEF98:
    // 7F1FEF98: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1FEF9C:
    // 7F1FEF9C: bl      0x7F3B3648
    {
            ctx->lr = 0x7F1FEFA0u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F1FEFA0:
    ctx->pc = 0x7F1FEFA0u;
    ctx->downcount -= 10;
    // 7F1FEFA0: stfs     f29, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F1FEFA0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

label_7F1FEFA4:
    // 7F1FEFA4: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F1FEFA8:
    // 7F1FEFA8: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F1FEFAC:
    // 7F1FEFAC: addi    r27, r27, 16
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(16);

label_7F1FEFB0:
    ctx->pc = 0x7F1FEFB0u;
    // 7F1FEFB0: stw     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FEFB4:
    // 7F1FEFB4: cmpwi   r30, 16
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FEFB8:
    // 7F1FEFB8: addi    r26, r26, 4
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(4);

label_7F1FEFBC:
    // 7F1FEFBC: addi    r29, r29, 16
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(16);

label_7F1FEFC0:
    // 7F1FEFC0: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

label_7F1FEFC4:
    // 7F1FEFC4: bc    12, 0, 0x7F1FEEC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FEEC4u;
                return;
            }
            goto label_7F1FEEC4;
        }
    }

label_7F1FEFC8:
    ctx->downcount -= 3;
    // 7F1FEFC8: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F1FEFCC:
    // 7F1FEFCC: cmpwi   r31, 2
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

label_7F1FEFD0:
    // 7F1FEFD0: bc    12, 0, 0x7F1FEEC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FEEC0u;
                return;
            }
            goto label_7F1FEEC0;
        }
    }

label_7F1FEFD4:
    ctx->pc = 0x7F1FEFD4u;
    ctx->downcount -= 7;
    // 7F1FEFD4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1FEFD8:
    ctx->pc = 0x7F1FEFD8u;
    // 7F1FEFD8: li      r0, 200
    ctx->gpr[0] = (u32)(s32)(200);

label_7F1FEFDC:
    ctx->pc = 0x7F1FEFDCu;
    // 7F1FEFDC: stw     r4, 796(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(796);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1FEFE0:
    ctx->pc = 0x7F1FEFE0u;
    // 7F1FEFE0: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F1FEFE4:
    ctx->pc = 0x7F1FEFE4u;
    // 7F1FEFE4: stw     r4, 792(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(792);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1FEFE8:
    ctx->pc = 0x7F1FEFE8u;
    // 7F1FEFE8: stw     r0, 808(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(808);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FEFEC:
    ctx->pc = 0x7F1FEFECu;
    // 7F1FEFEC: bl      0x7F1FE94C
    {
            ctx->lr = 0x7F1FEFF0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FE94Cu;
                return;
            }
            goto label_7F1FE94C;
    }

label_7F1FEFF0:
    ctx->pc = 0x7F1FEFF0u;
    ctx->downcount -= 2;
    // 7F1FEFF0: addi    r3, r25, 816
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(816);

label_7F1FEFF4:
    ctx->pc = 0x7F1FEFF4u;
    // 7F1FEFF4: bl      0x7F3CC594
    {
            ctx->lr = 0x7F1FEFF8u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F1FEFF8:
    ctx->pc = 0x7F1FEFF8u;
    ctx->downcount -= 8;
    // 7F1FEFF8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FEFFC:
    ctx->pc = 0x7F1FEFFCu;
    // 7F1FEFFC: addi    r3, r25, 136
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(136);

label_7F1FF000:
    ctx->pc = 0x7F1FF000u;
    // 7F1FF000: addi    r5, r4, 13592
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(13592);

label_7F1FF004:
    ctx->pc = 0x7F1FF004u;
    // 7F1FF004: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF004u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FF008:
    ctx->pc = 0x7F1FF008u;
    // 7F1FF008: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1FF00C:
    ctx->pc = 0x7F1FF00Cu;
    // 7F1FF00C: li      r5, 200
    ctx->gpr[5] = (u32)(s32)(200);

label_7F1FF010:
    ctx->pc = 0x7F1FF010u;
    // 7F1FF010: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FF010u)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_7F1FF014:
    ctx->pc = 0x7F1FF014u;
    // 7F1FF014: bl      0x7F1FDC30
    {
            ctx->lr = 0x7F1FF018u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FDC30u;
                return;
            }
            goto label_7F1FDC30;
    }

label_7F1FF018:
    ctx->pc = 0x7F1FF018u;
    ctx->downcount -= 1;
    // 7F1FF018: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1FF01C:
    ctx->pc = 0x7F1FF01Cu;
    ctx->downcount -= 24;
    // 7F1FF01C: psq_l   f31, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FF01Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1FF01Cu);
        if (ctx->exception) return;
    }

label_7F1FF020:
    ctx->pc = 0x7F1FF020u;
    // 7F1FF020: lfd     f31, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF020u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FF024:
    ctx->pc = 0x7F1FF024u;
    // 7F1FF024: psq_l   f30, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FF024u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F1FF024u);
        if (ctx->exception) return;
    }

label_7F1FF028:
    ctx->pc = 0x7F1FF028u;
    // 7F1FF028: lfd     f30, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF028u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FF02C:
    ctx->pc = 0x7F1FF02Cu;
    // 7F1FF02C: psq_l   f29, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FF02Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F1FF02Cu);
        if (ctx->exception) return;
    }

label_7F1FF030:
    ctx->pc = 0x7F1FF030u;
    // 7F1FF030: lfd     f29, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF030u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FF034:
    ctx->pc = 0x7F1FF034u;
    // 7F1FF034: psq_l   f28, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FF034u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F1FF034u);
        if (ctx->exception) return;
    }

label_7F1FF038:
    ctx->pc = 0x7F1FF038u;
    // 7F1FF038: lfd     f28, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF038u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FF03C:
    ctx->pc = 0x7F1FF03Cu;
    // 7F1FF03C: lmw     r24, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FF040:
    ctx->pc = 0x7F1FF040u;
    // 7F1FF040: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FF044:
    ctx->pc = 0x7F1FF044u;
    // 7F1FF044: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FF048:
    ctx->pc = 0x7F1FF048u;
    // 7F1FF048: addi    r1, r1, 176
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(176);

label_7F1FF04C:
    ctx->pc = 0x7F1FF04Cu;
    // 7F1FF04C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FF050:
    ctx->pc = 0x7F1FF050u;
    ctx->downcount -= 7;
    // 7F1FF050: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FF054:
    ctx->pc = 0x7F1FF054u;
    // 7F1FF054: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FF058:
    ctx->pc = 0x7F1FF058u;
    // 7F1FF058: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF05C:
    ctx->pc = 0x7F1FF05Cu;
    // 7F1FF05C: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1FF060:
    ctx->pc = 0x7F1FF060u;
    // 7F1FF060: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FF064:
    ctx->pc = 0x7F1FF064u;
    // 7F1FF064: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1FF068:
    ctx->pc = 0x7F1FF068u;
    // 7F1FF068: bl      0x7F114F50
    {
            ctx->lr = 0x7F1FF06Cu;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F1FF06C:
    ctx->pc = 0x7F1FF06Cu;
    ctx->downcount -= 3;
    // 7F1FF06C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FF070:
    ctx->pc = 0x7F1FF070u;
    // 7F1FF070: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1FF074:
    ctx->pc = 0x7F1FF074u;
    // 7F1FF074: bl      0x7F114F50
    {
            ctx->lr = 0x7F1FF078u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F1FF078:
    ctx->pc = 0x7F1FF078u;
    ctx->downcount -= 3;
    // 7F1FF078: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1FF07C:
    ctx->pc = 0x7F1FF07Cu;
    // 7F1FF07C: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1FF080:
    ctx->pc = 0x7F1FF080u;
    // 7F1FF080: bl      0x800260DC
    {
            ctx->lr = 0x7F1FF084u;
            ctx->pc = 0x800260DCu;
            return;
    }

label_7F1FF084:
    ctx->pc = 0x7F1FF084u;
    ctx->downcount -= 6;
    // 7F1FF084: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FF088:
    ctx->pc = 0x7F1FF088u;
    // 7F1FF088: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1FF08C:
    ctx->pc = 0x7F1FF08Cu;
    // 7F1FF08C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FF090:
    ctx->pc = 0x7F1FF090u;
    // 7F1FF090: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1FF094:
    ctx->pc = 0x7F1FF094u;
    // 7F1FF094: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FF098:
    ctx->pc = 0x7F1FF098u;
    ctx->downcount -= 21;
    // 7F1FF098: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FF09C:
    ctx->pc = 0x7F1FF09Cu;
    // 7F1FF09C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FF0A0:
    ctx->pc = 0x7F1FF0A0u;
    // 7F1FF0A0: li      r5, 1296
    ctx->gpr[5] = (u32)(s32)(1296);

label_7F1FF0A4:
    ctx->pc = 0x7F1FF0A4u;
    // 7F1FF0A4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1FF0A8:
    ctx->pc = 0x7F1FF0A8u;
    // 7F1FF0A8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF0AC:
    ctx->pc = 0x7F1FF0ACu;
    // 7F1FF0AC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FF0B0:
    ctx->pc = 0x7F1FF0B0u;
    // 7F1FF0B0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FF0B4:
    ctx->pc = 0x7F1FF0B4u;
    // 7F1FF0B4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FF0B8:
    ctx->pc = 0x7F1FF0B8u;
    // 7F1FF0B8: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F1FF0BC:
    ctx->pc = 0x7F1FF0BCu;
    // 7F1FF0BC: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F1FF0C0:
    ctx->pc = 0x7F1FF0C0u;
    // 7F1FF0C0: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1FF0C4u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1FF0C4:
    ctx->pc = 0x7F1FF0C4u;
    ctx->downcount -= 2;
    // 7F1FF0C4: or.   r31, r3, r3
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

label_7F1FF0C8:
    ctx->pc = 0x7F1FF0C8u;
    // 7F1FF0C8: bc    12, 2, 0x7F1FF15C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FF15C;
        }
    }

label_7F1FF0CC:
    ctx->pc = 0x7F1FF0CCu;
    ctx->downcount -= 5;
    // 7F1FF0CC: lis     r4, 32544
    ctx->gpr[4] = ((u32)(s32)(32544) << 16);

label_7F1FF0D0:
    ctx->pc = 0x7F1FF0D0u;
    // 7F1FF0D0: lis     r5, 32544
    ctx->gpr[5] = ((u32)(s32)(32544) << 16);

label_7F1FF0D4:
    ctx->pc = 0x7F1FF0D4u;
    // 7F1FF0D4: addi    r4, r4, -8096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8096);

label_7F1FF0D8:
    ctx->pc = 0x7F1FF0D8u;
    // 7F1FF0D8: addi    r5, r5, -6116
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-6116);

label_7F1FF0DC:
    ctx->pc = 0x7F1FF0DCu;
    // 7F1FF0DC: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1FF0E0u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1FF0E0:
    ctx->pc = 0x7F1FF0E0u;
    ctx->downcount -= 25;
    // 7F1FF0E0: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FF0E4:
    ctx->pc = 0x7F1FF0E4u;
    // 7F1FF0E4: lis     r6, 32572
    ctx->gpr[6] = ((u32)(s32)(32572) << 16);

label_7F1FF0E8:
    ctx->pc = 0x7F1FF0E8u;
    // 7F1FF0E8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FF0EC:
    ctx->pc = 0x7F1FF0ECu;
    // 7F1FF0EC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FF0F0:
    ctx->pc = 0x7F1FF0F0u;
    // 7F1FF0F0: ori     r0, r0, 0x0080
    ctx->gpr[0] = ctx->gpr[0] | 0x0080u;

label_7F1FF0F4:
    ctx->pc = 0x7F1FF0F4u;
    // 7F1FF0F4: lfs     f1, 13596(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF0F4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13596);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FF0F8:
    ctx->pc = 0x7F1FF0F8u;
    // 7F1FF0F8: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF0FC:
    ctx->pc = 0x7F1FF0FCu;
    // 7F1FF0FC: addi    r5, r3, 13600
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13600);

label_7F1FF100:
    ctx->pc = 0x7F1FF100u;
    // 7F1FF100: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1FF104:
    ctx->pc = 0x7F1FF104u;
    // 7F1FF104: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF104u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FF108:
    ctx->pc = 0x7F1FF108u;
    // 7F1FF108: stw     r7, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1FF10C:
    ctx->pc = 0x7F1FF10Cu;
    // 7F1FF10C: addi    r6, r6, 32548
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(32548);

label_7F1FF110:
    ctx->pc = 0x7F1FF110u;
    // 7F1FF110: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1FF114:
    ctx->pc = 0x7F1FF114u;
    // 7F1FF114: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FF118:
    ctx->pc = 0x7F1FF118u;
    // 7F1FF118: stw     r7, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1FF11C:
    ctx->pc = 0x7F1FF11Cu;
    // 7F1FF11C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1FF120:
    ctx->pc = 0x7F1FF120u;
    // 7F1FF120: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FF124:
    ctx->pc = 0x7F1FF124u;
    // 7F1FF124: stw     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1FF128:
    ctx->pc = 0x7F1FF128u;
    // 7F1FF128: stw     r6, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1FF12C:
    ctx->pc = 0x7F1FF12Cu;
    // 7F1FF12C: stw     r0, 1280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF130:
    ctx->pc = 0x7F1FF130u;
    // 7F1FF130: stfs     f1, 120(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF130u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FF134:
    ctx->pc = 0x7F1FF134u;
    // 7F1FF134: stfs     f1, 124(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF134u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FF138:
    ctx->pc = 0x7F1FF138u;
    // 7F1FF138: stfs     f1, 128(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF138u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FF13C:
    ctx->pc = 0x7F1FF13Cu;
    // 7F1FF13C: stfs     f0, 132(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF13Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FF140:
    ctx->pc = 0x7F1FF140u;
    // 7F1FF140: bl      0x7F1FEB28
    {
            ctx->lr = 0x7F1FF144u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FEB28u;
                return;
            }
            goto label_7F1FEB28;
    }

label_7F1FF144:
    ctx->pc = 0x7F1FF144u;
    ctx->downcount -= 2;
    // 7F1FF144: cmpwi   r3, 0
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

label_7F1FF148:
    ctx->pc = 0x7F1FF148u;
    // 7F1FF148: bc    4, 0, 0x7F1FF15C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FF15C;
        }
    }

label_7F1FF14C:
    ctx->pc = 0x7F1FF14Cu;
    ctx->downcount -= 2;
    // 7F1FF14C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FF150:
    ctx->pc = 0x7F1FF150u;
    // 7F1FF150: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1FF154u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1FF154:
    ctx->pc = 0x7F1FF154u;
    ctx->downcount -= 2;
    // 7F1FF154: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1FF158:
    ctx->pc = 0x7F1FF158u;
    // 7F1FF158: b       0x7F1FF160
    {
            goto label_7F1FF160;
    }

label_7F1FF15C:
    ctx->pc = 0x7F1FF15Cu;
    ctx->downcount -= 1;
    // 7F1FF15C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FF160:
    ctx->pc = 0x7F1FF160u;
    ctx->downcount -= 16;
    // 7F1FF160: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FF164:
    ctx->pc = 0x7F1FF164u;
    // 7F1FF164: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FF168:
    ctx->pc = 0x7F1FF168u;
    // 7F1FF168: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FF16C:
    ctx->pc = 0x7F1FF16Cu;
    // 7F1FF16C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1FF170:
    ctx->pc = 0x7F1FF170u;
    // 7F1FF170: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FF174:
    ctx->pc = 0x7F1FF174u;
    ctx->downcount -= 5;
    // 7F1FF174: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FF178:
    ctx->pc = 0x7F1FF178u;
    // 7F1FF178: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FF17C:
    ctx->pc = 0x7F1FF17Cu;
    // 7F1FF17C: li      r3, 110
    ctx->gpr[3] = (u32)(s32)(110);

label_7F1FF180:
    ctx->pc = 0x7F1FF180u;
    // 7F1FF180: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF184:
    ctx->pc = 0x7F1FF184u;
    // 7F1FF184: bl      0x7F3C664C
    {
            ctx->lr = 0x7F1FF188u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F1FF188:
    ctx->pc = 0x7F1FF188u;
    ctx->downcount -= 1;
    // 7F1FF188: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F1FF18Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F1FF18C:
    ctx->pc = 0x7F1FF18Cu;
    ctx->downcount -= 4;
    // 7F1FF18C: lis     r5, 32544
    ctx->gpr[5] = ((u32)(s32)(32544) << 16);

label_7F1FF190:
    ctx->pc = 0x7F1FF190u;
    // 7F1FF190: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FF194:
    ctx->pc = 0x7F1FF194u;
    // 7F1FF194: addi    r3, r5, -3944
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-3944);

label_7F1FF198:
    ctx->pc = 0x7F1FF198u;
    // 7F1FF198: bl      0x7F0180E0
    {
            ctx->lr = 0x7F1FF19Cu;
            ctx->pc = 0x7F0180E0u;
            return;
    }

label_7F1FF19C:
    ctx->pc = 0x7F1FF19Cu;
    ctx->downcount -= 7;
    // 7F1FF19C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FF1A0:
    ctx->pc = 0x7F1FF1A0u;
    // 7F1FF1A0: lis     r3, 32544
    ctx->gpr[3] = ((u32)(s32)(32544) << 16);

label_7F1FF1A4:
    ctx->pc = 0x7F1FF1A4u;
    // 7F1FF1A4: addi    r3, r3, -3724
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3724);

label_7F1FF1A8:
    ctx->pc = 0x7F1FF1A8u;
    // 7F1FF1A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FF1AC:
    ctx->pc = 0x7F1FF1ACu;
    // 7F1FF1AC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1FF1B0:
    ctx->pc = 0x7F1FF1B0u;
    // 7F1FF1B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FF1B4:
    ctx->pc = 0x7F1FF1B4u;
    ctx->downcount -= 21;
    // 7F1FF1B4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FF1B8:
    ctx->pc = 0x7F1FF1B8u;
    // 7F1FF1B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FF1BC:
    ctx->pc = 0x7F1FF1BCu;
    // 7F1FF1BC: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F1FF1C0:
    ctx->pc = 0x7F1FF1C0u;
    // 7F1FF1C0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF1C4:
    ctx->pc = 0x7F1FF1C4u;
    // 7F1FF1C4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FF1C8:
    ctx->pc = 0x7F1FF1C8u;
    // 7F1FF1C8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FF1CC:
    ctx->pc = 0x7F1FF1CCu;
    // 7F1FF1CC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FF1D0:
    ctx->pc = 0x7F1FF1D0u;
    // 7F1FF1D0: addi    r3, r5, -5708
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-5708);

label_7F1FF1D4:
    ctx->pc = 0x7F1FF1D4u;
    // 7F1FF1D4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FF1D8:
    ctx->pc = 0x7F1FF1D8u;
    // 7F1FF1D8: addi    r4, r29, 48
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(48);

label_7F1FF1DC:
    ctx->pc = 0x7F1FF1DCu;
    // 7F1FF1DC: bl      0x800261D8
    {
            ctx->lr = 0x7F1FF1E0u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F1FF1E0:
    ctx->pc = 0x7F1FF1E0u;
    ctx->downcount -= 3;
    // 7F1FF1E0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FF1E4:
    ctx->pc = 0x7F1FF1E4u;
    // 7F1FF1E4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FF1E8:
    ctx->pc = 0x7F1FF1E8u;
    // 7F1FF1E8: bl      0x7F114F50
    {
            ctx->lr = 0x7F1FF1ECu;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F1FF1EC:
    ctx->pc = 0x7F1FF1ECu;
    ctx->downcount -= 5;
    // 7F1FF1EC: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F1FF1F0:
    ctx->pc = 0x7F1FF1F0u;
    // 7F1FF1F0: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F1FF1F4:
    ctx->pc = 0x7F1FF1F4u;
    // 7F1FF1F4: li      r5, 1296
    ctx->gpr[5] = (u32)(s32)(1296);

label_7F1FF1F8:
    ctx->pc = 0x7F1FF1F8u;
    // 7F1FF1F8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1FF1FC:
    ctx->pc = 0x7F1FF1FCu;
    // 7F1FF1FC: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1FF200u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1FF200:
    ctx->pc = 0x7F1FF200u;
    ctx->downcount -= 2;
    // 7F1FF200: or.   r31, r3, r3
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

label_7F1FF204:
    ctx->pc = 0x7F1FF204u;
    // 7F1FF204: bc    12, 2, 0x7F1FF2AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FF2AC;
        }
    }

label_7F1FF208:
    ctx->pc = 0x7F1FF208u;
    ctx->downcount -= 5;
    // 7F1FF208: lis     r4, 32544
    ctx->gpr[4] = ((u32)(s32)(32544) << 16);

label_7F1FF20C:
    ctx->pc = 0x7F1FF20Cu;
    // 7F1FF20C: lis     r5, 32544
    ctx->gpr[5] = ((u32)(s32)(32544) << 16);

label_7F1FF210:
    ctx->pc = 0x7F1FF210u;
    // 7F1FF210: addi    r4, r4, -8096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8096);

label_7F1FF214:
    ctx->pc = 0x7F1FF214u;
    // 7F1FF214: addi    r5, r5, -6116
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-6116);

label_7F1FF218:
    ctx->pc = 0x7F1FF218u;
    // 7F1FF218: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1FF21Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1FF21C:
    ctx->pc = 0x7F1FF21Cu;
    ctx->downcount -= 28;
    // 7F1FF21C: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FF220:
    ctx->pc = 0x7F1FF220u;
    // 7F1FF220: lis     r6, 32572
    ctx->gpr[6] = ((u32)(s32)(32572) << 16);

label_7F1FF224:
    ctx->pc = 0x7F1FF224u;
    // 7F1FF224: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FF228:
    ctx->pc = 0x7F1FF228u;
    // 7F1FF228: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FF22C:
    ctx->pc = 0x7F1FF22Cu;
    // 7F1FF22C: ori     r0, r0, 0x0080
    ctx->gpr[0] = ctx->gpr[0] | 0x0080u;

label_7F1FF230:
    ctx->pc = 0x7F1FF230u;
    // 7F1FF230: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1FF234:
    ctx->pc = 0x7F1FF234u;
    // 7F1FF234: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF238:
    ctx->pc = 0x7F1FF238u;
    // 7F1FF238: addi    r5, r4, 13596
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(13596);

label_7F1FF23C:
    ctx->pc = 0x7F1FF23Cu;
    // 7F1FF23C: addi    r4, r3, 13600
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13600);

label_7F1FF240:
    ctx->pc = 0x7F1FF240u;
    // 7F1FF240: addi    r7, r6, 32548
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(32548);

label_7F1FF244:
    ctx->pc = 0x7F1FF244u;
    // 7F1FF244: stw     r8, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1FF248:
    ctx->pc = 0x7F1FF248u;
    // 7F1FF248: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F1FF24C:
    ctx->pc = 0x7F1FF24Cu;
    // 7F1FF24C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1FF250:
    ctx->pc = 0x7F1FF250u;
    // 7F1FF250: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF250u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FF254:
    ctx->pc = 0x7F1FF254u;
    // 7F1FF254: stw     r8, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1FF258:
    ctx->pc = 0x7F1FF258u;
    // 7F1FF258: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FF25C:
    ctx->pc = 0x7F1FF25Cu;
    // 7F1FF25C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF25Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FF260:
    ctx->pc = 0x7F1FF260u;
    // 7F1FF260: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1FF264:
    ctx->pc = 0x7F1FF264u;
    // 7F1FF264: stw     r8, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1FF268:
    ctx->pc = 0x7F1FF268u;
    // 7F1FF268: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FF26C:
    ctx->pc = 0x7F1FF26Cu;
    // 7F1FF26C: stw     r7, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1FF270:
    ctx->pc = 0x7F1FF270u;
    // 7F1FF270: stw     r6, 1280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1280);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1FF274:
    ctx->pc = 0x7F1FF274u;
    // 7F1FF274: stw     r0, 812(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(812);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF278:
    ctx->pc = 0x7F1FF278u;
    // 7F1FF278: stfs     f1, 120(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF278u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FF27C:
    ctx->pc = 0x7F1FF27Cu;
    // 7F1FF27C: stfs     f1, 124(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF27Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FF280:
    ctx->pc = 0x7F1FF280u;
    // 7F1FF280: stfs     f1, 128(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF280u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FF284:
    ctx->pc = 0x7F1FF284u;
    // 7F1FF284: stfs     f0, 132(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF284u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FF288:
    ctx->pc = 0x7F1FF288u;
    // 7F1FF288: bl      0x7F1FEB28
    {
            ctx->lr = 0x7F1FF28Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FEB28u;
                return;
            }
            goto label_7F1FEB28;
    }

label_7F1FF28C:
    ctx->pc = 0x7F1FF28Cu;
    ctx->downcount -= 2;
    // 7F1FF28C: cmpwi   r3, 0
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

label_7F1FF290:
    ctx->pc = 0x7F1FF290u;
    // 7F1FF290: bc    4, 0, 0x7F1FF2A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FF2A4;
        }
    }

label_7F1FF294:
    ctx->pc = 0x7F1FF294u;
    ctx->downcount -= 2;
    // 7F1FF294: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FF298:
    ctx->pc = 0x7F1FF298u;
    // 7F1FF298: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1FF29Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1FF29C:
    ctx->pc = 0x7F1FF29Cu;
    ctx->downcount -= 2;
    // 7F1FF29C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1FF2A0:
    ctx->pc = 0x7F1FF2A0u;
    // 7F1FF2A0: b       0x7F1FF2B0
    {
            goto label_7F1FF2B0;
    }

label_7F1FF2A4:
    ctx->pc = 0x7F1FF2A4u;
    ctx->downcount -= 2;
    // 7F1FF2A4: li      r0, 200
    ctx->gpr[0] = (u32)(s32)(200);

label_7F1FF2A8:
    ctx->pc = 0x7F1FF2A8u;
    // 7F1FF2A8: stw     r0, 808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(808);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF2AC:
    ctx->pc = 0x7F1FF2ACu;
    ctx->downcount -= 1;
    // 7F1FF2AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FF2B0:
    ctx->pc = 0x7F1FF2B0u;
    ctx->downcount -= 16;
    // 7F1FF2B0: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FF2B4:
    ctx->pc = 0x7F1FF2B4u;
    // 7F1FF2B4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FF2B8:
    ctx->pc = 0x7F1FF2B8u;
    // 7F1FF2B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FF2BC:
    ctx->pc = 0x7F1FF2BCu;
    // 7F1FF2BC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1FF2C0:
    ctx->pc = 0x7F1FF2C0u;
    // 7F1FF2C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FF2C4:
    ctx->pc = 0x7F1FF2C4u;
    ctx->downcount -= 21;
    // 7F1FF2C4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FF2C8:
    ctx->pc = 0x7F1FF2C8u;
    // 7F1FF2C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FF2CC:
    ctx->pc = 0x7F1FF2CCu;
    // 7F1FF2CC: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F1FF2D0:
    ctx->pc = 0x7F1FF2D0u;
    // 7F1FF2D0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF2D4:
    ctx->pc = 0x7F1FF2D4u;
    // 7F1FF2D4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FF2D8:
    ctx->pc = 0x7F1FF2D8u;
    // 7F1FF2D8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FF2DC:
    ctx->pc = 0x7F1FF2DCu;
    // 7F1FF2DC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FF2E0:
    ctx->pc = 0x7F1FF2E0u;
    // 7F1FF2E0: addi    r3, r5, -5708
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-5708);

label_7F1FF2E4:
    ctx->pc = 0x7F1FF2E4u;
    // 7F1FF2E4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FF2E8:
    ctx->pc = 0x7F1FF2E8u;
    // 7F1FF2E8: addi    r4, r29, 48
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(48);

label_7F1FF2EC:
    ctx->pc = 0x7F1FF2ECu;
    // 7F1FF2EC: bl      0x800261D8
    {
            ctx->lr = 0x7F1FF2F0u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F1FF2F0:
    ctx->pc = 0x7F1FF2F0u;
    ctx->downcount -= 3;
    // 7F1FF2F0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FF2F4:
    ctx->pc = 0x7F1FF2F4u;
    // 7F1FF2F4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FF2F8:
    ctx->pc = 0x7F1FF2F8u;
    // 7F1FF2F8: bl      0x7F114F50
    {
            ctx->lr = 0x7F1FF2FCu;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F1FF2FC:
    ctx->pc = 0x7F1FF2FCu;
    ctx->downcount -= 5;
    // 7F1FF2FC: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F1FF300:
    ctx->pc = 0x7F1FF300u;
    // 7F1FF300: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F1FF304:
    ctx->pc = 0x7F1FF304u;
    // 7F1FF304: li      r5, 1296
    ctx->gpr[5] = (u32)(s32)(1296);

label_7F1FF308:
    ctx->pc = 0x7F1FF308u;
    // 7F1FF308: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1FF30C:
    ctx->pc = 0x7F1FF30Cu;
    // 7F1FF30C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1FF310u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1FF310:
    ctx->pc = 0x7F1FF310u;
    ctx->downcount -= 2;
    // 7F1FF310: or.   r31, r3, r3
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

label_7F1FF314:
    ctx->pc = 0x7F1FF314u;
    // 7F1FF314: bc    12, 2, 0x7F1FF3BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FF3BC;
        }
    }

label_7F1FF318:
    ctx->pc = 0x7F1FF318u;
    ctx->downcount -= 5;
    // 7F1FF318: lis     r4, 32544
    ctx->gpr[4] = ((u32)(s32)(32544) << 16);

label_7F1FF31C:
    ctx->pc = 0x7F1FF31Cu;
    // 7F1FF31C: lis     r5, 32544
    ctx->gpr[5] = ((u32)(s32)(32544) << 16);

label_7F1FF320:
    ctx->pc = 0x7F1FF320u;
    // 7F1FF320: addi    r4, r4, -8096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8096);

label_7F1FF324:
    ctx->pc = 0x7F1FF324u;
    // 7F1FF324: addi    r5, r5, -6116
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-6116);

label_7F1FF328:
    ctx->pc = 0x7F1FF328u;
    // 7F1FF328: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1FF32Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1FF32C:
    ctx->pc = 0x7F1FF32Cu;
    ctx->downcount -= 28;
    // 7F1FF32C: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FF330:
    ctx->pc = 0x7F1FF330u;
    // 7F1FF330: lis     r6, 32572
    ctx->gpr[6] = ((u32)(s32)(32572) << 16);

label_7F1FF334:
    ctx->pc = 0x7F1FF334u;
    // 7F1FF334: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FF338:
    ctx->pc = 0x7F1FF338u;
    // 7F1FF338: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FF33C:
    ctx->pc = 0x7F1FF33Cu;
    // 7F1FF33C: ori     r0, r0, 0x0080
    ctx->gpr[0] = ctx->gpr[0] | 0x0080u;

label_7F1FF340:
    ctx->pc = 0x7F1FF340u;
    // 7F1FF340: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1FF344:
    ctx->pc = 0x7F1FF344u;
    // 7F1FF344: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF348:
    ctx->pc = 0x7F1FF348u;
    // 7F1FF348: addi    r5, r4, 13596
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(13596);

label_7F1FF34C:
    ctx->pc = 0x7F1FF34Cu;
    // 7F1FF34C: addi    r4, r3, 13600
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13600);

label_7F1FF350:
    ctx->pc = 0x7F1FF350u;
    // 7F1FF350: addi    r7, r6, 32548
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(32548);

label_7F1FF354:
    ctx->pc = 0x7F1FF354u;
    // 7F1FF354: stw     r8, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1FF358:
    ctx->pc = 0x7F1FF358u;
    // 7F1FF358: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_7F1FF35C:
    ctx->pc = 0x7F1FF35Cu;
    // 7F1FF35C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F1FF360:
    ctx->pc = 0x7F1FF360u;
    // 7F1FF360: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF360u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FF364:
    ctx->pc = 0x7F1FF364u;
    // 7F1FF364: stw     r8, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1FF368:
    ctx->pc = 0x7F1FF368u;
    // 7F1FF368: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FF36C:
    ctx->pc = 0x7F1FF36Cu;
    // 7F1FF36C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF36Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FF370:
    ctx->pc = 0x7F1FF370u;
    // 7F1FF370: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1FF374:
    ctx->pc = 0x7F1FF374u;
    // 7F1FF374: stw     r8, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1FF378:
    ctx->pc = 0x7F1FF378u;
    // 7F1FF378: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FF37C:
    ctx->pc = 0x7F1FF37Cu;
    // 7F1FF37C: stw     r7, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1FF380:
    ctx->pc = 0x7F1FF380u;
    // 7F1FF380: stw     r6, 1280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1280);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1FF384:
    ctx->pc = 0x7F1FF384u;
    // 7F1FF384: stw     r0, 812(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(812);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF388:
    ctx->pc = 0x7F1FF388u;
    // 7F1FF388: stfs     f1, 120(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF388u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FF38C:
    ctx->pc = 0x7F1FF38Cu;
    // 7F1FF38C: stfs     f1, 124(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF38Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FF390:
    ctx->pc = 0x7F1FF390u;
    // 7F1FF390: stfs     f1, 128(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF390u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FF394:
    ctx->pc = 0x7F1FF394u;
    // 7F1FF394: stfs     f0, 132(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF394u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FF398:
    ctx->pc = 0x7F1FF398u;
    // 7F1FF398: bl      0x7F1FEB28
    {
            ctx->lr = 0x7F1FF39Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FEB28u;
                return;
            }
            goto label_7F1FEB28;
    }

label_7F1FF39C:
    ctx->pc = 0x7F1FF39Cu;
    ctx->downcount -= 2;
    // 7F1FF39C: cmpwi   r3, 0
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

label_7F1FF3A0:
    ctx->pc = 0x7F1FF3A0u;
    // 7F1FF3A0: bc    4, 0, 0x7F1FF3B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FF3B4;
        }
    }

label_7F1FF3A4:
    ctx->pc = 0x7F1FF3A4u;
    ctx->downcount -= 2;
    // 7F1FF3A4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FF3A8:
    ctx->pc = 0x7F1FF3A8u;
    // 7F1FF3A8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1FF3ACu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1FF3AC:
    ctx->pc = 0x7F1FF3ACu;
    ctx->downcount -= 2;
    // 7F1FF3AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1FF3B0:
    ctx->pc = 0x7F1FF3B0u;
    // 7F1FF3B0: b       0x7F1FF3C0
    {
            goto label_7F1FF3C0;
    }

label_7F1FF3B4:
    ctx->pc = 0x7F1FF3B4u;
    ctx->downcount -= 2;
    // 7F1FF3B4: li      r0, 480
    ctx->gpr[0] = (u32)(s32)(480);

label_7F1FF3B8:
    ctx->pc = 0x7F1FF3B8u;
    // 7F1FF3B8: stw     r0, 808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(808);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF3BC:
    ctx->pc = 0x7F1FF3BCu;
    ctx->downcount -= 1;
    // 7F1FF3BC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FF3C0:
    ctx->pc = 0x7F1FF3C0u;
    ctx->downcount -= 16;
    // 7F1FF3C0: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FF3C4:
    ctx->pc = 0x7F1FF3C4u;
    // 7F1FF3C4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FF3C8:
    ctx->pc = 0x7F1FF3C8u;
    // 7F1FF3C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FF3CC:
    ctx->pc = 0x7F1FF3CCu;
    // 7F1FF3CC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1FF3D0:
    ctx->pc = 0x7F1FF3D0u;
    // 7F1FF3D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FF3D4:
    ctx->pc = 0x7F1FF3D4u;
    ctx->downcount -= 5;
    // 7F1FF3D4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FF3D8:
    ctx->pc = 0x7F1FF3D8u;
    // 7F1FF3D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FF3DC:
    ctx->pc = 0x7F1FF3DCu;
    // 7F1FF3DC: li      r3, 110
    ctx->gpr[3] = (u32)(s32)(110);

label_7F1FF3E0:
    ctx->pc = 0x7F1FF3E0u;
    // 7F1FF3E0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF3E4:
    ctx->pc = 0x7F1FF3E4u;
    // 7F1FF3E4: bl      0x7F3C664C
    {
            ctx->lr = 0x7F1FF3E8u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F1FF3E8:
    ctx->pc = 0x7F1FF3E8u;
    ctx->downcount -= 1;
    // 7F1FF3E8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F1FF3ECu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F1FF3EC:
    ctx->pc = 0x7F1FF3ECu;
    ctx->downcount -= 4;
    // 7F1FF3EC: lis     r5, 32544
    ctx->gpr[5] = ((u32)(s32)(32544) << 16);

label_7F1FF3F0:
    ctx->pc = 0x7F1FF3F0u;
    // 7F1FF3F0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FF3F4:
    ctx->pc = 0x7F1FF3F4u;
    // 7F1FF3F4: addi    r3, r5, -3660
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-3660);

label_7F1FF3F8:
    ctx->pc = 0x7F1FF3F8u;
    // 7F1FF3F8: bl      0x7F0180E0
    {
            ctx->lr = 0x7F1FF3FCu;
            ctx->pc = 0x7F0180E0u;
            return;
    }

label_7F1FF3FC:
    ctx->pc = 0x7F1FF3FCu;
    ctx->downcount -= 7;
    // 7F1FF3FC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FF400:
    ctx->pc = 0x7F1FF400u;
    // 7F1FF400: lis     r3, 32544
    ctx->gpr[3] = ((u32)(s32)(32544) << 16);

label_7F1FF404:
    ctx->pc = 0x7F1FF404u;
    // 7F1FF404: addi    r3, r3, -3116
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3116);

label_7F1FF408:
    ctx->pc = 0x7F1FF408u;
    // 7F1FF408: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FF40C:
    ctx->pc = 0x7F1FF40Cu;
    // 7F1FF40C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1FF410:
    ctx->pc = 0x7F1FF410u;
    // 7F1FF410: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FF414:
    ctx->pc = 0x7F1FF414u;
    ctx->downcount -= 5;
    // 7F1FF414: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FF418:
    ctx->pc = 0x7F1FF418u;
    // 7F1FF418: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FF41C:
    ctx->pc = 0x7F1FF41Cu;
    // 7F1FF41C: li      r3, 110
    ctx->gpr[3] = (u32)(s32)(110);

label_7F1FF420:
    ctx->pc = 0x7F1FF420u;
    // 7F1FF420: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF424:
    ctx->pc = 0x7F1FF424u;
    // 7F1FF424: bl      0x7F3C664C
    {
            ctx->lr = 0x7F1FF428u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F1FF428:
    ctx->pc = 0x7F1FF428u;
    ctx->downcount -= 1;
    // 7F1FF428: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F1FF42Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F1FF42C:
    ctx->pc = 0x7F1FF42Cu;
    ctx->downcount -= 4;
    // 7F1FF42C: lis     r5, 32544
    ctx->gpr[5] = ((u32)(s32)(32544) << 16);

label_7F1FF430:
    ctx->pc = 0x7F1FF430u;
    // 7F1FF430: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FF434:
    ctx->pc = 0x7F1FF434u;
    // 7F1FF434: addi    r3, r5, -3388
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-3388);

label_7F1FF438:
    ctx->pc = 0x7F1FF438u;
    // 7F1FF438: bl      0x7F0180E0
    {
            ctx->lr = 0x7F1FF43Cu;
            ctx->pc = 0x7F0180E0u;
            return;
    }

label_7F1FF43C:
    ctx->pc = 0x7F1FF43Cu;
    ctx->downcount -= 7;
    // 7F1FF43C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FF440:
    ctx->pc = 0x7F1FF440u;
    // 7F1FF440: lis     r3, 32544
    ctx->gpr[3] = ((u32)(s32)(32544) << 16);

label_7F1FF444:
    ctx->pc = 0x7F1FF444u;
    // 7F1FF444: addi    r3, r3, -3052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3052);

label_7F1FF448:
    ctx->pc = 0x7F1FF448u;
    // 7F1FF448: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FF44C:
    ctx->pc = 0x7F1FF44Cu;
    // 7F1FF44C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1FF450:
    ctx->pc = 0x7F1FF450u;
    // 7F1FF450: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FF454:
    ctx->pc = 0x7F1FF454u;
    ctx->downcount -= 22;
    // 7F1FF454: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FF458:
    ctx->pc = 0x7F1FF458u;
    // 7F1FF458: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FF45C:
    ctx->pc = 0x7F1FF45Cu;
    // 7F1FF45C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1FF460:
    ctx->pc = 0x7F1FF460u;
    // 7F1FF460: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF464:
    ctx->pc = 0x7F1FF464u;
    // 7F1FF464: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FF468:
    ctx->pc = 0x7F1FF468u;
    // 7F1FF468: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FF46C:
    ctx->pc = 0x7F1FF46Cu;
    // 7F1FF46C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FF470:
    ctx->pc = 0x7F1FF470u;
    // 7F1FF470: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1FF474:
    ctx->pc = 0x7F1FF474u;
    // 7F1FF474: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F1FF478:
    ctx->pc = 0x7F1FF478u;
    // 7F1FF478: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F1FF47C:
    ctx->pc = 0x7F1FF47Cu;
    // 7F1FF47C: li      r5, 1296
    ctx->gpr[5] = (u32)(s32)(1296);

label_7F1FF480:
    ctx->pc = 0x7F1FF480u;
    // 7F1FF480: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1FF484u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1FF484:
    ctx->pc = 0x7F1FF484u;
    ctx->downcount -= 2;
    // 7F1FF484: or.   r28, r3, r3
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

label_7F1FF488:
    ctx->pc = 0x7F1FF488u;
    // 7F1FF488: bc    12, 2, 0x7F1FF53C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FF53C;
        }
    }

label_7F1FF48C:
    ctx->pc = 0x7F1FF48Cu;
    ctx->downcount -= 5;
    // 7F1FF48C: lis     r4, 32544
    ctx->gpr[4] = ((u32)(s32)(32544) << 16);

label_7F1FF490:
    ctx->pc = 0x7F1FF490u;
    // 7F1FF490: lis     r5, 32544
    ctx->gpr[5] = ((u32)(s32)(32544) << 16);

label_7F1FF494:
    ctx->pc = 0x7F1FF494u;
    // 7F1FF494: addi    r4, r4, -8096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8096);

label_7F1FF498:
    ctx->pc = 0x7F1FF498u;
    // 7F1FF498: addi    r5, r5, -6116
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-6116);

label_7F1FF49C:
    ctx->pc = 0x7F1FF49Cu;
    // 7F1FF49C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1FF4A0u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1FF4A0:
    ctx->pc = 0x7F1FF4A0u;
    ctx->downcount -= 28;
    // 7F1FF4A0: lwz     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FF4A4:
    ctx->pc = 0x7F1FF4A4u;
    // 7F1FF4A4: lis     r5, 32572
    ctx->gpr[5] = ((u32)(s32)(32572) << 16);

label_7F1FF4A8:
    ctx->pc = 0x7F1FF4A8u;
    // 7F1FF4A8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FF4AC:
    ctx->pc = 0x7F1FF4ACu;
    // 7F1FF4AC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FF4B0:
    ctx->pc = 0x7F1FF4B0u;
    // 7F1FF4B0: ori     r0, r0, 0x0080
    ctx->gpr[0] = ctx->gpr[0] | 0x0080u;

label_7F1FF4B4:
    ctx->pc = 0x7F1FF4B4u;
    // 7F1FF4B4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1FF4B8:
    ctx->pc = 0x7F1FF4B8u;
    // 7F1FF4B8: stw     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF4BC:
    ctx->pc = 0x7F1FF4BCu;
    // 7F1FF4BC: addi    r5, r5, 32548
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(32548);

label_7F1FF4C0:
    ctx->pc = 0x7F1FF4C0u;
    // 7F1FF4C0: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F1FF4C4:
    ctx->pc = 0x7F1FF4C4u;
    // 7F1FF4C4: lfs     f2, 13592(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF4C4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13592);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1FF4C8:
    ctx->pc = 0x7F1FF4C8u;
    // 7F1FF4C8: stw     r6, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1FF4CC:
    ctx->pc = 0x7F1FF4CCu;
    // 7F1FF4CC: lfs     f0, 13596(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF4CCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13596);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FF4D0:
    ctx->pc = 0x7F1FF4D0u;
    // 7F1FF4D0: stw     r6, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1FF4D4:
    ctx->pc = 0x7F1FF4D4u;
    // 7F1FF4D4: stw     r6, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1FF4D8:
    ctx->pc = 0x7F1FF4D8u;
    // 7F1FF4D8: stw     r5, 44(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1FF4DC:
    ctx->pc = 0x7F1FF4DCu;
    // 7F1FF4DC: stw     r0, 1280(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF4E0:
    ctx->pc = 0x7F1FF4E0u;
    // 7F1FF4E0: lfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF4E0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FF4E4:
    ctx->pc = 0x7F1FF4E4u;
    // 7F1FF4E4: stfs     f1, 120(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF4E4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FF4E8:
    ctx->pc = 0x7F1FF4E8u;
    // 7F1FF4E8: lfs     f1, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF4E8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FF4EC:
    ctx->pc = 0x7F1FF4ECu;
    // 7F1FF4EC: stfs     f1, 124(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF4ECu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FF4F0:
    ctx->pc = 0x7F1FF4F0u;
    // 7F1FF4F0: lfs     f1, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF4F0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FF4F4:
    ctx->pc = 0x7F1FF4F4u;
    // 7F1FF4F4: stfs     f1, 128(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF4F4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FF4F8:
    ctx->pc = 0x7F1FF4F8u;
    // 7F1FF4F8: lfs     f1, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF4F8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FF4FC:
    ctx->pc = 0x7F1FF4FCu;
    // 7F1FF4FC: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FF4FCu)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F1FF500:
    ctx->pc = 0x7F1FF500u;
    // 7F1FF500: stfs     f1, 132(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF500u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FF504:
    ctx->pc = 0x7F1FF504u;
    // 7F1FF504: lfs     f1, 132(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF504u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(132);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FF508:
    ctx->pc = 0x7F1FF508u;
    // 7F1FF508: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FF508u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1FF50C:
    ctx->pc = 0x7F1FF50Cu;
    // 7F1FF50C: bc    4, 1, 0x7F1FF514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FF514;
        }
    }

label_7F1FF510:
    ctx->pc = 0x7F1FF510u;
    ctx->downcount -= 1;
    // 7F1FF510: stfs     f0, 132(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF510u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FF514:
    ctx->pc = 0x7F1FF514u;
    ctx->downcount -= 4;
    // 7F1FF514: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1FF518:
    ctx->pc = 0x7F1FF518u;
    // 7F1FF518: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1FF51C:
    ctx->pc = 0x7F1FF51Cu;
    // 7F1FF51C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FF520:
    ctx->pc = 0x7F1FF520u;
    // 7F1FF520: bl      0x7F1FEB28
    {
            ctx->lr = 0x7F1FF524u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FEB28u;
                return;
            }
            goto label_7F1FEB28;
    }

label_7F1FF524:
    ctx->pc = 0x7F1FF524u;
    ctx->downcount -= 2;
    // 7F1FF524: cmpwi   r3, 0
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

label_7F1FF528:
    ctx->pc = 0x7F1FF528u;
    // 7F1FF528: bc    4, 0, 0x7F1FF53C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FF53C;
        }
    }

label_7F1FF52C:
    ctx->pc = 0x7F1FF52Cu;
    ctx->downcount -= 2;
    // 7F1FF52C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1FF530:
    ctx->pc = 0x7F1FF530u;
    // 7F1FF530: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1FF534u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1FF534:
    ctx->pc = 0x7F1FF534u;
    ctx->downcount -= 2;
    // 7F1FF534: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1FF538:
    ctx->pc = 0x7F1FF538u;
    // 7F1FF538: b       0x7F1FF540
    {
            goto label_7F1FF540;
    }

label_7F1FF53C:
    ctx->pc = 0x7F1FF53Cu;
    ctx->downcount -= 1;
    // 7F1FF53C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1FF540:
    ctx->pc = 0x7F1FF540u;
    ctx->downcount -= 16;
    // 7F1FF540: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FF544:
    ctx->pc = 0x7F1FF544u;
    // 7F1FF544: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FF548:
    ctx->pc = 0x7F1FF548u;
    // 7F1FF548: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FF54C:
    ctx->pc = 0x7F1FF54Cu;
    // 7F1FF54C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1FF550:
    ctx->pc = 0x7F1FF550u;
    // 7F1FF550: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FF554:
    ctx->pc = 0x7F1FF554u;
    ctx->downcount -= 5;
    // 7F1FF554: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FF558:
    ctx->pc = 0x7F1FF558u;
    // 7F1FF558: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FF55C:
    ctx->pc = 0x7F1FF55Cu;
    // 7F1FF55C: li      r3, 110
    ctx->gpr[3] = (u32)(s32)(110);

label_7F1FF560:
    ctx->pc = 0x7F1FF560u;
    // 7F1FF560: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF564:
    ctx->pc = 0x7F1FF564u;
    // 7F1FF564: bl      0x7F3C664C
    {
            ctx->lr = 0x7F1FF568u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F1FF568:
    ctx->pc = 0x7F1FF568u;
    ctx->downcount -= 1;
    // 7F1FF568: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F1FF56Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F1FF56C:
    ctx->pc = 0x7F1FF56Cu;
    ctx->downcount -= 4;
    // 7F1FF56C: lis     r5, 32544
    ctx->gpr[5] = ((u32)(s32)(32544) << 16);

label_7F1FF570:
    ctx->pc = 0x7F1FF570u;
    // 7F1FF570: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FF574:
    ctx->pc = 0x7F1FF574u;
    // 7F1FF574: addi    r3, r5, -2668
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-2668);

label_7F1FF578:
    ctx->pc = 0x7F1FF578u;
    // 7F1FF578: bl      0x7F0180E0
    {
            ctx->lr = 0x7F1FF57Cu;
            ctx->pc = 0x7F0180E0u;
            return;
    }

label_7F1FF57C:
    ctx->pc = 0x7F1FF57Cu;
    ctx->downcount -= 7;
    // 7F1FF57C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FF580:
    ctx->pc = 0x7F1FF580u;
    // 7F1FF580: lis     r3, 32544
    ctx->gpr[3] = ((u32)(s32)(32544) << 16);

label_7F1FF584:
    ctx->pc = 0x7F1FF584u;
    // 7F1FF584: addi    r3, r3, -2732
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2732);

label_7F1FF588:
    ctx->pc = 0x7F1FF588u;
    // 7F1FF588: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FF58C:
    ctx->pc = 0x7F1FF58Cu;
    // 7F1FF58C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1FF590:
    ctx->pc = 0x7F1FF590u;
    // 7F1FF590: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FF594:
    ctx->pc = 0x7F1FF594u;
    ctx->downcount -= 21;
    // 7F1FF594: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FF598:
    ctx->pc = 0x7F1FF598u;
    // 7F1FF598: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FF59C:
    ctx->pc = 0x7F1FF59Cu;
    // 7F1FF59C: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F1FF5A0:
    ctx->pc = 0x7F1FF5A0u;
    // 7F1FF5A0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF5A4:
    ctx->pc = 0x7F1FF5A4u;
    // 7F1FF5A4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FF5A8:
    ctx->pc = 0x7F1FF5A8u;
    // 7F1FF5A8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FF5AC:
    ctx->pc = 0x7F1FF5ACu;
    // 7F1FF5AC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FF5B0:
    ctx->pc = 0x7F1FF5B0u;
    // 7F1FF5B0: addi    r3, r5, -5708
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-5708);

label_7F1FF5B4:
    ctx->pc = 0x7F1FF5B4u;
    // 7F1FF5B4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FF5B8:
    ctx->pc = 0x7F1FF5B8u;
    // 7F1FF5B8: addi    r4, r29, 48
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(48);

label_7F1FF5BC:
    ctx->pc = 0x7F1FF5BCu;
    // 7F1FF5BC: bl      0x800261D8
    {
            ctx->lr = 0x7F1FF5C0u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F1FF5C0:
    ctx->pc = 0x7F1FF5C0u;
    ctx->downcount -= 3;
    // 7F1FF5C0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FF5C4:
    ctx->pc = 0x7F1FF5C4u;
    // 7F1FF5C4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FF5C8:
    ctx->pc = 0x7F1FF5C8u;
    // 7F1FF5C8: bl      0x7F114F50
    {
            ctx->lr = 0x7F1FF5CCu;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F1FF5CC:
    ctx->pc = 0x7F1FF5CCu;
    ctx->downcount -= 5;
    // 7F1FF5CC: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F1FF5D0:
    ctx->pc = 0x7F1FF5D0u;
    // 7F1FF5D0: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F1FF5D4:
    ctx->pc = 0x7F1FF5D4u;
    // 7F1FF5D4: li      r5, 1296
    ctx->gpr[5] = (u32)(s32)(1296);

label_7F1FF5D8:
    ctx->pc = 0x7F1FF5D8u;
    // 7F1FF5D8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1FF5DC:
    ctx->pc = 0x7F1FF5DCu;
    // 7F1FF5DC: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1FF5E0u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1FF5E0:
    ctx->pc = 0x7F1FF5E0u;
    ctx->downcount -= 2;
    // 7F1FF5E0: or.   r31, r3, r3
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

label_7F1FF5E4:
    ctx->pc = 0x7F1FF5E4u;
    // 7F1FF5E4: bc    12, 2, 0x7F1FF6A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FF6A0;
        }
    }

label_7F1FF5E8:
    ctx->pc = 0x7F1FF5E8u;
    ctx->downcount -= 5;
    // 7F1FF5E8: lis     r4, 32544
    ctx->gpr[4] = ((u32)(s32)(32544) << 16);

label_7F1FF5EC:
    ctx->pc = 0x7F1FF5ECu;
    // 7F1FF5EC: lis     r5, 32544
    ctx->gpr[5] = ((u32)(s32)(32544) << 16);

label_7F1FF5F0:
    ctx->pc = 0x7F1FF5F0u;
    // 7F1FF5F0: addi    r4, r4, -8096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8096);

label_7F1FF5F4:
    ctx->pc = 0x7F1FF5F4u;
    // 7F1FF5F4: addi    r5, r5, -6116
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-6116);

label_7F1FF5F8:
    ctx->pc = 0x7F1FF5F8u;
    // 7F1FF5F8: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1FF5FCu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1FF5FC:
    ctx->pc = 0x7F1FF5FCu;
    ctx->downcount -= 28;
    // 7F1FF5FC: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FF600:
    ctx->pc = 0x7F1FF600u;
    // 7F1FF600: lis     r6, 32572
    ctx->gpr[6] = ((u32)(s32)(32572) << 16);

label_7F1FF604:
    ctx->pc = 0x7F1FF604u;
    // 7F1FF604: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FF608:
    ctx->pc = 0x7F1FF608u;
    // 7F1FF608: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FF60C:
    ctx->pc = 0x7F1FF60Cu;
    // 7F1FF60C: ori     r0, r0, 0x0080
    ctx->gpr[0] = ctx->gpr[0] | 0x0080u;

label_7F1FF610:
    ctx->pc = 0x7F1FF610u;
    // 7F1FF610: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1FF614:
    ctx->pc = 0x7F1FF614u;
    // 7F1FF614: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF618:
    ctx->pc = 0x7F1FF618u;
    // 7F1FF618: addi    r5, r4, 13596
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(13596);

label_7F1FF61C:
    ctx->pc = 0x7F1FF61Cu;
    // 7F1FF61C: addi    r4, r3, 13600
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13600);

label_7F1FF620:
    ctx->pc = 0x7F1FF620u;
    // 7F1FF620: addi    r7, r6, 32548
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(32548);

label_7F1FF624:
    ctx->pc = 0x7F1FF624u;
    // 7F1FF624: stw     r8, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1FF628:
    ctx->pc = 0x7F1FF628u;
    // 7F1FF628: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F1FF62C:
    ctx->pc = 0x7F1FF62Cu;
    // 7F1FF62C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1FF630:
    ctx->pc = 0x7F1FF630u;
    // 7F1FF630: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF630u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FF634:
    ctx->pc = 0x7F1FF634u;
    // 7F1FF634: stw     r8, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1FF638:
    ctx->pc = 0x7F1FF638u;
    // 7F1FF638: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FF63C:
    ctx->pc = 0x7F1FF63Cu;
    // 7F1FF63C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF63Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FF640:
    ctx->pc = 0x7F1FF640u;
    // 7F1FF640: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1FF644:
    ctx->pc = 0x7F1FF644u;
    // 7F1FF644: stw     r8, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1FF648:
    ctx->pc = 0x7F1FF648u;
    // 7F1FF648: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FF64C:
    ctx->pc = 0x7F1FF64Cu;
    // 7F1FF64C: stw     r7, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1FF650:
    ctx->pc = 0x7F1FF650u;
    // 7F1FF650: stw     r6, 1280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1280);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1FF654:
    ctx->pc = 0x7F1FF654u;
    // 7F1FF654: stw     r0, 812(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(812);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF658:
    ctx->pc = 0x7F1FF658u;
    // 7F1FF658: stfs     f1, 120(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF658u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FF65C:
    ctx->pc = 0x7F1FF65Cu;
    // 7F1FF65C: stfs     f1, 124(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF65Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FF660:
    ctx->pc = 0x7F1FF660u;
    // 7F1FF660: stfs     f1, 128(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF660u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FF664:
    ctx->pc = 0x7F1FF664u;
    // 7F1FF664: stfs     f0, 132(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF664u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FF668:
    ctx->pc = 0x7F1FF668u;
    // 7F1FF668: bl      0x7F1FEB28
    {
            ctx->lr = 0x7F1FF66Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FEB28u;
                return;
            }
            goto label_7F1FEB28;
    }

label_7F1FF66C:
    ctx->pc = 0x7F1FF66Cu;
    ctx->downcount -= 2;
    // 7F1FF66C: cmpwi   r3, 0
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

label_7F1FF670:
    ctx->pc = 0x7F1FF670u;
    // 7F1FF670: bc    4, 0, 0x7F1FF684
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FF684;
        }
    }

label_7F1FF674:
    ctx->pc = 0x7F1FF674u;
    ctx->downcount -= 2;
    // 7F1FF674: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FF678:
    ctx->pc = 0x7F1FF678u;
    // 7F1FF678: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1FF67Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1FF67C:
    ctx->pc = 0x7F1FF67Cu;
    ctx->downcount -= 2;
    // 7F1FF67C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1FF680:
    ctx->pc = 0x7F1FF680u;
    // 7F1FF680: b       0x7F1FF6A4
    {
            goto label_7F1FF6A4;
    }

label_7F1FF684:
    ctx->pc = 0x7F1FF684u;
    ctx->downcount -= 7;
    // 7F1FF684: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1FF688:
    ctx->pc = 0x7F1FF688u;
    // 7F1FF688: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FF68C:
    ctx->pc = 0x7F1FF68Cu;
    // 7F1FF68C: stw     r0, 1288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1288);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF690:
    ctx->pc = 0x7F1FF690u;
    // 7F1FF690: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1FF694:
    ctx->pc = 0x7F1FF694u;
    // 7F1FF694: li      r0, 200
    ctx->gpr[0] = (u32)(s32)(200);

label_7F1FF698:
    ctx->pc = 0x7F1FF698u;
    // 7F1FF698: stb     r4, -11396(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11396);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F1FF69C:
    ctx->pc = 0x7F1FF69Cu;
    // 7F1FF69C: stw     r0, 808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(808);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF6A0:
    ctx->pc = 0x7F1FF6A0u;
    ctx->downcount -= 1;
    // 7F1FF6A0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FF6A4:
    ctx->pc = 0x7F1FF6A4u;
    ctx->downcount -= 16;
    // 7F1FF6A4: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FF6A8:
    ctx->pc = 0x7F1FF6A8u;
    // 7F1FF6A8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FF6AC:
    ctx->pc = 0x7F1FF6ACu;
    // 7F1FF6AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FF6B0:
    ctx->pc = 0x7F1FF6B0u;
    // 7F1FF6B0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1FF6B4:
    ctx->pc = 0x7F1FF6B4u;
    // 7F1FF6B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FF6B8:
    ctx->pc = 0x7F1FF6B8u;
    ctx->downcount -= 5;
    // 7F1FF6B8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FF6BC:
    ctx->pc = 0x7F1FF6BCu;
    // 7F1FF6BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FF6C0:
    ctx->pc = 0x7F1FF6C0u;
    // 7F1FF6C0: li      r3, 110
    ctx->gpr[3] = (u32)(s32)(110);

label_7F1FF6C4:
    ctx->pc = 0x7F1FF6C4u;
    // 7F1FF6C4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF6C8:
    ctx->pc = 0x7F1FF6C8u;
    // 7F1FF6C8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F1FF6CCu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F1FF6CC:
    ctx->pc = 0x7F1FF6CCu;
    ctx->downcount -= 1;
    // 7F1FF6CC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F1FF6D0u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F1FF6D0:
    ctx->pc = 0x7F1FF6D0u;
    ctx->downcount -= 4;
    // 7F1FF6D0: lis     r5, 32544
    ctx->gpr[5] = ((u32)(s32)(32544) << 16);

label_7F1FF6D4:
    ctx->pc = 0x7F1FF6D4u;
    // 7F1FF6D4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FF6D8:
    ctx->pc = 0x7F1FF6D8u;
    // 7F1FF6D8: addi    r3, r5, -2312
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-2312);

label_7F1FF6DC:
    ctx->pc = 0x7F1FF6DCu;
    // 7F1FF6DC: bl      0x7F0180E0
    {
            ctx->lr = 0x7F1FF6E0u;
            ctx->pc = 0x7F0180E0u;
            return;
    }

label_7F1FF6E0:
    ctx->pc = 0x7F1FF6E0u;
    ctx->downcount -= 7;
    // 7F1FF6E0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FF6E4:
    ctx->pc = 0x7F1FF6E4u;
    // 7F1FF6E4: lis     r3, 32544
    ctx->gpr[3] = ((u32)(s32)(32544) << 16);

label_7F1FF6E8:
    ctx->pc = 0x7F1FF6E8u;
    // 7F1FF6E8: addi    r3, r3, -2376
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2376);

label_7F1FF6EC:
    ctx->pc = 0x7F1FF6ECu;
    // 7F1FF6EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FF6F0:
    ctx->pc = 0x7F1FF6F0u;
    // 7F1FF6F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1FF6F4:
    ctx->pc = 0x7F1FF6F4u;
    // 7F1FF6F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FF6F8:
    ctx->pc = 0x7F1FF6F8u;
    ctx->downcount -= 21;
    // 7F1FF6F8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FF6FC:
    ctx->pc = 0x7F1FF6FCu;
    // 7F1FF6FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FF700:
    ctx->pc = 0x7F1FF700u;
    // 7F1FF700: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F1FF704:
    ctx->pc = 0x7F1FF704u;
    // 7F1FF704: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF708:
    ctx->pc = 0x7F1FF708u;
    // 7F1FF708: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FF70C:
    ctx->pc = 0x7F1FF70Cu;
    // 7F1FF70C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FF710:
    ctx->pc = 0x7F1FF710u;
    // 7F1FF710: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FF714:
    ctx->pc = 0x7F1FF714u;
    // 7F1FF714: addi    r3, r5, -5708
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-5708);

label_7F1FF718:
    ctx->pc = 0x7F1FF718u;
    // 7F1FF718: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FF71C:
    ctx->pc = 0x7F1FF71Cu;
    // 7F1FF71C: addi    r4, r29, 48
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(48);

label_7F1FF720:
    ctx->pc = 0x7F1FF720u;
    // 7F1FF720: bl      0x800261D8
    {
            ctx->lr = 0x7F1FF724u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F1FF724:
    ctx->pc = 0x7F1FF724u;
    ctx->downcount -= 3;
    // 7F1FF724: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FF728:
    ctx->pc = 0x7F1FF728u;
    // 7F1FF728: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FF72C:
    ctx->pc = 0x7F1FF72Cu;
    // 7F1FF72C: bl      0x7F114F50
    {
            ctx->lr = 0x7F1FF730u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F1FF730:
    ctx->pc = 0x7F1FF730u;
    ctx->downcount -= 5;
    // 7F1FF730: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F1FF734:
    ctx->pc = 0x7F1FF734u;
    // 7F1FF734: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F1FF738:
    ctx->pc = 0x7F1FF738u;
    // 7F1FF738: li      r5, 1296
    ctx->gpr[5] = (u32)(s32)(1296);

label_7F1FF73C:
    ctx->pc = 0x7F1FF73Cu;
    // 7F1FF73C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1FF740:
    ctx->pc = 0x7F1FF740u;
    // 7F1FF740: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1FF744u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1FF744:
    ctx->pc = 0x7F1FF744u;
    ctx->downcount -= 2;
    // 7F1FF744: or.   r31, r3, r3
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

label_7F1FF748:
    ctx->pc = 0x7F1FF748u;
    // 7F1FF748: bc    12, 2, 0x7F1FF804
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FF804;
        }
    }

label_7F1FF74C:
    ctx->pc = 0x7F1FF74Cu;
    ctx->downcount -= 5;
    // 7F1FF74C: lis     r4, 32544
    ctx->gpr[4] = ((u32)(s32)(32544) << 16);

label_7F1FF750:
    ctx->pc = 0x7F1FF750u;
    // 7F1FF750: lis     r5, 32544
    ctx->gpr[5] = ((u32)(s32)(32544) << 16);

label_7F1FF754:
    ctx->pc = 0x7F1FF754u;
    // 7F1FF754: addi    r4, r4, -8096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8096);

label_7F1FF758:
    ctx->pc = 0x7F1FF758u;
    // 7F1FF758: addi    r5, r5, -6116
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-6116);

label_7F1FF75C:
    ctx->pc = 0x7F1FF75Cu;
    // 7F1FF75C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1FF760u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1FF760:
    ctx->pc = 0x7F1FF760u;
    ctx->downcount -= 28;
    // 7F1FF760: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FF764:
    ctx->pc = 0x7F1FF764u;
    // 7F1FF764: lis     r6, 32572
    ctx->gpr[6] = ((u32)(s32)(32572) << 16);

label_7F1FF768:
    ctx->pc = 0x7F1FF768u;
    // 7F1FF768: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FF76C:
    ctx->pc = 0x7F1FF76Cu;
    // 7F1FF76C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FF770:
    ctx->pc = 0x7F1FF770u;
    // 7F1FF770: ori     r0, r0, 0x0080
    ctx->gpr[0] = ctx->gpr[0] | 0x0080u;

label_7F1FF774:
    ctx->pc = 0x7F1FF774u;
    // 7F1FF774: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1FF778:
    ctx->pc = 0x7F1FF778u;
    // 7F1FF778: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF77C:
    ctx->pc = 0x7F1FF77Cu;
    // 7F1FF77C: addi    r5, r4, 13596
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(13596);

label_7F1FF780:
    ctx->pc = 0x7F1FF780u;
    // 7F1FF780: addi    r4, r3, 13600
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13600);

label_7F1FF784:
    ctx->pc = 0x7F1FF784u;
    // 7F1FF784: addi    r7, r6, 32548
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(32548);

label_7F1FF788:
    ctx->pc = 0x7F1FF788u;
    // 7F1FF788: stw     r8, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1FF78C:
    ctx->pc = 0x7F1FF78Cu;
    // 7F1FF78C: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F1FF790:
    ctx->pc = 0x7F1FF790u;
    // 7F1FF790: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1FF794:
    ctx->pc = 0x7F1FF794u;
    // 7F1FF794: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF794u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FF798:
    ctx->pc = 0x7F1FF798u;
    // 7F1FF798: stw     r8, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1FF79C:
    ctx->pc = 0x7F1FF79Cu;
    // 7F1FF79C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FF7A0:
    ctx->pc = 0x7F1FF7A0u;
    // 7F1FF7A0: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF7A0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FF7A4:
    ctx->pc = 0x7F1FF7A4u;
    // 7F1FF7A4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1FF7A8:
    ctx->pc = 0x7F1FF7A8u;
    // 7F1FF7A8: stw     r8, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1FF7AC:
    ctx->pc = 0x7F1FF7ACu;
    // 7F1FF7AC: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FF7B0:
    ctx->pc = 0x7F1FF7B0u;
    // 7F1FF7B0: stw     r7, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1FF7B4:
    ctx->pc = 0x7F1FF7B4u;
    // 7F1FF7B4: stw     r6, 1280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1280);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1FF7B8:
    ctx->pc = 0x7F1FF7B8u;
    // 7F1FF7B8: stw     r0, 812(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(812);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF7BC:
    ctx->pc = 0x7F1FF7BCu;
    // 7F1FF7BC: stfs     f1, 120(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF7BCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FF7C0:
    ctx->pc = 0x7F1FF7C0u;
    // 7F1FF7C0: stfs     f1, 124(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF7C0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FF7C4:
    ctx->pc = 0x7F1FF7C4u;
    // 7F1FF7C4: stfs     f1, 128(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF7C4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1FF7C8:
    ctx->pc = 0x7F1FF7C8u;
    // 7F1FF7C8: stfs     f0, 132(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF7C8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FF7CC:
    ctx->pc = 0x7F1FF7CCu;
    // 7F1FF7CC: bl      0x7F1FEB28
    {
            ctx->lr = 0x7F1FF7D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FEB28u;
                return;
            }
            goto label_7F1FEB28;
    }

label_7F1FF7D0:
    ctx->pc = 0x7F1FF7D0u;
    ctx->downcount -= 2;
    // 7F1FF7D0: cmpwi   r3, 0
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

label_7F1FF7D4:
    ctx->pc = 0x7F1FF7D4u;
    // 7F1FF7D4: bc    4, 0, 0x7F1FF7E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FF7E8;
        }
    }

label_7F1FF7D8:
    ctx->pc = 0x7F1FF7D8u;
    ctx->downcount -= 2;
    // 7F1FF7D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FF7DC:
    ctx->pc = 0x7F1FF7DCu;
    // 7F1FF7DC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1FF7E0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1FF7E0:
    ctx->pc = 0x7F1FF7E0u;
    ctx->downcount -= 2;
    // 7F1FF7E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1FF7E4:
    ctx->pc = 0x7F1FF7E4u;
    // 7F1FF7E4: b       0x7F1FF808
    {
            goto label_7F1FF808;
    }

label_7F1FF7E8:
    ctx->pc = 0x7F1FF7E8u;
    ctx->downcount -= 7;
    // 7F1FF7E8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1FF7EC:
    ctx->pc = 0x7F1FF7ECu;
    // 7F1FF7EC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FF7F0:
    ctx->pc = 0x7F1FF7F0u;
    // 7F1FF7F0: stw     r0, 1288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1288);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF7F4:
    ctx->pc = 0x7F1FF7F4u;
    // 7F1FF7F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1FF7F8:
    ctx->pc = 0x7F1FF7F8u;
    // 7F1FF7F8: li      r0, 200
    ctx->gpr[0] = (u32)(s32)(200);

label_7F1FF7FC:
    ctx->pc = 0x7F1FF7FCu;
    // 7F1FF7FC: stb     r4, -11396(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11396);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F1FF800:
    ctx->pc = 0x7F1FF800u;
    // 7F1FF800: stw     r0, 808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(808);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF804:
    ctx->pc = 0x7F1FF804u;
    ctx->downcount -= 1;
    // 7F1FF804: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FF808:
    ctx->pc = 0x7F1FF808u;
    ctx->downcount -= 16;
    // 7F1FF808: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FF80C:
    ctx->pc = 0x7F1FF80Cu;
    // 7F1FF80C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FF810:
    ctx->pc = 0x7F1FF810u;
    // 7F1FF810: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FF814:
    ctx->pc = 0x7F1FF814u;
    // 7F1FF814: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1FF818:
    ctx->pc = 0x7F1FF818u;
    // 7F1FF818: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FF81C:
    ctx->pc = 0x7F1FF81Cu;
    ctx->downcount -= 4;
    // 7F1FF81C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FF820:
    ctx->pc = 0x7F1FF820u;
    // 7F1FF820: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FF824:
    ctx->pc = 0x7F1FF824u;
    // 7F1FF824: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF828:
    ctx->pc = 0x7F1FF828u;
    // 7F1FF828: bl      0x7F1FF864
    {
            ctx->lr = 0x7F1FF82Cu;
            goto label_7F1FF864;
    }

label_7F1FF82C:
    ctx->pc = 0x7F1FF82Cu;
    ctx->downcount -= 31;
    // 7F1FF82C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1FF830:
    ctx->pc = 0x7F1FF830u;
    // 7F1FF830: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FF834:
    ctx->pc = 0x7F1FF834u;
    // 7F1FF834: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FF838:
    ctx->pc = 0x7F1FF838u;
    // 7F1FF838: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FF83C:
    ctx->pc = 0x7F1FF83Cu;
    // 7F1FF83C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF840:
    ctx->pc = 0x7F1FF840u;
    // 7F1FF840: lfd     f2, 13616(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF840u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13616);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FF844:
    ctx->pc = 0x7F1FF844u;
    // 7F1FF844: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF844u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FF848:
    ctx->pc = 0x7F1FF848u;
    // 7F1FF848: lfs     f0, 13612(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF848u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13612);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FF84C:
    ctx->pc = 0x7F1FF84Cu;
    // 7F1FF84C: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1FF84Cu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1FF850:
    ctx->pc = 0x7F1FF850u;
    // 7F1FF850: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FF854:
    ctx->pc = 0x7F1FF854u;
    // 7F1FF854: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FF854u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F1FF858:
    ctx->pc = 0x7F1FF858u;
    // 7F1FF858: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FF85C:
    ctx->pc = 0x7F1FF85Cu;
    // 7F1FF85C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1FF860:
    ctx->pc = 0x7F1FF860u;
    // 7F1FF860: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FF864:
    ctx->pc = 0x7F1FF864u;
    ctx->downcount -= 13;
    // 7F1FF864: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1FF868:
    ctx->pc = 0x7F1FF868u;
    // 7F1FF868: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F1FF86C:
    ctx->pc = 0x7F1FF86Cu;
    // 7F1FF86C: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F1FF870:
    ctx->pc = 0x7F1FF870u;
    // 7F1FF870: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FF874:
    ctx->pc = 0x7F1FF874u;
    // 7F1FF874: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F1FF878:
    ctx->pc = 0x7F1FF878u;
    // 7F1FF878: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F1FF87C:
    ctx->pc = 0x7F1FF87Cu;
    // 7F1FF87C: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1FF880:
    ctx->pc = 0x7F1FF880u;
    // 7F1FF880: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FF884:
    ctx->pc = 0x7F1FF884u;
    // 7F1FF884: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FF888:
    ctx->pc = 0x7F1FF888u;
    ctx->downcount -= 20;
    // 7F1FF888: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FF88C:
    ctx->pc = 0x7F1FF88Cu;
    // 7F1FF88C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FF890:
    ctx->pc = 0x7F1FF890u;
    // 7F1FF890: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F1FF894:
    ctx->pc = 0x7F1FF894u;
    // 7F1FF894: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF898:
    ctx->pc = 0x7F1FF898u;
    // 7F1FF898: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FF89C:
    ctx->pc = 0x7F1FF89Cu;
    // 7F1FF89C: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FF8A0:
    ctx->pc = 0x7F1FF8A0u;
    // 7F1FF8A0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FF8A4:
    ctx->pc = 0x7F1FF8A4u;
    // 7F1FF8A4: lwz     r0, -11368(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-11368);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FF8A8:
    ctx->pc = 0x7F1FF8A8u;
    // 7F1FF8A8: cmplwi  r0, 0x0000
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

label_7F1FF8AC:
    ctx->pc = 0x7F1FF8ACu;
    // 7F1FF8AC: bc    12, 2, 0x7F1FF8C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FF8C4;
        }
    }

label_7F1FF8B0:
    ctx->pc = 0x7F1FF8B0u;
    ctx->downcount -= 1;
    // 7F1FF8B0: bl      0x7F1FFB7C
    {
            ctx->lr = 0x7F1FF8B4u;
            goto label_7F1FFB7C;
    }

label_7F1FF8B4:
    ctx->pc = 0x7F1FF8B4u;
    ctx->downcount -= 2;
    // 7F1FF8B4: cmpwi   r3, 0
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

label_7F1FF8B8:
    ctx->pc = 0x7F1FF8B8u;
    // 7F1FF8B8: bc    12, 2, 0x7F1FF8C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FF8C4;
        }
    }

label_7F1FF8BC:
    ctx->pc = 0x7F1FF8BCu;
    ctx->downcount -= 2;
    // 7F1FF8BC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1FF8C0:
    ctx->pc = 0x7F1FF8C0u;
    // 7F1FF8C0: b       0x7F1FF990
    {
            goto label_7F1FF990;
    }

label_7F1FF8C4:
    ctx->pc = 0x7F1FF8C4u;
    ctx->downcount -= 4;
    // 7F1FF8C4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FF8C8:
    ctx->pc = 0x7F1FF8C8u;
    // 7F1FF8C8: lwz     r30, -11376(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11376);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F1FF8CC:
    ctx->pc = 0x7F1FF8CCu;
    // 7F1FF8CC: cmplwi  r30, 0x0000
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

label_7F1FF8D0:
    ctx->pc = 0x7F1FF8D0u;
    // 7F1FF8D0: bc    12, 2, 0x7F1FF970
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FF970;
        }
    }

label_7F1FF8D4:
    ctx->pc = 0x7F1FF8D4u;
    ctx->downcount -= 3;
    // 7F1FF8D4: addi    r28, r30, 64
    ctx->gpr[28] = ctx->gpr[30] + (u32)(s32)(64);

label_7F1FF8D8:
    ctx->pc = 0x7F1FF8D8u;
    // 7F1FF8D8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F1FF8DC:
    ctx->pc = 0x7F1FF8DCu;
    // 7F1FF8DC: b       0x7F1FF964
    {
            goto label_7F1FF964;
    }

label_7F1FF8E0:
    ctx->downcount -= 4;
    // 7F1FF8E0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F1FF8E4:
    // 7F1FF8E4: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1FF8E8:
    // 7F1FF8E8: addi    r5, r28, 16
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(16);

label_7F1FF8EC:
    // 7F1FF8EC: bl      0x7F1FF9A4
    {
            ctx->lr = 0x7F1FF8F0u;
            goto label_7F1FF9A4;
    }

label_7F1FF8F0:
    ctx->downcount -= 2;
    // 7F1FF8F0: cmpwi   r3, 0
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

label_7F1FF8F4:
    // 7F1FF8F4: bc    12, 2, 0x7F1FF95C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FF95C;
        }
    }

label_7F1FF8F8:
    ctx->downcount -= 5;
    // 7F1FF8F8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FF8FC:
    ctx->pc = 0x7F1FF8FCu;
    // 7F1FF8FC: lfs     f0, 13608(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF8FCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13608);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FF900:
    ctx->pc = 0x7F1FF900u;
    // 7F1FF900: stfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF900u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FF904:
    ctx->pc = 0x7F1FF904u;
    // 7F1FF904: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF904u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FF908:
    // 7F1FF908: bl      0x7F1FF81C
    {
            ctx->lr = 0x7F1FF90Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FF81Cu;
                return;
            }
            goto label_7F1FF81C;
    }

label_7F1FF90C:
    ctx->downcount -= 14;
    // 7F1FF90C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FF910:
    ctx->pc = 0x7F1FF910u;
    // 7F1FF910: lfs     f2, 52(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF910u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1FF914:
    // 7F1FF914: addi    r5, r3, 13628
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13628);

label_7F1FF918:
    // 7F1FF918: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FF91C:
    ctx->pc = 0x7F1FF91Cu;
    // 7F1FF91C: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF91Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FF920:
    // 7F1FF920: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F1FF924:
    // 7F1FF924: addi    r3, r3, 12832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F1FF928:
    ctx->pc = 0x7F1FF928u;
    // 7F1FF928: fadds   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FF928u)) return;
    ppc_fadds(ctx, 1, 0, 1);

label_7F1FF92C:
    ctx->pc = 0x7F1FF92Cu;
    // 7F1FF92C: lfs     f0, 13624(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF92Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13624);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FF930:
    // 7F1FF930: addi    r4, r28, 40
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(40);

label_7F1FF934:
    ctx->pc = 0x7F1FF934u;
    // 7F1FF934: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FF934u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F1FF938:
    ctx->pc = 0x7F1FF938u;
    // 7F1FF938: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FF938u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1FF93C:
    ctx->pc = 0x7F1FF93Cu;
    // 7F1FF93C: stfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF93Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FF940:
    // 7F1FF940: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F1FF944u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F1FF944:
    ctx->downcount -= 4;
    // 7F1FF944: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FF948:
    // 7F1FF948: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FF94C:
    // 7F1FF94C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1FF950:
    // 7F1FF950: bl      0x7F3B3648
    {
            ctx->lr = 0x7F1FF954u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F1FF954:
    ctx->downcount -= 2;
    // 7F1FF954: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1FF958:
    // 7F1FF958: b       0x7F1FF990
    {
            goto label_7F1FF990;
    }

label_7F1FF95C:
    ctx->downcount -= 2;
    // 7F1FF95C: addi    r28, r28, 56
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(56);

label_7F1FF960:
    // 7F1FF960: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F1FF964:
    ctx->pc = 0x7F1FF964u;
    ctx->downcount -= 3;
    // 7F1FF964: lwz     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FF968:
    // 7F1FF968: cmpw    r29, r0
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

label_7F1FF96C:
    // 7F1FF96C: bc    12, 0, 0x7F1FF8E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FF8E0u;
                return;
            }
            goto label_7F1FF8E0;
        }
    }

label_7F1FF970:
    ctx->pc = 0x7F1FF970u;
    ctx->downcount -= 8;
    // 7F1FF970: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1FF974:
    ctx->pc = 0x7F1FF974u;
    // 7F1FF974: lfsu     f0, -4824(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF974u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-4824);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
        ctx->gpr[4] = ea;
    }

label_7F1FF978:
    ctx->pc = 0x7F1FF978u;
    // 7F1FF978: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1FF97C:
    ctx->pc = 0x7F1FF97Cu;
    // 7F1FF97C: stfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF97Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FF980:
    ctx->pc = 0x7F1FF980u;
    // 7F1FF980: lfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF980u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FF984:
    ctx->pc = 0x7F1FF984u;
    // 7F1FF984: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF984u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FF988:
    ctx->pc = 0x7F1FF988u;
    // 7F1FF988: lfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF988u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FF98C:
    ctx->pc = 0x7F1FF98Cu;
    // 7F1FF98C: stfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF98Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FF990:
    ctx->pc = 0x7F1FF990u;
    ctx->downcount -= 16;
    // 7F1FF990: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FF994:
    ctx->pc = 0x7F1FF994u;
    // 7F1FF994: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FF998:
    ctx->pc = 0x7F1FF998u;
    // 7F1FF998: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FF99C:
    ctx->pc = 0x7F1FF99Cu;
    // 7F1FF99C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1FF9A0:
    ctx->pc = 0x7F1FF9A0u;
    // 7F1FF9A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FF9A4:
    ctx->pc = 0x7F1FF9A4u;
    ctx->downcount -= 20;
    // 7F1FF9A4: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FF9A8:
    ctx->pc = 0x7F1FF9A8u;
    // 7F1FF9A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FF9AC:
    ctx->pc = 0x7F1FF9ACu;
    // 7F1FF9AC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FF9B0:
    ctx->pc = 0x7F1FF9B0u;
    // 7F1FF9B0: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FF9B4:
    ctx->pc = 0x7F1FF9B4u;
    // 7F1FF9B4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FF9B8:
    ctx->pc = 0x7F1FF9B8u;
    // 7F1FF9B8: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1FF9BC:
    ctx->pc = 0x7F1FF9BCu;
    // 7F1FF9BC: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FF9C0:
    ctx->pc = 0x7F1FF9C0u;
    // 7F1FF9C0: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1FF9C4:
    ctx->pc = 0x7F1FF9C4u;
    // 7F1FF9C4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FF9C8:
    ctx->pc = 0x7F1FF9C8u;
    // 7F1FF9C8: bl      0x800261D8
    {
            ctx->lr = 0x7F1FF9CCu;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F1FF9CC:
    ctx->pc = 0x7F1FF9CCu;
    ctx->downcount -= 4;
    // 7F1FF9CC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FF9D0:
    ctx->pc = 0x7F1FF9D0u;
    // 7F1FF9D0: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FF9D4:
    ctx->pc = 0x7F1FF9D4u;
    // 7F1FF9D4: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1FF9D8:
    ctx->pc = 0x7F1FF9D8u;
    // 7F1FF9D8: bl      0x800261D8
    {
            ctx->lr = 0x7F1FF9DCu;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F1FF9DC:
    ctx->pc = 0x7F1FF9DCu;
    ctx->downcount -= 7;
    // 7F1FF9DC: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF9DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FF9E0:
    ctx->pc = 0x7F1FF9E0u;
    // 7F1FF9E0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FF9E4:
    ctx->pc = 0x7F1FF9E4u;
    // 7F1FF9E4: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF9E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FF9E8:
    ctx->pc = 0x7F1FF9E8u;
    // 7F1FF9E8: lfs     f2, 13608(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF9E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13608);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1FF9EC:
    ctx->pc = 0x7F1FF9ECu;
    // 7F1FF9EC: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FF9ECu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1FF9F0:
    ctx->pc = 0x7F1FF9F0u;
    // 7F1FF9F0: fcmpo   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1FF9F0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], true);

label_7F1FF9F4:
    ctx->pc = 0x7F1FF9F4u;
    // 7F1FF9F4: bc    4, 0, 0x7F1FFA28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FFA28;
        }
    }

label_7F1FF9F8:
    ctx->pc = 0x7F1FF9F8u;
    ctx->downcount -= 5;
    // 7F1FF9F8: lfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF9F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FF9FC:
    ctx->pc = 0x7F1FF9FCu;
    // 7F1FF9FC: lfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FF9FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FFA00:
    ctx->pc = 0x7F1FFA00u;
    // 7F1FFA00: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FFA00u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1FFA04:
    ctx->pc = 0x7F1FFA04u;
    // 7F1FFA04: fcmpo   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1FFA04u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], true);

label_7F1FFA08:
    ctx->pc = 0x7F1FFA08u;
    // 7F1FFA08: bc    4, 0, 0x7F1FFA28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FFA28;
        }
    }

label_7F1FFA0C:
    ctx->pc = 0x7F1FFA0Cu;
    ctx->downcount -= 5;
    // 7F1FFA0C: lfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFA0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FFA10:
    ctx->pc = 0x7F1FFA10u;
    // 7F1FFA10: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFA10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FFA14:
    ctx->pc = 0x7F1FFA14u;
    // 7F1FFA14: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FFA14u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1FFA18:
    ctx->pc = 0x7F1FFA18u;
    // 7F1FFA18: fcmpo   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1FFA18u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], true);

label_7F1FFA1C:
    ctx->pc = 0x7F1FFA1Cu;
    // 7F1FFA1C: bc    4, 0, 0x7F1FFA28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FFA28;
        }
    }

label_7F1FFA20:
    ctx->pc = 0x7F1FFA20u;
    ctx->downcount -= 2;
    // 7F1FFA20: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1FFA24:
    ctx->pc = 0x7F1FFA24u;
    // 7F1FFA24: b       0x7F1FFA2C
    {
            goto label_7F1FFA2C;
    }

label_7F1FFA28:
    ctx->pc = 0x7F1FFA28u;
    ctx->downcount -= 1;
    // 7F1FFA28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1FFA2C:
    ctx->pc = 0x7F1FFA2Cu;
    ctx->downcount -= 16;
    // 7F1FFA2C: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FFA30:
    ctx->pc = 0x7F1FFA30u;
    // 7F1FFA30: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FFA34:
    ctx->pc = 0x7F1FFA34u;
    // 7F1FFA34: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FFA38:
    ctx->pc = 0x7F1FFA38u;
    // 7F1FFA38: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1FFA3C:
    ctx->pc = 0x7F1FFA3Cu;
    // 7F1FFA3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FFA40:
    ctx->pc = 0x7F1FFA40u;
    ctx->downcount -= 22;
    // 7F1FFA40: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FFA44:
    ctx->pc = 0x7F1FFA44u;
    // 7F1FFA44: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FFA48:
    ctx->pc = 0x7F1FFA48u;
    // 7F1FFA48: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFA4C:
    ctx->pc = 0x7F1FFA4Cu;
    // 7F1FFA4C: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFA4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1FFA50:
    ctx->pc = 0x7F1FFA50u;
    // 7F1FFA50: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FFA50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1FFA50u);
        if (ctx->exception) return;
    }

label_7F1FFA54:
    ctx->pc = 0x7F1FFA54u;
    // 7F1FFA54: stmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FFA58:
    ctx->pc = 0x7F1FFA58u;
    // 7F1FFA58: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F1FFA5C:
    ctx->pc = 0x7F1FFA5Cu;
    // 7F1FFA5C: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FFA60:
    ctx->pc = 0x7F1FFA60u;
    // 7F1FFA60: lwz     r0, -11368(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-11368);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FFA64:
    ctx->pc = 0x7F1FFA64u;
    // 7F1FFA64: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FFA68:
    ctx->pc = 0x7F1FFA68u;
    // 7F1FFA68: cmplwi  r0, 0x0000
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

label_7F1FFA6C:
    ctx->pc = 0x7F1FFA6Cu;
    // 7F1FFA6C: bc    12, 2, 0x7F1FFA84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FFA84;
        }
    }

label_7F1FFA70:
    ctx->pc = 0x7F1FFA70u;
    ctx->downcount -= 1;
    // 7F1FFA70: bl      0x7F1FFB7C
    {
            ctx->lr = 0x7F1FFA74u;
            goto label_7F1FFB7C;
    }

label_7F1FFA74:
    ctx->pc = 0x7F1FFA74u;
    ctx->downcount -= 2;
    // 7F1FFA74: cmpwi   r3, 0
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

label_7F1FFA78:
    ctx->pc = 0x7F1FFA78u;
    // 7F1FFA78: bc    12, 2, 0x7F1FFA84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FFA84;
        }
    }

label_7F1FFA7C:
    ctx->pc = 0x7F1FFA7Cu;
    ctx->downcount -= 2;
    // 7F1FFA7C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1FFA80:
    ctx->pc = 0x7F1FFA80u;
    // 7F1FFA80: b       0x7F1FFB60
    {
            goto label_7F1FFB60;
    }

label_7F1FFA84:
    ctx->pc = 0x7F1FFA84u;
    ctx->downcount -= 4;
    // 7F1FFA84: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F1FFA88:
    ctx->pc = 0x7F1FFA88u;
    // 7F1FFA88: lwz     r30, -11376(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-11376);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F1FFA8C:
    ctx->pc = 0x7F1FFA8Cu;
    // 7F1FFA8C: cmplwi  r30, 0x0000
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

label_7F1FFA90:
    ctx->pc = 0x7F1FFA90u;
    // 7F1FFA90: bc    12, 2, 0x7F1FFB38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FFB38;
        }
    }

label_7F1FFA94:
    ctx->pc = 0x7F1FFA94u;
    ctx->downcount -= 3;
    // 7F1FFA94: addi    r28, r30, 64
    ctx->gpr[28] = ctx->gpr[30] + (u32)(s32)(64);

label_7F1FFA98:
    ctx->pc = 0x7F1FFA98u;
    // 7F1FFA98: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F1FFA9C:
    ctx->pc = 0x7F1FFA9Cu;
    // 7F1FFA9C: b       0x7F1FFB2C
    {
            goto label_7F1FFB2C;
    }

label_7F1FFAA0:
    ctx->downcount -= 4;
    // 7F1FFAA0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F1FFAA4:
    // 7F1FFAA4: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1FFAA8:
    // 7F1FFAA8: addi    r5, r28, 16
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(16);

label_7F1FFAAC:
    // 7F1FFAAC: bl      0x7F1FF9A4
    {
            ctx->lr = 0x7F1FFAB0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FF9A4u;
                return;
            }
            goto label_7F1FF9A4;
    }

label_7F1FFAB0:
    ctx->downcount -= 2;
    // 7F1FFAB0: cmpwi   r3, 0
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

label_7F1FFAB4:
    // 7F1FFAB4: bc    12, 2, 0x7F1FFB24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FFB24;
        }
    }

label_7F1FFAB8:
    ctx->downcount -= 5;
    // 7F1FFAB8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FFABC:
    ctx->pc = 0x7F1FFABCu;
    // 7F1FFABC: lfs     f0, 13608(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFABCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13608);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FFAC0:
    ctx->pc = 0x7F1FFAC0u;
    // 7F1FFAC0: stfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFAC0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FFAC4:
    ctx->pc = 0x7F1FFAC4u;
    // 7F1FFAC4: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFAC4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FFAC8:
    // 7F1FFAC8: bl      0x7F1FF81C
    {
            ctx->lr = 0x7F1FFACCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FF81Cu;
                return;
            }
            goto label_7F1FF81C;
    }

label_7F1FFACC:
    ctx->downcount -= 14;
    // 7F1FFACC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FFAD0:
    ctx->pc = 0x7F1FFAD0u;
    // 7F1FFAD0: lfs     f2, 52(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFAD0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1FFAD4:
    // 7F1FFAD4: addi    r5, r3, 13628
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13628);

label_7F1FFAD8:
    // 7F1FFAD8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FFADC:
    ctx->pc = 0x7F1FFADCu;
    // 7F1FFADC: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFADCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FFAE0:
    // 7F1FFAE0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F1FFAE4:
    // 7F1FFAE4: addi    r3, r3, 12832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F1FFAE8:
    ctx->pc = 0x7F1FFAE8u;
    // 7F1FFAE8: fadds   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FFAE8u)) return;
    ppc_fadds(ctx, 1, 0, 1);

label_7F1FFAEC:
    ctx->pc = 0x7F1FFAECu;
    // 7F1FFAEC: lfs     f0, 13624(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFAECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13624);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FFAF0:
    // 7F1FFAF0: addi    r4, r28, 40
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(40);

label_7F1FFAF4:
    ctx->pc = 0x7F1FFAF4u;
    // 7F1FFAF4: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FFAF4u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F1FFAF8:
    ctx->pc = 0x7F1FFAF8u;
    // 7F1FFAF8: fmuls   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FFAF8u)) return;
    ppc_fmuls(ctx, 31, 0, 1);

label_7F1FFAFC:
    ctx->pc = 0x7F1FFAFCu;
    // 7F1FFAFC: stfs     f31, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFAFCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F1FFB00:
    // 7F1FFB00: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F1FFB04u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F1FFB04:
    ctx->downcount -= 4;
    // 7F1FFB04: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FFB08:
    // 7F1FFB08: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FFB0C:
    // 7F1FFB0C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1FFB10:
    // 7F1FFB10: bl      0x7F3B3648
    {
            ctx->lr = 0x7F1FFB14u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F1FFB14:
    ctx->pc = 0x7F1FFB14u;
    ctx->downcount -= 4;
    // 7F1FFB14: fctiwz    f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1FFB14u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[31], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1FFB18:
    ctx->pc = 0x7F1FFB18u;
    // 7F1FFB18: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFB18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1FFB1C:
    ctx->pc = 0x7F1FFB1Cu;
    // 7F1FFB1C: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FFB20:
    // 7F1FFB20: b       0x7F1FFB60
    {
            goto label_7F1FFB60;
    }

label_7F1FFB24:
    ctx->downcount -= 2;
    // 7F1FFB24: addi    r28, r28, 56
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(56);

label_7F1FFB28:
    // 7F1FFB28: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F1FFB2C:
    ctx->pc = 0x7F1FFB2Cu;
    ctx->downcount -= 3;
    // 7F1FFB2C: lwz     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FFB30:
    // 7F1FFB30: cmpw    r29, r0
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

label_7F1FFB34:
    // 7F1FFB34: bc    12, 0, 0x7F1FFAA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1FFAA0u;
                return;
            }
            goto label_7F1FFAA0;
        }
    }

label_7F1FFB38:
    ctx->pc = 0x7F1FFB38u;
    ctx->downcount -= 10;
    // 7F1FFB38: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1FFB3C:
    ctx->pc = 0x7F1FFB3Cu;
    // 7F1FFB3C: lfsu     f0, -4824(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFB3Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-4824);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
        ctx->gpr[4] = ea;
    }

label_7F1FFB40:
    ctx->pc = 0x7F1FFB40u;
    // 7F1FFB40: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1FFB44:
    ctx->pc = 0x7F1FFB44u;
    // 7F1FFB44: stfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFB44u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FFB48:
    ctx->pc = 0x7F1FFB48u;
    // 7F1FFB48: addi    r3, r3, 14208
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14208);

label_7F1FFB4C:
    ctx->pc = 0x7F1FFB4Cu;
    // 7F1FFB4C: lfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFB4Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FFB50:
    ctx->pc = 0x7F1FFB50u;
    // 7F1FFB50: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFB50u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FFB54:
    ctx->pc = 0x7F1FFB54u;
    // 7F1FFB54: lfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFB54u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FFB58:
    ctx->pc = 0x7F1FFB58u;
    // 7F1FFB58: stfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFB58u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FFB5C:
    ctx->pc = 0x7F1FFB5Cu;
    // 7F1FFB5C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FFB60:
    ctx->pc = 0x7F1FFB60u;
    ctx->downcount -= 18;
    // 7F1FFB60: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1FFB60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1FFB60u);
        if (ctx->exception) return;
    }

label_7F1FFB64:
    ctx->pc = 0x7F1FFB64u;
    // 7F1FFB64: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFB64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FFB68:
    ctx->pc = 0x7F1FFB68u;
    // 7F1FFB68: lmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FFB6C:
    ctx->pc = 0x7F1FFB6Cu;
    // 7F1FFB6C: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FFB70:
    ctx->pc = 0x7F1FFB70u;
    // 7F1FFB70: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FFB74:
    ctx->pc = 0x7F1FFB74u;
    // 7F1FFB74: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F1FFB78:
    ctx->pc = 0x7F1FFB78u;
    // 7F1FFB78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FFB7C:
    ctx->pc = 0x7F1FFB7Cu;
    ctx->downcount -= 20;
    // 7F1FFB7C: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FFB80:
    ctx->pc = 0x7F1FFB80u;
    // 7F1FFB80: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FFB84:
    ctx->pc = 0x7F1FFB84u;
    // 7F1FFB84: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F1FFB88:
    ctx->pc = 0x7F1FFB88u;
    // 7F1FFB88: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFB8C:
    ctx->pc = 0x7F1FFB8Cu;
    // 7F1FFB8C: stmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FFB90:
    ctx->pc = 0x7F1FFB90u;
    // 7F1FFB90: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FFB94:
    ctx->pc = 0x7F1FFB94u;
    // 7F1FFB94: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FFB98:
    ctx->pc = 0x7F1FFB98u;
    // 7F1FFB98: lwz     r31, -11368(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-11368);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1FFB9C:
    ctx->pc = 0x7F1FFB9Cu;
    // 7F1FFB9C: cmplwi  r31, 0x0000
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

label_7F1FFBA0:
    ctx->pc = 0x7F1FFBA0u;
    // 7F1FFBA0: bc    12, 2, 0x7F1FFC44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FFC44;
        }
    }

label_7F1FFBA4:
    ctx->pc = 0x7F1FFBA4u;
    ctx->downcount -= 4;
    // 7F1FFBA4: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FFBA8:
    ctx->pc = 0x7F1FFBA8u;
    // 7F1FFBA8: addi    r4, r31, 56
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(56);

label_7F1FFBAC:
    ctx->pc = 0x7F1FFBACu;
    // 7F1FFBAC: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1FFBB0:
    ctx->pc = 0x7F1FFBB0u;
    // 7F1FFBB0: bl      0x800261B4
    {
            ctx->lr = 0x7F1FFBB4u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1FFBB4:
    ctx->pc = 0x7F1FFBB4u;
    ctx->downcount -= 4;
    // 7F1FFBB4: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FFBB8:
    ctx->pc = 0x7F1FFBB8u;
    // 7F1FFBB8: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_7F1FFBBC:
    ctx->pc = 0x7F1FFBBCu;
    // 7F1FFBBC: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1FFBC0:
    ctx->pc = 0x7F1FFBC0u;
    // 7F1FFBC0: bl      0x800261B4
    {
            ctx->lr = 0x7F1FFBC4u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1FFBC4:
    ctx->pc = 0x7F1FFBC4u;
    ctx->downcount -= 4;
    // 7F1FFBC4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1FFBC8:
    ctx->pc = 0x7F1FFBC8u;
    // 7F1FFBC8: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1FFBCC:
    ctx->pc = 0x7F1FFBCCu;
    // 7F1FFBCC: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1FFBD0:
    ctx->pc = 0x7F1FFBD0u;
    // 7F1FFBD0: bl      0x7F1FFCE4
    {
            ctx->lr = 0x7F1FFBD4u;
            goto label_7F1FFCE4;
    }

label_7F1FFBD4:
    ctx->pc = 0x7F1FFBD4u;
    ctx->downcount -= 2;
    // 7F1FFBD4: cmpwi   r3, 0
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

label_7F1FFBD8:
    ctx->pc = 0x7F1FFBD8u;
    // 7F1FFBD8: bc    12, 2, 0x7F1FFC44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1FFC44;
        }
    }

label_7F1FFBDC:
    ctx->pc = 0x7F1FFBDCu;
    ctx->downcount -= 5;
    // 7F1FFBDC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FFBE0:
    ctx->pc = 0x7F1FFBE0u;
    // 7F1FFBE0: lfs     f0, 13632(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFBE0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13632);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FFBE4:
    ctx->pc = 0x7F1FFBE4u;
    // 7F1FFBE4: stfs     f0, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFBE4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FFBE8:
    ctx->pc = 0x7F1FFBE8u;
    // 7F1FFBE8: stfs     f0, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFBE8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FFBEC:
    ctx->pc = 0x7F1FFBECu;
    // 7F1FFBEC: bl      0x7F1FFC78
    {
            ctx->lr = 0x7F1FFBF0u;
            goto label_7F1FFC78;
    }

label_7F1FFBF0:
    ctx->pc = 0x7F1FFBF0u;
    ctx->downcount -= 15;
    // 7F1FFBF0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FFBF4:
    ctx->pc = 0x7F1FFBF4u;
    // 7F1FFBF4: lfs     f2, 156(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFBF4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1FFBF8:
    ctx->pc = 0x7F1FFBF8u;
    // 7F1FFBF8: addi    r5, r3, 13640
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13640);

label_7F1FFBFC:
    ctx->pc = 0x7F1FFBFCu;
    // 7F1FFBFC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FFC00:
    ctx->pc = 0x7F1FFC00u;
    // 7F1FFC00: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFC00u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FFC04:
    ctx->pc = 0x7F1FFC04u;
    // 7F1FFC04: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F1FFC08:
    ctx->pc = 0x7F1FFC08u;
    // 7F1FFC08: addi    r3, r3, 12832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F1FFC0C:
    ctx->pc = 0x7F1FFC0Cu;
    // 7F1FFC0C: fadds   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FFC0Cu)) return;
    ppc_fadds(ctx, 1, 0, 1);

label_7F1FFC10:
    ctx->pc = 0x7F1FFC10u;
    // 7F1FFC10: lfs     f0, 13636(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFC10u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13636);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FFC14:
    ctx->pc = 0x7F1FFC14u;
    // 7F1FFC14: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FFC14u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F1FFC18:
    ctx->pc = 0x7F1FFC18u;
    // 7F1FFC18: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FFC18u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F1FFC1C:
    ctx->pc = 0x7F1FFC1Cu;
    // 7F1FFC1C: stfs     f0, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFC1Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FFC20:
    ctx->pc = 0x7F1FFC20u;
    // 7F1FFC20: lwz     r4, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FFC24:
    ctx->pc = 0x7F1FFC24u;
    // 7F1FFC24: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

label_7F1FFC28:
    ctx->pc = 0x7F1FFC28u;
    // 7F1FFC28: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F1FFC2Cu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F1FFC2C:
    ctx->pc = 0x7F1FFC2Cu;
    ctx->downcount -= 4;
    // 7F1FFC2C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FFC30:
    ctx->pc = 0x7F1FFC30u;
    // 7F1FFC30: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FFC34:
    ctx->pc = 0x7F1FFC34u;
    // 7F1FFC34: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1FFC38:
    ctx->pc = 0x7F1FFC38u;
    // 7F1FFC38: bl      0x7F3B3648
    {
            ctx->lr = 0x7F1FFC3Cu;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F1FFC3C:
    ctx->pc = 0x7F1FFC3Cu;
    ctx->downcount -= 2;
    // 7F1FFC3C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1FFC40:
    ctx->pc = 0x7F1FFC40u;
    // 7F1FFC40: b       0x7F1FFC64
    {
            goto label_7F1FFC64;
    }

label_7F1FFC44:
    ctx->pc = 0x7F1FFC44u;
    ctx->downcount -= 8;
    // 7F1FFC44: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1FFC48:
    ctx->pc = 0x7F1FFC48u;
    // 7F1FFC48: lfsu     f0, -4824(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFC48u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-4824);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
        ctx->gpr[4] = ea;
    }

label_7F1FFC4C:
    ctx->pc = 0x7F1FFC4Cu;
    // 7F1FFC4C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1FFC50:
    ctx->pc = 0x7F1FFC50u;
    // 7F1FFC50: stfs     f0, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFC50u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FFC54:
    ctx->pc = 0x7F1FFC54u;
    // 7F1FFC54: lfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFC54u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FFC58:
    ctx->pc = 0x7F1FFC58u;
    // 7F1FFC58: stfs     f0, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFC58u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FFC5C:
    ctx->pc = 0x7F1FFC5Cu;
    // 7F1FFC5C: lfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFC5Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FFC60:
    ctx->pc = 0x7F1FFC60u;
    // 7F1FFC60: stfs     f0, 8(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFC60u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FFC64:
    ctx->pc = 0x7F1FFC64u;
    ctx->downcount -= 16;
    // 7F1FFC64: lmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FFC68:
    ctx->pc = 0x7F1FFC68u;
    // 7F1FFC68: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FFC6C:
    ctx->pc = 0x7F1FFC6Cu;
    // 7F1FFC6C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FFC70:
    ctx->pc = 0x7F1FFC70u;
    // 7F1FFC70: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F1FFC74:
    ctx->pc = 0x7F1FFC74u;
    // 7F1FFC74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FFC78:
    ctx->pc = 0x7F1FFC78u;
    ctx->downcount -= 4;
    // 7F1FFC78: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FFC7C:
    ctx->pc = 0x7F1FFC7Cu;
    // 7F1FFC7C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FFC80:
    ctx->pc = 0x7F1FFC80u;
    // 7F1FFC80: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFC84:
    ctx->pc = 0x7F1FFC84u;
    // 7F1FFC84: bl      0x7F1FFCC0
    {
            ctx->lr = 0x7F1FFC88u;
            goto label_7F1FFCC0;
    }

label_7F1FFC88:
    ctx->pc = 0x7F1FFC88u;
    ctx->downcount -= 31;
    // 7F1FFC88: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1FFC8C:
    ctx->pc = 0x7F1FFC8Cu;
    // 7F1FFC8C: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FFC90:
    ctx->pc = 0x7F1FFC90u;
    // 7F1FFC90: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1FFC94:
    ctx->pc = 0x7F1FFC94u;
    // 7F1FFC94: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FFC98:
    ctx->pc = 0x7F1FFC98u;
    // 7F1FFC98: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFC9C:
    ctx->pc = 0x7F1FFC9Cu;
    // 7F1FFC9C: lfd     f2, 13648(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFC9Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13648);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FFCA0:
    ctx->pc = 0x7F1FFCA0u;
    // 7F1FFCA0: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFCA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FFCA4:
    ctx->pc = 0x7F1FFCA4u;
    // 7F1FFCA4: lfs     f0, 13644(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFCA4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13644);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FFCA8:
    ctx->pc = 0x7F1FFCA8u;
    // 7F1FFCA8: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1FFCA8u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1FFCAC:
    ctx->pc = 0x7F1FFCACu;
    // 7F1FFCAC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FFCB0:
    ctx->pc = 0x7F1FFCB0u;
    // 7F1FFCB0: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FFCB0u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F1FFCB4:
    ctx->pc = 0x7F1FFCB4u;
    // 7F1FFCB4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FFCB8:
    ctx->pc = 0x7F1FFCB8u;
    // 7F1FFCB8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1FFCBC:
    ctx->pc = 0x7F1FFCBCu;
    // 7F1FFCBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FFCC0:
    ctx->pc = 0x7F1FFCC0u;
    ctx->downcount -= 13;
    // 7F1FFCC0: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1FFCC4:
    ctx->pc = 0x7F1FFCC4u;
    // 7F1FFCC4: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F1FFCC8:
    ctx->pc = 0x7F1FFCC8u;
    // 7F1FFCC8: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F1FFCCC:
    ctx->pc = 0x7F1FFCCCu;
    // 7F1FFCCC: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FFCD0:
    ctx->pc = 0x7F1FFCD0u;
    // 7F1FFCD0: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F1FFCD4:
    ctx->pc = 0x7F1FFCD4u;
    // 7F1FFCD4: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F1FFCD8:
    ctx->pc = 0x7F1FFCD8u;
    // 7F1FFCD8: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1FFCDC:
    ctx->pc = 0x7F1FFCDCu;
    // 7F1FFCDC: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FFCE0:
    ctx->pc = 0x7F1FFCE0u;
    // 7F1FFCE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FFCE4:
    ctx->pc = 0x7F1FFCE4u;
    ctx->downcount -= 20;
    // 7F1FFCE4: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FFCE8:
    ctx->pc = 0x7F1FFCE8u;
    // 7F1FFCE8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FFCEC:
    ctx->pc = 0x7F1FFCECu;
    // 7F1FFCEC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFCF0:
    ctx->pc = 0x7F1FFCF0u;
    // 7F1FFCF0: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FFCF4:
    ctx->pc = 0x7F1FFCF4u;
    // 7F1FFCF4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FFCF8:
    ctx->pc = 0x7F1FFCF8u;
    // 7F1FFCF8: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1FFCFC:
    ctx->pc = 0x7F1FFCFCu;
    // 7F1FFCFC: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1FFD00:
    ctx->pc = 0x7F1FFD00u;
    // 7F1FFD00: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1FFD04:
    ctx->pc = 0x7F1FFD04u;
    // 7F1FFD04: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FFD08:
    ctx->pc = 0x7F1FFD08u;
    // 7F1FFD08: bl      0x800261D8
    {
            ctx->lr = 0x7F1FFD0Cu;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F1FFD0C:
    ctx->pc = 0x7F1FFD0Cu;
    ctx->downcount -= 4;
    // 7F1FFD0C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1FFD10:
    ctx->pc = 0x7F1FFD10u;
    // 7F1FFD10: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FFD14:
    ctx->pc = 0x7F1FFD14u;
    // 7F1FFD14: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1FFD18:
    ctx->pc = 0x7F1FFD18u;
    // 7F1FFD18: bl      0x800261D8
    {
            ctx->lr = 0x7F1FFD1Cu;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F1FFD1C:
    ctx->pc = 0x7F1FFD1Cu;
    ctx->downcount -= 7;
    // 7F1FFD1C: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFD1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FFD20:
    ctx->pc = 0x7F1FFD20u;
    // 7F1FFD20: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FFD24:
    ctx->pc = 0x7F1FFD24u;
    // 7F1FFD24: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFD24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FFD28:
    ctx->pc = 0x7F1FFD28u;
    // 7F1FFD28: lfs     f2, 13632(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFD28u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13632);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1FFD2C:
    ctx->pc = 0x7F1FFD2Cu;
    // 7F1FFD2C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FFD2Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1FFD30:
    ctx->pc = 0x7F1FFD30u;
    // 7F1FFD30: fcmpo   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1FFD30u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], true);

label_7F1FFD34:
    ctx->pc = 0x7F1FFD34u;
    // 7F1FFD34: bc    4, 0, 0x7F1FFD68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FFD68;
        }
    }

label_7F1FFD38:
    ctx->pc = 0x7F1FFD38u;
    ctx->downcount -= 5;
    // 7F1FFD38: lfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFD38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FFD3C:
    ctx->pc = 0x7F1FFD3Cu;
    // 7F1FFD3C: lfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFD3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FFD40:
    ctx->pc = 0x7F1FFD40u;
    // 7F1FFD40: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FFD40u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1FFD44:
    ctx->pc = 0x7F1FFD44u;
    // 7F1FFD44: fcmpo   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1FFD44u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], true);

label_7F1FFD48:
    ctx->pc = 0x7F1FFD48u;
    // 7F1FFD48: bc    4, 0, 0x7F1FFD68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FFD68;
        }
    }

label_7F1FFD4C:
    ctx->pc = 0x7F1FFD4Cu;
    ctx->downcount -= 5;
    // 7F1FFD4C: lfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFD4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1FFD50:
    ctx->pc = 0x7F1FFD50u;
    // 7F1FFD50: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFD50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1FFD54:
    ctx->pc = 0x7F1FFD54u;
    // 7F1FFD54: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1FFD54u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F1FFD58:
    ctx->pc = 0x7F1FFD58u;
    // 7F1FFD58: fcmpo   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1FFD58u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], true);

label_7F1FFD5C:
    ctx->pc = 0x7F1FFD5Cu;
    // 7F1FFD5C: bc    4, 0, 0x7F1FFD68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1FFD68;
        }
    }

label_7F1FFD60:
    ctx->pc = 0x7F1FFD60u;
    ctx->downcount -= 2;
    // 7F1FFD60: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1FFD64:
    ctx->pc = 0x7F1FFD64u;
    // 7F1FFD64: b       0x7F1FFD6C
    {
            goto label_7F1FFD6C;
    }

label_7F1FFD68:
    ctx->pc = 0x7F1FFD68u;
    ctx->downcount -= 1;
    // 7F1FFD68: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1FFD6C:
    ctx->pc = 0x7F1FFD6Cu;
    ctx->downcount -= 16;
    // 7F1FFD6C: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1FFD70:
    ctx->pc = 0x7F1FFD70u;
    // 7F1FFD70: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FFD74:
    ctx->pc = 0x7F1FFD74u;
    // 7F1FFD74: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1FFD78:
    ctx->pc = 0x7F1FFD78u;
    // 7F1FFD78: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1FFD7C:
    ctx->pc = 0x7F1FFD7Cu;
    // 7F1FFD7C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1FC0EC;
        }
    }

label_7F1FFD80:
    ctx->pc = 0x7F1FFD80u;
    ctx->downcount -= 18;
    // 7F1FFD80: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1FFD84:
    ctx->pc = 0x7F1FFD84u;
    // 7F1FFD84: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1FFD88:
    ctx->pc = 0x7F1FFD88u;
    // 7F1FFD88: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFD8C:
    ctx->pc = 0x7F1FFD8Cu;
    // 7F1FFD8C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1FFD90:
    ctx->pc = 0x7F1FFD90u;
    // 7F1FFD90: stmw     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1FFD94:
    ctx->pc = 0x7F1FFD94u;
    // 7F1FFD94: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FFD98:
    ctx->pc = 0x7F1FFD98u;
    // 7F1FFD98: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FFD9C:
    ctx->pc = 0x7F1FFD9Cu;
    // 7F1FFD9C: bl      0x7F3C9624
    {
            ctx->lr = 0x7F1FFDA0u;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F1FFDA0:
    ctx->pc = 0x7F1FFDA0u;
    ctx->downcount -= 7;
    // 7F1FFDA0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1FFDA4:
    ctx->pc = 0x7F1FFDA4u;
    // 7F1FFDA4: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FFDA8:
    ctx->pc = 0x7F1FFDA8u;
    // 7F1FFDA8: addi    r0, r31, -1
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(-1);

label_7F1FFDAC:
    ctx->pc = 0x7F1FFDACu;
    // 7F1FFDAC: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F1FFDB0:
    ctx->pc = 0x7F1FFDB0u;
    // 7F1FFDB0: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1FFDB4:
    ctx->pc = 0x7F1FFDB4u;
    // 7F1FFDB4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFDB8:
    ctx->pc = 0x7F1FFDB8u;
    // 7F1FFDB8: b       0x7F200244
    {
            ctx->pc = 0x7F200244u;
            return;
    }

label_7F1FFDBC:
    ctx->pc = 0x7F1FFDBCu;
    ctx->downcount -= 5;
    // 7F1FFDBC: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FFDC0:
    ctx->pc = 0x7F1FFDC0u;
    // 7F1FFDC0: lwz     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FFDC4:
    ctx->pc = 0x7F1FFDC4u;
    // 7F1FFDC4: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FFDC8:
    ctx->pc = 0x7F1FFDC8u;
    // 7F1FFDC8: cmplwi  r0, 0x000D
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x000Du);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1FFDCC:
    ctx->pc = 0x7F1FFDCCu;
    // 7F1FFDCC: bc    12, 1, 0x7F200238
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F200238u;
            return;
        }
    }

label_7F1FFDD0:
    ctx->pc = 0x7F1FFDD0u;
    ctx->downcount -= 7;
    // 7F1FFDD0: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1FFDD4:
    ctx->pc = 0x7F1FFDD4u;
    // 7F1FFDD4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1FFDD8:
    ctx->pc = 0x7F1FFDD8u;
    // 7F1FFDD8: addi    r3, r3, -3688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3688);

label_7F1FFDDC:
    ctx->pc = 0x7F1FFDDCu;
    // 7F1FFDDC: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FFDE0:
    ctx->pc = 0x7F1FFDE0u;
    // 7F1FFDE0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1FFDE4:
    ctx->pc = 0x7F1FFDE4u;
    // 7F1FFDE4: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F1FFDE8:
    ctx->pc = 0x7F1FFDE8u;
    ctx->downcount -= 4;
    // 7F1FFDE8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FFDEC:
    ctx->pc = 0x7F1FFDECu;
    // 7F1FFDEC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1FFDF0:
    ctx->pc = 0x7F1FFDF0u;
    // 7F1FFDF0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1FFDF4:
    ctx->pc = 0x7F1FFDF4u;
    // 7F1FFDF4: bl      0x7F202FAC
    {
            ctx->lr = 0x7F1FFDF8u;
            ctx->pc = 0x7F202FACu;
            return;
    }

label_7F1FFDF8:
    ctx->pc = 0x7F1FFDF8u;
    ctx->downcount -= 1;
    // 7F1FFDF8: b       0x7F200238
    {
            ctx->pc = 0x7F200238u;
            return;
    }

label_7F1FFDFC:
    ctx->pc = 0x7F1FFDFCu;
    ctx->downcount -= 4;
    // 7F1FFDFC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FFE00:
    ctx->pc = 0x7F1FFE00u;
    // 7F1FFE00: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1FFE04:
    ctx->pc = 0x7F1FFE04u;
    // 7F1FFE04: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1FFE08:
    ctx->pc = 0x7F1FFE08u;
    // 7F1FFE08: bl      0x7F202FAC
    {
            ctx->lr = 0x7F1FFE0Cu;
            ctx->pc = 0x7F202FACu;
            return;
    }

label_7F1FFE0C:
    ctx->pc = 0x7F1FFE0Cu;
    ctx->downcount -= 1;
    // 7F1FFE0C: b       0x7F200238
    {
            ctx->pc = 0x7F200238u;
            return;
    }

label_7F1FFE10:
    ctx->pc = 0x7F1FFE10u;
    ctx->downcount -= 2;
    // 7F1FFE10: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1FFE14:
    ctx->pc = 0x7F1FFE14u;
    // 7F1FFE14: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1FFE18u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1FFE18:
    ctx->pc = 0x7F1FFE18u;
    ctx->downcount -= 1;
    // 7F1FFE18: b       0x7F200238
    {
            ctx->pc = 0x7F200238u;
            return;
    }

label_7F1FFE1C:
    ctx->pc = 0x7F1FFE1Cu;
    ctx->downcount -= 3;
    // 7F1FFE1C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1FFE20:
    ctx->pc = 0x7F1FFE20u;
    // 7F1FFE20: stw     r0, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFE24:
    ctx->pc = 0x7F1FFE24u;
    // 7F1FFE24: b       0x7F200238
    {
            ctx->pc = 0x7F200238u;
            return;
    }

label_7F1FFE28:
    ctx->pc = 0x7F1FFE28u;
    ctx->downcount -= 7;
    // 7F1FFE28: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1FFE2C:
    ctx->pc = 0x7F1FFE2Cu;
    // 7F1FFE2C: stw     r0, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFE30:
    ctx->pc = 0x7F1FFE30u;
    // 7F1FFE30: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FFE34:
    ctx->pc = 0x7F1FFE34u;
    // 7F1FFE34: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FFE38:
    ctx->pc = 0x7F1FFE38u;
    // 7F1FFE38: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FFE3C:
    ctx->pc = 0x7F1FFE3Cu;
    // 7F1FFE3C: stw     r0, 80(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFE40:
    ctx->pc = 0x7F1FFE40u;
    // 7F1FFE40: b       0x7F200238
    {
            ctx->pc = 0x7F200238u;
            return;
    }

label_7F1FFE44:
    ctx->pc = 0x7F1FFE44u;
    ctx->downcount -= 33;
    // 7F1FFE44: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F1FFE48:
    ctx->pc = 0x7F1FFE48u;
    // 7F1FFE48: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1FFE4C:
    ctx->pc = 0x7F1FFE4Cu;
    // 7F1FFE4C: stw     r3, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FFE50:
    ctx->pc = 0x7F1FFE50u;
    // 7F1FFE50: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FFE54:
    ctx->pc = 0x7F1FFE54u;
    // 7F1FFE54: lfd     f1, 13664(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFE54u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13664);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FFE58:
    ctx->pc = 0x7F1FFE58u;
    // 7F1FFE58: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FFE5C:
    ctx->pc = 0x7F1FFE5Cu;
    // 7F1FFE5C: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFE60:
    ctx->pc = 0x7F1FFE60u;
    // 7F1FFE60: lwz     r4, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FFE64:
    ctx->pc = 0x7F1FFE64u;
    // 7F1FFE64: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFE68:
    ctx->pc = 0x7F1FFE68u;
    // 7F1FFE68: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FFE6C:
    ctx->pc = 0x7F1FFE6Cu;
    // 7F1FFE6C: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFE70:
    ctx->pc = 0x7F1FFE70u;
    // 7F1FFE70: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1FFE74:
    ctx->pc = 0x7F1FFE74u;
    // 7F1FFE74: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FFE78:
    ctx->pc = 0x7F1FFE78u;
    // 7F1FFE78: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFE78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FFE7C:
    ctx->pc = 0x7F1FFE7Cu;
    // 7F1FFE7C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FFE7Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1FFE80:
    ctx->pc = 0x7F1FFE80u;
    // 7F1FFE80: stfs     f0, 100(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFE80u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FFE84:
    ctx->pc = 0x7F1FFE84u;
    // 7F1FFE84: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FFE88:
    ctx->pc = 0x7F1FFE88u;
    // 7F1FFE88: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FFE8C:
    ctx->pc = 0x7F1FFE8Cu;
    // 7F1FFE8C: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FFE90:
    ctx->pc = 0x7F1FFE90u;
    // 7F1FFE90: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1FFE94:
    ctx->pc = 0x7F1FFE94u;
    // 7F1FFE94: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFE98:
    ctx->pc = 0x7F1FFE98u;
    // 7F1FFE98: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFE98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FFE9C:
    ctx->pc = 0x7F1FFE9Cu;
    // 7F1FFE9C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FFE9Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1FFEA0:
    ctx->pc = 0x7F1FFEA0u;
    // 7F1FFEA0: stfs     f0, 104(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFEA0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FFEA4:
    ctx->pc = 0x7F1FFEA4u;
    // 7F1FFEA4: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FFEA8:
    ctx->pc = 0x7F1FFEA8u;
    // 7F1FFEA8: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FFEAC:
    ctx->pc = 0x7F1FFEACu;
    // 7F1FFEAC: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FFEB0:
    ctx->pc = 0x7F1FFEB0u;
    // 7F1FFEB0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1FFEB4:
    ctx->pc = 0x7F1FFEB4u;
    // 7F1FFEB4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFEB8:
    ctx->pc = 0x7F1FFEB8u;
    // 7F1FFEB8: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFEB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FFEBC:
    ctx->pc = 0x7F1FFEBCu;
    // 7F1FFEBC: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FFEBCu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1FFEC0:
    ctx->pc = 0x7F1FFEC0u;
    // 7F1FFEC0: stfs     f0, 108(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFEC0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(108);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FFEC4:
    ctx->pc = 0x7F1FFEC4u;
    // 7F1FFEC4: b       0x7F200238
    {
            ctx->pc = 0x7F200238u;
            return;
    }

label_7F1FFEC8:
    ctx->pc = 0x7F1FFEC8u;
    ctx->downcount -= 56;
    // 7F1FFEC8: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FFECC:
    ctx->pc = 0x7F1FFECCu;
    // 7F1FFECC: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F1FFED0:
    ctx->pc = 0x7F1FFED0u;
    // 7F1FFED0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FFED4:
    ctx->pc = 0x7F1FFED4u;
    // 7F1FFED4: stw     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1FFED8:
    ctx->pc = 0x7F1FFED8u;
    // 7F1FFED8: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1FFEDC:
    ctx->pc = 0x7F1FFEDCu;
    // 7F1FFEDC: lfd     f1, 13664(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFEDCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13664);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FFEE0:
    ctx->pc = 0x7F1FFEE0u;
    // 7F1FFEE0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFEE4:
    ctx->pc = 0x7F1FFEE4u;
    // 7F1FFEE4: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFEE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FFEE8:
    ctx->pc = 0x7F1FFEE8u;
    // 7F1FFEE8: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1FFEEC:
    ctx->pc = 0x7F1FFEECu;
    // 7F1FFEEC: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FFEECu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1FFEF0:
    ctx->pc = 0x7F1FFEF0u;
    // 7F1FFEF0: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1FFEF4:
    ctx->pc = 0x7F1FFEF4u;
    // 7F1FFEF4: stfs     f0, 132(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFEF4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FFEF8:
    ctx->pc = 0x7F1FFEF8u;
    // 7F1FFEF8: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FFEFC:
    ctx->pc = 0x7F1FFEFCu;
    // 7F1FFEFC: stw     r4, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1FFF00:
    ctx->pc = 0x7F1FFF00u;
    // 7F1FFF00: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FFF04:
    ctx->pc = 0x7F1FFF04u;
    // 7F1FFF04: stw     r4, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1FFF08:
    ctx->pc = 0x7F1FFF08u;
    // 7F1FFF08: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FFF0C:
    ctx->pc = 0x7F1FFF0Cu;
    // 7F1FFF0C: stw     r4, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1FFF10:
    ctx->pc = 0x7F1FFF10u;
    // 7F1FFF10: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1FFF14:
    ctx->pc = 0x7F1FFF14u;
    // 7F1FFF14: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFF18:
    ctx->pc = 0x7F1FFF18u;
    // 7F1FFF18: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFF18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FFF1C:
    ctx->pc = 0x7F1FFF1Cu;
    // 7F1FFF1C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FFF1Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1FFF20:
    ctx->pc = 0x7F1FFF20u;
    // 7F1FFF20: stfs     f0, 136(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFF20u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FFF24:
    ctx->pc = 0x7F1FFF24u;
    // 7F1FFF24: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FFF28:
    ctx->pc = 0x7F1FFF28u;
    // 7F1FFF28: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FFF2C:
    ctx->pc = 0x7F1FFF2Cu;
    // 7F1FFF2C: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FFF30:
    ctx->pc = 0x7F1FFF30u;
    // 7F1FFF30: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1FFF34:
    ctx->pc = 0x7F1FFF34u;
    // 7F1FFF34: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFF38:
    ctx->pc = 0x7F1FFF38u;
    // 7F1FFF38: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFF38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FFF3C:
    ctx->pc = 0x7F1FFF3Cu;
    // 7F1FFF3C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FFF3Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1FFF40:
    ctx->pc = 0x7F1FFF40u;
    // 7F1FFF40: stfs     f0, 140(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFF40u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FFF44:
    ctx->pc = 0x7F1FFF44u;
    // 7F1FFF44: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FFF48:
    ctx->pc = 0x7F1FFF48u;
    // 7F1FFF48: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FFF4C:
    ctx->pc = 0x7F1FFF4Cu;
    // 7F1FFF4C: lwz     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FFF50:
    ctx->pc = 0x7F1FFF50u;
    // 7F1FFF50: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1FFF54:
    ctx->pc = 0x7F1FFF54u;
    // 7F1FFF54: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFF58:
    ctx->pc = 0x7F1FFF58u;
    // 7F1FFF58: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFF58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FFF5C:
    ctx->pc = 0x7F1FFF5Cu;
    // 7F1FFF5C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FFF5Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1FFF60:
    ctx->pc = 0x7F1FFF60u;
    // 7F1FFF60: stfs     f0, 148(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFF60u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FFF64:
    ctx->pc = 0x7F1FFF64u;
    // 7F1FFF64: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FFF68:
    ctx->pc = 0x7F1FFF68u;
    // 7F1FFF68: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FFF6C:
    ctx->pc = 0x7F1FFF6Cu;
    // 7F1FFF6C: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FFF70:
    ctx->pc = 0x7F1FFF70u;
    // 7F1FFF70: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1FFF74:
    ctx->pc = 0x7F1FFF74u;
    // 7F1FFF74: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFF78:
    ctx->pc = 0x7F1FFF78u;
    // 7F1FFF78: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFF78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FFF7C:
    ctx->pc = 0x7F1FFF7Cu;
    // 7F1FFF7C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FFF7Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1FFF80:
    ctx->pc = 0x7F1FFF80u;
    // 7F1FFF80: stfs     f0, 152(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFF80u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FFF84:
    ctx->pc = 0x7F1FFF84u;
    // 7F1FFF84: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FFF88:
    ctx->pc = 0x7F1FFF88u;
    // 7F1FFF88: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FFF8C:
    ctx->pc = 0x7F1FFF8Cu;
    // 7F1FFF8C: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FFF90:
    ctx->pc = 0x7F1FFF90u;
    // 7F1FFF90: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1FFF94:
    ctx->pc = 0x7F1FFF94u;
    // 7F1FFF94: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFF98:
    ctx->pc = 0x7F1FFF98u;
    // 7F1FFF98: lfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFF98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FFF9C:
    ctx->pc = 0x7F1FFF9Cu;
    // 7F1FFF9C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1FFF9Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1FFFA0:
    ctx->pc = 0x7F1FFFA0u;
    // 7F1FFFA0: stfs     f0, 156(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFFA0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1FFFA4:
    ctx->pc = 0x7F1FFFA4u;
    // 7F1FFFA4: b       0x7F200238
    {
            ctx->pc = 0x7F200238u;
            return;
    }

label_7F1FFFA8:
    ctx->pc = 0x7F1FFFA8u;
    ctx->downcount -= 3;
    // 7F1FFFA8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1FFFAC:
    ctx->pc = 0x7F1FFFACu;
    // 7F1FFFAC: stw     r0, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFFB0:
    ctx->pc = 0x7F1FFFB0u;
    // 7F1FFFB0: b       0x7F200238
    {
            ctx->pc = 0x7F200238u;
            return;
    }

label_7F1FFFB4:
    ctx->pc = 0x7F1FFFB4u;
    ctx->downcount -= 7;
    // 7F1FFFB4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1FFFB8:
    ctx->pc = 0x7F1FFFB8u;
    // 7F1FFFB8: stw     r0, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFFBC:
    ctx->pc = 0x7F1FFFBCu;
    // 7F1FFFBC: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FFFC0:
    ctx->pc = 0x7F1FFFC0u;
    // 7F1FFFC0: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FFFC4:
    ctx->pc = 0x7F1FFFC4u;
    // 7F1FFFC4: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1FFFC8:
    ctx->pc = 0x7F1FFFC8u;
    // 7F1FFFC8: stw     r0, 84(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFFCC:
    ctx->pc = 0x7F1FFFCCu;
    // 7F1FFFCC: b       0x7F200238
    {
            ctx->pc = 0x7F200238u;
            return;
    }

label_7F1FFFD0:
    ctx->pc = 0x7F1FFFD0u;
    ctx->downcount -= 33;
    // 7F1FFFD0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F1FFFD4:
    ctx->pc = 0x7F1FFFD4u;
    // 7F1FFFD4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1FFFD8:
    ctx->pc = 0x7F1FFFD8u;
    // 7F1FFFD8: stw     r3, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1FFFDC:
    ctx->pc = 0x7F1FFFDCu;
    // 7F1FFFDC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1FFFE0:
    ctx->pc = 0x7F1FFFE0u;
    // 7F1FFFE0: lfd     f1, 13664(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1FFFE0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13664);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1FFFE4:
    ctx->pc = 0x7F1FFFE4u;
    // 7F1FFFE4: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FFFE8:
    ctx->pc = 0x7F1FFFE8u;
    // 7F1FFFE8: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFFEC:
    ctx->pc = 0x7F1FFFECu;
    // 7F1FFFEC: lwz     r4, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1FFFF0:
    ctx->pc = 0x7F1FFFF0u;
    // 7F1FFFF0: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFFF4:
    ctx->pc = 0x7F1FFFF4u;
    // 7F1FFFF4: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1FFFF8:
    ctx->pc = 0x7F1FFFF8u;
    // 7F1FFFF8: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1FFFFC:
    ctx->pc = 0x7F1FFFFCu;
    // 7F1FFFFC: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F200000:
    ctx->pc = 0x7F200000u;
    // 7F200000: stw     r3, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F200004:
    ctx->pc = 0x7F200004u;
    // 7F200004: lfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F200004u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F200008:
    ctx->pc = 0x7F200008u;
    // 7F200008: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F200008u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F20000C:
    ctx->pc = 0x7F20000Cu;
    // 7F20000C: stfs     f0, 116(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F20000Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F200010:
    ctx->pc = 0x7F200010u;
    // 7F200010: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F200014:
    ctx->pc = 0x7F200014u;
    // 7F200014: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F200018:
    ctx->pc = 0x7F200018u;
    // 7F200018: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F20001C:
    ctx->pc = 0x7F20001Cu;
    // 7F20001C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F200020:
    ctx->pc = 0x7F200020u;
    // 7F200020: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F200024:
    ctx->pc = 0x7F200024u;
    // 7F200024: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F200024u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F200028:
    ctx->pc = 0x7F200028u;
    // 7F200028: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F200028u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F20002C:
    ctx->pc = 0x7F20002Cu;
    // 7F20002C: stfs     f0, 120(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F20002Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F200030:
    ctx->pc = 0x7F200030u;
    // 7F200030: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F200034:
    ctx->pc = 0x7F200034u;
    // 7F200034: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F200038:
    ctx->pc = 0x7F200038u;
    // 7F200038: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F20003C:
    ctx->pc = 0x7F20003Cu;
    // 7F20003C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F200040:
    ctx->pc = 0x7F200040u;
    // 7F200040: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F200044:
    ctx->pc = 0x7F200044u;
    // 7F200044: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F200044u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F200048:
    ctx->pc = 0x7F200048u;
    // 7F200048: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F200048u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F20004C:
    ctx->pc = 0x7F20004Cu;
    // 7F20004C: stfs     f0, 124(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F20004Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F200050:
    ctx->pc = 0x7F200050u;
    // 7F200050: b       0x7F200238
    {
            ctx->pc = 0x7F200238u;
            return;
    }

label_7F200054:
    ctx->pc = 0x7F200054u;
    ctx->downcount -= 38;
    // 7F200054: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F200058:
    ctx->pc = 0x7F200058u;
    // 7F200058: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F20005C:
    ctx->pc = 0x7F20005Cu;
    // 7F20005C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F200060:
    ctx->pc = 0x7F200060u;
    // 7F200060: stw     r4, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F200064:
    ctx->pc = 0x7F200064u;
    // 7F200064: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F200068:
    ctx->pc = 0x7F200068u;
    // 7F200068: lfd     f1, 13664(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F200068u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13664);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F20006C:
    ctx->pc = 0x7F20006Cu;
    // 7F20006C: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F200070:
    ctx->pc = 0x7F200070u;
    // 7F200070: lfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F200070u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F200074:
    ctx->pc = 0x7F200074u;
    // 7F200074: stw     r4, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F200078:
    ctx->pc = 0x7F200078u;
    // 7F200078: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F200078u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F20007C:
    ctx->pc = 0x7F20007Cu;
    // 7F20007C: stw     r4, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F200080:
    ctx->pc = 0x7F200080u;
    // 7F200080: stfs     f0, 164(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F200080u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F200084:
    ctx->pc = 0x7F200084u;
    // 7F200084: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F200088:
    ctx->pc = 0x7F200088u;
    // 7F200088: stw     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F20008C:
    ctx->pc = 0x7F20008Cu;
    // 7F20008C: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F200090:
    ctx->pc = 0x7F200090u;
    // 7F200090: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F200094:
    ctx->pc = 0x7F200094u;
    // 7F200094: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F200098:
    ctx->pc = 0x7F200098u;
    // 7F200098: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F20009C:
    ctx->pc = 0x7F20009Cu;
    // 7F20009C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2000A0:
    ctx->pc = 0x7F2000A0u;
    // 7F2000A0: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2000A4:
    ctx->pc = 0x7F2000A4u;
    // 7F2000A4: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2000A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2000A8:
    ctx->pc = 0x7F2000A8u;
    // 7F2000A8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2000A8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2000AC:
    ctx->pc = 0x7F2000ACu;
    // 7F2000AC: stfs     f0, 168(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F2000ACu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2000B0:
    ctx->pc = 0x7F2000B0u;
    // 7F2000B0: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2000B4:
    ctx->pc = 0x7F2000B4u;
    // 7F2000B4: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2000B8:
    ctx->pc = 0x7F2000B8u;
    // 7F2000B8: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2000BC:
    ctx->pc = 0x7F2000BCu;
    // 7F2000BC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2000C0:
    ctx->pc = 0x7F2000C0u;
    // 7F2000C0: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2000C4:
    ctx->pc = 0x7F2000C4u;
    // 7F2000C4: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2000C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2000C8:
    ctx->pc = 0x7F2000C8u;
    // 7F2000C8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2000C8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2000CC:
    ctx->pc = 0x7F2000CCu;
    // 7F2000CC: stfs     f0, 172(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F2000CCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(172);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2000D0:
    ctx->pc = 0x7F2000D0u;
    // 7F2000D0: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2000D4:
    ctx->pc = 0x7F2000D4u;
    // 7F2000D4: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2000D8:
    ctx->pc = 0x7F2000D8u;
    // 7F2000D8: lwz     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2000DC:
    ctx->pc = 0x7F2000DCu;
    // 7F2000DC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2000E0:
    ctx->pc = 0x7F2000E0u;
    // 7F2000E0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2000E4:
    ctx->pc = 0x7F2000E4u;
    // 7F2000E4: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2000E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2000E8:
    ctx->pc = 0x7F2000E8u;
    // 7F2000E8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2000E8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

    ctx->pc = 0x7F2000ECu;
    return;
return_dispatch_7F1FC0EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F1FC33Cu: goto label_7F1FC33C;
    case 0x7F1FC39Cu: goto label_7F1FC39C;
    case 0x7F1FC3A4u: goto label_7F1FC3A4;
    case 0x7F1FC3B8u: goto label_7F1FC3B8;
    case 0x7F1FC3C0u: goto label_7F1FC3C0;
    case 0x7F1FC3D4u: goto label_7F1FC3D4;
    case 0x7F1FC470u: goto label_7F1FC470;
    case 0x7F1FC4F4u: goto label_7F1FC4F4;
    case 0x7F1FC4FCu: goto label_7F1FC4FC;
    case 0x7F1FC510u: goto label_7F1FC510;
    case 0x7F1FC51Cu: goto label_7F1FC51C;
    case 0x7F1FC530u: goto label_7F1FC530;
    case 0x7F1FC5A8u: goto label_7F1FC5A8;
    case 0x7F1FC66Cu: goto label_7F1FC66C;
    case 0x7F1FC708u: goto label_7F1FC708;
    case 0x7F1FC710u: goto label_7F1FC710;
    case 0x7F1FC87Cu: goto label_7F1FC87C;
    case 0x7F1FCAA4u: goto label_7F1FCAA4;
    case 0x7F1FCAACu: goto label_7F1FCAAC;
    case 0x7F1FCBBCu: goto label_7F1FCBBC;
    case 0x7F1FCC44u: goto label_7F1FCC44;
    case 0x7F1FCC64u: goto label_7F1FCC64;
    case 0x7F1FCC94u: goto label_7F1FCC94;
    case 0x7F1FCC9Cu: goto label_7F1FCC9C;
    case 0x7F1FCCA4u: goto label_7F1FCCA4;
    case 0x7F1FCCC8u: goto label_7F1FCCC8;
    case 0x7F1FCCD4u: goto label_7F1FCCD4;
    case 0x7F1FCCE0u: goto label_7F1FCCE0;
    case 0x7F1FCD14u: goto label_7F1FCD14;
    case 0x7F1FCEA8u: goto label_7F1FCEA8;
    case 0x7F1FCEC4u: goto label_7F1FCEC4;
    case 0x7F1FCEE0u: goto label_7F1FCEE0;
    case 0x7F1FCF1Cu: goto label_7F1FCF1C;
    case 0x7F1FCF44u: goto label_7F1FCF44;
    case 0x7F1FCF88u: goto label_7F1FCF88;
    case 0x7F1FCFE4u: goto label_7F1FCFE4;
    case 0x7F1FD0ECu: goto label_7F1FD0EC;
    case 0x7F1FD0F4u: goto label_7F1FD0F4;
    case 0x7F1FD11Cu: goto label_7F1FD11C;
    case 0x7F1FD13Cu: goto label_7F1FD13C;
    case 0x7F1FD164u: goto label_7F1FD164;
    case 0x7F1FD190u: goto label_7F1FD190;
    case 0x7F1FD1C0u: goto label_7F1FD1C0;
    case 0x7F1FD1F4u: goto label_7F1FD1F4;
    case 0x7F1FD210u: goto label_7F1FD210;
    case 0x7F1FD46Cu: goto label_7F1FD46C;
    case 0x7F1FD488u: goto label_7F1FD488;
    case 0x7F1FD4B8u: goto label_7F1FD4B8;
    case 0x7F1FD4C8u: goto label_7F1FD4C8;
    case 0x7F1FD510u: goto label_7F1FD510;
    case 0x7F1FD58Cu: goto label_7F1FD58C;
    case 0x7F1FD5B0u: goto label_7F1FD5B0;
    case 0x7F1FD5CCu: goto label_7F1FD5CC;
    case 0x7F1FD69Cu: goto label_7F1FD69C;
    case 0x7F1FD75Cu: goto label_7F1FD75C;
    case 0x7F1FD7CCu: goto label_7F1FD7CC;
    case 0x7F1FD818u: goto label_7F1FD818;
    case 0x7F1FD820u: goto label_7F1FD820;
    case 0x7F1FD834u: goto label_7F1FD834;
    case 0x7F1FD83Cu: goto label_7F1FD83C;
    case 0x7F1FD938u: goto label_7F1FD938;
    case 0x7F1FD944u: goto label_7F1FD944;
    case 0x7F1FD9B0u: goto label_7F1FD9B0;
    case 0x7F1FDA38u: goto label_7F1FDA38;
    case 0x7F1FDA6Cu: goto label_7F1FDA6C;
    case 0x7F1FDAC0u: goto label_7F1FDAC0;
    case 0x7F1FDB68u: goto label_7F1FDB68;
    case 0x7F1FDB74u: goto label_7F1FDB74;
    case 0x7F1FDBBCu: goto label_7F1FDBBC;
    case 0x7F1FDBD8u: goto label_7F1FDBD8;
    case 0x7F1FDBFCu: goto label_7F1FDBFC;
    case 0x7F1FDC90u: goto label_7F1FDC90;
    case 0x7F1FDCA0u: goto label_7F1FDCA0;
    case 0x7F1FDD2Cu: goto label_7F1FDD2C;
    case 0x7F1FDD48u: goto label_7F1FDD48;
    case 0x7F1FDDA0u: goto label_7F1FDDA0;
    case 0x7F1FDDB0u: goto label_7F1FDDB0;
    case 0x7F1FDDE0u: goto label_7F1FDDE0;
    case 0x7F1FDDF0u: goto label_7F1FDDF0;
    case 0x7F1FDECCu: goto label_7F1FDECC;
    case 0x7F1FDEDCu: goto label_7F1FDEDC;
    case 0x7F1FDF50u: goto label_7F1FDF50;
    case 0x7F1FDF60u: goto label_7F1FDF60;
    case 0x7F1FDF70u: goto label_7F1FDF70;
    case 0x7F1FE110u: goto label_7F1FE110;
    case 0x7F1FE190u: goto label_7F1FE190;
    case 0x7F1FE1FCu: goto label_7F1FE1FC;
    case 0x7F1FE240u: goto label_7F1FE240;
    case 0x7F1FE2ACu: goto label_7F1FE2AC;
    case 0x7F1FE3FCu: goto label_7F1FE3FC;
    case 0x7F1FE418u: goto label_7F1FE418;
    case 0x7F1FE47Cu: goto label_7F1FE47C;
    case 0x7F1FE49Cu: goto label_7F1FE49C;
    case 0x7F1FE4F8u: goto label_7F1FE4F8;
    case 0x7F1FE600u: goto label_7F1FE600;
    case 0x7F1FE664u: goto label_7F1FE664;
    case 0x7F1FE690u: goto label_7F1FE690;
    case 0x7F1FE698u: goto label_7F1FE698;
    case 0x7F1FE6B0u: goto label_7F1FE6B0;
    case 0x7F1FE6B8u: goto label_7F1FE6B8;
    case 0x7F1FE6F4u: goto label_7F1FE6F4;
    case 0x7F1FE6FCu: goto label_7F1FE6FC;
    case 0x7F1FE734u: goto label_7F1FE734;
    case 0x7F1FE73Cu: goto label_7F1FE73C;
    case 0x7F1FE758u: goto label_7F1FE758;
    case 0x7F1FE78Cu: goto label_7F1FE78C;
    case 0x7F1FE804u: goto label_7F1FE804;
    case 0x7F1FE838u: goto label_7F1FE838;
    case 0x7F1FE874u: goto label_7F1FE874;
    case 0x7F1FEA28u: goto label_7F1FEA28;
    case 0x7F1FEA4Cu: goto label_7F1FEA4C;
    case 0x7F1FEA5Cu: goto label_7F1FEA5C;
    case 0x7F1FEA68u: goto label_7F1FEA68;
    case 0x7F1FEA80u: goto label_7F1FEA80;
    case 0x7F1FEA88u: goto label_7F1FEA88;
    case 0x7F1FEAB0u: goto label_7F1FEAB0;
    case 0x7F1FEAD4u: goto label_7F1FEAD4;
    case 0x7F1FEAE4u: goto label_7F1FEAE4;
    case 0x7F1FEAF0u: goto label_7F1FEAF0;
    case 0x7F1FEB08u: goto label_7F1FEB08;
    case 0x7F1FEB10u: goto label_7F1FEB10;
    case 0x7F1FEB74u: goto label_7F1FEB74;
    case 0x7F1FEB8Cu: goto label_7F1FEB8C;
    case 0x7F1FEB9Cu: goto label_7F1FEB9C;
    case 0x7F1FEBB4u: goto label_7F1FEBB4;
    case 0x7F1FEBC4u: goto label_7F1FEBC4;
    case 0x7F1FEBF8u: goto label_7F1FEBF8;
    case 0x7F1FED0Cu: goto label_7F1FED0C;
    case 0x7F1FED14u: goto label_7F1FED14;
    case 0x7F1FED38u: goto label_7F1FED38;
    case 0x7F1FED64u: goto label_7F1FED64;
    case 0x7F1FED80u: goto label_7F1FED80;
    case 0x7F1FEDA0u: goto label_7F1FEDA0;
    case 0x7F1FEDC8u: goto label_7F1FEDC8;
    case 0x7F1FEDD8u: goto label_7F1FEDD8;
    case 0x7F1FEDE4u: goto label_7F1FEDE4;
    case 0x7F1FEE34u: goto label_7F1FEE34;
    case 0x7F1FEE38u: goto label_7F1FEE38;
    case 0x7F1FEE4Cu: goto label_7F1FEE4C;
    case 0x7F1FEE68u: goto label_7F1FEE68;
    case 0x7F1FEE70u: goto label_7F1FEE70;
    case 0x7F1FEF08u: goto label_7F1FEF08;
    case 0x7F1FEF20u: goto label_7F1FEF20;
    case 0x7F1FEF4Cu: goto label_7F1FEF4C;
    case 0x7F1FEF64u: goto label_7F1FEF64;
    case 0x7F1FEF7Cu: goto label_7F1FEF7C;
    case 0x7F1FEF90u: goto label_7F1FEF90;
    case 0x7F1FEFA0u: goto label_7F1FEFA0;
    case 0x7F1FEFF0u: goto label_7F1FEFF0;
    case 0x7F1FEFF8u: goto label_7F1FEFF8;
    case 0x7F1FF018u: goto label_7F1FF018;
    case 0x7F1FF06Cu: goto label_7F1FF06C;
    case 0x7F1FF078u: goto label_7F1FF078;
    case 0x7F1FF084u: goto label_7F1FF084;
    case 0x7F1FF0C4u: goto label_7F1FF0C4;
    case 0x7F1FF0E0u: goto label_7F1FF0E0;
    case 0x7F1FF144u: goto label_7F1FF144;
    case 0x7F1FF154u: goto label_7F1FF154;
    case 0x7F1FF188u: goto label_7F1FF188;
    case 0x7F1FF18Cu: goto label_7F1FF18C;
    case 0x7F1FF19Cu: goto label_7F1FF19C;
    case 0x7F1FF1E0u: goto label_7F1FF1E0;
    case 0x7F1FF1ECu: goto label_7F1FF1EC;
    case 0x7F1FF200u: goto label_7F1FF200;
    case 0x7F1FF21Cu: goto label_7F1FF21C;
    case 0x7F1FF28Cu: goto label_7F1FF28C;
    case 0x7F1FF29Cu: goto label_7F1FF29C;
    case 0x7F1FF2F0u: goto label_7F1FF2F0;
    case 0x7F1FF2FCu: goto label_7F1FF2FC;
    case 0x7F1FF310u: goto label_7F1FF310;
    case 0x7F1FF32Cu: goto label_7F1FF32C;
    case 0x7F1FF39Cu: goto label_7F1FF39C;
    case 0x7F1FF3ACu: goto label_7F1FF3AC;
    case 0x7F1FF3E8u: goto label_7F1FF3E8;
    case 0x7F1FF3ECu: goto label_7F1FF3EC;
    case 0x7F1FF3FCu: goto label_7F1FF3FC;
    case 0x7F1FF428u: goto label_7F1FF428;
    case 0x7F1FF42Cu: goto label_7F1FF42C;
    case 0x7F1FF43Cu: goto label_7F1FF43C;
    case 0x7F1FF484u: goto label_7F1FF484;
    case 0x7F1FF4A0u: goto label_7F1FF4A0;
    case 0x7F1FF524u: goto label_7F1FF524;
    case 0x7F1FF534u: goto label_7F1FF534;
    case 0x7F1FF568u: goto label_7F1FF568;
    case 0x7F1FF56Cu: goto label_7F1FF56C;
    case 0x7F1FF57Cu: goto label_7F1FF57C;
    case 0x7F1FF5C0u: goto label_7F1FF5C0;
    case 0x7F1FF5CCu: goto label_7F1FF5CC;
    case 0x7F1FF5E0u: goto label_7F1FF5E0;
    case 0x7F1FF5FCu: goto label_7F1FF5FC;
    case 0x7F1FF66Cu: goto label_7F1FF66C;
    case 0x7F1FF67Cu: goto label_7F1FF67C;
    case 0x7F1FF6CCu: goto label_7F1FF6CC;
    case 0x7F1FF6D0u: goto label_7F1FF6D0;
    case 0x7F1FF6E0u: goto label_7F1FF6E0;
    case 0x7F1FF724u: goto label_7F1FF724;
    case 0x7F1FF730u: goto label_7F1FF730;
    case 0x7F1FF744u: goto label_7F1FF744;
    case 0x7F1FF760u: goto label_7F1FF760;
    case 0x7F1FF7D0u: goto label_7F1FF7D0;
    case 0x7F1FF7E0u: goto label_7F1FF7E0;
    case 0x7F1FF82Cu: goto label_7F1FF82C;
    case 0x7F1FF8B4u: goto label_7F1FF8B4;
    case 0x7F1FF8F0u: goto label_7F1FF8F0;
    case 0x7F1FF90Cu: goto label_7F1FF90C;
    case 0x7F1FF944u: goto label_7F1FF944;
    case 0x7F1FF954u: goto label_7F1FF954;
    case 0x7F1FF9CCu: goto label_7F1FF9CC;
    case 0x7F1FF9DCu: goto label_7F1FF9DC;
    case 0x7F1FFA74u: goto label_7F1FFA74;
    case 0x7F1FFAB0u: goto label_7F1FFAB0;
    case 0x7F1FFACCu: goto label_7F1FFACC;
    case 0x7F1FFB04u: goto label_7F1FFB04;
    case 0x7F1FFB14u: goto label_7F1FFB14;
    case 0x7F1FFBB4u: goto label_7F1FFBB4;
    case 0x7F1FFBC4u: goto label_7F1FFBC4;
    case 0x7F1FFBD4u: goto label_7F1FFBD4;
    case 0x7F1FFBF0u: goto label_7F1FFBF0;
    case 0x7F1FFC2Cu: goto label_7F1FFC2C;
    case 0x7F1FFC3Cu: goto label_7F1FFC3C;
    case 0x7F1FFC88u: goto label_7F1FFC88;
    case 0x7F1FFD0Cu: goto label_7F1FFD0C;
    case 0x7F1FFD1Cu: goto label_7F1FFD1C;
    case 0x7F1FFDA0u: goto label_7F1FFDA0;
    case 0x7F1FFDF8u: goto label_7F1FFDF8;
    case 0x7F1FFE0Cu: goto label_7F1FFE0C;
    case 0x7F1FFE18u: goto label_7F1FFE18;
    default: return;
    }
}

