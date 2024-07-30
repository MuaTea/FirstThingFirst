cmake_minimum_required(VERSION 3.5)
project(DoubleCircleList1 C)

set(CMAKE_C_STANDARD 11)

add_executable(DoubleCircleList1 main.c
        DCL.c
        DCL.h
        list.h)
