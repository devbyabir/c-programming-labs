/*
 * Lab 6.1: Array input and output
 * Reads five integers into an array and prints them.
 * Original lab date: 2023-11-30
 * Written by Abir Ahmmed (moved here from the program's printed output).
 */
#include <stdio.h>
int main()
{
    int arr[5];
    printf("Enter 5 Elements:\n");
    for (int i = 0; i < 5; i++)
        {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        }

    printf("\nYour Elements of the Array are:\n");
    for (int i = 0; i < 5; i++)
        {
        printf("%d ", arr[i]);
        }

    return 0;
}
