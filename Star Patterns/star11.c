
#include<stdio.h>
int main()
{
    int num,cr = 65;

    printf("Enter the number of rows: ");
    scanf("%d", &num);

    printf("\n");

    if (num)
    {
        for (int i = num; i >=1; i--)
        {
            for (int j = 0; j < i; j++)
            {
                printf("%c",cr);
            }
            ++cr;
            printf("\n");
        }
    }

    return 0;
}
