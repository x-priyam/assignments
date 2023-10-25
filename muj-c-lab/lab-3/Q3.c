#include <stdio.h>

void main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("The year %i is a leap year", year);
            }
            else
            {
                printf("The year %i is not a leap year", year);
            }
        }
        else
        {
            printf("The year %i is a leap year", year);
        }
    }
    else
    {
        printf("The year %i is not a leap year", year);
    }

    printf("\n");
    return;
}