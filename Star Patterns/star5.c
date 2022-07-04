
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the number of martix:");
    scanf("%d", &n);
    for (i = n / 2; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (int j = 1; j <= n - i * 2; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for (i = 1; i <= n / 2; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (int j = 1; j <= n - i * 2; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}