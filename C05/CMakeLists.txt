cmake_minimum_required(VERSION 3.20)
project(C05 C)

set(CMAKE_C_STANDARD 11)

add_executable(C05
        ex00/ft_iterative_factorial.c
        ex01/ft_recursive_factorial.c
        ex02/ft_iterative_power.c
        ex03/ft_recursive_power.c
        ex04/ft_fibonacci.c
        ex05/ft_sqrt.c
        )
