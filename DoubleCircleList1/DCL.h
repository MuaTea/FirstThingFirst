//
// Created by MuaTea on 2024/7/24.
//

#ifndef DCL_H
#define DCL_H
#include <stdio.h>
#include <stdlib.h>

#include <stdbool.h>


typedef int datatype;

typedef struct double_circle {
    datatype data;
    struct double_circle *next;
    struct double_circle *prev;
} node, *pnode;

void double_circle_init(pnode *H);

void double_circle_insert_front(pnode p, pnode new);

void double_circle_insert_reverse(pnode p, pnode new);

void double_circle_delete(pnode H, pnode p);

void double_circle_traverse(pnode H);

bool double_circle_empty(pnode H);

void double_circle_reverse(pnode H);

#endif
