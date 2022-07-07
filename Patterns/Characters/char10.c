#include <stdio.h>
void main()
{
    int num, i, j;
    printf("Enter the number of rows:");
    scanf("%d", &num);
    int cr = 65;
    for (i = 0; i <= num; i++)
    {
        for (j = 0; j <= num; j++)
        {
            if (i + j <= num)
                printf("%c", cr);
        }
        ++cr;
        printf("\n");
    }
}
