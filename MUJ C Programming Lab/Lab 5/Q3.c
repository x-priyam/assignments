#include <stdio.h>

void main()
{
    unsigned long long int binary;
    printf("Enter the number in binary: ");
    scanf("%lld", &binary);

    int dec = 0;
    for (int i = 1; binary > 0; binary = binary / 10)
    {
        dec = dec + ((binary % 10) * i);
        i = i * 2;
    }
    printf("The number in decimal is %d\n", dec);
}