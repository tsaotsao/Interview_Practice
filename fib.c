#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/**
 * @brief fibonacci sequence recursive method  O(n)
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
 * @brief dynamic programming method:
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



int main(int argc, char **argv)
{
    uint64_t ans = fib_DP(atoi(argv[1]));
    printf("%llu\n", ans);
    return 0;
}
