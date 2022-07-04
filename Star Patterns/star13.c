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
            int cr=64;
            for(int j = num-1;j>=i;j--){
                printf(" ");
            }
            for (int j = 0; j < i; j++)
            {
                printf("%c",++cr);
            }
            for (int j = 0; j < i-1; j++)
            {
                printf("%c",--cr);
            }
            printf("\n");
        }
    }

    return 0;
}
