/*
 * Lab 2.4: Quadratic equation roots
 * Prints the real or complex roots of a*x*x + b*x + c = 0.
 * Original lab date: 2023-11-16
 * Written with help from a tutorial video (source not recorded).
 * Review (2026): a = 0 is rejected instead of dividing by zero.
 * Limit: b*b - 4*a*c must fit in an int. Link with -lm on Linux.
 */
#include <stdio.h>
#include <math.h>
int main()
{
      int a, b, c, d;
      double root1, root2;

      printf("Enter the value of a, b and c where a*x*x + b*x + c = 0\n");
      scanf("%d%d%d", &a, &b, &c);

      /* Review fix: a = 0 would divide by zero below */
      if (a == 0)
        {
        printf("Not a quadratic equation: a must not be 0.\n");
        return 1;
        }

      d = b*b - 4*a*c;

      if (d < 0)
        {
        printf("First root = %.2lf + i%.2lf\n", -b/(double)(2*a), sqrt(-d)/(2*a));
        printf("Second root = %.2lf - i%.2lf\n", -b/(double)(2*a), sqrt(-d)/(2*a));
        }
      else
        {
        root1 = (-b + sqrt(d))/(2*a);
        root2 = (-b - sqrt(d))/(2*a);

        printf("First root = %.2lf\n", root1);
        printf("Second root = %.2lf\n", root2);
        }
      return 0;
}
