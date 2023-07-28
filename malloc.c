#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(3 * sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the element %d of array: ",i+1);
        scanf("%d",&ptr[i]);
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("\n array: \n %d",ptr[i]);
       
    }
    
    return 0;
}