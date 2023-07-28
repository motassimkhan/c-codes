#include <stdio.h>
int main()
{
    FILE *ptr =NULL;
    char s[100] = "This content is through the code writing\n";
    //******Reading a file**********
    // ptr = fopen("myfile.txt","r");
    // fscanf(ptr, "%s", s);
    // printf(" %s\n ",s);

    //******writing a file**********
    ptr = fopen("myfile.txt","a");
    fprintf(ptr, "%s", s);

    return 0;
}
