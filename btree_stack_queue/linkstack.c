#include "linkstack.h"


void init_linkstack(linkstack_pnode *Q)
{
	(*Q) = NULL;
}


bool isempty_linkstack(linkstack_pnode Q)
{
	if(Q == NULL)
		return true;
	else
		return false;
}

void input_linkstack(linkstack_pnode *Q,linkstack_pnode new)
{
	new->next = *Q;
	*Q = new;
}

void output_linkstack(linkstack_pnode *Q,datatype *data)
{
	if(isempty_linkstack(*Q))
	{
		printf("栈空、无法出栈\n");
		return;
	}
	*data = (*Q)->date;
	linkstack_pnode temp = *Q;
	(*Q) = temp->next;
	temp->next = NULL;
#if 0
	free(temp);
	temp = NULL;
#endif

}
#if 0
void show_linkstack(linkstack_pnode Q)
{
	printf("======================================\n");
	printf("栈顶：\t");
	linkstack_pnode p;
	for(p = Q; p!=NULL; p=p->next)
	{
		printf("%d\t",p->date);
	}
	printf("栈底\n");
	printf("======================================\n");
}
#endif

