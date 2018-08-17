#include <stdio.h>

void main()
{
    int a, b, c, resultado;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a < b)
    {
        if (b > c)
            resultado = b;
        else
            resultado = c;
    }
    else
    {
        if (a > c)
            resultado = a;
        else
            resultado = c;
    }

    printf("resultado: %d", resultado);
}
