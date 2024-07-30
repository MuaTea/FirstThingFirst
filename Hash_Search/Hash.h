//
// Created by MuaTea on 2024/7/26.
//

#ifndef HASH_H
#define HASH_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <unistd.h>

// 定义哈希表的数据类型
typedef int datatype;

// 定义哈希结构体
typedef struct hash {
    datatype *p; // 数据数组指针
    int hlen; // 哈希表长度
} ht, *pht;

void hash_init(pht *h, int m);
int max_prime(int m);
void hash_show(pht h, int n);
void hash_create(int a[], int n, pht h);
int hash_search(pht h, int n, int key);
#endif //HASH_H
