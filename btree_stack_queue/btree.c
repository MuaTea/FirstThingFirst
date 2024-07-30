//
// Created by MuaTea on 2024/7/25.
//

#include "btree.h"

#include "linkqueue.h"
#include "linkstack.h"

btree_pnode create_btree(void) {
    btree_pnode t = NULL;
    datatype data;
    scanf("%c", &data);
    if (data == '#') {
        t = NULL;
    } else {
        t = (btree_pnode) malloc(sizeof(btree_node));
        if (t == NULL) {
            perror("malloc");
        }
        t->data = data;

        t->lchild = create_btree();
        t->rchild = create_btree();
    }
    return t;
}

void pre_show_btree(btree_pnode t) {
    if (t != NULL) {
        printf("%c", t->data);
        pre_show_btree(t->lchild);
        pre_show_btree(t->rchild);
    }
}

void mid_show_tree(btree_pnode t) {
    if (t != NULL) {
        mid_show_tree(t->lchild);
        printf("%c ", t->data);
        mid_show_tree(t->rchild);
    }
}

void rear_show_btree(btree_pnode t) {
    if (t != NULL) {
        //后序遍历左子树
        rear_show_btree(t->lchild);
        //后序遍历右子树
        rear_show_btree(t->rchild);
        printf("%c ", t->data);
    }
}

void level_show_btree(btree_pnode t) {
    link_pqueue Q;
    init_linkqueue(&Q);

    linkqueue_pnode new;

    while (t != NULL) {
        printf("%c", t->data);
        if (t->lchild != NULL) {
            new = (linkqueue_pnode) malloc(sizeof(linkqueue_node));
            if (new == NULL) {
                perror("malloc");
            }
            new->data = t->rchild;
            input_linkqueue(Q, new); //插入队列
        }
        if (!isempty_linkqueue(Q)) {
            output_linkqueue(Q, &t);
        } else {
            break;
        }
    }
}

void pre_order_v2(btree_pnode t) {
    linkstack_pnode s, new;
    init_linkstack(&s);

    while (t != NULL) {
        printf("%c ", t->data);

        if (t->rchild != NULL) {
            new = (linkstack_pnode) malloc(sizeof(linkstack_node));
            if (new == NULL) {
                perror("malloc");
            }
            new->date = t->rchild;
            input_linkqueue(&s, new);
        }
        t=t->lchild;
        if(t==NULL) {
            if(!isempty_linkstack(s)) {
                output_linkqueue(&s,&t);
            }
            else {
                break;
            }
        }
    }
}

