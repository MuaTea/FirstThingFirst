//
// Created by MuaTea on 2024/7/25.
//

#include "LinkedQueue.h"
void Linked_Queue_Init(QueueNode *Q) {
    Q=(QueueNode *)malloc(sizeof(QueueNode));
    if  (Q == NULL) {
        perror("malloc error");
        return;
    }
    Q->front = Q->rear = NULL;
}

void LinkedQueue_Enqueue(pQueueNode Q, pnode new) {
    if (Q->front == NULL) {
        Q->front = Q->rear = new;
    } else {
        Q->rear->next = new;
        Q->rear = new;
    }
}


void LinkedQueue_Traverse(pQueueNode Q) {
    pnode p = Q->front;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
}

void LinkedQueue_Deletle(pQueueNode Q,data) {
    if (Q->front == NULL) {
        printf("队列为空");
        return;
    }
    if (Q->front == Q->rear) {
        free(Q->front);
        Q->front = Q->rear = NULL;
    } else {
        pnode p = Q->front;
        Q->front = Q->front->next;
        free(p);
    }
}