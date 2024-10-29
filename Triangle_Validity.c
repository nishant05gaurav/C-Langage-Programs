/*
Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered through the keyboard. A triangle is valid if the sum of all the three angles is equal to 180 degrees.
*/

#include <stdio.h>
int main()

{
    float agl1, agl2, agl3;

    printf("Enter the three angles of a triangle:-\n");
    scanf("%f%f%f", &agl1, &agl2, &agl3);

    if ((agl1 + agl2 + agl3) == 180)
    {
        printf("The triangle is a valid one.\n");
    }
    else
    {
        printf("The triangle is not a valid one.\n");
    }

    return 0;
}
