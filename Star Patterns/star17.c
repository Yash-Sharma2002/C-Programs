// page - 5 No - 1

#include <stdio.h>
void main()
{
    int n, j;
    printf("Enter the amount of group:");
    scanf("%d", &n);
    for (int i = 1; i <= n * 2 + 1; i++)
    {
        // for increasing number of columns
        // for(int k = 0;k<2;k++){
        if (i >= n * 2 + 1)
        {
            for (int j = 0; j < n; j++)
            {
                printf(" ");
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                printf("*");
            }
        }
        for (j = 0; j < n; j++)
        {
            printf(" ");
        }
        if (i > 1)
        {
            for (int j = 0; j < n * 2; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int j = 0; j < n * 2; j++)
            {
                printf(" ");
            }
        }
        for (int j = 0; j < n; j++)
        {
            printf(" ");
        }
        if (i >= n * 2 + 1)
        {
            for (int j = 0; j < n; j++)
            {
                printf(" ");
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                printf("*");
            }

            // }
        }
        printf("\n");
    }
}