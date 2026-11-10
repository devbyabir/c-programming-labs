/*
 * Lab 7-8.4: Add with pointers
 * Adds two integers accessed through pointers.
 * Original lab date: 2023-12-06/07
 * Review (2026-11): input is validated; the sum uses long long so it cannot
 * overflow.
 */
#include "../include/lab_input.h"
#include <stdio.h>

int main(void)
{
    int num1, num2;
    int *pa = &num1, *pb = &num2;

    printf("Enter First Number: ");
    if (!lab_read_int(pa))
    {
        printf("Invalid input: enter an integer.\n");
        return 1;
    }
    printf("Enter Second Number: ");
    if (!lab_read_int(pb))
    {
        printf("Invalid input: enter an integer.\n");
        return 1;
    }

    long long sum = (long long)*pa + *pb;

    printf("\nSum of The Two Numbers: %lld\n", sum);

    return 0;
}
