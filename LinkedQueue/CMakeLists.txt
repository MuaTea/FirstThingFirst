cmake_minimum_required(VERSION 3.5)
project(LinkedQueue C)

set(CMAKE_C_STANDARD 11)

add_executable(LinkedQueue main.c
        LinkedQueue.c
        LinkedQueue.h)
