#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
typedef struct ListNode
{
    int val;
    struct ListNode *next;
}ListNode;

ListNode *CreateNode(int val)
{
    ListNode *ret = (ListNode*)malloc(sizeof(ListNode));
    ret->val  = val;
    ret->next = NULL;
    return ret;
}

ListNode *CreateList() {
    ListNode *head = (ListNode*)malloc(sizeof(ListNode));
    head->val = -1;
    head->next = NULL;
    return head;
}

int ListLength(ListNode *head)
{
    int ret = 0;
    while(head!=NULL)
    {
        head = head->next;
        ret++;
    }
    return ret;
}

int ListIndexGet(ListNode *head, int index)
{
    int count = 0;
    while(head)
    {
        if(count == index)
            return head->val;
        else
        {
            head = head->next;
            count++;
        }
    }
    return -1;
}

void ListAddHead(ListNode *head, int val)
{
    ListNode *dummy = CreateNode(val);
    dummy->next = head->next;
    head->next = dummy;
}

void ListAddTail(ListNode *head, int val)
{
    ListNode *tmp = CreateNode(val);
    ListNode *tmp2= head;
    while(tmp2->next!= NULL)
    {
        tmp2 = tmp2->next;
    }
    tmp2->next = tmp;
}

/* return of ListLength includes "trash" head */
void ListAddIndex(ListNode *head, int val, int index)
{
    if(index > ListLength(head)) 
    {
        printf("%s\n", "error: (ListAddIndex)index exceeds length of List");
        return ;
    }
    ListNode *dummy = CreateNode(val);
    int tmp_index = 1;
    while(tmp_index!=index)
    {
        head = head->next;
        tmp_index++;
    }
    dummy->next = head->next;
    head->next = dummy;
}
void ListFree(ListNode *head)
{
    if(!head) return;
    while(head->next)
    {
        ListNode *tmp = head->next;
        head->next = head->next->next;
        free(tmp);
    }
}

void ListPrint(ListNode *head)
{
    ListNode *tmp = head;
    int index = 0;
    while(tmp)
    {
        printf("%d: %d\n",index, tmp->val);
        tmp = tmp->next;
        index++;
    }
}
