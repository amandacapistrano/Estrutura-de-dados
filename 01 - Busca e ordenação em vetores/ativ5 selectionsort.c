#include<stdio.h>
void Ordena_selectionSort(int *v, int n);

int main(){
    int i, v[] = {120, 150, 110, 130, 100, 160, 140, 190, 180, 170};

    printf("Vetor desordenado: ");
    for(i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }

    printf("\n\nOrdenado por metodo selectionSort:\n\n");

    Ordena_selectionSort(v, 10);

    printf("Vetor ja ordenado: ");
    for(i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }
    printf("\n\n");
}

void Ordena_selectionSort(int *v, int n){
    int i, j, menor, troca;
    for(i = 0; i < n - 1; i++){
        menor = i;
        for(j = i + 1; j < n; j++){
            if(v[j] < v[menor]){
                menor = j;
            }
        }
        if(i != menor){
            troca = v[i];
            v[i] = v[menor];
            v[menor] = troca;
        }
    }
}
