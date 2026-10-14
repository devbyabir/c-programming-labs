/*
 * Lab 3.3: Largest of three numbers (incomplete)
 * Prints the largest of three integers.
 * Original lab date: 2023-11-22
 * Incomplete: the exercise also asked for the smallest number and whether
 * each result is even or odd; those parts were not implemented.
 */
#include <stdio.h>
 int main()
{
    int A, B, C;
    printf("Enter Three Numbers A, B and C: \n");
    scanf("%d %d %d", &A, &B, &C);

    if (A >= B && A >= C)
        printf("%d is the largest number.", A);

    else if (B >= A && B >= C)
        printf("%d is the largest number.", B);

    else
        printf("%d is the largest number.", C);

    return 0;
}
