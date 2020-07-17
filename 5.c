#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int main (){
int vetor[MAX];
int valor, tam=0, i, j, aux;

printf("digite um numero ");
scanf("%d", &valor);

while(valor >=0){
    vetor[tam] = valor;
    tam++;

    printf("digite um numero");
    scanf("%d", &valor);

    }

    for(i=0;i<tam;i++){

        for(j=i+1;j<tam;j++){
                if(vetor[i]>vetor[j]){
           aux=vetor[i];
           vetor[i]=vetor[j];
           vetor[j]=aux;

        }
    }
    }
        for(i=0;i<tam;i++){
                printf(" %d", vetor[i]);
        }
    }
