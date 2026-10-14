/*
 * Lab 5.1: Arithmetic with functions
 * Adds, subtracts, multiplies and divides two integers using functions that return values.
 * Original lab date: 2023-11-29
 * Written by Abir Ahmmed (moved here from the program's printed output).
 * Review (2026): a zero divisor is reported instead of divided by.
 */
#include <stdio.h>
    int add(int a, int b);
    int subtract(int a, int b);
    int multiply(int a, int b);
    float divide(int a, int b);
int main()
{
    int num1, num2;

    printf("Enter First Number: ");
    scanf("%d", &num1);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    printf("Addition: %d\n", add(num1, num2));
    printf("Subtraction: %d\n", subtract(num1, num2));
    printf("Multiplication: %d\n", multiply(num1, num2));
    /* Review fix: avoid dividing by zero */
    if (num2 != 0)
        printf("Division: %f\n", divide(num1, num2));
    else
        printf("Division: undefined (cannot divide by zero)\n");
    return 0;
}

    int add(int a, int b)
    {
    return a + b;
    }

    int subtract(int a, int b)
    {
        return a - b;
    }

    int multiply(int a, int b)
    {
        return a * b;
    }

    float divide(int a, int b)
    {
        return (float)a / b;
    }
