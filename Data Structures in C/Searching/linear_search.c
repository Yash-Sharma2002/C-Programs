#include <stdio.h>

int linear_search(int arr[], int key, int n)
{
    int flag = 0, i;
    for (i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            flag = 1;
        }
    }
    return flag;
}

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" Element number %d - %d\n", i + 1, arr[i]);
    }
}

void main()
{
    int arr[10],
        n,
        i,
        key,
        flag = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    print_array(arr, n);
    printf("Enter key for search");
    scanf("%d", &key);
    flag = linear_search(arr, key, n);
    if (flag == 0)
    {
        printf("Key is not found");
    }
    else
    {
        printf("Key found");
    }
}