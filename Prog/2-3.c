#include <stdio.h>

void main()
{
    float numeroEntrada;

    printf("Digite um valor: ");
    scanf("%f",&numeroEntrada);

    if(numeroEntrada >= 0)
        printf("Valor informado é positivo\n");
    else
        printf("Valor informado é negativo\n");
}