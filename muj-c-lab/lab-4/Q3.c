#include <stdio.h>

void main()
{
    int month, days = 0;
    printf("Enter the month number: ");
    scanf("%d", &month);

    switch (month)
    {
    case 12:
        days = days + 31;
    case 11:
        days = days + 30;
    case 10:
        days = days + 31;
    case 9:
        days = days + 30;
    case 8:
        days = days + 31;
    case 7:
        days = days + 31;
    case 6:
        days = days + 30;
    case 5:
        days = days + 31;
    case 4:
        days = days + 30;
    case 3:
        days = days + 31;
    case 2:
        days = days + 28;
    case 1:
        days = days + 31;
        break;
    default:
        printf("Please enter a valid month\n");
        return;
    }
    printf("The number of days are %d\n", days);
    return;
}