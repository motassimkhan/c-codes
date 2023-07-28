//Q] write a c program to insert an element into an array at any given position
#include <stdio.h>
int main(){
    int position,index,element,i,a,array[10]={10,11,12,12,14,15,16,17,18,19};
    printf("\n Array Before Inserting element :\n") ;
    for (  i = 0 ; i < 10 ; i++){
        printf("%d  ",array[i]) ;
    }
    printf("\nEnter position of element: ");
    scanf("%d",&position);
    printf("\nEnter element number:");
    scanf("%d",&element);
    index=position-1;
    for (i=0;i<=position;i++){
        if (i==index)
        array[i]=element;
    }
    printf("\n Array After Inserting element :\n") ;
    for (  i = 0 ; i < 10 ; i++){
        printf("%d  ",array[i]) ;
    }
    return 0;
}