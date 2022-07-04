cmake_minimum_required(VERSION 3.20)
project(ex00 C)

set(CMAKE_C_STANDARD 11)

add_executable(ex00
        ft_showgrill.c
        main.c brain.c parachute.c ourlib.h)
