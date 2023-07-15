#include <stdio.h>
#include <math.h>

void main()
{
    printf("The general formula for a quadratic question is: \n");
    printf("a*x^2 + b*x + c = 0\n\n");
    printf("Accoding to the above equation, input the value of:\n");

    float a, b, c;
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    float D = pow(b, 2) - (4 * a * c);
    float real, imaginary;
    switch (D > 0)
    {
    case 1:
        printf("The quadratic equation has 2 distinct real roots: %.2f, %.2f\n", (-b + sqrt(D)) / (2 * a), (-b - sqrt(D)) / (2 * a));
        break;
    case 0:
        switch (D < 0)
        {
        case 0:
            printf("The quadratic equation has 2 equal real roots: %.2f\n", -b / (2 * a));
            break;
        case 1:
            real = -b / (2 * a);
            imaginary = sqrt(-D) / (2 * a);
            printf("The qudaratic equation has 2 complex roots: %.2f + i%.2f, %.2f - i%.2f\n", real, imaginary, real, imaginary);
            break;
        }
        break;
    }

    return;
}