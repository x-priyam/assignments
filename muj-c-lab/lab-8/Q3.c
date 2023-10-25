#include <stdio.h>

void main()
{
    int n;
    printf("Enter the number of rows/columns: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the element in position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        printf("| ");
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("|\n");
    }
    printf("\n");

    int sum, check;

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += matrix[i][j];
        }
        if (i == 0)
        {
            check = sum;
        }
        else
        {
            if (sum != check)
            {
                printf("Not a Magic Square\n");
                return;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += matrix[j][i];
        }
        if (sum != check)
        {
            printf("Not a Magic Square\n");
            return;
        }
    }

    sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += matrix[i][i];
    }
    if (sum != check)
    {
        printf("Not a Magic Square\n");
        return;
    }

    sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += matrix[i][n - 1 - i];
    }
    if (sum != check)
    {
        printf("Not a Magic Square\n");
        return;
    }

    printf("This Matrix is a Magic Square\n");
    return;
}