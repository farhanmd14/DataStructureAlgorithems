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

/* //Array Add Element
#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int indInsertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= size; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index = 3;
    display(arr, size);
    indInsertion(arr, size, element, 100, index);
    size +=1;
    display(arr,size);

    return 0;
}*/