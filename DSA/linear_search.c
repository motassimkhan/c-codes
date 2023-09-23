#include <stdio.h>
void main()
{
    int a[50] = {65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80}, ele, i;
    printf("\nImplementation of linear search algorithm\nArray:");
    for(i=0; i<16; i++) printf("  %d", a[i]);
    printf("\nEnter the element to search: ");
    printf("\nEnter element to search: ");
    scanf("%d",&ele);
    for(i=0; i<16; i++){
        if (a[i] == ele){
            printf("Element found at position %d\n",i+1);
            return;
        }
    }
}