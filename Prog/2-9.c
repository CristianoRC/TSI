#include <stdio.h>

void main()
{
    int sexo;
    float altura, pesoIdeal;

    printf("Digite seu sexo (1 - feminino; 2 - masculino): ");
    scanf("%i", &sexo);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    if (sexo == 1)
    {
        pesoIdeal = (62.1 * altura) - 44.7;
    }
    else
    {
        pesoIdeal = (72.7 * altura) - 58;
    }

    printf("Seu peso ideal é %f\n", pesoIdeal);
}