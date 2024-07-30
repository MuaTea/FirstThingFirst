#include "linkqueue.h"

void init_linkqueue(link_pqueue *Q)
{
	//1.给(*Q)申请空间
	(*Q) = (link_pqueue)malloc(sizeof(link_queue));
	if((*Q) == NULL)
	{
		perror("malloc");
	}
	//2.给(*Q)->front申请空间
	(*Q)->front = (linkqueue_pnode)malloc(sizeof(linkqueue_node));
	if((*Q)->front == NULL)
	{
		perror("malloc");
	}
	//3.给(*Q)->front->next赋值NULL
	(*Q)->front->next = NULL;
	//4.给(*Q)->rear 赋值 (*Q)->front
	(*Q)->rear = (*Q)->front;
}

bool isempty_linkqueue(link_pqueue Q)
{
	//如果 Q->front == Q->rear返回值真，否则返回假
	if(Q->front == Q->rear)
		return true;
	else
		return false;
}

void input_linkqueue(link_pqueue Q,linkqueue_pnode new)
{
	//1.new->next 赋值NULL(Q->rear->next)
	new->next = Q->rear->next;
	//2.Q->rear->next指向新节点 new;
	Q->rear->next = new;
	//3.Q->rear也指向新节点new
	Q->rear = new;
}


void output_linkqueue(link_pqueue Q,datatype *data)
{

	if(isempty_linkqueue(Q))
	{
		printf("队列为空，无法出队！！！\n");
		return;
	}

	//1.保存要出队的数据
	*data = Q->front->next->data;
	//2.定义一个变量 temp 保存现在 front所指向的空间
	linkqueue_pnode temp = Q->front;
	//3.Q->front指向 temp的next
	Q->front = temp->next;
	//4.释放temp的空间
	free(temp);
	temp = NULL;
}


/*
   void show_linkqueue(link_pqueue Q)
   {
   printf("===================================================================\n");
   printf("队头：\t");
   linkqueue_pnode p;
   for(p = Q->front->next;p != NULL;p = p->next)
   {
   printf("%d\t",p->data);
   }

   printf(":队尾\n");
   printf("===================================================================\n");
   }
 */


