/*
 * Lab 3.1: Even or odd
 * Reports whether an integer is even or odd.
 * Original lab date: 2023-11-22
 * Review (2026-11): input is validated.
 */
#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter an Integer Number: ");
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input: enter an integer.\n");
        return 1;
    }

    if (number % 2 == 0)
        printf("%d is Even.\n", number);
    else
        printf("%d is Odd.\n", number);

    return 0;
}
