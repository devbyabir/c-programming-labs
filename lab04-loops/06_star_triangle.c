/*
 * Lab 4.6: Star triangle
 * Prints a right-angled triangle of stars using nested loops.
 * Original lab date: 2023-11-23
 * Review (2026-11): input is validated.
 */
#include "../include/lab_input.h"
#include <stdio.h>

int main(void)
{
    int rows;

    printf("Enter the Number of Rows: ");
    if (!lab_read_int(&rows) || rows < 0 || rows > 1000)
    {
        printf("Invalid input: enter an integer from 0 to 1000.\n");
        return 1;
    }

    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
