#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int main(){
    int valor;
    int i;
    int vetor[MAX];
    int tam=0;
    int ma, mi;
    int contci = 0, contba = 0;
    float pc, pb;
    float meio;

    printf("Digite um numero\n");
    scanf("%d", &valor);

    ma=valor;
    mi=valor;

    while(valor>=0){
        if(valor>ma){
            ma = valor;
        }
        if(valor<mi){
            mi = valor;
        }
        vetor[tam] = valor;
        tam++;

        printf("Digite mais um valor");
        scanf("%d", &valor);
    }

    printf("tam..: %d\n", tam);
    printf("Min..: %d\n", mi);
    printf("Max..: %d\n", ma);

     meio  = (ma + mi) /2.0;
     printf("meio %f\n", meio);

    for(i=0; i<tam;i++){
        if(vetor[i] > meio){
            contci++;
        }
          if(vetor[i] < meio){
            contba++;
    }
}

pc= (float)contci/tam*100;
pb= (float)contba/tam*100;

printf("menor meio %d numero %.lf\n",contci, pc);
printf("maior meio %d numero %.lf\n", contba, pb);


}

