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
    int n1;
    int n,key,j;
    printf("size of the arrray-: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("which sorting do you want to use \n 1. Quick Sort \n 2. Insertion Sort");
    scanf("%d",&n1);
    switch (n1)
    {
    case 1:
    Sort(arr, 0, n);
    printf("Sorted Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }
        break;
    case 2: 
    for(int i=0;i<n;i++)
    {
        j=i-1;
        key=arr[i];
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;

        }
        arr[j+1]=key;

    }
     printf("Sorted Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }
    default:
        break;
    }
}