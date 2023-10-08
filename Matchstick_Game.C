/*
                                                        MATCHSTICK-GAME:-

  Write a program for a matchstick game played between the vcomputer and a user. Your program should ensure that the computer always wins. Rules for tthe game are as follows :

    ~ There are 21 matchsticks.
    ~ The computer asks the player to pick 1, 2, 3, 4 matchsticks.
    ~ After the persons picks, the computer does its packing.
    ~ Whoever is forced  to pick up the last matchstickloses the game .

*/

#include <stdio.h>

int main()

{
    int m = 21, a, c;

    printf("Welcome To The Game of MATCHSTICK:-\n");
    while (1)
    {
        printf("\nNo. of Matchsticks leftt=%d\n", m);
        printf("Pick a number from 1, 2, 3, 4\n");
        scanf("%d", &a);

        if (a > 4 || a < 1)
            continue;

        m = m - a;
        printf("No. of Matchsticks left = %d\n", m);

        c = 5 - a;
        printf("Computer picked:-%d\n", c);

        m = m - c;
        if (m == 1)
        {
            printf("Number of Matches left %d\n", m);
            printf("You lost the game!!\\n");
            break;
        }
    }

    return 0;
}
