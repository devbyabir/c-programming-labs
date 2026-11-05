/*
 * Lab 7-8.2: Array sum with pointers
 * Sums ten entered integers by stepping a pointer through the array.
 * Original lab date: 2023-12-06/07
 * Review (2026-11): input is validated; the size is a named constant.
 */
#include <stdio.h>

#define SIZE 10

int main(void)
{
    int array[SIZE];
    int sum = 0;

    printf("Enter %d Elements:\n", SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        if (scanf("%d", &array[i]) != 1)
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

    printf("The Sum of All Array Elements: %d\n", sum);

    return 0;
}
