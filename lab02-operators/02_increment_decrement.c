/*
 * Lab 2.2: Increment and decrement
 * Shows the difference between prefix and postfix ++ and --.
 * Original lab date: 2023-11-16
 */
#include <stdio.h>
int main(){
    int num = 9;
    printf("Prefix Increment: %d\n", ++num);
    printf("Prefix Decrement: %d\n", --num);

    num = 9;
    printf("Postfix Increment: %d\n", num++);
    printf("Postfix Decrement: %d\n", num--);

    return 0;
}
