/*
 * Lab 3.5: Leap year
 * Reports whether a year is a leap year.
 * Original lab date: 2023-11-22
 */
#include <stdio.h>
int main()
{
    int year;
    printf("Enter a Year: ");
    scanf("%d", &year);

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
