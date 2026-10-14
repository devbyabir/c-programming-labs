/*
 * Lab 4.3: Reverse an integer
 * Reverses the digits of an integer.
 * Original lab date: 2023-11-23
 * Limit: the reversed value must fit in an int.
 */
#include <stdio.h>
int main()
{
    int num, reverseNum = 0, remainder;
    printf("Enter an Integer: ");
    scanf("%d", &num);

    while (num != 0)
    {
        remainder = num % 10;
        reverseNum = reverseNum * 10 + remainder;
        num /= 10;
    }

    printf("Reversed Integer: %d\n", reverseNum);

    return 0;
}
