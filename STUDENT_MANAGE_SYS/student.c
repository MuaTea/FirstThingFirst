//
// Created by MuaTea on 2024/7/18.
//
#include "student.h"
/**
 * 添加学生信息
 * @param stus 学生数组，用于存储学生信息
 */
void add_student(struct list_head *head) {
    Student *new_student = (Student *) malloc(sizeof(Student));
    if (new_student == NULL) {
        fprintf(stderr, "malloc");
        return;
    }

    new_student->name = (char *) malloc(50 * sizeof(char));
    if (new_student->name == NULL) {
        fprintf(stderr, "malloc");
        free(new_student);
        return;
    }

    // 无限循环，直到输入终止条件或数组满
    while (1) {
        printf("ADD STUDENT\n");
        // 请求输入学生编号
        printf("Plz Enter Student's Number:..");
        scanf("%d", &new_student->no);
        // 请求输入学生姓名
        printf("Plz Enter Stdent's Name:..");
        scanf("%s", new_student->name);

        printf("Plz Enter Student's Gander(Male->1,Female->0):..");
        scanf("%d", &new_student->sex);

        printf("Plz Enter Student's Age:..");
        scanf("%d", &new_student->age);

        printf("Plz Enter Student's Score:..");
        scanf("%d", &new_student->score);

        list_add_tail(&new_student->list, head);

        // 消耗输入缓冲区中的换行符，避免影响后续输入
        //while (getchar() != '\n');
        // 询问是否继续添加学生信息
        printf("Is Continue To Press In?(y/n)");
        char key;
        scanf("%c", &key);
        // 如果输入不是'y'或'Y'，则退出循环
        if (key != 'y' && key != 'Y')
            break;
    }
}


void display_students(struct list_head *head) {
    struct list_head *pos;

    if (list_empty(head) || list_is_singular(head)) {
        printf("List is empty or only contains one element.\n");
        return;
    }

    list_for_each(pos, head) {
        Student *student = list_entry(pos, Student, list);
        printf("ID: %d, Name: %s, Age: %d, Score: %.2f\n",
               student->no, (char *) student->name,
               student->age, (float) student->score);
    }
}


void search_student_by_id(struct list_head *head, int id) {
    struct list_head *pos;
    list_for_each(pos, head) {
        Student *student = list_entry(pos, Student, list);
        if (student->no == id) {
            printf("Student found:\n");
            printf("ID: %d, Name: %s, Age: %d, Score: %.2f\n",
                   student->no, (char *) student->name,
                   student->age, (float) student->score);
            return;
        }
    }
    printf("Student with ID %d not found.\n", id);
}

void sort_students_by_no(struct list_head *head) {
    struct list_head sorted;
    INIT_LIST_HEAD(&sorted);

    while (!list_empty(head)) {
        struct list_head *pos = head->next;
        list_del(pos);

        Student *student = list_entry(pos, Student, list);
        struct list_head *insert_pos;
        list_for_each(insert_pos, &sorted) {
            Student *sorted_student = list_entry(insert_pos, Student, list);
            if (student->no < sorted_student->no) {
                break;
            }
        }
        list_add_tail(pos, insert_pos);
    }
    list_splice(&sorted, head);
}

/**
 * 根据成绩对学生列表进行排序
 *
 * 本函数通过创建一个有序的链表，并逐个从原链表中取出学生，根据成绩找到其在有序链表中的位置，
 * 然后将该学生插入到有序链表中的适当位置。最后，将有序链表合并回原链表。
 *
 * @param head 原学生列表的头指针
 */
void sort_students_by_score(struct list_head *head) {
    // 初始化一个空的有序链表
    struct list_head sorted;
    INIT_LIST_HEAD(&sorted);

    // 遍历原链表，直到原链表为空
    while (!list_empty(head)) {
        // 取出原链表中的第一个学生
        struct list_head *pos = head->next;
        list_del(pos);

        // 将取出的学生转换为学生结构体指针
        Student *student = list_entry(pos, Student, list);
        struct list_head *insert_pos;

        // 遍历有序链表，找到该学生应插入的位置
        list_for_each(insert_pos, &sorted) {
            Student *sorted_student = list_entry(insert_pos, Student, list);
            // 如果当前学生的成绩大于已排序链表中的学生，则应插入到该学生之后
            if (student->score > sorted_student->score) {
                break;
            }
        }
        // 将学生插入到已排序链表的适当位置
        list_add_tail(pos, insert_pos);
    }
    // 将有序链表合并回原链表头部
    list_splice(&sorted, head);
}



// 更新学生成绩
void update_student_score(struct list_head *head, int id, float new_score) {
    struct list_head *pos;
    list_for_each(pos, head) {
        Student *student = list_entry(pos, Student, list);
        if (student->no == id) {
            student->score = new_score;
            printf("Score updated for student ID %d\n", id);
            return;
        }
    }
    printf("Student with ID %d not found.\n", id);
}

// 删除学生
void delete_student(struct list_head *head, int id) {
    struct list_head *pos, *q;
    list_for_each_safe(pos, q, head) {
        Student *student = list_entry(pos, Student, list);
        if (student->no == id) {
            list_del(pos);
            free(student->name);
            free(student);
            printf("Student with ID %d deleted.\n", id);
            return;
        }
    }
    printf("Student with ID %d not found.\n", id);
}

// 释放学生内存
void free_student_memory(struct list_head *head) {
    struct list_head *pos, *q;
    list_for_each_safe(pos, q, head) {
        Student *student = list_entry(pos, Student, list);
        list_del(pos);
        free(student->name);
        free(student);
    }
}
