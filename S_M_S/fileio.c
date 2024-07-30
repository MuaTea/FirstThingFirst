//文件读写

#include "fileio.h"
#include "student.h"

void save_students_to_file(Student students[], int num_students, const char *filename) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        perror("Failed to open file for writing.");
        return;
    }

    //Write in student data
    fwrite(&num_students, sizeof(int), 1, file);

    for (int i = 0; i < num_students; i++) {
        fwrite(&students[i].student_id, sizeof(int), 1, file);
        fwrite(students[i].name, sizeof(char), 50, file);
        fwrite(&students[i].age, sizeof(int), 1, file);
        fwrite(&students[i].score, sizeof(float), 1, file);
    }
    fclose(file);
}

// 实现从文件加载学生数据的函数
// 返回加载的学生数目，失败时返回-1
int load_students_from_file(Student students[], int *num_students, const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        perror("Failed to open file for reading.");
        return -1;
    }
    //读取学生数量
    fread(num_students, sizeof(int), 1, file);

    //读取每个学生信息
    for (int i = 0; i < *num_students; i++) {
        fread(&students[i].student_id, sizeof(int), 1, file);

        //动态分配内存并读取学生姓名
        students[i].name = (char *)malloc(50 * sizeof(char));
        if (students[i].name == NULL) {
            fprintf(stderr, "Memory allocation failed.\n");
            fclose(file);
            return -1;
        }
        fread(students[i].name, sizeof(char), 50, file);
        fread(&students[i].age, sizeof(int), 1, file);
        fread(&students[i].score, sizeof(float), 1, file);
    }
    fclose(file);
    return *num_students;
}