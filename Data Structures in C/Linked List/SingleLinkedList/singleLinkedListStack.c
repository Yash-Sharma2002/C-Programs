// A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations.

/*
       head         second         third
        |             |             |
        |             |             |
    +---+---+     +---+---+     +----+----+
    | 1  | o----->| 2 | o-----> |  # |  # |
    +---+---+     +---+---+     +----+----+      */

// Operations in the single Linked list stack includes operation same as stack but also contain the concept of linked list

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int isEmpty(struct node *stack)
{
    if (stack == NULL)
    {
        return 1;
    }
    return 0;
}

// isFull not needed because we have infinite amount of memory to store iur elements, so, stack can't be full 

void PushIntoStack(struct node **stack)
{
    int element;
    printf("\nEnter the element: ");
    scanf("%d", &element);
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *temp = *stack;

    newNode->data = element;
    newNode->next = NULL;

    if (isEmpty(temp))
    {
        *stack = newNode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void PopFromStack(struct node **stack)
{
    struct node *temp = *stack,*temp2 = *stack;
    while(temp->next!=NULL){
        temp2 = temp;
        temp = temp->next;
    } 
    temp2->next = NULL;
}

void ReadInStack(struct node *stack)
{
    if (isEmpty(stack))
    {
        printf("List is Empty.\nTry inserting an element.\n\n");
    }
    else
    {

        printf("\nThe elements are : \n");
        while (stack != NULL)
        {
            printf(" %d ", stack->data);
            stack = stack->next;
        }
    }
}

int main()
{
    int choice;
    struct node *stack;
    stack = NULL;
    while (choice != 4)
    {
        printf("\n\n1-Insert\n2-Delete\n3-Read\n4-End the program\n\n");
        printf("Select one of the above operations: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            PushIntoStack(&stack);
            break;

        case 2:
            PopFromStack(&stack);
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
