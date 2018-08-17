#include <stdio.h>

void main()
{
    float KmInicial, KmFinal, KmPorLitro, LitrosCombustivel, ValorCombustivel, ValorPassageiros;

    printf("Odometro pela manha: ");
    scanf("%f", &KmInicial);

    printf("Odometro pela tarde: ");
    scanf("%f", &KmFinal);

    printf("Litros de combustivel gastos no dia: ");
    scanf("%f", &LitrosCombustivel);

    printf("Valor recebido dos passageiros: ");
    scanf("%f", &ValorPassageiros);

    KmPorLitro = (KmFinal - KmInicial) / LitrosCombustivel;
    ValorCombustivel = LitrosCombustivel * 2.50;

    printf("Media de consumo %f KM/L\n", KmPorLitro);
    printf("Lucro: %f\n", (ValorPassageiros - ValorCombustivel));
}
