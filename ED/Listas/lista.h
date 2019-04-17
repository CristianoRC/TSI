#define MAX_NODOS 5
#define SUCESSO 0
#define LISTA_VAZIA 1
#define LISTA_CHEIA 2
#define POSICAO_INVALIDA 3
#define CODIGO_INEXISTENTE 4

typedef struct 
{
    int codigo;
    float peso;
} Nodo;

typedef struct{
    int tamanho;
    Nodo dados[MAX_NODOS];
} Lista;

void criarLista(Lista *lista);

void exibirDados(Lista lista);

int excluirDoInicio(Lista *lista);

int excluirDoFim(Lista *lista);

int verificarSeExiste(Lista lista, int codigo);

int incluirNaPosicao(Lista *lista, Nodo valor, int posicao);

int incluirAntes(Lista *lista, Nodo valor, int codigo);

int incluirNoFim(Lista *lista, Nodo dado);

int obterTamanho(Lista lista);

int estaVazia(Lista lista);

int incluirNoInicio(Lista *lista, Nodo dado);

int obterPorPosicao(Lista lista, int posicao, Nodo *valor); 

int obterPorCodigo(Lista lista, int codigo, Nodo *valor);

int excluirDaPosicao(Lista *lista, int posicao, Nodo *excluido);

int excluirPorCodigo(Lista *lista, int codigo, Nodo *excluido);