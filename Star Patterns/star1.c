// Input:
// Num :  Must be an integer indicates the number of rows in which you want the pattern
// Leap : Must be an integer indicates the type of pattern you need.

// Output:
// A star Pattern 

// Example :

// Example 1 :-

// Input:
// Num : 4
// Leap : 1

// Output:
// *
// **
// ***
// ****

// Example 2 :-

// Input:
// Num : 4
// Leap : 2

// Output:
// **
// ****
// ******
// ********

#include <stdio.h>
int main()
{
    int num, leap;

    printf("Enter the number of rows: ");
    scanf("%d", &num);
    printf("Enter the number of stars at staring: ");
    scanf("%d", &leap);

    printf("\n");

    if (num)
    {
        for (int i = 1; i <= num; i++)
        {
            for (int j = 0; j < i; j++)
            {
                for (int k = 0; k < leap; k++)
                {
                    printf("*");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
