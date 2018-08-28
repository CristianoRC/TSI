#include <stdio.h>

void main()
{
    float ladoUm, ladoDois, ladoTres;

    printf("Insira o lado 1: ");
    scanf("%f", &ladoUm);

    printf("Insira o lado 2: ");
    scanf("%f", &ladoDois);

    printf("Insira o lado 3: ");
    scanf("%f", &ladoTres);

    if ((ladoUm == ladoDois) && (ladoDois == ladoTres))
    {
        printf("triangulo equilatero\n");
    }
    else if ((ladoUm == ladoDois) || (ladoDois == ladoTres) || (ladoUm == ladoTres))
    {
        printf("triangulo isosceles\n");
    }
    else
    {
        printf("triangulo escaleno\n");
    }
}