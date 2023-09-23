#include <stdio.h>
void main(){
    int a[50], i, j, n, temp;
    printf("\nBubble Sort\n");
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements: \n",n);
    for(i=1;i<=n;i++) scanf("%d",&a[i]);
    for(i=1;i<=n;i++){
        for(j=i+1; j<=n;j++){
            if(a[j]<a[i]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    printf("\nAfter Sorting: ");
    for(i=1;i<=n;i++) printf("  %d",a[i]);
    printf("\n");
}