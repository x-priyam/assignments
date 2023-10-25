#include <stdio.h>

void main()
{
    int num[] = {13, 44, 73, 34, 52, 17, 94, 62, 90, 29};

    printf("The original array:\n[");
    for (int i = 0; i < 9; i++)
    {
        printf("%d, ", num[i]);
    }
    printf("%d]\n\n", num[9]);

    int del;
    printf("Enter the number to delete from the array: ");
    scanf("%d", &del);

    int flag = 0;
    for (int i = 0; i < 10; i++)
    {
        if (del == num[i])
        {
            flag = 1;
        }
        if (flag)
        {
            num[i] = num[i + 1];
        }
    }
    if (!flag)
    {
        printf("Number not found in the array\n");
        return;
    }

    printf("\nThe new array:\n[");
    for (int i = 0; i < 8; i++)
    {
        printf("%d, ", num[i]);
    }
    printf("%d]\n", num[8]);

    return;
}