/*

A certain grade of steel is graded according to the following conditions:
        (i) Hardness must be greater than 50
        (ii) Carbon content must be less than 0.7
        (iii) Tensile strength must be greater than 5600

The grades are as follows:
        Grade is 10 if all three conditions are met
        Grade is 9 if conditions (i) and (ii) are met
        Grade is 8 if conditions (ii) and (iii) are met
        Grade is 7 if conditions (i) and (iii) are met
        Grade is 6 if only one condition is met
        Grade is 5 if none of the conditions are met


Write a program, which will require the user to give values of hardness, carbon content and tensile strength of the steel under consideration and output the grade of the steel.

*/

                            SOLUTION:-

#include <stdio.h>

int main()
{
    int hrd, ts;
    float cc;

    printf("Enter the hardness,the carbon content and the tensile strength of the steel:-\n");
    scanf("%d%f%d", &hrd, &cc, &ts);

    if (hrd > 50 && cc < 0.7 && ts > 5600)
    {
        printf("Steel's Grade is 10\n");
    }
    else if (hrd > 50 && cc < 0.7 && ts <= 5600)
    {
        printf("Steels's Grade is 9\n");
    }
    else if (hrd <= 50 && cc < 0.7 && ts > 5600)
    {
        printf("Steels's Grade is 8\n");
    }
    else if (hrd > 50 && cc >= 0.7 && ts > 5600)
    {
        printf("Steels's Grade is 7\n");
    }
    else if (hrd > 50 || cc < 0.7 || ts > 5600)
    {
        printf("Steels's Grade is 6\n");
    }
    else
    {
        printf("Steels's Grade is 5.\n");
    }

    return 0;
}
