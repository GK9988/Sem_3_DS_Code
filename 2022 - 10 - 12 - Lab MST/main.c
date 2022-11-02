#include <stdio.h>
#include <stdlib.h>

void arrPrinter(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void arrScanner(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void selectionSort(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void merge(int *arr, int l, int mid, int r)
{
    int i = l;
    int j = mid + 1;
    int k = l;

    int *newArr = (int *)malloc(sizeof(int) * (r + l));

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

    int n;
    printf("Enter the Size of array: ");
    scanf("%d", &n);
    printf("\n");

    arr = (int *)malloc(n * sizeof(int));

    int choice = -1;

    while (choice)
    {
        printf("\n");
        printf("\n");
        printf("****** Array Menu ******");
        printf("\n\t1. Enter Array Values");
        printf("\n\t2. Print Array");
        printf("\n\t3. Selection Sort");
        printf("\n\t4. Merge Sort");
        printf("\n\t5. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice)
        {
        case 1:
            arrScanner(arr, n);
            printf("\nValues entered Successfully\n");
            break;
        case 2:
            printf("Array: ");
            arrPrinter(arr, n);
            break;
        case 3:
            selectionSort(arr, n);
            printf("\nArray Successfully Sorted\n");
            break;
        case 4:
            mergeSort(arr, 0, n - 1);
            printf("\nArray Successfully Sorted\n");
            break;
        case 5:
            choice = 0;
            break;
        default:
            printf("Enter Valid Choice");
            break;
        }
    }
}