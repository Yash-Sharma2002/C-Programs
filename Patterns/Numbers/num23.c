#include <stdio.h>
void main()
{
    int num = 6,_counter=0;
    printf("Enter the number of rows:");
    scanf("%d",&num);
    for (int i = 0; i <num; i++)
    {
        for (int j = 0; j<i; j++)
        {
                printf("%d",++_counter);
            if(_counter==9) _counter=0;
        }
        printf("\n");
    }
}
