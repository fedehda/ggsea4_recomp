# Reglas de Operación del Agente: GameCube Static Recompilation (MGS: The Twin Snakes)

## 1. Eficiencia de Tokens y Flujo de Trabajo Guiado Visualmente por el Usuario (Basado en LostOdysseyRecomp)
- **Referencia del Proceso:** Cumplir estrictamente con [docs/AI_WORKFLOW.md](file:///D:/Documents/VSCode/gc-recomp-workspace/docs/AI_WORKFLOW.md).
- **División de Roles:**
  - El **Maintainer (Usuario)** fija prioridades y juzga los problemas visuales a simple vista ("eye wins").
  - El **Agente** diagnostica la causa raíz exacta, aplica el cambio mínimo en código, compila y presenta la captura/resultado visual sin vueltas ni teoría excesiva.
- **Autolimitación estricta de consumo de tokens:** Respuestas directas, concisas y al grano. Prohibido volcar logs masivos en el chat.
- **Iteración visual controlada:** Pausar en un fotograma fijo, cambiar una variable a la vez, compilar y entregar el frame al Maintainer para validación rápida.

## 2. Arquitectura y Especificaciones PowerPC 750CL (Gekko)
- **Endianness:** Big-Endian en origen (GameCube) -> Little-Endian en destino (x86_64). Todo acceso a memoria emulada requiere byte-swapping (`byteswap`).
- **Convención de Registros (Metrowerks / SysV PPC ABI):**
  - `r1`: Stack Pointer (SP), alineado a 8 bytes.
  - `r2`: `_SDA2_BASE_` (`.sdata2` / `.sbss2` - solo lectura/constantes).
  - `r13`: `_SDA_BASE_` (`.sdata` / `.sbss` - lectura/escritura rápida).
  - `r3` - `r10`: Argumentos enteros; retorno en `r3` (y `r4` para 64-bit).
  - `f1` - `f8`: Argumentos de punto flotante; retorno en `f1`.
  - `LR` / `CTR`: Saltos indirectos (`bctr`, `bctrl`, `blr`, `blrl`).
- **Paired Singles (`ps_*`):** Extensión SIMD de 2x32-bit float en registros FPR de 64-bit controlada por `GQR0`-`GQR7`.

## 3. Entorno de Compilación y Ejecución
- **Workspace:** `D:\Documents\VSCode\gc-recomp-workspace`
- **Compilador:** LLVM-MinGW / Clang con Ninja:
  - Comando build: `ninja -C D:\Documents\VSCode\gc-recomp-workspace\module_build\build ggsea4_gfx_runtime`
- **Flags críticos:** `-O3 -march=native -fno-strict-aliasing`
- **Ejecutable destino:** `module_build\build\ggsea4_gfx_runtime.exe`

## 4. Políticas de Seguridad (Asklist y Denylist)
- Prohibido terminantemente ejecutar `git push`, `git reset --hard`, `git checkout .`, o eliminar archivos del proyecto sin autorización.
- Respetar siempre la codificación UTF-8 pura en scripts y archivos.

## 5. Lecciones Aprendidas y Reglas Antirregresión Gráfica
- **Cero Overrides Globales en GX:** Prohibido alterar descriptores de vértices o registros GX globalmente (p. ej. forzar atributos en `vat == 4`). Los módulos (`mgso.rel` y DOL) configuran tablas de atributos distintas para 2D, 3D y secuencias de arranque.
- **Entradas Simuladas Exclusivamente con `--auto-skip`:** Toda pulsación automática de botones (START, A, D-Pad) debe estar estrictamente protegida bajo `if (rctx->auto_skip)`. Las ejecuciones interactivas deben quedar en manos exclusivas del usuario.
- **Display Lists en RAM (`0xCC008000`):** Cuando `dl_active` esté habilitado entre `GXBeginDisplayList` y `GXEndDisplayList`, las escrituras en el pipe de comandos deben canalizarse a la memoria RAM del Guest para que `GXCallDisplayList` pueda consumirlas sin pérdida de comandos.
- **Blit Final de EFB a Ventana:** No forzar blits directos del EFB crudo si ya existe un frame completo procesado (`m_efb_has_displayable_frame`), evitando parpadeos y recortes laterales a 512x448.

