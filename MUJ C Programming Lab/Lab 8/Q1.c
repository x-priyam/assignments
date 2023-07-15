#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    printf("We need to multiply 2 Matrixes A and B\n\n");
    int rows[2];
    int cols[2];

    // A X B is defined if
    // no. of columns of A = no. of rows of B
    printf("Enter no. of cols of A / no. of rows of B: ");
    scanf("%d", &cols[0]);
    rows[1] = cols[0];

    printf("Enter no. of rows of A: ");
    scanf("%d", &rows[0]);
    printf("Enter no. of cols of B: ");
    scanf("%d", &cols[1]);

    int A[rows[0]][cols[0]];
    int B[rows[1]][cols[1]];

    srand(time(NULL));

    printf("\nA:\n");
    for (int i = 0; i < rows[0]; i++)
    {
        printf("| ");
        for (int j = 0; j < cols[0]; j++)
        {
            A[i][j] = rand() % 10;
            printf("%d ", A[i][j]);
        }
        printf("|\n");
    }

    printf("\nB:\n");
    for (int i = 0; i < rows[1]; i++)
    {
        printf("| ");
        for (int j = 0; j < cols[1]; j++)
        {
            B[i][j] = rand() % 10;
            printf("%d ", B[i][j]);
        }
        printf("|\n");
    }

    // If A is a m×n matrix and B is a p×q matrix
    // and C = AB
    // C is a matrix of m×q dimension
    int C[rows[0]][cols[1]];

    printf("\nA x B = \n");
    for (int i = 0; i < rows[0]; i++)
    {
        printf("| ");
        for (int j = 0; j < cols[1]; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < cols[0]; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
            printf("%3d ", C[i][j]);
            // keeping formating till 3 places
            // getting 4 digit values would require very large matrixes
            // since A and B can only have elements < 10
        }
        printf("|\n");
    }
    return;
}