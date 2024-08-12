cmake_minimum_required(VERSION 3.28)
project(mutex C)

set(CMAKE_C_STANDARD 11)

add_executable(mutex sem.c
        sem.c
        sem.h
#        shm_read_sem.c
        shm_write_sem.c)
