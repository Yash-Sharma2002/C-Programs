#include <stdio.h>
void main()
{
    int num = 4;
    for (int i = 0; i <=num; i++)
    {
        for (int j = 0; j<=num; j++)
        {
            if(i==num/2 || i==num && j<num || j==0 || i+j<=3) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}
