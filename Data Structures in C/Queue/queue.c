// A Queue is a linear structure which follows
// a particular order in which the operations are performed. The order is First In First Out (FIFO)
// The operations of a queue contains enqueue(), deQueue(), peek(), isFull(), isEmpty().
// The data type of the queue is based on the user which type of value did he want ti insert
// in the queue.

// Here is the queue data structure written by me in C language.
// I did my best to make all the operations of queue must be available in this code.
// The operations contains ---
// EnQueue:
// Adding an element at the last of the array (Queue).

// DeQueue:
// Removing an element from the last of the array (Queue).

// Peek:
// It prints the whole queue
// Here I am creating a 1D queue only.



// There is no need to create and advanced version for Queue because the operation would be same
// for Queue as for StackAdvanced. So, I don't feel like creating it. 
#include <stdio.h>
#define max 100
int top = -1;

int isEmpty(int Queue[])
{
    if (top == -1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int isFull(int Queue[])
{
    if (top == 100)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void EnQueue(int Queue[])
{
    if (isFull(Queue))
    {
        top += 1;
        int element;
        printf("\nEnter the element: ");
        scanf("%d", &element);
        Queue[top] = element;
    }
}

void DeQueue(int Queue[])
{
    if (!isEmpty(Queue))
    {
        printf("Queue has underflow.\n");
    }
    else
    {
        for (int i = 0; i < top; i++)
        {
            Queue[i] = Queue[i + 1];
        }

        top -= 1;
    }
}

void PeekInQueue(int Queue[])
{
    if (isEmpty(Queue))
    {
        if (top > 0)
        {
            printf("The Top and First Element in the Queue are: \n");
            printf(" %d %d ", Queue[0], Queue[top]);
        }
        else
        {
            printf("The Element in the Queue are: \n");
            printf(" %d ", Queue[0]);
        }
    }
    else
    {
        printf("\nQueue is currently empty.\n");
    }
}

void ReadInQueue(int Queue[])
{
    if (isEmpty(Queue))
    {
        int i;
        printf("The elements in the Queue with Indexes are: \n\n");
        printf("Element -- ");
        for (i = 0; i <= top; i++)
        {
            printf(" %d\t", Queue[i]);
        }

        printf("\nIndexes -- ");
        for (i = 0; i <= top; i++)
        {
            printf(" %d\t", i + 1);
        }
        printf("\n");
    }
    else
    {
        printf("\nQueue is currently empty.\n");
    }
}

int main()
{
    // Queue is basically an array which contains some special operations
    // The maximum number of values that a Queue can contain is 100.
    int Queue[max];
    int choice, x;

    while (choice != 7)
    {
        printf("\n\n1-EnQueue\n2-DeQueue\n3-Peek\n4-Read\n5-Is-Full\n6-Is-Empty\n7-End the program\n\n");
        printf("Select one of the above operations: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            EnQueue(Queue);
            break;

        case 2:
            DeQueue(Queue);
            break;

        case 3:
            PeekInQueue(Queue);
            break;

        case 4:
            ReadInQueue(Queue);
            break;
        case 5:
            x = isFull(Queue);
            if (x == 0)
            {
                printf("Queue is Full.\n");
            }
            else
            {
                printf("You are good to go..\n");
            }
            break;
        case 6:
            x = isEmpty(Queue);
            if (x == 0)
            {
                printf("Queue is Empty.\n");
            }
            else
            {
                printf("You are good to go..\n");
            }
            break;
        case 7:
            break;
        default:
            printf("You pressed the wrong key.\n\nTry again.\n");
        }
    }
    return 0;
}
