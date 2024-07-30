#include "DCL.h"


int main(void) {
    // 初始化链表
    pnode H = NULL, new = NULL;
    double_circle_init(&H);

    // 向链表中插入数据
    for (int i = 0; i < 11; i++) {
        new = (pnode) malloc(sizeof(node));
        if (new == NULL) {
            printf("malloc failed!\n");
            return -1;
        }
        new->data = i;
        double_circle_insert_reverse(H, new); // 插入到链表末尾
    }

    printf("Original list:\n");
    double_circle_traverse(H);
    printf("After list reverse:\n");
    // 逆序操作
    double_circle_reverse(H);

    // 遍历链表
    double_circle_traverse(H);

    return 0;
}