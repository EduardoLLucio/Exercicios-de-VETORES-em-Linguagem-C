#include<stdio.h>
#define MAX 20

int main(){

char vetor[MAX];
int tam=0;
int i, valor;

    printf("Digite um numero\n");
    scanf("%s", &vetor);

    tam = strlen(vetor);

    for(i=tam-1;i>=0;i--){
    printf("%c", vetor[i]);
}

    }



