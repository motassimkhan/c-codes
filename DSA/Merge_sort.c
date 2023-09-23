#include <stdio.h>

int a[100];
void combine(int low, int mid, int high)
{
    int i = low, j = mid + 1;
    int temp[50], k = low;
    while (i <= mid && j <= high)
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];

    while (i <= mid)
        temp[k++] = a[i++];
    while (j <= high)
        temp[k++] = a[j++];
    for (i = low; i <= high; i++)
        a[i] = temp[i];
}

void mergesort(int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergesort(low, mid);
        mergesort(mid + 1, high);
        combine(low, mid, high);
    }
}

void main()
{
    int i, n;
    printf("\nImplementation of Merge Sort\nEnter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter %d Elements: ", n);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    mergesort(1, n);
    printf("\nAfter sorting:\n");
    for (i = 1; i <= n; i++)
        printf("  %d", a[i]);
    printf("\n\n");
}