#include <stdio.h>
#include <stdlib.h>
#define MAX 20
#include <stdbool.h>

int main(){
    int vetor[MAX];
    int valor, tam=0, i, j;
    bool rep;


    printf("Digite um valor positivo para continuar");
    scanf("%d", &valor);

    while(valor>=0){
    vetor[tam]= valor;
    tam++;

    printf("continue digitando um valor de 0 a 9 para continuar");
    scanf("%d", &valor);
    }

    for(i=0;i<tam;i++){
        rep= false;
        for(j=0;j<i;j++){
            if(vetor[i]==vetor[j]){
                rep= true;
                break;
            }
        }
    if(!rep){
        printf("Valor..: %d\n", vetor[i]);
    }
    }

return 0;
}
