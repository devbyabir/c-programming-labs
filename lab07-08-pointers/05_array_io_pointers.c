/*
 * Lab 7-8.5: Array input and output with pointers
 * Reads and prints ten integers using pointer arithmetic.
 * Original lab date: 2023-12-06/07
 */
#include <stdio.h>
int main()
{
    int array[10];

    printf("Enter 10 Elements: \n");

    for (int i = 0; i < 10; ++i)
        {
            scanf("%d", array + i);
        }

    int *p = array;
    printf("You Entered: \n");

    for (int i = 0; i < 10; ++i)
        {
            printf("%d\n", *p);
            p++;
        }

    return 0;
}
