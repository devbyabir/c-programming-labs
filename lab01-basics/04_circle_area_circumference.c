/*
 * Lab 1.4: Circle area and circumference
 * Reads a radius and prints the area and circumference.
 * Original lab date: 2023-11-15
 */
#include <stdio.h>
int main()
{
    float Pi=3.1416,radius, area, circum;

    printf("Enter radius of the circle: ");
    scanf("%f",&radius);

    area = Pi * radius * radius;
    printf("Area of the circle is: %f\n",area);

    circum = 2 * Pi * radius;
    printf("Circumference of the circle is: %f",circum);

    return 0;
}
