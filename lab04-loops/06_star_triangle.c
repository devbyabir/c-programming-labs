/*
 * Lab 4.6: Star triangle
 * Prints a right-angled triangle of stars using nested loops.
 * Original lab date: 2023-11-23
 */
#include <stdio.h>
int main()
{
    int rows;
    printf("Enter the Number of Rows: ");
    scanf("%d", &rows);

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
