#include<stdio.h>
int main()
{
    int num;

    printf("Enter the number of rows: ");
    scanf("%d", &num);

    printf("\n");
    if (num)
    {
        for (int i = 1; i <=num; i++)
        {
            int cr=1;
            for (int j = 0; j < i; j++)
            {
                printf("%d",cr++);
            }
            printf("\n");
        }
    }

    return 0;
}
