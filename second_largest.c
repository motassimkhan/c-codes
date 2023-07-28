#include <stdio.h>

void SecMax(int a[], int n){
    int max1 = -1, max2 = -1;
    for (int i = 0; i < n; i++)
    {
        if(a[i] > max1){
            max2 = max1;
            max1 = a[i];
        }
        
        else if (a[i] > max2 && a[i] < max1)
        {
            max2 = a[i];
        }   
    }
    printf("The second maximum element is: %d\n", max2);

}

int main(){
    int a[50], i, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    SecMax(a,n);
    return 0;
}