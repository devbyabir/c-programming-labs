/*
 * Lab 2.1 (method 1): Swap with a temporary variable
 * Swaps two integers using a third variable.
 * Original lab date: 2023-11-16
 * Review (2026-11): input is validated.
 */
#include "../include/lab_input.h"
#include <stdio.h>

int main(void)
{
    int a, b, t;

    printf("Enter two values:\n");
    if (!lab_read_int(&a) || !lab_read_int(&b))
    {
        printf("Invalid input: enter two integers.\n");
        return 1;
    }

    printf("Values before swap a: %d and b: %d\n", a, b);
    t = a;
    a = b;
    b = t;
    printf("Values after swap  a: %d and b: %d\n", a, b);

    return 0;
}
