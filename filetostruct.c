#include <stdio.h>
#include <string.h>
struct books{
    char book_name[20];
    char publisher[20];
    int yop;
    float price;
};
int main()
{
    FILE *B;
    struct books s;
    printf("Enter book name:");
    gets(s.book_name);
    printf("Enter publisher name:");
    gets(s.publisher);
    printf("Enter year & price:");
    scanf("%d%f",&s.yop,&s.price);
    B = fopen("books.txt", "a+");
    fprintf(B,"%s %s %d %.2f\n", s.book_name, s.publisher, s.yop, s.price);
    printf("Data successfully added to the file books.txt\n");
    rewind(B);
    printf("The contents of the file books.txt are:\n");
    char c = fgetc(B);
    while (c != EOF) {
        putchar(c);
        c = fgetc(B);
    }
    fclose(B);
    return 0;
}