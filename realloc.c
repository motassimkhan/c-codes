#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(3, sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the element %d of array: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("element %d: %d\n", i, ptr[i]);
    }
    free(ptr);
    ptr = (int *)realloc(ptr, 3*sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the new element %d of array: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("\nRealloc\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\n new %d; %d\n",i, ptr[i]);
    }

    return 0;
}