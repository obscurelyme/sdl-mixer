cmake_minimum_required(VERSION 3.0.0)

set(VCPKG_MANIFEST_MODE ON)

project(MixTest VERSION 0.1.0)

add_executable(MixTest main.cpp)

find_package(sdl2-mixer CONFIG REQUIRED)
target_link_libraries(MixTest PRIVATE SDL2::SDL2_mixer)
find_package(SDL2 CONFIG REQUIRED)
target_link_libraries(MixTest PRIVATE SDL2::SDL2 SDL2::SDL2main)