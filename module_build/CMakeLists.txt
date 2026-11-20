cmake_minimum_required(VERSION 3.22)

# Nombre del módulo nativo para RecompCore (se sobreescribe con -DGAME_ID=<ID>)
if(NOT DEFINED GAME_ID)
    set(GAME_ID "GXXE01")
endif()

project(${GAME_ID}_RecompModule LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(DOLRECOMP_SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../tools/DolRecomp/src")

# Recolectar chunks C generados por DolRecomp (main.dol + mgso.rel)
file(GLOB GENERATED_PARTS CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/src/generated/*_part_*.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/generated/chunks/*.c"
)

add_library(${GAME_ID} SHARED
    "${CMAKE_CURRENT_SOURCE_DIR}/src/module_entry.cpp"
    "${DOLRECOMP_SRC_DIR}/cpu/cpu.c"
    ${GENERATED_PARTS}
)

# El nombre del archivo de salida debe ser exactamente <GAME_ID>.dll / <GAME_ID>.so sin prefijo "lib"
set_target_properties(${GAME_ID} PROPERTIES
    PREFIX ""
    OUTPUT_NAME "${GAME_ID}"
)

target_include_directories(${GAME_ID} PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/generated"
    "${DOLRECOMP_SRC_DIR}"
)

# Flags de alto rendimiento y compatibilidad de ABI / Type-Punning para RecompCore:
# -fno-strict-aliasing es crítico porque el código recompilado realiza type-punning
# constante entre registros GPR, FPR (Paired-Singles) y punteros de memoria emulada.
if(CMAKE_CXX_COMPILER_ID MATCHES "Clang|GNU")
    target_compile_options(${GAME_ID} PRIVATE
        -O3
        -march=native
        -fno-strict-aliasing
        -Wno-unused-function
        -Wno-unused-variable
        -Wno-unused-label
        -Wno-parentheses-equality
    )
elseif(MSVC)
    target_compile_options(${GAME_ID} PRIVATE
        /O2
        /Ob2
        /Oi
        /Ot
        /fp:precise
    )
endif()

add_executable(ggsea4_runner
    "${CMAKE_CURRENT_SOURCE_DIR}/src/ggsea4_runner.cpp"
    "${DOLRECOMP_SRC_DIR}/cpu/cpu.c"
    "${DOLRECOMP_SRC_DIR}/frontend/container/dol.c"
    "${DOLRECOMP_SRC_DIR}/frontend/container/rel.c"
)

target_include_directories(ggsea4_runner PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
    "${DOLRECOMP_SRC_DIR}"
)

# ============================================================================
# Runtime Gráfico Nativo (ModernGekko GX + DolphinShaderCompiler + Win32/OpenGL)
# ============================================================================
set(MODERNGEKKO_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../tools/ModernGekko")
set(MODERNGEKKO_BUILD_DIR "${MODERNGEKKO_DIR}/build")

if(EXISTS "${MODERNGEKKO_BUILD_DIR}/libmoderngekko_legacy.a")
    add_executable(ggsea4_gfx_runtime
        "${CMAKE_CURRENT_SOURCE_DIR}/src/ggsea4_gfx_runtime.cpp"
        "${DOLRECOMP_SRC_DIR}/cpu/cpu.c"
        "${DOLRECOMP_SRC_DIR}/frontend/container/dol.c"
        "${DOLRECOMP_SRC_DIR}/frontend/container/rel.c"
    )

    set_target_properties(ggsea4_gfx_runtime PROPERTIES
        CXX_STANDARD 23
        CXX_STANDARD_REQUIRED ON
        CXX_EXTENSIONS OFF
    )

    if(CMAKE_CXX_COMPILER_ID MATCHES "Clang|GNU")
        target_compile_options(ggsea4_gfx_runtime PRIVATE -O3 -march=native)
    endif()

    target_include_directories(ggsea4_gfx_runtime PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/src"
        "${DOLRECOMP_SRC_DIR}"
        "${MODERNGEKKO_DIR}/include"
    )

    target_compile_definitions(ggsea4_gfx_runtime PRIVATE
        WIN32_LEAN_AND_MEAN
        NOMINMAX
    )

    target_link_libraries(ggsea4_gfx_runtime PRIVATE
        "${MODERNGEKKO_BUILD_DIR}/libmoderngekko_legacy.a"
        "${MODERNGEKKO_BUILD_DIR}/libmoderngekko_dolphin_video.a"
        "${MODERNGEKKO_BUILD_DIR}/vendor/fmt/fmt/libfmt.a"
        opengl32
        gdi32
        winmm
    )
endif()

