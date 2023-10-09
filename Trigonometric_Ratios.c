/*
If the value of an angle is input through the keyboard, write a program to print all its Trigonometric ratios.
*/

#include <stdio.h>
#include <math.h>

int main()

{
    float angle, s, c, t;

    printf("Enter an Angle: ");
    scanf("%f", &angle);

    // conversion of Angle to Radian:-
    angle = angle * 3.14 / 180;

    s = sin(angle);
    c = cos(angle);
    t = tan(angle);

    printf("sin=%.2f\n", s);
    printf("cos=%.2f\n", c);
    printf("tan=%.2f\n", t);
    return 0;
}
