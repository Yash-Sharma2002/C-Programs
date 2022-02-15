// Stack is a linear data structure which follows a particular order in
// which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out).

// The operations of a stack contains push,pop,read only.

// It also containes other operations like isEmpty(), isFull(), peek()
// which I already added inside of the methods of the stack. So, I dont need to create them again.
// If i want to then I have to change the instance of the methods of the functions too.
// So, I am not doing it here. I will do it in Queue Data Structure.
// So, I can get the idea of the stack from the Queue 

// The data type of the stack is based on the user which type of value did he want ti insert
// in the stack.

// Here is the stack data structure written by me in C language.
// I did my best to make all the operations of stack must be available in this code.
// The operations contains ---
// Push:
// Adding an element at the last of the array (Stack).

// Pop:
// Removing an element from the last of the array (Stack).

// Read or Traverse:
// It prints the whole stack
// Here I am creating a 1D stack only.
#include <stdio.h>
#define max 100
int top = -1;
void PushIntoStack(int stack[])
{
    if (top == 100)
    {
        // printing the message that the space of the stack, all is being assigned (overflow).
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

void PopFromStack(int stack[])
{
    if (top == -1)
    {
        // printing the message that there is no element in the stack (underflow).
        printf("Stack has underflow.\n");
    }
    else
    {
        // By doing so the top element always be in the stack, it was not removed but never printed. So, we can assume that 
        // it is deleted.
        top -= 1;
    }
}

void ReadInStack(int stack[])
{
    if (top != -1)
    {
        int i = 0;
        printf("The elements in the Stack with the indexes are: \n");
        while (i <= top)
        {
            printf(" %d ", stack[i]);
            i++;
        }
        printf("\n");
    }
    else
    {
        printf("\nStack is currently empty.\n");
    }
}
int main()
{
    // stack is basically an array which contains some special operations
    // The maximum number of values that a stack can contain is 100.
    int stack[max];
    int choice;

    while (choice != 4)
    {
        printf("\n\n1-Push\n2-Pop\n3-Read\n4-End the program\n\n");
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
