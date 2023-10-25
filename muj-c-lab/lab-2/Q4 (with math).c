// using math.h
#include <stdio.h>
#include <math.h>

void main()
{
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("The area of the circle is %.2f\n", M_PI * pow(radius, 2));
    return;
}