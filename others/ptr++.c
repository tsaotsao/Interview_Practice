#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[] = {1,2,3,4,5};
    
    int *ptr = a;
    *(ptr++) += 123;
    *(++ptr) += 123;

    // a = {124, 2, 126, 4, 5}
    return 0;
}
