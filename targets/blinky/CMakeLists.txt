project(blinky)

add_executable(${PROJECT_NAME}.elf)
target_sources(${PROJECT_NAME}.elf PRIVATE
    main.c
)
target_link_libraries(${PROJECT_NAME}.elf PRIVATE
    bluenrg_sdk
)

get_filename_component(LINKER_SCRIPT ${CMAKE_CURRENT_LIST_DIR}/../../components/bluenrg/Linkerscript/BlueNRG2.ld ABSOLUTE)
target_link_libraries(${PROJECT_NAME}.elf PRIVATE
    -T${LINKER_SCRIPT}
    ${EXTRA_LINK_FLAGS}
)

post_build(${PROJECT_NAME})