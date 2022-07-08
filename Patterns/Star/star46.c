#include <stdio.h>
void main()
{
    int num = 8, i, j;
    for (i = 0; i <= num; i++)
    {
        for (j = 0; j <= num; j++)
        {
            if (!(i + j >= 6 && i <= j + 2 && i + 2 >= j && i + j <= 10))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
