/*

If value of an angle is input through the keyboard, write a program to print all its Trigonometric ratios.

*/

#include <stdio.h>
#include <math.h>

int main()

{
    float ang, s, c, t;

    printf("Enter the Angle:- \n");
    scanf("%f", &ang);

    ang = ang * (3.14 / 180);

    s = sin(ang);
    c = cos(ang);
    t = tan(ang);

    printf("sin = %.2f\n", s);
    printf("cos = %.2f\n", c);
    printf("tan = %.2f\n", t);

    return 0;
}
