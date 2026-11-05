/*
 * Lab 1.3: Multiply two numbers
 * Multiplies two fixed integers and prints the product.
 * Original lab date: 2023-11-15
 * Review (2026-11): the message prints the variables instead of hard-coded 4
 * and 5.
 */
#include <stdio.h>

int main(void)
{
    int number1 = 4, number2 = 5;
    int product = number1 * number2;

    printf("The product of %d and %d is: %d\n", number1, number2, product);

    return 0;
}
