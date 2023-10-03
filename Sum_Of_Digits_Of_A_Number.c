QUESTION:_

/*
If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. (Hint: Use the modulus operator ‘%’)
*/


#include <stdio.h>

int main()
{
	int n, a, b;
    	int sum=0;
	printf(" Enter the five digits number ");
	scanf("%d\n ", &n);

	//for last digit:
	a = n % 10;
	b = n / 10;
	sum = sum + a;

	//for 4th digit:
	a = b % 10;
	b = b / 10;
	sum = sum + a;

	//for 3rd digit:
	a = b % 10;
	b = b / 10;
	sum = sum + a;

	//for 2nd digit:
	a = b % 10;
	b = b / 10;
	sum = sum + a;

	//for 1st  digit:
	a = b % 10;
	sum = sum + a;
	
	printf("the sum of 5 digits of %d is %d",n, sum);

	return 0;
}

