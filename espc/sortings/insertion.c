#include<stdio.h>
int main()
{
    int n,j,key;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
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
    printf("sorted array is\n");
     for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}