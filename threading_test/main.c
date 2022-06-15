#include <pthread.h>
#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <unistd.h>
#define NUM_THREADS 5

void *PrintHello(void *threadid)
{
    long *data = (long*)threadid;
    printf("Hello World! It's me, thread #%ld!\n", *data);
    pthread_exit(NULL);
}

void *PrintHello2(void *threadid)
{
    long *data = (long*)threadid;
    printf("---!World Hello It's me, thread #%ld!\n", *data);
    pthread_exit(NULL);
}


int main(int argc, char const *argv[])
{
    pthread_t threads[NUM_THREADS];
    for(long tid=0; tid<NUM_THREADS; tid++)
    {
        pthread_create(&threads[tid], NULL, PrintHello, (void*)&tid);
        pthread_create(&threads[tid], NULL, PrintHello2, (void*)&tid);
        
    }
    printf("WOW\n");
    /* Last thing that main() should do */
    pthread_exit(NULL); 
    return 0;
}
