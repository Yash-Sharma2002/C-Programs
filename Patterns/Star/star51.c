#include <stdio.h>
void main()
{
    int num = 6;
    for (int i = 0; i <num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i<num/3 && j>=num/3*2 || i<=num/3*2 && i>=num/3 && j>=num/3 || i>=num/3*2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
