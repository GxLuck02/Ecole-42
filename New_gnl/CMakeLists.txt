cmake_minimum_required(VERSION 3.25)
project(gnl C)

# Ajoutez ici les fichiers source de votre projet
set(SOURCES
        get_next_line.c    get_next_line_utils.c
)

set(HEADER
        get_next_line.h
)

configure_file(karmine.txt ${CMAKE_CURRENT_BINARY_DIR}/karmine.txt COPYONLY)

# Créez l'exécutable en liant les fichiers source et les bibliothèques
add_executable(get_next_lines ${SOURCES} ${HEADER} karmine.txt)

target_compile_options(get_next_lines PUBLIC -Wall -Wextra -Werror)