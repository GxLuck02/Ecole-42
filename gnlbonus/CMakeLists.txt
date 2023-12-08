cmake_minimum_required(VERSION 3.26)
project(gnlbonus C)

set(SOURCES
        get_next_line_bonus.c get_next_line_utils_bonus.c
)

set(HEADERS
        get_next_line_bonus.h
)

configure_file(karmine.txt ${CMAKE_CURRENT_BINARY_DIR}/karmine.txt COPYONLY)
configure_file(test2.txt ${CMAKE_CURRENT_BINARY_DIR}/test2.txt COPYONLY)
configure_file(test3.txt ${CMAKE_CURRENT_BINARY_DIR}/test3.txt COPYONLY)

add_executable(gnlbonus ${SOURCES} ${HEADERS} karmine.txt test2.txt test3.txt)

target_compile_options(gnlbonus PUBLIC -Wall -Wextra -Werror)
