#include <stdlib.h>
#include <stdint.h>

typedef struct binarysearchtree
{
    int val;
    struct binarysearchtree *left;
    struct binarysearchtree *right;
} BST, *PBST;

void *CreateTreeNode(BST *head)
{
    if (head == NULL)
    {
        ;
    }
}

