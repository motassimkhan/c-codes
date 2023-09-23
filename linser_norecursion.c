#include <stdio.h>
// int linearSearch(int arr[], int n, int j);
void main()
{
    int arr[100], n, key, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements of array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter key element to search: ");
    scanf("%d", &key);
    for(i = 0; i<=n; i++){
        if (key == arr[i])
        printf("\nElement Found\n");
        return;
    }
}
// int linearSearch(int arr[], int n, int j)
// {
//     int i;
//     for (i = 0; i < n; i++)
//         if (arr[i] == j)
//             return i;
//     return -1;
// }