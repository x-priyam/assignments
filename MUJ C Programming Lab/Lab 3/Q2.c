#include <stdio.h>

void main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    num = (num < 0)?(0 - num):num;
    printf("The absolute value is %d\n", num);

    return;
}