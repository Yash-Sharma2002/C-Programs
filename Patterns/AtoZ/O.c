// Type 1
#include <stdio.h>
void main()
{
    int num = 6;
    printf("Enter the number of rows:");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j <= num; j++)
        {
            if (j == 0 && i > 0 && i < num || i == 0 && j > 0 && j < num || i == num && j > 0 && j < num || j == num && i > 0 && i < num)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Type 2
// #include <stdio.h>
// void main()
// {
//     int num = 6;
//     printf("Enter the number of rows:");
//     scanf("%d", &num);
//     for (int i = 0; i <= num; i++)
//     {
//         for (int j = 0; j <= num; j++)
//         {
//             if (j == 0 || i == 0 || i == num || j == num)
//                 printf("*");
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
// }