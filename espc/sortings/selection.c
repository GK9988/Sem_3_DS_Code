#include<stdio.h>

int main()
{
    int n;
    int min=0;
    printf("enter the size of the element: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("sorted arry is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}