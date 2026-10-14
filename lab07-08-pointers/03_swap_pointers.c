/*
 * Lab 7-8.3: Swap with pointers
 * Swaps two variables through pointer parameters.
 * Original lab date: 2023-12-06/07
 */
#include <stdio.h>
void swap(int *pa, int *pb)
{
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}
int main()
{
    int num1, num2;

    printf("Enter The First Number: ");
    scanf("%d", &num1);

    printf("Enter The Second Number: ");
    scanf("%d", &num2);

    printf("\nBefore Swapping The Numbers Are: %d, %d\n\n",num1,num2);

    swap(&num1, &num2);

    printf("After  Swapping The Numbers Are: %d, %d\n",num1,num2);

    return 0;
}
