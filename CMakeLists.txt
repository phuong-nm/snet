cmake_minimum_required(VERSION 3.10)

project(snet CXX C ASM)

include(tools/armgcc_post_build.cmake)
include(tools/armgcc_flags_bluenrg.cmake)

add_subdirectory(components/unity)
add_subdirectory(components/bluenrg)
add_subdirectory(targets/examples)
add_subdirectory(targets/tests)
add_subdirectory(targets/blinky)
