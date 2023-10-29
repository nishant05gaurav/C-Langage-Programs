/*
Write a program to find the absolute value of a number entered through the keyboard.
*/


#include <stdio.h>

int main()

{
    int num, j;

    printf("Enter the Number:-\n");
    scanf("%d", &num);

    j = -(num);

    if (num > 0)
    {
        printf("Absolute Value is %d\n", num);
    }
    else
    {
        printf("Absolute value is %d\n", j);
    }

    return 0;
}
