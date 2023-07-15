#include <stdio.h>

void main()
{
    int num;
    printf("Enter the number to check: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }

    return;
}