/*
 * Lab 3.6: Factorial
 * Computes n! for a non-negative integer n.
 * Original lab date: 2023-11-22
 * Review (2026): n > 20 overflowed silently; it is now rejected.
 */
#include <stdio.h>
int main()
{
    int n, i;
    unsigned long long facto = 1;
    printf("Enter an non-negative Integer: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else if (n > 20) /* Review fix: 21! does not fit in unsigned long long */
        printf("Error! This program supports n up to 20.");
    else
    {
        for (i = 1; i <= n; ++i)
        {
            facto *= i;
        }
        printf("Factorial of %d = %llu", n, facto);
    }

    return 0;
}
