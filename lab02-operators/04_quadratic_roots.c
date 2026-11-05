/*
 * Lab 2.4: Quadratic equation roots
 * Prints the real or complex roots of a*x*x + b*x + c = 0.
 * Original lab date: 2023-11-16
 * Written with help from a tutorial video (source not recorded).
 * Review (2026): a = 0 is rejected instead of dividing by zero.
 * Review (2026-11): input is validated; the discriminant uses long long so it
 * cannot overflow; the imaginary part always prints as a positive number and
 * -0.00 no longer appears. Link with -lm on Linux.
 */
#include <math.h>
#include <stdio.h>

/* Values that print as 0.00 are shown without a minus sign ("-0.00"). */
static double clean_zero(double x)
{
    return (fabs(x) < 0.005) ? 0.0 : x;
}

int main(void)
{
    int a, b, c;

    printf("Enter the value of a, b and c where a*x*x + b*x + c = 0\n");
    if (scanf("%d %d %d", &a, &b, &c) != 3)
    {
        printf("Invalid input: enter three integers.\n");
        return 1;
    }

    /* Review fix: a = 0 would divide by zero below */
    if (a == 0)
    {
        printf("Not a quadratic equation: a must not be 0.\n");
        return 1;
    }

    long long d = (long long)b * b - 4LL * a * c;
    double twoA = 2.0 * a;

    if (d < 0)
    {
        double real = clean_zero(-b / twoA);
        double imag = fabs(sqrt((double)-d) / twoA);
        printf("First root = %.2f + i%.2f\n", real, imag);
        printf("Second root = %.2f - i%.2f\n", real, imag);
    }
    else
    {
        double root1 = clean_zero((-b + sqrt((double)d)) / twoA);
        double root2 = clean_zero((-b - sqrt((double)d)) / twoA);
        printf("First root = %.2f\n", root1);
        printf("Second root = %.2f\n", root2);
    }

    return 0;
}
