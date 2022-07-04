cmake_minimum_required(VERSION 3.20)
project(ex00)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex00
        lib/atoi.c
        lib/ft_putstr.c
        lib/ft_strlen.c
        lib/ft_swap.c
        ft_splitnumber.c
        numbers.dict lib/readfile.c map.c lib/error.c)
