#include <stdio.h>

int perguntarNumeroDeTermos();

void main()
{
    int termos;
    double denominador = 3;
    int soma = 0;

    double pi = 4;
    termos = perguntarNumeroDeTermos();

    while (termos > 0)
    {

        for (int i = 0; i < termos; i++)
        {
            if (soma == 0)
            {
                pi -= (4 / denominador);
                soma = 1;
            }
            else
            {
                pi += (4 / denominador);
                soma = 0;
            }

            denominador += 2;
        }

        printf("Pi: %lf\n", pi);

        termos = perguntarNumeroDeTermos();
    };
}

int perguntarNumeroDeTermos()
{
    int termos;

    printf("\nInsira o numer de termos da sequencia: ");
    scanf("%d", &termos);

    return termos;
}