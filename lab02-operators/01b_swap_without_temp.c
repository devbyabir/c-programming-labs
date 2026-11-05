/*
 * Lab 2.1 (method 2): Swap without a temporary variable
 * Swaps two integers using addition and subtraction only.
 * Original lab date: 2023-11-16
 * Review (2026-11): input is validated, and pairs whose sum would overflow
 * an int are rejected instead of causing undefined behaviour.
 */
#include <limits.h>
#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Enter two values\n");
    if (scanf("%d %d", &a, &b) != 2)
    {
        printf("Invalid input: enter two integers.\n");
        return 1;
    }
    if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b))
    {
        printf("These values are too large to swap this way (a + b overflows).\n");
        return 1;
    }

    printf("Values before swap a:%d and b:%d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Values after swap  a:%d and b:%d\n", a, b);

    return 0;
}
