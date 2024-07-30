//
// Created by MuaTea on 2024/7/18.
//

#ifndef ADD_STUDENT_H
#define ADD_STUDENT_H
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <inttypes.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LEN 100

// #include <linux/list.h>
// #include <linux/list_sort.h>
#include "list.h"

typedef struct student {
    int no;
    char *name;
    bool sex;
    int age;
    int score;
    struct list_head list;
}Student;

void menu();
void add_student(struct list_head *head);
void display_students(struct list_head *head);
void search_student_by_id(struct list_head *head, int id);
void update_student_score(struct list_head *head, int id, float new_score);
void delete_student(struct list_head *head, int id);
void sort_students_by_score(struct list_head *head);
void sort_students_by_no(struct list_head *head);
void free_student_memory(struct list_head *head);
//extern struct student stus[];
#define STU_NUM 5
#endif //ADD_STUDENT_H
