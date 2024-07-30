//
// Created by MuaTea on 2024/7/25.
//

#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef char dataType;

typedef struct btree {
    dataType data;
    struct btree *lchild, *rchild;
} node, *pnode;


pnode create_btree(void);

void traverse_btree(pnode t);

void Pre_order_traversal(pnode t);

void In_order_traversal(pnode t);

void Post_order_traversal(pnode t);


#endif //BINARYTREE_H
