with open(r"D:\Documents\VSCode\gc-recomp-workspace\scratch\dock_gameplay_audit.log", "r", encoding="utf-16", errors="ignore") as f:
    for line in f:
        if "OSSleepThread" in line:
            print(line.strip())
