/*
 * Lab 3.2: Prime check
 * Reports whether an integer is prime.
 * Original lab date: 2023-11-22
 * Review (2026): numbers below 2 were reported as prime; fixed.
 */
#include<stdio.h>
int main()
{
    int number,i,m=0,flag=0;
    printf("Enter the Number to Check Prime: ");
    scanf("%d",&number);
    /* Review fix: numbers below 2 are not prime */
    if(number<=1)
    {
        printf("The Number is not Prime");
        return 0;
    }
    m=number/2;
    for(i=2;i<=m;i++)
    {
    if(number%i==0)
        {
        printf("The Number is not Prime");
        flag=1;
        break;
        }
    }
    if(flag==0)
    printf("The Number is Prime");

    return 0;
 }
