#include <stdio.h>
void input_elements(int array[50][50], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter the element in row %d and column %d: ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }
}
void print_matrix(int arr[50][50], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr1[50][50], arr2[50][50];
    int arr1_rows, arr1_columns, arr2_rows, arr2_columns;
    printf("Enter the size of first matrix ( rows columns ): ");
    scanf("%d%d", &arr1_rows, &arr1_columns);
    printf("Enter the size of second matrix ( rows columns ): ");
    scanf("%d%d", &arr2_rows, &arr2_columns);
    if (arr1_rows == arr2_rows && arr1_columns == arr2_columns)
    {
        printf("\tMatrix 1:\n");
        input_elements(arr1, arr1_rows, arr1_columns);
        printf("\tMatrix 2: \n");
        input_elements(arr2, arr2_rows, arr2_columns);
        int sum_matrix[50][50];
        for (int i = 0; i < arr1_rows; i++)
        {
            for (int j = 0; j < arr1_columns; j++)
            {
                sum_matrix[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
        printf("\nResultant Matrix:\n");
        print_matrix(sum_matrix, arr1_rows, arr1_columns);
    }
    else
        printf("Matrix addition is not possible\n");

    return 0;
}