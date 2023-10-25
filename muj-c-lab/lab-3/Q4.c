#include <stdio.h>

void main()
{
    int elec;
    float cost;
    printf("Enter the amount of electricity used: ");
    scanf("%d", &elec);

    if (elec <= 0)
    {
        printf("Enter a valid amount!\n");
    }
    else
    {
        if (elec >= 1 && elec <= 100)
        {
            cost = 0;
        }
        else if (elec >= 101 && elec <= 200)
        {
            cost = 0 + ((elec - 100) * 1.5);
        }
        else if (elec >= 201 && elec <= 400)
        {
            cost = 0 + (100 * 1.5) + ((elec - 200) * 2.5);
        }
        else if (elec >= 401)
        {
            cost = 0 + (100 * 1.5) + (200 * 2.5) + ((elec - 400) * 3.5);
        }
        printf("The amount of electricity bill to be paid is Rs. %.2f\n", cost);
    }

    return;
}