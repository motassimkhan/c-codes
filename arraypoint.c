#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6};
    printf("the address of 1st element of array: %d\n",arr);
    printf("the address of 1st element of array: %d\n",&arr[0]);
    printf("the address of 1st element of array: %d\n",*(&arr[0]));
    printf("the address of 2nd element of array: %d\n",arr+1);
    printf("the address of 2nd element of array: %d\n",&arr[1]);
    printf("the address of 2nd element of array: %d\n",*(&arr[1]));
    return 0;
}