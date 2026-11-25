# ggsea4_recomp

GameCube static recompilation workspace and native runtime for **GGSEA4** (*Metal Gear Solid: The Twin Snakes*, `main.dol` & `mgso.rel`).

## Current Status (Phase 3 Verified — 2026-11-24)

* **Boot & Execution:** Native runtime (`ggsea4_gfx_runtime.exe` + `GGSEA4.dll`) boots cleanly through `__start`, `main`, `mgso::_prolog`, `mgso::main`, and `mgso::thread` with `OSPanic=0` (`183/183` hooked addresses).
* **Graphics Pipeline (`OpenGL 4.5 Core` + `ModernGekko`):**
  * Pure OpenGL 4.5 Core Profile with `ModernGekko::DolphinVideo` (`libmoderngekko_dolphin_video.a`) enabled by default (61 GLSL 4.50 shaders compiled, `0` GL/shader errors) and `--legacy-renderer` fallback.
  * Lighting shader fixes (NaN/overflow, normals, OOB matrices) and granular `GxStateView` dirty tracking eliminate black-core and background clipping artifacts.
  * Draw batching (`FlushDolphinBatch` + `SubmitDolphinDraw`) reduces `GLDraws/f` by ~6× (`6140` → `316..1065`), achieving **`61.7–110.0 FPS`** (`f=4100..5500`, `--turbo`).
  * `BP 0x59` scissor offset, relaxed viewport limits, cached `glDepthRange`, and dirty-checked virtual Memory Card writes (`Ggsea4VirtualMemoryCard::save_if_dirty()`).
* **Audio, Codec & Stability:**
  * Stream teardown, bitrate-regulated draining, and Vorbis decoder cleanup (`cleanup_stale_vorbis_decoder()`, `OSCancelThread` + `DestroyStreamSlot`) resolved the `f=2709` heap/crash issue.
  * Automated verification (`--frames 4500 --turbo --auto-skip --test-codec --max-seconds 40`) passes with `0` `OSPanic`, `0` `GUARD-OS-PROTECT`, `0` `GFX-GL-ERR`, `0` `DOLPHIN-SHADER-ERR`, and `0` `TIMEOUT`.
* **CLI Tooling:** Supports `--frames`, `--turbo`, `--auto-skip`, `--test-codec`, `--dump-every`, `--legacy-renderer`, and deterministic `--max-seconds <N>` (`--timeout <N>`) exit (`EXIT=2` on timeout).

## Milestone History

* **Phase 1 (2026-11-20) — Boot, HUD & Audio Stability:** Fixed `r_title` Z-clip darkening, `area01a` HUD/Soliton Radar continuity, and Codec #1/#2 stream cleanup timeouts.
* **Phase 2 (2026-11-21) — OpenGL 4.5 Core + ModernGekko DolphinVideo:** Migrated to OpenGL 4.5 Core (`GL_TEXTURE_2D_ARRAY`, `GL_TEXTURE_SWIZZLE_RGBA`), fixed Radar Scissor spill, and enabled the DolphinVideo shader pipeline.
* **Phase 3 (2026-11-24) — Lighting, Batching (60+ FPS), Audio/Codec & Vorbis Cleanup:** Resolved lighting NaNs/clipping, added draw batching, fixed the `f=2709` Vorbis decoder leak, and added `--max-seconds` CLI timeout.

## Next / Pending

* **Interactive Manual Playtesting (>4500 frames):** Live user verification of the Konami logo, full intro cutscene, post-exit elevator sequence, live Codec calls, and `NEW GAME -> GAME START YES` gameplay/input.

## Legal / Copyright Notice

This repository does **not** contain any copyrighted game assets, ISOs, extracted binaries, or recompiled game source code. To build and run the project locally, you must provide your own legally obtained game dump.

## Local Setup & Build

1. Place your game ISO(s) in `input/` (e.g., `input/game.iso`, `input/game_disc2.iso`).
2. Ensure `dtk.exe` and the `llvm-mingw` toolchain are available in `tools/`.
3. Run the pipeline from `tools/run_pipeline.py`.
4. Build the runtime with CMake / Ninja:
   ```powershell
   cmake --build tools/ModernGekko/build --config Release
   cmake --build module_build/build --config Release
   ```
5. Run automated verification:
   ```powershell
   .\module_build\build\ggsea4_gfx_runtime.exe --frames 4500 --turbo --auto-skip --test-codec --max-seconds 40
   ```
