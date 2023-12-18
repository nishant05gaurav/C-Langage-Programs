/*
Write down the macro definitions for the following:
1. To test whether a character is a small case letter or not.
2. To test whether a character is an upper case letter or not.
3. To test whether a character is an alphabet or not, use the macros you defined in 1 and 2 above.
4. To obtain the bigger of two numbers.
*/

#include <stdio.h>

#define ISUPPER(x) (x >= 65 && x <= 90 ? 1 : 0)
#define ISLOWER(x) (x >= 97 && x <= 122 ? 1 : 0)
#define ISALPHA(x) (ISUPPER(x) || ISLOWER(x))
#define BIG(x, y) (x > y ? x : y)

int main()
{
    char ch;
    int d, a, b;

    printf("\n Enter the alphabet or character: ");
    scanf("%c", &ch);

    if (d = ISUPPER(ch) == 1)
        printf("You enterd a capital letter\n");
    else if (d = ISLOWER(ch) == 1)
    {
        printf("You enterd a small case letter\n");
    }
    else if (d = ISALPHA(ch) ! == 1)
    {
        printf("You entered character other than an alphabet\n");
    }

    printf("\n\nEnter any two numbers: ");
    scanf("%d%d", &a, &b);

    d = BIG(a, b);
    printf("Bigger number is %d\n", d);

    return 0;
}
