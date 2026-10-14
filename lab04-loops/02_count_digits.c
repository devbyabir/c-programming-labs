/*
 * Lab 4.2: Count digits
 * Counts the digits of an integer.
 * Original lab date: 2023-11-23
 * Review (2026): 0 was counted as 0 digits; now uses do-while.
 */
#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter an Integer: ");
    scanf("%d", &num);

    /* Review fix: do-while so that 0 counts as one digit */
    do
    {
        num /= 10;
        ++count;
    } while (num != 0);

    printf("Number of Digits: %d\n", count);

    return 0;
}
