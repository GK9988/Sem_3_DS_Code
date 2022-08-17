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

void arrayInsertion(int *arr, int *length, int value, int position)
{
    for (int i = *length; i >= position; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[position] = value;
    (*length)++;
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

    int newValue;
    int position;

    printf("\n");
    printf("\nEnter the no. of elements you want to add initially: ");
    scanf("%d", &length);
    printf("\n");

    printf("Enter the values of the array: \n\n");
    arrayScanner(arr, length);

    printf("Array is: ");
    arrayPrinter(arr, length);

    printf("\n");
    printf("Enter the position you want to insert in: ");
    scanf("%d", &position);

    printf("\n");
    printf("\nEnter the value you want to insert: ");
    scanf("%d", &newValue);
    printf("\n");

    arrayInsertion(arr, &length, newValue, position - 1);

    printf("\nNew Array is: \n");
    arrayPrinter(arr, length);
}