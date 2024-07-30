cmake_minimum_required(VERSION 3.5)
project(Hash_Search C)

set(CMAKE_C_STANDARD 11)

add_executable(Hash_Search main.c
        Hash.h
        Hash.c)
