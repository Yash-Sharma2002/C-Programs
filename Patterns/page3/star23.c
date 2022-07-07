// page no - 3 question 6

#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number of columns:");
    scanf("%d", &n);
    for (int z = 0; z < n; z++)
    {
        for (int k = 0; k < 2; k++)
        {
            for (int j = n; j < n + z; j++)
            {
                printf(" ");
            }
            for (int j = n - z; j >= 1; j--)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}