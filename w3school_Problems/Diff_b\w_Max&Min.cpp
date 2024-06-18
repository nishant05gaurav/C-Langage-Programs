/*

Write a C program that accepts 4 real numbers from the keyboard and prints out 
the difference between the maximum and minimum values of these four numbers.

Input four numbers: 1.54 1.236 1.3625 1.002
Difference is 0.5380

*/

#include <stdio.h>
int main() {

    double a1, a2, a3, a4;
    double max, min;


    printf("Input four numbers: \n");
    scanf("%lf%lf%lf%lf", &a1, &a2, &a3, &a4);

    // #MAX
    if (a1 >= a2 && a1 >= a3 && a1 >= a4)
        max = a1;
    else if (a2 >= a1 && a2 >= a3 && a2 >= a4)
        max = a2;
    else if (a3 >= a1 && a3 >= a2 && a3 >= a4)
        max = a3;
    else
        max = a4;

    // #MIN
    if (a1 <= a2 && a1 <= a3 && a1 <= a4)
        min = a1;
    else if (a2 <= a1 && a2 <= a3 && a2 <= a4)
        min = a2;
    else if (a3 <= a1 && a3 <= a2 && a3 <= a4)
        min = a3;
    else
        min = a4;

    // Calculate and display the difference between max and min
    printf("Difference is %0.4lf\n", max - min);
    
}
