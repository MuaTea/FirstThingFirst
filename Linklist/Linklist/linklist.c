//
// Created by MuaTea on 2024/7/22.
//



#include "linklist.h"

void init_list(plist *p) {
    *p=(plist)malloc(sizeof(list));
    if(*p==NULL) {
        perror("malloc");
        exit(0);
    }
    (*p)->next=NULL;
}

bool is_empty(plist p) {
    if (p->next==NULL) {
        return true;
    }return false;
}

void show(plist p) {
    if(is_empty(p)) {
        printf("EMPTY\n");
        return;
    }
    plist q=p->next;
    while (q!=NULL) {
        printf("%d%s\n",q->data.no,q->data.name);
        q=q->next;
    }
}

void insert(plist p,plist new) {
    new->next=p->next;
    p->next=new;
}

void delete(plist p){
    if(is_empty(p)==0) {
        printf("EMPTY\n");
        return;
    }
    plist temp=p->next;
    p->next=temp->next;
    temp->next=NULL;
    free(temp);
    temp=NULL;
}