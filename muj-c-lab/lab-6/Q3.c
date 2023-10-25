#include <stdio.h>

void main()
{
    int dec;
    printf("Enter the number in decimal format: ");
    scanf("%d", &dec);
    printf("The number in octal form using C type conversion is %o\n", dec);

    int oct = 0;

    for (int i = 1; dec > 0; dec = dec / 8)
    {
        oct = oct + ((dec % 8) * i);
        i = i * 10;
    }

    printf("The number in octal form using logic is %d\n", oct);

    return;
}