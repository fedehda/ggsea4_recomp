import struct

with open('D:/Documents/VSCode/gc-recomp-workspace/input/extracted/sys/main.dol', 'rb') as f:
    dol = f.read()

# Gamecube DOL header:
# 0x00..0x1C: 7 text file offsets
# 0x1C..0x48: 11 data file offsets
# 0x48..0x64: 7 text load addrs
# 0x64..0x90: 11 data load addrs
# 0x90..0xAC: 7 text sizes
# 0xAC..0xD8: 11 data sizes
# 0xD8: BSS addr
# 0xDC: BSS size
# 0xE0: Entry point

for i in range(7):
    off = struct.unpack('>I', dol[i*4 : (i+1)*4])[0]
    addr = struct.unpack('>I', dol[0x48+i*4 : 0x48+(i+1)*4])[0]
    size = struct.unpack('>I', dol[0x90+i*4 : 0x90+(i+1)*4])[0]
    if size:
        print(f'Text{i}: off=0x{off:X} addr=0x{addr:08X} size=0x{size:X}')

for i in range(11):
    off = struct.unpack('>I', dol[0x1C+i*4 : 0x1C+(i+1)*4])[0]
    addr = struct.unpack('>I', dol[0x64+i*4 : 0x64+(i+1)*4])[0]
    size = struct.unpack('>I', dol[0xAC+i*4 : 0xAC+(i+1)*4])[0]
    if size:
        print(f'Data{i}: off=0x{off:X} addr=0x{addr:08X} size=0x{size:X}')

bss_addr, bss_size, entry = struct.unpack('>3I', dol[0xD8:0xE4])
print(f'BSS: addr=0x{bss_addr:08X} size=0x{bss_size:X} Entry=0x{entry:08X}')

def find_ea(ea):
    for i in range(7):
        off = struct.unpack('>I', dol[i*4 : (i+1)*4])[0]
        addr = struct.unpack('>I', dol[0x48+i*4 : 0x48+(i+1)*4])[0]
        size = struct.unpack('>I', dol[0x90+i*4 : 0x90+(i+1)*4])[0]
        if addr <= ea < addr + size:
            return off + (ea - addr)
    return None

file_off = find_ea(0x800069A4)
print('0x800069A4 file offset:', hex(file_off) if file_off else 'None')
if file_off:
    raw_ins = struct.unpack('>I', dol[file_off:file_off+4])[0]
    print(f'Instruction: 0x{raw_ins:08X}')
