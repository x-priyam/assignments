#include <stdio.h>

void main()
{
    int a, b;
    printf("Enter the first number A: ");
    scanf("%d", &a);
    printf("Enter the second number B: ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("A: %d\nB: %d\n", a, b);
    return;
}