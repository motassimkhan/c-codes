#include <stdio.h>
int main()
{
    int ch, a;
    while (1)
    {
        printf("\n\n-----Program to understand pointers\n\t1.Pointer\n\t2.Pointer arithmetic\n\t3.Double pointers\n\t4.EXIT");
        printf("\nEnter Your Choice: ");
        scanf("%d", &ch);
        if (ch == 1)
        {
            printf("\n\tPointer:\n\tA pointer is a variable that stores the memory address of another variable as its value");
            printf("\n\tFor example, enter a number: ");
            scanf("%d", &a);
            int *ptr = &a;
            printf("\nThe number entered is stored at a memory location in the computer memory.\nThat memory location is now stored in the pointer *ptr. \nThe value of *ptr is %d which is the address of the variable in which the entered number is stored.", *ptr);
        }
        if (ch == 2)
        {
            printf("\nIn C, when you perform arithmetic operations on a pointer, the value of the pointer is modified by adding or subtracting an integer value. This integer value represents the number of memory locations (bytes) to move forward or backward from the current pointer location. Here are some examples of pointer arithmetic in C");
        }
        if (ch == 4)
        {
            break;
        }
    }
}