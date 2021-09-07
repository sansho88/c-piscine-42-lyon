cmake_minimum_required(VERSION 3.20)
project(C01 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(C01

        ex06/ft_strlen.c
        ex07/ft_rev_int_tab.c
        ex08/ft_sort_int_tab.c
        )
