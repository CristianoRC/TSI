#include <stdio.h>

void main()
{
    int x, y;

    printf("X: ");
    scanf("%d", &x);

    printf("Y: ");
    scanf("%d", &y);

    if (y == 0)
    {
        printf("Nenhum quadrante\n");
    }
    else if (x == 0)
    {
        printf("Nenhum quadrante\n");
    }
    else
    {
        if (x > 0)
        {
            if (y > 0)
                printf("I\n");
            else
                printf("IV\n");
        }
        else
        {
            if (y > 0)
                printf("II\n");
            else
                printf("III\n");
        }
    }
}