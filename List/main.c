#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "Node.h"


int main(int argc, char const *argv[])
{
    ListNode *List = CreateList();
    
    ListAddHead(List, 2);
    ListAddHead(List, 3);
    ListAddHead(List, 4);
    ListAddTail(List, 5);
    //ListAddIndex(List, 123, 33);
    ListFree(List);
    ListPrint(List);
    return 0;
}
