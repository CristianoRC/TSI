#include <stdio.h>
#include "fila.c"

void main()
{
    Fila fila;
    Nodo dado;
    Nodo dadoRemovido;
    criarFila(&fila);

    int resultRemove = desenfileirar(&fila, &dadoRemovido);
    if(resultRemove == FILA_VAZIA)
        printf("\nFila vazia\n\n");

    for (int i = 6; i > 0; i--)
    {
        dado.id = i;
        int result = enfileirar(&fila, dado);
        if(result == SUCESSO)
            printf("Inserido\n");
        else
            printf("Fila Cheia\n");
    }

    printf("\n\n");
    exibir(fila);

    for (int i = 0; i < MAX_NODOS -1; i++)
    {
        desenfileirar(&fila, &dadoRemovido);
        printf("Dado removido: %d\n", dadoRemovido.id);
    }
    

    for (int i = 5; i > 0; i--)
    {
        dado.id = i;
        int result = enfileirar(&fila, dado);
        if(result == SUCESSO)
            printf("\nInserido");
        else
            printf("\nFila Cheia");

        printf("\n");
        exibir(fila);   
    }
}