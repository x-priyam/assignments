#include <stdio.h>

void main()
{
    int number, ones, tens, hundreds;
    printf("Enter the 4 digit number: ");
    scanf("%d", &number);
    ones = number % 10;
    number = (number - ones) / 10;
    tens = number % 10;
    number = (number - tens) / 10;
    hundreds = number % 10;
    number = (number - hundreds) / 10;

    printf("The sum of the digits of the number is %d\n", ones + tens + hundreds + number);
    return;
}