#include <stdio.h>
void input_elements(int array[100][100], int rows, int columns)
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
void print_matrix(int arr[100][100], int rows, int columns)
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
    int a[100][100], b[100][100], c[100][100], i, j, k, n, m, p, q;
    printf("Enter first matrix size: \n");
    scanf("%d%d", &m, &n);
    printf("Enter second matrix size: \n");
    scanf("%d%d", &p, &q);
    if (n != p)
        printf("Not compatible,Multiplication is not possible\n");
    else
    {
        printf("\tMatrix 1:\n");
        input_elements(a, m, n);
        printf("\n\tMatrix 2:\n");
        input_elements(b, p, q);
        printf("\nProduct of 2 matrices is :\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < n; k++)
                    c[i][j] += a[i][k] * b[k][j];
            }
        }
        print_matrix(c, p, n);
    }
    return 0;
}