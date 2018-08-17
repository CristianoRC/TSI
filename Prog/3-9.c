#include <stdio.h>

void main()
{
    int x, y;

    printf("X: ");
    scanf("%d", &x);

    printf("Y: ");
    scanf("%d", &y);

    if (x > 0)
    {
        //1º e 4º

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