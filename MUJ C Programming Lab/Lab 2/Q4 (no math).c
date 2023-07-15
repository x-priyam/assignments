// without using math.h
#include <stdio.h>

void main()
{
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("The area of the circle is %.2f\n", 3.14 * radius * radius);
    return;
}