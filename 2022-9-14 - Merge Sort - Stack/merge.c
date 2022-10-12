#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

void merge(int *arr, int l, int mid, int r)
{
    int i = l;
    int j = mid + 1;
    int k = l;

    int *newArr = (int *)malloc(sizeof(int) * (r + l));
    // int newArr[100];

    while (i <= mid && j <= r)
    {
        if (arr[i] < arr[j])
            newArr[k++] = arr[i++];
        else
            newArr[k++] = arr[j++];
    }

    for (; i <= mid; i++)
    {
        newArr[k++] = arr[i];
    }
    for (; j <= r; j++)
    {
        newArr[k++] = arr[j];
    }

    for (i = l; i <= r; i++)
    {
        arr[i] = newArr[i];
    }
}

void mergeSort(int *arr, int l, int r)
{
    int mid;

    if (l < r)
    {
        mid = (l + r) / 2;

        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
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

    mergeSort(arr, 0, size - 1);

    printf("Sorted Array: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}