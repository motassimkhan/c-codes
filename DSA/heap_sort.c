#include <stdio.h>
#include <stdlib.h>

int a[100];
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void maxheap(int n)
{
    for (int i = 1; i <= n; i++)
        for (int j = i; j > 1; j = j / 2)
            if (&a[j] < &a[j / 2])
                swap(&a[j], &a[j / 2]);
            else
                break;
}

void main()
{
    int i, n;
    printf("MAXHEAP\n\n");
    printf("Enter number of elements:");
    scanf("%d", &n);
    printf("Enter %d elements: \n", n);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    maxheap(n);
    printf("\nMaxheap contains : \n");
    for (i = 1; i <= n; i++)
        printf("  %d", a[i]);
    printf("\n");
}