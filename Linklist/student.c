//
// Created by MuaTea on 2024/7/22.
//
 #include "student.h"


void initialize(Linklist* list) {
    list->head=NULL;
}

//Create new student node
Student* creatStudent(int student_id,const char* name) {
    Student* new_student=(Student*)malloc(sizeof(Student));
    if (new_student==NULL) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }
    new_student->student_id=student_id;
    strcpy(new_student->name,name);
    new_student->next=NULL;
    return new_student;
}

//insert student info range up by id
void insert(Linklist* list,int student_id,const char* name){
    Student* new_student=creatStudent(student_id,name);

    if (list->head==NULL||student_id<list->head->student_id) {
        new_student->next=list->head;
        list->head=new_student;
    }else {
        Student* current=list->head;
        while (current->next!=NULL&& current->next->student_id<student_id) {
            current=current->next;
        }
        new_student->next=current->next;
        current->next=new_student;
    }
}

//Delete Objected Student's info
