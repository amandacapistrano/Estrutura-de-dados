#include <stdio.h>
#include <stdlib.h>
#include "arvoreBinaria.h"

int main()
{
    int x;
    ArvBin *raiz;

    raiz = cria_arvBin();

    x = insere_arvBin(raiz, 150);
    x = insere_arvBin(raiz, 110);
    x = insere_arvBin(raiz, 100);
    x = insere_arvBin(raiz, 130);
    x = insere_arvBin(raiz, 120);
    x = insere_arvBin(raiz, 140);
    x = insere_arvBin(raiz, 160);

    if(vazia_arvBin(raiz)){
        printf("A arvore esta vazia.");
    }else{
        printf("A arvore possui elementos.");
    }
    printf("\n");

    x = altura_arvBin(raiz);
    printf("Altura da arvore: %d\n", x);

    x = totalNO_arvBin(raiz);
    printf("Total de nos na arvore: %d\n", x);

    printf("Visitando em pre-Ordem:\n");
    preOrdem_arv(raiz);

    printf("\nVisitando em-Ordem:\n");
    emOrdem_arvBin(raiz);

    printf("\nVisitando em pos-Ordem:\n");
    posOrdem_arvBin(raiz);

    x = remove_arvBin(raiz, 100);

    printf("\nVisitando em pos-Ordem depois da remocao:\n");
    posOrdem_arvBin(raiz);

    printf("\nBusca na Arvore Binaria:\n");
    if(consulta_arvBin(raiz, 140)){
        printf("\nConsulta realizada com sucesso!");
    }else{
        printf("\nElemento n�o encontrado...");
    }
    printf("\n");
    liberar_arvBin(raiz);
}
