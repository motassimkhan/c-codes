#include <stdio.h>
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    int arr[50], size, i, j, temp;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter the Elements: \n");
    for (i = 0; i < size; i++)

        scanf("%d", &arr[i]);

    for (i = 0; i < size; i++)
    {

        for (j = 0; j < size - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
    printf("\nSorted Array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%3d", arr[i]);
    }
}
