/*
Write a function that recieves 5 integers and returns the sum, average, and dtandard deviation of these unmbers. Calll this function from main() and print the results in main().
*/

#include <stdio.h>
#include <math.h>

void function(int *, int *, int *);
int main()
{
    int sum, avg, stdDev;

    function(&sum, &avg, &stdDev);
    return 0;
}

void function(int *sum, int *avg, int *stdDev)
{
    int n1, n2, n3, n4, n5;
    printf("Enter the five numbers:- \n");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

    *sum = (n1 + n2 + n3 + n4 + n5);
    *avg = *sum / 5;

    *stdDev = sqrt((pow((n1 - *avg), 2) + pow((n2 - *avg), 2) + pow((n3 - *avg), 2) + pow((n4 - *avg), 2) + pow((n5 - *avg), 2)) / 4);

    printf("The sum is %d\n", *sum);
    printf("The average is %d\n", *avg);
    printf("The standard deviation is %d\n", *stdDev);
}
