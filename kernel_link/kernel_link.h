#ifndef __KERNEL_LINK_H
#define __KERNEL_LINK_H

/* 头文件 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "list.h"

/* 全局变量 */
typedef int datatype;
typedef struct kernel_link{
		datatype data;
		struct list_head knode; 
}node,*pnode;

/* 函数声明 */
void kernel_link_init(pnode *H);
void kernel_link_show(pnode H);

#endif

