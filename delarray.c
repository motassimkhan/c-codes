#include <stdio.h>
int main()
{
    int arr[50];
    int ele, i, size;
    printf(" \n Enter the number of elements in an array:  ");
    scanf(" %d", &size);
    for (i = 0; i < size; i++)
    {
        printf(" enter element %d: ", i + 1);
        scanf(" %d", &arr[i]);
    }
    printf(" emter element you want to delete:  ");
    scanf(" %d", &ele);
    for (int j = 0; j < size; j++)
    {
        if (arr[j] == ele)
        {
            for (i = j; i < size; i++)
            {
                arr[i] = arr[i + 1];
            }
        }
    }
    printf("Element is deleted\n");
    for (int a = 0; a < size - 1; a++)
    {
        printf("%-4d", arr[a]);
    }
}/*
#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[50];
    int pos, i, num;
    printf(" \n Enter the number of elements in an array: \n ");
    scanf(" %d", &num);

    printf(" \n Enter %d elements in array: \n ", num);
    for (i = 0; i < num; i++)
    {
        printf(" arr[%d] = ", i);
        scanf(" %d", &arr[i]);
    }
    printf(" Define the position of the array element where you want to delete: \n ");
    scanf(" %d", &pos);
    if (pos >= num + 1)
    {
        printf(" \n Deletion is not possible in the array.");
    }
    else
    {
        for (i = pos - 1; i < num - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        printf(" \n The resultant array is: \n");
        for (i = 0; i < num - 1; i++)
        {
            printf(" arr[%d] = ", i);
            printf(" %d \n", arr[i]);
        }
    }
    return 0;
}*/