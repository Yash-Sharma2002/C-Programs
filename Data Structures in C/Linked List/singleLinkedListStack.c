// A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations.

/*
       head         second         third
        |             |             |
        |             |             |
    +---+---+     +---+---+     +----+----+
    | 1  | o----->| 2 | o-----> |  # |  # |
    +---+---+     +---+---+     +----+----+      */

// Operations in the single Linked list stack includes operation same as stack but also contain the concept of liked list

#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

void PushIntoStack(struct node *stack)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    int element;
    printf("\nEnter the element: ");
    scanf("%d", &element);

    while (stack != NULL)
    {
        stack = stack->next;
    }
    newNode->data = element;
    stack->next = newNode;
    newNode->next = NULL;
}

void PopFromStack(struct node *stack)
{
}

void ReadInStack(struct node *stack)
{
    while (stack->next != NULL)
    {
        printf(" %d ", stack->data);
        stack = stack->next;
    }
}

int main()
{
    int choice;
    struct node *stack=NULL;

    while (choice != 4)
    {
        printf("\n\n1-Insert\n2-Delete\n3-Read\n4-End the program\n\n");
        printf("Select one of the above operations: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            PushIntoStack(stack);
            break;

        case 2:
            PopFromStack(stack);
            break;

        case 3:
            ReadInStack(stack);
            break;

        case 4:
            break;
        default:
            printf("You pressed the wrong key.\n\nTry again.\n");
        }
    }
    return 0;
}
