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

    printf("\nThe starting array is:\n[");
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d, ", num[i]);
    }
    printf("%d]\n", num[n - 1]);

    for (int i = 0; i < n / 2; i++)
    {
        num[i] = num[n - i - 1] + num[i];
        num[n - i - 1] = num[i] - num[n - i - 1];
        num[i] = num[i] - num[n - i - 1];
    }

    printf("\nThe final array is:\n[");
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d, ", num[i]);
    }
    printf("%d]\n\n", num[n - 1]);

    return;
}