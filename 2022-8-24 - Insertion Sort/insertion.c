#include <stdio.h>

void insertion(int *arr, int size)
{
    int i, j, key;

    for (int i = 1; i < size; i++)
    {
        j = i - 1;
        key = arr[i];

        while ((j >= 0) && (key < arr[j]))
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[10] = {5, 6, 9, 2, 0, 3, 7, 4, 1, 8};

    printf("Original Array: ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    insertion(arr, 10);

    printf("Sorted Array: ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}