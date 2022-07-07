#include <stdio.h>
void main()
{
    int num, i, j;
    printf("Enter the number of rows:");
    scanf("%d", &num);
    for (i = 0; i <= num / 2; i++)
    {
        int cr = 66 +i*2;
        for (j = 0; j <= num; j++)
        {
            if (i + j >= num / 2 && i + num / 2 >= j)
                printf("%c", --cr);
            else
                printf(" ");
        }
        printf("\n");
    }
}
