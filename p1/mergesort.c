#include<stdio.h>
#include<math.h>
#include<stdlib.h>


void merge(int *V, int inicio, int meio, int fim);
void mergeSort (int *V, int inicio, int fim);


int main(){
    int Vetor[10] = {5, 20, 1, 95, 80, 75, 54, 3, 10,7};
    int i;

    for (i=0 ; i<= 10; i++){
         printf(" %d", Vetor[i]);
    }
    printf("\n\n");

    mergeSort(Vetor,0, 9);
    for (i=0 ; i<= 10; i++){
         printf(" %d", Vetor[i]);
    }


}


void merge(int *V, int inicio, int meio, int fim){
    int *temp, p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2 = 0;
    tamanho = fim-inicio + 1;
    p1 = inicio;
    p2 = meio+1;
    temp = (int *) malloc(tamanho*sizeof(int));
    if(temp != NULL){
        for(i=0; i<tamanho; i++){
            if(!fim && !fim2){
                if(V[p1] < V[p2])
                    temp[i] = V[p1++];
                else
                    temp[i] = V[p2++];

                if(p1>meio) fim1=1;
                if(p2>fim) fim2=1;
            }else{
                if(!fim1)
                    temp[i]=V[p1++];
                else
                    temp[i]=V[p2++];
            }
        }
        for(j=0, k=inicio; j<tamanho; j++, k++)
            V[k] = temp[j];
    }
    free(temp);
}
void mergeSort (int *V, int inicio, int fim){
    int meio;
    if(inicio < fim){
        meio = floor((inicio + fim)/2);
        //chama a função
        mergeSort(V, inicio, meio);
        mergeSort(V, meio+1, fim);
        //combina as 2 metades de forma ordenad
        merge(V, inicio, meio, fim);

    }
}
