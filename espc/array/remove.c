#include <stdio.h>
int main()
{
    int choice,n;
    printf("enter the number of the element in the array-: ");
    scanf("%d",&n); 
    int arr[20];
    printf("enter the element of arry\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Press 1 to display the array.\n");
    printf("press 2 to remove an element from the array.\n");
    printf("Enter your choice:\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        printf("Your array is: \n");
        for (int i = 0; i <= n; i++)
        {
            printf("%d ", arr[i]);
        }
        break;
    }
    case 2:
    {
        int pos;
        printf("Enter the position to remove:\n");
        scanf("%d", &pos);
        for (int i = pos - 1; i < 9; i++)
        {
            arr[i] = arr[i + 1];
        }
        printf("The updated array is: \n");
        for (int i = 0; i < n-1; i++)
        {
            printf(" %d ", arr[i]);
        }
        break;
    }
    }
    return 0;
}
