#include<stdio.h>
void OrdenaOscilante_bubbleSort(int *v, int n);

int main(){
    int i, v[] = {120, 150, 110, 130, 100, 160, 140, 190, 180, 170};
    int n = 10;
    printf("Vetor desordenado: ");
    for(i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }
    OrdenaOscilante_bubbleSort(v, n);

    printf("\n\nVetor ordenado: ");
    for(i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }
}

void OrdenaOscilante_bubbleSort(int *v, int n){
    int i, continua, aux, inicio = 0, fim = n;
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
        fim--;
        for(i = fim - 1; i > inicio; i--){
            if(v[i] < v[i-1]){
                aux = v[i];
                v[i] = v[i-1];
                v[i-1] = aux;
                continua = i;
            }
        }
        inicio ++;
    }while(continua != 0);

}
