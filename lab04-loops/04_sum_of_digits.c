/*
 * Lab 4.4: Sum of digits
 * Adds the digits of an integer using a for loop.
 * Original lab date: 2023-11-23
 * Review (2026-11): input is validated; negative numbers use their absolute
 * value, so -123 gives 6 instead of -6.
 */
#include <stdio.h>

int main(void)
{
    int input, sum = 0;

    printf("Enter an Integer: ");
    if (scanf("%d", &input) != 1)
    {
        printf("Invalid input: enter an integer.\n");
        return 1;
    }

    /* long long so that the absolute value of INT_MIN fits */
    long long num = input < 0 ? -(long long)input : input;

    for (; num != 0; num /= 10)
    {
        sum += (int)(num % 10);
    }

    printf("Sum of Digits: %d\n", sum);

    return 0;
}
