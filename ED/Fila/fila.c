#include "fila.h"

void criarFila(Fila *fila)
{
    fila->frente = 0;
    fila->re = -1;
}

void exibir(Fila fila)
{
    for(int i = fila.frente; i<= fila.re; i++)
    printf("Fila[%d]=%d\n", i,fila.dados[i].id);
}

int enfileirar(Fila *fila, Nodo dado)
{
    if(fila->re == MAX_NODOS -1 && fila->frente == 0)
        return FILA_CHEIA;

    int tamanho = fila->re - fila->frente + 1;
    
    if(fila->re == MAX_NODOS -1)
    {
        for (int i = 0; i < tamanho; i++)
        {
            fila->dados[i] = fila->dados[fila->frente - i];
        }
        

        fila->re = tamanho - 1;
        fila->frente = 0;
    }
    
    fila->dados[fila->re + 1] = dado;
    fila->re++;

    return SUCESSO;
}

int desenfileirar(Fila *fila, Nodo *dadoRemovido)
{
    if(fila->re ==-1)
    return FILA_VAZIA;

    dadoRemovido->id = fila->dados[fila->frente].id;
    fila->frente++;
    return SUCESSO;
}