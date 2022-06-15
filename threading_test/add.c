#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

void *child(void *arg)
{
    int *input = (int *)arg;
    int *result= malloc(sizeof(int));
    result[0] = input[0] + input[1];
    pthread_exit((void*) result);
}

int main(int argc, char const *argv[])
{
    pthread_t tid; // thread ID
    void *ret;
    int input[2] = {1, 2};
    pthread_create(&tid, NULL, child, (void*)input);
    pthread_join(tid, &ret);
    int *result = (int *) ret;
    printf("%d + %d = %d\n", input[0], input[1], result[0]);
    free(result);
    return 0;
}
