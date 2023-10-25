#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter the first number A: ");
    scanf("%d", &a);
    printf("Enter the second number B: ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("A: %i\nB: %i\n", a, b);
    return;
}