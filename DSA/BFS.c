#include <stdio.h>
#include <stdlib.h>
int a[30][30], visit[30], n;
void bfs(int i, int node)
{
    int queue[30], front = -1, rear = -1;
    while (1)
    {
        if (visit[i] == 0)
        {
            visit[i] = 1;
            if (i == node)
            {
                printf("\nNode Found ---");
                return;
            }
            for (int j = 1; j <= n; j++)
                if (a[i][j] == 1 && visit[j] == 0)
                    queue[++rear] = j;
        }
        if (front < rear)
            i = queue[front++];
        else
            break;
    }
    printf("\nNode Not found ----");
}

void main()
{
    printf("Implementation of Breadth First Search\n");

    printf("Enter the number of nodes of graph:\n");
    scanf("%d", &n);
    printf("Enter the adjacent matrix(%d elements):\n", n * n);
    for (int i = 1; i <= n; i++)
    {
        visit[i] = 0;
        for (int j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);
    }

    printf("Enter Element To Search:\n");
    int node;
    scanf("%d", &node);
    bfs(1, node);
    printf("\n");
}