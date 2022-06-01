#ifndef _NODE_H_
#define _NODE_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ListNode ListNode;
ListNode *CreateList();  // head of list(val) is a trash 
int ListIndexGet(ListNode*, int);
void ListAddHead(ListNode*, int);
void ListAddTail(ListNode*, int);
void ListAddIndex(ListNode*, int, int);
void ListFree(ListNode*);
void ListPrint(ListNode*);

#ifdef __cplusplus
}
#endif
#endif // _NODE_H_
