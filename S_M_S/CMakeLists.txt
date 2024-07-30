cmake_minimum_required(VERSION 3.5)
project(N_S_M_S C)

set(CMAKE_C_STANDARD 11)

add_executable(S_M_S main.c
        fileio.h
        student.h
        fileio.c
        student.c
        menu.c
        menu.h)
