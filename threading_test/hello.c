#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <pthread.h>
#include <unistd.h>

void *child(void *data)
{
    char *str = (char *)data;
    for(int i = 0; i < 2; i++)
    {
        printf("%s\n", str);
        sleep(2);
    }
    int *number = (int*)malloc(sizeof(int));
    *number = 99;
    pthread_exit((void*)number);
}

int main(int argc, char const *argv[])
{
    pthread_t tid;
    void *number;
    pthread_create(&tid, NULL, child, "Child");
    pthread_join(tid, &number);
    int *number2 = (int*)number;
    printf("%d\n", *number2);
    free(number2);
    return 0;
}