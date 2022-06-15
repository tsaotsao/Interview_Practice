#include <stdio.h>

int main(int argc, char const *argv[])
{
    static int x = 1;
    x ++;
    static int x = 1;
    printf("%d", x);    
    return 0;
}
