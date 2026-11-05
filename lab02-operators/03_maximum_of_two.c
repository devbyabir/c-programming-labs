/*
 * Lab 2.3: Maximum of two numbers
 * Prints the larger of two integers using the ?: operator.
 * Original lab date: 2023-11-16
 * Review (2026-11): input is validated.
 */
#include <stdio.h>

int main(void)
{
    int num1, num2, maximum;

    printf("Enter the first number: ");
    if (scanf("%d", &num1) != 1)
    {
        printf("Invalid input: enter an integer.\n");
        return 1;
    }
    printf("Enter the second number: ");
    if (scanf("%d", &num2) != 1)
    {
        printf("Invalid input: enter an integer.\n");
        return 1;
    }

    maximum = (num1 > num2) ? num1 : num2;
    printf("\nThe maximum number is: %d\n", maximum);

    return 0;
}
