/*
    Write a general-purpose function to convert any given year into its roman equivalent . 
    Use these roman equivalents for decimal  numbers: 
            1-I
            5-V
            10-X
            50-L
            100-C
            500-D
            1000-M
             
*/

#include<stdio.h>
int romanise (int, int, char);

int main()
{
    int yr;

    printf("Enter Year\n");
    scanf("%d",&yr);

    yr = romanise ( yr, 1000, 'm');
    yr = romanise ( yr,  500, 'm');
    yr = romanise ( yr,  100, 'm');
    yr = romanise ( yr,   50, 'm');
    yr = romanise ( yr,   10, 'm');
    yr = romanise ( yr,    5, 'm');
    yr = romanise ( yr,    1, 'm');    

    return 0;
}
int romanise ( int y, int k, char ch)
{
    yr = yr


}
