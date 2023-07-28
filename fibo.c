#include <stdio.h>
int fibo(int N)
{
    if (N == 0)
        return 0;
    if (N == 1)
        return 1;
    else
        return(fibo(N - 1) + fibo(N - 2));
}
int main()
{
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    printf("   The fibbonachi series from 0 to %d : \n",N);
    for (int i = 0; i <= N; i++)
    {
        printf("%d ", fibo(i));
    }
    return 0;
}