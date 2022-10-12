#include <stdio.h>

int sum(int n)
{
    if (n != 0)
        return n + sum(n - 1);
    else
        return n;
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("\n");

    printf("the sum is: %d", sum(n));
}