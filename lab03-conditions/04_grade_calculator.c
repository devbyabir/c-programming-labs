/*
 * Lab 3.4: Grade calculator
 * Converts a mark from 0 to 100 into a letter grade with an if-else ladder.
 * Original lab date: 2023-11-22
 */
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter The marks: ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100)
    {
        printf("Invalid marks. Marks should be between 0 and 100.\n");
    } else if (marks < 50) {
        printf("Grade: F\n");
    } else if (marks < 60) {
        printf("Grade: C\n");
    } else if (marks < 70) {
        printf("Grade: B\n");
    } else if (marks < 80) {
        printf("Grade: B+\n");
    } else if (marks < 90) {
        printf("Grade: A\n");
    } else {
        printf("Grade: A+\n");
    }

    return 0;
}
