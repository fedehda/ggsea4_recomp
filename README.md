# ggsea4_recomp

GameCube recompilation workspace and tooling.

## Legal / Copyright Notice

This repository does **not** contain any copyrighted game assets, ISOs, extracted binaries, or recompiled game source code. To build and run the project locally, you must provide your own legally obtained game dump.

## Local Setup

1. Place your game ISO(s) in `input/` (e.g., `input/game.iso`, `input/game_disc2.iso`).
2. Ensure `dtk.exe` and the `llvm-mingw` toolchain are available in `tools/`.
3. Run the pipeline from `tools/run_pipeline.py`.
4. Build the module in `module_build/` using CMake.
