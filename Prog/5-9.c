#include <stdio.h>

void main()
{
    float altura, peso;
    int pesoValido, alturaValida; //0 invalido; 1 válido

    printf("Insira o peso(em metros): ");
    scanf("%f", &altura);

    printf("Insira o peso(em quilograma): ");
    scanf("%f", &peso);

    //Validação do peso e altura
    if ((peso >= 70 && peso <= 80))
        pesoValido = 1;
    else
        pesoValido = 0;

    if (altura >= 1.75 && altura <= 1.90)
        alturaValida = 1;
    else
        alturaValida = 0;

    if (pesoValido == 1 && alturaValida == 1)
    {
        printf("ACEITO\n");
    }
    else if (pesoValido == 1 && alturaValida == 0)
    {
        printf("RECUSADO POR ALTURA\n");
    }
    else if (pesoValido == 0 && alturaValida == 1)
    {
        printf("RECUSADO POR PESO\n");
    }
    else
    {
        printf("TOTALMENTE RECUSADO\n");
    }
}