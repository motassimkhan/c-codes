#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    int rec;
    char c[100];
    ptr = fopen("new.txt", "w+");
    fprintf(ptr, "this is a sample file to print entered number of records from a file");
    rewind(ptr);
    printf("Enter the number of records to print: ");
    scanf("%d",&rec);
    for (int i = 0; i < rec; i++) 
    {
        fscanf(ptr, "%s", c);
        printf("%s ", c);
    }
    return 0;
}