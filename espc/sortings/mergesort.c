#include<stdio.h>
void merge(int *arr,int left,int mid,int right){
    int *ptr=(int*) malloc((right+1)*sizeof(int));
    int i=left;
    int j=mid+1;
    int k=left;
    while(i<=mid&&j<=right){
        if(arr[i]>arr[j]){
            ptr[k]=arr[j];
            ++j;
            ++k;
        }
        else if(arr[i]<=arr[j]){
            ptr[k]=arr[i];
            ++i;
            ++k;
        }
    }
    while(i<=mid||j<=right){
        if(i<=mid){
            ptr[k]=arr[i];
            ++i;
            ++k;
        }
        else if(j<=right){
            ptr[k]=arr[j];
            ++j;
            ++k;
        }
    }
    for(i=left;i<=right;++i){
        arr[i]=ptr[i];
    }
    free(ptr);
    ptr=NULL;
}
void mergesort(int *arr,int left,int right){
    if(left<right){
        int mid=(left+right)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}
void printing(int *arr,int right){
    for(int i=0;i<=right;++i){
        printf("\t%d",arr[i]);
    }
    printf("\n");
}
int main(){
    int n;
    printf("enter the size of the array -: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int left=0;
    int right=n-1;
     printing(arr,right);
    mergesort(arr,left,right);
    printing(arr,right);
    return 0;
}