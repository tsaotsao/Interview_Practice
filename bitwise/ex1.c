#include <stdio.h>

// let odd place of a being bit 1
static unsigned char a = 0xa; // 0x00001010

int main(int argc, char const *argv[])
{
    a ^= 0xa0; // 0x10101010
    a = ~a;    // 0x01010101
    printf("0x%x\n", a);
    return 0;
}
