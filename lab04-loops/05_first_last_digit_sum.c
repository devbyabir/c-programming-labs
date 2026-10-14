/*
 * Lab 4.5: First and last digit sum
 * Adds the first and last digits of a four-digit number.
 * Original lab date: 2023-11-23
 * Limit: expects a positive number; input is not validated.
 */
#include <stdio.h>
int main() {
    int num, firstDigit, lastDigit, sum;
    printf("Enter a Four-digit Number: ");
    scanf("%d", &num);

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
