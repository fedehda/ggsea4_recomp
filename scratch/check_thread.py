with open(r"D:\Documents\VSCode\gc-recomp-workspace\scratch\dock_gameplay_audit.log", "r", encoding="utf-16", errors="ignore") as f:
    found = 0
    for line in f:
        if "[THREAD-WAKE-MOVIE]" in line:
            found = 10
        if found > 0:
            print(line.strip())
            found -= 1
            if found == 0:
                break
