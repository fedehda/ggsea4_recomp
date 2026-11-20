# ggsea4_recomp

GameCube recompilation workspace and tooling for **GGSEA4** (*Metal Gear Solid: The Twin Snakes*, `main.dol` & `mgso.rel`).

## Current Status (Phase 1 Verified — 2026-11-20)

- **Boot & Execution:** Native module (`GGSEA4.dll` / `ggsea4_gfx_runtime.exe`) boots cleanly through `__start`, `main`, `mgso::_prolog`, `mgso::main`, and `mgso::thread` with `OSPanic=0` (`183/183` hooked addresses).
- **Graphics & HUD:**
  - Vertex attribute sanitization in `BuildGpuVertexBatch` (zeroing missing Z/NTB/texcoords) fixed the `r_title` overlay Z-clip darkening and `area01a` HUD/Soliton Radar continuity.
  - `BP 0x59` 10-bit scissor offset handling and cached `glDepthRange` implemented.
- **Audio & Codec Stability:** Stream teardown and voice slot retirement (`0x7F0185C0u`, `0x80054EC8u`) verified; Codec #1 and Codec #2 open and close cleanly without stream cleanup timeouts or memory errors.
- **Next / Pending:** Interactive manual verification (`NEW GAME -> GAME START YES`) and Phase 2 (`OpenGL 4.5 Core Profile` + `ModernGekko::DolphinVideo`).

## Legal / Copyright Notice

This repository does **not** contain any copyrighted game assets, ISOs, extracted binaries, or recompiled game source code. To build and run the project locally, you must provide your own legally obtained game dump.

## Local Setup

1. Place your game ISO(s) in `input/` (e.g., `input/game.iso`, `input/game_disc2.iso`).
2. Ensure `dtk.exe` and the `llvm-mingw` toolchain are available in `tools/`.
3. Run the pipeline from `tools/run_pipeline.py`.
4. Build the module in `module_build/` using CMake.
