#include <stdio.h>
#include <string.h> 
int main(){
    char string1[]="STRING1";
    char string2[]="string2";
    printf("strlen() function: %d\n",strlen(string1));
    printf("strupr() function: %s\n",strupr(string2));
    printf("strlwr() function: %s\n",strlwr(string1));
    printf("strcmp() function: %d\n",strcmp(string1,string2));
    strcat(string1,string2);
    printf("strcat() function: %s\n",string1);
    strcpy(string1,string2);
    printf("strcpy() function: %s\n",string1);
    printf("strrev() function: %s\n",strrev(string1));
    return 0;
}   