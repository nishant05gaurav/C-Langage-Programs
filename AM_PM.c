/*
Write a program to print 24 hours of a day with suitable suffixes like AM, PM, Noon and Midnight.
*/
#include <stdio.h>

int main()
{
    int hour;

    for (hour = 0; hour <= 23; hour++)
    {
        if (hour == 0)
        {
            printf("12 Midnight\n");
            continue;
        }

        if (hour < 12)
        {
            printf("%dAM\n", hour);
        }

        if (hour == 12)
        {
            printf("12 Noon\n");
        }

        if (hour > 12)
        {
            printf("%d PM\n", hour % 12);
        }
    }
    return 0;
}
