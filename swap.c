#include <stdio.h>
typedef int *intptr;
int swap(intptr a, intptr b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("After swapping\nFirst number = %d\nSecond number = %d", a, b);
    return 0;
}