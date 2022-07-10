#include <stdio.h>
void main()
{
    int num = 10;
    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j < num-1; j++)
        {
            if ( i+j>=2 && j+8>=i && i+8>=j  && i+j<=18 )
                printf("* ");
            else
                printf(" ");
        }
        printf("\n");
    }
}
