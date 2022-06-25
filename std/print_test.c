#include <stdio.h>

extern void myprint(const char *format, ...) __attribute__((format(printf,1,2)));

void test()
{
    myprint("i=%d\n", 6);
    myprint("i=%s\n", 6);
    myprint("i=%s\n", "abc");
    myprint("%s, %d, %d\n", 1, 2);
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}
fprintf()