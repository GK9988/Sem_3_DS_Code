#include <stdio.h>
#include <stdlib.h>

void arrayScanner(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void arrayPrinter(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n;
    int *arr;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("\n");
    arr = (int *)malloc(n * sizeof(int));

    printf("Enter the values of the Array\n\n");

    arrayScanner(arr, n);

    printf("Array is: ");
    arrayPrinter(arr, n);
}