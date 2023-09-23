#include <stdio.h>
#include <stdlib.h>

int a[100];
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int divide( int low, int high)
{
    int pivot = a[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (a[j] < pivot) {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[high]);
    return (i + 1);
}

void quicksort(int low, int high)
{
    if (low < high)
    {
        int j = divide(low, high);
        quicksort(low, j - 1);
        quicksort(j + 1, high);
    }
}

void main()
{
    int i, n;
    printf("\n Implementation of Quicksort\nEnter number of elements: ");
    scanf("%d", &n);
    printf("\nEnter %d ELEMENTS: ", n);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    quicksort(1, n);
    printf("After sorting: ");
    for (i = 1; i <= n; i++)
        printf(" %d", a[i]);
    printf("\n");
}