// A Circular linked list is a linear data structure, in which the elements are not stored at contiguous memory locations.
// We can access the elements in both directions. There is not end to any element all the elements are connected.

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
struct node *newNode, *temp_prev, *temp, *temp_next;
int top = 0;

int isEmpty(struct node *stack)
{
    if (stack == NULL)
    {
        return 1;
    }
    return 0;
}

void GoToLastForInsert(struct node **stack)
{
    int i = 1;
    temp = *stack;
    while (i != top - 1)
    {
        temp = temp->next;
        i++;
    }
}


void GoToLastForDelete(struct node **stack)
{
    int i = 1;
    temp = *stack;
    while (i != top)
    {
        temp = temp->next;
        i++;
    }
}

// -----------------Insert Functions------------
void Enqueue(struct node **stack)
{
    top += 1;
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
    GoToLastForInsert(&temp);
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next = *stack;
}

// -------------Delete Functions----------------

void Dequeue(struct node **stack)
{
    temp = *stack;
    if (isEmpty(*stack))
    {
        printf("\nList is empty.\nTry again after inserting an element.\n");
    }
    else if (top == 1)
    {
        printf("There is only one element in the list.\nDeleting it....\n");
        *stack = NULL;
        top -= 1;
    }
    else
    {
        temp_prev = *stack;
        *stack = temp->next;

        GoToLastForDelete(&temp);

        temp->next = *stack;
        temp_prev->prev = temp;
        top -= 1;
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
        if (top < 0)
        {
            printf("List is Empty.\nTry inserting an element.\n\n");
            return;
        }
        printf("\nThe elements are : \n");
        int i = 1;
        while (i != top + 1)
        {
            printf(" %d ", stack->data);
            temp = stack;
            stack = stack->next;
            i++;
        }
        printf("\nThe elements from before : \n");
        i = top;
        while (i > 0)
        {
            printf(" %d ", temp->data);
            temp = temp->prev;
            i--;
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
        while (i != top)
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
        int element, flag = 0, i, j;

        printf("\nEnter the element: ");
        scanf("%d", &element);

        i = 1;
        while (i != top + 1)
        {
            temp = stack;
            stack = stack->next;
            i++;
        }

        j = 0;
        while (j != top)
        {
            if (element == temp->data)
            {
                flag = 1;
                break;
            }
            temp = temp->prev;
            j++;
        }

        if (flag == 1)
        {
            printf(" Yes, the element is present in the Stack at index - %d \n", j + 1);
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
        printf("\n\n1-Enqueue\n2-Dequeue\n3-Peek\n4-Searching from Start\n5-Searching from End\n6-isEmpty\n7-End the program\n\n");
        printf("Select one of the above operations: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Enqueue(&stack);
            break;

        case 2:
            Dequeue(&stack);
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