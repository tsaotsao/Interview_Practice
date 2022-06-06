#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

void finite_loop_1()
{
    int a = 0;
    while (true)
    {
        printf("%d\n", ++a);
    }
}

void finite_loop_2()
{
    for(int a=0; ; ++a)
    {
        printf("%d\n", ++a);
    }
}

void finite_loop_3()
{
    int a = 0;
    Loop:
        printf("%d\n", a++);
        scanf("%d", &a);
    goto Loop;
}

int main(int argc, char const *argv[])
{
    finite_loop_3();
    return 0;
}
