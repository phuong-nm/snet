if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    set(DBG_FLAGS "-g3 -gdwarf-2 -O0")
elseif (CMAKE_BUILD_TYPE STREQUAL "Debugrel")
    set(DBG_FLAGS "-g3 -gdwarf-2 -O3")
elseif (CMAKE_BUILD_TYPE STREQUAL "Release")           # Use default options "-O3"
    set(DBG_FLAGS "-DNDEBUG")
endif()

set(MCU_FLAGS "-mcpu=cortex-m0 -mthumb --specs=nosys.specs")

set(CMAKE_C_FLAGS "${MCU_FLAGS} ${DBG_FLAGS} -Wall -ffunction-sections -fdata-sections -fno-strict-aliasing -fno-builtin -fshort-enums" CACHE INTERNAL "C compiler flags")

set(CMAKE_CXX_FLAGS "${MCU_FLAGS} ${DBG_FLAGS} -Wall -fno-rtti -fno-exceptions" CACHE INTERNAL "CXX compiler flags")

set(CMAKE_ASM_FLAGS "${MCU_FLAGS} ${DBG_FLAGS} -x assembler-with-cpp" CACHE INTERNAL "ASM compiler flags")
