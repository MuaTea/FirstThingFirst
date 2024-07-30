#include <stdio.h>

#include "LinkedQueue.h"

int main(void)
{
    //Initalize the queue
    pQueueNode *Q = NULL;
    pnode new=NULL;
    Datatype data=NULL;

    Linked_Queue_Init(&Q);
    int i;
    for (i=0; i<11; i++) {
        new=(pnode)malloc(sizeof(node));
        if (new==NULL) {
            perror("malloc");
            return -1;
        }
        new->data=i;
        LinkedQueue_Enqueue(Q, new);
        LinkedQueue_Traverse(Q);
    }


    //out
    for(i=0; i<13; i++) {
        LinkedQueue_Deletle(Q,&data);
        printf("Outer is %d\n", new->data);
        LinkedQueue_Traverse(Q);
    }
    return 0;
}
