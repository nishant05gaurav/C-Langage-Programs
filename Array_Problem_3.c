/*
Tweenty-five numbers are entered from the keyword into an araay. Write a program To find out how many of them are positive, how many are negative, how many are even and how many are odd.
*/


#include<stdio.h>
int main()
{
    int arr[25], i, neg = 0, pos = 0, odd = 0, even = 0;

    printf("\nEnter 25 elemnts of array");
    for(i = 0; i<=24; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<=24; i++)
    {
        arr[i]<0?(neg++):(pos++);
        arr[i]%2?(even++):(odd++);
    }

    printf("Total number of negative numbers:\n",neg);
    printf("Total number of positive numbers:\n",pos);
    printf("Total number of even numbers:\n",even);
    printf("Total number of odd numbers:\n",odd);

    return 0;
}
