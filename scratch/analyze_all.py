import sys
from collections import Counter

def analyze_bmp(path):
    try:
        with open(path, 'rb') as f:
            data = f.read()
    except:
        return
    offset = int.from_bytes(data[10:14], 'little')
    pixels = data[offset:]
    colors = Counter()
    non_black = 0
    max_b = max(pixels) if pixels else 0
    for i in range(0, len(pixels), 3):
        b, g, r = pixels[i:i+3]
        if (b, g, r) != (0, 0, 0):
            colors[(r, g, b)] += 1
            non_black += 1
    print(f"=== {path} (max byte: {max_b}) ===")
    print(f"Total: {len(pixels)//3}, non-black: {non_black} ({non_black*100/(len(pixels)//3):.1f}%)")
    for col, cnt in colors.most_common(5):
        print(f"  {col}: {cnt} px ({cnt*100/(len(pixels)//3):.2f}%)")

for f in ["efb_frame_100.bmp", "efb_frame_200.bmp", "efb_frame_800.bmp", "efb_frame_1000.bmp", "efb_frame_1200.bmp", "efb_frame_2500.bmp", "efb_frame_3000.bmp", "efb_frame_4000.bmp", "efb_frame_4500.bmp"]:
    analyze_bmp(r"D:\Documents\VSCode\gc-recomp-workspace\\" + f)
