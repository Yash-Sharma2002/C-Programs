#include <stdio.h>

int binary_search(int arr[], int key, int n)
{
    int low = 0,
        high = n - 1,
        mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == arr[mid])
        {
            return 1;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return 0;
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