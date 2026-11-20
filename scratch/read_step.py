import json

with open(r"C:\Users\fede\.gemini\antigravity\brain\8c13d84b-9af8-4e89-a087-46bb49854c7b\.system_generated\logs\transcript_full.jsonl", "r", encoding="utf-8", errors="ignore") as f:
    for line in f:
        obj = json.loads(line)
        idx = obj.get("step_index")
        if idx in [581, 582, 583, 584, 585, 586, 587, 588, 589]:
            print(f"=== STEP {idx} ===")
            if "thinking" in obj:
                print("Thinking:", obj["thinking"][:500])
            if "tool_calls" in obj:
                print("Tool calls:", obj["tool_calls"])
            if "content" in obj:
                print("Content:", str(obj["content"])[:300])
