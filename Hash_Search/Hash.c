//
// Created by MuaTea on 2024/7/26.
//
#include "Hash.h"
// 控制循环的全局变量
int i, j;

/**
 * 初始化哈希表
 * @param h 指向哈希表指针的指针
 * @param m 哈希表的初始大小
 */
void hash_init(pht *h, int m) {
    // 分配哈希表结构的内存
    (*h) = (pht) malloc(sizeof(ht));
    if (h == NULL) {
        perror("malloc");
    }
    // 初始化哈希表的长度
    (*h)->hlen = m;
    // 分配数据数组的内存
    (*h)->p = (datatype *) malloc(sizeof(datatype) * (*h)->hlen);
    if ((*h)->p == NULL) {
        perror("malloc");
        return;
    }
    // 将数据数组的所有元素初始化为-1
    for (int i = 0; i < (*h)->hlen; i++) {
        (*h)->p[i] = -1;
    }
}

/**
 * 查找小于或等于给定数的最大质数
 * @param m 找质数的上限
 * @return 小于或等于m的最大质数
 */
int max_prime(int m) {
    for (i = m; i > 1; i--) {
        for (int j = 2; j < i; j++) {
            if (i % j == 0)
                break;
        }
        if (i == j)
            return i;
    }
    return -1;
}

/**
 * 显示当前哈希表的状态
 * @param h 指向哈希表的指针
 * @param n 当前哈希表中的元素数量
 */
void hash_show(pht h, int n) {
    int i;
    for (i = 0; i < h->hlen; i++) {
        if (n == i) {
            printf("h->p[%02d]<---------%02d\n", i, h->p[i]);
            usleep(500000);
        } else {
            printf("h->p[%02d]=%02d\n", i, h->p[i]);
        }
    }
    printf("===========================================\n");
}

/**
 * 使用开放寻址法创建哈希表
 * @param a 要插入到哈希表的数据数组
 * @param n 数组中的元素数量
 * @param h 指向哈希表的指针
 */
void hash_create(int a[], int n, pht h) {
    int p = -1;
    // 找到小于或等于哈希表长度的最大质数
    p = max_prime(h->hlen);
    int h_sub;
    for (i = 0; i < n; i++) {
        // 计算数据在哈希表中的初始位置
        h_sub = a[i] % p;
        // 使用线性探测处理冲突
        while (h->p[h_sub] != -1) {
            h_sub = (h_sub + 1) % (h->hlen);
        }
        // 将数据插`入哈希表
        h->p[h_sub] = a[i];
        // 插入数据后显示哈希表状态
        hash_show(h, h_sub);
    }
}

/**
 * 在哈希表中搜索键值
 * @param h 指向哈希表的指针
 * @param n 当前哈希表中的元素数量
 * @param key 要搜索的键值
 * @return 键值在哈希表中的索引，未找到则返回-1
 */
int hash_search(pht h, int n, int key) {
    int p = max_prime(h->hlen);
    int h_sub = -1;
    h_sub = key % p;
    int flag = 0;
    while (h->p[h_sub] != key) {
        flag++;
        h_sub = (h_sub + 1) % (h->hlen);
        if (h->p[h_sub] == -1 || flag == n)
            return -1;
    }
    return h_sub;
}