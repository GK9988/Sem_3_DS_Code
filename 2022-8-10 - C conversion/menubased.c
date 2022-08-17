#include <stdio.h>
#include <stdlib.h>

void arrayScanner(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void arrayPrinter(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
}

void arrayInsertion(int *arr, int *length, int value, int position)
{
    for (int i = *length; i >= position; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[position] = value;
    (*length)++;
}

int main()
{
    int size;
    int length;
    int *arr;
    printf("Enter the size of the arra: ");
    scanf("%d", &size);
    printf("\n");
    arr = (int *)malloc(size * sizeof(int));
    int choice = 0;

    int newValue;
    int position;

    printf("\n");
    printf("\nEnter the no. of elements you want to add initially: ");
    scanf("%d", &length);
    printf("\n");

    printf("Enter the values of the array: \n\n");
    arrayScanner(arr, length);

    while (choice != 3)
    {
        printf("\n\n");

        printf("****** Array Menu ******\n");
        printf("1. Display Array\n");
        printf("2. Insert an Element in the Array\n");
        printf("3. Exit\n");

        printf("\nEnter your Choice Number: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice)
        {
        case 1:

            printf("\n");
            printf("Array Is: ");
            arrayPrinter(arr, length);
            printf("\n");
            break;
        case 2:

            printf("\nEnter the position you want to insert in: ");
            scanf("%d", &position);

            printf("\nEnter the value you want to insert: ");
            scanf("%d", &newValue);
            printf("\n");

            arrayInsertion(arr, &length, newValue, position - 1);
            printf("Successfully Inserted\n");
            break;
        }
    }
}