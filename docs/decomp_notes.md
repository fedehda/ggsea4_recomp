# Notas de Decompilación y Ficha Técnica del Binario (`main.dol` & `mgso.rel`)

> **Estado actual:** Fases 1 a 5 completadas exitosamente sobre `input/game.iso` (*Metal Gear Solid: The Twin Snakes*, `GGSEA4`). Módulo nativo compilado en `module_build/build/GGSEA4.dll`.

---

## 1. Identificación del Disco (`sys/boot.bin` & `sys/bi2.bin`)

| Campo | Valor | Offset en `boot.bin` |
| :--- | :--- | :--- |
| **Game ID (6 chars)** | `GGSEA4` | `0x0000 - 0x0005` |
| **Game Code (4 chars)** | `GGSE` | `0x0000 - 0x0003` |
| **Maker Code (2 chars)** | `A4` (Konami) | `0x0004 - 0x0005` |
| **Disc ID / Number** | `0x00` (Disc 1) | `0x0006` |
| **Disc Version / Revision** | `0x00 (Rev 0)` | `0x0007` |
| **Game Title** | `METAL GEAR SOLID THE TWIN SNAKES` | `0x0020 - 0x005F` |
| **DOL Offset** | `0x0001F700` | `0x0420` |
| **FST Offset / Size** | `0x00205000 / 0x000071DC (29,148 bytes)` | `0x0424 / 0x0428` |
| **SHA-1 (`main.dol`)** | `4864afb5eacc8dd11ad98dbf14f79053767d7a6d` | `sys/main.dol` |

---

## 2. Arquitectura de Secciones del Ejecutable (`sys/main.dol`)

### 2.1 Punteros Globales y Entry Point
- **Entry Point (`__start`):** `0x80005240` (`main` en `0x80006958`)
- **`_SDA_BASE_` (`r13`):** `0x80285DC0` (base de `.sdata` / `.sbss`, offset `+0x8000` desde `0x8027DDC0`)
- **`_SDA2_BASE_` (`r2`):** `0x802864A0` (base de `.sdata2`, offset `+0x8000` desde `0x8027E4A0`)
- **Stack & Arena:**
  - `_stack_end`: `0x8027EB38`
  - `_stack_addr`: `0x8028EB38`
  - `_db_stack_addr`: `0x80290B38`
  - `__ArenaLo`: `0x80290B40`
  - `__ArenaHi`: `0x81700000`
- **Tamaño de `.bss`:** `0x801E8000` (`0x95DA4` bytes en sección `.bss` / `0x9649C` bytes total BSS en cabecera DOL)

### 2.2 Tabla de Secciones (`main.dol`)

| Sección | Tipo | Dirección Virtual Inicio | Dirección Virtual Fin | Tamaño (Bytes) | Offset en DOL | Alineación |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| `.init` | Code | `0x80003100` | `0x800055C8` | `0x0024C8` (9,416 B) | `0x000100` | 4 |
| `.text` | Code | `0x800055E0` | `0x80062234` | `0x05CC54` (379,988 B) | `0x0025E0` | 32 |
| `.ctors` | Rodata | `0x80062240` | `0x80062244` | `0x000004` (4 B) | `0x05F240` | 16 |
| `.dtors` | Rodata | `0x80062260` | `0x80062268` | `0x000008` (8 B) | `0x05F260` | 32 |
| `.rodata` | Rodata | `0x80062280` | `0x80066638` | `0x0043B8` (17,336 B) | `0x05F280` | 32 |
| `.data` | Data | `0x80066640` | `0x801E7FF4` | `0x1819B4` (1,579,444 B) | `0x063640` | 16 |
| `.bss` | Bss | `0x801E8000` | `0x8027DDA4` | `0x095DA4` (613,796 B) | `0x000000` | 16 |
| `.sdata` | Data | `0x8027DDC0` | `0x8027DF70` | `0x0001B0` (432 B) | `0x1E5000` | 32 |
| `.sbss` | Bss | `0x8027DF80` | `0x8027E49C` | `0x00051C` (1,308 B) | `0x000000` | 32 |
| `.sdata2` | Rodata | `0x8027E4A0` | `0x8027EB38` | `0x000698` (1,688 B) | `0x1E51C0` | 8 |

---

## 3. Módulos Relocalizables (`.rel` / `.rso`)

- **Archivo detectado:** `input/extracted/files/shared/mgso.rel`
- **SHA-1:** `239b8426c412b7c58490ccc6e4b7c0c6d78a0340`
- **Module ID:** `1` (`entry: _prolog`)
- **Secciones de `mgso.rel` (desensamblado en `analysis/mgso/asm/`):**
  - `.text`: `4,540,760` bytes (~4.54 MB de código de motor/juego)
  - `.rodata`: `72,660` bytes
  - `.data`: `170,416` bytes
  - `.bss`: `426,256` bytes
- **Total de funciones analizadas por `dtk` (`main.dol` + `mgso.rel`):** `18,482` funciones (`1,822` en `main.dol` + `16,660` en `mgso.rel`).

---

## 4. Identificación de Compilador y Librerías del SDK

### 4.1 Metrowerks CodeWarrior (MWCC)
- **Compilador y Runtime:** Metrowerks CodeWarrior for GameCube (`Runtime.PPCEABI.H.a` + `MetroTRK`).
- **Símbolos del Runtime detectados en `main.dol` (`12` funciones principales):**
  - `__start` (`0x80005240`), `__init_registers` (`0x8000539C`), `__init_data` (`0x8000542C`), `__init_hardware` (`0x800054EC`), `__flush_cache` (`0x80005510`)
  - `memset` (`0x800050B4`), `__fill_mem` (`0x800050E4`), `memcpy` (`0x8000519C`), `memmove` (`0x80011AF4`)

### 4.2 Dolphin OS / Nintendo GameCube SDK (`0x2301`)
Cadenas de versión extraídas de `.data` en `main.dol`:
- `<< Dolphin SDK - EXI release build: Apr 17 2003 12:33:17 (0x2301) >>`
- `<< Dolphin SDK - SI release build: Apr 17 2003 12:33:19 (0x2301) >>`
- `<< Dolphin SDK - OS release build: Jul 23 2003 11:27:16 (0x2301) >>`
- `<< Dolphin SDK - DVD release build: Jul 23 2003 11:27:57 (0x2301) >>`
- `<< Dolphin SDK - VI release build: Apr 17 2003 12:33:22 (0x2301) >>`
- `<< Dolphin SDK - PAD release build: Aug  6 2003 04:30:02 (0x2301) >>`
- `<< Dolphin SDK - AI release build: Apr 17 2003 12:33:54 (0x2301) >>`
- `<< Dolphin SDK - AR release build: Apr 17 2003 12:33:55 (0x2301) >>`
- `<< Dolphin SDK - ARQ release build: Apr 17 2003 12:33:56 (0x2301) >>`
- `<< Dolphin SDK - AX release build: Jul 29 2003 16:15:36 (0x2301) >>`
- `<< Dolphin SDK - DSP release build: Apr 17 2003 12:34:16 (0x2301) >>`
- `<< Dolphin SDK - CARD release build: Apr 17 2003 12:34:19 (0x2301) >>`
- `<< Dolphin SDK - GX release build: Jul 23 2003 11:27:39 (0x2301) >>`

---

## 5. Resumen de Traducción AOT (`DolRecomp`) y Módulo Nativo Unificado (`GGSEA4.dll`)

- **Símbolos exportados a mapas CodeWarrior:**
  - `analysis/game.map` (`main.dol`): `2,997` símbolos (`1,822` funciones)
  - `analysis/mgso.map` (`mgso.rel` @ `0x7F008000`): `32,537` símbolos (`16,660` funciones)
- **Instrucciones decodificadas (`1,232,550` instrucciones totales, `0` desconocidas):**
  - `main.dol` `text[0]` (`.init` @ `0x80003100`): `2,360` decodificadas (`718` instrucciones conocidas, `1,642` datos embebidos, `0` desconocidas) -> `1` chunk.
  - `main.dol` `text[1]` (`.text` @ `0x800055E0`): `95,000` decodificadas (`94,994` instrucciones conocidas, `6` datos embebidos, `0` desconocidas) -> `24` chunks.
  - `mgso.rel` `rel[1]` (`.text` @ `0x7F0080EC`): `1,135,190` decodificadas (`1,135,190` instrucciones conocidas, `0` desconocidas, `118,105` relocalizaciones aplicadas) -> `278` chunks.
- **Módulo nativo unificado:** `module_build/build/GGSEA4.dll` (`COFF-x86-64`, `303` chunks C enlazados).
- **Símbolos ABI V4 exportados:**
  1. `dolrecomp_get_module`
  2. `dolrecomp_module_call`
  3. `dolrecomp_module_run_blocks`
  4. `dolrecomp_module_v4`
