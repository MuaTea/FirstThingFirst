#include <stdio.h>
#include <string.h>
#define MAX_LEN 100
#include <ctype.h>
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

//#include "../../../Program Files/JetBrains/CLion 2024.1.4/bin/mingw/x86_64-w64-mingw32/include/math.h"
#define SIZE 100

// #include "../../../Program Files/JetBrains/CLion 2024.1.4/bin/mingw/x86_64-w64-mingw32/include/float.h"

// #ifndef _LINK_LIST_H
// #define _LINK_LIST_H
// //typedef int data;
// typedef struct Node {
//     int data;
//     struct Node *next;
// }Node;
//
// Node* createList(int n) {
//     Node *head=(Node*)malloc(sizeof(Node));
//     Node *currect=head;
//     for (int i = 1; i <= n; i++) {
//         currect->data=i;
//         if (i<n) {
//             currect->next=(Node*)malloc(sizeof(Node));
//             currect=currect->next;
//         }else {
//             currect->next=NULL;
//         }
//     }
//     return head;
// }
// void printList(Node* head) {
//     while (head!=NULL) {
//         printf("%d ->",head->data);
//         head=head->next;
//     }
//     printf("NULL\n");
// }
//
// void reverseList(Node **head) {
// /*Understanding Pointers in C
// 在C语言中，指针是一种特殊的变量，它存储的是一个内存地址，指向另一个变量的位置。指针本身也有自己的地址，这个地址称为指针的指针，或者二级指针。
//
// Function Arguments and Pointers
// 在函数调用中，C语言通过值传递的方式传递参数。这意味着，如果你传递一个指针作为参数，实际上传递的是指针的副本，而不是指针本身。因此，如果你希望在函数内部修改调用者的指针（而不仅仅是指向的内容），你需要传递指针的地址。
//
// Explanation
// Single Pointer (Node *head):
//
// 当你声明一个单级指针 Node *head，它是一个指向 Node 结构体的指针。
// 如果你希望修改 main 函数中的 head 指针，你可以通过 Node *head 修改它指向的内容，但不能修改 main 函数中 head 指针本身。
// Double Pointer (Node **head):
//
// 双级指针 Node **head 是指向一个 Node * 类型的指针的指针。
// 当你在函数中使用 Node **head，你实际上操作的是指向 main 函数中 head 指针的地址。
// 通过 Node **head，你可以间接修改 main 函数中 head 指针的内容，从而达到修改指针本身的效果。
// &head:
//
// &head 是取地址运算符应用于 head 变量的结果。
// 在函数调用时，如果你希望将指针的地址传递给函数（而不是指针指向的内容），你可以传递 &head。
// 因此，Node **head 和 &head 在这里是等效的，因为它们都是传递指针的地址，而不是指针指向的内容。
// Practical Use Case
// 在你的例子中，reverseList 函数需要修改 main 函数中 createList 返回的头节点指针。因此，你使用 Node **head 作为参数类型，这样可以在函数内部通过 *head 访问和修改 main 函数中的 head 指针，从而实现链表的反转操作。
//
// Conclusion
// 因此，Node **head 和 &head 都是为了在函数内部能够修改调用函数中传递的指针本身。这种技术允许函数直接影响到调用者在主调函数中定义的指针变量。*/
//     Node *prev=NULL,*currect=*head,*next=NULL;
//     while (currect!=NULL) {
//         next=currect->next;
//         currect->next=prev;
//         prev=currect;
//         currect=next;
//     }
//     *head=prev;
// }
// int main() {
//     Node *head=createList(5);
//     printf("Original List:\n");
//     printList(head);
//     reverseList(&head);
//     printf("Reversed List:\n");
//     printList(head);
//
//
//     while (head!=NULL) {
//         Node *temp=head;
//         head=head->next;
//         free(temp);
//     }
//     return 0;
// }
//
// #endif


// int search(int a[], int n, int key) {
//     int low = 0, mid, high = n - 1;
//     while (a[low] < a[high]) {
//         if (a[mid] < key) {
//             low = mid + 1;
//         } else if (a[mid] > key) {
//             high = mid - 1;
//         } else {
//             key = mid;
//         }
//     }
//     return -1;
// }
//
// int main() {
//     int key = -1;
//     int a[12] = {3, 14, 56, 77, 88, 98, 99, 100, 101, 102, 103, 104};
//     while (1) {
//         fprintf(stderr, "");
//         scanf("%d", &key);
//     }
// }
// 定义哈希表的数据类型
void shell_sort(int a[],int n)
{
    int d;
    int i,j,temp;
    for(d = n/2;d > 0;d = d/2)//设置增量
    {
        for(i = d;i < n;i++)
        {
            temp = a[i];
            for(j = i-d;j >= 0;j = j-d)
            {
                if(a[j] > temp)
                {
                    a[j+d] = a[j];
                }
                else
                    break;
            }
            a[j+d] = temp;
        }
    }
}

int main(void)
{
    int a[10] = {50,36,66,76,95,12,25,36,24,8};

    shell_sort(a,10);
    int i;
    for(i = 0;i < 10;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");

    return 0;
}
