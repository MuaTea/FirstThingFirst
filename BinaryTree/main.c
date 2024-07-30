#include "BinaryTree.h"

int main(void) {
    //Create
    pnode t = NULL;
    t = create_btree();

    //Traverse
    printf("Pre-order traversal:");
    Pre_order_traversal(t);
    printf("\n");
    printf("In-order traversal:");
    In_order_traversal(t);
    printf("\n");
    printf("Post-order traversal:");
    Post_order_traversal(t);
    printf("\n");
    return 0;
}
