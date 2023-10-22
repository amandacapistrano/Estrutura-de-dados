#include<stdio.h>

void Ordena_insertionSort(int *v, int n);

int main(){
 int i, v[] = {120, 150, 110, 130, 100, 160, 140, 190, 180, 170};

    printf("Vetor desordenado: ");
    for(i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }

    printf("\n\nOrdenado por metodo insertionSort:\n\n");

    Ordena_insertionSort(v, 10);

    printf("Vetor ja ordenado: ");
    for(i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }
    printf("\n\n");
}

void Ordena_insertionSort(int *v, int n){
    int i, j, aux;
    for(i = 0; i < n; i++){
        aux = v[i];
        for(j = i; (j > 0) && (aux < v[j-1]); j--){
            v[j] = v[j-1];
        }
        v[j] = aux;
    }
}
