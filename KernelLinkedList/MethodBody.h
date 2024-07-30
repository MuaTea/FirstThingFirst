#ifndef _LINUX_LIST_H
#define _LINUX_LIST_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "list.h"

typedef int datatype;
typedef  struct kernel_linked_list {
    datatype data;
    struct list_head knode;
}node,*pnode;
void kernel_linked_init(pnode *H);
void kernel_linked_traverse(pnode H);

#endif