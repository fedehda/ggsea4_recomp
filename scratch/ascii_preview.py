import os, struct

path = 'D:/Documents/VSCode/gc-recomp-workspace/screenshot_frame_140.bmp'
with open(path, 'rb') as f:
    header = f.read(54)
    magic, size, res1, res2, offset = struct.unpack('<2sIHHI', header[:14])
    dib_size, width, height, planes, bpp, comp, img_size = struct.unpack('<IIIHHII', header[14:38])
    f.seek(offset)
    raw_pixels = f.read()

bytes_per_px = bpp // 8
row_padded = (width * bytes_per_px + 3) & ~3

# Create an 80x24 block ASCII map
ascii_w = 80
ascii_h = 24
step_x = width // ascii_w
step_y = abs(height) // ascii_h

chars = " .:-=+*#%@"
print("--- VISTA PREVIA ASCII DE LA PANTALLA (960x720) ---")
for ay in range(ascii_h):
    line = ""
    for ax in range(ascii_w):
        # Sample the block
        lum_sum = 0
        samples = 0
        for sy in range(0, step_y, 4):
            py = (ascii_h - 1 - ay) * step_y + sy # Flipped because BMP is bottom-up
            row = raw_pixels[py * row_padded : py * row_padded + width * bytes_per_px]
            for sx in range(0, step_x, 4):
                px = ax * step_x + sx
                idx = px * bytes_per_px
                b, g, r = row[idx], row[idx+1], row[idx+2]
                lum = int(0.299 * r + 0.587 * g + 0.114 * b)
                lum_sum += lum
                samples += 1
        avg_lum = lum_sum // max(1, samples)
        char_idx = min(len(chars) - 1, avg_lum * len(chars) // 256)
        line += chars[char_idx]
    print(line)
