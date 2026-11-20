path67 = r'D:\Documents\VSCode\gc-recomp-workspace\module_build\src\generated\chunks\rel_chunk_0067_rel1_7F1140EC.c'
with open(path67, 'r', encoding='utf-8') as f:
    text67 = f.read()

target67 = '''label_7F114BA0:
    ctx->pc = 0x7F114BA0u;
    {
        extern int printf(const char*, ...);
        u32 stack_arg0 = mem_read32(ctx, ctx->gpr[1] + 8);
        float fs0 = 0.0f;
        memcpy(&fs0, &stack_arg0, 4);
        printf("[FRUSTUM-7F114BA0] LR=0x%08X r3=0x%08X | f1=%.4f f2=%.4f f3=%.4f f4=%.4f f5=%.4f f6=%.4f stk=%.4f (0x%08X)\\n",
               ctx->lr, ctx->gpr[3], ctx->fpr[1], ctx->fpr[2], ctx->fpr[3], ctx->fpr[4], ctx->fpr[5], ctx->fpr[6], fs0, stack_arg0);
    }
    ctx->downcount -= 34;'''

code67 = '''label_7F114BA0:
    ctx->pc = 0x7F114BA0u;
    if (ctx->fpr[1] < 0.001f) {
        ctx->fpr[1] = 2.0f;
        ctx->ps1[1] = 2.0f;
    }
    ctx->downcount -= 34;'''

if target67 in text67:
    text67 = text67.replace(target67, code67, 1)
    with open(path67, 'w', encoding='utf-8') as f: f.write(text67)
    print('Chunk 67 updated!')
else:
    print('Target not found in Chunk 67!')

path237 = r'D:\Documents\VSCode\gc-recomp-workspace\module_build\src\generated\chunks\rel_chunk_0237_rel1_7F3BC0EC.c'
with open(path237, 'r', encoding='utf-8') as f:
    text237 = f.read()

target237 = '''label_7F3BF17C:
    ctx->pc = 0x7F3BF17Cu;
    // 7F3BF17C: stfs     f1, 896(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3BF17Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(896);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }'''

code237 = '''label_7F3BF17C:
    ctx->pc = 0x7F3BF17Cu;
    // 7F3BF17C: stfs     f1, 896(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3BF17Cu)) return;
    if (ctx->fpr[1] < 0.001f) {
        ctx->fpr[1] = 2.0f;
        ctx->ps1[1] = 2.0f;
    }
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(896);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }'''

if target237 in text237:
    text237 = text237.replace(target237, code237, 1)
    with open(path237, 'w', encoding='utf-8') as f: f.write(text237)
    print('Chunk 237 updated!')
else:
    print('Target not found in Chunk 237!')
