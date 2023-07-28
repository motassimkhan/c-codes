#include <stdio.h>
int main(){
    int n;
    float i,sum=0,term=0;
    printf("Enter value of n: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        sum+=1/i;
    }
    printf("Harmonic series sum is: %f ",sum);
}