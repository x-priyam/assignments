#include <stdio.h>

void main()
{
    int rows, cols;
    printf("Enter the number of rows of the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns of the matrix: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter the element in position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe Matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        printf("| ");
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("|\n");
    }
    printf("\n");

    int row_sum, col_sum[cols];
    for (int i = 0; i < cols; i++)
    {
        col_sum[i] = 0;
    }

    for (int i = 0; i < rows; i++)
    {
        row_sum = 0;
        for (int j = 0; j < cols; j++)
        {
            row_sum += matrix[i][j];
            col_sum[j] += matrix[i][j];
        }
        printf("Sum of row %d: %d\n", i + 1, row_sum);
    }

    for (int i = 0; i < cols; i++)
    {
        printf("Sum of column %d: %d\n", i + 1, col_sum[i]);
    }

    return;
}