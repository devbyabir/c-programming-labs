/*
 * Lab 3.2: Prime check
 * Reports whether an integer is prime.
 * Original lab date: 2023-11-22
 * Review (2026): numbers below 2 were reported as prime; fixed.
 * Review (2026-11): input is validated.
 */
#include "../include/lab_input.h"
#include <stdio.h>

int main(void)
{
    int number, i, flag = 0;

    printf("Enter the Number to Check Prime: ");
    if (!lab_read_int(&number))
    {
        printf("Invalid input: enter an integer.\n");
        return 1;
    }

    /* Review fix: numbers below 2 are not prime */
    if (number <= 1)
    {
        printf("The Number is not Prime\n");
        return 0;
    }

    for (i = 2; i <= number / i; i++)
    {
        if (number % i == 0)
        {
            printf("The Number is not Prime\n");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("The Number is Prime\n");

    return 0;
}
