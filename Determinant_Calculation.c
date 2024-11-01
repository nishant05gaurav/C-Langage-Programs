/*
A 3 x 3 matrix is entered through the keyboard. Write a
program to obtain the Determinant value of this
*/

#include <stdio.h>
int main()
{
    int arr[3][3];
    int i, j;
    float det;

    printf("Enter the elements of a 3 x 3 matrix:\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    det = (arr[1][1] * ((arr[2][2] * arr[3][3]) - (arr[2][3] * arr[3][2]))) - (arr[1][2] * ((arr[2][1] * arr[3][3]) - (arr[2][3] * arr[3][1]))) + (arr[1][3] * ((arr[2][1] * arr[3][2]) - (arr[2][2] * arr[3][1])));

    printf("\n\nThe determinant is %f", det);
    return 0;
}
