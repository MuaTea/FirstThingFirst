//
// Created by MuaTea on 2024/7/25.
//

#ifndef QUEUE_H
#define QUEUE_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdlib.h>
#define SIZE 100

typedef int datatype;
typedef struct Queue{
    datatype data[SIZE];
    int front,rear;
    }sq,*psq;


#endif //QUEUE_H
