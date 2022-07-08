#include <stdio.h>
void main()
{
    int num = 6;
    for (int i = 0; i <= num; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            for (int j = 0; j <= num; j++)
            {
                if (i == 0 || j == num)
                    printf("*");
                else
                    printf(" ");
            }
            for (int j = 0; j <= num; j++)
            {
                if (i == num || j == num)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}