#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
typedef void (*CALLBACK)(void*);

typedef struct _tagObject
{
    CALLBACK cb; //void (*cb)(void*);
}obj;

void function_A(void *pParam)
{
    char *str = (char *)pParam;
    printf("Here is Function_A\n" );
}

void function_B(void *pParam)
{
    char *str = (char *)pParam;
    printf("Here is Function_B\n");
}

void RegisterCallbackFunction(obj *pObj, CALLBACK cb)
{
    pObj->cb = cb;
    printf("pObj->cb:0x%p\n", pObj->cb);
}

void ObjectCall(obj *pObj)
{
    pObj->cb("Jerry Callback function test ... \n");
}


int main(int argc, char const *argv[])
{
    obj objA, objB;
    RegisterCallbackFunction(&objA, function_A);
    RegisterCallbackFunction(&objB, function_B);
    int a = atoi(argv[1]);
    switch(a)
    {
        case 1:
            ObjectCall(&objA);
            break;
        case 2:
            ObjectCall(&objB);
            break;
        default:
            printf("No this guy");
            break;
    }

    return 0;
int *a = (int*)malloc(sizeof(a));
}