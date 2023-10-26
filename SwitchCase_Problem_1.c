/*
Write a menu driven program which has following options:

1. Factorial.
2. Prime or not.
3. Odd or Even.
4. Exit.

Once a menu item is selected the appropriate action should taken or once this action
should be taken and once this action is finished, the menu should reappear. Unless the
 user selects 'Exit' option the program should continue to work.
*/

#include <stdio.h>
#include <stdlib.h>

int main()

{
    int choice, num;
    int fact;

    while (1)
    {
        printf("Welocme to the menu driven program , enter the respective number as per  \n");
        printf("1. Factorial\n");
        printf("2. Prime or not\n");
        printf("3. Odd or not\n");
        printf("4. Exit\n");

        printf("Enter the choice\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number:\n");
            scanf("%d", &num);

            fact = 1;

            for (int i = 1; i <= num; i++)
            {
                fact = fact * i;
            }
            printf("%d\n", fact);
            break;

        case 2:

            printf("Enter the number:\n\n");
            scanf("%d", &num);

            for (int i = 2; i <= num; i++)
            {
                if (num % i == 0)
                    printf("Not a Prime Number\n");

                if (num == i)
                    printf("Prime Number\n");
            }
            break;

        case 3:

            printf("Enter the number:\n");
            scanf("%d", &num);
            if (num % 2 == 0)
            {
                printf("Even Number\n\n");
            }
            else
                printf("Odd Number\n\n");
            break;

        case 4:

            exit(0);
            break;
        }
    };
    return 0;
}
