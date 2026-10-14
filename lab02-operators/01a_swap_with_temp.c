/*
 * Lab 2.1 (method 1): Swap with a temporary variable
 * Swaps two integers using a third variable.
 * Original lab date: 2023-11-16
 */
#include <stdio.h>
int main()
{
    int a,b,t;
    printf("Enter two values:\n");
    scanf("%d %d",&a,&b);
    printf("Values before swap a: %d and b: %d\n",a,b);
    t = a;
    a = b;
    b = t;
    printf("Values after swap  a: %d and b: %d",a,b);

    return 0;
}
