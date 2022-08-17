#include <stdio.h>
#include <stdlib.h>

void arrayScanner(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void arrayPrinter(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
}

void arrayRemove(int *arr, int position, int *length)
{
    for (int i = position; i < *length; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*length)--;
}

int main()
{
    int size;
    int length;
    int *arr;
    printf("Enter the size of the arra: ");
    scanf("%d", &size);
    printf("\n");
    arr = (int *)malloc(size * sizeof(int));

    int position;

    printf("\n");
    printf("\nEnter the no. of elements you want to add initially: ");
    scanf("%d", &length);
    printf("\n");

    printf("Enter the values of the array: \n\n");
    arrayScanner(arr, length);

    printf("Array is: \n");
    arrayPrinter(arr, length);

    printf("\nEnter the postion of the element you want to remove: ");
    scanf("%d", &position);

    arrayRemove(arr, position - 1, &length);

    printf("\n\nNew Array: ");
    arrayPrinter(arr, length);
}