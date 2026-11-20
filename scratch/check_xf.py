with open(r"D:\Documents\VSCode\gc-recomp-workspace\scratch\dock_gameplay_audit.log", "r", encoding="utf-16", errors="ignore") as f:
    for line in f:
        if "AUDIT-XF" in line or "cam_proj" in line or "chan_c" in line or "eval_channel" in line:
            print(line.strip())
