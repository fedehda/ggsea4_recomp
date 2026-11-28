# Milestones del Proyecto (`ggsea4_recomp`)

Hoja de ruta maestra hacia una recompilación estática **100% jugable** de **GGSEA4** (*Metal Gear Solid: The Twin Snakes*), junto con los checkpoints de QA verificados.

---

## Etapa Previa: Pipeline de Recompilación Estática

* **Fases 1 a 5 de Decompilación y Extracción (COMPLETADAS):** Extracción de `main.dol` y `mgso.rel` desde `input/`, generación de símbolos con `dtk.exe` y traducción PowerPC → C++ mediante `DolRecomp` (ver [decomp_notes.md](file:///D:/Documents/VSCode/gc-recomp-workspace/docs/decomp_notes.md)).

---

## Roadmap Maestro (4 Fases hacia Recompilación Jugable)

### Fase 1: Visibilidad 2D/3D Inicial (Crítica) — **COMPLETADA**
* **Objetivo:** Superar la pantalla negra inicial y renderizar el flujo de arranque.
* **Entregables:**
  * Logo inicial de Konami (`Draws 1..47`).
  * Visualización limpia de `movie.dat` en ventana.
  * Menú de título (`r_title`), fuentes tipográficas y banners.
  * Aceleración de carga asíncrona de `stage.dat`.
* **Estado:** Completada y verificada.

### Fase 2: Renderizado 3D In-Game (`sna_nod`) y Efectos EFB — **MAYORMENTE COMPLETADA**
* **Objetivo:** Habilitar el pipeline 3D completo de GameCube/Flipper y efectos de framebuffer.
* **Entregables:**
  * Migración a **OpenGL 4.5.0 Core Profile** + **`ModernGekko::DolphinVideo`** (`61` shaders GLSL 4.50, `0` errores).
  * Corrección de iluminación XF (`COLOR0A0`/`COLOR1A1`, NaN/overflow, normales, matrices OOB), scissor 9-bit y batching (`61.7–110.0 FPS` en `--turbo`).
  * Efectos `EFB-to-Texture` (`GXCopyTex`: cámara térmica, camuflaje óptico, agua y post-procesado).
  * Estabilidad del bucle jugable completo en Muelle (`Dock`) y Helipuerto.
* **Estado:** El backend `DolphinVideo` en OpenGL 4.5 Core, la iluminación XF y el batching están verificados; resta la **validación manual in-game (>4500 frames)** de `NEW GAME -> GAME START YES`, Dock/Helipuerto y efectos `GXCopyTex` específicos.

### Fase 3: Subsistema de Audio (AX / DSP) y Codec — **AVANZADA / EN PROGRESO**
* **Objetivo:** Audio en PC y funcionamiento completo del sistema de Codec.
* **Entregables:**
  * Implementación HLE de `AX`/`DSP` con salida en PC.
  * Streaming de voces (`vox.dat`), música (`bank001.spd`) y efectos.
  * Renderizado completo de la interfaz del Codec (`codec.dat` + animaciones faciales `face.dat`) y limpieza de streams/decodificador Vorbis.
* **Estado:** Codec #1/#2, retiro de voces y limpieza Vorbis (`f=2709`) verificados automáticamente hasta el frame `4500`; restan pruebas interactivas en vivo de llamadas Codec y audio sostenido más allá del frame `4500`.

### Fase 4: Pulido Final, 2 Discos y Paridad de Producción — **PENDIENTE**
* **Objetivo:** Completar el juego de principio a fin con calidad de producción.
* **Entregables:**
  * Soporte de cambio de disco virtual (`game.iso` ↔ `game_disc2.iso`).
  * Pruebas de regresión en jefes, cambios de área y cinemáticas complejas + auditoría de fugas en sesiones largas.
  * Optimización de caché de shaders (y backend opcional Vulkan/SDL3).
  * Ajustes de `16:9` nativo, calibración final de controles XInput/DirectInput y `60 FPS` constantes.
  * Sincronización/commit independiente de submódulos (`tools/ModernGekko`, `tools/DolRecomp`).

---

## Checkpoints QA Verificados

| Fecha | Checkpoint QA | Alcance Verificado | Reporte |
| :--- | :--- | :--- | :--- |
| **2026-10-20 — 2026-11-17** | Hitos Fundacionales | EFB `640x480`, matrices XF, Memory Card 251 (`memcardA.raw`), captura GPU Codec y guardas de bucle. | [history.json](file:///D:/Documents/VSCode/gc-recomp-workspace/.agents/qa/history.json) |
| **2026-11-20** | QA Fase 1 (Boot, HUD y Audio) | `OSPanic=0` (`183/183` hooks), fix Z-clip `r_title`, HUD/Radar `area01a` y retiro de voces Codec #1/#2 (`f=2800`). | [report-20261120-012000.md](file:///D:/Documents/VSCode/gc-recomp-workspace/.agents/qa/reports/report-20261120-012000.md) |
| **2026-11-21** | QA Fase 2 (OpenGL 4.5 + DolphinVideo) | OpenGL 4.5 Core puro, fix Radar Scissor, `DolphinVideo` por defecto (`61` shaders), `ShutdownGlResources` (`f=2800`). | [report-20261121-110014.md](file:///D:/Documents/VSCode/gc-recomp-workspace/.agents/qa/reports/report-20261121-110014.md) |
| **2026-11-24** | QA Fase 3 (Iluminación, Batching y Vorbis) | Fixes iluminación `ModernGekko`, batching `61.7–110.0 FPS`, MemCard `save_if_dirty()`, limpieza Vorbis (`f=2709`) y `--max-seconds` (`f=4500`/`5500`). | [report-20261124-020800.md](file:///D:/Documents/VSCode/gc-recomp-workspace/.agents/qa/reports/report-20261124-020800.md) |
