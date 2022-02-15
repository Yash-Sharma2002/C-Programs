// After creating the Stack-Basic I added some methods in the stack that I called the advanced Stack operations

// The other operations I added with these programs
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
#define max 100
int top = -1;

// -------------------------Inserting Operations------------------------------
void InsertAtFirst(int stack[])
{
    if (top == 100)
    {
        printf("Stack has overflown.\n");
    }
    else
    {
        int element;
        printf("\nEnter the element: ");
        scanf("%d", &element);
        for (int i = top; i >= 0; i--)
        {
            stack[i] = stack[i - 1];
        }

        top += 1;
        stack[0] = element;
    }
}

void InsertAtPos(int stack[])
{
    if (top == 100)
    {
        printf("Stack has overflown.\n");
    }
    else if (top == -1)
    {
        InsertAtFirst(stack);
    }
    else
    {
        top += 1;
        int element, pos;

        printf("\nEnter the element: ");
        scanf("%d", &element);

        printf("\nEnter the Position: ");
        scanf("%d", &pos);

        for (int i = top; i > pos; i--)
        {
            stack[i] = stack[i - 1];
        }

        top += 1;

        stack[pos - 1] = element;
    }
}

void InsertAtEnd(int stack[])
{
    if (top == 100)
    {
        printf("Stack has overflown.\n");
    }
    else
    {
        top += 1;
        int element;
        printf("\nEnter the element: ");
        scanf("%d", &element);
        stack[top] = element;
    }
}

// --------------------Deleting Operations----------------------
void DeleteAtFirst(int stack[])
{
    if (top == -1)
    {
        printf("Stack has underflow.\n");
    }
    else
    {
        for (int i = 0; i < top; i++)
        {
            stack[i] = stack[i + 1];
        }

        top -= 1;
    }
}

void DeleteAtPos(int stack[])
{
    if (top == -1)
    {
        printf("Stack has underflow.\n");
    }
    else
    {
        int pos;

        printf("\nEnter the Position: ");
        scanf("%d", &pos);

        for (int i = pos - 1; i < top; i++)
        {
            stack[i] = stack[i + 1];
        }

        top -= 1;
    }
}

void DeleteAtEnd(int stack[])
{
    if (top == -1)
    {
        printf("Stack has underflow.\n");
    }
    else
    {
        top -= 1;
    }
}

// ---------------Updation Operation-----------------------
void UpdateInStack(int stack[])
{
    if (top == -1)
    {
        printf("Stack has underflow.\n");
    }
    else if (top == 100)
    {
        printf("Stack has overflown.\n");
    }
    else
    {
        int pos, newValue;

        printf("\nEnter the Position: ");
        scanf("%d", &pos);

        printf("\nEnter the New Value: ");
        scanf("%d", &newValue);

        stack[pos - 1] = newValue;
    }
}

// ------------------Reading Operations--------------------
void PrintAtIndex(int stack[])
{
    if (top != -1)
    {
        int pos;

        printf("\nEnter the Position: ");
        scanf("%d", &pos);

        printf("The element you are looking for is: \n");

        printf(" %d ", stack[pos - 1]);
        printf("\n");
    }
    else
    {
        printf("\nStack is currently empty.\n");
    }
}

void SearchingOfElement(int stack[])
{
    // This function return true or false if the element is present in the stack or not
    if (top != -1)
    {
        int element, flag = 0;

        printf("\nEnter the element: ");
        scanf("%d", &element);

        for (int i = 0; i < top; i++)
        {
            if (element == stack[i])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            printf(" Yes, the element is present in the Stack ");
        }
        printf("\n");
    }
    else
    {
        printf("\nStack is currently empty.\n");
    }
}

void TraversingWholetack(int stack[])
{
    if (top != -1)
    {
        printf("The elements in the Stack are: \n");
        for (int i = 0; i < top; i++)
        {

            printf(" %d ", stack[i]);
        }
        printf("\n");
    }
    else
    {
        printf("\nStack is currently empty.\n");
    }
}

void TraversingWholetackWithIndex(int stack[])
{
    if (top != -1)
    {
        printf("The elements in the Stack with Indexes are: \n\n");
        printf("Element -- ");
        for (int i = 0; i < top; i++)
        {
            printf(" %d\t", stack[i]);
        }

        printf("\nIndexes -- ");
        for (int i = 0; i < top; i++)
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

void SearchingOfElementWithPrintingIndex(int stack[])
{
    // This function fails when there containing iterative elements.
    if (top != -1)
    {
        int element, flag = 0, i;

        printf("\nEnter the element: ");
        scanf("%d", &element);

        for (i = 0; i < top; i++)
        {
            if (element == stack[i])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            printf(" Yes, the element is present in the Stack at index - %d ", i + 1);
        }
        printf("\n");
    }
    else
    {
        printf("\nStack is currently empty.\n");
    }
}

// --------------------Main Function----------------
int main()
{
    int stack[max];
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
                InsertAtFirst(stack);
                break;

            case 2:
                InsertAtPos(stack);
                break;

            case 3:
                InsertAtEnd(stack);
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
                DeleteAtFirst(stack);
                break;

            case 2:
                DeleteAtPos(stack);
                break;

            case 3:
                DeleteAtEnd(stack);
                break;

            default:
                printf("You pressed the wrong key.\n\nTry again.\n");
                break;
            }
            break;
        }

        case 3:
            UpdateInStack(stack);
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
                TraversingWholetack(stack);
                break;

            case 4:
                TraversingWholetackWithIndex(stack);
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