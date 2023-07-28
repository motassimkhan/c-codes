#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    printf("Enter 3rd number:");
    scanf("%d",&c);
    if (a>b && a>c)
    printf("A is greatest");
    if(b>a && b>c)
    printf("B is greatest");
    else printf("C is greatest");
    return 0;
}