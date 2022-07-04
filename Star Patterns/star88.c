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
            int cr=65;
            for (int j = 0; j < i; j++)
            {
                printf("%c",cr++);
            }
            printf("\n");
        }
        for (int i = num; i >=1; i--)
        {
            int cr=65;
            for (int j = 0; j < i; j++)
            {
                printf("%c",cr++);
            }
            printf("\n");
        }
    }

    return 0;
}
