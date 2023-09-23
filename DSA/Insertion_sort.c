#include <stdio.h>
void main()
{
    int a[50], i, j, n, temp;
    printf("\nInsertion Sort\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: \n", n);
    for (i = 1; i <= n; i++){
        scanf("%d", &a[i]);
    for (j = i; j >= 1; j--)
    {
        if (a[j] > a[j - 1])
        {
            temp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = temp;
        }
    }}
    printf("\nAfter Sorting: ");
    for (i = 1; i <= n; i++)
        printf("  %d", a[i]);
    printf("\n");
}