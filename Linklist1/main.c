#include <stdio.h>
#include <string.h>

#include "student.h"

//Double Circle List:Init.is_empty.insert_reverse.insert front.delete.traverse reverse.traverse front
int main(void) {
    //Init
    pnode H,new1,new2;
    double_circle_init(&H);

    //Insert
    new1=(pnode)malloc(sizeof(pnode));
    if (new1==NULL) {
        perror("malloc");
        return -1;
    }
    strcpy(new1->stus.name,"Allen");
    new1->stus.no=1;
    double_circle_insert_front(H,new1);

    new2=(pnode)malloc(sizeof(node));
    if (new2==NULL) {
        perror("malloc");
        return -1;
    }
    strcpy(new2->stus.name,"Jimmy");
    new2->stus.no=2;
    double_circle_insert_front(H,new2);

    //Show
    double_circle_traverse_front(H);
    // //Delete
    // double_circle_delete(new1,H);
    // //Show
    // double_circle_traverse_front(H);

    double_circle_delete(new2,H);
    // double_circle_delete(new1,H);
    // double_circle_delete(new2,H);

    //Show
    double_circle_traverse_front(H);
    return 0;
}
