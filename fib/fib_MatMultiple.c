#include "fib_MatMultiple.h"

void MatMultiple(int F[2][2], int M[2][2])
{
    int x = F[0][0] * M[0][0] +
            F[0][1] * M[1][0];
    int y = F[0][0] * M[0][1] +
            F[0][1] * M[1][1];
    int z = F[1][0] * M[0][0] +
            F[1][1] * M[1][0];
    int w = F[1][0] * M[0][1] +
            F[1][1] * M[1][1];        
    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

void power(int F[2][2], int n)
{
    int M[2][2] = {{1, 1}, {1, 0}};
    for(int i = 2; i<n; i++)
    {
        MatMultiple(F, M);
    }    
}