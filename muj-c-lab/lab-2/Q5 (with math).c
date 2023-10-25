// with math.h
#include <stdio.h>
#include <math.h>

void main()
{
    int seconds, mins, hrs;
    printf("Enter the time in seconds: ");
    scanf("%d", &seconds);
    hrs = floor(seconds / 3600);
    seconds = seconds - (hrs * 3600);
    mins = floor(seconds / 60);
    seconds = seconds - (mins * 60);
    printf("The time is %d hours, %d minutes and %d seconds\n", hrs, mins, seconds);
    return;
}

// NOTE: Assumed that C rounds off during integer division. hence, the use of floor.
// after trying out more examples, it became clear that C actually truncates decimal values in such cases.
// HENCE: there is no need of <math.h> or `floor` function in the above code