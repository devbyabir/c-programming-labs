/*
 * Lab 1.4: Circle area and circumference
 * Reads a radius and prints the area and circumference.
 * Original lab date: 2023-11-15
 * Review (2026-11): input is validated; uses double and a more precise pi.
 */
#include "../include/lab_input.h"
#include <stdio.h>

#define PI 3.14159265358979323846

int main(void)
{
    double radius, area, circumference;

    printf("Enter radius of the circle: ");
    if (!lab_read_double(&radius) || radius < 0)
    {
        printf("Invalid input: enter a non-negative number.\n");
        return 1;
    }

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    if (!isfinite(area) || !isfinite(circumference))
    {
        printf("Radius is too large: results must be finite.\n");
        return 1;
    }

    printf("Area of the circle is: %f\n", area);
    printf("Circumference of the circle is: %f\n", circumference);

    return 0;
}
