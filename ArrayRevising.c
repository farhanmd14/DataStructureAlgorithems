//Array Revirsing

#include <stdio.h>
#include <stdlib.h>

#define N 10

int main()
{
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("This is an Orignal Array : ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nThis is an Reverse Array : ");
    for (int j = N - 1; j >= 0; j--)
    {
        printf("%d ", a[j]);
    }
}