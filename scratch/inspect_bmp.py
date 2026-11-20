import os
import struct

files = ['efb_frame_10.bmp', 'efb_frame_11.bmp', 'efb_frame_1050.bmp', 'efb_frame_10000.bmp', 'efb_frame_11000.bmp']
for f in files:
    full = os.path.join(r'D:\Documents\VSCode\gc-recomp-workspace', f)
    if not os.path.exists(full):
        continue
    data = open(full, 'rb').read()
    w, h, bpp = struct.unpack_from('<iiH', data, 18 + 0) # BITMAPINFOHEADER: width(4), height(4), planes(2), bpp(2)
    bpp = struct.unpack_from('<H', data, 28)[0]
    color_counts = {}
    pixel_data = data[54:]
    step = bpp // 8
    for i in range(0, len(pixel_data), step):
        pix = pixel_data[i:i+step]
        color_counts[pix] = color_counts.get(pix, 0) + 1
    print(f"{f}: {w}x{h} bpp={bpp} unique_colors={len(color_counts)}")
    sorted_colors = sorted(color_counts.items(), key=lambda x: x[1], reverse=True)
    for c, cnt in sorted_colors[:5]:
        print(f"  color={c.hex()} count={cnt} ({cnt*100/(w*h):.1f}%)")
