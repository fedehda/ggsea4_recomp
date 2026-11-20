import sys
from collections import Counter

def analyze_bmp(path):
    with open(path, 'rb') as f:
        data = f.read()
    offset = int.from_bytes(data[10:14], 'little')
    pixels = data[offset:]
    colors = Counter()
    non_black = 0
    for i in range(0, len(pixels), 3):
        b, g, r = pixels[i:i+3]
        if (b, g, r) != (0, 0, 0):
            colors[(r, g, b)] += 1
            non_black += 1
    print(f"=== {path} ===")
    print(f"Total pixels: {len(pixels)//3}, non-black: {non_black}")
    print("Top 10 non-black colors (R, G, B):")
    for col, cnt in colors.most_common(10):
        print(f"  {col}: {cnt} pixels ({cnt*100/(len(pixels)//3):.2f}%)")

analyze_bmp(r"D:\Documents\VSCode\gc-recomp-workspace\efb_frame_2500.bmp")
analyze_bmp(r"D:\Documents\VSCode\gc-recomp-workspace\efb_frame_3000.bmp")
