//
// Created by MuaTea on 2024/7/25.
//

#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


typedef int Datatype;
//包含数据域和指针域的结构体
typedef struct LinkedNode {
    Datatype data;
    struct  LinkedNode *next;
}node,*pnode;

//指向结构体
typedef struct LinkedQueue {
    pnode front;
    pnode rear;
}QueueNode,*pQueueNode;

void Linked_Queue_Init(QueueNode *Q);
void LinkedQueue_Enqueue(pQueueNode Q, pnode new);
void LinkedQueue_Traverse(pQueueNode Q);
void LinkedQueue_Deletle(pQueueNode Q,data);
#endif //LINKEDQUEUE_H
