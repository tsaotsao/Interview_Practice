#include <stdio.h>
#include <stdint.h>
#define SEC_PER_YEAR 365*24*60*60UL


int main(int argc, char const *argv[])
{
//  uint16_t SPYuint16 = SEC_PER_YEAR;  ---> overflow
//                       SEC_PER_YEAR   ==   3156000 
    uint16_t SPYuint16 = SEC_PER_YEAR;
    int SPYuint32 = SEC_PER_YEAR;
    uint64_t SPYuint64 = SEC_PER_YEAR;
    printf("%d %lu\n", SPYuint32, SPYuint64);
    
    return 0;
}

/*
integer-literal:  
    decimal-literal integer-suffixopt  
    octal-literal integer-suffixopt  
    hexadecimal-literal integer-suffixopt  

decimal-literal:  
    nonzero-digit  
    decimal-literal digit

octal-literal:  
    0                           
    octal-literal octal-digit

hexadecimal-constant：
    hexadecimal-prefixhexadecimal-digit
    hexadecimal-constanthexadecimal-digit

hexadecimal-prefix：下列其中一個
    0x0X

nonzero-digit：下列其中一個
    1 2 3 4 5 6 7 8 9

octal-digit：下列其中一個
    0 1 2 3 4 5 6 7

hexadecimal-digit：下列其中一個
    0 1 2 3 4 5 6 7 8 9
    a b c d e f
    A B C D E F

integer-suffix：
    unsigned-suffixlong-suffixopt
    unsigned-suffixlong-long-suffix
    unsigned-suffix64-bit-integer-suffix
    long-suffixunsigned-suffixopt
    long-long-suffixunsigned-suffixopt
    64-bit-integer-suffix

unsigned-suffix：下列其中一個
    u U

long-suffix：下列其中一個
    l L

long-long-suffix：下列其中一個
    ll LL

64-bit-integer-suffix：下列其中一個
    i64 I64
*/
