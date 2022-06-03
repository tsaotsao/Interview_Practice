## void pointer 

A void pointer is a pointer that has no associated data type with it. A void pointer can hold address of any type and can be typecasted to any type



```c
int a = 10;
char b = 'x';
void *void_ptr = &a;
void_ptr = &b; //void_ptr now holds address of b
```

malloc and calloc return (void*) type and this allows these function to be used to allocate memory of any data type(just because of void *)

```c

int main(void)
{
    // Note that malloc() returns void * which can be 
    // typecasted to any type like int *, char *, ..
    int *x = malloc(sizeof(int) * n);
}
```

 ### ***void pointers cannot be dereferenced.*** 
 For example the following program doesn’t compile.

```c
#include <stdio.h>
int main()
{
    int a = 10;
    void *void_ptr = &a;
    printf("%d\n", *void_ptr);
}
```
```
Compiler Error: 'void*' is not a pointer-to-object type 
```







