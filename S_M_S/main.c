#include <iso646.h>
#include "menu.h"
#include "student.h"
#include "fileio.h"


int main() {
    Student students[100];
    int num_students=0;

    cycle:
    while (1) {
        //加载学生数据
        int loaded = load_students_from_file(students, &num_students, "students.dat");
        if (loaded == -1) {
            printf("Failed to load student data from file.\n");
        }
        menu();
        int choice;
        printf("Plz Enter In Your Choice:..");
        scanf("%d",&choice);
        switch (choice) {
            case 1:printf("Add Students\n");
            add_student(students, &num_students);break;
            case 2:printf("Delete Students\n");
            delete_student(students, &num_students, 1);break;
            case 3:printf("Update Students\n");
            update_student_score(students, num_students, 1, 95.5);break;
            case 4:printf("Inquire Students\n");
            search_student_by_id(students, num_students, 1);break;
            case 5:printf("Display Students\n");
            display_students(students, num_students);break;
            case 0:printf("EXIT THE SYS\n");exit(0);
            default:printf("Invalid Value\n");break;
        }
        // Save student data
        save_students_to_file(students, num_students, "students.dat");

        // Free memory
        free_student_memory(students, num_students);

        goto cycle;

        return 0;
    }
}