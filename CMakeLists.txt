cmake_minimum_required(VERSION 3.12)

set(PICO_SDK_PATH "~/rpi/pico/pico-sdk")

include(pico_sdk_import.cmake)

project(mruler C)
set(CMAKE_C_STANDARD 11)

set(PICO_TOOLCHAIN_PATH "~/pico_gcc/gcc-arm-none-eabi-10.3-2021.10")
set(CMAKE_C_COMPILER "/usr/bin/gcc")

set(PICO_EXAMPLES_PATH ${PROJECT_SOURCE_DIR})

pico_sdk_init()

add_excutable(mruler
	mruler.c
	)

target_link_libraries(mruler pico_stdlib)

pico_add_extra_outputs(mruler)

