#include <stdio.h>
int main() {
   int rows, c = 1, space, i, j;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 0; i < rows; i++) {
      for (space = 1; space <= rows - i; space++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            c = 1;
         else
            c = c * (i - j + 1) / j;
         printf("%4d", c);
      }
      printf("\n");
   }
   return 0;
}
/*
#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, dis, root1, root2;
    printf("From a Quadratic equation of form ax^2 + bx + c = 0\n");
    printf("Enter the value of a: ");
    scanf("%lf", &a);
    printf("Enter the value of b: ");
    scanf("%lf", &b);
    printf("Enter the value of c: ");
    scanf("%lf", &c);
    dis = b * b - 4 * a * c;
    if (dis > 0)
    {
        root1 = (-b + sqrt(dis)) / (2 * a);
        root2 = (-b - sqrt(dis)) / (2 * a);
        printf("Roots are Real And Distinct\nRoot1 = %.2lf\nRoot2= %.2lf ", root1, root2);
    }
    else if (dis == 0)
    {
        root1 = -b / (2 * a);
        printf("Roots are Real And Equal\nRoots= %.2lf , %.2lf", root1, root1);
    }
    else
    {
        printf("Roots Are IMAGINARY\n");
    }
    return 0;
}*/