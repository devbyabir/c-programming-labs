/*
 * Lab 7-8.1: Largest of three with pointers
 * Finds the largest of three integers through pointers.
 * Original lab date: 2023-12-06/07
 * Review (2026-11): the second condition tested *pb > *pc twice; it now
 * compares b with a and with c. Input is validated.
 */
#include "../include/lab_input.h"
#include <stdio.h>

int main(void)
{
    int a, b, c;
    int *pa = &a, *pb = &b, *pc = &c;

    printf("Enter Three Numbers:\n");
    if (!lab_read_int(pa) || !lab_read_int(pb) || !lab_read_int(pc))
    {
        printf("Invalid input: enter three integers.\n");
        return 1;
    }

    if (*pa >= *pb && *pa >= *pc)
        printf("Largest Is: %d\n", *pa);
    else if (*pb >= *pa && *pb >= *pc) /* Review fix: was *pb > *pc && *pb > *pc */
        printf("Largest Is: %d\n", *pb);
    else
        printf("Largest Is: %d\n", *pc);

    return 0;
}
