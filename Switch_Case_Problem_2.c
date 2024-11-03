#include <stdio.h>

int main()
{
    int class, sub;

    printf("Enter the class and the number of subjects failed\n");
    scanf("%d%d", &class, &sub);

    switch (class)
    {
    case 1:
        if (sub <= 3)
        {
            printf("Students gets total of %d grace marks\n", 5 * sub);
        }
        else
            printf("No Grace Marks\n");
        break;

    case 2:
        if (sub <= 2)
        {
            printf("Students gets total of %d grace marks\n", 4 * sub);
        }
        else
            printf("No Grace Marks\n");
        break;

    case 3:
        if (sub == 1)
        {
            printf("Students gets 5 grace marks\n");
        }
        else
            printf("No Grace Marks\n");
        break;

    default:
        printf("Wrong class entered\n");
    };

    return 0;
}
