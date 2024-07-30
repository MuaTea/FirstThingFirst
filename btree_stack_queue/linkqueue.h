#ifndef __LINKQUEUE_H__
#define __LINKQUEUE_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "btree.h"


typedef btree_pnode  datatype;
typedef struct LinkQueueNode      //队列的一个节点
{
	datatype data;
	struct LinkQueueNode *next;
}linkqueue_node,*linkqueue_pnode;


typedef struct LinkQueue  //让我们可以用一个变量去表示一个队列  Q
{
	linkqueue_pnode front,rear;
}link_queue,*link_pqueue;


extern void init_linkqueue(link_pqueue *Q);
extern bool isempty_linkqueue(link_pqueue Q);
extern void input_linkqueue(link_pqueue Q,linkqueue_pnode new);
extern void output_linkqueue(link_pqueue Q,datatype *data);
//extern void show_linkqueue(link_pqueue Q);



#endif

