#include "kernel_link.h"

/**
 * 主函数执行链表的初始化、元素添加和展示操作。
 *
 * @return int 程序退出状态。
 */
int main(void)
{
    // 初始化链表头指针和用于添加新节点的临时指针
    pnode H = NULL, new = NULL, p = NULL, n = NULL;
    // 初始化链表
    kernel_link_init(&H);
    // 遍历添加10个节点到链表
    int i;
    for (i = 1; i < 11; i++)
    {
        // 动态分配新节点内存
        new = (pnode)malloc(sizeof(node));
        // 检查内存分配是否成功
        if (new == NULL)
        {
            perror("malloc");
            return -1;
        }
        // 设置新节点的数据值
        new->data = i;
        // 将新节点添加到链表尾部
        list_add_tail(&(new->knode), &(H->knode));
    }
    // 展示链表当前状态
    kernel_link_show(H);

    // 遍历链表，找到并删除数据值为2的节点
    list_for_each_entry_safe(p, n, &(H->knode), knode)
    {
        if (p->data == 2)
        {
            list_del(&(p->knode));
        }
    }

    // 再次展示链表当前状态
    kernel_link_show(H);
}
