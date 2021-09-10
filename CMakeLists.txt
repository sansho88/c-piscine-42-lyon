cmake_minimum_required(VERSION 3.19)
project(projects)

set(CMAKE_CXX_STANDARD 14)

include_directories(traininig)

add_executable(projects
         traininig/C00/ex01/ft_print_alphabet.c
        traininig/unistd.h
        traininig/C00/ex02/ft_print_reverse_alphabet.c
        traininig/C00/bigmain.c
        traininig/bigheader.h
        traininig/mylib.h
        traininig/C00/ex03/ft_print_numbers.c
        traininig/C00/ex04/ft_is_neg.c
        traininig/C00/ex05/ft_print_comb.c
        traininig/concepts/readfile.c traininig/C00/ex06/ft_print_comb2.c traininig/C00/ex07/ft_putnbr.c traininig/C01/ft_ft.c traininig/C01/ex02/ft_swap.c traininig/C01/ex03/ft_div_mod.c traininig/C01/ex04/ft_ultimate_div_mod.c traininig/C01/ex05/ft_putstr.c traininig/C01/ex06/ft_strlen.c)
