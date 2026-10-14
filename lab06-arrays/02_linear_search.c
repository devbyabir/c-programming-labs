/*
 * Lab 6.2: Linear search
 * Searches a fixed array for an entered value.
 * Original lab date: 2023-11-30
 * Written by Abir Ahmmed (moved here from the program's printed output).
 */
#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6,7, 8, 9, 10};

    int search_element;
    printf("Enter The Element You Want To Search: ");
    scanf("%d", &search_element);

    int found = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == search_element)
        {
            found = 1;
            break;
        }
    }

    if (found)
        {
        printf("Element %d found in the array.\n", search_element);
        }
    else
        {
        printf("Element %d not found in the array.\n", search_element);
        }

    return 0;
}
