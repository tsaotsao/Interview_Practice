#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
_MALLOC_UNDERSCORE_MALLOC_H_
int main(int argc, char const *argv[])
{
    int a = 10;
    char b = 'x';
    void *void_ptr = &a;
    printf("%p\n", void_ptr);
    void_ptr = &b; //
    printf("%p %c\n", void_ptr, *(char*)void_ptr);

    return 0;
}
