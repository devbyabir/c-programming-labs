/*
 * Lab 2.3: Maximum of two numbers
 * Prints the larger of two integers using the ?: operator.
 * Original lab date: 2023-11-16
 * Review (2026-11): input is validated.
 */
#include "../include/lab_input.h"
#include <stdio.h>

int main(void)
{
    int num1, num2, maximum;

    printf("Enter the first number: ");
    if (!lab_read_int(&num1))
    {
        printf("Invalid input: enter an integer.\n");
        return 1;
    }
    printf("Enter the second number: ");
    if (!lab_read_int(&num2))
    {
        printf("Invalid input: enter an integer.\n");
        return 1;
    }

    maximum = (num1 > num2) ? num1 : num2;
    printf("\nThe maximum number is: %d\n", maximum);

    return 0;
}
