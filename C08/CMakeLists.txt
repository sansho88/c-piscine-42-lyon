cmake_minimum_required(VERSION 3.20)
project(C08 C)

set(CMAKE_C_STANDARD 11)

include_directories(ex00)
include_directories(ex01)
include_directories(ex04)
include_directories(ex05)

add_executable(C08
        ex01/maintest.c
        ex04/ft_stock_str.h
        ex05/ft_show_tab.c)
