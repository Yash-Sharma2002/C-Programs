#include <stdio.h>
int main()
{
    int num, record = -1, j;

    printf("Enter the number of rows: ");
    scanf("%d", &num);

    printf("\n");
    if (num)
    {
        int cr = 66;
        for (int i = 1; i <= num; i++)
        {
            for (int j = num - 1; j >= i; j--)
            {
                printf(" ");
            }
            for (j = 1; j <= record + 2; j++)
            {
                printf("%c", --cr);
            }
            record = j - 1;
            cr += record + 2;
            printf("\n");
        }
        cr -= 4;
        for (int i = num - 1; i >= 1; i--)
        {
            for (int j = 1; j <= num - i; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= record - 2; j++)
            {
                printf("%c", --cr);
            }
            record = j - 1;
            cr += record - 2;
            printf("\n");
        }
    }

    return 0;
}
