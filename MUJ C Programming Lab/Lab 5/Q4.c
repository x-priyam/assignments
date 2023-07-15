#include <stdio.h>

void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int num_rev = 0, pos = 1;

    for (int temp = num; temp >= 10; temp = temp / 10)
    {
        pos = pos * 10;
    }

    for (; num > 0; num = num / 10)
    {
        num_rev = num_rev + ((num % 10) * pos);
        pos = pos / 10;
    }

    printf("The reveresed number is %d\n", num_rev);
    return;
}