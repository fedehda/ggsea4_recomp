def find_bbox(path):
    with open(path, 'rb') as f:
        data = f.read()
    offset = int.from_bytes(data[10:14], 'little')
    width = int.from_bytes(data[18:22], 'little')
    height = int.from_bytes(data[22:26], 'little')
    stride = (width * 3 + 3) & ~3
    
    min_x, max_x = width, -1
    min_y, max_y = height, -1
    
    for y in range(height):
        row = data[offset + y * stride : offset + y * stride + width * 3]
        for x in range(width):
            b, g, r = row[x*3 : x*3+3]
            if (b, g, r) != (0, 0, 0):
                if x < min_x: min_x = x
                if x > max_x: max_x = x
                if y < min_y: min_y = y
                if y > max_y: max_y = y
                
    print(f"{path}: non-black bbox: x=[{min_x}..{max_x}] ({max_x - min_x + 1} px), y=[{min_y}..{max_y}] ({max_y - min_y + 1} px)")

find_bbox(r"D:\Documents\VSCode\gc-recomp-workspace\efb_frame_4000.bmp")
find_bbox(r"D:\Documents\VSCode\gc-recomp-workspace\efb_frame_4500.bmp")
find_bbox(r"D:\Documents\VSCode\gc-recomp-workspace\efb_frame_2500.bmp")
find_bbox(r"D:\Documents\VSCode\gc-recomp-workspace\efb_frame_3000.bmp")
