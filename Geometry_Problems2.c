/*
Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter. For example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter.
*/

                                                                                  SOLUTION

#include <stdio.h>

int main()
{
    int l, b, ar, p;

    printf("Enter the length and breadth of rectangle\n");
    scanf("%d%d", &l, &b);

    p = 2 * (l + b);
    ar = l * b;

    if (ar > p)
    {
        printf("Area is greater than the perimeter\n");
    }
    else if (p > ar)
    {
        printf("Perimeter is Greater than Area\n");
    }
    else
    {
        printf("Both are equal\n");
    }

    return 0;
}
