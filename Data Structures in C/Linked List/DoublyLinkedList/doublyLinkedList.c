// I have listed all functions that can be done in a doubly linked list
// I reffered whole list name as stack because i re-used the code many time so i don't need to change it anymore

// The  operations I added with these programs
// Insertion :
// Insert at First.
// Insert at End.
// Insert at Position from Start.
// Insert at position from End.

// Deletion:
// Delete at First.
// Delete at End.
// Delete at Position from start.
// Delete at position from End.

// Reading or Traversing:
// Display of a particular element from start.
// Display of a particular element from End.
// Searching in the stack from start.
// Searching in the stack from End.
// Knowing the position (index) of the given element from start.
// Knowing the position (index) of the given element from End.
// Printing the whole stack from start and End both.  (They can be divided into two but i dont want to increase the complexity of the program)
// Printing the whole stack with indexes from start and End both.    (They can be divided into two but i dont want to increase the complexity of the program)

// Updation:
// Updating the Value of the element from start.
// Updating the Value of the element from End.


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

int isEmpty(struct node *stack)
{
    if (stack == NULL)
    {
        return 1;
    }
    return 0;
}
void EnterElement()
{
    int element;
    printf("\nEnter the element: ");
    scanf("%d", &element);
    newNode = (struct node *)malloc(sizeof(struct node));

    newNode->data = element;
}

// -----------------Insert Functions------------
void InsertAtFirst(struct node **stack)
{
    EnterElement();
    temp = *stack;
    newNode->prev = NULL;
    newNode->next = NULL;
    if (isEmpty(*stack))
    {
        *stack = newNode;
        return;
    }
    newNode->next = temp;
    temp->prev = newNode;
    *stack = newNode;
}

void InsertAtEnd(struct node **stack)
{
    EnterElement();
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

void InsertAtPosFromStart(struct node **stack)
{
    EnterElement();
    temp = *stack;
    newNode->prev = NULL;
    newNode->next = NULL;
    if (isEmpty(temp))
    {
        printf("List is Empty.\nDon't worry element inserted at start.\n");
        *stack = newNode;
        return;
    }
    int pos, i;
    printf("Enter the position: ");
    scanf("%d", &pos);
    i = 1;
    while (i != pos)
    {
        temp_prev = temp;
        temp = temp->next;
        i++;
    }
    temp_prev->next = newNode;
    newNode->prev = temp_prev;
    newNode->next = temp;
    temp->prev = newNode;
}

void InsertAtPosFromEnd(struct node **stack)
{
    EnterElement();
    temp = *stack;
    newNode->prev = NULL;
    newNode->next = NULL;
    if (isEmpty(temp))
    {
        printf("List is Empty.\nDon't worry element inserted at start.\n");
        *stack = newNode;
        return;
    }
    int pos, i;
    printf("Enter the position: ");
    scanf("%d", &pos);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    i = 1;
    while (i != pos)
    {
        temp_prev = temp;
        temp = temp->prev;
        i++;
    }
    temp_prev->prev = newNode;
    temp->next = newNode;
    newNode->next = temp_prev;
    newNode->prev = temp;
}

// -------------Delete Functions----------------
void DeleteAtFirst(struct node **stack)
{
    temp = *stack;
    if (isEmpty(*stack))
    {
        printf("\nList is empty.\nTry again after inserting an element.\n");
    }
    else
    {
        temp = *stack;
        *stack = temp->next;
    }
}

void DeleteAtPosFromStart(struct node **stack)
{
    temp = *stack;
    if (isEmpty(*stack))
    {
        printf("\nList is empty.\nTry again after inserting an element.\n");
    }
    else if (temp->next == NULL)
    {
        printf("There is only one element in the list.\nDeleting it....\n");
        temp = *stack;
        *stack = temp->next;
    }
    else
    {
        int pos, i;
        printf("Enter the position: ");
        scanf("%d", &pos);
        i = 1;
        while (i != pos)
        {
            temp_prev = temp;
            temp = temp->next;
            temp_next = temp->next;
            i++;
        }
        temp_prev->next = temp_next;
        temp_next->prev = temp_prev;
        temp = NULL;
    }
}

void DeleteAtPosFromEnd(struct node **stack)
{
    temp = *stack;
    if (isEmpty(*stack))
    {
        printf("\nList is empty.\nTry again after inserting an element.\n");
    }
    else if (temp->next == NULL)
    {
        printf("There is only one element in the list.\nDeleting it....\n");
        temp = *stack;
        *stack = temp->next;
    }
    else
    {
        int pos, i;
        printf("Enter the position: ");
        scanf("%d", &pos);
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        i = 1;
        while (i != pos)
        {
            temp_prev = temp;
            temp = temp->prev;
            temp_next = temp->prev;
            i++;
        }
        temp_prev->prev = temp_next;
        temp_next->next = temp_prev;
        temp = NULL;
    }
}

void DeleteAtEnd(struct node **stack)
{
    temp = *stack;
    if (isEmpty(*stack))
    {
        printf("\nList is empty.\nTry again after inserting an element.\n");
    }
    else if (temp->next == NULL)
    {
        printf("There is only one element in the list.\nDeleting it....\n");
        temp = *stack;
        *stack = temp->next;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp_prev = temp;
            temp = temp->next;
        }
        temp_prev->next = NULL;
        temp = NULL;
    }
}

// ---------------Updation Operation-----------------------
void UpdateInStackFromStart(struct node **stack)
{
    if (isEmpty(*stack))
    {
        printf("\nList is empty.\nTry again after inserting an element.\n");
    }
    else
    {
        int pos, newValue, i;
        temp = *stack;
        printf("\nEnter the Position: ");
        scanf("%d", &pos);
        printf("\nEnter the New Value: ");
        scanf("%d", &newValue);

        i = 1;
        while (i != pos)
        {
            temp = temp->next;
            i++;
        }
        temp->data = newValue;
    }
}

void UpdateInStackFromEnd(struct node **stack)
{
    if (isEmpty(*stack))
    {
        printf("\nList is empty.\nTry again after inserting an element.\n");
    }
    else
    {
        int pos, newValue, i;
        temp = *stack;
        printf("\nEnter the Position: ");
        scanf("%d", &pos);
        printf("\nEnter the New Value: ");
        scanf("%d", &newValue);

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        i = 1;
        while (i != pos)
        {
            temp = temp->prev;
            i++;
        }
        temp->data = newValue;
    }
}

// ------------------Reading Operations--------------------
void PrintAtIndexFromStart(struct node *stack)
{
    if (!isEmpty(stack))
    {
        int pos, i;

        printf("\nEnter the Position: ");
        scanf("%d", &pos);

        printf("The element you are looking for is: \n");

        i = 1;
        while (i != pos)
        {
            stack = stack->next;
            i++;
        }

        printf(" %d ", stack->data);
        printf("\n");
    }
    else
    {
        printf("\nStack is currently empty.\n");
    }
}

void PrintAtIndexFromEnd(struct node *stack)
{
    if (!isEmpty(stack))
    {
        int pos, i;

        printf("\nEnter the Position: ");
        scanf("%d", &pos);

        printf("The element you are looking for is: \n");

        while (stack->next != NULL)
        {
            stack = stack->next;
        }

        i = 1;
        while (i != pos)
        {
            stack = stack->prev;
            i++;
        }

        printf(" %d ", stack->data);
        printf("\n");
    }
    else
    {
        printf("\nStack is currently empty.\n");
    }
}

void SearchingOfElementFromStart(struct node *stack)
{
    // This function return true or false if the element is present in the stack or not
    if (!isEmpty(stack))
    {
        int element, flag = 0;

        printf("\nEnter the element: ");
        scanf("%d", &element);

        while (stack != NULL)
        {
            if (element == stack->data)
            {
                flag = 1;
                break;
            }
            stack = stack->next;
        }

        if (flag == 1)
        {
            printf(" YES, the element is present in the List.\n");
        }
        else
        {
            printf(" NO, the element is not present in the List.\n");
        }
    }
    else
    {
        printf("\nList is currently empty.\n");
    }
}

void SearchingOfElementFromEnd(struct node *stack)
{
    // This function return true or false if the element is present in the stack or not
    if (!isEmpty(stack))
    {
        int element, flag = 0;

        printf("\nEnter the element: ");
        scanf("%d", &element);

        while (stack->next != NULL)
        {
            stack = stack->next;
        }

        while (stack != NULL)
        {
            if (element == stack->data)
            {
                flag = 1;
                break;
            }
            stack = stack->prev;
        }

        if (flag == 1)
        {
            printf(" YES, the element is present in the List.\n");
        }
        else
        {
            printf(" NO, the element is not present in the List.\n");
        }
    }
    else
    {
        printf("\nList is currently empty.\n");
    }
}

void TraversingWholeStack(struct node *stack)
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

void TraversingWholeStackWithIndex(struct node *stack)
{
    if (!isEmpty(stack))
    {
        printf("The elements in the Stack with Indexes from Start are: \n\n");
        printf("Element -- ");
        int j = 0;
        while (stack != NULL)
        {
            printf(" %d\t", stack->data);
            temp = stack;
            stack = stack->next;
            j++;
        }
        printf("\nIndexes -- ");
        for (int i = 0; i < j; i++)
        {
            printf(" %d\t", i + 1);
        }
        printf("\n");

        printf("The elements in the Stack with Indexes from End are: \n\n");
        printf("Element -- ");
        while (temp != NULL)
        {
            printf(" %d\t", temp->data);
            temp = temp->prev;
        }
        printf("\nIndexes -- ");
        for (int i = j - 1; i >= 0; i--)
        {
            printf(" %d\t", i + 1);
        }
        printf("\n");
    }
    else
    {
        printf("\nStack is currently empty.\n");
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
    int choice, choice2;

    while (choice != 5)
    {
        printf("\n\n1-Insertion\n2-Deletion\n3-Updation\n4-Traversing\n5-End the program\n\n");
        printf("Select one of the above operations: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("\n\n1-Insert at Start\n2-Insert at Position From start\n3-Insert at position from End\n4-Insert at End\n\n");
            printf("Select one of the above operations: ");
            scanf("%d", &choice2);
            switch (choice2)
            {
            case 1:
                InsertAtFirst(&stack);
                break;

            case 2:
                InsertAtPosFromStart(&stack);
                break;
            case 3:
                InsertAtPosFromEnd(&stack);
                break;
            case 4:
                InsertAtEnd(&stack);
                break;

            default:
                printf("You pressed the wrong key.\n\nTry again.\n");
                break;
            }
            break;
        }
        case 2:
        {
            printf("\n\n1-Delete at Start\n2-Delete at Position from Start\n3-Delete at Position from End\n4-Delete at End\n\n");
            printf("Select one of the above operations: ");
            scanf("%d", &choice2);
            switch (choice2)
            {
            case 1:
                DeleteAtFirst(&stack);
                break;

            case 2:
                DeleteAtPosFromStart(&stack);
                break;
            case 3:
                DeleteAtPosFromEnd(&stack);
                break;
            case 4:
                DeleteAtEnd(&stack);
                break;

            default:
                printf("You pressed the wrong key.\n\nTry again.\n");
                break;
            }
            break;
        }

        case 3:
        {
            printf("\n\n1-Update at position from Start\n2-Update at Position from End\n\n");
            printf("Select one of the above operations: ");
            scanf("%d", &choice2);
            switch (choice2)
            {
            case 1:
                UpdateInStackFromStart(&stack);
                break;

            case 2:
                UpdateInStackFromEnd(&stack);
                break;
            default:
                printf("You pressed the wrong key.\n\nTry again.\n");
                break;
            }
            break;
        }

        case 4:
        {
            printf("\n\n1-Printing element at index from Start\n2-Print Element at index from End\n3-Searching of Element from start");
            printf("\n4-Searching of Element from End\n5-Traversing Stack\n6-Traversing Stack with Index\n7-Getting Index of an element from Start");
            printf("\n8-Getting Index of an Element from End\n\n");
            printf("Select one of the above operations: ");
            scanf("%d", &choice2);
            switch (choice2)
            {
            case 1:
                PrintAtIndexFromStart(stack);
                break;

            case 2:
                PrintAtIndexFromEnd(stack);
                break;

            case 3:
                SearchingOfElementFromStart(stack);
                break;

            case 4:
                SearchingOfElementFromEnd(stack);
                break;

            case 5:
                TraversingWholeStack(stack);
                break;

            case 6:
                TraversingWholeStackWithIndex(stack);
                break;

            case 7:
                SearchingOfElementWithPrintingIndexFromStart(stack);
                break;

            case 8:
                SearchingOfElementWithPrintingIndexFromEnd(stack);
                break;

            default:
                printf("You pressed the wrong key.\n\nTry again.\n");
                break;
            }
            break;
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

// The program runs successfully