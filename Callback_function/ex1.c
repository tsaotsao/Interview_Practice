#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float cb_square(int num)
{
    return num*num;
}

float cb_cube(int num)
{
    return num*num*num;
}

float cb_sqrt(int num)
{
    return sqrt(num);
}

typedef float (*op_t)(int);

//float calc(int num, float (*op)(int))  //ma si can
float calc(int num, op_t op)
{
    return op(num);
}

int main(int argc, char const *argv[])
{    
    printf("square:\t%.2f\n", calc(5, cb_square));
    printf("cube:\t%.2f\n", calc(5, cb_cube));
    printf("sqrt:\t%.2f\n", calc(5, cb_sqrt));
    int *a = malloc(sizeof(int));
    printf("%p\n%p\n", &cb_sqrt, &a);
    return 0;
}
