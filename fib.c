#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "fib_MatMultiple.h"
/**
 * @brief fibonacci sequence recursive method O(n)
 *        
 * @param n -- index of the sequence
 * @return int 
 */
int fib_rec(int n)
{
    if(n==0 | n==1) return n;
    else return (fib_rec(n-1)+fib_rec(n-2));

}
/**
 * @brief dynamic programming method
 *        use MEMO to record the sequence 
 * 
 * @param n 
 * @return uint64_t 
 */

uint64_t fib_DP(uint16_t n)
{
    uint64_t memo[n+2];
    int i;
    memo[0] = 0;
    memo[1] = 1;
    for(i = 2; i <=n; i++)
    {
        memo[i] = memo[i-1] + memo[i-2];
    }
    return memo[n]; // return with uint64_t, test for big number
}

/**
 * @brief Space Optimized method 
 *           -- which means it saves space
 * 
 * @param n 
 * @return int 
 */
int fib_SpaceOptimized(int n)
{
    int a = 0, b = 1, c, i;
    if(n==0)
        return a;
    for(i=2; i<=n; i++)
    {
        c = a+b;
        a = b;
        b = c; 
    }
    return b;
}

int fib_MatrixSol(int n)
{
    if(n == 0 | n == 1) return n;
    int fibMatrix[2][2] = {{1, 1}, {1, 0}};
    power(fibMatrix, n);
    return fibMatrix[0][0];
}


int main(int argc, char **argv)
{
    uint64_t ans = fib_MatrixSol(atoi(argv[1]));
    printf("%llu\n", ans);
    return 0;
}
