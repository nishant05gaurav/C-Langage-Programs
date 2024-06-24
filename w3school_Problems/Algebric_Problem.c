/*
Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
Expected Output:
Perimeter of the rectangle = 24 inches
Area of the rectangle = 35 square inches
*/

#include <stdio.h>
int main()
{
    int h = 7, w = 5; // h--> height || w--> width (both are in inches)
    int p, a;         // p--> perimeter || a--> area
    p = 2 * (h + w);
    a = (h * w);
    printf("Perimeter of the rectangle = %d inches\n", p);
    printf("Area of the rectangle = %d square inches", a);
    return 0;
}
