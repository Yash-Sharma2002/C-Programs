#include <stdio.h>
void main()
{
    int num = 6;
    printf("Enter the number of rows:");
    scanf("%d", &num);
    for (int i = 0; i <= num+2; i++)
    {
        for (int j = 0; j <= num+2; j++)
        {
            if (j == 0 && i > 0 && i < num || i == 0 && j > 0 && j < num || i == num && j > 0 && j < num || j == num && i > 0 && i < num || i==j && i>num/2 && i<num+2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
