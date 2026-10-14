/*
 * Lab 1.5: Arithmetic operations
 * Reads two integers and prints their sum, difference, product and quotient.
 * Original lab date: 2023-11-15
 * Review (2026): a zero divisor is reported instead of divided by.
 */
#include<stdio.h>
int main ()
{
    int number1, number2;
    int addition,subtraction,multiplication;
    float division;
    printf("Enter First numbers: ");
    scanf("%d",&number1);
    printf("Enter Second numbers: ");
    scanf("%d",&number2);

    addition = number1+number2;
    subtraction = number1-number2;
    multiplication = number1*number2;

    printf("\nAddition is : %d\n", addition);
    printf("Subtraction is : %d\n", subtraction);
    printf("Multiplication is : %d\n", multiplication);
    /* Review fix: avoid dividing by zero */
    if (number2 != 0)
    {
        division = (float) number1/number2;
        printf("Division is : %f\n", division);
    }
    else
    {
        printf("Division is : undefined (cannot divide by zero)\n");
    }

    return 0;
}
