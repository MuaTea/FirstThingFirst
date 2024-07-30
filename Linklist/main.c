//
// Created by MuaTea on 2024/7/22.
//
/*
 * 初始化结构体
 *
 * 创建数据结构体
 */

#include "student.h"

int main() {
    Linklist student_list;
    initialize(&student_list);

    int student_id;
    char name[50];

    while (1) {
        printf("Plz Enter Stu.Id:..Positive insertion, attachment deletion");
        scanf("%d",&student_id);

        if (student_id==0) {
            break;
        }else if(student_id>0) {
            printf("Plz Enter Student Name:..");
            scanf("%d",name);

        }
    }
}
