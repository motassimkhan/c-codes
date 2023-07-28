// #include <stdio.h>

// int main() {
//     FILE *file_ptr;
//     char filename[] = "example.txt";
//     int position;

//     // Open the file for reading and writing
//     file_ptr = fopen(filename, "w+");

//     // Check if the file was opened successfully
//     if (file_ptr == NULL) {
//         printf("Failed to open file.\n");
//         return 1;
//     }

//     // Write some text to the file
//     fprintf(file_ptr, "This is some text.");

//     // Get the current position in the file
//     position = ftell(file_ptr);
//     printf("Current position in file after entering text: %d\n", position);

//     // Move the file pointer to the beginning of the file
//     rewind(file_ptr);
//     position = ftell(file_ptr);
//     printf("Position after rewind: %d\n",position);
//     // Read the text from the file
//     char buffer[100];
//     fgets(buffer, 100, file_ptr);
//     printf("Text from file: %s\n", buffer);

//     //Final position of file pointer
//     position = ftell(file_ptr);
//     printf("Position after reading text: %d\n",position);

//     // Move the file pointer to the end of the file
//     fseek(file_ptr, 0, SEEK_END);

//     // Write some more text to the file
//     fprintf(file_ptr, "\nThis is some more text.");



//     // Close the file
//     fclose(file_ptr);

//     return 0;
// } 
#include <stdio.h>
int main() {
    FILE *file_ptr;
    char filename[] = "example.txt";
    int position;
    file_ptr = fopen(filename, "w+");
    if (file_ptr == NULL) {
        printf("Failed to open file.\n");
        return 1;
    }
    fprintf(file_ptr, "This is some text.");
    position = ftell(file_ptr);
    printf("Current position in file after entering text: %d\n", position);
    rewind(file_ptr);
    position = ftell(file_ptr);
    printf("Position of file pointer after rewind: %d\n",position);
    char buffer[100];
    fgets(buffer, 100, file_ptr);
    printf("Text from file: %s\n", buffer);
    position = ftell(file_ptr);
    printf("Position of file pointer after reading text: %d\n",position);
    fseek(file_ptr, 0, SEEK_END);
    fprintf(file_ptr, "\nThis is some more text.");
    position = ftell(file_ptr);
    printf("Position of file pointer after adding text: %d",position);
    fclose(file_ptr);
    return 0;
} 