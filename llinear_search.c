#include <stdio.h>
int linser(int array[20], int size){
    int ele, c=0;
    printf("Enter the element to search: ");
    scanf("%d",&ele);
    for (int i = 0;i<=size;i++){
        if (array[i] == ele){
            printf("Element found on position %d\n", i);
            c++;
        }
    }
    if (c == 0) printf("Element not found \n");
}
int main()
{
    int size, i, array[] = {12,34,27,99,54,37,81,24,86,14,75};
    linser (array, size);
    return 0;
}