/*
 * Lab 7-8.2: Array sum with pointers
 * Sums ten entered integers by stepping a pointer through the array.
 * Original lab date: 2023-12-06/07
 * Review (2026-11): input is validated; the size is a named constant.
 * Final review (2026-11): the sum is a long long, so ten large values such as
 * 2147483647 and 1 no longer overflow an int.
 */
#include "../include/lab_input.h"
#include <stdio.h>

#define SIZE 10

int main(void)
{
    int array[SIZE];
    long long sum = 0;

    printf("Enter %d Elements:\n", SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        if (!lab_read_int(&array[i]))
        {
            printf("Invalid input: enter an integer.\n");
            return 1;
        }
    }

    int *pnum = array;
    for (int i = 0; i < SIZE; i++)
    {
        sum = sum + *pnum;
        pnum++;
    }

    printf("The Sum of All Array Elements: %lld\n", sum);

    return 0;
}
