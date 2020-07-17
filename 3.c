#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int main (){
int vetor[MAX];
int valor, tam=0, i, acmed;
float som=0;
float med = 0.0;

printf("digite um numero ");
scanf("%d", &valor);

while(valor !=0){
    vetor[tam] = valor;
    tam++;

    printf("digite um numero");
    scanf("%d", &valor);


    }

    for(i=0;i<tam;i++){
        som = som + vetor[i];
        //med = som/tam;
        med = som/tam;



    }

        printf("\n A media...: %.2f\n",med);

 for(i=0;i<tam;i++){
    if(vetor[i]>med){
 printf(" Valores maiores que a media %d\n",vetor[i]);
        }
}

    }






