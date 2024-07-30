cmake_minimum_required(VERSION 3.5.1)
project(STUDENT_MANAGE_SYS C)

set(CMAKE_C_STANDARD 11)

add_executable(STUDENT_MANAGE_SYS main.c
        menu.c
        student.c
        student.h
        list.h
)
