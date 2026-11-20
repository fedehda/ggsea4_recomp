with open(r"C:\Users\fede\.gemini\antigravity\brain\8c13d84b-9af8-4e89-a087-46bb49854c7b\.system_generated\logs\transcript.jsonl", "r", encoding="utf-8", errors="ignore") as f:
    for line in f:
        if "dock_gameplay_audit" in line:
            print(line[:300])
