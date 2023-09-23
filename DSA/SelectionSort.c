#include <stdio.h>
void main() {
    int a[50], i, j, n, temp, select;
    printf("\nSelection Sort\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++) {
        select = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[select]) {
                select = j;
            }
        }
        if (select != i) {
            temp = a[i];
            a[i] = a[select];
            a[select] = temp;
        }
    }
    printf("\nSorted elements: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
}