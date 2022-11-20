#include<stdio.h>
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
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i + 1],&arr[r]);
    return i + 1;
}

void Sort(int *arr, int p, int r)
{
    if (p < r)
    {
        int q = partition(arr, p, r);
        Sort(arr, p, q - 1);
        Sort(arr, q + 1, r);
    }
}

int main()
{
    int n;
    printf("size of the arrray-: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    Sort(arr, 0, n);
    printf("Sorted Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }
}