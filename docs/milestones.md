# Milestones del Proyecto (`ggsea4_recomp`)

Registro de hitos completados y fases futuras para la recompilación estática y runtime nativo de **GGSEA4** (*Metal Gear Solid: The Twin Snakes*).

---

## Etapa Previa: Pipeline de Recompilación Estática

* **Fases 1 a 5 de Decompilación y Extracción (COMPLETADAS):** Extracción de `main.dol` y `mgso.rel` desde `input/`, generación de símbolos con `dtk.exe` y traducción PowerPC → C++ mediante `DolRecomp` (ver [decomp_notes.md](file:///D:/Documents/VSCode/gc-recomp-workspace/docs/decomp_notes.md)).

---

## Fases Completadas del Runtime (`ggsea4_gfx_runtime.exe` + `ModernGekko`)

### Hitos Fundacionales (2026-10-20 — 2026-11-17)
* **EFB Virtual y Ventana:** Framebuffer virtual `640x480` RGBA8 + Depth24, presentación doble buffer, aspect ratio `4:3`/`16:9`, fullscreen (`F11`/`Alt+Enter`), captura `F12` y HUD diagnóstico (`F1`).
* **Transformaciones y MemCard:** Matrices XF (perspectiva/ortográfica), estados BP (`ZMode`, `BlendMode`, `AlphaCompare`), y Memory Card virtual 251 persistente (`memcardA.raw`, 2 MB) con subsistema HLE `CARD`/`EXI`.
* **Codec Inicial y Estabilidad:** Captura GPU de fondo de Codec en `DCInvalidateRange` y guarda de bucle post-Codec hacia `area01a`.

### Fase 1 — Arranque, HUD y Estabilidad de Audio (COMPLETADA — 2026-11-20)
* **Evidencia:** [report-20261120-012000.md](file:///D:/Documents/VSCode/gc-recomp-workspace/.agents/qa/reports/report-20261120-012000.md) (**PASSED**, `2800` frames).
* **Logros:**
  * Arranque limpio a través de `__start`, `main`, `mgso::_prolog`, `mgso::main` y `mgso::thread` con `OSPanic=0` (`183/183` direcciones hookeadas).
  * Sanitización de atributos de vértices en `BuildGpuVertexBatch` (corrección de oscurecimiento Z-clip en `r_title` y continuidad de HUD/Soliton Radar en `area01a`).
  * Retiro limpio de voces/streams (`0x7F0185C0u`, `0x80054EC8u`, `AudioChild_StoppingAct`), eliminando timeouts en Codec #1 y #2.

### Fase 2 — OpenGL 4.5 Core Profile + `ModernGekko::DolphinVideo` (COMPLETADA — 2026-11-21)
* **Evidencia:** [report-20261121-110014.md](file:///D:/Documents/VSCode/gc-recomp-workspace/.agents/qa/reports/report-20261121-110014.md) (**PASSED**, `2800` frames).
* **Logros:**
  * Migración a **OpenGL 4.5.0 Core Profile** puro (`GL_TEXTURE_2D_ARRAY`, `GL_TEXTURE_SWIZZLE_RGBA`).
  * Corrección de desbordamiento de Scissor en el Radar (`f=2200..2700`) y barra `LIFE` estable.
  * Pipeline `ModernGekko::DolphinVideo` activado por defecto (`61` shaders GLSL 4.50 compilados, `0` errores GL/shader) y fallback `--legacy-renderer`.
  * Teardown limpio de recursos al salir (`ShutdownGlResources`) y clamp de fence en ring-buffer.

### Fase 3 — Iluminación, Batching (60+ FPS), Audio/Códec y Limpieza Vorbis (COMPLETADA — 2026-11-24)
* **Evidencia:** [report-20261124-020800.md](file:///D:/Documents/VSCode/gc-recomp-workspace/.agents/qa/reports/report-20261124-020800.md) (**PASSED**, `4500`/`5500` frames).
* **Logros:**
  * Correcciones de iluminación en `tools/ModernGekko` (NaN/overflow, normales, matrices fuera de rango) y tracking granular de estado sucio (`GxStateView`).
  * Batching de draws (`FlushDolphinBatch` + `SubmitDolphinDraw`), reduciendo `GLDraws/f` ~6× (`6140` → `316..1065`) y alcanzando **`61.7–110.0 FPS`** (`f=4100..5500`, `--turbo`).
  * `Ggsea4VirtualMemoryCard::save_if_dirty()` para evitar escrituras redundantes en disco.
  * Limpieza del decodificador Vorbis (`cleanup_stale_vorbis_decoder()`, `OSCancelThread` + `DestroyStreamSlot` en `release_stream_slot_for_voice()`), resolviendo el crash/fuga de heap en `f=2709`.
  * Límite temporal determinístico en CLI (`--max-seconds <N>` / `--timeout <N>`, retorno `2` al expirar).

---

## Fases Pendientes / Próximos Hitos

> Nota: Las siguientes fases aún no cuentan con reporte de cierre QA; representan la hoja de ruta pendiente a partir de lo no cubierto en Fase 3.

### Fase 4 — Validación Manual Interactiva y Transición In-Game (>4500 frames)
* **Objetivo:** Verificar de punta a punta la experiencia jugable real bajo control del usuario ("eye wins").
* **Alcance pendiente:**
  * Recorrido manual completo más allá del frame `4500`: logo Konami, cinemática de intro completa, ascensor tras salida y llamadas Codec en vivo.
  * Validación interactiva de `NEW GAME -> GAME START YES`, cámara en tercera persona, frustum/profundidad Z y luces XF en el prólogo (`area01a` / muelle de carga).
  * Pulido de entrada (deadzones XInput/DirectInput, navegación de menús sin saltos accidentales).

### Fase 5 — Estabilidad Prolongada, Progresión Multi-Área y Submódulos
* **Objetivo:** Consolidar sesiones largas de juego y mantener la higiene del repositorio.
* **Alcance pendiente:**
  * Auditoría de fugas de memoria (VBOs, texturas, heap guest) en sesiones prolongadas y cambios de área/disco (`game_disc2.iso`).
  * Revisión y commit independiente de los cambios pendientes dentro de `tools/ModernGekko` y `tools/DolRecomp`.
  * Empaquetado y documentación final de distribución local.
