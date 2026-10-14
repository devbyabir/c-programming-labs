/*
 * Lab 3.1: Even or odd
 * Reports whether an integer is even or odd.
 * Original lab date: 2023-11-22
 */
#include <stdio.h>
int main()
{
    int number;
    printf("Enter an Integer Number: ");
    scanf("%d", &number);

    if(number % 2==0)
        printf("%d is Even.", number);
    else
        printf("%d is Odd.", number);

    return 0;
}
