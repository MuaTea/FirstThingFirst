//
// Created by MuaTea on 2024/7/24.
//
#include "MethodBody.h"


void kernel_linked_init(pnode *H) {
    (*H)=(pnode)malloc(sizeof(node));
    if((*H)==NULL) {
        perror("malloc");
        return;
    }
    INIT_LIST_HEAD(&((*H)->knode));
}


//traverse
void kernel_linked_traverse(pnode H) {
    if(list_empty(&(H->knode))) {
        printf("list is empty\n");
        return;
    }
    pnode p=NULL;
    list_for_each_entry_safe(p,n,&(H->knode),knode)
    {
        printf("%d\n",p->data);
    }
    printf("\n");
}