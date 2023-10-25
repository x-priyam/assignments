#include <stdio.h>

void main()
{
    int low, high;
    printf("Enter the lower limit: ");
    scanf("%d", &low);
    printf("Enter the uppper limit: ");
    scanf("%d", &high);

    if (low <= 0)
    {
        low = 1;
    }

    printf("Prime numbers between %d and %d are:\n", low, high);
    // i: number being tested
    // j: all numbers before i
    // (which should not be able to perfectly divide it if i is prime)
    for (int i = low, flag = 1; i <= high; i++, flag = 1)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return;
}