#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b; 
    *b = tmp;
}

void BubbleSort(int Array[], int ArraySize)
{
    for (int i = 0; i < ArraySize-1; i++)
    {
        for(int j = 0 ; j<ArraySize-i-1 ; j++)
        {
            if(Array[j]>Array[j+1])
            {
                swap(Array+j, Array+j+1);                
            }             
        }
    }
}

int main(int argc, char const *argv[])
{
    int a[] = {1, 3, 4, 6, 5, 3,2 ,32,1};
    int len = sizeof(a) / sizeof(a[0]);
    BubbleSort(a, len);
    for (size_t i = 0; i < len; i++)
    {
        printf("%d\n", a[i]);
    }
    
    
    
    return 0;
}
