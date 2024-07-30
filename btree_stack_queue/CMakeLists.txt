cmake_minimum_required(VERSION 3.5)
project(btree_stack_queue C)

set(CMAKE_C_STANDARD 11)

add_executable(btree_stack_queue main.c
        btree.h
        btree.c
        linkqueue.c
        linkqueue.h
        linkstack.c
        linkstack.h)
