//
// Created by MuaTea on 2024/7/25.
//

#ifndef STACK_H
#define STACK_H
#define SIZE 20
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int Datatype;
typedef struct Stack{
    Datatype data[SIZE];
    int top;
}StackNode, *LinkStack;



void InitStack(StackNode *S);
#endif //STACK_H
