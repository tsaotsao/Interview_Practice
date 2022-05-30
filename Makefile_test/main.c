#include <stdio.h>
#include "add.h"

int main(int argc, char const *argv[])
{
    int a = add_func(1, 10);
    printf("a = %d\n", a);
    return 0;
}
