#include <stdio.h>
#include <string.h>
union student{
    int ID;
    float marks;
} Ayan;
int main()
{
    Ayan.ID = 3083;
    printf("Aryan's ID:  %d\n", Ayan.ID);
    Ayan.marks = 87.5;
    printf("Aryan's Marks:  %.2f\n", Ayan.marks);
    return 0;
}