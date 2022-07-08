#include <stdio.h>
void main()
{
    int num, i, j;
    printf("Enter the number of rows:");
    scanf("%d", &num);
    for (i = 0; i <= num; i++)
    {
        int cr=67+i*2;
        for (j = 0; j <= num; j++)
        {
            if (i == j || i + j == num)
                printf("%c", --cr);
            else
                printf(" ");
        }
        printf("\n");
    }
}
