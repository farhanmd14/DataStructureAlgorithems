#include <stdio.h>
int main()
{
    int i = 0;
    int array[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    printf("Array:");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    int x, pos;
    printf("\nEnter the element you want to insert:");
    scanf("%d", &x);
    printf("\nEnter the index position:");
    scanf("%d", &pos);

    for (i = 10 - 1; i >= pos - 1; i--)
        array[i + 1] = array[i];
    array[pos - 1] = x;
    printf("New Array:");
    for (i = 0; i <= 10; i++)
        printf("%d ", array[i]);

    return 0;
}
