//
// Created by MuaTea on 2024/7/25.
//

#include "LinkedStack.h"


void init(pnode *S) {
        *S = NULL;
}

bool isEmpty(pnode S) {
        if(S==NULL) {
                return true;
        } else {
                return false;
        }
}

void LinkedStack_Push(pnode *S,pnode new) {
        new->next=*S;
        *S=new;
}

void  LinkedStack_pop(pnode *S,Datatype *data) {
        pnode temp=NULL;
        temp=*S;
        *data=(*S)->data;
        *S=temp->next;
        temp->next=NULL;
        free(temp);
        temp=NULL;
}

void LinkedStack_traverse(pnode S) {
        if(isEmpty(S)){
                printf("EMPTY\n");
                return;
        }
        pnode p=NULL;
        for(p=S;p!=NULL;p=p->next) {
                printf("%d ",p->data);
        }
}