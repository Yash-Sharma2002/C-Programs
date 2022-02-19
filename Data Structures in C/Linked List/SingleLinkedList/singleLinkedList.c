// I have listed all functions that can be done in a linked list
// I reffered whole name list as stack because i re-used the code many time so i don't need to change it anymore

// The  operations I added with these programs
// Insertion :
// Insert at First.
// Insert at End.
// Insert at Position.

// Deletion:
// Delete at First.
// Delete at End.
// Delete at Position.

// Reading or Traversing:
// Display of a particular element.
// Searching in the stack.
// Knowing the position (index) of the given element.
// Printing the whole stack.
// Printing the whole stack with indexes.

// Updation:
// Updating the Value of the element.

#include <stdio.h>
#include <stdlib.h>
struct node
{
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
    newNode->next = NULL;
    if (isEmpty(*stack))
    {
        *stack = newNode;
        return;
    }
    newNode->next = *stack;
    *stack = newNode;
}

void InsertAtEnd(struct node **stack)
{
    EnterElement();
    temp = *stack;
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

void InsertAtPos(struct node **stack)
{
    EnterElement();
    temp = *stack;
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
    newNode->next = temp;
}

// -------------Delete Functions----------------
void DeleteAtFirst(struct node **stack)
{
    if (isEmpty(*stack))
    {
        printf("\nList is empty.\nTry again after inserting an element.\n");
    }
    else if (temp->next == NULL)
    {
        printf("There is only one element in the list.\nDeleting it....\n");
        *stack = NULL;
    }
    else
    {
        temp = *stack;
        *stack = temp->next;
    }
}

void DeleteAtPos(struct node **stack)
{
    temp = *stack;
    if (isEmpty(*stack))
    {
        printf("\nList is empty.\nTry again after inserting an element.\n");
    }
    else if (temp->next == NULL)
    {
        printf("There is only one element in the list.\nDeleting it....\n");
        *stack = NULL;
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
        temp->next = NULL;
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
        *stack = NULL;
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
void UpdateInStack(struct node **stack)
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

// ------------------Reading Operations--------------------

// In these operations, in while loop don't do
// while(stack->next!=NUll)
// Doing this you will miss the last element of the list
// Instead do
// while(stack!=NULL)

void PrintAtIndex(struct node *stack)
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

void SearchingOfElement(struct node *stack)
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

void TraversingWholeStack(struct node *stack)
{
    if (isEmpty(stack))
    {
        printf("List is Empty.\nTry inserting aan element.\n\n");
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

void TraversingWholeStackWithIndex(struct node *stack)
{
    if (!isEmpty(stack))
    {
        printf("The elements in the Stack with Indexes are: \n\n");
        printf("Element -- ");
        int j = 0;
        while (stack != NULL)
        {
            printf(" %d\t", stack->data);
            stack = stack->next;
            j++;
        }
        printf("\nIndexes -- ");
        for (int i = 0; i < j; i++)
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

void SearchingOfElementWithPrintingIndex(struct node *stack)
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
            printf("\n\n1-Insert at Start\n2-Insert at Position\n3-Insert at End\n\n");
            printf("Select one of the above operations: ");
            scanf("%d", &choice2);
            switch (choice2)
            {
            case 1:
                InsertAtFirst(&stack);
                break;

            case 2:
                InsertAtPos(&stack);
                break;

            case 3:
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
            printf("\n\n1-Delete at Start\n2-Delete at Position\n3-Delete at End\n\n");
            printf("Select one of the above operations: ");
            scanf("%d", &choice2);
            switch (choice2)
            {
            case 1:
                DeleteAtFirst(&stack);
                break;

            case 2:
                DeleteAtPos(&stack);
                break;

            case 3:
                DeleteAtEnd(&stack);
                break;

            default:
                printf("You pressed the wrong key.\n\nTry again.\n");
                break;
            }
            break;
        }

        case 3:
            UpdateInStack(&stack);
            break;

        case 4:
        {
            printf("\n\n1-Printing element at Index\n2-Searching of Element\n3-Traversing Stack\n4-Traversing Stack with Index\n5-Getting Index of an element\n\n");
            printf("Select one of the above operations: ");
            scanf("%d", &choice2);
            switch (choice2)
            {
            case 1:
                PrintAtIndex(stack);
                break;

            case 2:
                SearchingOfElement(stack);
                break;

            case 3:
                TraversingWholeStack(stack);
                break;

            case 4:
                TraversingWholeStackWithIndex(stack);
                break;

            case 5:
                SearchingOfElementWithPrintingIndex(stack);
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