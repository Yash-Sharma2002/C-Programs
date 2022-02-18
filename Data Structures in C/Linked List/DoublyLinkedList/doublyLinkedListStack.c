// A Doubly linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. We can
// access the elements in both directions

// Note (Things I am unable to achieve in the program)
// delete with position programs can only delete elements in the middle not the first or last element

#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *newNode, *temp_prev, *temp;

int isEmpty(struct node *stack)
{
    if (stack == NULL)
    {
        return 1;
    }
    return 0;
}

// -----------------Insert Functions------------
void Push(struct node **stack)
{
    int element;
    printf("\nEnter the element: ");
    scanf("%d", &element);
    newNode = (struct node *)malloc(sizeof(struct node));

    newNode->data = element;
    temp = *stack;
    newNode->next = NULL;
    newNode->prev = NULL;

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
    newNode->prev = temp;
}

// -------------Delete Functions----------------

void Pop(struct node **stack)
{
    temp = *stack;
    if (isEmpty(*stack))
    {
        printf("\nList is empty.\nTry again after inserting an element.\n");
    }
    else if (temp->next == NULL)
    {
        temp = *stack;
        *stack = temp->next;
    }
    else
    {
        temp = *stack;
        while (temp->next != NULL)
        {
            temp_prev = temp;
            temp = temp->next;
        }
        temp_prev->next = NULL;
        temp = NULL;
    }
}

// ------------------Reading Operations--------------------

void Peek(struct node *stack)
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
            temp = stack;
            stack = stack->next;
        }
        printf("\nThe elements from before : \n");
        while (temp != NULL)
        {
            printf(" %d ", temp->data);
            temp = temp->prev;
        }
    }
}

void SearchingOfElementWithPrintingIndexFromStart(struct node *stack)
{
    // This function fails when there containing iterative elements.
    if (!isEmpty(stack))
    {
        int element, flag = 0, i;

        printf("\nEnter the element: ");
        scanf("%d", &element);
        i = 0;
        while (stack != NULL)
        {
            if (element == stack->data)
            {
                flag = 1;
                break;
            }
            stack = stack->next;
            i++;
        }

        if (flag == 1)
        {
            printf(" Yes, the element is present in the Stack at index - %d \n", i + 1);
        }
        else
        {
            printf(" NO, the element is not present in the List.\n");
        }
    }
    else
    {
        printf("\nStack is currently empty.\n");
    }
}

void SearchingOfElementWithPrintingIndexFromEnd(struct node *stack)
{
    // This function fails when there containing iterative elements.
    if (!isEmpty(stack))
    {
        int element, flag = 0, i;

        printf("\nEnter the element: ");
        scanf("%d", &element);

        while (stack->next != NULL)
        {
            stack = stack->next;
        }

        i = 0;
        while (stack != NULL)
        {
            if (element == stack->data)
            {
                flag = 1;
                break;
            }
            stack = stack->prev;
            i++;
        }

        if (flag == 1)
        {
            printf(" Yes, the element is present in the Stack at index - %d \n", i + 1);
        }
        else
        {
            printf(" NO, the element is not present in the List.\n");
        }
    }
    else
    {
        printf("\nStack is currently empty.\n");
    }
}

// --------------------Main Function----------------
int main()
{

    struct node *stack;
    stack = NULL;
    int choice, x;

    while (choice != 7)
    {
        printf("\n\n1-Push\n2-Pop\n3-Peek\n4-Searching from Start\n5-Searching from End\n6-isEmpty\n7-End the program\n\n");
        printf("Select one of the above operations: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Push(&stack);
            break;

        case 2:
            Pop(&stack);
            break;

        case 3:
            Peek(stack);
            break;

        case 4:
            SearchingOfElementWithPrintingIndexFromStart(stack);
            break;

        case 5:
            SearchingOfElementWithPrintingIndexFromEnd(stack);
            break;

        case 6:
            x = isEmpty(stack);
            if (x == 1)
            {
                printf("Stack is Empty.\n");
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

// The program runs successfully