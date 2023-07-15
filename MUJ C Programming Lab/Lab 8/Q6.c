#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of cols: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    srand(time(NULL));

    printf("\nThe Matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        printf("| ");
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = rand() % 10;
            printf("%d ", matrix[i][j]);
        }
        printf("|\n");
    }

    int check;
    printf("\nEnter the element to find: ");
    scanf("%d", &check);

    int count = 0;
    printf("\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == check)
            {
                printf("Element found in position (%d, %d)\n", i + 1, j + 1);
                count++;
            }
        }
    }
    printf("The element was found %d times\n", count);
    return;
}