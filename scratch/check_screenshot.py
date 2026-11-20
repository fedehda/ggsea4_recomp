import os
from PIL import Image

bmp_path = 'screenshot_frame_140.bmp'
if not os.path.exists(bmp_path):
    # Probar con los screenshots existentes
    bmps = [f for f in os.listdir('.') if f.endswith('.bmp')]
    print('Available bmps:', bmps)
    if bmps:
        bmp_path = bmps[-1]

if os.path.exists(bmp_path):
    im = Image.open(bmp_path)
    ext = im.getextrema()
    print('Analyzing:', bmp_path, 'Size:', im.size)
    print('Extrema:', ext)
    pixels = list(im.getdata())
    non_black = sum(1 for p in pixels if (isinstance(p, tuple) and (p[0] > 10 or p[1] > 10 or p[2] > 10)))
    print('Non-black pixels:', non_black, '/', len(pixels))
else:
    print('No BMP found.')
