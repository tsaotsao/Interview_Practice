#include <stdio.h>
#include <stdint.h>

static const u_int8_t a = 0x31; // 0x0011 0001
static const u_int8_t b = 0x35; // 0x0011 0101
/* 
    1. set the 3rd bit 1 -> 0
                       0 -> 1
    2. set the 3rd bit always 1
    3. set the 3rd bit always 0
*/

int main(int argc, char const *argv[])
{
    // 1
    u_int8_t ans1 = a^(0x04);
    u_int8_t ans2 = b^(0x04);
    // 2
    u_int8_t ans3 = a | 0x04;
    u_int8_t ans4 = b | (1<<2);

    // 3
    u_int8_t ans5 = a & 0xfb;
    u_int8_t ans6 = b & ~(1<<2);
    
    printf("%d %d", ans6, ans5);
    return 0;
}
