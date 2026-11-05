/*
 * Lab 4.5: First and last digit sum
 * Adds the first and last digits of a four-digit number.
 * Original lab date: 2023-11-23
 * Review (2026-11): input is validated; numbers outside 1000-9999 are
 * rejected instead of giving wrong answers (7 gave 14, -1234 gave -1238).
 */
#include <stdio.h>

int main(void)
{
    int num, firstDigit, lastDigit, sum;

    printf("Enter a Four-digit Number: ");
    if (scanf("%d", &num) != 1 || num < 1000 || num > 9999)
    {
        printf("Invalid input: enter a four-digit number (1000-9999).\n");
        return 1;
    }

    lastDigit = num % 10;
    firstDigit = num;

    while (firstDigit >= 10)
    {
        firstDigit /= 10;
    }

    sum = firstDigit + lastDigit;

    printf("Sum of The First and Last Digit: %d\n", sum);

    return 0;
}
