// without math.h
#include <stdio.h>

void main()
{
    int seconds, hrs, mins;
    printf("Enter the time in seconds: ");
    scanf("%d", &seconds);

    int temp;
    temp = seconds % 3600;
    hrs = (seconds - temp) / 3600;
    seconds = seconds - (hrs * 3600);
    temp = seconds % 60;
    mins = (seconds - temp) / 60;
    
    printf("The time is %d hours %d minutes and %d seconds\n", hrs, mins, temp);
    return;
}