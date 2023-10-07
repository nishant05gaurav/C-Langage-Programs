/*

QUESTION:-

Write a program to print all the ASCII values and their equivalent characters using a while loop. The ASCII values vary from 0 to 255.

*/

#include<stdio.h>

int main(  )

{
    int i;

    for (int  i = 0; i < 266; i++)
    {
        printf("%d \t\t %c\n",i,i);
    }
    
    return 0;


}
