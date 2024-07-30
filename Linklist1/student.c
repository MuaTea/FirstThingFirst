//
// Created by MuaTea on 2024/7/23.
//

#include "student.h"
//INIT
int double_circle_init(pnode *H) {
    (*H) = (pnode) malloc(sizeof(node));

    if (*H == NULL) {
        perror("malloc");
        return -1;
    }
    (*H)->next = (*H);
    (*H)->preview=(*H);
    return 0;
}

//Is_empty
bool double_circle_empty(pnode H) {
    if (H->next==H && H->preview == H) {
        return true;
    }else {
        return false;
    }
}

// //Is_full
// bool linklist_full(plist H) {
//     if ()
// }

//Insert front
void double_circle_insert_front(pnode p, pnode new) {
    new->next=p;
    new->preview=p->preview;
    p->preview->next=new;
    p->preview=new;
}

void double_circle_insert_reverse(pnode p, pnode new) {
    new->next=p->next;
    new->preview=p;
    p->next->preview=new;
    p->next=new;
}


//Show
void double_circle_traverse_front(pnode H) {
    if (double_circle_empty(H)) {
        printf("EMPTY\n");
        return;
    }
    pnode p = H->preview;
    printf("====================================\n");\
    for(p=H->preview;p!=H;p=p->preview){
        printf("%d\t%s\n", p->stus.no, p->stus.name);
    }
    printf("====================================\n");
}

void double_circle_traverse_reverse(pnode H) {
    if (double_circle_empty(H)) {
        perror("EMPTY\n");
        return;
    }
    pnode p=NULL;
    printf("====================================\n");
    for (p=H->next;p!=H;p=p->next) {
        printf("%d\t%s\t\n",p->stus.no,p->stus.name);
    }
    printf("====================================\n");

}
//Delete
void double_circle_delete(pnode p, pnode H) {
    if (double_circle_empty(H)) {
        printf("Empty\n");
        return;
    }
    pnode temp = p->next;

    // if (p->next==H) {
    //     printf("Cant Delete Head Node.\n");
    //     return;
    // }完全无法使用
    p->preview->next=p->next;
    p->next->preview=p->preview;
    p->preview=NULL;
    p->next=NULL;
}


void sq_search_mid(pnode p,pnode H) {

}

