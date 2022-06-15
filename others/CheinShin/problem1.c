#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// 1. Write a function that takes an unsigned integer and return the number of '1' bits it has

int CountOnes(long num)
{
    int count = 0;
    while (num != 0)
    {
        num = num & (num - 1);
        count++;
    }
    return count;
}

// 2. Count the number of prime numbers less than a non-negative number, n.
/* Solve via T/F table:

    Assume that input arg = 30, then nums:
    nums  --> [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
               0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
               0, 0, 0, 0, 0, 0, 0, 0, 0, 0] 1x30

    zero in table denote that the place of index is prime number, use for loop assign 1/true
    in table to show that the number is not prime.

for 1:      2  -->  2*2  -->  2*2+2  --> ... --> 2*2 + 2*n
            nums  --> [0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 
                       1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 
                       1, 0, 1, 0, 1, 0, 1, 0, 1, 0] 1x30

for 2:      3  -->  3*3  -->  3*3+3  -->  ... --> 3*3 + 3*n 
            nums  --> [0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 
                       1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 
                       1, 1, 1, 0, 1, 0, 1, 1, 1, 0] 1x30

                    ...and so on

finally:    
            nums  --> [0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 
                       1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 
                       1, 1, 1, 0, 1, 1, 1, 1, 1, 0] 1x30
    count the number of 0 in table.(basically count from index 2) and return.

*/
int CountPrime(int num)
{
    int count = 0, i;
    bool *nums = (bool *)calloc(num, sizeof(bool));
    for (i = 2; i * i <= num; i++)
    {
        if (!nums[i])
        {
            for (int j = i * i; j < num; j += i)
            {
                nums[j] = true;
            }
        }
    }
    for (i = 2; i < num; i++)
    {
        if (!nums[i])
            count++;
    }
    free(nums);
    return count;
}

// 3. unsigned char a = 5, b = 9 c; answer the value of c if 
/*
    c = a&b 
    c = a|b 
    c = a^b 
    c = ~a
    c = b<<1
    c = b>>1

    a --> 0x00000101
    b --> 0x00001001

    a&b = 0x00000001
    a|b = 0x00001101
    a^b = 0x00001100 (XOR)
    ~a  = 0x11111010
    b<<1= 0x00010010
    b>>1= 0x00000100
*/
 

