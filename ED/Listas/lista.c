#include "lista.h"
#include <stdio.h>

void criarLista(Lista *lista)
{
    lista->tamanho = 0;
}

int obterTamanho(Lista lista){
    return lista.tamanho;
}

int estaVazia(Lista lista){
    if(lista.dados == 0)
        return 1;
   return 0; 
}

void exibirDados(Lista lista)
{
    if(lista.tamanho == 0)
        printf("Lista vazia\n");
    else
    {
        for(int i = 0; i< lista.tamanho; i++)
        {
            printf("Id: %d, peso: %1.f\n", lista.dados[i].codigo,lista.dados[i].peso);
        }
    }
}

int incluirNoInicio(Lista *lista, Nodo dado)
{
    if(lista->tamanho == MAX_NODOS)
        return LISTA_CHEIA;
    
    for(int i = lista->tamanho; i>0;i--)
        lista->dados[i] =lista->dados[i-1];

    lista->dados[0] = dado;
    
    lista->tamanho++;
    return SUCESSO;
}

int incluirNoFim(Lista *lista, Nodo dado)
{
     if(lista->tamanho == MAX_NODOS)
        return LISTA_CHEIA;

        lista->dados[lista->tamanho] = dado;

        lista->tamanho++;
        return SUCESSO;
}

int incluirNaPosicao(Lista *lista, Nodo valor, int posicao){
    if(lista->tamanho == MAX_NODOS)
        return LISTA_CHEIA;
    
    if(posicao < 0 || posicao > (MAX_NODOS-1))
        return POSICAO_INVALIDA;

    for(int i=lista->tamanho; i>posicao; i--)
    {
        lista->dados[i] = lista->dados[i-1];
    }

    lista->dados[posicao] = valor;
    lista->tamanho++;
    return SUCESSO;
}

int incluirAntes(Lista *lista, Nodo valor, int codigo)
{
    if(lista->tamanho == MAX_NODOS)
        return LISTA_CHEIA;

    if(verificarSeExiste(*lista, codigo) == 0)
        return CODIGO_INEXISTENTE;

    //Obtém a posição do nodo no vetor;
    int posicao;
    for(int i = 0; i<lista->tamanho; i++)
    {
        if(lista->dados[i].codigo == codigo)
        {
            posicao = i;
            break;
        }
    }

    for (int i = lista->tamanho; i > posicao ; i--)
    {
        lista->dados[i] = lista->dados[i-1];
    }

    lista->dados[posicao] = valor;
    lista->tamanho++;
    return SUCESSO;    
}

int excluirDoInicio(Lista *lista)
{
    if(lista->tamanho == 0)
        return LISTA_VAZIA;

    for(int i = 0; i<lista->tamanho; i++)
    {
        lista->dados[i] = lista->dados[i+1];
    }

    lista->tamanho--;
    return SUCESSO;
}

int excluirDoFim(Lista *lista)
{
    if(lista->tamanho == 0)
        return LISTA_VAZIA;

    lista->tamanho--;
    return SUCESSO;
}

int excluirDaPosicao(Lista *lista, int posicao, Nodo *excluido)
{
    if(posicao < 0 || posicao > (MAX_NODOS-1))
    return POSICAO_INVALIDA;
    
    excluido->codigo = lista->dados[posicao].codigo;
    excluido->peso = lista->dados[posicao].peso;

    for(int i = posicao; i<lista->tamanho-1; i++)
    {
        lista->dados[i] = lista->dados[i+1];
    }

    lista->tamanho--;
    return SUCESSO;
}

int excluirPorCodigo(Lista *lista, int codigo, Nodo *excluido)
{
    int posicao;
    for(int i = 0; i<lista->tamanho; i++)
    {
        if(lista->dados[i].codigo == codigo)
        {
            posicao = i;
            break;
        }
    }
    
    excluirDaPosicao(lista, posicao, excluido);
}

int obterPorPosicao(Lista lista, int posicao, Nodo *valor)
{
    if(posicao < 0 || posicao > (MAX_NODOS-1))
        return POSICAO_INVALIDA;

    valor->codigo = lista.dados[posicao].codigo;
    valor->peso = lista.dados[posicao].peso;

    return SUCESSO;
}

int obterPorCodigo(Lista lista, int codigo, Nodo *valor)
{

    int posicao = -1;
    for(int i = 0; i<lista.tamanho; i++)
    {
        if(lista.dados[i].codigo == codigo)
        {
            posicao = i;
            break;
        }
    }

    if(posicao == -1)
        return POSICAO_INVALIDA;

    valor->codigo = lista.dados[posicao].codigo;
    valor->peso = lista.dados[posicao].peso;

    return SUCESSO;
}

int verificarSeExiste(Lista lista, int codigo)
{
    for(int i = 0; i<lista.tamanho; i++)
    {
        if(lista.dados[i].codigo == codigo)
        {
            return 1;
        }
    }
    return 0;
}