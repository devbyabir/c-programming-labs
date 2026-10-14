/*
 * Lab 7-8.4: Add with pointers
 * Adds two integers accessed through pointers.
 * Original lab date: 2023-12-06/07
 */
#include <stdio.h>
int main()
{
    int num1, num2, sum;
    int *pa, *pb;

    printf("Enter First Number: ");
    scanf("%d", &num1);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    pa = &num1;
    pb = &num2;

    sum = *pa + *pb;

    printf("\nSum of The Two Numbers: %d",sum);

    return 0;
}
