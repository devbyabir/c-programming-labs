/*
 * Lab 6.5: Reverse an array
 * Reverses an eight-element array in place.
 * Original lab date: 2023-11-30
 * Written by Abir Ahmmed (moved here from the program's printed output).
 * Review (2026): reversal started at index 4, not 7; fixed.
 * Review (2026-11): the last index comes from the array's size, so the
 * original bug cannot come back if the array changes.
 */
#include <stdio.h>

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = (int)(sizeof arr / sizeof arr[0]);

    printf("Before Reverse The Array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    for (int i = 0, j = size - 1; i < j; i++, j--) /* Review fix: start at the last index */
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("After Reverse The Array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
