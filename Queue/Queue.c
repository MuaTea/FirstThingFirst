//
// Created by MuaTea on 2024/7/25.
//

#include "Queue.h"
void InitQueue(psq *q) {
    (*q)->front=0;
    (*q)->rear=0;
}




bool is_full(psq Q) {
    if ((Q->rear+1)%SIZE==(Q->front)%SIZE) {
        return 1;
    }else
        return -1;
}

void enQueue(psq Q,datatype data) {
    if (is_full(Q)) {
        printf("队列已满");
        return;
    }

}