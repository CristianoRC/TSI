#include <stdio.h>

void main()
{
    int valorInformado;

    printf("Insira m valor: ");
    scanf("%i", &valorInformado);

    if (valorInformado % 2 == 0)
        printf("O numero %i he par\n", valorInformado);
    else
        printf("O numero %i he impar\n", valorInformado);
}