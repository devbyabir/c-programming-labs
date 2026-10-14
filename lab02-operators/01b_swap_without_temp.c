/*
 * Lab 2.1 (method 2): Swap without a temporary variable
 * Swaps two integers using addition and subtraction only.
 * Original lab date: 2023-11-16
 * Limit: a + b must fit in an int.
 */
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two values\n");
    scanf("%d %d",&a,&b);
    printf("Values before swap a:%d and b:%d\n",a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Values after swap  a:%d and b:%d",a,b);

    return 0;
}
