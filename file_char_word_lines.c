#include <stdio.h>
#include <stdlib.h>
int main() {
    char filename[100], word[20];
    FILE *ptr;
    int character_count = 0, word_count = 0, line_count = 0;
    printf("Enter the filename: ");
    scanf("%s", filename);
    ptr = fopen(filename, "r");
    if (ptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    char c = fgetc(ptr);
    while (c != EOF) {
        character_count++;
        if (c == '\n') {
            line_count++;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            word_count++;
        }
        c = fgetc(ptr);
    }
    if (character_count > 0) {
        word_count++;
        line_count++;
    }
    fclose(ptr);
    printf("Number of Characters: %d\n", character_count);
    printf("Number of Words: %d\n", word_count);
    printf("Number of Lines: %d\n", line_count);
    return 0;
}