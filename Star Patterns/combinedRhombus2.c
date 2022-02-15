// Input:
// Num :  Must be an integer indicates the number of rows in which you want the pattern

// Output:
// A star Pattern

// Example :

// Example 1 :-

// Input:
// Num : 4

// Output:
//     *
//    ***
//   *****
//  *******
//   *****
//    ***
//     *

#include <stdio.h>
int main()
{
    int num, i, j, record = -1;
    printf("Enter the number of rows: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for ( int k = num-i-1; k >=0; k--)
        {
            printf(" ");
        }
        
        for (j = 1; j <= record + 2; j++)
        {
            printf("*");
        }
        record = j - 1;
        printf("\n");
    }
    for (i = 1; i <= num; i++)
    {
        for ( int k = 0; k <i; k++)
        {
            printf(" ");
        }
        
        for (j = record - 4; j >= -1; j--)
        {
            printf("*");
        }
        record -= 2;
        printf("\n");
    }

    return 0;
}
