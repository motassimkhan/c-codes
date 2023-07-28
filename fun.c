#include <stdio.h>
/*void swap(int i, int j)
{
    int temp;
    temp = i;
    i = j;
    j = temp;
    printf("%d\n%d\n", i, j);
}

int main()
{
    int a = 1, b = 2;
    swap(a, b);
    // printf("%d\n%d\n",a,b);
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}*/
int main()
{
    int number = 50;
    int *p;
    p = &number;                                 // stores the address of number variable
    printf("Address of p variable is %x \n", p); // p contains the address of the number therefore printing p gives the address of number.
    printf("Value of p variable is %d \n", *p);  // As we know that * is used to dereference a pointer therefore if we print *p, we will get the value stored at the address contained by p.
    return 0;
}