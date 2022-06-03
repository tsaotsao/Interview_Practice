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

 ### **void pointers cannot be dereferenced.**
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
C standard dosen't allow pointer arithmetic with pointers. However in GNU C is allowed by considering the size of void -> 1 
```c
printf("%lu", sizeof(void)); // 1
```

Also, in GNU C can operate **void\*** like following:
```c
int main()
{
    int array[2] = {1, 2};
    void *ptr = &a;
    ptr = ptr + sizeof(int);
    printf("%d", *(int*)ptr); // 2 (which assigned in array[1])
}
```


**Reference: https://www.geeksforgeeks.org/void-pointer-c-cpp/**