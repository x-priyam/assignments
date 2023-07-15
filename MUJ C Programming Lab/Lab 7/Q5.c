#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);

    int num[n];
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        num[i] = rand() % 100;
    }

    printf("\nThe original array:\n[");
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d, ", num[i]);
    }
    printf("%d]\n", num[n - 1]);

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (num[j] > num[j + 1])
            {
                num[j] += num[j + 1];
                num[j + 1] = num[j] - num[j + 1];
                num[j] -= num[j + 1];
            }
        }
    }

    printf("\nThe final array:\n[");
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d, ", num[i]);
    }
    printf("%d]\n", num[n - 1]);
}