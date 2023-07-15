#include <stdio.h>

void main()
{
    int mm;
    float cm, inch, feet;
    printf("Enter the length in mm: ");
    scanf("%d", &mm);

    cm = mm / 10.0;
    inch = cm / 2.5;
    feet = inch / 12;

    printf("The length in cm is %.1f\n", cm);
    printf("The length in inches is %.2f\n", inch);
    printf("The length in feets is %.3f\n", feet);

    return;
}