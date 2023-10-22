#include<stdio.h>

void Ordena_bubbleSort(int *v, int n);

int main(){
    int i, v[] = {120, 150, 110, 130, 100, 160, 140, 190, 180, 170};
    printf("Vetor desordenado: ");
    for(i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }
    int ordenado;
    Ordena_bubbleSort(v, 10);

    printf("\n\nOrdenado por metodo bubbleSort:\n\n");

    printf("Vetor ja ordenado: ");
    for(i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }
    printf("\n\n");
}

void Ordena_bubbleSort(int *v, int n){
    int i, continua, aux, fim = n;
    do{
        continua = 0;
        for(i = 0; i < fim - 1; i++){
            if(v[i] > v[i+1]){
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                continua = i;
            }
        }
        fim --;
    }while(continua != 0);

}
