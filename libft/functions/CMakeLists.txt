cmake_minimum_required(VERSION 3.14)
project(functions C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(functions
        checker.c
        ft_strcat.c
        ft_strlen.c
        libft.h)
