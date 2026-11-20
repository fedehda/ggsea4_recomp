import os, struct

path = 'D:/Documents/VSCode/gc-recomp-workspace/screenshot_frame_140.bmp'
if not os.path.exists(path):
    print('File not found')
    exit(0)

with open(path, 'rb') as f:
    header = f.read(54)
    magic, size, res1, res2, offset = struct.unpack('<2sIHHI', header[:14])
    dib_size, width, height, planes, bpp, comp, img_size = struct.unpack('<IIIHHII', header[14:38])
    print(f'BMP: {width}x{height}, {bpp} bpp, data offset: {offset}')
    f.seek(offset)
    raw_pixels = f.read()

total_pixels = width * abs(height)
bytes_per_px = bpp // 8
row_padded = (width * bytes_per_px + 3) & ~3

non_black = 0
bright_pixels = 0
max_val = 0
for y in range(abs(height)):
    row = raw_pixels[y * row_padded : y * row_padded + width * bytes_per_px]
    for x in range(0, len(row), bytes_per_px):
        b = row[x]
        g = row[x+1]
        r = row[x+2]
        if b > max_val: max_val = b
        if g > max_val: max_val = g
        if r > max_val: max_val = r
        if b > 10 or g > 10 or r > 10:
            non_black += 1
        if b > 80 or g > 80 or r > 80:
            bright_pixels += 1

print(f'Total pixels: {total_pixels}')
print(f'Non-black pixels (>10): {non_black} ({non_black*100.0/total_pixels:.2f}%)')
print(f'Bright pixels (>80): {bright_pixels} ({bright_pixels*100.0/total_pixels:.2f}%)')
print(f'Max brightness sample: {max_val}')
