#include <stdio.h>
int main()
{
    int n, mid, low, high, search;

    printf("How many number will you input:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter which number you want to search from array:\n");
    scanf("%d", &search);
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (search == arr[mid])
        {
            break;
        }
        if (search > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (low > high)
    {
        printf("Your input is not valid\n");
    }
    else
    {
        printf("%d is found in array\nIt is in the %d th position of the array", arr[mid], (mid + 1));
    }

    return 0;
}