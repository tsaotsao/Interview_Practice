#include <stdio.h>
#include <stdlib.h>
#include "stack_list.h"
#include <stdbool.h>
#define MAX_STACK 100

typedef struct node
{
    int val;
    struct node *next;
} Node;

Node *top = NULL;

void Push(int val)
{
    Node *NewNode = (Node *)malloc(sizeof(Node));
    if (NewNode == NULL)
    {
        printf("Push fail");
        return;
    }
    NewNode->val = val;
    NewNode->next = top;
    top = NewNode;
}

bool isEmpty()
{
    return top == NULL;
}

int peek()
{
    if (!isEmpty())
        return top->val;
    else
        exit(1);
}

void PrintStack()
{
    Node *temp;
    if (isEmpty() == true)
    {
        printf("Stack empty");
        return;
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {
            printf("%d", temp->val);
            temp = temp->next;
            printf("->");
        }
        printf("bottom\n");
    }
}

void pop()
{
    Node *temp = (Node *)malloc(sizeof(Node));
    if (top == NULL)
    {
        printf("Stack Underflow\n");
        return;
    }
    else
    {
        temp = top;
        top = top->next;
        free(temp);
    }
}

/*https://opensourcedoc.com/data-structures-in-c/stack-in-list/*/