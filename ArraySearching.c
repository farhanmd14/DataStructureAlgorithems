//Array Search

#include <stdio.h>
#include <stdlib.h>
#define N 5

int main()
{
    int a[N], s, i, temp = 0;
    printf("Array Element: ");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter Your Number To be searched: ");
    scanf("%d", &s);
    for (i = 0; i < N; i++)
    {
        if (a[i] == s)
        {
            printf("Data Found");
            temp = 1;
            break;
        }
    }
    if (temp == 0)
    {
        printf("Data Not Found");
    }
    return 0;
}