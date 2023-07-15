#include <stdio.h>

void main()
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    int lcm = (num1 > num2) ? num1 : num2;
    while ((lcm % num1 != 0) || (lcm % num2 != 0))
    {
        lcm = lcm + ((num1 > num2) ? num1 : num2);
    }

    int hcf = (num1 < num2) ? num1 : num2;
    while ((num1 % hcf != 0) || (num2 % hcf != 0))
    {
        hcf--;
    }

    printf("The LCM is %d\n", lcm);
    printf("The HCF is %d\n", hcf);

    return;
}