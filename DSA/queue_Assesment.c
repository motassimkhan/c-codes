#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int queue[n];
    for (int i = 0; i<n;i++){
        scanf("%d",&queue[i]);
    }
    for (int i = 0; i< n ; i++){
        queue[i] = queue[i+1];
    }
    n--;
    for(int i = 0; i < n; i++){
        printf("%d ",queue[i]);
    }
    return 0;
}