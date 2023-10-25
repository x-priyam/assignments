#include <stdio.h>

void main()
{
    int calls;
    printf("Enter the number of calls: ");
    scanf("%d", &calls);

    float cost;
    if (calls <= 0)
    {
        printf("Enter a valid number!\n");
    }
    else
    {
        if (calls >= 1 && calls <= 150)
        {
            cost = 0;
        }
        else if (calls >= 151 && calls <= 250)
        {
            cost = 0 + ((calls - 150) * 0.9);
        }
        else if (calls >= 251 && calls <= 400)
        {
            cost = 0 + (100 * 0.9) + ((calls - 250) * 1.2);
        }
        else if (calls >= 401)
        {
            cost = 0 + (100 * 0.9) + (150 * 1.2) + ((calls - 400) * 1.5);
        }
        printf("The amount of telephone bill is Rs. %.2f\n", cost);
    }
    return;
}