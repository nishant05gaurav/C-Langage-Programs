/*
If the lengths of the side of the triangle are denoted by
a, b, and c, then the area of triangle is given by :
        area = (S * (S-a) * (S-b)* (S-c))^1/2
        where, S = ( a+b+c )/2.
 Write a function to calculate the area of the triangle.
*/

#include <stdio.h>
#include <math.h>
float areaTriangle(int *, int *, int *);

int main()
{
    int a, b, c;
    float area;

    printf("Enter the sides of the triangle:\n");
    scanf("%d%d%d", &a, &b, &c);

    area = areaTriangle(&a, &b, &c);

    printf("The area of the given triangle is %f", area);

    return 0;
}

float areaTriangle(int *a, int *b, int *c)
{
    int s;
    float area;
    s = (*a + *b + *c) / 2;
    area = sqrt(s * (s - *a) * (s - *b) * (s - *c));
    return (area);
}
