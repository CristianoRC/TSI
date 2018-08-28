#include <stdio.h>

void main()
{
    float saldoContaCorrente, saldoPoupanca, limiteCorrente, limitePoupanca;

    printf("Digite o saldo da conta corrente: ");
    scanf("%f", &saldoContaCorrente);

    printf("Digite o saldo da poupanca: ");
    scanf("%f", &saldoPoupanca);

    if (saldoContaCorrente <= 1000 && saldoPoupanca <= 1000)
    {
        printf("SEM CONTA ESPECIAL\n");
    }
    else
    {

        if (saldoContaCorrente > saldoPoupanca)
        {
            limiteCorrente = saldoContaCorrente * 2;
            limitePoupanca = saldoPoupanca * 3;
        }
        else
        {
            limiteCorrente = saldoContaCorrente * 3;
            limitePoupanca = saldoPoupanca * 2;
        }

        if (limiteCorrente > limitePoupanca)
        {
            printf("%f\n", limiteCorrente);
        }
        else
        {
            printf("%f\n", limitePoupanca);
        }
    }
}