#include <stdio.h>

void main()
{
    int num;
    printf("Enter the number to check: ");
    scanf("%d", &num);

    int pos = 1;
    for (int temp = num; temp >= 10; temp = temp / 10)
    {
        pos = pos * 10;
    }

    int num_rev = 0;
    for (int temp = num; temp > 0; temp = temp / 10)
    {
        num_rev = num_rev + ((temp % 10) * pos);
        pos = pos / 10;
    }

    if (num == num_rev)
    {
        printf("The number is a palindrome\n");
    }
    else
    {
        printf("The number is not a palindrome\n");
    }

    return;
}