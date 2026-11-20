import os

path = r'D:\Documents\VSCode\gc-recomp-workspace\module_build\src\generated\chunks\rel_chunk_0234_rel1_7F3B00EC.c'
with open(path, 'r', encoding='utf-8') as f:
    text = f.read()

# Revert previous or replace
target = '''label_7F3B191C:
    ctx->pc = 0x7F3B191Cu;
    {
        u32 r3_val = ctx->gpr[3];
        u32 w0 = mem_read32(ctx, r3_val + 192);
        u32 w5 = mem_read32(ctx, r3_val + 192 + 20);
        float f0 = 0.0f, f5 = 0.0f;
        memcpy(&f0, &w0, 4);
        memcpy(&f5, &w5, 4);
        printf("[CAM-7F3B191C] LR=0x%08X r3=0x%08X r4=0x%08X | mtx[0][0]=%.4f (0x%08X) mtx[1][1]=%.4f (0x%08X)\\n",
               ctx->lr, r3_val, ctx->gpr[4], f0, w0, f5, w5);
    }
    ctx->downcount -= 25;'''

code = '''label_7F3B191C:
    ctx->pc = 0x7F3B191Cu;
    {
        extern int printf(const char*, ...);
        u32 r3_val = ctx->gpr[3];
        u32 w0 = mem_read32(ctx, r3_val + 192);
        u32 w5 = mem_read32(ctx, r3_val + 192 + 20);
        float f0 = 0.0f, f5 = 0.0f;
        memcpy(&f0, &w0, 4);
        memcpy(&f5, &w5, 4);
        printf("[CAM-7F3B191C] LR=0x%08X r3=0x%08X r4=0x%08X | mtx[0][0]=%.4f (0x%08X) mtx[1][1]=%.4f (0x%08X)\\n",
               ctx->lr, r3_val, ctx->gpr[4], f0, w0, f5, w5);
    }
    ctx->downcount -= 25;'''

if target in text:
    text = text.replace(target, code, 1)
    with open(path, 'w', encoding='utf-8') as f: f.write(text)
    print('Replaced with printf decl!')
else:
    print('Target not found!')
