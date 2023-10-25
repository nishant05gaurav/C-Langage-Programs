/*

Wind chill factor is the felt air temperature on exposed skin due to wind. The wind chill temperature is always lower than the air temperature, and is calculated as per the following formula:"
       cf = 35.74 + 0.6215t + ( 0.4275t - 35.75 ) * v*pow(0.16)
where t is the temperature and v is the wind velocity. Write a program to receive values of t and v and calculate wind chill factor
(wcf).

*/

#include <stdio.h>
#include <math.h>

int main()

{  
   float t, v, wcf;

    printf("Enter the Temperature and the velocity:-\n");
    scanf("%f%f", &t, &v);

    wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);
    printf("wind Chill Factor is %.2f", wcf);

    return 0;
}
