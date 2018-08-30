#include <stdio.h>

void main()
{
    float notaUm, notaDois;
    int resultadoRepeticao;

    do
    {
        do
        {
            printf("Insira a primeira nota: ");
            scanf("%f", &notaUm);

            if (notaUm < 0 || notaUm > 10)
                printf("Nota invalida\n");

        } while (notaUm < 0 || notaUm > 10);

        do
        {
            printf("Insira a segunda nota: ");
            scanf("%f", &notaDois);

            if (notaDois < 0 || notaDois > 10)
                printf("Nota invalida\n");

        } while (notaDois < 0 || notaDois > 10);

        printf("Media: %.2f\n", ((notaUm + notaDois) / 2));

        do
        {
            printf("Novo calculo (1.sim 2.nao): ");
            scanf("%i", &resultadoRepeticao);
        } while (resultadoRepeticao != 1 && resultadoRepeticao != 2);

    } while (resultadoRepeticao == 1);
}