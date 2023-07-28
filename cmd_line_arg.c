#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("Program name is: %s\n", argv[0]);
    if (argc >= 2)
    {
        printf("Arguments passed: ");
        for (int i = 1; i < argc; i++)
        {
            printf("%s\n", argv[i]);
        }
    }
    else printf("No extra arguments were passed.\n");
    return 0;
}
