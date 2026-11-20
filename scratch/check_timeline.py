with open(r"D:\Documents\VSCode\gc-recomp-workspace\scratch\dock_gameplay_audit.log", "r", encoding="utf-16", errors="ignore") as f:
    in_range = False
    for line in f:
        if "frame=1500" in line:
            in_range = True
        if "frame=2100" in line:
            in_range = False
            break
        if in_range:
            l = line.strip()
            if any(k in l for k in ["[STAGE", "[DVD", "[MOVIE", "[DEMO", "CARGA", "FATAL", "PANIC", "ERROR", "TRACE-F318", "THREAD", "LoadBank", "GXSetProjection", "area01a"]):
                print(l[:140])
