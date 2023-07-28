#include <stdio.h>
int main()
{
    int a[100], n, i, j, position, swap;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter the elements: \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        position = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[position] > a[j])
                position = j;
        }
        if (position != i)
        {
            swap = a[i];
            a[i] = a[position];
            a[position] = swap;
        }
    }
    printf("Sorted Array: \n");
    for (i = 0; i < n; i++)
        printf("%d  ", a[i]);
    return 0;
}/*
// C program for implementation of selection sort
#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int size)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < size - 1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < size; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element with the first element
        if (min_idx != i)
            swap(&arr[min_idx], &arr[i]);
    }
}

// Function to print an array 
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
void inputarray(int a[],int size){
    printf("Enter the size of array: ");
    scanf("%d",&size);
    for (int i=0;i<size;i++){
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }
}
int main()
{
    int n,arr[100];
    inputarray(arr,n);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
*/