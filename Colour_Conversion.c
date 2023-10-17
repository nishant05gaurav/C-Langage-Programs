
/*
In the digital world, colors are specified in Red-Green-Blue (RGB) format, with values of R, G, and B varying on an integer scale from 0 to 255. In print publishing the colors are mentioned in Cyan-magenta-yellow-black (CMYK) format, with values of C, M, Y, and K varying on a real
scale from 0.0 to 1.0. Write a program that converts RGB color to CMYK color as per the following formulae:

White = Max(red/255,Green/255,blue/255)
Cyan = ((White - Red/255)/White)
Magenta = ((White - Green/255)/White)
Yellow = ((White - Blue/255)/White)
Black = 1 - White

Note that if the RGB values are all 0, then the CMY values are all 0 and the K value is 1.

*/

#include <stdio.h>

int main()
{
    int r, b, g;
    float c, w, m, y;

    printf("Enter the values of red , green , blue.\n");
    scanf("%d%d%d", &r, &b, &g);

    if (r > b && r > g)
    {
        w = r / 255;
        printf("White is %f\n", w);
    }
    else if (b > r && b > g)
    {
        w = b / 255;
        printf("White is %f\n", w);
    }
    else if (g > r && g > b)
    {
        w = g / 255;
        printf("White is %f\n", w);
    }

    c = ((w - (r / 255)) / w);
    m = ((w - (g / 255)) / w);
    y = ((w - (b / 255)) / w);
    b = (1 - w);

    printf("Cyan is %.2f\n", c);
    printf("Magenta is %.2f\n", m);
    printf("Yellow is %.2f\n", y);
    printf("Black is %.2f\n", b);

    return 0;
}


