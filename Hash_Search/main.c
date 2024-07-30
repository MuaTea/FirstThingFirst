

#include "Hash.h"

int main(void) {
    int key, ret = -1;
    // 初始化数据数组
    int a[12] = {77, 88, 100, 101, 3, 14, 56, 102, 103, 98, 99, 104};
    int m = -1;
    // 计算哈希表的大小
    m = ceil(12 / 0.75);
    // 初始化哈希表
    pht h = NULL;
    hash_init(&h, m);
    // 创建哈希表
    hash_create(a, 12, h);

    // 循环接收用户输入以搜索数据
    while (1) {
        fprintf(stderr, "Plz Enter The Number Wanna Search:..");
        scanf("%d", &key);
        // 在哈希表中搜索键值
        ret = hash_search(h, 12, key);
        if (ret == -1) {
            printf("Not Found\n");
        } else {
            printf("Found%d\n", ret);
        }
    }
    return 0;
}
