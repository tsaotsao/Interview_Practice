#include <stdio.h>

// Q: what's the output
int fun(int x)
{
    int count = 0;
    while(x)
    {
        count++;
        x=x&(x-1);
    }
    return count;
}//count 1 in argument passing in

int main(int argc, char const *argv[])
{
    printf("%d\n", fun(456)+fun(456)+fun(112));
    return 0;
}
