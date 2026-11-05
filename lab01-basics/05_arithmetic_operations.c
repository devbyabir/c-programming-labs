/*
 * Lab 1.5: Arithmetic operations
 * Reads two integers and prints their sum, difference, product and quotient.
 * Original lab date: 2023-11-15
 * Review (2026): a zero divisor is reported instead of divided by.
 * Review (2026-11): input is validated; results use long long so they cannot
 * overflow.
 */
#include <stdio.h>

int main(void)
{
    int number1, number2;

    printf("Enter First number: ");
    if (scanf("%d", &number1) != 1)
    {
        printf("Invalid input: enter an integer.\n");
        return 1;
    }
    printf("Enter Second number: ");
    if (scanf("%d", &number2) != 1)
    {
        printf("Invalid input: enter an integer.\n");
        return 1;
    }

    long long addition = (long long)number1 + number2;
    long long subtraction = (long long)number1 - number2;
    long long multiplication = (long long)number1 * number2;

    printf("\nAddition is : %lld\n", addition);
    printf("Subtraction is : %lld\n", subtraction);
    printf("Multiplication is : %lld\n", multiplication);
    /* Review fix: avoid dividing by zero */
    if (number2 != 0)
    {
        double division = (double)number1 / number2;
        printf("Division is : %f\n", division);
    }
    else
    {
        printf("Division is : undefined (cannot divide by zero)\n");
    }

    return 0;
}
