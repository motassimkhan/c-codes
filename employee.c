#include <stdio.h>
int main() {
    int var[10] = {10,20,11,2,43,118,65,434,34};
    int *ptr;
    ptr = &var[0];
    // printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", &var);
    printf("Value of ptr: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);
    // *ptr = 20;
    // printf("Value of var after updating through pointer: %d\n", var);
    return 0;
}