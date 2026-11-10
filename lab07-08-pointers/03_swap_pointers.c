/*
 * Lab 7-8.3: Swap with pointers
 * Swaps two variables through pointer parameters.
 * Original lab date: 2023-12-06/07
 * Review (2026-11): input is validated.
 */
#include "../include/lab_input.h"
#include <stdio.h>

void swap(int *pa, int *pb)
{
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main(void)
{
    int num1, num2;

    printf("Enter The First Number: ");
    if (!lab_read_int(&num1))
    {
        printf("Invalid input: enter an integer.\n");
        return 1;
    }
    printf("Enter The Second Number: ");
    if (!lab_read_int(&num2))
    {
        printf("Invalid input: enter an integer.\n");
        return 1;
    }

    printf("\nBefore Swapping The Numbers Are: %d, %d\n\n", num1, num2);
    swap(&num1, &num2);
    printf("After  Swapping The Numbers Are: %d, %d\n", num1, num2);

    return 0;
}
