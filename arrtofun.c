#include <stdio.h>
void printarray(int arr[100]){
    int size = 4;
    printf("Array:\n");
    for (int i = 0; i < size; i++){
        printf("%d\n",arr[i]);
    }
}
int main()
{
    int array[] = {1,2,3,4};
    //array passed in function
    printarray(array);
    return 0;
}