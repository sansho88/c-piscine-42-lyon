cmake_minimum_required(VERSION 3.20)
project(projects)

set(CMAKE_CXX_STANDARD 14)

include_directories(C07)

add_executable(projects
        C07/ex00/a.out
        C07/ex00/ft_strdup.c
        C07/ex01/ft_range.c
        C07/ex02/ft_ultimate_range.c)
