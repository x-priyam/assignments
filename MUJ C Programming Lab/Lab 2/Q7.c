#include <stdio.h>

void main()
{
    float temp;
    printf("Enter a temperature in Centigrade: ");
    scanf("%f", &temp);
    printf("The temperature in Fahrenheit is %.2f\n", (temp * 9 / 5) + 32);

    printf("Enter a temperature in Fahrenheit: ");
    scanf("%f", &temp);
    printf("The temperature in Centigrade is %.2f\n", (temp - 32) * 5 / 9);

    return;
}