#include <stdio.h>
#include <stdint.h>

typedef long int U8;

U8 *pPort;
U8 i, j, k;
pPort = 0x800000;
i = *pPort;
j = *pPort;
k = *pPort;

int main(int argc, char const *argv[])
{
    printf("%lld\n%lld\n%lld\n", i,j,k);
    return 0;
}
