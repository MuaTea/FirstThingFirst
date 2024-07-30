//
// Created by MuaTea on 2024/7/25.
//

#ifndef BTREE_H
#define BTREE_H
#include <stdio.h>
#include <stdlib.h>

typedef char datatype;
typedef struct btree {
    datatype data;
    struct bree *lchild,*rchild;
}btree_node,*btree_pnode;

extern btree_pnode create_btree(void);   //创建一颗二叉树
extern void pre_show_btree(btree_pnode t); //先序遍历一棵树
extern void mid_show_btree(btree_pnode t); //中序遍历一棵树
extern void rear_show_btree(btree_pnode t);  //后序遍历一棵树
extern void level_show_btree(btree_pnode t);//层次遍历
extern void pre_order_v2(btree_pnode t);  //先序列非递归遍历




#endif //BTREE_H
