/*
 * Lab 5.4: Prime check with a function
 * Checks primality in a function returning bool.
 * Original lab date: 2023-11-29
 * Written by Abir Ahmmed (moved here from the program's printed output).
 * Review (2026): loop test i * i could overflow; now i <= num / i.
 */
#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num);

int main()
{
    int number;

    printf("Enter A Number: ");
    scanf("%d", &number);

    if (isPrime(number))
        {
        printf("%d is a prime number.\n", number);
        }
    else
        {
        printf("%d is not a prime number.\n", number);
        }

    return 0;
}

bool isPrime(int num)
{
    if (num <= 1)
        {
        return false;
        }

    for (int i = 2; i <= num / i; i++) /* Review fix: avoids i * i overflow */
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}
