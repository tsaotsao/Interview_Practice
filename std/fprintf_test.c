#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Input a number: ");
    int n;
    if(scanf("%d", &n)==1)
        printf("You input %d\n", n);
    else
        fprintf(stderr, "Invalid input\n");

    return 0;
}
