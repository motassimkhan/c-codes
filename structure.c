#include <stdio.h>
#include <string.h>
#define num 100
typedef struct student {
    int id;
    int marks;
    char name[20];
} stu;
stu s1[] = {1,25,"Varun",2,22,"Rohan",3,21,"Ravi",4,25,"Teja"};
int main(){
    printf("%s ", s1[1].name);
    
    return 0;
}
