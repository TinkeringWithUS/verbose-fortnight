cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 20)

project(Dialogue-Engine)

include(FindPkgConfig)
pkg_check_modules(SDL2_Mixer REQUIRED IMPORTED_TARGET SDL2_mixer)

add_subdirectory(src/ui)
add_subdirectory(src/window)

set(SOURCE_FILES src/main.cpp)

set(EXECUTABLE_OUTPUT_PATH  ${PROJECT_SOURCE_DIR}/build/)
set(CMAKE_BINARY_DIR ${PROJECT_SOURCE_DIR}/build/)

include_directories(src)

add_executable(Dialogue-Engine ${SOURCE_FILES})

target_link_libraries(Dialogue-Engine PUBLIC
PkgConfig::SDL2_Mixer 
UI
Window)

target_include_directories(Dialogue-Engine PUBLIC 
  "${PROJECT_BINARY_DIR}" 
  "${PROJECT_SOURCE_DIR}/ui"
  "${PROJECT_SOURCE_DIR}/window")
