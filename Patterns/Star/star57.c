#include <stdio.h>
void main()
{
    int num = 4;
    for (int i = 0; i <=num; i++)
    {
        for (int j = 0; j<=num; j++)
        {
            if(j==num/2 || j==num && i>0 || i==num || i>=j+2) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}
