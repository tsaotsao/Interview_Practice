#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 25;
    int b = 30;
    int ques1 = a++ + b++;
    int ques2 = ++a + ++b;
    printf("%d, %d", ques1, ques2);

    return 0;
}
