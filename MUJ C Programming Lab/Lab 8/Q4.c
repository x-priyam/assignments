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

    printf("\n");
    printf("The Matrix:\n");
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                printf("Not a Symmetrix Matrix\n");
                return;
            }
        }
    }

    printf("This is a Symmetrix Matrix\n");
    return;
}