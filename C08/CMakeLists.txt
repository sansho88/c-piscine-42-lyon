cmake_minimum_required(VERSION 3.20)
project(C08 C)

set(CMAKE_C_STANDARD 11)

include_directories(ex00)
include_directories(ex01)

add_executable(C08
        ex00/ft.h
        ex01/ft_boolean.h
        ex01/maintest.c)
