#include <stdio.h>
/*int main()
{
    char filename[20], new_file[20], contents[20];
    printf("Enter the name of file you want to copy: ");
    scanf("%s",&filename);
    printf("Enter the name of new file: ");
    scanf("%s",&new_file);

    FILE *orig = fopen(filename, "r");
    FILE *copy = fopen(new_file, "w+"); 
    while (fscanf(orig, "%s", contents) == 1)
    {
        fscanf(orig, "%s", contents);
        fputs(contents,copy);
    }
    fclose(orig);
    while(fscanf(copy, "%s", contents) == 1)
    {
        fscanf(copy, "%s", contents);
        printf("%s ",contents);
    }
    return 0;
}*/
#include <stdio.h>
int main()
{
    FILE *pt1 = NULL, *pt2 = NULL;
    char filename[100], copy;
    printf("Enter the name of file you want to copy: ");
    scanf("%s",&filename);
    pt1 = fopen(filename, "r");
    if (pt1 == NULL)
    {
        printf("Unable to open file\n");
        return 1;
    }
    printf("Enter the filename to open: ");
    scanf("%s", &filename);
    pt2 = fopen(filename, "w");
    copy = fgetc(pt1);
    while (copy == 1)
    {
        fputc(copy,pt2);
        copy = fgetc(pt1);
    }
    printf("File Copied\n");
    fclose(pt1);
    fclose(pt2);
    return 0;
}