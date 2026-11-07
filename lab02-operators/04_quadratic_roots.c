/*
 * Lab 2.4: Quadratic equation roots
 * Prints the real or complex roots of a*x*x + b*x + c = 0.
 * Original lab date: 2023-11-16
 * Written with help from a tutorial video (source not recorded).
 * Review (2026): a = 0 is rejected instead of dividing by zero.
 * Review (2026-11): input is validated; the discriminant uses long long; the
 * imaginary part always prints as a positive number and -0.00 no longer
 * appears.
 * Final review (2026-11): when a and c are both very large, the intermediate
 * step 4*a*c or the final b*b - 4*a*c can overflow long long (e.g.
 * 2147483647 0 2147483647), so those inputs are rejected; -b is computed as a
 * double so b = -2147483648 works.
 * Link with -lm on Linux.
 */
#include <limits.h>
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

    /* b*b and a*c always fit in a long long, but 4*a*c and the difference
       b*b - 4*a*c may not. Reject the inputs where they would overflow. */
    long long bb = (long long)b * b;
    long long ac = (long long)a * c;
    if (ac > LLONG_MAX / 4 || ac < LLONG_MIN / 4 || (ac < 0 && bb > LLONG_MAX + 4 * ac))
    {
        printf("These values are too large: 4*a*c or b*b - 4*a*c would not fit in a long long.\n");
        return 1;
    }

    long long d = bb - 4 * ac;
    double minusB = -(double)b; /* -b as an int overflows when b = INT_MIN */
    double twoA = 2.0 * a;

    if (d < 0)
    {
        double real = clean_zero(minusB / twoA);
        double imag = fabs(sqrt((double)-d) / twoA);
        printf("First root = %.2f + i%.2f\n", real, imag);
        printf("Second root = %.2f - i%.2f\n", real, imag);
    }
    else
    {
        double root1 = clean_zero((minusB + sqrt((double)d)) / twoA);
        double root2 = clean_zero((minusB - sqrt((double)d)) / twoA);
        printf("First root = %.2f\n", root1);
        printf("Second root = %.2f\n", root2);
    }

    return 0;
}
