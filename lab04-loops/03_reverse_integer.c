/*
 * Lab 4.3: Reverse an integer
 * Reverses the digits of an integer.
 * Original lab date: 2023-11-23
 * Review (2026-11): input is validated; the reversed value is built in a
 * long long, so numbers like 1999999999 print correctly instead of
 * overflowing an int.
 */
#include <stdio.h>

int main(void)
{
    int num;
    long long reverseNum = 0;

    printf("Enter an Integer: ");
    if (scanf("%d", &num) != 1)
    {
        printf("Invalid input: enter an integer.\n");
        return 1;
    }

    while (num != 0)
    {
        int remainder = num % 10;
        reverseNum = reverseNum * 10 + remainder;
        num /= 10;
    }

    printf("Reversed Integer: %lld\n", reverseNum);

    return 0;
}
