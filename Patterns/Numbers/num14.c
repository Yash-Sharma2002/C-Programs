#include <stdio.h>
void main()
{
    int num, i, j;
    printf("Enter the number of rows:");
    scanf("%d", &num);
    for (i = 0; i <= num; i++)
    {
        int _counter = 1;
        for (j = 0; j <= num; j++)
        {
            if (i <= j + num / 2 && i + j <= num + num / 2 && i + num / 2 >= j && i + j >= num / 2)
                printf("%d", _counter++);
            else
                printf(" ");
        }
        printf("\n");
    }
}
