#include <stdio.h>
#include <stdbool.h>

// check if num is 2's power (uses one line)
bool TwosPower(int num)
{

    return (num != 0) && !(num & (num - 1));
}

int main(int argc, char const *argv[])
{
    printf("%d\n", TwosPower(1));
    return 0;
}
