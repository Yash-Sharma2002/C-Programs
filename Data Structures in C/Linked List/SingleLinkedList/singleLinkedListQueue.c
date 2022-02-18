// A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations.

/*
       head         second         third
        |             |             |
        |             |             |
    +---+---+     +---+---+     +----+----+
    | 1  | o----->| 2 | o-----> |  # |  # |
    +---+---+     +---+---+     +----+----+      */

// Operations in the single Linked list queue includes operation same as queue but also contain the concept of linked list

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int isEmpty(struct node *Queue)
{
    if (Queue == NULL)
    {
        return 1;
    }
    return 0;
}

// isFull not needed because we have infinite amount of memory to store iur elements, so, Queue can't be full

void Enqueue(struct node **Queue)
{
    int element;
    printf("\nEnter the element: ");
    scanf("%d", &element);
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *temp = *Queue;

    newNode->data = element;
    newNode->next = NULL;

    if (isEmpty(temp))
    {
        *Queue = newNode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void Dequeue(struct node **Queue)
{
    struct node *temp;
    if (isEmpty(*Queue))
    {
        printf("\nList is empty.\nTry again after inserting an element.\n");
    }
    else
    {
        temp = *Queue;
        *Queue = temp->next;
    }
}

void Peek(struct node *Queue)
{
    if (isEmpty(Queue))
    {
        printf("List is Empty.\nTry inserting an element.\n\n");
    }
    else
    {

        printf("\nThe elements are : \n");
        while (Queue != NULL)
        {
            printf(" %d ", Queue->data);
            Queue = Queue->next;
        }
    }
}

int main()
{
    int choice;
    struct node *Queue;
    Queue = NULL;
    while (choice != 5)
    {
        printf("\n\n1-Insert\n2-Delete\n3-Read\n4-Is-Empty\n5-End the program\n\n");
        printf("Select one of the above operations: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Enqueue(&Queue);
            break;

        case 2:
            Dequeue(&Queue);
            break;

        case 3:
            Peek(Queue);
            break;
        case 4:
            if (isEmpty(Queue))
            {
                printf("Queue List is Empty.\n");
            }
            break;
        case 5:
            break;
        default:
            printf("You pressed the wrong key.\n\nTry again.\n");
        }
    }
    return 0;
}
