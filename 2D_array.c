#include <stdio.h>
int main(){
    int i,j; int a[2][3]={{1, 2, 3}, {4, 5, 6}};
    for (i=0;i<3;i++){
        printf(" +++ ");
        for (j=0;j<4;j++){
            printf("--%d--",a[i][j]);
        }
    }
//    printf(" %d",a[0][0]);
}