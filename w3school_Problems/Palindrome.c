/*

Write a C program that reads a five-digit integer and determines whether or not it's a palindrome.
Sample Input: 33333
Sample Output:

Input a five-digit number: 33333 is a palindrome.

*/

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a five-digit number:\n");
    scanf("%d", &num);

    if ((num / 10000 == num % 10) && ((num / 1000) % 10 == (num / 10) % 10))
    {
        printf("%d is a palindrome.\n", num);
    }
    else
    {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}

// Approach 2:

/*

#include <stdio.h>

int main() 
{
    int num, originalNum, reversedNum = 0, remainder;

    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}


*/
