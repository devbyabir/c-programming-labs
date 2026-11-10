/*
 * Lab 7-8.5: Array input and output with pointers
 * Reads and prints ten integers using pointer arithmetic.
 * Original lab date: 2023-12-06/07
 * Review (2026-11): input is validated; the size is a named constant.
 */
#include "../include/lab_input.h"
#include <stdio.h>

#define SIZE 10

int main(void)
{
    int array[SIZE];

    printf("Enter %d Elements:\n", SIZE);
    for (int i = 0; i < SIZE; ++i)
    {
        if (!lab_read_int(array + i))
        {
            printf("Invalid input: enter an integer.\n");
            return 1;
        }
    }

    int *p = array;
    printf("You Entered:\n");
    for (int i = 0; i < SIZE; ++i)
    {
        printf("%d\n", *p);
        p++;
    }

    return 0;
}
