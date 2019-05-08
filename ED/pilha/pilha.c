#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void iniciar(Pilha *pilha)
{
    pilha->topo = NULL;
}

int empilha(Pilha *pilha, Nodo nodo)
{
    Nodo *pNodo = (Nodo *) malloc (sizeof (Nodo));
    pNodo->info = nodo.info;

    if(pilha->topo == NULL)
    {
        pNodo->prox = NULL;
    }
    else
    {
        pNodo->prox = pilha->topo;
    }
    
    pilha->topo = pNodo;


    return 1;
}


int desempilha(Pilha *pilha, Nodo *nodo)
{
    if(pilha->topo != NULL){
        if(pilha->topo->prox == NULL){
            free(pilha->topo);
            pilha->topo =  NULL;
        }
        else
        {
            nodo = pilha->topo;
            
            pilha->topo = pilha->topo->prox;

            free(nodo);
        }
        
    }

    return 1;
}

void percorrerTodos(Pilha pilha){
    if(pilha.topo != NULL)
    {
        Nodo *nodoTemp = pilha.topo;
        do
        {
            printf("Dado: %d\n", nodoTemp->info);
            nodoTemp = nodoTemp->prox;
        } while (nodoTemp->prox != NULL);

        printf("Dado: %d\n", nodoTemp->info);
    }
    
}