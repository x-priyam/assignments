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

    printf("\nThe 1D array is:\n[");
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d, ", num[i]);
    }
    printf("%d]\n\n", num[n - 1]);

    int pos = 0;
    for (int i = 1; i < n; i++)
    {
        if (num[i] > num[pos])
        {
            pos = i;
        }
    }
    printf("The biggest number in the array is: %d\n", num[pos]);

    pos = 0;
    for (int i = 1; i < n; i++)
    {
        if (num[i] < num[pos])
        {
            pos = i;
        }
    }
    printf("The smallest number in the array is: %d\n", num[pos]);

    return;
}