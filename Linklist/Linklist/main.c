#include <stdio.h>
#include "linklist.h"


int main(void) {
    plist p;
    init_list(&p);
    int choice;
    scanf("%d",&choice);
        while (choice==0) {
            exit(0);
        }
        if (choice>0) {
            for(int i=0;i<4;i++) {
            plist new=(plist)malloc(sizeof(list));
            printf("Plz Enter Data:\n");
            scanf("%d%s",&new->data.no,&new->data.name);
            insert(p,new);
            show(p);
            }
        }else {
            for (int i=0;i<4;i++) {
            delete(p);
            show(p);
            }
        }
        return 0;
}




// 释放链表节点的内存
// current = head;
// while (current != NULL) {
//     plist temp = current;
//     current = current->next;
//     free(temp);
// }