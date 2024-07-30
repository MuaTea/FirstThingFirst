/*
* 0、学生：id（学号） name(姓名)  age(年龄)  sex(性别)

1、功能
（1）界面设计
（2）添加学生信息功能    （插入节点）
（3）删除学生信息		   (遍历链表、找到节点、删除当前节点)
（4）修改学生信息             (遍历链表、找到节点、删除当前节点)
（5）查询学生信息		  （遍历链表）
（6）对学生进行排序	  （链表的插入排序，交换整个节点）
（7）显示所有学生		 （遍历链表）
（8）退出系统			 （exit(0)）


2、一级菜单
        二级菜单
            （1）删除
                    按照学号删除
                    按照姓名删除
             （2）修改
                    按照学号修改
                    按照姓名修改
             （3）查询
                    按照学号查询
                    按照姓名查询
               （4）排序
                    按照学号
                    按照年龄
               （5）返回上一级菜单   （return ）

3、数据结构：
    内核链表（必须完成）、单链表、双向循环链表
*/
#include "student.h"

int main() {
    LIST_HEAD(student_list);
    while (1) {
        menu();
        int choice,key;
        printf("Plz Enter In Your Choice:..");
           scanf("%d",&choice);
        switch (choice) {
            case 1:add_student(&student_list);break;
            case 2:
                printf("Plz Enter In Your ID:..");
                scanf("%d",&key);
                delete_student(&student_list,key);break;
            case 3:
                printf("Plz Enter in Your ID And New Score:..");int new_sc;
                scanf("%d %d",&key,&new_sc);
                update_student_score(&student_list,key,new_sc);
                break;
            case 4:printf("Which Student Wish To Search?..");
            scanf("%d",&key);
            search_student_by_id(&student_list,key);
            break;
            case 5:display_students(&student_list);break;
            case 6:sort_students_by_no(&student_list);display_students(&student_list);break;
            case 7:sort_students_by_score(&student_list);display_students(&student_list);break;
            case 0:printf("If You Wanna Leave....");free_student_memory(&student_list);exit(0);
            default:printf("Invalid Value");
        }
    }
    return 0;
}