#include <stdio.h>
#define n 6
int array[n];
int f = -1, r = -1;
int forFull()
{
    if ((f == r + 1) || (f == 0 && r == n - 1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int forEmpty()
{
    if (f == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enQueue(int value)
{
    if (forFull())
    {
        printf("\nOverflow! \n");
    }
    else
    {
        if (f == -1)
        {
            f = 0;
        }
        r = (r + 1) % n;
        array[r] = value;
        printf("\n%d was added to circular queue the value of queue ", value);
    }
}
void deQueue()
{
    int variable;
    if (forEmpty())
    {
        printf("\nUnderflow! \n");
        
    }
    else
    {
        variable = array[f];
        if (f == r)
        {
            f = -1;
            r = -1;
        }

        else
        {
            f = (f + 1) % n;
        }
        printf("\n%d was removed from the queue the value of queue ", variable);
    }
}

void display()
{
    int i;
    if (forEmpty())
        printf(" \nUnderflow!\n");
    else
    {
        for (i = f; i != r; i =(i + 1) % n)
        {
            printf("%d ", array[i]);
            printf("%d\n",i);
        }
    }
}

int main()
{
    deQueue();
    enQueue(8);
    enQueue(6);
    enQueue(0);
    enQueue(4);
    enQueue(5);
    enQueue(10);
    enQueue(70);
    display();
    deQueue();
    display();
    enQueue(17);
    display();
    enQueue(19);
    return 0;
}