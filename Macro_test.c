#include <stdio.h>
#include <stdint.h>

/* Write a macro that returns the smaller one */
/* 1. MIN(A, B) */
#define MIN(A, B) ((A)<=(B)?(A):(B))

void MIN_()
{
    int a = 3;
    int b = 5;
    int *ptr = &a;
    int least = MIN(*ptr++, b); 
    /* when Argument(A and B) of macro substitute by *ptr++, 
       ptr do twice ++ in one macro */
    printf("least = %d\n", least);  // undefined behavior
}
#undef MIN 



/* Write a easy macro that times twice number*/
/* 2. r*r */
#define S(r) r*r      // #define S(r) (r)*(r)  ---->please do this
void S_()
{
    int a = 3;
    int S = S(3+3); // 3+3*3+3, which expect is (3+3)*(3+3)
    printf("S = %d\n", S);
}
#undef S//S(r)



/* 3.  */
#define ABCD 2
void ABCD_()
{
    #ifdef ABCD
        printf("1 : yes\n");
    #else
        printf("1 : no\n");
    #endif

    #ifndef ABCD
        printf("2 : no");
    #elif ABCD==2
        printf("2: yes\n");
    #endif
    
    #if !defined(DCBA) && (ABCD < 2*4-3)
        printf("3 : yes\n");
    #endif
    
    #ifndef ABCD
    #error "Integer size cannot hold our age in milliseconds"
    #endif
}



int main(int argc, char const *argv[])
{
    ABCD_();
    return 0;
}

