/*
 * Lab 6.4: Largest and smallest element
 * Finds the largest and smallest values in a fixed array.
 * Original lab date: 2023-11-30
 * Written by Abir Ahmmed (moved here from the program's printed output).
 * Review (2026-11): the loop uses the array's own size.
 */
#include <stdio.h>

int main(void)
{
    int arr[] = {1, 5, 3, 14, 20, 12, 25, 58, 87, 56};
    int size = (int)(sizeof arr / sizeof arr[0]);

    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Largest element in the array: %d\n", largest);
    printf("Smallest element in the array: %d\n", smallest);

    return 0;
}
