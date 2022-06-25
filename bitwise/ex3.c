#include <stdio.h>
#include <stdint.h>

int setbit(int rawBit, uint8_t theBitSetOne)
{
    return rawBit|(1<<theBitSetOne);
}

int main(int argc, char const *argv[])
{
    printf("%d\n",setbit(0, 23));
    return 0;
}
