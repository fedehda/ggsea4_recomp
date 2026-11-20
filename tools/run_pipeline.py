#!/usr/bin/env python3
"""
Orquestador Completo del Pipeline de Recompilación Estática para GameCube
(dtk + DolRecomp + RecompCore)

Ejecuta las Fases 1 a 5 automáticamente una vez que exista `input/game.iso` (o `.gcm` / `.rvz`).
"""

from __future__ import annotations

import os
import re
import shutil
import struct
import subprocess
import sys
from pathlib import Path
from typing import Dict, List, Optional, Tuple


WORKSPACE = Path(__file__).resolve().parent.parent
TOOLS_DIR = WORKSPACE / "tools"
DTK_BIN = TOOLS_DIR / ("dtk.exe" if sys.platform == "win32" else "dtk")
DOLRECOMP_BIN = TOOLS_DIR / "DolRecomp" / "build" / ("dolrecomp.exe" if sys.platform == "win32" else "dolrecomp")
LLVM_MINGW_BIN = TOOLS_DIR / "llvm-mingw-20261006-ucrt-x86_64" / "bin"
CMAKE_BIN = Path(r"C:\Program Files\CMake\bin\cmake.exe") if sys.platform == "win32" else Path("cmake")

INPUT_DIR = WORKSPACE / "input"
EXTRACTED_DIR = INPUT_DIR / "extracted"
ANALYSIS_DIR = WORKSPACE / "analysis"
RECOMP_OUT_DIR = WORKSPACE / "recomp_output"
DOCS_DIR = WORKSPACE / "docs"
MODULE_BUILD_DIR = WORKSPACE / "module_build"


def build_env() -> Dict[str, str]:
    env = os.environ.copy()
    extra_paths = []
    if LLVM_MINGW_BIN.exists():
        extra_paths.append(str(LLVM_MINGW_BIN))
    if CMAKE_BIN.parent.exists():
        extra_paths.append(str(CMAKE_BIN.parent))
    if extra_paths:
        env["PATH"] = os.pathsep.join(extra_paths + [env.get("PATH", "")])
    return env


def find_disc_image() -> Optional[Path]:
    for ext in (".iso", ".gcm", ".rvz", ".tgc", ".ciso"):
        candidate = INPUT_DIR / f"game{ext}"
        if candidate.exists():
            return candidate
    for ext in ("*.iso", "*.gcm", "*.rvz", "*.tgc", "*.ciso"):
        matches = list(INPUT_DIR.glob(ext))
        if matches:
            return matches[0]
    return None


def parse_boot_bin(boot_bin: Path) -> Dict[str, str]:
    data = boot_bin.read_bytes()
    game_id = data[0x00:0x06].decode("ascii", errors="replace")
    game_code = data[0x00:0x04].decode("ascii", errors="replace")
    maker_code = data[0x04:0x06].decode("ascii", errors="replace")
    disc_num = data[0x06]
    disc_ver = data[0x07]
    title_raw = data[0x20:0x60].split(b"\x00", 1)[0]
    title = title_raw.decode("shift_jis", errors="replace").strip()
    dol_offset, fst_offset, fst_size = struct.unpack(">III", data[0x420:0x42C])

    return {
        "game_id": game_id,
        "game_code": game_code,
        "maker_code": maker_code,
        "disc_num": f"0x{disc_num:02X}",
        "disc_ver": f"0x{disc_ver:02X} (Rev {disc_ver})",
        "title": title,
        "dol_offset": f"0x{dol_offset:08X}",
        "fst_offset": f"0x{fst_offset:08X}",
        "fst_size": f"0x{fst_size:08X} ({fst_size:,} bytes)",
    }


def scan_unresolved_jumps(asm_dir: Path, out_md: Path) -> int:
    """Escanea los archivos .s generados por dtk en busca de bctr / bctrl / blrl."""
    if not asm_dir.exists():
        return 0

    bctr_re = re.compile(
        r"/\*\s*(?P<pc>[0-9A-Fa-f]{8})\s+[0-9A-Fa-f]{8}\s+[0-9A-Fa-f\s]+\*/\s*(?P<mnemonic>bctr|bctrl|blrl)\b"
    )
    fn_re = re.compile(r"^\.fn\s+(?P<name>[^\s,]+)")

    rows: List[Tuple[str, str, str, str]] = []
    for asm_file in sorted(asm_dir.rglob("*.s")):
        current_fn = "unknown"
        for line in asm_file.read_text(encoding="utf-8", errors="replace").splitlines():
            fn_match = fn_re.match(line.strip())
            if fn_match:
                current_fn = fn_match.group("name")
                continue
            m = bctr_re.search(line)
            if m:
                pc = f"0x{m.group('pc').upper()}"
                mnemonic = m.group("mnemonic")
                rows.append((current_fn, pc, mnemonic, asm_file.name))

    if rows:
        md_lines = [
            "# Registro de Saltos Indirectos Detectados (`bctr` / `bctrl` / `blrl`)\n",
            "| Función Contenedora | Dirección (`PC`) | Instrucción | Unidad `.s` |",
            "| :--- | :--- | :--- | :--- |",
        ]
        for fn_name, pc, mnem, unit_name in rows[:500]:
            md_lines.append(f"| `{fn_name}` | `{pc}` | `{mnem}` | `{unit_name}` |")
        out_md.write_text("\n".join(md_lines) + "\n", encoding="utf-8")

    return len(rows)


def merge_generated_modules(dol_gen_dir: Path, rel_gen_dir: Path, dst_gen_dir: Path) -> int:
    """Fusiona los chunks y el dispatcher de main.dol y mgso.rel en dst_gen_dir."""
    if dst_gen_dir.exists():
        shutil.rmtree(dst_gen_dir)
    shutil.copytree(dol_gen_dir, dst_gen_dir)

    if not rel_gen_dir.exists():
        return len(list((dst_gen_dir / "chunks").glob("*.c")))

    # 1. Copiar los chunks de mgso.rel con prefijo rel_ para evitar colisiones de nombres de archivo
    dst_chunks = dst_gen_dir / "chunks"
    dst_chunks.mkdir(parents=True, exist_ok=True)
    for rel_chunk in sorted((rel_gen_dir / "chunks").glob("*.c")):
        shutil.copy2(rel_chunk, dst_chunks / f"rel_{rel_chunk.name}")

    # 2. Extraer prototipos y bloque de despacho de rel_gen_dir/generated.h
    rel_h_text = (rel_gen_dir / "generated.h").read_text(encoding="utf-8").replace("\r\n", "\n")
    rel_protos = re.findall(r"^void func_[0-9A-Fa-f]+\(CPUState\* ctx\);$", rel_h_text, flags=re.MULTILINE)

    find_orig_match = re.search(
        r"static inline DolRecompFunction dolrecomp_find_original\(u32 address\) \{\n(.*?)\n    return NULL;\n\}",
        rel_h_text,
        flags=re.DOTALL,
    )
    rel_dispatch_body = find_orig_match.group(1) if find_orig_match else ""
    rel_dispatch_body = rel_dispatch_body.replace("chunk_functions", "rel_chunk_functions")

    # 3. Inyectar en dst_gen_dir/generated.h
    dol_h_path = dst_gen_dir / "generated.h"
    dol_h_text = dol_h_path.read_text(encoding="utf-8").replace("\r\n", "\n")

    if rel_protos:
        proto_block = "\n// REL (mgso.rel @ 0x7F008000) function entry points\n" + "\n".join(rel_protos) + "\n"
        dol_h_text = dol_h_text.replace(
            "#define DOLRECOMP_ENTRY_POINT",
            proto_block + "\n#define DOLRECOMP_ENTRY_POINT",
            1,
        )

    if rel_dispatch_body:
        dol_h_text = dol_h_text.replace(
            "    return NULL;\n}",
            rel_dispatch_body + "\n    return NULL;\n}",
            1,
        )

    dol_h_path.write_text(dol_h_text, encoding="utf-8")
    return len(list(dst_chunks.glob("*.c")))


def main() -> int:
    env = build_env()
    disc_path = find_disc_image()
    if disc_path is None:
        print(
            "[STOP] No se encontro ninguna imagen (.iso, .gcm, .rvz) en `input/`.\n"
            "       Coloca la imagen en `input/game.iso` y vuelve a ejecutar `python tools/run_pipeline.py`."
        )
        return 2

    # FASE 1: Extracción e Identificación del Binario
    boot_bin = EXTRACTED_DIR / "sys" / "boot.bin"
    main_dol = EXTRACTED_DIR / "sys" / "main.dol"
    if not boot_bin.exists() or not main_dol.exists():
        print(f"[FASE 1] Extrayendo disco: {disc_path} -> {EXTRACTED_DIR}")
        subprocess.run([str(DTK_BIN), "disc", "extract", str(disc_path), str(EXTRACTED_DIR)], env=env, check=True)
    else:
        print(f"[FASE 1] Disco ya extraido en: {EXTRACTED_DIR}")

    if not boot_bin.exists() or not main_dol.exists():
        print("[ERROR] No se encontraron sys/boot.bin o sys/main.dol tras la extraccion.", file=sys.stderr)
        return 1

    boot_info = parse_boot_bin(boot_bin)
    game_id = re.sub(r"[^A-Za-z0-9_]", "", boot_info["game_id"]) or "GXXE01"
    print(f"[INFO] Game ID: {game_id} | Titulo: {boot_info['title']} | Rev: {boot_info['disc_ver']}")

    dol_info_proc = subprocess.run(
        [str(DTK_BIN), "dol", "info", str(main_dol)],
        env=env,
        capture_output=True,
        text=True,
        check=True,
    )
    print(dol_info_proc.stdout)

    rel_files = list((EXTRACTED_DIR / "files").rglob("*.rel")) + list((EXTRACTED_DIR / "files").rglob("*.rso"))
    print(f"[INFO] Modulos relocalizables (.rel/.rso) encontrados: {len(rel_files)}")

    # FASE 2: Análisis de Flujo y Generación de Símbolos con dtk
    print("[FASE 2] Generando config.yml y ejecutando analisis de flujo (dtk dol split)...")
    config_yml = ANALYSIS_DIR / "config.yml"
    cmd_config = [str(DTK_BIN), "dol", "config", "-o", str(config_yml), str(main_dol)] + [
        str(p) for p in rel_files
    ]
    subprocess.run(cmd_config, env=env, check=True)

    # Inyectar rutas de symbols y splits en config.yml para que dtk los exporte en analysis/
    raw_cfg = config_yml.read_text(encoding="utf-8")
    cfg_lines = []
    in_modules = False
    for line in raw_cfg.splitlines():
        cfg_lines.append(line)
        if line.startswith("hash:") and not in_modules:
            cfg_lines.append("symbols: analysis/symbols.txt")
            cfg_lines.append("splits: analysis/splits.txt")
        elif line.startswith("modules:"):
            in_modules = True
        elif in_modules and line.strip().startswith("hash:"):
            cfg_lines.append("  symbols: analysis/mgso_symbols.txt")
            cfg_lines.append("  splits: analysis/mgso_splits.txt")
    config_yml.write_text("\n".join(cfg_lines) + "\n", encoding="utf-8")

    subprocess.run([str(DTK_BIN), "dol", "split", str(config_yml), str(ANALYSIS_DIR)], env=env, check=True)

    print("[FASE 2.3] Convirtiendo symbols.txt -> analysis/game.map y analysis/mgso.map...")
    subprocess.run(
        [
            sys.executable,
            str(TOOLS_DIR / "convert_symbols.py"),
            "--symbols",
            str(ANALYSIS_DIR / "symbols.txt"),
            "--splits",
            str(ANALYSIS_DIR / "splits.txt"),
            "--output",
            str(ANALYSIS_DIR / "game.map"),
        ],
        env=env,
        check=True,
    )
    if (ANALYSIS_DIR / "mgso_symbols.txt").exists():
        subprocess.run(
            [
                sys.executable,
                str(TOOLS_DIR / "convert_symbols.py"),
                "--symbols",
                str(ANALYSIS_DIR / "mgso_symbols.txt"),
                "--splits",
                str(ANALYSIS_DIR / "mgso_splits.txt"),
                "--section-bases",
                ".text=0x7F0080EC,.ctors=0x7F45CA44,.dtors=0x7F45CA48,.rodata=0x7F45CA50,.data=0x7F46E640,.bss=0x7F498000",
                "--output",
                str(ANALYSIS_DIR / "mgso.map"),
            ],
            env=env,
            check=True,
        )

    # FASE 4: Traducción Estática AOT (main.dol + mgso.rel -> C/C++)
    print(f"[FASE 4] Ejecutando DolRecomp sobre {main_dol} (Game ID: {game_id})...")
    RECOMP_OUT_DIR.joinpath("src").mkdir(parents=True, exist_ok=True)
    RECOMP_OUT_DIR.joinpath("src_mgso").mkdir(parents=True, exist_ok=True)
    RECOMP_OUT_DIR.joinpath("logs").mkdir(parents=True, exist_ok=True)
    log_path = RECOMP_OUT_DIR / "logs" / "recomp.log"

    with log_path.open("w", encoding="utf-8") as log_file:
        subprocess.run(
            [
                str(DOLRECOMP_BIN),
                "-j12",
                "--gamecube",
                "--cpu",
                "gekko",
                "--runtime",
                "recompcore",
                "--game-id",
                game_id,
                "--map",
                str(ANALYSIS_DIR / "game.map"),
                str(main_dol),
                str(RECOMP_OUT_DIR / "src"),
            ],
            env=env,
            stdout=log_file,
            stderr=subprocess.STDOUT,
            check=True,
        )

    mgso_rel = EXTRACTED_DIR / "files" / "shared" / "mgso.rel"
    if mgso_rel.exists():
        print(f"[FASE 4.1] Ejecutando DolRecomp sobre {mgso_rel.name} (Base: 0x7F008000)...")
        mgso_log_path = RECOMP_OUT_DIR / "logs" / "recomp_mgso.log"
        with mgso_log_path.open("w", encoding="utf-8") as mgso_log:
            subprocess.run(
                [
                    str(DOLRECOMP_BIN),
                    "-j12",
                    "--gamecube",
                    "--cpu",
                    "gekko",
                    "--runtime",
                    "recompcore",
                    "--game-id",
                    game_id,
                    "--rel-base",
                    "0x7F008000",
                    str(mgso_rel),
                    str(RECOMP_OUT_DIR / "src_mgso"),
                ],
                env=env,
                stdout=mgso_log,
                stderr=subprocess.STDOUT,
                check=True,
            )

    total_indirect = scan_unresolved_jumps(ANALYSIS_DIR / "asm", DOCS_DIR / "unresolved_jumps.md")
    print(f"[FASE 4.2] Saltos indirectos auditados en analysis/asm/: {total_indirect}")

    # FASE 5: Compilación del Módulo Nativo para RecompCore
    print(f"[FASE 5] Fusionando main.dol + mgso.rel y compilando modulo nativo {game_id}.dll...")
    gen_src = RECOMP_OUT_DIR / "src" / "generated"
    rel_gen_src = RECOMP_OUT_DIR / "src_mgso" / "generated"
    mod_gen_dst = MODULE_BUILD_DIR / "src" / "generated"
    total_chunks = merge_generated_modules(gen_src, rel_gen_src, mod_gen_dst)
    print(f"[INFO] Total chunks C unificados en {mod_gen_dst}/chunks: {total_chunks}")

    subprocess.run(
        [
            str(CMAKE_BIN),
            "-S",
            str(MODULE_BUILD_DIR),
            "-B",
            str(MODULE_BUILD_DIR / "build"),
            "-G",
            "Ninja",
            f"-DGAME_ID={game_id}",
            "-DCMAKE_BUILD_TYPE=Release",
        ],
        env=env,
        check=True,
    )
    subprocess.run(
        [
            str(CMAKE_BIN),
            "--build",
            str(MODULE_BUILD_DIR / "build"),
            "--config",
            "Release",
        ],
        env=env,
        check=True,
    )

    dll_path = MODULE_BUILD_DIR / "build" / f"{game_id}.dll"
    llvm_readobj = LLVM_MINGW_BIN / "llvm-readobj.exe"
    if dll_path.exists() and llvm_readobj.exists():
        print(f"[FASE 5.5] Verificando exportaciones PE de {dll_path.name}:")
        subprocess.run([str(llvm_readobj), "--coff-exports", str(dll_path)], env=env, check=False)

    return 0


if __name__ == "__main__":
    sys.exit(main())
