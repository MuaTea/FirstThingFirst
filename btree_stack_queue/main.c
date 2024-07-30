#include  "btree.h"

int main(void) {
    btree_pnode t;
    t = create_btree();

    printf("先序遍历：");
    pre_show_btree(t);
    printf("\n");

    printf("中序遍历：");
    mid_show_btree(t);
    printf("\n");

    printf("后序遍历：");
    rear_show_btree(t);
    printf("\n");

    printf("按层遍历：");
    level_show_btree(t);
    printf("\n");

    printf("先序非递归遍历：");
    pre_order_v2(t);
    printf("\n");
    return 0;
}
