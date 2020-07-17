#include <stdio.h>
#include <string.h>
#define MAX 20

int main() {
   char vetor[MAX];
   int valor, i, tam, soma=0;
   int x, v, y;

   printf("informe o valor ");
   scanf("%s", &vetor);

   valor = atoi(vetor);
   if (valor<=9999) {

      printf("numero...: %s\n", vetor);

      tam = strlen(vetor);


      for (i=0; i<tam; i++) {
          x = round(pow(10,i));
          y = round(pow(10,i+1));
         v = valor%y/x;

         soma += v;
      }
      printf("\nsoma %d\n", soma);

   }else{

      printf("seu valor esta incorreto");

   }

}
