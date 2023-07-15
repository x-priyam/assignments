#include <stdio.h>

void main()
{
    int num[10] = {13, 17, 29, 34, 47, 52, 62, 73, 90};

    printf("Original array:\n[");
    for (int i = 0; i < 8; i++)
    {
        printf("%d, ", num[i]);
    }
    printf("%d]\n\n", num[8]);

    int ins;
    printf("Enter the number to insert: ");
    scanf("%d", &ins);

    int pos = 0;
    for (int i = 0; i < 9; i++, pos++)
    {
        if (ins < num[i])
        {
            break;
        }
    }

    for (int i = 8; i >= pos; i--)
    {
        num[i + 1] = num[i];
    }
    num[pos] = ins;

    printf("New array:\n[");
    for (int i = 0; i < 9; i++)
    {
        printf("%d, ", num[i]);
    }
    printf("%d]\n", num[9]);

    return;
}