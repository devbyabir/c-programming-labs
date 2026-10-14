/*
 * Lab 6.5: Reverse an array
 * Reverses an eight-element array in place.
 * Original lab date: 2023-11-30
 * Written by Abir Ahmmed (moved here from the program's printed output).
 * Review (2026): reversal started at index 4, not 7; fixed.
 */
#include <stdio.h>
int main()
{
    int arr[8] = {1,2,3,4,5,6,7,8};

    printf("Before Reverse The Array: \n");
    for (int i = 0; i < 8; i++)
        {
        printf("%d \n", arr[i]);
        }

    int temp;
    for (int i = 0, j = 7; i < j; i++, j--) /* Review fix: last index is 7 */
        {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        }

    printf("After Reverse The Array: \n");

    for (int i = 0; i < 8; i++)
        {
        printf("%d \n", arr[i]);
        }

    return 0;
}
