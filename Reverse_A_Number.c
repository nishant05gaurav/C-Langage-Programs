#include <stdio.h>

int main()

{
    int n;
    printf("Enter the four digit number\n");
    scanf("%d", &n);

    int a = n % 10; // last digit
    int b = n / 10;
    int c = b % 10; // 2nd last digit
    int d = b / 10;
    int e = d % 10; // 3rd last digit
    int f = d / 10;

    int z = a * 1000 + c * 100 + e * 10 + f;
    printf("%d", z);

    return 0;
}
