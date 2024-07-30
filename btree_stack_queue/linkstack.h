#ifndef _LINKSTACK_H
#define _LINKSTACK_H
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "btree.h"
typedef btree_pnode datatype;

typedef struct linkstack
{
	datatype date;
	struct linkstack *next;
}linkstack_node,*linkstack_pnode;

extern void init_linkstack(linkstack_pnode *Q);
extern bool isempty_linkstack(linkstack_pnode Q);
extern void input_linkstack(linkstack_pnode *Q,linkstack_pnode new);
extern void output_linkstack(linkstack_pnode *Q,datatype *data);
extern void show_linkstack(linkstack_pnode Q);

#endif

