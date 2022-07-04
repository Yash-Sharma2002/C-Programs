#include<stdio.h>
int main()
{
    int num,record = -1,j;

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
            for (j = 1; j <= record + 2; j++)
            {
                printf("%c",++cr);
            }
            record = j - 1;
            printf("\n");
        }
        for (int i = 1; i <num; i++)
        {
            int cr=64;
            for(int j = 0;j<i;j++){
                printf(" ");
            }
            for (j = 1; j <= record - 2; j++)
            {
                printf("%c",++cr);
            }
            record = j - 1;
            printf("\n");
        }
    }

    return 0;
}
