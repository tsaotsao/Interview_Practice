#include <stdio.h>

void TestFunction(int i, int nEnd)
{
    /*
        do not write code like:
        static int x; x=0;

        while call TestFunction n times,
        x init n times in zero.
    */
    static int x = 0; // only initail once

    printf("init x = %d\n", x);
    int y = 0;
    x++;
    y++;
    if (i == (nEnd - 1))
    {
        printf("x=%d\n", x);
        printf("y=%d\n", y);
    }
}

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5; i++)
        TestFunction(i, 5);
    return 0;
}
