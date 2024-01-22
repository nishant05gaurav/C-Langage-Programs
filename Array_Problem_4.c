/*
Write a programme to copy the contents of one array into another in the reverse order
*/

#include <stdio.h>

int main()
{
    int arr[5], rev[5];
    int i, j;

    printf("\nEnter 5 elements of araay:\n");
    for (int i = 0; i <= 4; i++)
        scanf("%d", &arr[i]);

    for (i = 0,j = 4; i <= 4; i++, j--)
    {
        rev[j] = arr[i];
    }

    printf("\nElements in reverse order:\n");
    for (int i = 0; i <= 4; i++)
    {
        printf("%d\t", rev[i]);
    }

    return 0;
}
