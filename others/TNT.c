#include <stdio.h>
#include <stdlib.h>
int TnT(int a, int b)
{
    if(a%b == 0)
    {
        return b;
    }
    else
        return TnT(b, a%b);
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int TnT_while(int a, int b)
{
    if(a<b) swap(&a, &b);
    while(a%b!=0)
    {
        a = a%b;
        swap(&a, &b);
    }
    return b;
}


int main(int argc, char const *argv[])
{
    int a, b; 
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    printf("%d\n", TnT_while(a, b));
    return 0;
}
