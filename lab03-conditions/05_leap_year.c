/*
 * Lab 3.5: Leap year
 * Reports whether a year is a leap year.
 * Original lab date: 2023-11-22
 * Review (2026-11): input is validated.
 */
#include <stdio.h>

int main(void)
{
    int year;

    printf("Enter a Year: ");
    if (scanf("%d", &year) != 1)
    {
        printf("Invalid input: enter an integer.\n");
        return 1;
    }

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a Leap Year.\n", year);
    }
    else
    {
        printf("%d is not a Leap Year.\n", year);
    }

    return 0;
}
