#include "kernel_link.h"

/* 链表初始化 */
/**
 * 初始化内核链表
 * @param H 链表头指针的指针
 * 功能：分配内存给链表头节点，并初始化该节点
 */
/* 链表初始化 */
void kernel_link_init(pnode *H)
{
    /* 分配内存给链表头节点 */
    (*H) = (pnode)malloc(sizeof(node));
    /* 检查内存分配是否成功 */
    if(*H == NULL)
    {
        perror("malloc");
        return;
    }
    /* 初始化链表头节点 */
    INIT_LIST_HEAD(&((*H)->knode));
}

/**
 * 显示内核链表内容
 * @param H 链表头指针
 * 功能：遍历并显示链表中所有节点的数据
 */
/* 遍历 */
void kernel_link_show(pnode H)
{
    /* 检查链表是否为空 */
    if(list_empty(&(H->knode)))
    {
        printf("链表空，无法遍历\n");
        return;
    }
    /* 安全遍历链表的开始 */
    pnode p = NULL;
    pnode n = NULL;
    list_for_each_entry_safe(p,n,&(H->knode),knode)
    {
        /* 显示节点数据 */
        printf("%d\t",p->data);
    }
    /* 遍历结束，换行 */
    printf("\n");
}

