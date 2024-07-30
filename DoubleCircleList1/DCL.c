//
// Created by MuaTea on 2024/7/24.
//

#include "DCL.h"
#include "list.h"

//init
void double_circle_init(pnode *H) {
    *H = (pnode) malloc(sizeof(node));
    if (*H == NULL) {
        perror("malloc");
        return;
    }
    (*H)->next = *H;
    (*H)->prev = *H;
}

//EMPTY
bool double_circle_empty(pnode H) {
    if (H->next == H && H->prev == H) {
        return true;
    } else {
        return false;
    }
}


//insert_front

void double_circle_insert_front(pnode p, pnode new) {
    new->next = p;
    new->prev = p->prev;
    p->prev->next = new;
    p->prev = new;
}

void double_circle_insert_reverse(pnode p, pnode new) {
    new->next = p->next;
    new->prev = p;
    p->next->prev = new;
    p->next = new;
}

void double_circle_delete(pnode H, pnode p) {
    if (double_circle_empty(H)) {
        printf("empty");
        return;
    }
    p->prev->next = p->next;
    p->next->prev = p->prev;
    p->next = NULL;
    p->prev = NULL;
}
#if 0
    free(p);
    p=NULL;
#endif


void double_circle_traverse(pnode H) {
    if (double_circle_empty(H)) {
        printf("empty");
        return;
    }
    pnode p = NULL;
    for (p = H->next; p != H; p = p->next) {
        printf("%d ", p->data);
    }
    printf("\n");
}


void double_circle_reverse(pnode H) {
    pnode p = NULL;
    pnode q = NULL;
    //list_for_each_entry_safe(p, q, &(H->data), data){

    for (p = H->prev, q = p->prev; p != H; q = q->prev) {

    if (p->data % 2 == 0) {
        double_circle_delete(H, p);
        double_circle_insert_front(H, p);
    }
    p = q;
    }
}
