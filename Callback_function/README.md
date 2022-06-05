# ex2.c

Use typedef for **function pointer** declaration
```c
typedef void (*CALLBACK)(void*);
```
So here, **CALLBACK** is a pointer to a function whose argument is void*, returns nothing. Declare a function pointer **cb** in **struct _tagObject** 
```c
typedef struct _tagObject
{
    CALLBACK cb;
}obj;
```
It is equivalent to:
```c
typedef struct _tagObject
{
    void (*cb)(void*);
}obj;
```

## **Registing Callback Function**
Let input argument of **function_A & function_B** being **void**
```c
void function_A(void *pParam)
void function_B(void *pParam)
```
So that we could calling a function with assign different type of parameters.

