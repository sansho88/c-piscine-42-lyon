cmake_minimum_required(VERSION 3.20)
project(C03 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(C03

        ex01/ft_strncmp.c
        ex03/ft_strncat.c
        ex04/ft_strstr.c)
