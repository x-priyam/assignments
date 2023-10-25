#include <stdio.h>

void main()
{
    int sub1, sub2, sub3, sub4, sub5;
    int att1, att2, att3, att4, att5;

    printf("Enter the attendance percentage in Subject 1: ");
    scanf("%d", &att1);
    if (att1 < 0 || att1 > 100)
    {
        printf("Please enter valid percentage\n");
        return;
    }

    printf("Enter the attendance percentage in Subject 2: ");
    scanf("%d", &att2);
    if (att2 < 0 || att2 > 100)
    {
        printf("Please enter valid percentage\n");
        return;
    }

    printf("Enter the attendance percentage in Subject 3: ");
    scanf("%d", &att3);
    if (att3 < 0 || att3 > 100)
    {
        printf("Please enter valid percentage\n");
        return;
    }

    printf("Enter the attendance percentage in Subject 4: ");
    scanf("%d", &att4);
    if (att4 < 0 || att4 > 100)
    {
        printf("Please enter valid percentage\n");
        return;
    }

    printf("Enter the attendance percentage in Subject 5: ");
    scanf("%d", &att5);
    if (att5 < 0 || att5 > 100)
    {
        printf("Please enter valid percentage\n");
        return;
    }

    float avg_att = (att1 + att2 + att3 + att4 + att5) / 5.0;

    if (avg_att < 75)
    {
        printf("You cannot give exam\n");
        return;
    }

    printf("Enter the marks in Subject 1: ");
    scanf("%d", &sub1);
    if (sub1 < 0 || sub1 > 100)
    {
        printf("Please enter valid marks\n");
        return;
    }

    printf("Enter the marks in Subject 2: ");
    scanf("%d", &sub2);
    if (sub2 < 0 || sub2 > 100)
    {
        printf("Please enter valid marks\n");
        return;
    }

    printf("Enter the marks in Subject 3: ");
    scanf("%d", &sub3);
    if (sub3 < 0 || sub3 > 100)
    {
        printf("Please enter valid marks\n");
        return;
    }

    printf("Enter the marks in Subject 4: ");
    scanf("%d", &sub4);
    if (sub4 < 0 || sub4 > 100)
    {
        printf("Please enter valid marks\n");
        return;
    }

    printf("Enter the marks in Subject 5: ");
    scanf("%d", &sub5);
    if (sub5 < 0 || sub5 > 100)
    {
        printf("Please enter valid marks\n");
        return;
    }

    float avg_marks = (sub1 + sub2 + sub3 + sub4 + sub5) / 5.0;

    // since avg_marks can have decimal values
    // range of grade has been modified slightly
    // to accomodate marks like 60.5
    // (falling between 60 and 61)
    if (avg_marks < 40)
    {
        printf("You got F grade\n");
    }
    else if(avg_marks >= 40 && avg_marks < 60)
    {
        printf("You got C grade\n");
    }
    else if(avg_marks >= 60 && avg_marks < 80)
    {
        printf("You got B grade\n");
    }
    else
    {
        printf("You got A grade\n");
    }

    return;
}