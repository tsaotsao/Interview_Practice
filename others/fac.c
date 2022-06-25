#include <stdio.h>
#include <stdlib.h>

/* 1+2+3+...+n */
int fac(int a)
{
    if (a == 1)
        return 1;
    else
        return a + fac(a - 1);
}

/* 1-2+3-4...+(-)n */

int fac2(int a)
{
    int sign = 1;
    if (a == 1)
        return 1;
    if (a % 2 == 0)
        sign = -1;
    return sign * a + fac(a - 1);
}
int main(int argc, char const *argv[])
{
    int arg = atoi(argv[1]);
    printf("%d\n", fac(arg));
    return 0;
}
