cmake_minimum_required(VERSION 3.25)
project(test C)

set(SOURCES
        get_next_line.c get_next_line_utils.c
)

set(HEADERS
        get_next_line.h
)

configure_file(karmine.txt ${CMAKE_CURRENT_BINARY_DIR}/karmine.txt COPYONLY)

add_executable(test ${SOURCES} ${HEADERS} karmine.txt)

target_compile_options(test PUBLIC -Wall -Wextra -Werror)