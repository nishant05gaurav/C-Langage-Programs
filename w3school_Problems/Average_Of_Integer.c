/*

Write a C program to calculate and print the average of some integers.
Accept all the values preceding 888.

Sample Input:12
15
24
888

Sample Output:
Input each number on a separate line (888 to exit):

The average value of the said numbers is 17.000000

*/

#include <stdio.h>
int main()
{
    int i;
    int sum = 0, count = 0;
    float average;
    printf("Enter integers to find their average:\n");
    while (i != 888)
    {
        scanf("%d", &i);
        count++;
        sum += i;
    }
    sum = sum - 888;
    count--;

    average = sum / count;
    // printf("Average is %.3f", (sum) / count);
    printf("%d\n", (count));
    printf("%d\n", (sum));
    printf("%.3f\n", (average));
}

//                      OR

/*

    while(1)
    {
        scanf("%d",&i);
        if(i==888)
        {
            break;
        }
        sum+=i;
        count++;
    }
    if (count == 0) {
        printf("No numbers were entered.\n");
    } else {
         average = sum / count;
        printf("The average value of the said numbers is %.6f\n", average);
    }


*/
