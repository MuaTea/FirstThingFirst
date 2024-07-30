//
// Created by MuaTea on 2024/7/25.
//

#include "Stack.h"

void InitStack(StackNode *S) {
    S=(LinkStack)malloc(sizeof(StackNode));
    if ( S == NULL) {
        perror("malloc");
        return;
    }
    S->top = -1;
}

void Stack_empty(StackNode *S) {
    if (S->top == -1) {
        printf("栈为空");
    } else {
        printf("栈不为空");
    }
}

void Stack_full(StackNode *S) {
    if (S->top == SIZE - 1) {
        printf("栈已满");
    } else {
        printf("栈未满");
    }
}

bool Push_stack(StackNode S,Datatype data) {
    if(Stack_empty(S)) {
        printf("栈已满");
        return;
    }
}