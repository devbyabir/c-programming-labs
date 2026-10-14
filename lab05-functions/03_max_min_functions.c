/*
 * Lab 5.3: Maximum and minimum with functions
 * Returns the larger and smaller of two integers from functions.
 * Original lab date: 2023-11-29
 * Written by Abir Ahmmed (moved here from the program's printed output).
 */
#include <stdio.h>
int findMax(int num1, int num2);
int findMin(int num1, int num2);
int main()
{
    int a, b;

    printf("Enter The First Number: ");
    scanf("%d", &a);

    printf("Enter The Second Number: ");
    scanf("%d", &b);

    printf("Maximum: %d\n", findMax(a, b));
    printf("Minimum: %d\n", findMin(a, b));
    return 0;
}

int findMax(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int findMin(int num1, int num2) {
    return (num1 < num2) ? num1 : num2;
}
