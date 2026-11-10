/*
 * Lab 3.4: Grade calculator
 * Converts a mark from 0 to 100 into a letter grade with an if-else ladder.
 * Original lab date: 2023-11-22
 * Review (2026-11): non-numeric input is rejected.
 */
#include "../include/lab_input.h"
#include <stdio.h>

int main(void)
{
    int marks;

    printf("Enter The marks: ");
    if (!lab_read_int(&marks))
    {
        printf("Invalid input: enter an integer.\n");
        return 1;
    }

    if (marks < 0 || marks > 100)
    {
        printf("Invalid marks. Marks should be between 0 and 100.\n");
        return 1;
    }
    else if (marks < 50)
    {
        printf("Grade: F\n");
    }
    else if (marks < 60)
    {
        printf("Grade: C\n");
    }
    else if (marks < 70)
    {
        printf("Grade: B\n");
    }
    else if (marks < 80)
    {
        printf("Grade: B+\n");
    }
    else if (marks < 90)
    {
        printf("Grade: A\n");
    }
    else
    {
        printf("Grade: A+\n");
    }

    return 0;
}
