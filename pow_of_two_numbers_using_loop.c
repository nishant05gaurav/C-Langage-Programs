/*

QUESTION:-

 Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another.

*/

#include <stdio.h>

int main()

{
    int num1, num2;
    int pow = 1;

    printf("Enter the respective numbers:-\n");
    scanf("%d%d", &num1, &num2);

    while (num2 != 0)
    {
        pow *= num1;
        num2--;
    }

    printf("Power is %d", pow);

    return 0;
}
