project(bluenrg_sdk
    VERSION 3.2.3
    LANGUAGES C
    DESCRIPTION "BlueNRG SDK"
)

add_library(${PROJECT_NAME} STATIC)
target_compile_definitions(${PROJECT_NAME} PUBLIC
    NO_SMART_POWER_MANAGEMENT
    LS_SOURCE=LS_SOURCE_INTERNAL_RO
    HS_SPEED_XTAL=HS_SPEED_XTAL_32MHZ
    BLUENRG2_DEVICE=1
    BLE_STACK_CONFIGURATION=1
)
target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/CMSIS/Device/ST/BlueNRG1/Include
    ${CMAKE_CURRENT_LIST_DIR}/CMSIS/Include
    ${CMAKE_CURRENT_LIST_DIR}/BlueNRG1_Periph_Driver/inc
    ${CMAKE_CURRENT_LIST_DIR}/hal/inc
    ${CMAKE_CURRENT_LIST_DIR}/addon/inc
)
target_sources(${PROJECT_NAME} PRIVATE
    CMSIS/Device/ST/BlueNRG1/Source/system_BlueNRG1.c
    BlueNRG1_Periph_Driver/src/BlueNRG1_adc.c
    BlueNRG1_Periph_Driver/src/BlueNRG1_dma.c
    BlueNRG1_Periph_Driver/src/BlueNRG1_flash.c
    BlueNRG1_Periph_Driver/src/BlueNRG1_gpio.c
    BlueNRG1_Periph_Driver/src/BlueNRG1_i2c.c
    BlueNRG1_Periph_Driver/src/BlueNRG1_mft.c
    BlueNRG1_Periph_Driver/src/BlueNRG1_pka.c
    BlueNRG1_Periph_Driver/src/BlueNRG1_radio.c
    BlueNRG1_Periph_Driver/src/BlueNRG1_rng.c
    BlueNRG1_Periph_Driver/src/BlueNRG1_rtc.c
    BlueNRG1_Periph_Driver/src/BlueNRG1_spi.c
    BlueNRG1_Periph_Driver/src/BlueNRG1_sysCtrl.c
    BlueNRG1_Periph_Driver/src/BlueNRG1_timer.c
    BlueNRG1_Periph_Driver/src/BlueNRG1_uart.c
    BlueNRG1_Periph_Driver/src/BlueNRG1_wdg.c
    BlueNRG1_Periph_Driver/src/misc.c
    hal/src/clock.c
    hal/src/context_switch.s
    hal/src/fifo.c
    hal/src/gp_timer.c
    hal/src/hal_radio.c
    hal/src/miscutil.c
    hal/src/osal.c
    hal/src/radio_ota.c
    hal/src/sleep.c
    hal/src/vtimer.c
)

# BLE lib
add_library(ble_sdk STATIC IMPORTED GLOBAL)
set_target_properties(
    ble_sdk
        PROPERTIES
        IMPORTED_LOCATION "${CMAKE_CURRENT_LIST_DIR}/Bluetooth_LE/library/libbluenrg1_stack.a"
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_CURRENT_LIST_DIR}/Bluetooth_LE/inc;${CMAKE_CURRENT_LIST_DIR}/BLE_Application/layers_inc"
)

# Crypto lib
add_library(crypto_sdk STATIC IMPORTED GLOBAL)
set_target_properties(
    crypto_sdk
        PROPERTIES
        IMPORTED_LOCATION "${CMAKE_CURRENT_LIST_DIR}/cryptolib/libcrypto.a"
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_CURRENT_LIST_DIR}/cryptolib/inc"
)
