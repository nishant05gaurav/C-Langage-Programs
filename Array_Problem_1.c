/*
Twenty-five numbers are entered from the keyboard into an array. The number to be searched is entered through the keyboard by the user.
Write a program to find if thr number to be searched is present in the array and if it is present, display the number of times it appears
in the arrray.
*/

#include <stdio.h>
int main()
{
    int num, n[25];
    int count = 0;

    for (int i = 0; i <= 24; i++)
    {
        printf("Emter the numbers:");
        scanf("%d", &n[i]);
    }

    printf("\nEnter the number you want to search: \n");
    scanf("%d", &num);

    for (int i = 0; i <= 24; i++)
    {
        if (n[i] == num)
            count++;
    }
    printf("Number %d is found %d time(s) in the array\n", num, count);

    return 0;
}
