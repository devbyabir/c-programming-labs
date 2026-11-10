/*
 * Lab 5.2: Swap with call by value
 * Shows that a call-by-value swap changes only the function's copies.
 * Original lab date: 2023-11-29
 * Written by Abir Ahmmed (moved here from the program's printed output).
 * The values in main() staying unchanged is the intended demonstration.
 * Review (2026-11): input is validated.
 */
#include "../include/lab_input.h"
#include <stdio.h>

void swap(int num1, int num2);

int main(void)
{
    int num1, num2;

    printf("Enter The First Integer Number: ");
    if (!lab_read_int(&num1))
    {
        printf("Invalid input: enter an integer.\n");
        return 1;
    }
    printf("Enter The Second Integer Number: ");
    if (!lab_read_int(&num2))
    {
        printf("Invalid input: enter an integer.\n");
        return 1;
    }

    printf("Before swapping:\nNum1 = %d,\nNum2 = %d\n", num1, num2);
    swap(num1, num2);
    printf("After swapping:\nNum1 = %d,\nNum2 = %d\n", num1, num2);

    return 0;
}

void swap(int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;

    printf("Inside The Function:\nnum1 = %d,\nnum2 = %d\n", num1, num2);
}
