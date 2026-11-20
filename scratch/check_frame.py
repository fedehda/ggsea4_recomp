with open(r"D:\Documents\VSCode\gc-recomp-workspace\scratch\dock_gameplay_audit.log", "r", encoding="utf-16", errors="ignore") as f:
    in_frame_4000 = False
    count = 0
    for line in f:
        if "frame=4000" in line or "frame 4000" in line:
            in_frame_4000 = True
        if in_frame_4000:
            print(line.strip()[:140])
            count += 1
            if count > 100:
                break
