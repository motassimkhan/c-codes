#include <stdio.h>
int stack[5], top = -1;
void push(int ele)
{
    if (top == 4)
    {
        printf("\nStack is FULL\n");
        return;
    }
    top++;
    stack[top] = ele;
}
void pop()
{
    if (top == -1)
    {
        printf("\nEmpty Stack\n");
        return;
    }
    printf("\nPopped Element: %d", stack[top]);
    top--;
}

void display()
{
    if (top == -1)
    {
        printf("\nStack Empty\n");
        return;
    }
    printf("\nStack :\n");
    for (int i = top; i >= 0; i--)
        printf("  %d", stack[i]);
}
void main()
{
    int n, ele;
    printf("\nImplementation of Stack using Array\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d Elements: ", n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &ele);
        push(ele);
    }
    display();
    pop();
    printf("\nAfter POP");
    display();
    printf("\n");
}