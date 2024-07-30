//
// Created by MuaTea on 2024/7/22.
//

#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Student struct
typedef struct Student {
    int student_id;
    char name[50];
    struct student* next;
}Student;
//Linklist Struck
typedef struct  LinkedList {
    Student* head;
}Linklist;

void initialize(Linklist* list);
Student* creatStudent(int student_id,const char* name);
#endif //STUDENT_H
