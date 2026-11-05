/*
 * Lab 6.1: Array input and output
 * Reads five integers into an array and prints them.
 * Original lab date: 2023-11-30
 * Written by Abir Ahmmed (moved here from the program's printed output).
 * Review (2026-11): input is validated; the size is a named constant.
 */
#include <stdio.h>

#define SIZE 5

int main(void)
{
    int arr[SIZE];

    printf("Enter %d Elements:\n", SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("Invalid input: enter an integer.\n");
            return 1;
        }
    }

    printf("\nYour Elements of the Array are:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
