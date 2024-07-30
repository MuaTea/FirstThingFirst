//
// Created by MuaTea on 2024/7/22.
//

#ifndef LINKLIST_H
#define LINKLIST_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct student {
    int no;
    char name[20];
}DATA;

typedef struct node {
    DATA data;
    struct node* next;
}list,*plist;


extern void init_list(plist *p);
bool is_empty(plist p);
void show(plist p);
void insert(plist p,plist new);
void delete(plist p);

#endif //LINKLIST_H
