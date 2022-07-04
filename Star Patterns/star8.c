
#include<stdio.h>
int main()
{
    int num, leap=0;

    printf("Enter the number of rows: ");
    scanf("%d", &num);

    printf("\n");

    if (num)
    {
        for (int i = 1; i <= num; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf("%d\t",++leap);
            }
            printf("\n");
        }
    }

    return 0;
}
