#include <stdio.h>
#include "lista.c"
void printarLinha();

void main(){
    Lista lista;
    Nodo dado;

    //Criação
    criarLista(&lista);
    exibirDados(lista);
    printarLinha();

    //Incluir no início
    dado.codigo = 1657;
    dado.peso = 15;
    incluirNoInicio(&lista,dado);
    exibirDados(lista);
    printf("Tamanho: %d\n", obterTamanho(lista));
    printarLinha();

    //Incluir no fim
    dado.codigo = 164657;
    dado.peso = 15;
    incluirNoFim(&lista,dado);
    exibirDados(lista);
    printf("Tamanho: %d\n", obterTamanho(lista));
    printarLinha();

    //Incluir no início
    dado.codigo = 0;
    dado.peso = 99;
    incluirNoInicio(&lista,dado);
    exibirDados(lista);
    printf("Tamanho: %d\n", obterTamanho(lista));
    printarLinha();

    //Incluir na posição
    dado.codigo = 1;
    dado.peso = 66;
    incluirNaPosicao(&lista, dado, 1);
    exibirDados(lista);
    printf("Tamanho: %d\n", obterTamanho(lista));
    printarLinha();

    //Incluir antes, codigo inexistente
    int retorno = incluirAntes(&lista, dado, 157);
    if(retorno == CODIGO_INEXISTENTE)
        printf("Código informado não existe\n");
    printarLinha();

    //Incluir antes
    dado.codigo = 2;
    dado.peso = 77;
    incluirAntes(&lista, dado, 1);
    exibirDados(lista);
    printf("Tamanho: %d\n", obterTamanho(lista));
    printarLinha();

    //Excluir do início
    excluirDoInicio(&lista);
    exibirDados(lista);
    printf("Tamanho: %d\n", obterTamanho(lista));
    printarLinha();

     //Excluir do Fim
    excluirDoFim(&lista);
    exibirDados(lista);
    printf("Tamanho: %d\n", obterTamanho(lista));
    printarLinha();

    //Obter por posicao
    Nodo dadoPonteiro;
    obterPorPosicao(lista, 0, &dadoPonteiro);
    printf("Retorno da busca na posição [0]:\nCodigo: %d, peso: %.f\n", dadoPonteiro.codigo, dadoPonteiro.peso);
    printarLinha();

    obterPorCodigo(lista, 1, &dadoPonteiro);
    printf("Retorno da busca com código 1:\nCodigo: %d, peso: %.f\n", dadoPonteiro.codigo, dadoPonteiro.peso);
    printarLinha();

    excluirDaPosicao(&lista,1, &dadoPonteiro);
    printf("Dado excluído da posição[1]:\nCodigo: %d, peso: %.f\n", dadoPonteiro.codigo, dadoPonteiro.peso);
    printarLinha();

    excluirPorCodigo(&lista, 1657, &dadoPonteiro);
    printf("Dado excluído com o código 1657:\nCodigo: %d, peso: %.f\n", dadoPonteiro.codigo, dadoPonteiro.peso);
    printarLinha();
    printf("Dados que restaram: \n");
    exibirDados(lista);
}

void printarLinha(){
    printf("--------------------------\n");
}