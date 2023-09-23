#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int prior(char k)
{
    if (k == '+' || k == '-')
        return 1;
    if (k == '*' || k == '/')
        return 2;
    return 0;
}
// int evaluate(int a, int b, char op)
// {
//     if (op == '+')
//         return a + b;
//     if (op == '-')
//         return a - b;
//     if (op == '*')
//         return a * b;
//     if (op == '/')
//         return a\b;
//     return 0;
// }
void main()
{
    char infix[20], postfix[20], stack[20];
    int i, j = -1, top = -1;
    printf("Enter infix expression:\n");
    scanf("%s", &infix);
    for (i = 0; i < strlen(infix); i++)
    {
        if (isalpha(infix[i]))
            postfix[++j] = infix[i];
        else if (top == -1 || prior(infix[i]) > prior(stack[top]))
            stack[++top] = infix[i];
        else if (prior(infix[i]) < prior(stack[top]))
        {
            postfix[++j] = stack[top];
            stack[top] = infix[i];
        }
    }
    while (top >= 0)
    {
        postfix[++j] = stack[top--];
    }
    postfix[++j] = '\n';
    printf("\npostfix form:%s\n", postfix);
}