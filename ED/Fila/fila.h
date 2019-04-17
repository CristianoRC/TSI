#define MAX_NODOS 5
#define SUCESSO 0
#define FILA_VAZIA 1
#define FILA_CHEIA 2
#define NUMERO_INEXISTENTE 3 

typedef struct {
 int id;
} Nodo; 

typedef struct
{
    Nodo dados[MAX_NODOS];
    int frente, re;
} Fila;

void criarFila(Fila *fila);

int enfileirar(Fila *fila, Nodo dado);

int desenfileirar(Fila *fila, Nodo *dadoRemovido);

void exibir(Fila fila);