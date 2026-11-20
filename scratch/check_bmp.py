import sys

def inspect_bmp(path):
    try:
        with open(path, 'rb') as f:
            data = f.read()
    except Exception as e:
        print(f"{path}: error {e}")
        return
    if len(data) < 54:
        print(f"{path}: too short")
        return
    width = int.from_bytes(data[18:22], 'little')
    height = int.from_bytes(data[22:26], 'little')
    bpp = int.from_bytes(data[28:30], 'little')
    offset = int.from_bytes(data[10:14], 'little')
    pixels = data[offset:]
    
    non_zero = sum(1 for b in pixels if b != 0)
    total = len(pixels)
    min_val = min(pixels) if pixels else 0
    max_val = max(pixels) if pixels else 0
    print(f"{path}: {width}x{height} {bpp}bpp, {non_zero}/{total} non-zero bytes ({non_zero*100/total:.2f}%), min={min_val}, max={max_val}")

inspect_bmp(r"D:\Documents\VSCode\gc-recomp-workspace\screenshot_frame_4217.bmp")
inspect_bmp(r"D:\Documents\VSCode\gc-recomp-workspace\scratch\raw_efb_draw5.bmp")
