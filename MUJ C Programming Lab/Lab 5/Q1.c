#include <stdio.h>

void main()
{
    int n, k;
    printf("Enter the number till which you want tables: ");
    scanf("%d", &n);
    printf("Enter the term till which you want the tables: ");
    scanf("%d", &k);
    printf("\n");

    for (int i = 1; i <= n; i++)
    {
        printf("Table of %d:\n", i);
        for (int j = 1; j <= k; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return;
}