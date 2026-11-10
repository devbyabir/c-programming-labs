/*
 * Lab 3.6: Factorial
 * Computes n! for a non-negative integer n.
 * Original lab date: 2023-11-22
 * Review (2026): n > 20 overflowed silently; it is now rejected.
 * Review (2026-11): input is validated.
 */
#include "../include/lab_input.h"
#include <stdio.h>

int main(void)
{
    int n;
    unsigned long long facto = 1;

    printf("Enter a non-negative Integer: ");
    if (!lab_read_int(&n))
    {
        printf("Invalid input: enter an integer.\n");
        return 1;
    }

    if (n < 0)
    {
        printf("Error! Factorial of a negative number doesn't exist.\n");
        return 1;
    }
    else if (n > 20) /* Review fix: 21! does not fit in unsigned long long */
    {
        printf("Error! This program supports n up to 20.\n");
        return 1;
    }
    else
    {
        for (unsigned int i = 1; i <= (unsigned int)n; ++i)
        {
            facto *= i;
        }
        printf("Factorial of %d = %llu\n", n, facto);
    }

    return 0;
}
