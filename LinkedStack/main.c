#include <stdio.h>

#include "LinkedStack.h"

int main(void)
{
    int i;
    Datatype data;
    pnode S=NULL,new=NULL;
    init(&S);
    for (i=1;i<11;i++) {
        new=(pnode)malloc(sizeof(node));
        if (new==NULL) {
            perror("malloc\n");
            return -1;
        }
            new->data=i;
        LinkedStack_Push(&S,new);
        LinkedStack_traverse(S);
        printf("\n");
    }

    for (i=1;i<13;i++) {
        LinkedStack_pop(&S,&data);
        printf("STACK POPS %d\n",data);
        LinkedStack_traverse(S);
        printf("\n");
    }

    return 0;
}
