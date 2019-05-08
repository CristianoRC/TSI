#include <stdio.h>
#include <stdlib.h>
#include "pilha.c"

void main(){
    Pilha pilha;
    Nodo nodoTemp;
    Nodo *nodoRetorno;
    nodoTemp.prox = NULL;
    nodoTemp.info = 15;

    iniciar(&pilha);
    percorrerTodos(pilha);
    empilha(&pilha, nodoTemp);

    nodoTemp.info = 159;
    empilha(&pilha, nodoTemp);

    nodoTemp.info = 5987;
    empilha(&pilha, nodoTemp);

    nodoTemp.info = 19;
    empilha(&pilha, nodoTemp);

    nodoTemp.info = 10;
    empilha(&pilha, nodoTemp);

    nodoTemp.info = 55;
    empilha(&pilha, nodoTemp);
    
    percorrerTodos(pilha);

    printf("\n-------------------\n");

    desempilha(&pilha, nodoRetorno);
    desempilha(&pilha, nodoRetorno);
    desempilha(&pilha, nodoRetorno);
    desempilha(&pilha, nodoRetorno);
    desempilha(&pilha, nodoRetorno);
    desempilha(&pilha, nodoRetorno);
    percorrerTodos(pilha);

}