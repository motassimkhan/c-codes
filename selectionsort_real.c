#include <stdio.h>
void selectionSort(int numbers[], int array_size)
{
    int i, j, T, min, count;
    for (i = 0; i < array_size; i++)
    {
        min = i;
        for (j = i + 1; j < array_size; j++)
        {
            if (numbers[j] < numbers[min])
            {
                min = j;
            }
        }
        T = numbers[min];
        numbers[min] = numbers[i];
        numbers[i] = T;
    }
}
int main()
{
    int i, size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int array[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d", &array[i]);
    }
    selectionSort(array, size);
    printf("\n\tSorted Array:\n");
    for (i = 0; i < size; i++)
    {
        printf(" %d ", array[i]);
    }
    return 0;
}