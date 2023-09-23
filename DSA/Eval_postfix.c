#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int evaluate(int a, int b, char op){
    if(op == '+') return a+b;
    if(op == '-') return a-b;
    if(op == '*') return a*b;
    if(op == '/') return a/b;
    return 0;
}
void main(){
    char postfix[20];
    int s[10], t = -1, value;
    printf("\nEnter the Postfix Expression: ");
    scanf("%s", &postfix);
    for(int i = 0; i<strlen(postfix); i++)
    if(isalpha(postfix[i])){
        printf("\nEnter the value of %c: ", postfix[i]);
        scanf("%d",&value);
        ++t;
        s[t] = value;
    }
    else{
    s[t-1] = evaluate(s[t-1],s[t],postfix[i]);
    t--;
    }
    printf("\nThe Result is : %d\n", s[0]);
}
