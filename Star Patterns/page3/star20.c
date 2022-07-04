// page no - 3 question 3

#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number of columns:");
    scanf("%d", &n);
    //  for (int z = 0; z < n; z++)
    // {
    //     for (int k = 0; k < 2; k++)
    //     {
    //       for (int j = 0; j < z*2; j++)
    //         {
    //             printf("1");
    //         }
    //         for (int j = n; j < (n+z)*2+2; j++)
    //         {
    //             printf("*");
    //         }
    //         printf("\n");
    //     }
    // }
    for (int k = 0; k < 2; k++)
    {
        for (int j = 1; j <= n * 3; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int k = 0; k < 2; k++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n * 2; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int k = 0; k < 2; k++)
    {
        for (int j = 1; j <= n * 2; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}