/*
If an array "arr" contains "n" elements then write a programme to cheque if arr[0] = arr[n-1], arr[1] = arr[n-2] and so on.
*/

#include <stdio.h>
int main()
{
    int arr[10], i, j;
    printf("Enter the 10 elements of an array;\n");
    for (i = 0; i <= 9; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i <= 9; i++)
    {
        if (arr[i] == arr[10 - (i + 1)])
            printf("%d\n", arr[i]);
    }

    return 0;
}
