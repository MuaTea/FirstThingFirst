#include "MethodBody.h"

int main(void) {
    pnode H=NULL,new=NULL,p=NULL,n=NULL;
    kernel_linked_init(&H);


    for(int i=1;i<11;i++) {
        new=(pnode)malloc(sizeof(node));
        if(new==NULL) {
            printf("malloc error\n");
            return -1;
        }
        new->data=i;
        list_add_tail(&(new->knode),(&H->knode));
    }
    list_for_each_entry_safe(p,n,&(H->knode),knode) {
        if ((p->data%2==0)) {
            list_del(&(p->knode));
        }
    }
        kernel_linked_traverse(H);
        return 0;
}