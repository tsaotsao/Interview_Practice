#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>


void foo(const char **pp)
{
    // *pp = NULL;
    // *pp = "Hello world!";
    *pp = (char *)malloc(10);
    snprintf(*pp, 10, "hi google!"); // alerts warning, but still compilable
    // (*pp)[1] = 'x';
}
int main()
{
    const char *p = "hello";
    printf("before foo %s\n", p);
    foo(&p);
    printf("after foo %s\n", p);
    // p[1] = 'x';
    return 0;
}

// ref : https://www.runoob.com/w3cnote/const-char.html