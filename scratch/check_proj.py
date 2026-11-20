with open(r"D:\Documents\VSCode\gc-recomp-workspace\scratch\dock_gameplay_audit.log", "r", encoding="utf-16", errors="ignore") as f:
    printing = 0
    for line in f:
        if "[GX-PROJ]" in line and "type=0" in line:
            printing = 5
        if printing > 0:
            print(line.strip())
            printing -= 1
            if printing == 0:
                break
