/*
 * Lab 5.1: Arithmetic with functions
 * Adds, subtracts, multiplies and divides two integers using functions that
 * return values.
 * Original lab date: 2023-11-29
 * Written by Abir Ahmmed (moved here from the program's printed output).
 * Review (2026): a zero divisor is reported instead of divided by.
 * Review (2026-11): input is validated; the functions return long long and
 * double so results cannot overflow or lose precision.
 */
#include "../include/lab_input.h"
#include <stdio.h>

long long add(int a, int b);
long long subtract(int a, int b);
long long multiply(int a, int b);
double divide(int a, int b);

int main(void)
{
    int num1, num2;

    printf("Enter First Number: ");
    if (!lab_read_int(&num1))
    {
        printf("Invalid input: enter an integer.\n");
        return 1;
    }
    printf("Enter Second Number: ");
    if (!lab_read_int(&num2))
    {
        printf("Invalid input: enter an integer.\n");
        return 1;
    }

    printf("Addition: %lld\n", add(num1, num2));
    printf("Subtraction: %lld\n", subtract(num1, num2));
    printf("Multiplication: %lld\n", multiply(num1, num2));
    /* Review fix: avoid dividing by zero */
    if (num2 != 0)
        printf("Division: %f\n", divide(num1, num2));
    else
        printf("Division: undefined (cannot divide by zero)\n");

    return 0;
}

long long add(int a, int b)
{
    return (long long)a + b;
}

long long subtract(int a, int b)
{
    return (long long)a - b;
}

long long multiply(int a, int b)
{
    return (long long)a * b;
}

double divide(int a, int b)
{
    return (double)a / b;
}
