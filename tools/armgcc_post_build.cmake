function(post_build target_name)
    add_custom_command(TARGET ${target_name}.elf
        COMMAND ${CMAKE_OBJCOPY} -Oihex $<TARGET_FILE:${target_name}.elf> ${target_name}.hex
        COMMAND ${CMAKE_OBJCOPY} -Obinary $<TARGET_FILE:${target_name}.elf> ${target_name}.bin
        COMMAND ${CMAKE_OBJDUMP} --disassemble $<TARGET_FILE:${target_name}.elf> > ${target_name}.list
        COMMAND ${ARM_OBJDUMP_EXECUTABLE} -S $<TARGET_FILE:${target_name}.elf> > ${target_name}.lss
        COMMAND ${ARM_SIZE_EXECUTABLE} -B ${target_name}.elf
        COMMENT "Generating ${target_name}.hex, ${target_name}.bin")
endfunction(post_build)
