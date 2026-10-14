/*
 * Lab 4.4: Sum of digits
 * Adds the digits of an integer using a for loop.
 * Original lab date: 2023-11-23
 * Limit: meant for non-negative input.
 */
#include <stdio.h>
int main()
{
    int num, sum = 0, digit;

    printf("Enter an Integer: ");
    scanf("%d", &num);

    for (; num != 0; num /= 10)
    {
        digit = num % 10;
        sum += digit;
    }

    printf("Sum of Digits: %d\n", sum);

    return 0;
}
