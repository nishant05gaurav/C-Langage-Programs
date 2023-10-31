/*
Given the variables x, y, z write a function to circularly shift
their values to right. In the other words if x = 5, y = 8, z = 10,
after circular shift y = 5 , z = 8 , x = 10. Call the function
with variables a, b, c to cicularly shift values.
*/

#include <stdio.h>
void swap(int *, int *, int *);
int main()
{
    int x, y, z;

    printf("Enter the numbers:\n");
    scanf("%d%d%d", &x, &y, &z);

    printf("The values of x, y and z are respectively:-%d %d %d\n", x, y, z);

    swap(&x, &y, &z);

    printf("Now the swap values are rescpectively\n");
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of z is %d\n", z);

    return 0;
}
void swap(int *x, int *y, int *z)
{
    int t;

    t = *z;
    *z = *y;
    *y = *x;
    *x = t;
}
