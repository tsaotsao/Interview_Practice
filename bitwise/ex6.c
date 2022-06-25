#include <stdio.h>

unsigned long v1 = 0x00001111;
// 0000 0000 0000 0000 0001 0001 0001 0001
unsigned long v2 = 0x00001202;
// 0000 0000 0000 0000 0001 0010 0000 0010
unsigned long v;
v = v1 & (~v2);
v = v | v2;

int main(int argc, char const *argv[])
{
    return 0;
}
