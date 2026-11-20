import os

path = r'D:\Documents\VSCode\gc-recomp-workspace\module_build\src\generated\chunks\rel_chunk_0067_rel1_7F1140EC.c'
with open(path, 'r', encoding='utf-8') as f:
    text = f.read()

target = '''label_7F114BA0:
    ctx->pc = 0x7F114BA0u;
    ctx->downcount -= 34;'''

code = '''label_7F114BA0:
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

if target in text:
    text = text.replace(target, code, 1)
    with open(path, 'w', encoding='utf-8') as f: f.write(text)
    print('Replaced LF!')
else:
    print('Not found!')
