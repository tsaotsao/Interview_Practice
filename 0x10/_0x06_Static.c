#include <stdio.h>

void foo(const char **p)
{
    ;
}
int main(int argc, char const *argv[])
{
    const char *p = "hello";
    foo(&p);
    return 0;
}
