#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a =*b;
    *b = tmp;
}

int main(int argc, char const *argv[])
{
    int a = 3;
    int b = 5;
    swap(&a, &b);
    printf("%d %d\n", a, b);
    char s = getchar();
    printf("%c", s);
    return 0;
}
