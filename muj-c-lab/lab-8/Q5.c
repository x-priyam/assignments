#include <stdio.h>
#include <math.h>

void main()
{
    int n;
    printf("Enter the number of columns/rows: ");
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

    int trace = 0;
    for (int i = 0; i < n; i++)
    {
        trace += matrix[i][i];
    }
    printf("The Trace: %d\n", trace);

    int norm = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            norm += pow(matrix[i][j], 2);
        }
    }
    printf("The Norm: %.2f\n", sqrt(norm));

    return;
}