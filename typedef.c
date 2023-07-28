#include <stdio.h>
int main()
{
    //typedef int* i;
    int *a, b;
    int c=0;
    a=&c;
    printf("%d",*a);
    return 0;
}