//
// Created by MuaTea on 2024/7/18.
//

#ifndef FILEIO_H
#define FILEIO_H
#include "student.h"


// void save_students_to_file(Student students[], int num_students, const char *filename) ;
// int load_students_from_file(Student students[], int *num_students, const char *filename) ;
void save_students_to_file(Student students[], int num_students, const char *filename);
int load_students_from_file(Student students[], int *num_students, const char *filename);




#endif //FILEIO_H
