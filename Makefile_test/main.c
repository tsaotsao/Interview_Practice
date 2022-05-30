#include <stdio.h>
#include <stdlib.h>
#include "add.h"

int main(int argc, char const *argv[])
{
    int _argv = atoi(argv[1]);
    int _argv2= atoi(argv[2]);
    int a = add_func(_argv, _argv2 );
    printf("a = %d\n", a);
    return 0;
}
