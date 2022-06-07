#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define ARRAY_SIZE 4

int main(int argc, char const *argv[])
{
    int a[ARRAY_SIZE] = {1, 2, 3, 4};
    printf("%p\n%p\n%p\n", a, a+(ARRAY_SIZE), (&a)+1);
    int *ptr = &a+1;
    int *ptr2= a;
    printf("%d\n%d\n%d\n", *(ptr2+2), *(ptr-1), *ptr);
    return 0;
}

