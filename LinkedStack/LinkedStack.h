//
// Created by MuaTea on 2024/7/25.
//

#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>



typedef int Datatype;
typedef  struct LinkedStack {
    Datatype data;
    struct LinkedStack *next;
}node,*pnode;


void init(pnode *S);
bool isEmpty(pnode S);
void LinkedStack_Push(pnode *S,pnode new);
void  LinkedStack_pop(pnode *S,Datatype *data);
void LinkedStack_traverse(pnode S);
#endif //LINKEDSTACK_H
