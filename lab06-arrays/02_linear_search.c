/*
 * Lab 6.2: Linear search
 * Searches a fixed array for an entered value.
 * Original lab date: 2023-11-30
 * Written by Abir Ahmmed (moved here from the program's printed output).
 * Review (2026-11): input is validated; the loop uses the array's own size
 * and the result shows the position found.
 */
#include "../include/lab_input.h"
#include <stdio.h>

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = (int)(sizeof arr / sizeof arr[0]);
    int search_element;

    printf("Enter The Element You Want To Search: ");
    if (!lab_read_int(&search_element))
    {
        printf("Invalid input: enter an integer.\n");
        return 1;
    }

    int position = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == search_element)
        {
            position = i;
            break;
        }
    }

    if (position >= 0)
        printf("Element %d found in the array at index %d.\n", search_element, position);
    else
        printf("Element %d not found in the array.\n", search_element);

    return 0;
}
