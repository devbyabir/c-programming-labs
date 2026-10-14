/*
 * Lab 2.3: Maximum of two numbers
 * Prints the larger of two integers using the ?: operator.
 * Original lab date: 2023-11-16
 */
#include <stdio.h>
int main()
{
    int num1, num2, maximum;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    maximum = (num1 > num2) ? num1 : num2;
    printf("\nThe maximum number is: %d\n", maximum);

    return 0;
}
