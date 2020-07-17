#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int main (){
int vetor[MAX];
int valor, tam=0, i, pos=-1, busc;

printf("digite um numero ");
scanf("%d", &valor);

while(valor !=0){
    vetor[tam] = valor;
    tam++;

    printf("digite um numero");
    scanf("%d", &valor);

    }
     printf("digite um nvalor para busca");
    scanf("%d", &busc);

    for(i=0;i<tam;i++){

        if(busc==vetor[i]){
             printf("encontado valor %d na posicao %d\n", busc, i );
             pos = i;
        }

    }
    if(pos==-1){
        printf("Não foi encontrado o valor %d", busc);
    }
}
