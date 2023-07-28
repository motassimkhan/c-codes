#include<stdio.h>

/* Prints a horizontal histogram of the lengths of words */

#define MAX_WORDS 100
#define IN 1
#define OUT 0

void main()
{
 int c, length, wordn, i, j, state, lengths[MAX_WORDS];
 wordn = length = 0;
 state = OUT;
 for (i = 0; i < MAX_WORDS; ++i) lengths[i] = 0;

 while ((c = getchar()) != EOF && wordn < MAX_WORDS)
 {
    if (c == ' ' || c == '\t' || c == '\n')
        state = OUT;

    else if (wordn == 0) 
        {
         state = IN;
         ++wordn;
         ++length;
        }

    else if (state == IN)
         ++length;

    else if (state == OUT)
        {
         lengths[wordn] = length;
         ++wordn;
         length = 1;
         state = IN;
        }
 }    

 lengths[wordn] = length;

 for (i = 1; i <= wordn; ++i)
    {
     printf("%3d: ",i);
     for (j = 0; j < lengths[i]; j++)
        putchar('-');
    putchar('\n');
    }
}