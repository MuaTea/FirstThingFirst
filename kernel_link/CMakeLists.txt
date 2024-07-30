cmake_minimum_required(VERSION 3.5)
project(kernel_link C)

set(CMAKE_C_STANDARD 11)

add_executable(kernel_link main.c
        kernel_link.c
        kernel_link.h
        list.h)
