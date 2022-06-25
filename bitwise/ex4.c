#include <stdio.h>
#include <stdlib.h>

// write a swap function that without temporary var

void swap(int *a, int *b)
{
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;
}

void swap2(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b; 
    *a = *a - *b;
}

int main(int argc, char const *argv[])
{
    int a = 2;
    int b = 3;
    swap2(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}

