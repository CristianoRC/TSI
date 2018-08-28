#include <stdio.h>

void main()
{
    float kgMaca, kgMorango, valorPagar, valorMorango, valorMaca;

    printf("Quantos KG de morango: ");
    scanf("%f", &kgMorango);

    printf("Quantos KG de maca: ");
    scanf("%f", &kgMaca);

    //Valor maçã
    if (kgMaca > 5)
        valorMaca = kgMaca * 2;
    else
        valorMaca = kgMaca * 3;

    //Valor Morango
    if (kgMorango > 5)
        valorMorango = kgMorango * 4;
    else
        valorMorango = kgMorango * 5;

    valorPagar = valorMorango + valorMaca;

    if (valorPagar > 35 || ((kgMaca + kgMorango) > 8))
    {
        valorPagar = valorPagar - (valorPagar * 0.2);
    }

    printf("Valor a pagar: %.2f\n", valorPagar);
}