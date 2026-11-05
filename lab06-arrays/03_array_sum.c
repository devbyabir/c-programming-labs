/*
 * Lab 6.3: Array sum
 * Adds all elements of a fixed array.
 * Original lab date: 2023-11-30
 * Written by Abir Ahmmed (moved here from the program's printed output).
 * Review (2026-11): the loop uses the array's own size.
 */
#include <stdio.h>

int main(void)
{
    int arr[] = {15, 12, 5, 8, 9, 8, 10};
    int size = (int)(sizeof arr / sizeof arr[0]);
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    printf("Sum Of All Elements In The Array: %d\n", sum);

    return 0;
}
