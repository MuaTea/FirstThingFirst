//
// Created by MuaTea on 2024/7/23.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#ifndef STUDENT_H
#define STUDENT_H
typedef struct Student {
    int no;
    char name[50];
}Value;

typedef struct double_circle {
    Value stus;
    struct  double_circle * next;
    struct  double_circle * preview;
}node,*pnode;
//list==struct node
//plist==struct node *

int double_circle_init(pnode *H);
bool double_circle_empty(pnode H);
void double_circle_insert_reverse(pnode p,pnode new);
void double_circle_insert_front(pnode p,pnode new);
void double_circle_traverse_front(pnode H);
void double_circle_traverse_reverse(pnode H);
void double_circle_delete(pnode p,pnode H);
//void double_circle_destroy(pnode *H);






#endif //STUDENT_H
