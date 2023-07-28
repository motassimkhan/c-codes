#include <stdio.h>
int main()
{
    int top = -1,count = 0,n,stack[100];
    scanf("%d",&n);
    stack[n];
    do {
        scanf("%d", &stack[count++]);
    } while (getchar() != '\n' && count < n);
    if(top == -1)
        printf("Underflow State: Stack already empty, can't remove any element\n");
    else{
        int x = stack[top];
        printf("Popping %d out of the stack\n", x);
        top-=1;
        return x;
    }
    return -1;
    return 0;
}