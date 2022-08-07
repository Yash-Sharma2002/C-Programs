#include <stdio.h>
void main()
{
    int arr[6][6], cr[4][4], sum = 0;
    printf("Enter the array:\n");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // this expression gives the sum of all the hourglasses in the array
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (j < 6 - 2 && i < 6 - 2)
            {
                cr[i][j] = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            }
        }
    }
    // prints the hourglass sum
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%d\t", cr[i][j]);
        printf("\n");
    }

    // for finding maximum hourglass
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            if (sum < cr[i][j])
                sum = cr[i][j];
    }

    // printing the maximum hourglass sum
    printf("The maximum hourglass sum is %d", sum);
}