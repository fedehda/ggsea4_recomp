with open(r"D:\Documents\VSCode\gc-recomp-workspace\scratch\dock_gameplay_audit.log", "r", encoding="utf-16", errors="ignore") as f:
    last_frame = "none"
    for i, line in enumerate(f):
        if "[RENDER-SRC]" in line:
            last_frame = line.strip()
        if i+1 in [60940, 60950, 60980, 97100, 100480, 100500]:
            print(f"Line {i+1}: {last_frame}")
