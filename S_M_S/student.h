//
// Created by MuaTea on 2024/7/18.
//

#ifndef STUDENT_H
#define STUDENT_H
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int student_id;
    char *name;//动态内存
    int age;
    float score;
}Student;

//Fuction Declaration
// void add_student(Student students[],int *num_students);
// void display_students(Student students[],int num_students) ;
// void search_student_by_id(Student students[],int num_students,int id);
// void update_student_score(Student students[],int num_students,int id,float new_score);
// void delete_student(Student students[],int *num_students,int id);
//
// void free_student_memory(Student student[],int num_students);
void add_student(Student students[], int *num_students);
void display_students(Student students[], int num_students);
void search_student_by_id(Student students[], int num_students, int id);
void update_student_score(Student students[], int num_students, int id, float new_score);
void delete_student(Student students[], int *num_students, int id);
void free_student_memory(Student students[], int num_students);




#endif //STUDENT_H
