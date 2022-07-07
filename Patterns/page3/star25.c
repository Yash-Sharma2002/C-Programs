// page no - 3 question 8

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
            for (int j = 1; j < n - z; j++)
            {
                printf(" ");
            }
            for (int j = 0; j <=z; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}