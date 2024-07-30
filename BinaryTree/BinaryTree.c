//
// Created by MuaTea on 2024/7/25.
//
#include "BinaryTree.h"

pnode create_btree(void) {
    pnode t = NULL;
    dataType data;
    scanf(" %c", &data);

    if (data == '#') {
        t = NULL;
    } else {
        t = (pnode) malloc(sizeof(node));
        if (t == NULL) {
            perror("malloc");
            return NULL;
        }
        t->data = data;
        t->lchild = create_btree();
        t->rchild = create_btree();
    }
    return t;
}

void traverse_btree(pnode t) {
    if (t != NULL) {
        printf("%c", t->data);
        traverse_btree(t->lchild);
        traverse_btree(t->rchild);
    }
}

//先序遍历
void Pre_order_traversal(pnode t) {
    if (t!=NULL) {
        traverse_btree(t);
        //traverse_btree(t->data);
        // traverse_btree(t->lchild);
        // traverse_btree(t->rchild);
    }
}

//中序遍历
void In_order_traversal(pnode t) {
    if (t!=NULL) {
        traverse_btree(t->lchild);
        printf("%c ",t->data);
        traverse_btree(t->rchild);
    }
}

//后序遍历
void Post_order_traversal(pnode t) {
    if (t!=NULL) {
        traverse_btree(t->lchild);
        traverse_btree(t->rchild);
        printf("%c ",t->data);
    }
}


//其实可以像以下函数一样简单>>>回调自身
void pre_show(pnode t) {
    if(t!=NULL) {
        printf("%c ",t->data);
        pre_show(t->lchild);
        pre_show(t->rchild);
    }
}

void in_show(pnode t) {
    if(t!=NULL) {
        in_show(t->lchild);
        printf("%c",t->data);
        in_show(t->rchild);
    }
}
void order_show(pnode t) {
    if(t!=NULL) {
        order_show(t->lchild);
        order_show(t->rchild);
        printf("%c",t->data);
    }
}