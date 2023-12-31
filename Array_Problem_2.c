/*
Implement the following procedure to generate prime numbers from 1 to 100 in a program. This procedure is called sieve of Eratosthenes.
step1 : Fill an array num[100] with numbers from 1 to 100.
step2 : Starting with the second entry in the array, set all its multiples to zero.
step3 : Proceed to the next non-zero element and set all its multiples to zero.
step4 : Repeat step3 till you have set up the multiples of all the non-zero elements to zero.
step5 : At the conclusion of step4, all the non-zero entries left in the array would be prime numbers, so print out these numbers.
*/

#include <stdio.h>
int main()
{
    int a[100], i, j, k, step;

    for (int i = 0; i <= 99; i++)
        a[i] = i + 1;

    for (int i = 1; i <= 99; i++)
    {
        if (a[i] != 0)
        {
            k = a[i] * 2 - 1;
            step = a[i];
            for (j = k; j <= 99; j = j + step)
                a[j] = 0;
        }
    }
    printf("\nPrime numbers between 1 & 100 are:\n");
    for (i = 0; i <= 99; i++)
    {
        if (a[i] != 0)
            printf("%d", a[i]);
    }

    return 0;
}
