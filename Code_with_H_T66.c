#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *read = NULL;
    char str[100];
    read = fopen("letter.txt", "r");
    for (int i = 0; i < 14; i++)
    {
        gets(str, 20, read);
        if (strcmp(str, "name") == 0)
        {
            printf("Enter your name: ");
            scanf("%s", &str);
        }
        if (strcmp(str, "{{outlet}}") == 0 || strcmp(str, "{{outlet}}.") == 0 )
        {
            strcpy(str,"Bestmart - Rehab.");
        }
        printf("%s ", str);
    }
    return 0;
}