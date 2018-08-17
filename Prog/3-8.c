#include <stdio.h>

void main()
{
    int a, b, c, primeiro, segundo, terceiro;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            primeiro = a;

            if (b > c)
            {
                segundo = b;
                terceiro = c;
            }
            else
            {
                segundo = c;
                terceiro = b;
            }
        }
        else
        {
            primeiro = c;

            if (b > a)
            {
                segundo = b;
                terceiro = a;
            }
            else
            {
                segundo = a;
                terceiro = b;
            }
        }
    }
    else
    {
        if (b > c)
        {
            primeiro = b;

            if (a > c)
            {
                segundo = a;
                terceiro = c;
            }
            else
            {
                segundo = c;
                terceiro = a;
            }
        }
        else
        {
            primeiro = c;

            if (a > b)
            {
                segundo = a;
                terceiro = b;
            }
            else
            {
                segundo = b;
                terceiro = a;
            }
        }
    }

    printf("%d, %d, %d\n", terceiro, segundo, primeiro);
}