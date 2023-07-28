#include <stdio.h>
int main()
{
    int count =0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            count++;
            printf("count = %d\n",count);
        }
        
    }
    return 0;
}