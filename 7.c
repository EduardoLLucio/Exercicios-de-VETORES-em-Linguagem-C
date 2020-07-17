#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>>
#define MAX 10
int main()
{
    int num[MAX];
    int rep[MAX];
    int par[MAX];
    int impar[MAX];
    int i, contpar=0, contimpar=0;
    int x;
    bool rept;

    for(i=0;i<MAX;i++){

        printf("Digite um numero");
        scanf("%d", &num[i]);

    }

    for(i=0;i<MAX;i++){

        if(num[i] % 2){
                 impar[contimpar]= num[i];
                contimpar++;
        }else{
              par[contpar] = num[i];
                contpar++;

        }

    }

    printf("\n..:..:..: Todos os Valores ..:..:..:\n");
    for(i=0;i<MAX;i++){
            rept = false;
     for(x=0;x<i;x++){
           if(num[i] == num[x]){
                rept = true;
           break;
           }
       }
        if(!rept){
        printf("** Numero Digitado..: %d\n\n ",num[i]);
        }

    }
      printf("\n..:..:..: Todos os Valores Pares ..:..:..:\n\n");
      for(i=0;i<contpar;i++){
            rept = false;
      for(x=0;x<i;x++){
           if(par[i] == par[x]){
                rept = true;
           break;
           }
        }
        if(!rept){
        printf("** Numeros Pares..: %d\n\n ",par[i]);
        }

    }
    printf("\n..:..:..: Todos os Valores Impares ..:..:..:\n");
      for(i=0;i<contimpar;i++){
                   rept = false;
      for(x=0;x<i;x++){
           if(impar[i] == impar[x]){
                rept = true;
           break;
           }
        }
        if(!rept){
        printf("** Numeros Impares..: %d\n\n ", impar[i]);
        }

}
}
