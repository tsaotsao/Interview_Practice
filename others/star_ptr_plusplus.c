#include <stdio.h>
#define MIN(A,B) ((A)<=(B) ? (A):(B))

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;
    int *ptrA = &a;
    printf("%d\n", MIN(*ptrA++, b));   
    // *ptrA++ = *(ptr++), pointer point to next address
    return 0;
}
