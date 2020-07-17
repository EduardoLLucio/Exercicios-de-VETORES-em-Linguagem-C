#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int main (){
int vetor[MAX];
int valor, tam=0, i, j, aux;

printf("digite um numero ");
scanf("%d", &valor);

while(valor !=0){
    vetor[tam] = valor;
    tam++;

    printf("digite um numero");
    scanf("%d", &valor);

    }
        for(i=tam-1;i>=0;i--){
                printf(" %d", vetor[i]);
        }
    }
