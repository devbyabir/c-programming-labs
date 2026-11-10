/*
 * Lab 3.3: Largest and smallest of three numbers
 * Prints the largest and smallest of three integers and whether each is even
 * or odd.
 * Original lab date: 2023-11-22
 * Review (2026-11): the original only found the largest number. The smallest
 * number and the even/odd output were added to complete the exercise, and
 * input is validated.
 */
#include "../include/lab_input.h"
#include <stdio.h>

int main(void)
{
    int A, B, C;
    int largest, smallest;

    printf("Enter Three Numbers A, B and C:\n");
    if (!lab_read_int(&A) || !lab_read_int(&B) || !lab_read_int(&C))
    {
        printf("Invalid input: enter three integers.\n");
        return 1;
    }

    if (A >= B && A >= C)
        largest = A;
    else if (B >= A && B >= C)
        largest = B;
    else
        largest = C;

    /* Added in 2026-11 review */
    if (A <= B && A <= C)
        smallest = A;
    else if (B <= A && B <= C)
        smallest = B;
    else
        smallest = C;

    printf("%d is the largest number. It is %s.\n", largest, (largest % 2 == 0) ? "Even" : "Odd");
    printf("%d is the smallest number. It is %s.\n", smallest,
           (smallest % 2 == 0) ? "Even" : "Odd");

    return 0;
}
