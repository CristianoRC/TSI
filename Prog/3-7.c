#include <stdio.h>

void main()
{
    int a, b, c, resultado;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a > b)
    {
        if (b > c)
            resultado = a + b;
        else
            resultado = a + c;
    }
    else
    {
        if (a > c)
            resultado = b + a;
        else
            resultado = b + c;
    }

    printf("resultado: %d\n", resultado);
}
