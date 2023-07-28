/*#include <stdio.h>
int main()
{
    char string[20];
    int number_of_strings = 0;
    FILE *ptr = NULL;
    ptr = fopen("Sample22.txt", "a+");
    //fprintf(ptr, "%s %s %s %d","The","year","is",2023);
    printf("\nContents of the file: \n");
    while (fscanf(ptr, "%s", string) == 1)
    {
        number_of_strings++;
        printf("%s ",string);
    }
    printf("\nThe number of strings in the file sample.txt are %d\n", number_of_strings);
    fclose(ptr);
    return 0;
}
#include <stdio.h>

int main()
{
    char string[20];
    int number_of_strings = 0;
    FILE *ptr = NULL;

    ptr = fopen("Sample123.txt", "r");
    if (ptr == NULL) {
        printf("Unable to open file");
        return 1;
    }

    printf("\nContents of the file: \n");
    while (fscanf(ptr, "%s", string) == 1)
    {
        number_of_strings++;
        printf("%s ",string);
    }
    printf("\n\nThe number of strings in the file sample.txt are %d\n", number_of_strings);

    fclose(ptr);
    return 0;
}*/
#include <stdio.h>

int main() {
    char string[20];
    int number_of_strings = 0;
    FILE *ptr = NULL;
    ptr = fopen("Sample.txt", "r");
    if (ptr == NULL) {
        printf("Error opening file.");
        return 1;
    }
    fprintf(ptr, "This is a sample file for program testing.");
    rewind(ptr);
    printf("Contents of the file:\n");
    while (fscanf(ptr, "%s", string) == 1) {
        number_of_strings++;
        printf("%s ", string);
    }
    printf("\n\nThe number of strings in the file Sample.txt is %d.\n", number_of_strings);
    fclose(ptr);
    return 0;
}