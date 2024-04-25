/*
Write a C program to convert specified days into years, weeks and days.
Note: Ignore leap year.

Test Data :
Number of days : 1329
Expected Output :
Years: 3
Weeks: 33
Days: 3
*/

#include <stdio.h>
int main()
{
    int nod = 1329;
    int years, weeks, days;

    years = 1329 / 365;
    weeks = (1329 - (365 * 3)) / 7;
    days = (1329 - (365 * 3)) - (weeks * 7);

    printf("Years : %d\n", years);
    printf("Weeks : %d\n", weeks);
    printf("Days : %d\n", days);

    return 0;
}

/*
                OUTPUT

Years : 3
Weeks : 33
Days : 3
*/
