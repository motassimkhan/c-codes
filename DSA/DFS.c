#include <stdio.h>
#include <stdlib.h>
int a[30][30], visit[30], n;
void dfs(int i, int node)
{
    int stack[30], top = -1;
    while (1)
    {
        if (visit[i] == 0)
        {
            visit[i] = 1;
            if (i == node)
            {
                printf("\nNode Found----\n");
                return;
            }
            for (int j = 1; j <= n; j++)
                if (a[i][j] == 1 && visit[j] == 0)
                    stack[++top] = j;
        }
        if (top >= 0)
            i = stack[top--];
        else
            break;
    }
    printf("\nNode Not Found ----\n");
}

void main()
{
    printf("Implementation of Septh First Search\n");
    printf("Enter the number of nodes of graph:\n");
    scanf("%d", &n);
    printf("Enter the adjacent matrix(%d elements):\n", n * n);
    for (int i = 1; i <= n; i++)
    {
        visit[i] = 0;
        for (int j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Enter the node to search : ");
    int node;
    scanf("%d", &node);
    dfs(1, node);
    printf("\n");
}