#include <stdio.h>

void main()
{
    int x_deg, n;
    printf("Enter the value of x in sin(x): ");
    scanf("%d", &x_deg);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    float x = (3.14 / 180) * x_deg;

    float sinx = 0;

    float x_pow = x;
    for (int i = 1, fact = 1, sign = 1; i <= (2 * n) - 1; i = i + 2)
    {
        sinx = sinx + (sign * (x_pow / fact));

        x_pow = x_pow * x * x;
        fact = fact * (i + 2) * (i + 1);
        sign = sign * -1;
    }

    printf("The sum of %d terms of sin(%d) series is %.2f\n", n, x_deg, sinx);

    return;
}