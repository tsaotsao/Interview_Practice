#include <stdio.h>

int fun(int x)
{
    int count = 0;
    while(x)
    {
        count++;
        x=x&(x-1);
    }
    return count;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
