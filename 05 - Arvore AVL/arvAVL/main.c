#include <stdio.h>
#include <stdlib.h>
#include "arvoreAVL.h"

int main(){
    int x;
    arvAVL *raiz;


    raiz = cria_arvAVL();

    if(vazia_arvAVL(raiz)){
        printf("A arvore esta vazia.");
    }else{
        printf("A arvore possui elementos.");
    }
    printf("\n");


    x = insere_arvAVL(raiz, 100);
    if(x){
        printf("Elemento inserido com sucesso!\n");
    }else{
        printf("Erro, nao foi possivel inserir o elemento.\n");
    }

    x = insere_arvAVL(raiz, 140);
     if(x){
        printf("Elemento inserido com sucesso!\n");
    }else{
        printf("Erro, nao foi possivel inserir o elemento.\n");
    }
    x = insere_arvAVL(raiz, 160);
     if(x){
        printf("Elemento inserido com sucesso!\n");
    }else{
        printf("Erro, nao foi possivel inserir o elemento.\n");
    }
    x = insere_arvAVL(raiz, 130);
     if(x){
        printf("Elemento inserido com sucesso!\n");
    }else{
        printf("Erro, nao foi possivel inserir o elemento.\n");
    }
    x = insere_arvAVL(raiz, 150);
     if(x){
        printf("Elemento inserido com sucesso!\n");
    }else{
        printf("Erro, nao foi possivel inserir o elemento.\n");
    }
    x = insere_arvAVL(raiz, 110);
     if(x){
        printf("Elemento inserido com sucesso!\n");
    }else{
        printf("Erro, nao foi possivel inserir o elemento.\n");
    }
    x = insere_arvAVL(raiz, 120);
     if(x){
        printf("Elemento inserido com sucesso!\n");
    }else{
        printf("Erro, nao foi possivel inserir o elemento.\n");
    }

    x = altura_arvAVL(raiz);
    printf("Altura da arvore: %d\n", x);

    x = totalNO_arvAVL(raiz);
    printf("Total de nos na arvore: %d\n", x);

    printf("Visitando em pre-Ordem:\n");
    preOrdem_arvAVL(raiz);

    printf("\nVisitando em-Ordem:\n");
    emOrdem_arvAVL(raiz);

    printf("\nVisitando em pos-Ordem:\n");
    posOrdem_arvAVL(raiz);

    x = remove_arvAVL(raiz, 130);
    if(x){
        printf("Elemento removido com sucesso!");
    }else{
        printf("Erro, nao foi possivel remover o elemento.");
    }

    printf("\nVisitando em pos-Ordem depois da remocao:\n");
    posOrdem_arvAVL(raiz);

    printf("\nBusca na Arvore AVL\n");
    if(consulta_arvAVL(raiz, 140)){
        printf("\nConsulta realizada com sucesso!");
    }else{
        printf("\nElemento nao encontrado...");
    }
    printf("\n");

    //aula AVL




    liberar_arvAVL(raiz);



}
