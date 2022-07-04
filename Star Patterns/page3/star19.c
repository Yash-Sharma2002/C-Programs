// page no - 3 question 2

#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number of columns:");
    scanf("%d", &n);
    for (int k = 0; k < 2; k++)
    {
        for (int j = 1; j <=n ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int k = 0; k < 2; k++)
    {
        for (int j = 1; j <= n * 2; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int k = 0; k < 2; k++)
    {
        for (int j = 1; j <= n * 3; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}