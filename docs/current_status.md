# Estado Actual del Proyecto (`ggsea4_recomp`)

**Fecha de corte:** 2026-11-26  
**Último hito verificado:** Fase 3 (**PASSED** — [report-20261124-020800.md](file:///D:/Documents/VSCode/gc-recomp-workspace/.agents/qa/reports/report-20261124-020800.md))  
**Rama y commit:** `main` @ `2970451` (sincronizado con `origin/main`)

---

## Resumen Ejecutivo

El runtime nativo (`ggsea4_gfx_runtime.exe` + `GGSEA4.dll` + `ModernGekko`) arranca de forma limpia, renderiza sobre **OpenGL 4.5 Core Profile** con el pipeline de shaders `DolphinVideo` a **60+ FPS** en pruebas `--turbo`, y supera de forma automatizada hasta **4500–5500 fotogramas** sin `OSPanic`, errores GL/shader ni el crash previo de decodificación Vorbis en `f=2709`.

---

## Qué Funciona y Está Verificado

| Área | Estado | Evidencia / Métricas |
| :--- | :--- | :--- |
| **Boot y Ejecución** | Verificado | Arranque completo (`__start` → `main` → `mgso::_prolog` → `mgso::main` → `mgso::thread`), `183/183` hooks, `OSPanic=0`. |
| **Gráficos (OpenGL 4.5 Core)** | Verificado | `61` shaders GLSL 4.50 compilados; `0` `GFX-GL-ERR` / `DOLPHIN-SHADER-ERR`; correcciones de iluminación, scissor 9-bit y viewport. |
| **Rendimiento (Batching)** | Verificado | Reducción ~6× de `GLDraws/f` (`6140` → `316..1065`); **`61.7–110.0 FPS`** en `f=4100..5500` (`--turbo`) y `397.6 FPS` en `--test-codec`. |
| **Audio / Códec / Vorbis** | Verificado | Limpieza de streams y decodificador Vorbis (`cleanup_stale_vorbis_decoder()`); superado `f=2709` hasta `f=4500` sin cuelgues ni fugas fatales. |
| **Memory Card Virtual** | Verificado | `memcardA.raw` (2 MB, formato 251) con `save_if_dirty()` sin escrituras redundantes en disco. |
| **CLI y Pruebas** | Verificado | Timeout determinístico `--max-seconds <N>` (`EXIT=2` al expirar) y fallback `--legacy-renderer`. |

---

## Lo Que Falta / Pendiente de Verificación

1. **Juego Manual Interactivo (>4500 frames):** No probado automáticamente más allá del frame `4500` (logo Konami, intro completa, ascensor tras salida, llamadas Codec en vivo con usuario y control manual completo en `NEW GAME -> GAME START YES`).
2. **Calibración Final de Controles y Sesiones Largas:** Ajuste fino de deadzones XInput/DirectInput en juego continuo y auditoría de memoria en cambios de área prolongados.
3. **Higiene de Submódulos:** `tools/ModernGekko` y `tools/DolRecomp` mantienen modificaciones locales dentro de sus propios repositorios aún sin commitear en sus respectivas ramas.

---

## Comandos de Build y Verificación Rápida

```powershell
# Compilar ModernGekko y el runtime en Release
cmake --build tools/ModernGekko/build --config Release
cmake --build module_build/build --config Release

# Regresión automatizada (Fase 3: Codec + Vorbis + Batching)
.\module_build\build\ggsea4_gfx_runtime.exe --frames 4500 --turbo --auto-skip --test-codec --max-seconds 40
```
