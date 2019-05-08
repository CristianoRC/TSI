#include <stdio.h>
#include <stdlib.h>
typedef struct nodo Nodo;

struct nodo {
    int info;
    Nodo *prox;
};

typedef struct {Nodo *topo;} Pilha;

void iniciar(Pilha *pilha);

int empilha(Pilha *pilha, Nodo nodo);

int desempilha(Pilha *pilha, Nodo *nodo);

void percorrerTodos(Pilha pilha);