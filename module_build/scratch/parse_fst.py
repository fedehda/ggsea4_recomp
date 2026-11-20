import struct, os

data = open('D:/Documents/VSCode/gc-recomp-workspace/input/extracted/sys/fst.bin','rb').read()
cnt = struct.unpack('>I', data[8:12])[0]
str_off = cnt * 12

def get_name(o):
    idx = str_off + o
    end = data.find(b'\x00', idx)
    return data[idx:end].decode('latin1')

entries = []
for i in range(cnt):
    eb = data[i*12:(i+1)*12]
    is_dir = eb[0]
    name_off = int.from_bytes(eb[1:4], 'big')
    off = struct.unpack('>I', eb[4:8])[0]
    size = struct.unpack('>I', eb[8:12])[0]
    entries.append({'is_dir': is_dir, 'name': get_name(name_off) if i > 0 else '', 'off': off, 'size': size})

stack = [(0, entries[0]['size'], '')]
paths = {}
for i in range(1, cnt):
    while stack and i >= stack[-1][1]:
        stack.pop()
    cur = stack[-1][2]
    e = entries[i]
    if e['is_dir']:
        stack.append((i, e['size'], f"{cur}/{e['name']}" if cur else e['name']))
    else:
        p = f"{cur}/{e['name']}" if cur else e['name']
        paths[i] = p

print("Entry 91:", paths.get(91), entries[91])
print("Entry 92:", paths.get(92), entries[92])
print("Total files mapped:", len(paths))
