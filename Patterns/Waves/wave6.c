#include <stdio.h>
void main()
{
    int num = 6;
    for (int i = 0; i <= num; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            for (int j = 0; j <= num/2; j++)
            {
                if (i == 0 && j<num/2 || j == num/2 && !(i==j) && !(i+j==num/2))
                    printf("%d%d",i,j);
                else
                    printf("  ");
            }
            for (int j = 0; j <= num/2; j++)
            {
                if (i == num/2 && j<num/2 || j == num/2 && !(i==j) && !(i+j==num/2))
                    printf("%d%d",i,j);
                else
                    printf("  ");
            }
        }
        printf("\n");
    }
}