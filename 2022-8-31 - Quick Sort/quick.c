#include <stdio.h>

void swap(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *arr, int p, int r)
{

    int x = arr[r];
    int i = p - 1;

    for (int j = p; j < r; j++)
    {
        if (arr[j] <= x)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[r]);
    return i + 1;
}

void quickSort(int *arr, int p, int r)
{

    if (p < r)
    {
        int q = partition(arr, p, r);
        quickSort(arr, p, q - 1);
        quickSort(arr, q + 1, r);
    }
}

int main()
{
    int *arr;
    int size;

    printf("Enter the no. of elements you want to enter: ");
    scanf("%d", &size);
    printf("\n");

    arr = (int *)malloc(size * sizeof(int));

    printf("\nEnter the values of the Array: \n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", arr + i);
    }

    printf("Original Array: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    quickSort(arr, 0, size - 1);

    printf("Sorted Array: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}