//
// Created by MuaTea on 2024/7/18.
//
#include "fileio.h"
#include "student.h"

#include <iso646.h>


void add_student(Student students[], int *num_students) {
    students[*num_students].name = (char *)malloc(50 * sizeof(char));
    if (students[*num_students].name == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return;
    }

    //Import Student Information
    printf("Enter student's ID:\n");
    scanf("%d", &students[*num_students].student_id);
    printf("Enter Student's name:\n");
    scanf("%s", students[*num_students].name);
    printf("Enter Student's age:\n");
    scanf("%d", &students[*num_students].age);
    printf("Enter Student's score:\n");
    scanf("%f", &students[*num_students].score);

    (*num_students)++;

    printf("ADD SUCCESSFULLY\n");
}

void display_students(Student students[], int num_students) {
    printf("\nStudent List:\n");
    for (int i = 0; i < num_students; i++) {
        printf("ID: %d, Name: %s, Age: %d, Score: %.2f\n", students[i].student_id, students[i].name, students[i].age, students[i].score);
    }
}

void search_student_by_id(Student students[], int num_students, int id) {
    for (int i = 0; i < num_students; i++) {
        if (students[i].student_id == id) {
            printf("Student found:\n");
            printf("ID: %d, Name: %s, Age: %d, Score: %.2f\n", students[i].student_id, students[i].name, students[i].age, students[i].score);
            return;
        }
    }
    printf("Student with ID %d not found.\n",id);
}

void update_student_score(Student students[], int num_students, int id, float new_score) {
    for (int i = 0; i < num_students; i++) {
        if (students[i].student_id == id) {
            students[i].score = new_score;
            printf("Score updated for student ID %d\n", id);
            return;
        }
    }
    printf("Student with ID %d not found.\n", id);
}

void delete_student(Student students[], int *num_students, int id) {
    int found = 0;
    for (int i = 0; i < *num_students; i++) {
        if (students[i].student_id == id) {
            free(students[i].name); // Free name's memory
            for (int j = i; j < *num_students - 1; j++) {
                students[j] = students[j + 1];
            }
            (*num_students)--;
            found = 1;
            printf("Student with ID %d deleted.\n", id);
            break;
        }
    }
    if (!found) {
        printf("Student with ID %d not found.\n", id);
    }
}


void free_student_memory(Student students[], int num_students) {
    for (int i = 0; i < num_students; i++) {
        free(students[i].name);
    }
}