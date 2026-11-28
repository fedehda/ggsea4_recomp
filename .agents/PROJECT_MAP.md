# GGSEA4 Project Map (MGS: The Twin Snakes Static Recompilation)

Workspace raíz: `D:\Documents\VSCode\gc-recomp-workspace`
Target actual: **OpenGL 4.5 Core Profile** (migración a **Vulkan** en fase posterior).

## 1. Comandos de Build
```powershell
Set-Location "D:\Documents\VSCode\gc-recomp-workspace"
cmake --build tools/ModernGekko/build --config Release
cmake --build module_build/build --config Release --target ggsea4_gfx_runtime
```
*(Si se agregan/renombran archivos en `CMakeLists.txt`, correr antes `cmake -S module_build -B module_build/build`.)*

## 2. Política de Tests Automatizados (SIEMPRE acotados y filtrados)
- **SIEMPRE** pasar `--max-seconds <N>` (alias `--timeout <N>`); al vencer retorna `EXIT_CODE=2` e imprime `[TIMEOUT]`.
- **SIEMPRE** redirigir stdout/stderr a un log y filtrar con `Select-String` (nunca volcar miles de líneas al chat).
- Flags `--auto-skip`, `--test-codec`, `--test-move` y `--legacy-renderer` son estrictamente opt-in.
- Captura de frames: `--dump-every <N>` (no `--dump-frames`).

```powershell
# Smoke perf + boot (sin auto-skip)
Set-Location "D:\Documents\VSCode\gc-recomp-workspace"
.\module_build\build\ggsea4_gfx_runtime.exe --frames 1200 --turbo --max-seconds 20 *> "$env:TEMP\ggsea4_smoke.log"
"EXIT=$LASTEXITCODE"
Select-String -Path "$env:TEMP\ggsea4_smoke.log" -Pattern 'ERR|GUARD|PANIC|TIMEOUT|PERF-PROF|Resumen|Bloques' | Select-Object -Last 30

# Regresión Codec + Vorbis teardown (pasa el antiguo crash f=2709 hasta f=4500)
.\module_build\build\ggsea4_gfx_runtime.exe --frames 4500 --turbo --auto-skip --test-codec --max-seconds 40 *> "$env:TEMP\ggsea4_codec.log"
"EXIT=$LASTEXITCODE"
Select-String -Path "$env:TEMP\ggsea4_codec.log" -Pattern 'ERR|GUARD|PANIC|TIMEOUT|CODEC-OPEN-VOX|CODEC-CLOSE-VOX|AUDIO-HLE|Resumen' | Select-Object -Last 40
```

## 3. Arquitectura Modular (`module_build/src/runtime/`)
`ggsea4_gfx_runtime.cpp` (10k líneas) fue dividido en módulos enfocados para minimizar contexto y preparar la frontera Vulkan (`moderngekko::GxRenderDevice`):
- `runtime_common.hpp` (~304L): tipos base, `RuntimePerfCounters`, GL loader typedefs, `read_guest_cstring`/`resolve_guest_ptr`.
- `gx_dolphin_gl.hpp` (~704L): declaración de `Ggsea4RenderDevice` (implementa `moderngekko::GxRenderDevice`).
- `gx_dolphin_gl.cpp` (~1525L): ciclo de vida GL 4.5 Core, `DolphinVideo` shader compiler, viewport/scissor, `SubmitDolphinDraw` + batching.
- `gx_legacy_gl.cpp` (~2038L): fallback `--legacy-renderer` (TEV shader gen + `ggsea4_tev_precache.inl`).
- `gx_textures_present.cpp` (~902L): `CopyEfb`, `PresentXfb`, `RenderFrameToWindow`, `ResolveStageTexture`, YUY2/BMP.
- `memcard_dvd_hle.hpp` / `memcard_dvd_hle.cpp` (~406L / ~952L): FST, `Ggsea4VirtualMemoryCard::save_if_dirty()`, hooks DVD/PAD/CARD/EXI.
- `runtime_context.hpp` (~211L): `GfxRuntimeContext`, `GameCubeMMIOState`, `HookResult`, firmas internas.
- `window_input_mmio.cpp` (~910L): Win32/WGL, XInput/PAD, `present_frame`, MMIO/SPR/cache callbacks.
- `audio_vorbis_hle.cpp` (~419L): `call_guest_fn1` (EABI 32B), `cleanup_stale_vorbis_decoder`, `release_stream_slot_for_voice`, hooks `0x8005xxxx`.
- `codec_hooks.cpp` (~589L): hooks MGSO/REL, Codec, Movie, VP31 (`0x7Fxxxxxx`).
- `os_gx_hooks.cpp` (~738L): `kHookedAddrs`, `kHostHookBloom`, `host_call_hook`, libc/OS/Thread/GX/VI.
- `main_loop.cpp` (~587L): CLI (`--max-seconds`), carga DOL/REL, loop principal y crash handler.

Backend shaders/estado en `tools/ModernGekko/`:
- `vendor/dolphin_legacy/VideoCommon/{LightingShaderGen,VertexShaderGen}.cpp`
- `src/gpu/{dolphin_shader_compiler,gx_state_backend}.cpp`

## 4. Direcciones Guest Clave (GGSEA4 — main.dol & mgso.rel)
### Audio / Vorbis / Streams (`main.dol`)
- `0x8002423C` — `OSCancelThread` (usado sobre hilo Vorbis `0x8027BA80`, estado en `+712`).
- `0x800501FC` / `0x80050B54` — voice stop request (`0x8020E5C0[64]`, stride `212`, active `+208`, flags `+176`).
- `0x80051AA0` / `0x80051AF0` — stream readiness priming / virtual clock.
- `0x80051BB0` / `0x80051D14` — stream voice guards.
- `0x80052F94` — `DestroyStreamSlot` sobre `0x8021A4B0[8]` (stride `268`, ej. slot `0x8021A6C8`, state `+220`, flags `+224`).
- `0x80054EC8` — stage-transition audio wait barrier (`LR=0x7F198028`).
- `0x8005608C` — `FreeVorbisPoolTag(2)`.
- `0x800569D8` / `0x800569E4` / `0x800569F4` / `0x80056BDC` — Vorbis decoder lifecycle & wait flag `0x8027DD98` (decoder slots `0x8027B820[8]`, stride `28`).
- `0x80056B4C` — `DestroyOggStream`.

### Codec / Movie / MGSO (`mgso.rel` base `0x7F008000`)
- `0x7F0080EC` / `0x7F008174` / `0x7F3C7CC8` — `_prolog` / main thread / main frame loop.
- `0x7F017838` / `0x7F017934` — StreamActor pre-roll (`0x7F4A4B40`) & cleanup timeout.
- `0x7F017DC4` / `0x7F017E90` — Codec open/close VOX (`[CODEC-OPEN-VOX]` / `[CODEC-CLOSE-VOX]`).
- `0x7F0185C0` — `AudioChild_StoppingAct`.
- `0x7F01893C` — bitrate-paced audio/codec drain.
- `0x7F41BF28` / `0x7F41BFC4` — VP31 video init / decode frame.

### OS / VI / GX / DVD / CARD (`main.dol`)
- `0x800000E4` — `OSCurrentThread` pointer.
- `0x80023F34` — `OSYieldThread`; `0x8002B64C` / `0x8002C8F0` — `VIWaitForRetrace`; `0x8002C800` — `VISetNextFrameBuffer`.
- `0x80042974` / `0x800429C0` — `GXWaitDrawDone` / `GXDrawDone`; `0x80046538` / `0x80046600` — DisplayList begin/end.
- `0x80027xxx` — DVD HLE; `0x80039xxx`–`0x8003Fxxx` — CARD HLE; `0x80018xxx`–`0x80019xxx` — EXI HLE.

## 5. Estado de Fases
- **Fase 1 (Aprobada):** OpenGL 4.5 Core Profile, `GL_TEXTURE_2D_ARRAY` + swizzle, fix scissor Soliton Radar, `ShutdownGlResources`, ring-buffer fence clamp.
- **Fase 2 (Aprobada):** `ModernGekko::DolphinVideo` GPU pipeline por defecto (61 shaders GLSL 4.50, 0 errores), `--legacy-renderer` opt-in.
- **Fase 3 (Compilada y verificada automáticamente; pendiente verificación interactiva del usuario):**
  - Lighting/geometry/clipping fixes en `ModernGekko` + `ScissorOffset` 9-bit + viewport sin clamp agresivo.
  - Batching Dolphin + `GxStateBackend` dirty gens + `save_if_dirty()` MemCard -> **61.7–110.0 FPS** (~6x menos GLDraws/f).
  - Fix Codec auto-skip / freezes + Vorbis teardown (`f=2709` crash resuelto hasta `f=4500`, 0 errores).
  - CLI `--max-seconds` / `--timeout` (exit code `2`) + modularización en `module_build/src/runtime/`.
- **Fase 4 (Pendiente sign-off de Fase 3):** Validación interactiva (Konami logo, intro, Codec manual con `A`, ascensor) y luego diseño/migración a backend **Vulkan** sobre `GxRenderDevice`.
