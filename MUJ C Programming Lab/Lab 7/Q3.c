#include <stdio.h>

void main()
{
    int num[5];
    for (int i = 0; i < 4; i++)
    {
        num[i] = i;
    }

    printf("The original array:\n[");
    for (int i = 0; i < 3; i++)
    {
        printf("%d, ", num[i]);
    }
    printf("%d]\n\n", num[3]);

    int ins;
    printf("Enter the number to insert: ");
    scanf("%d", &ins);

    num[4] = ins;
    printf("\nThe final array:\n[");
    for (int i = 0; i < 4; i++)
    {
        printf("%d, ", num[i]);
    }
    printf("%d]\n", num[4]);

    return;
}