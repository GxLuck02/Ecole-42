cmake_minimum_required(VERSION 3.26)
project(printf C)

set(CMAKE_C_STANDARD 99)
set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Wextra -Werror")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}" )

add_executable(
        ft_printf.c
        ft_printchar.c
        ft_format.c
        libftprintf.h
        ft_printf.c
        ft_printstring.c
        ft_printnbr.c
        ft_itoa.c
        ft_printptr.c
        ft_printpercent.c
        ft_printunsnbr.c
        ft_printHex.c)
