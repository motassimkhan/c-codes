/*#include <stdio.h>
int main()
{
    int A[100], g[100], size;
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &A[i]);
    }
    g[0] = -1;
    for (int i = 1; i < size; i++)
    {
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (A[j] < A[i])
            {
                A[j] = g[i];
                break;
            }
        }
        if (j == -1)
        {
            g[i] = -1;
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", g[i]);
    }
    return 0;
}



/*
#include <stdio.h>

void printPrevSmaller(int arr[], int n)
{
    printf("%d ",-1);
    for (int i = 1; i < n; i++) {
        int j;
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] < arr[i]) {
                printf("%d ",arr[j]);
                break;
            }
        }
        if (j == -1)
            printf("%d ",-1);
    }
}
int main()
{
    int arr[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    printPrevSmaller(arr, n);
    return 0;
}
*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] > arr[j])
        {
            printf("%d ", arr[j]);
            j--;
        }
        else
        {
            printf("%d ", arr[i]);
            i++;
        }
    }
    return 0;
}