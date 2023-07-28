#include <stdio.h>

int linearSearch(int arr[], int n, int j);

int main()
{
    int arr[100], n, j, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter key element to search: ");
    scanf("%d", &j);
    int pos = linearSearch(arr, n, j);
    if (pos == -1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Element found at index %d\n", pos);
    }
    return 0;
}

int linearSearch(int arr[], int n, int j)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == j)
        {
            return i;
        }
    }
    return -1;
}